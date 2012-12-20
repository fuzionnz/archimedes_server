(function ($) {
  $(document).ready(function () {
    $('.field-name-field-git-repositories input.form-text, .field-name-field-common-hash input.form-text').click(function () {
      if (!$(this).hasClass('git-selected')) {
        $(this).addClass('git-selected');
        $(this).select();
      }
    }).blur(function () {
      $(this).removeClass('git-selected');
    });
  });
})(jQuery);
