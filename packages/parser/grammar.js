module.exports = grammar({
  name: 'ccini',

  extras: ($) => [$.block_comment, $.comment, /\s/],

  externals: ($) => [
    $._newline,
    $._indent,
    $._dedent,

    // Mark comments as external tokens so that the external scanner is always
    // invoked, even if no external token is expected. This allows for better
    // error recovery, because the external scanner can maintain the overall
    // structure by returning dedent tokens whenever a dedent occurs, even
    // if no dedent is expected.
    $.comment,
    $.block_comment,
  ],

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => 'hello',
  },
});
