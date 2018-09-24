const PREC = {
  //PAREN_DECLARATOR: -10,
  ASSIGNMENT: -1,
  /*CONDITIONAL: -2,
  DEFAULT: 0,
  LOGICAL_OR: 1,
  LOGICAL_AND: 2,
  INCLUSIVE_OR: 3,
  EXCLUSIVE_OR: 4,
  BITWISE_AND: 5,
  EQUAL: 6,
  RELATIONAL: 7,
  SIZEOF: 8,
  SHIFT: 9,
  ADD: 10,
  MULTIPLY: 11,
  CAST: 12,*/
  BINARY: 11,
  UNARY: 13,
  CALL: 14,
  /*FIELD: 15,
  SUBSCRIPT: 16*/
  ASSIGNMENT: 20,
};

const identifierPattern = '[a-zA-Z_][a-zA-Z0-9_]*';


module.exports = grammar({
  name: 'mss',

  extras: $ => [
    /\s/,
    $.comment,
  ],

  rules: {
    program: $ => repeat($.function),

    function: $ => seq(
      'function',
      $.identifier,
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
      repeat($._statement),
      '}'
    ),

    _statement: $ => choice(
      $.assignment_statement,
      $.call_statement,
      $.if_statement,
      /*$.switch_statement,
      $.for_statement,
      $.for_each_statement,
      $.typed_for_each_statement,*/
      $.while_statement,
      $.return_statement,
      $.empty_statement,
    ),

    assignment_statement: $ => prec.right(PREC.ASSIGNMENT, seq(
      choice(
        $.identifier,
        $.indirection_expression,
        $.field_expression,
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
      /*$.equality_expression,
      $.relational_expression,
      $.shift_expression,
      $.math_expression,*/
      $.subscript_expression,
      $.call_expression,
      $.field_expression,
      $.user_property_expression,
      /*$.compound_literal_expression,*/
      $.indirection_expression,
      $.identifier,
      $.number_literal,
      $.string_literal,
      $.true,
      $.false,
      $.null,
      //$.concatenated_string,
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
      choice($.identifier, $.field_expression),
      '[',
      $._expression,
      ']'
    ),

    call_expression: $ => prec(PREC.CALL, seq($._expression, $.argument_list)),

    field_expression: $ => seq(
        choice($.identifier, $.field_expression, $.subscript_expression),
        '.',
        $.identifier
    ),

    user_property_expression: $ => seq(
        choice($.identifier, $.field_expression, $.subscript_expression),
        '.',
        '_property',
        ':',
        $.identifier
    ),

    indirection_expression: $ => new RegExp('@' + identifierPattern),

    argument_list: $ => seq('(', commaSep($._expression), ')'),

    number_literal: $ => /\d+(\.\d+)?/,

    _char: $ => choice(
      /[^'\\]/,
      /\\./
    ),

    string_literal: $ => seq(
      "'",
      optional(seq($._char, repeat1($._char))
      ),
      "'"
    ),

    true: $ => 'true',
    false: $ => 'false',
    null: $ => 'null',

    char_literal: $ => seq(
      "'",
      $._char,
      "'"
    ),

    parenthesized_expression: $ => seq('(', $._expression, ')'),

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: $ => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    )),
  }
});


function commaSep1 (rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep (rule) {
  return optional(commaSep1(rule));
}