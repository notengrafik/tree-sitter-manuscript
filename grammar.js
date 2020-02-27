const PREC = {
  COMMENT: 1,
  STRING: 2,
  BINARY: 11,
  UNARY: 13,
  CALL: 14,
  ASSIGNMENT: 20,
};

const identifierPattern = '[a-zA-Z_][a-zA-Z0-9_]*';


module.exports = grammar({
  name: 'manuscript',

  extras: $ => [
    /\s/,
    $.comment,
  ],

  rules: {
    program: $ => seq(
      optional('\uFEFF'), // UTF-16 BOM
      choice(
        repeat($.mss_function), // regular .mss files
        $.plg_function
      )
    ),

    // This is how functions are defined in Tido style .mss files
    mss_function: $ => seq(
      'function',
      $.identifier,
      $.parameter_list,
      $.statement_block
    ),

    // This is the entry point for functions in .plg files
    plg_function: $ => seq(
      $.parameter_list,
      $.statement_block
    ),

    identifier: $ => new RegExp(identifierPattern),

    parameter_list: $ => seq(
      '(',
      commaSep($.identifier),
      ')'
    ),

    statement_block: $ => seq(
      '{',
      repeat1($._statement),
      '}'
    ),

    _statement: $ => choice(
      $.assignment_statement,
      $.call_statement,
      $.if_statement,
      $.switch_statement,
      $.for_statement,
      $.for_each_statement,
      $.while_statement,
      $.return_statement,
      $.empty_statement,
    ),

    assignment_statement: $ => prec.right(PREC.ASSIGNMENT, seq(
      choice(
        $.identifier,
        $.indirection_expression,
        $.field_expression,
        $.indirection_field_expression,
        $.subscript_expression,
        $.user_property_expression
      ),
      '=',
      $._expression,
      ';'
    )),

    call_statement: $ => seq(
      $.call_expression,
      ';'
    ),

    if_statement: $ => seq(
      'if',
      $.parenthesized_expression,
      $.statement_block,
      optional(seq(
        'else',
        $.statement_block
      ))
    ),

    switch_statement: $ => seq(
      'switch',
      $.parenthesized_expression,
      '{',
      repeat($.switch_case),
      optional($.switch_default),
      '}'
    ),

    switch_case: $ => seq(
      'case',
      $._expression,
      $.statement_block
    ),

    switch_default: $ => seq(
      'default',
      $.statement_block
    ),

    for_statement: $ => seq(
      'for',
      $.identifier,
      '=',
      $._expression,
      'to',
      $._expression,
      optional(seq('step', $._expression)),
      $.statement_block
    ),

    for_each_statement: $ => seq(
      'for',
      'each',
      optional($.identifier),
      $.identifier,
      'in',
      $._expression,
      $.statement_block
    ),

    empty_statement: $ => seq(';'),

    while_statement: $ => seq(
        'while',
        $.parenthesized_expression,
        $.statement_block
    ),

    return_statement: $ => seq(
      'return',
      $._expression,
      ';'
    ),

    _expression: $ => choice(
      $.unary_expression,
      $.binary_expression,
      $.subscript_expression,
      $.call_expression,
      $.field_expression,
      $.indirection_field_expression,
      $.user_property_expression,
      $.indirection_expression,
      $.identifier,
      $.number_literal,
      $.string_literal,
      $.true,
      $.false,
      $.null,
      $.char_literal,
      $.parenthesized_expression
    ),

    unary_expression: $ => prec.left(PREC.UNARY, seq(
      choice('not', '-'),
      $._expression
    )),

    binary_expression: $ => prec.left(PREC.BINARY, seq(
      $._expression,
      choice('or', 'and', '+', '-', '*', '/', '%', '&', '=', '!=', '>', '<', '<=', '>='),
      $._expression
    )),

    subscript_expression: $ => seq(
      choice($.identifier, $.field_expression, $.call_expression),
      '[',
      $._expression,
      ']'
    ),

    call_expression: $ => prec(PREC.CALL, seq(
      choice(
        $.identifier,
        $.field_expression,
        $.indirection_field_expression,
        $.indirection_expression
      ),
      $.argument_list
    )),

    field_expression: $ => seq(
        choice(
          $.identifier,
          $.field_expression,
          $.subscript_expression,
          $.call_expression,
          $.indirection_expression,
          $.indirection_field_expression
        ),
        '.',
        $.identifier
    ),

    indirection_field_expression: $ => seq(
      choice($.identifier, $.field_expression, $.subscript_expression),
      '.',
      $.indirection_expression
    ),

    user_property_expression: $ => seq(
        choice($.identifier, $.field_expression, $.subscript_expression, $.indirection_expression),
        '.',
        '_property',
        ':',
        $.identifier
    ),

    indirection_expression: $ => new RegExp('@' + identifierPattern),

    argument_list: $ => seq('(', commaSep($._expression), ')'),

    number_literal: $ => /\d+(\.\d+)?/,

    _char: $ => choice(
      /[^'"\\]/,
      /\\[^"]/
    ),

    string_literal: $ => seq(
      "'",
      repeat(choice(
        token.immediate(prec(PREC.STRING, repeat1(/[^'"\\]/))),
        token.immediate(/\\[^"]/),
        token.immediate('""')
      )),
      "'"
    ),

    char_literal: $ => choice(
      /'[^'"\\]'/,
      /'\\[^"]'/
    ),

    true: $ => 'true',
    false: $ => 'false',
    null: $ => 'null',

    parenthesized_expression: $ => seq('(', $._expression, ')'),

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: $ => token(prec(PREC.COMMENT, choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    ))),
  }
});


function commaSep1 (rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep (rule) {
  return optional(commaSep1(rule));
}
