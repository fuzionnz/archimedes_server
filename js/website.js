(function ($) {
  $(document).ready(function () {
    $('table.archimedes-graph').each(function () {
      // Hide the table as it doesn't need to be seen.
      $(this).hide();

      // Build a placeholder for the graph.
      var placeholder_id = $(this).attr('id') + '-placeholder';
      $(this).parents('.field').children('.field-label').before('<div id="' + placeholder_id + '" class="graph-placeholder field-label"></div>');

      // Initialize the graph.
      var r = Raphael(placeholder_id);
      var x = [], y = [];

      x = $(this).find('thead th').map(function () {
        return $(this).text();
      }).toArray();

      // Remove the first value as it references the labels column.
      x.shift();

      // Built the y series of lines for each row in the table.
      $(this).find('tbody tr').each(function () {
        y.push($(this).find('td').map(function () {
          return $(this).text();
        }).toArray());
      });

      r.linechart(0, 0, 75, 18, x, y, {smooth: true});

    });
  });
})(jQuery);
