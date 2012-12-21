<?php
/**
 * @file
 * Email functions for the the server to check an inbox for documents.
 */

/**
 * Open up the archimedes email inbox.
 */
function archimedes_server_open_inbox($server, $port, $user, $pass, $ssl = FALSE) {
  $mailbox = strtr('{%server:%port/%path}INBOX', array(
    '%server' => $server,
    '%port' => $port,
    '%path' => $ssl ? 'pop3/ssl/novalidate-cert' : 'pop3/notls',
  ));
  return imap_open(imap_utf7_encode($mailbox), $user, $pass);
}

/**
 * Reads the configured inbox and builds array of attached XML.
 */
function archimedes_server_check_inbox() {
  $mbox = archimedes_server_open_inbox(
    variable_get('archimedes_mail_server', ''),
    variable_get('archimedes_mail_port', '110'),
    variable_get('archimedes_mail_user', ''),
    variable_get('archimedes_mail_password', ''),
    variable_get('archimedes_mail_ssl', FALSE)
  );
  if (!$mbox || (!$pkey = variable_get('archimedes_key_private', FALSE))) {
    watchdog('Archimedes', "Cannot check inbox, no private is set to decrypt email attachments.", array(), WATCHDOG_ERROR);
    return array();
  }

  // Read each message in inbox.
  $data = array();
  for ($i = 1; $i <= imap_num_msg($mbox); $i++) {
    $struct = imap_fetchstructure($mbox, $i);
    $header = imap_header($mbox, $i);
    watchdog('Archimedes', 'Received Email: %subject [%from]', array(
      '%subject' => $header->subject,
      '%from' => $header->fromaddress,
    ));
    if (!isset($struct->parts)) {
      watchdog('Archimedes', 'Email from %from is invalid with subtype "%type". Cannot import', array(
        '%from' => $header->fromaddress,
        '%type' => $struct->subtype,
      ));
      imap_delete($mbox, $i);
      continue;
    }

    $id = 1;
    $xml = '';
    $ekey = FALSE;
    foreach ($struct->parts as $section) {
      $sect = imap_fetchbody($mbox, $i, $id);

      // Decode message if encoded
      // 3 = BASE64
      if ($section->encoding == 3) {
        $sect = base64_decode($sect);
      }
      // 4 = QUOTED-PRINTABLE
      elseif ($section->encoding == 4) {
        $sect = quoted_printable_decode($sect);
      }

      // Check for xml attachment.
      if ($section->subtype == 'XML' && $section->disposition == 'ATTACHMENT') {
        $xml = $sect;
      }
      // Encrypted messages will contain section starting 'EKEY:'
      elseif (substr($sect, 0, 5) == 'EKEY:') {
        $ekey = substr($sect, 6);
      }
      $id++;
    }
    if (variable_get('archimedes_server_delete_emails', TRUE)) {
      imap_delete($mbox, $i);
    }
    // If there is no EKEY then the attachment is either not encrypted or
    // not possible to decrypt. Therfore, we can not go any further.
    if (!$ekey) {
      continue;
    }
    if (!$xml = archimedes_server_decrypt($xml, $ekey)) {
      $header = imap_headerinfo($mbox, $i);
      watchdog("Archimedes", "An encryted update was recieved from %from, but Archimedes Server was unable to decrypt it. It is likely the saved public key is incorrect.", array('%from' => $header->fromaddress), WATCHDOG_ERROR);
      continue;
    }
    watchdog('Archimedes', 'Mail from @sender was successfully decrypted', array('@sender' => $header->fromaddress));
    $data[] = $xml;
  }
  if (variable_get('archimedes_server_delete_emails', TRUE)) {
    // Uncomment to delete from mailbox. Leave commented during testing.
    imap_expunge($mbox);
    watchdog('Archimedes', "Inbox cleared");
  }
  imap_close($mbox);

  return $data;
}
