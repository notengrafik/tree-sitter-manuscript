#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 136
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 0
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_ = 1,
  anon_sym_function = 2,
  sym_identifier = 3,
  anon_sym_LPAREN = 4,
  anon_sym_COMMA = 5,
  anon_sym_RPAREN = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_EQ = 9,
  anon_sym_SEMI = 10,
  anon_sym_if = 11,
  anon_sym_else = 12,
  anon_sym_switch = 13,
  anon_sym_case = 14,
  anon_sym_default = 15,
  anon_sym_for = 16,
  anon_sym_to = 17,
  anon_sym_each = 18,
  anon_sym_in = 19,
  anon_sym_while = 20,
  anon_sym_return = 21,
  anon_sym_not = 22,
  anon_sym_DASH = 23,
  anon_sym_or = 24,
  anon_sym_and = 25,
  anon_sym_PLUS = 26,
  anon_sym_STAR = 27,
  anon_sym_SLASH = 28,
  anon_sym_PERCENT = 29,
  anon_sym_AMP = 30,
  anon_sym_BANG_EQ = 31,
  anon_sym_GT = 32,
  anon_sym_LT = 33,
  anon_sym_LT_EQ = 34,
  anon_sym_GT_EQ = 35,
  anon_sym_LBRACK = 36,
  anon_sym_RBRACK = 37,
  anon_sym_DOT = 38,
  anon_sym__property = 39,
  anon_sym_COLON = 40,
  sym_indirection_expression = 41,
  sym_number_literal = 42,
  aux_sym_SLASH_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH = 43,
  anon_sym_SQUOTE = 44,
  aux_sym_SLASH_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_PLUS_SLASH = 45,
  aux_sym_SLASH_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH2 = 46,
  anon_sym_DQUOTE_DQUOTE = 47,
  aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_SQUOTE_SLASH = 48,
  aux_sym_SLASH_SQUOTE_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SQUOTE_SLASH = 49,
  sym_true = 50,
  sym_false = 51,
  sym_null = 52,
  sym_comment = 53,
  sym_program = 54,
  sym_mss_function = 55,
  sym_plg_function = 56,
  sym_parameter_list = 57,
  sym_statement_block = 58,
  sym__statement = 59,
  sym_assignment_statement = 60,
  sym_call_statement = 61,
  sym_if_statement = 62,
  sym_switch_statement = 63,
  sym_switch_case = 64,
  sym_switch_default = 65,
  sym_for_statement = 66,
  sym_for_each_statement = 67,
  sym_empty_statement = 68,
  sym_while_statement = 69,
  sym_return_statement = 70,
  sym__expression = 71,
  sym_unary_expression = 72,
  sym_binary_expression = 73,
  sym_subscript_expression = 74,
  sym_call_expression = 75,
  sym_field_expression = 76,
  sym_indirection_field_expression = 77,
  sym_user_property_expression = 78,
  sym_argument_list = 79,
  sym_string_literal = 80,
  sym_char_literal = 81,
  sym_parenthesized_expression = 82,
  aux_sym_program_repeat1 = 83,
  aux_sym_parameter_list_repeat1 = 84,
  aux_sym_statement_block_repeat1 = 85,
  aux_sym_switch_statement_repeat1 = 86,
  aux_sym_argument_list_repeat1 = 87,
  aux_sym_string_literal_repeat1 = 88,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_] = "﻿",
  [anon_sym_function] = "function",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_switch] = "switch",
  [anon_sym_case] = "case",
  [anon_sym_default] = "default",
  [anon_sym_for] = "for",
  [anon_sym_to] = "to",
  [anon_sym_each] = "each",
  [anon_sym_in] = "in",
  [anon_sym_while] = "while",
  [anon_sym_return] = "return",
  [anon_sym_not] = "not",
  [anon_sym_DASH] = "-",
  [anon_sym_or] = "or",
  [anon_sym_and] = "and",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_AMP] = "&",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT] = ".",
  [anon_sym__property] = "_property",
  [anon_sym_COLON] = ":",
  [sym_indirection_expression] = "indirection_expression",
  [sym_number_literal] = "number_literal",
  [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = "/\\\\[^\"]/",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_SLASH_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_PLUS_SLASH] = "/[^'\"\\\\]+/",
  [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH2] = "/\\\\[^\"]/",
  [anon_sym_DQUOTE_DQUOTE] = "\"\"",
  [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_SQUOTE_SLASH] = "/'[^'\"\\\\]'/",
  [aux_sym_SLASH_SQUOTE_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SQUOTE_SLASH] = "/'\\\\[^\"]'/",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym_mss_function] = "mss_function",
  [sym_plg_function] = "plg_function",
  [sym_parameter_list] = "parameter_list",
  [sym_statement_block] = "statement_block",
  [sym__statement] = "_statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym_call_statement] = "call_statement",
  [sym_if_statement] = "if_statement",
  [sym_switch_statement] = "switch_statement",
  [sym_switch_case] = "switch_case",
  [sym_switch_default] = "switch_default",
  [sym_for_statement] = "for_statement",
  [sym_for_each_statement] = "for_each_statement",
  [sym_empty_statement] = "empty_statement",
  [sym_while_statement] = "while_statement",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_subscript_expression] = "subscript_expression",
  [sym_call_expression] = "call_expression",
  [sym_field_expression] = "field_expression",
  [sym_indirection_field_expression] = "indirection_field_expression",
  [sym_user_property_expression] = "user_property_expression",
  [sym_argument_list] = "argument_list",
  [sym_string_literal] = "string_literal",
  [sym_char_literal] = "char_literal",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_statement_block_repeat1] = "statement_block_repeat1",
  [aux_sym_switch_statement_repeat1] = "switch_statement_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_each] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__property] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_indirection_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_SQUOTE_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_SQUOTE_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SQUOTE_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_mss_function] = {
    .visible = true,
    .named = true,
  },
  [sym_plg_function] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_call_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_case] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_default] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_each_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_subscript_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_field_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_indirection_field_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_user_property_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statement_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_switch_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(6);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == ')')
        ADVANCE(15);
      if (lookahead == '*')
        ADVANCE(16);
      if (lookahead == '+')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(21);
      if (lookahead == ':')
        ADVANCE(26);
      if (lookahead == ';')
        ADVANCE(27);
      if (lookahead == '<')
        ADVANCE(28);
      if (lookahead == '=')
        ADVANCE(30);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '@')
        ADVANCE(33);
      if (lookahead == '[')
        ADVANCE(35);
      if (lookahead == '\\')
        ADVANCE(36);
      if (lookahead == ']')
        ADVANCE(38);
      if (lookahead == '_')
        ADVANCE(39);
      if (lookahead == 'a')
        ADVANCE(48);
      if (lookahead == 'c')
        ADVANCE(51);
      if (lookahead == 'd')
        ADVANCE(55);
      if (lookahead == 'e')
        ADVANCE(62);
      if (lookahead == 'f')
        ADVANCE(69);
      if (lookahead == 'i')
        ADVANCE(83);
      if (lookahead == 'n')
        ADVANCE(86);
      if (lookahead == 'o')
        ADVANCE(92);
      if (lookahead == 'r')
        ADVANCE(94);
      if (lookahead == 's')
        ADVANCE(100);
      if (lookahead == 't')
        ADVANCE(106);
      if (lookahead == 'w')
        ADVANCE(111);
      if (lookahead == '{')
        ADVANCE(116);
      if (lookahead == '}')
        ADVANCE(117);
      if (lookahead == 65279)
        ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(119);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(122);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 4:
      if (lookahead == '\"')
        ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\\')
        ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '\'')
        ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '\'')
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_SLASH_SQUOTE_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SQUOTE_SLASH);
      END_STATE();
    case 12:
      if (lookahead == '\'')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_SQUOTE_SLASH);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == '*')
        ADVANCE(23);
      if (lookahead != 0)
        ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '*')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(24);
      if (lookahead != 0)
        ADVANCE(22);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=')
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 33:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_indirection_expression);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 36:
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH2);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 39:
      if (lookahead == 'p')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'r')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'o')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'p')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'e')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'r')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 't')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'y')
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym__property);
      END_STATE();
    case 48:
      if (lookahead == 'n')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'd')
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 51:
      if (lookahead == 'a')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 's')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'e')
        ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 55:
      if (lookahead == 'e')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'f')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'a')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'u')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'l')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 't')
        ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 62:
      if (lookahead == 'a')
        ADVANCE(63);
      if (lookahead == 'l')
        ADVANCE(66);
      END_STATE();
    case 63:
      if (lookahead == 'c')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'h')
        ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 66:
      if (lookahead == 's')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'e')
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 69:
      if (lookahead == 'a')
        ADVANCE(70);
      if (lookahead == 'o')
        ADVANCE(74);
      if (lookahead == 'u')
        ADVANCE(76);
      END_STATE();
    case 70:
      if (lookahead == 'l')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 's')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'e')
        ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 74:
      if (lookahead == 'r')
        ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 76:
      if (lookahead == 'n')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 'c')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 't')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'i')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'o')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'n')
        ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 83:
      if (lookahead == 'f')
        ADVANCE(84);
      if (lookahead == 'n')
        ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 86:
      if (lookahead == 'o')
        ADVANCE(87);
      if (lookahead == 'u')
        ADVANCE(89);
      END_STATE();
    case 87:
      if (lookahead == 't')
        ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 89:
      if (lookahead == 'l')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'l')
        ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 92:
      if (lookahead == 'r')
        ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 94:
      if (lookahead == 'e')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 't')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'u')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'r')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'n')
        ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 100:
      if (lookahead == 'w')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'i')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 't')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'c')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 'h')
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 106:
      if (lookahead == 'o')
        ADVANCE(107);
      if (lookahead == 'r')
        ADVANCE(108);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 108:
      if (lookahead == 'u')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'e')
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 111:
      if (lookahead == 'h')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'i')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'l')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'e')
        ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 119:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(6);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == ')')
        ADVANCE(15);
      if (lookahead == '*')
        ADVANCE(16);
      if (lookahead == '+')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(21);
      if (lookahead == ':')
        ADVANCE(26);
      if (lookahead == ';')
        ADVANCE(27);
      if (lookahead == '<')
        ADVANCE(28);
      if (lookahead == '=')
        ADVANCE(30);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '@')
        ADVANCE(33);
      if (lookahead == '[')
        ADVANCE(35);
      if (lookahead == '\\')
        ADVANCE(120);
      if (lookahead == ']')
        ADVANCE(38);
      if (lookahead == '_')
        ADVANCE(39);
      if (lookahead == 'a')
        ADVANCE(48);
      if (lookahead == 'c')
        ADVANCE(51);
      if (lookahead == 'd')
        ADVANCE(55);
      if (lookahead == 'e')
        ADVANCE(62);
      if (lookahead == 'f')
        ADVANCE(69);
      if (lookahead == 'i')
        ADVANCE(83);
      if (lookahead == 'n')
        ADVANCE(86);
      if (lookahead == 'o')
        ADVANCE(92);
      if (lookahead == 'r')
        ADVANCE(94);
      if (lookahead == 's')
        ADVANCE(100);
      if (lookahead == 't')
        ADVANCE(106);
      if (lookahead == 'w')
        ADVANCE(111);
      if (lookahead == '{')
        ADVANCE(116);
      if (lookahead == '}')
        ADVANCE(117);
      if (lookahead == 65279)
        ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(119);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(122);
      END_STATE();
    case 120:
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(122);
      END_STATE();
    case 123:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(124);
      END_STATE();
    case 125:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(126);
      if (lookahead == 'f')
        ADVANCE(127);
      if (lookahead == 65279)
        ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(125);
      END_STATE();
    case 126:
      if (lookahead == '*')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(25);
      END_STATE();
    case 127:
      if (lookahead == 'u')
        ADVANCE(76);
      END_STATE();
    case 128:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(126);
      if (lookahead == 'f')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(128);
      END_STATE();
    case 129:
      if (lookahead == ')')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 131:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '/')
        ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(131);
      END_STATE();
    case 132:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(6);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == '*')
        ADVANCE(16);
      if (lookahead == '+')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(28);
      if (lookahead == '=')
        ADVANCE(30);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(35);
      if (lookahead == 'a')
        ADVANCE(48);
      if (lookahead == 'o')
        ADVANCE(92);
      if (lookahead == '{')
        ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(132);
      END_STATE();
    case 133:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '/')
        ADVANCE(126);
      if (lookahead == 'f')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(133);
      END_STATE();
    case 134:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(6);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(15);
      if (lookahead == '*')
        ADVANCE(16);
      if (lookahead == '+')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '/')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(28);
      if (lookahead == '=')
        ADVANCE(30);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == 'a')
        ADVANCE(48);
      if (lookahead == 'o')
        ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(134);
      END_STATE();
    case 135:
      if (lookahead == '/')
        ADVANCE(126);
      if (lookahead == ';')
        ADVANCE(27);
      if (lookahead == '@')
        ADVANCE(33);
      if (lookahead == 'f')
        ADVANCE(136);
      if (lookahead == 'i')
        ADVANCE(139);
      if (lookahead == 'r')
        ADVANCE(141);
      if (lookahead == 's')
        ADVANCE(147);
      if (lookahead == 'w')
        ADVANCE(153);
      if (lookahead == '}')
        ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w')
        ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 158:
      if (lookahead == '/')
        ADVANCE(126);
      if (lookahead == 'e')
        ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_each);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 163:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == ')')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '/')
        ADVANCE(126);
      if (lookahead == '@')
        ADVANCE(33);
      if (lookahead == 'f')
        ADVANCE(164);
      if (lookahead == 'n')
        ADVANCE(169);
      if (lookahead == 't')
        ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(163);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(170);
      if (lookahead == 'u')
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 179:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(6);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(16);
      if (lookahead == '+')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(21);
      if (lookahead == ';')
        ADVANCE(27);
      if (lookahead == '<')
        ADVANCE(28);
      if (lookahead == '=')
        ADVANCE(30);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(35);
      if (lookahead == 'a')
        ADVANCE(48);
      if (lookahead == 'o')
        ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(179);
      END_STATE();
    case 180:
      if (lookahead == '/')
        ADVANCE(126);
      if (lookahead == '@')
        ADVANCE(33);
      if (lookahead == '_')
        ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym__property);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 190:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(6);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == ')')
        ADVANCE(15);
      if (lookahead == '*')
        ADVANCE(16);
      if (lookahead == '+')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(21);
      if (lookahead == ';')
        ADVANCE(27);
      if (lookahead == '<')
        ADVANCE(28);
      if (lookahead == '=')
        ADVANCE(30);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(35);
      if (lookahead == ']')
        ADVANCE(38);
      if (lookahead == 'a')
        ADVANCE(48);
      if (lookahead == 'o')
        ADVANCE(92);
      if (lookahead == 't')
        ADVANCE(191);
      if (lookahead == '{')
        ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(190);
      END_STATE();
    case 191:
      if (lookahead == 'o')
        ADVANCE(107);
      END_STATE();
    case 192:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '/')
        ADVANCE(194);
      if (lookahead == '\\')
        ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(199);
      if (lookahead != 0)
        ADVANCE(197);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == '*')
        ADVANCE(195);
      if (lookahead == '/')
        ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '\'' &&
          lookahead != '\\')
        ADVANCE(197);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == '*')
        ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '\'' &&
          lookahead != '\\')
        ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == '*')
        ADVANCE(196);
      if (lookahead == '/')
        ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '\'' &&
          lookahead != '\\')
        ADVANCE(195);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '\'' &&
          lookahead != '\\')
        ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '\'' &&
          lookahead != '\\')
        ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == '/')
        ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '\'' &&
          lookahead != '\\')
        ADVANCE(197);
      END_STATE();
    case 200:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '/')
        ADVANCE(126);
      if (lookahead == 'c')
        ADVANCE(51);
      if (lookahead == 'd')
        ADVANCE(55);
      if (lookahead == 'f')
        ADVANCE(127);
      if (lookahead == '}')
        ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(200);
      END_STATE();
    case 201:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(6);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(16);
      if (lookahead == '+')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '/')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(28);
      if (lookahead == '=')
        ADVANCE(30);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == ']')
        ADVANCE(38);
      if (lookahead == 'a')
        ADVANCE(48);
      if (lookahead == 'o')
        ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(201);
      END_STATE();
    case 202:
      if (lookahead == '/')
        ADVANCE(126);
      if (lookahead == ':')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(202);
      END_STATE();
    case 203:
      if (lookahead == '/')
        ADVANCE(126);
      if (lookahead == ';')
        ADVANCE(27);
      if (lookahead == '@')
        ADVANCE(33);
      if (lookahead == 'e')
        ADVANCE(204);
      if (lookahead == 'f')
        ADVANCE(136);
      if (lookahead == 'i')
        ADVANCE(139);
      if (lookahead == 'r')
        ADVANCE(141);
      if (lookahead == 's')
        ADVANCE(147);
      if (lookahead == 'w')
        ADVANCE(153);
      if (lookahead == '}')
        ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 208:
      if (lookahead == '/')
        ADVANCE(126);
      if (lookahead == 'c')
        ADVANCE(51);
      if (lookahead == 'd')
        ADVANCE(55);
      if (lookahead == '}')
        ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(208);
      END_STATE();
    case 209:
      if (lookahead == '/')
        ADVANCE(126);
      if (lookahead == 'i')
        ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 212:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(6);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(16);
      if (lookahead == '+')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '/')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(28);
      if (lookahead == '=')
        ADVANCE(30);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == 'a')
        ADVANCE(48);
      if (lookahead == 'o')
        ADVANCE(92);
      if (lookahead == 't')
        ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(212);
      END_STATE();
    case 213:
      if (lookahead == '/')
        ADVANCE(126);
      if (lookahead == 'i')
        ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(213);
      END_STATE();
    case 214:
      if (lookahead == 'n')
        ADVANCE(85);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 125},
  [2] = {.lex_state = 128},
  [3] = {.lex_state = 129},
  [4] = {.lex_state = 129},
  [5] = {.lex_state = 131},
  [6] = {.lex_state = 131},
  [7] = {.lex_state = 132},
  [8] = {.lex_state = 133},
  [9] = {.lex_state = 131},
  [10] = {.lex_state = 133},
  [11] = {.lex_state = 125},
  [12] = {.lex_state = 134},
  [13] = {.lex_state = 132},
  [14] = {.lex_state = 135},
  [15] = {.lex_state = 131},
  [16] = {.lex_state = 133},
  [17] = {.lex_state = 132},
  [18] = {.lex_state = 129},
  [19] = {.lex_state = 132},
  [20] = {.lex_state = 134},
  [21] = {.lex_state = 132},
  [22] = {.lex_state = 135},
  [23] = {.lex_state = 125},
  [24] = {.lex_state = 125},
  [25] = {.lex_state = 158},
  [26] = {.lex_state = 125},
  [27] = {.lex_state = 163},
  [28] = {.lex_state = 132},
  [29] = {.lex_state = 132},
  [30] = {.lex_state = 179},
  [31] = {.lex_state = 132},
  [32] = {.lex_state = 132},
  [33] = {.lex_state = 135},
  [34] = {.lex_state = 133},
  [35] = {.lex_state = 134},
  [36] = {.lex_state = 132},
  [37] = {.lex_state = 134},
  [38] = {.lex_state = 163},
  [39] = {.lex_state = 163},
  [40] = {.lex_state = 163},
  [41] = {.lex_state = 180},
  [42] = {.lex_state = 190},
  [43] = {.lex_state = 163},
  [44] = {.lex_state = 132},
  [45] = {.lex_state = 132},
  [46] = {.lex_state = 132},
  [47] = {.lex_state = 129},
  [48] = {.lex_state = 132},
  [49] = {.lex_state = 190},
  [50] = {.lex_state = 163},
  [51] = {.lex_state = 190},
  [52] = {.lex_state = 192},
  [53] = {.lex_state = 190},
  [54] = {.lex_state = 179},
  [55] = {.lex_state = 190},
  [56] = {.lex_state = 190},
  [57] = {.lex_state = 190},
  [58] = {.lex_state = 180},
  [59] = {.lex_state = 135},
  [60] = {.lex_state = 129},
  [61] = {.lex_state = 200},
  [62] = {.lex_state = 135},
  [63] = {.lex_state = 190},
  [64] = {.lex_state = 163},
  [65] = {.lex_state = 134},
  [66] = {.lex_state = 179},
  [67] = {.lex_state = 163},
  [68] = {.lex_state = 201},
  [69] = {.lex_state = 190},
  [70] = {.lex_state = 202},
  [71] = {.lex_state = 190},
  [72] = {.lex_state = 163},
  [73] = {.lex_state = 134},
  [74] = {.lex_state = 135},
  [75] = {.lex_state = 203},
  [76] = {.lex_state = 208},
  [77] = {.lex_state = 163},
  [78] = {.lex_state = 209},
  [79] = {.lex_state = 135},
  [80] = {.lex_state = 135},
  [81] = {.lex_state = 190},
  [82] = {.lex_state = 190},
  [83] = {.lex_state = 192},
  [84] = {.lex_state = 163},
  [85] = {.lex_state = 135},
  [86] = {.lex_state = 163},
  [87] = {.lex_state = 190},
  [88] = {.lex_state = 163},
  [89] = {.lex_state = 134},
  [90] = {.lex_state = 135},
  [91] = {.lex_state = 163},
  [92] = {.lex_state = 190},
  [93] = {.lex_state = 129},
  [94] = {.lex_state = 190},
  [95] = {.lex_state = 163},
  [96] = {.lex_state = 135},
  [97] = {.lex_state = 132},
  [98] = {.lex_state = 135},
  [99] = {.lex_state = 163},
  [100] = {.lex_state = 132},
  [101] = {.lex_state = 135},
  [102] = {.lex_state = 208},
  [103] = {.lex_state = 163},
  [104] = {.lex_state = 212},
  [105] = {.lex_state = 213},
  [106] = {.lex_state = 163},
  [107] = {.lex_state = 135},
  [108] = {.lex_state = 190},
  [109] = {.lex_state = 192},
  [110] = {.lex_state = 190},
  [111] = {.lex_state = 134},
  [112] = {.lex_state = 190},
  [113] = {.lex_state = 134},
  [114] = {.lex_state = 190},
  [115] = {.lex_state = 203},
  [116] = {.lex_state = 135},
  [117] = {.lex_state = 163},
  [118] = {.lex_state = 132},
  [119] = {.lex_state = 135},
  [120] = {.lex_state = 135},
  [121] = {.lex_state = 135},
  [122] = {.lex_state = 208},
  [123] = {.lex_state = 163},
  [124] = {.lex_state = 163},
  [125] = {.lex_state = 163},
  [126] = {.lex_state = 132},
  [127] = {.lex_state = 135},
  [128] = {.lex_state = 163},
  [129] = {.lex_state = 208},
  [130] = {.lex_state = 135},
  [131] = {.lex_state = 132},
  [132] = {.lex_state = 132},
  [133] = {.lex_state = 135},
  [134] = {.lex_state = 135},
  [135] = {.lex_state = 135},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_each] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(3),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym__property] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_indirection_expression] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(3),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH2] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(1),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_SQUOTE_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_SQUOTE_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SQUOTE_SLASH] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(5),
    [sym_mss_function] = STATE(8),
    [sym_plg_function] = STATE(6),
    [sym_parameter_list] = STATE(7),
    [aux_sym_program_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_] = ACTIONS(7),
    [anon_sym_function] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [2] = {
    [sym_mss_function] = STATE(10),
    [sym_plg_function] = STATE(9),
    [sym_parameter_list] = STATE(7),
    [aux_sym_program_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [3] = {
    [sym_identifier] = ACTIONS(17),
    [sym_comment] = ACTIONS(13),
  },
  [4] = {
    [sym_identifier] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(21),
    [sym_comment] = ACTIONS(13),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_comment] = ACTIONS(13),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_comment] = ACTIONS(13),
  },
  [7] = {
    [sym_statement_block] = STATE(15),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_comment] = ACTIONS(13),
  },
  [8] = {
    [sym_mss_function] = STATE(16),
    [aux_sym_program_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(9),
    [sym_comment] = ACTIONS(13),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_comment] = ACTIONS(13),
  },
  [10] = {
    [sym_mss_function] = STATE(16),
    [aux_sym_program_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_function] = ACTIONS(9),
    [sym_comment] = ACTIONS(13),
  },
  [11] = {
    [sym_parameter_list] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [12] = {
    [aux_sym_parameter_list_repeat1] = STATE(20),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
  },
  [13] = {
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_comment] = ACTIONS(13),
  },
  [14] = {
    [sym__statement] = STATE(33),
    [sym_assignment_statement] = STATE(33),
    [sym_call_statement] = STATE(33),
    [sym_if_statement] = STATE(33),
    [sym_switch_statement] = STATE(33),
    [sym_for_statement] = STATE(33),
    [sym_for_each_statement] = STATE(33),
    [sym_empty_statement] = STATE(33),
    [sym_while_statement] = STATE(33),
    [sym_return_statement] = STATE(33),
    [sym_subscript_expression] = STATE(29),
    [sym_call_expression] = STATE(30),
    [sym_field_expression] = STATE(21),
    [sym_indirection_field_expression] = STATE(31),
    [sym_user_property_expression] = STATE(32),
    [aux_sym_statement_block_repeat1] = STATE(33),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_switch] = ACTIONS(41),
    [anon_sym_for] = ACTIONS(43),
    [anon_sym_while] = ACTIONS(45),
    [anon_sym_return] = ACTIONS(47),
    [sym_indirection_expression] = ACTIONS(49),
    [sym_comment] = ACTIONS(13),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_comment] = ACTIONS(13),
  },
  [16] = {
    [sym_mss_function] = STATE(16),
    [aux_sym_program_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_function] = ACTIONS(55),
    [sym_comment] = ACTIONS(13),
  },
  [17] = {
    [sym_statement_block] = STATE(34),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_comment] = ACTIONS(13),
  },
  [18] = {
    [sym_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(13),
  },
  [19] = {
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_comment] = ACTIONS(13),
  },
  [20] = {
    [aux_sym_parameter_list_repeat1] = STATE(37),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(62),
    [sym_comment] = ACTIONS(13),
  },
  [21] = {
    [sym_argument_list] = STATE(42),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_EQ] = ACTIONS(66),
    [anon_sym_LBRACK] = ACTIONS(68),
    [anon_sym_DOT] = ACTIONS(70),
    [sym_comment] = ACTIONS(13),
  },
  [22] = {
    [sym_identifier] = ACTIONS(72),
    [anon_sym_RBRACE] = ACTIONS(74),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(72),
    [anon_sym_switch] = ACTIONS(72),
    [anon_sym_for] = ACTIONS(72),
    [anon_sym_while] = ACTIONS(72),
    [anon_sym_return] = ACTIONS(72),
    [sym_indirection_expression] = ACTIONS(74),
    [sym_comment] = ACTIONS(13),
  },
  [23] = {
    [sym_parenthesized_expression] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(76),
    [sym_comment] = ACTIONS(13),
  },
  [24] = {
    [sym_parenthesized_expression] = STATE(45),
    [anon_sym_LPAREN] = ACTIONS(76),
    [sym_comment] = ACTIONS(13),
  },
  [25] = {
    [sym_identifier] = ACTIONS(78),
    [anon_sym_each] = ACTIONS(80),
    [sym_comment] = ACTIONS(13),
  },
  [26] = {
    [sym_parenthesized_expression] = STATE(48),
    [anon_sym_LPAREN] = ACTIONS(76),
    [sym_comment] = ACTIONS(13),
  },
  [27] = {
    [sym__expression] = STATE(54),
    [sym_unary_expression] = STATE(54),
    [sym_binary_expression] = STATE(54),
    [sym_subscript_expression] = STATE(55),
    [sym_call_expression] = STATE(56),
    [sym_field_expression] = STATE(49),
    [sym_indirection_field_expression] = STATE(57),
    [sym_user_property_expression] = STATE(54),
    [sym_string_literal] = STATE(54),
    [sym_char_literal] = STATE(54),
    [sym_parenthesized_expression] = STATE(54),
    [sym_identifier] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_not] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(86),
    [sym_indirection_expression] = ACTIONS(88),
    [sym_number_literal] = ACTIONS(90),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_SQUOTE_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [sym_true] = ACTIONS(96),
    [sym_false] = ACTIONS(96),
    [sym_null] = ACTIONS(96),
    [sym_comment] = ACTIONS(13),
  },
  [28] = {
    [sym_argument_list] = STATE(42),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_EQ] = ACTIONS(66),
    [anon_sym_DOT] = ACTIONS(98),
    [sym_comment] = ACTIONS(13),
  },
  [29] = {
    [anon_sym_EQ] = ACTIONS(66),
    [anon_sym_DOT] = ACTIONS(70),
    [sym_comment] = ACTIONS(13),
  },
  [30] = {
    [anon_sym_SEMI] = ACTIONS(100),
    [anon_sym_LBRACK] = ACTIONS(68),
    [anon_sym_DOT] = ACTIONS(102),
    [sym_comment] = ACTIONS(13),
  },
  [31] = {
    [sym_argument_list] = STATE(42),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_EQ] = ACTIONS(66),
    [anon_sym_DOT] = ACTIONS(102),
    [sym_comment] = ACTIONS(13),
  },
  [32] = {
    [anon_sym_EQ] = ACTIONS(66),
    [sym_comment] = ACTIONS(13),
  },
  [33] = {
    [sym__statement] = STATE(62),
    [sym_assignment_statement] = STATE(62),
    [sym_call_statement] = STATE(62),
    [sym_if_statement] = STATE(62),
    [sym_switch_statement] = STATE(62),
    [sym_for_statement] = STATE(62),
    [sym_for_each_statement] = STATE(62),
    [sym_empty_statement] = STATE(62),
    [sym_while_statement] = STATE(62),
    [sym_return_statement] = STATE(62),
    [sym_subscript_expression] = STATE(29),
    [sym_call_expression] = STATE(30),
    [sym_field_expression] = STATE(21),
    [sym_indirection_field_expression] = STATE(31),
    [sym_user_property_expression] = STATE(32),
    [aux_sym_statement_block_repeat1] = STATE(62),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(104),
    [anon_sym_SEMI] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_switch] = ACTIONS(41),
    [anon_sym_for] = ACTIONS(43),
    [anon_sym_while] = ACTIONS(45),
    [anon_sym_return] = ACTIONS(47),
    [sym_indirection_expression] = ACTIONS(49),
    [sym_comment] = ACTIONS(13),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_function] = ACTIONS(106),
    [sym_comment] = ACTIONS(13),
  },
  [35] = {
    [anon_sym_COMMA] = ACTIONS(108),
    [anon_sym_RPAREN] = ACTIONS(108),
    [sym_comment] = ACTIONS(13),
  },
  [36] = {
    [anon_sym_LBRACE] = ACTIONS(110),
    [sym_comment] = ACTIONS(13),
  },
  [37] = {
    [aux_sym_parameter_list_repeat1] = STATE(37),
    [anon_sym_COMMA] = ACTIONS(112),
    [anon_sym_RPAREN] = ACTIONS(108),
    [sym_comment] = ACTIONS(13),
  },
  [38] = {
    [sym__expression] = STATE(65),
    [sym_unary_expression] = STATE(65),
    [sym_binary_expression] = STATE(65),
    [sym_subscript_expression] = STATE(55),
    [sym_call_expression] = STATE(56),
    [sym_field_expression] = STATE(49),
    [sym_indirection_field_expression] = STATE(57),
    [sym_user_property_expression] = STATE(65),
    [sym_string_literal] = STATE(65),
    [sym_char_literal] = STATE(65),
    [sym_parenthesized_expression] = STATE(65),
    [sym_identifier] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_not] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(119),
    [sym_indirection_expression] = ACTIONS(88),
    [sym_number_literal] = ACTIONS(121),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_SQUOTE_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [sym_true] = ACTIONS(123),
    [sym_false] = ACTIONS(123),
    [sym_null] = ACTIONS(123),
    [sym_comment] = ACTIONS(13),
  },
  [39] = {
    [sym__expression] = STATE(66),
    [sym_unary_expression] = STATE(66),
    [sym_binary_expression] = STATE(66),
    [sym_subscript_expression] = STATE(55),
    [sym_call_expression] = STATE(56),
    [sym_field_expression] = STATE(49),
    [sym_indirection_field_expression] = STATE(57),
    [sym_user_property_expression] = STATE(66),
    [sym_string_literal] = STATE(66),
    [sym_char_literal] = STATE(66),
    [sym_parenthesized_expression] = STATE(66),
    [sym_identifier] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_not] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(86),
    [sym_indirection_expression] = ACTIONS(88),
    [sym_number_literal] = ACTIONS(125),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_SQUOTE_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [sym_true] = ACTIONS(127),
    [sym_false] = ACTIONS(127),
    [sym_null] = ACTIONS(127),
    [sym_comment] = ACTIONS(13),
  },
  [40] = {
    [sym__expression] = STATE(68),
    [sym_unary_expression] = STATE(68),
    [sym_binary_expression] = STATE(68),
    [sym_subscript_expression] = STATE(55),
    [sym_call_expression] = STATE(56),
    [sym_field_expression] = STATE(49),
    [sym_indirection_field_expression] = STATE(57),
    [sym_user_property_expression] = STATE(68),
    [sym_string_literal] = STATE(68),
    [sym_char_literal] = STATE(68),
    [sym_parenthesized_expression] = STATE(68),
    [sym_identifier] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_not] = ACTIONS(129),
    [anon_sym_DASH] = ACTIONS(131),
    [sym_indirection_expression] = ACTIONS(88),
    [sym_number_literal] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_SQUOTE_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [sym_true] = ACTIONS(135),
    [sym_false] = ACTIONS(135),
    [sym_null] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
  },
  [41] = {
    [sym_identifier] = ACTIONS(137),
    [anon_sym__property] = ACTIONS(139),
    [sym_indirection_expression] = ACTIONS(141),
    [sym_comment] = ACTIONS(13),
  },
  [42] = {
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_RPAREN] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(143),
    [anon_sym_SEMI] = ACTIONS(143),
    [anon_sym_to] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_or] = ACTIONS(143),
    [anon_sym_and] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(145),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_AMP] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(145),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_GT_EQ] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_RBRACK] = ACTIONS(143),
    [anon_sym_DOT] = ACTIONS(143),
    [sym_comment] = ACTIONS(13),
  },
  [43] = {
    [sym__expression] = STATE(73),
    [sym_unary_expression] = STATE(73),
    [sym_binary_expression] = STATE(73),
    [sym_subscript_expression] = STATE(55),
    [sym_call_expression] = STATE(56),
    [sym_field_expression] = STATE(49),
    [sym_indirection_field_expression] = STATE(57),
    [sym_user_property_expression] = STATE(73),
    [sym_string_literal] = STATE(73),
    [sym_char_literal] = STATE(73),
    [sym_parenthesized_expression] = STATE(73),
    [sym_identifier] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_not] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(149),
    [sym_indirection_expression] = ACTIONS(88),
    [sym_number_literal] = ACTIONS(151),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_SQUOTE_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [sym_true] = ACTIONS(153),
    [sym_false] = ACTIONS(153),
    [sym_null] = ACTIONS(153),
    [sym_comment] = ACTIONS(13),
  },
  [44] = {
    [sym_statement_block] = STATE(75),
    [anon_sym_LBRACE] = ACTIONS(155),
    [sym_comment] = ACTIONS(13),
  },
  [45] = {
    [anon_sym_LBRACE] = ACTIONS(157),
    [sym_comment] = ACTIONS(13),
  },
  [46] = {
    [anon_sym_EQ] = ACTIONS(159),
    [sym_comment] = ACTIONS(13),
  },
  [47] = {
    [sym_identifier] = ACTIONS(161),
    [sym_comment] = ACTIONS(13),
  },
  [48] = {
    [sym_statement_block] = STATE(80),
    [anon_sym_LBRACE] = ACTIONS(163),
    [sym_comment] = ACTIONS(13),
  },
  [49] = {
    [sym_argument_list] = STATE(42),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_COMMA] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_EQ] = ACTIONS(165),
    [anon_sym_SEMI] = ACTIONS(165),
    [anon_sym_to] = ACTIONS(165),
    [anon_sym_DASH] = ACTIONS(165),
    [anon_sym_or] = ACTIONS(165),
    [anon_sym_and] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(165),
    [anon_sym_STAR] = ACTIONS(165),
    [anon_sym_SLASH] = ACTIONS(167),
    [anon_sym_PERCENT] = ACTIONS(165),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_BANG_EQ] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(167),
    [anon_sym_LT_EQ] = ACTIONS(165),
    [anon_sym_GT_EQ] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(68),
    [anon_sym_RBRACK] = ACTIONS(165),
    [anon_sym_DOT] = ACTIONS(70),
    [sym_comment] = ACTIONS(13),
  },
  [50] = {
    [sym__expression] = STATE(81),
    [sym_unary_expression] = STATE(81),
    [sym_binary_expression] = STATE(81),
    [sym_subscript_expression] = STATE(55),
    [sym_call_expression] = STATE(56),
    [sym_field_expression] = STATE(49),
    [sym_indirection_field_expression] = STATE(57),
    [sym_user_property_expression] = STATE(81),
    [sym_string_literal] = STATE(81),
    [sym_char_literal] = STATE(81),
    [sym_parenthesized_expression] = STATE(81),
    [sym_identifier] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_not] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(86),
    [sym_indirection_expression] = ACTIONS(88),
    [sym_number_literal] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_SQUOTE_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [sym_true] = ACTIONS(171),
    [sym_false] = ACTIONS(171),
    [sym_null] = ACTIONS(171),
    [sym_comment] = ACTIONS(13),
  },
  [51] = {
    [sym_argument_list] = STATE(42),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_COMMA] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_EQ] = ACTIONS(165),
    [anon_sym_SEMI] = ACTIONS(165),
    [anon_sym_to] = ACTIONS(165),
    [anon_sym_DASH] = ACTIONS(165),
    [anon_sym_or] = ACTIONS(165),
    [anon_sym_and] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(165),
    [anon_sym_STAR] = ACTIONS(165),
    [anon_sym_SLASH] = ACTIONS(167),
    [anon_sym_PERCENT] = ACTIONS(165),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_BANG_EQ] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(167),
    [anon_sym_LT_EQ] = ACTIONS(165),
    [anon_sym_GT_EQ] = ACTIONS(165),
    [anon_sym_RBRACK] = ACTIONS(165),
    [anon_sym_DOT] = ACTIONS(98),
    [sym_comment] = ACTIONS(13),
  },
  [52] = {
    [aux_sym_string_literal_repeat1] = STATE(83),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(175),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH2] = ACTIONS(175),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(175),
    [sym_comment] = ACTIONS(177),
  },
  [53] = {
    [anon_sym_COMMA] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_EQ] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_to] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_or] = ACTIONS(179),
    [anon_sym_and] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_PERCENT] = ACTIONS(179),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_BANG_EQ] = ACTIONS(179),
    [anon_sym_GT] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_LT_EQ] = ACTIONS(179),
    [anon_sym_GT_EQ] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(179),
    [sym_comment] = ACTIONS(13),
  },
  [54] = {
    [anon_sym_EQ] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(185),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_or] = ACTIONS(183),
    [anon_sym_and] = ACTIONS(183),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_STAR] = ACTIONS(183),
    [anon_sym_SLASH] = ACTIONS(187),
    [anon_sym_PERCENT] = ACTIONS(183),
    [anon_sym_AMP] = ACTIONS(183),
    [anon_sym_BANG_EQ] = ACTIONS(183),
    [anon_sym_GT] = ACTIONS(187),
    [anon_sym_LT] = ACTIONS(187),
    [anon_sym_LT_EQ] = ACTIONS(183),
    [anon_sym_GT_EQ] = ACTIONS(183),
    [sym_comment] = ACTIONS(13),
  },
  [55] = {
    [anon_sym_COMMA] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_EQ] = ACTIONS(165),
    [anon_sym_SEMI] = ACTIONS(165),
    [anon_sym_to] = ACTIONS(165),
    [anon_sym_DASH] = ACTIONS(165),
    [anon_sym_or] = ACTIONS(165),
    [anon_sym_and] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(165),
    [anon_sym_STAR] = ACTIONS(165),
    [anon_sym_SLASH] = ACTIONS(167),
    [anon_sym_PERCENT] = ACTIONS(165),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_BANG_EQ] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(167),
    [anon_sym_LT_EQ] = ACTIONS(165),
    [anon_sym_GT_EQ] = ACTIONS(165),
    [anon_sym_RBRACK] = ACTIONS(165),
    [anon_sym_DOT] = ACTIONS(70),
    [sym_comment] = ACTIONS(13),
  },
  [56] = {
    [anon_sym_COMMA] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_EQ] = ACTIONS(165),
    [anon_sym_SEMI] = ACTIONS(165),
    [anon_sym_to] = ACTIONS(165),
    [anon_sym_DASH] = ACTIONS(165),
    [anon_sym_or] = ACTIONS(165),
    [anon_sym_and] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(165),
    [anon_sym_STAR] = ACTIONS(165),
    [anon_sym_SLASH] = ACTIONS(167),
    [anon_sym_PERCENT] = ACTIONS(165),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_BANG_EQ] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(167),
    [anon_sym_LT_EQ] = ACTIONS(165),
    [anon_sym_GT_EQ] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(68),
    [anon_sym_RBRACK] = ACTIONS(165),
    [anon_sym_DOT] = ACTIONS(102),
    [sym_comment] = ACTIONS(13),
  },
  [57] = {
    [sym_argument_list] = STATE(42),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_COMMA] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_EQ] = ACTIONS(165),
    [anon_sym_SEMI] = ACTIONS(165),
    [anon_sym_to] = ACTIONS(165),
    [anon_sym_DASH] = ACTIONS(165),
    [anon_sym_or] = ACTIONS(165),
    [anon_sym_and] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(165),
    [anon_sym_STAR] = ACTIONS(165),
    [anon_sym_SLASH] = ACTIONS(167),
    [anon_sym_PERCENT] = ACTIONS(165),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_BANG_EQ] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(167),
    [anon_sym_LT_EQ] = ACTIONS(165),
    [anon_sym_GT_EQ] = ACTIONS(165),
    [anon_sym_RBRACK] = ACTIONS(165),
    [anon_sym_DOT] = ACTIONS(102),
    [sym_comment] = ACTIONS(13),
  },
  [58] = {
    [sym_identifier] = ACTIONS(137),
    [anon_sym__property] = ACTIONS(139),
    [sym_comment] = ACTIONS(13),
  },
  [59] = {
    [sym_identifier] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(191),
    [anon_sym_SEMI] = ACTIONS(191),
    [anon_sym_if] = ACTIONS(189),
    [anon_sym_switch] = ACTIONS(189),
    [anon_sym_for] = ACTIONS(189),
    [anon_sym_while] = ACTIONS(189),
    [anon_sym_return] = ACTIONS(189),
    [sym_indirection_expression] = ACTIONS(191),
    [sym_comment] = ACTIONS(13),
  },
  [60] = {
    [sym_identifier] = ACTIONS(193),
    [sym_comment] = ACTIONS(13),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [anon_sym_function] = ACTIONS(195),
    [anon_sym_RBRACE] = ACTIONS(195),
    [anon_sym_case] = ACTIONS(195),
    [anon_sym_default] = ACTIONS(195),
    [sym_comment] = ACTIONS(13),
  },
  [62] = {
    [sym__statement] = STATE(62),
    [sym_assignment_statement] = STATE(62),
    [sym_call_statement] = STATE(62),
    [sym_if_statement] = STATE(62),
    [sym_switch_statement] = STATE(62),
    [sym_for_statement] = STATE(62),
    [sym_for_each_statement] = STATE(62),
    [sym_empty_statement] = STATE(62),
    [sym_while_statement] = STATE(62),
    [sym_return_statement] = STATE(62),
    [sym_subscript_expression] = STATE(29),
    [sym_call_expression] = STATE(30),
    [sym_field_expression] = STATE(21),
    [sym_indirection_field_expression] = STATE(31),
    [sym_user_property_expression] = STATE(32),
    [aux_sym_statement_block_repeat1] = STATE(62),
    [sym_identifier] = ACTIONS(197),
    [anon_sym_RBRACE] = ACTIONS(200),
    [anon_sym_SEMI] = ACTIONS(202),
    [anon_sym_if] = ACTIONS(205),
    [anon_sym_switch] = ACTIONS(208),
    [anon_sym_for] = ACTIONS(211),
    [anon_sym_while] = ACTIONS(214),
    [anon_sym_return] = ACTIONS(217),
    [sym_indirection_expression] = ACTIONS(220),
    [sym_comment] = ACTIONS(13),
  },
  [63] = {
    [anon_sym_COMMA] = ACTIONS(223),
    [anon_sym_RPAREN] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(223),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_SEMI] = ACTIONS(223),
    [anon_sym_to] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_or] = ACTIONS(223),
    [anon_sym_and] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_AMP] = ACTIONS(223),
    [anon_sym_BANG_EQ] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(225),
    [anon_sym_LT] = ACTIONS(225),
    [anon_sym_LT_EQ] = ACTIONS(223),
    [anon_sym_GT_EQ] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_RBRACK] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(223),
    [sym_comment] = ACTIONS(13),
  },
  [64] = {
    [sym__expression] = STATE(81),
    [sym_unary_expression] = STATE(81),
    [sym_binary_expression] = STATE(81),
    [sym_subscript_expression] = STATE(55),
    [sym_call_expression] = STATE(56),
    [sym_field_expression] = STATE(49),
    [sym_indirection_field_expression] = STATE(57),
    [sym_user_property_expression] = STATE(81),
    [sym_string_literal] = STATE(81),
    [sym_char_literal] = STATE(81),
    [sym_parenthesized_expression] = STATE(81),
    [sym_identifier] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_not] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(119),
    [sym_indirection_expression] = ACTIONS(88),
    [sym_number_literal] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_SQUOTE_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [sym_true] = ACTIONS(171),
    [sym_false] = ACTIONS(171),
    [sym_null] = ACTIONS(171),
    [sym_comment] = ACTIONS(13),
  },
  [65] = {
    [aux_sym_argument_list_repeat1] = STATE(89),
    [anon_sym_COMMA] = ACTIONS(227),
    [anon_sym_RPAREN] = ACTIONS(229),
    [anon_sym_EQ] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(231),
    [anon_sym_or] = ACTIONS(231),
    [anon_sym_and] = ACTIONS(231),
    [anon_sym_PLUS] = ACTIONS(231),
    [anon_sym_STAR] = ACTIONS(231),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_PERCENT] = ACTIONS(231),
    [anon_sym_AMP] = ACTIONS(231),
    [anon_sym_BANG_EQ] = ACTIONS(231),
    [anon_sym_GT] = ACTIONS(233),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(231),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [sym_comment] = ACTIONS(13),
  },
  [66] = {
    [anon_sym_EQ] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(235),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_or] = ACTIONS(183),
    [anon_sym_and] = ACTIONS(183),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_STAR] = ACTIONS(183),
    [anon_sym_SLASH] = ACTIONS(187),
    [anon_sym_PERCENT] = ACTIONS(183),
    [anon_sym_AMP] = ACTIONS(183),
    [anon_sym_BANG_EQ] = ACTIONS(183),
    [anon_sym_GT] = ACTIONS(187),
    [anon_sym_LT] = ACTIONS(187),
    [anon_sym_LT_EQ] = ACTIONS(183),
    [anon_sym_GT_EQ] = ACTIONS(183),
    [sym_comment] = ACTIONS(13),
  },
  [67] = {
    [sym__expression] = STATE(81),
    [sym_unary_expression] = STATE(81),
    [sym_binary_expression] = STATE(81),
    [sym_subscript_expression] = STATE(55),
    [sym_call_expression] = STATE(56),
    [sym_field_expression] = STATE(49),
    [sym_indirection_field_expression] = STATE(57),
    [sym_user_property_expression] = STATE(81),
    [sym_string_literal] = STATE(81),
    [sym_char_literal] = STATE(81),
    [sym_parenthesized_expression] = STATE(81),
    [sym_identifier] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_not] = ACTIONS(129),
    [anon_sym_DASH] = ACTIONS(131),
    [sym_indirection_expression] = ACTIONS(88),
    [sym_number_literal] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_SQUOTE_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [sym_true] = ACTIONS(171),
    [sym_false] = ACTIONS(171),
    [sym_null] = ACTIONS(171),
    [sym_comment] = ACTIONS(13),
  },
  [68] = {
    [anon_sym_EQ] = ACTIONS(237),
    [anon_sym_DASH] = ACTIONS(237),
    [anon_sym_or] = ACTIONS(237),
    [anon_sym_and] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(237),
    [anon_sym_STAR] = ACTIONS(237),
    [anon_sym_SLASH] = ACTIONS(239),
    [anon_sym_PERCENT] = ACTIONS(237),
    [anon_sym_AMP] = ACTIONS(237),
    [anon_sym_BANG_EQ] = ACTIONS(237),
    [anon_sym_GT] = ACTIONS(239),
    [anon_sym_LT] = ACTIONS(239),
    [anon_sym_LT_EQ] = ACTIONS(237),
    [anon_sym_GT_EQ] = ACTIONS(237),
    [anon_sym_RBRACK] = ACTIONS(241),
    [sym_comment] = ACTIONS(13),
  },
  [69] = {
    [anon_sym_LPAREN] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_LBRACE] = ACTIONS(243),
    [anon_sym_EQ] = ACTIONS(243),
    [anon_sym_SEMI] = ACTIONS(243),
    [anon_sym_to] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(243),
    [anon_sym_or] = ACTIONS(243),
    [anon_sym_and] = ACTIONS(243),
    [anon_sym_PLUS] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(245),
    [anon_sym_PERCENT] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(245),
    [anon_sym_LT_EQ] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(243),
    [anon_sym_RBRACK] = ACTIONS(243),
    [anon_sym_DOT] = ACTIONS(243),
    [sym_comment] = ACTIONS(13),
  },
  [70] = {
    [anon_sym_COLON] = ACTIONS(247),
    [sym_comment] = ACTIONS(13),
  },
  [71] = {
    [anon_sym_LPAREN] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_to] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(251),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_AMP] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_RBRACK] = ACTIONS(249),
    [anon_sym_DOT] = ACTIONS(249),
    [sym_comment] = ACTIONS(13),
  },
  [72] = {
    [sym__expression] = STATE(81),
    [sym_unary_expression] = STATE(81),
    [sym_binary_expression] = STATE(81),
    [sym_subscript_expression] = STATE(55),
    [sym_call_expression] = STATE(56),
    [sym_field_expression] = STATE(49),
    [sym_indirection_field_expression] = STATE(57),
    [sym_user_property_expression] = STATE(81),
    [sym_string_literal] = STATE(81),
    [sym_char_literal] = STATE(81),
    [sym_parenthesized_expression] = STATE(81),
    [sym_identifier] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_not] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(149),
    [sym_indirection_expression] = ACTIONS(88),
    [sym_number_literal] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_SQUOTE_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [sym_true] = ACTIONS(171),
    [sym_false] = ACTIONS(171),
    [sym_null] = ACTIONS(171),
    [sym_comment] = ACTIONS(13),
  },
  [73] = {
    [anon_sym_RPAREN] = ACTIONS(253),
    [anon_sym_EQ] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_or] = ACTIONS(255),
    [anon_sym_and] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_SLASH] = ACTIONS(257),
    [anon_sym_PERCENT] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(255),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [sym_comment] = ACTIONS(13),
  },
  [74] = {
    [sym__statement] = STATE(96),
    [sym_assignment_statement] = STATE(96),
    [sym_call_statement] = STATE(96),
    [sym_if_statement] = STATE(96),
    [sym_switch_statement] = STATE(96),
    [sym_for_statement] = STATE(96),
    [sym_for_each_statement] = STATE(96),
    [sym_empty_statement] = STATE(96),
    [sym_while_statement] = STATE(96),
    [sym_return_statement] = STATE(96),
    [sym_subscript_expression] = STATE(29),
    [sym_call_expression] = STATE(30),
    [sym_field_expression] = STATE(21),
    [sym_indirection_field_expression] = STATE(31),
    [sym_user_property_expression] = STATE(32),
    [aux_sym_statement_block_repeat1] = STATE(96),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_switch] = ACTIONS(41),
    [anon_sym_for] = ACTIONS(43),
    [anon_sym_while] = ACTIONS(45),
    [anon_sym_return] = ACTIONS(47),
    [sym_indirection_expression] = ACTIONS(49),
    [sym_comment] = ACTIONS(13),
  },
  [75] = {
    [sym_identifier] = ACTIONS(259),
    [anon_sym_RBRACE] = ACTIONS(261),
    [anon_sym_SEMI] = ACTIONS(261),
    [anon_sym_if] = ACTIONS(259),
    [anon_sym_else] = ACTIONS(263),
    [anon_sym_switch] = ACTIONS(259),
    [anon_sym_for] = ACTIONS(259),
    [anon_sym_while] = ACTIONS(259),
    [anon_sym_return] = ACTIONS(259),
    [sym_indirection_expression] = ACTIONS(261),
    [sym_comment] = ACTIONS(13),
  },
  [76] = {
    [sym_switch_case] = STATE(102),
    [sym_switch_default] = STATE(101),
    [aux_sym_switch_statement_repeat1] = STATE(102),
    [anon_sym_RBRACE] = ACTIONS(265),
    [anon_sym_case] = ACTIONS(267),
    [anon_sym_default] = ACTIONS(269),
    [sym_comment] = ACTIONS(13),
  },
  [77] = {
    [sym__expression] = STATE(104),
    [sym_unary_expression] = STATE(104),
    [sym_binary_expression] = STATE(104),
    [sym_subscript_expression] = STATE(55),
    [sym_call_expression] = STATE(56),
    [sym_field_expression] = STATE(49),
    [sym_indirection_field_expression] = STATE(57),
    [sym_user_property_expression] = STATE(104),
    [sym_string_literal] = STATE(104),
    [sym_char_literal] = STATE(104),
    [sym_parenthesized_expression] = STATE(104),
    [sym_identifier] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_not] = ACTIONS(271),
    [anon_sym_DASH] = ACTIONS(273),
    [sym_indirection_expression] = ACTIONS(88),
    [sym_number_literal] = ACTIONS(275),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_SQUOTE_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [sym_true] = ACTIONS(277),
    [sym_false] = ACTIONS(277),
    [sym_null] = ACTIONS(277),
    [sym_comment] = ACTIONS(13),
  },
  [78] = {
    [sym_identifier] = ACTIONS(279),
    [anon_sym_in] = ACTIONS(281),
    [sym_comment] = ACTIONS(13),
  },
  [79] = {
    [sym__statement] = STATE(107),
    [sym_assignment_statement] = STATE(107),
    [sym_call_statement] = STATE(107),
    [sym_if_statement] = STATE(107),
    [sym_switch_statement] = STATE(107),
    [sym_for_statement] = STATE(107),
    [sym_for_each_statement] = STATE(107),
    [sym_empty_statement] = STATE(107),
    [sym_while_statement] = STATE(107),
    [sym_return_statement] = STATE(107),
    [sym_subscript_expression] = STATE(29),
    [sym_call_expression] = STATE(30),
    [sym_field_expression] = STATE(21),
    [sym_indirection_field_expression] = STATE(31),
    [sym_user_property_expression] = STATE(32),
    [aux_sym_statement_block_repeat1] = STATE(107),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_switch] = ACTIONS(41),
    [anon_sym_for] = ACTIONS(43),
    [anon_sym_while] = ACTIONS(45),
    [anon_sym_return] = ACTIONS(47),
    [sym_indirection_expression] = ACTIONS(49),
    [sym_comment] = ACTIONS(13),
  },
  [80] = {
    [sym_identifier] = ACTIONS(283),
    [anon_sym_RBRACE] = ACTIONS(285),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_if] = ACTIONS(283),
    [anon_sym_switch] = ACTIONS(283),
    [anon_sym_for] = ACTIONS(283),
    [anon_sym_while] = ACTIONS(283),
    [anon_sym_return] = ACTIONS(283),
    [sym_indirection_expression] = ACTIONS(285),
    [sym_comment] = ACTIONS(13),
  },
  [81] = {
    [anon_sym_COMMA] = ACTIONS(287),
    [anon_sym_RPAREN] = ACTIONS(287),
    [anon_sym_LBRACE] = ACTIONS(287),
    [anon_sym_EQ] = ACTIONS(287),
    [anon_sym_SEMI] = ACTIONS(287),
    [anon_sym_to] = ACTIONS(287),
    [anon_sym_DASH] = ACTIONS(287),
    [anon_sym_or] = ACTIONS(287),
    [anon_sym_and] = ACTIONS(287),
    [anon_sym_PLUS] = ACTIONS(287),
    [anon_sym_STAR] = ACTIONS(287),
    [anon_sym_SLASH] = ACTIONS(289),
    [anon_sym_PERCENT] = ACTIONS(287),
    [anon_sym_AMP] = ACTIONS(287),
    [anon_sym_BANG_EQ] = ACTIONS(287),
    [anon_sym_GT] = ACTIONS(289),
    [anon_sym_LT] = ACTIONS(289),
    [anon_sym_LT_EQ] = ACTIONS(287),
    [anon_sym_GT_EQ] = ACTIONS(287),
    [anon_sym_RBRACK] = ACTIONS(287),
    [sym_comment] = ACTIONS(13),
  },
  [82] = {
    [anon_sym_COMMA] = ACTIONS(291),
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_LBRACE] = ACTIONS(291),
    [anon_sym_EQ] = ACTIONS(291),
    [anon_sym_SEMI] = ACTIONS(291),
    [anon_sym_to] = ACTIONS(291),
    [anon_sym_DASH] = ACTIONS(291),
    [anon_sym_or] = ACTIONS(291),
    [anon_sym_and] = ACTIONS(291),
    [anon_sym_PLUS] = ACTIONS(291),
    [anon_sym_STAR] = ACTIONS(291),
    [anon_sym_SLASH] = ACTIONS(293),
    [anon_sym_PERCENT] = ACTIONS(291),
    [anon_sym_AMP] = ACTIONS(291),
    [anon_sym_BANG_EQ] = ACTIONS(291),
    [anon_sym_GT] = ACTIONS(293),
    [anon_sym_LT] = ACTIONS(293),
    [anon_sym_LT_EQ] = ACTIONS(291),
    [anon_sym_GT_EQ] = ACTIONS(291),
    [anon_sym_RBRACK] = ACTIONS(291),
    [sym_comment] = ACTIONS(13),
  },
  [83] = {
    [aux_sym_string_literal_repeat1] = STATE(109),
    [anon_sym_SQUOTE] = ACTIONS(295),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(297),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH2] = ACTIONS(297),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(297),
    [sym_comment] = ACTIONS(177),
  },
  [84] = {
    [sym__expression] = STATE(110),
    [sym_unary_expression] = STATE(110),
    [sym_binary_expression] = STATE(110),
    [sym_subscript_expression] = STATE(55),
    [sym_call_expression] = STATE(56),
    [sym_field_expression] = STATE(49),
    [sym_indirection_field_expression] = STATE(57),
    [sym_user_property_expression] = STATE(110),
    [sym_string_literal] = STATE(110),
    [sym_char_literal] = STATE(110),
    [sym_parenthesized_expression] = STATE(110),
    [sym_identifier] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_not] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(86),
    [sym_indirection_expression] = ACTIONS(88),
    [sym_number_literal] = ACTIONS(299),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_SQUOTE_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [sym_true] = ACTIONS(301),
    [sym_false] = ACTIONS(301),
    [sym_null] = ACTIONS(301),
    [sym_comment] = ACTIONS(13),
  },
  [85] = {
    [sym_identifier] = ACTIONS(303),
    [anon_sym_RBRACE] = ACTIONS(305),
    [anon_sym_SEMI] = ACTIONS(305),
    [anon_sym_if] = ACTIONS(303),
    [anon_sym_switch] = ACTIONS(303),
    [anon_sym_for] = ACTIONS(303),
    [anon_sym_while] = ACTIONS(303),
    [anon_sym_return] = ACTIONS(303),
    [sym_indirection_expression] = ACTIONS(305),
    [sym_comment] = ACTIONS(13),
  },
  [86] = {
    [sym__expression] = STATE(111),
    [sym_unary_expression] = STATE(111),
    [sym_binary_expression] = STATE(111),
    [sym_subscript_expression] = STATE(55),
    [sym_call_expression] = STATE(56),
    [sym_field_expression] = STATE(49),
    [sym_indirection_field_expression] = STATE(57),
    [sym_user_property_expression] = STATE(111),
    [sym_string_literal] = STATE(111),
    [sym_char_literal] = STATE(111),
    [sym_parenthesized_expression] = STATE(111),
    [sym_identifier] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_not] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(119),
    [sym_indirection_expression] = ACTIONS(88),
    [sym_number_literal] = ACTIONS(307),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_SQUOTE_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [sym_true] = ACTIONS(309),
    [sym_false] = ACTIONS(309),
    [sym_null] = ACTIONS(309),
    [sym_comment] = ACTIONS(13),
  },
  [87] = {
    [anon_sym_COMMA] = ACTIONS(311),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_LBRACE] = ACTIONS(311),
    [anon_sym_EQ] = ACTIONS(311),
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_to] = ACTIONS(311),
    [anon_sym_DASH] = ACTIONS(311),
    [anon_sym_or] = ACTIONS(311),
    [anon_sym_and] = ACTIONS(311),
    [anon_sym_PLUS] = ACTIONS(311),
    [anon_sym_STAR] = ACTIONS(311),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_PERCENT] = ACTIONS(311),
    [anon_sym_AMP] = ACTIONS(311),
    [anon_sym_BANG_EQ] = ACTIONS(311),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_LT_EQ] = ACTIONS(311),
    [anon_sym_GT_EQ] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(311),
    [anon_sym_RBRACK] = ACTIONS(311),
    [anon_sym_DOT] = ACTIONS(311),
    [sym_comment] = ACTIONS(13),
  },
  [88] = {
    [sym__expression] = STATE(110),
    [sym_unary_expression] = STATE(110),
    [sym_binary_expression] = STATE(110),
    [sym_subscript_expression] = STATE(55),
    [sym_call_expression] = STATE(56),
    [sym_field_expression] = STATE(49),
    [sym_indirection_field_expression] = STATE(57),
    [sym_user_property_expression] = STATE(110),
    [sym_string_literal] = STATE(110),
    [sym_char_literal] = STATE(110),
    [sym_parenthesized_expression] = STATE(110),
    [sym_identifier] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_not] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(119),
    [sym_indirection_expression] = ACTIONS(88),
    [sym_number_literal] = ACTIONS(299),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_SQUOTE_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [sym_true] = ACTIONS(301),
    [sym_false] = ACTIONS(301),
    [sym_null] = ACTIONS(301),
    [sym_comment] = ACTIONS(13),
  },
  [89] = {
    [aux_sym_argument_list_repeat1] = STATE(113),
    [anon_sym_COMMA] = ACTIONS(227),
    [anon_sym_RPAREN] = ACTIONS(315),
    [sym_comment] = ACTIONS(13),
  },
  [90] = {
    [sym_identifier] = ACTIONS(317),
    [anon_sym_RBRACE] = ACTIONS(319),
    [anon_sym_SEMI] = ACTIONS(319),
    [anon_sym_if] = ACTIONS(317),
    [anon_sym_switch] = ACTIONS(317),
    [anon_sym_for] = ACTIONS(317),
    [anon_sym_while] = ACTIONS(317),
    [anon_sym_return] = ACTIONS(317),
    [sym_indirection_expression] = ACTIONS(319),
    [sym_comment] = ACTIONS(13),
  },
  [91] = {
    [sym__expression] = STATE(110),
    [sym_unary_expression] = STATE(110),
    [sym_binary_expression] = STATE(110),
    [sym_subscript_expression] = STATE(55),
    [sym_call_expression] = STATE(56),
    [sym_field_expression] = STATE(49),
    [sym_indirection_field_expression] = STATE(57),
    [sym_user_property_expression] = STATE(110),
    [sym_string_literal] = STATE(110),
    [sym_char_literal] = STATE(110),
    [sym_parenthesized_expression] = STATE(110),
    [sym_identifier] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_not] = ACTIONS(129),
    [anon_sym_DASH] = ACTIONS(131),
    [sym_indirection_expression] = ACTIONS(88),
    [sym_number_literal] = ACTIONS(299),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_SQUOTE_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [sym_true] = ACTIONS(301),
    [sym_false] = ACTIONS(301),
    [sym_null] = ACTIONS(301),
    [sym_comment] = ACTIONS(13),
  },
  [92] = {
    [anon_sym_COMMA] = ACTIONS(321),
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_LBRACE] = ACTIONS(321),
    [anon_sym_EQ] = ACTIONS(321),
    [anon_sym_SEMI] = ACTIONS(321),
    [anon_sym_to] = ACTIONS(321),
    [anon_sym_DASH] = ACTIONS(321),
    [anon_sym_or] = ACTIONS(321),
    [anon_sym_and] = ACTIONS(321),
    [anon_sym_PLUS] = ACTIONS(321),
    [anon_sym_STAR] = ACTIONS(321),
    [anon_sym_SLASH] = ACTIONS(323),
    [anon_sym_PERCENT] = ACTIONS(321),
    [anon_sym_AMP] = ACTIONS(321),
    [anon_sym_BANG_EQ] = ACTIONS(321),
    [anon_sym_GT] = ACTIONS(323),
    [anon_sym_LT] = ACTIONS(323),
    [anon_sym_LT_EQ] = ACTIONS(321),
    [anon_sym_GT_EQ] = ACTIONS(321),
    [anon_sym_RBRACK] = ACTIONS(321),
    [anon_sym_DOT] = ACTIONS(321),
    [sym_comment] = ACTIONS(13),
  },
  [93] = {
    [sym_identifier] = ACTIONS(325),
    [sym_comment] = ACTIONS(13),
  },
  [94] = {
    [anon_sym_COMMA] = ACTIONS(327),
    [anon_sym_RPAREN] = ACTIONS(327),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_EQ] = ACTIONS(327),
    [anon_sym_SEMI] = ACTIONS(327),
    [anon_sym_to] = ACTIONS(327),
    [anon_sym_DASH] = ACTIONS(327),
    [anon_sym_or] = ACTIONS(327),
    [anon_sym_and] = ACTIONS(327),
    [anon_sym_PLUS] = ACTIONS(327),
    [anon_sym_STAR] = ACTIONS(327),
    [anon_sym_SLASH] = ACTIONS(329),
    [anon_sym_PERCENT] = ACTIONS(327),
    [anon_sym_AMP] = ACTIONS(327),
    [anon_sym_BANG_EQ] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_LT] = ACTIONS(329),
    [anon_sym_LT_EQ] = ACTIONS(327),
    [anon_sym_GT_EQ] = ACTIONS(327),
    [anon_sym_RBRACK] = ACTIONS(327),
    [sym_comment] = ACTIONS(13),
  },
  [95] = {
    [sym__expression] = STATE(110),
    [sym_unary_expression] = STATE(110),
    [sym_binary_expression] = STATE(110),
    [sym_subscript_expression] = STATE(55),
    [sym_call_expression] = STATE(56),
    [sym_field_expression] = STATE(49),
    [sym_indirection_field_expression] = STATE(57),
    [sym_user_property_expression] = STATE(110),
    [sym_string_literal] = STATE(110),
    [sym_char_literal] = STATE(110),
    [sym_parenthesized_expression] = STATE(110),
    [sym_identifier] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_not] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(149),
    [sym_indirection_expression] = ACTIONS(88),
    [sym_number_literal] = ACTIONS(299),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_SQUOTE_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [sym_true] = ACTIONS(301),
    [sym_false] = ACTIONS(301),
    [sym_null] = ACTIONS(301),
    [sym_comment] = ACTIONS(13),
  },
  [96] = {
    [sym__statement] = STATE(62),
    [sym_assignment_statement] = STATE(62),
    [sym_call_statement] = STATE(62),
    [sym_if_statement] = STATE(62),
    [sym_switch_statement] = STATE(62),
    [sym_for_statement] = STATE(62),
    [sym_for_each_statement] = STATE(62),
    [sym_empty_statement] = STATE(62),
    [sym_while_statement] = STATE(62),
    [sym_return_statement] = STATE(62),
    [sym_subscript_expression] = STATE(29),
    [sym_call_expression] = STATE(30),
    [sym_field_expression] = STATE(21),
    [sym_indirection_field_expression] = STATE(31),
    [sym_user_property_expression] = STATE(32),
    [aux_sym_statement_block_repeat1] = STATE(62),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(331),
    [anon_sym_SEMI] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_switch] = ACTIONS(41),
    [anon_sym_for] = ACTIONS(43),
    [anon_sym_while] = ACTIONS(45),
    [anon_sym_return] = ACTIONS(47),
    [sym_indirection_expression] = ACTIONS(49),
    [sym_comment] = ACTIONS(13),
  },
  [97] = {
    [sym_statement_block] = STATE(116),
    [anon_sym_LBRACE] = ACTIONS(163),
    [sym_comment] = ACTIONS(13),
  },
  [98] = {
    [sym_identifier] = ACTIONS(333),
    [anon_sym_RBRACE] = ACTIONS(335),
    [anon_sym_SEMI] = ACTIONS(335),
    [anon_sym_if] = ACTIONS(333),
    [anon_sym_switch] = ACTIONS(333),
    [anon_sym_for] = ACTIONS(333),
    [anon_sym_while] = ACTIONS(333),
    [anon_sym_return] = ACTIONS(333),
    [sym_indirection_expression] = ACTIONS(335),
    [sym_comment] = ACTIONS(13),
  },
  [99] = {
    [sym__expression] = STATE(118),
    [sym_unary_expression] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [sym_subscript_expression] = STATE(55),
    [sym_call_expression] = STATE(56),
    [sym_field_expression] = STATE(49),
    [sym_indirection_field_expression] = STATE(57),
    [sym_user_property_expression] = STATE(118),
    [sym_string_literal] = STATE(118),
    [sym_char_literal] = STATE(118),
    [sym_parenthesized_expression] = STATE(118),
    [sym_identifier] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_not] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(339),
    [sym_indirection_expression] = ACTIONS(88),
    [sym_number_literal] = ACTIONS(341),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_SQUOTE_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [sym_true] = ACTIONS(343),
    [sym_false] = ACTIONS(343),
    [sym_null] = ACTIONS(343),
    [sym_comment] = ACTIONS(13),
  },
  [100] = {
    [sym_statement_block] = STATE(119),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_comment] = ACTIONS(13),
  },
  [101] = {
    [anon_sym_RBRACE] = ACTIONS(345),
    [sym_comment] = ACTIONS(13),
  },
  [102] = {
    [sym_switch_case] = STATE(122),
    [sym_switch_default] = STATE(121),
    [aux_sym_switch_statement_repeat1] = STATE(122),
    [anon_sym_RBRACE] = ACTIONS(345),
    [anon_sym_case] = ACTIONS(267),
    [anon_sym_default] = ACTIONS(269),
    [sym_comment] = ACTIONS(13),
  },
  [103] = {
    [sym__expression] = STATE(81),
    [sym_unary_expression] = STATE(81),
    [sym_binary_expression] = STATE(81),
    [sym_subscript_expression] = STATE(55),
    [sym_call_expression] = STATE(56),
    [sym_field_expression] = STATE(49),
    [sym_indirection_field_expression] = STATE(57),
    [sym_user_property_expression] = STATE(81),
    [sym_string_literal] = STATE(81),
    [sym_char_literal] = STATE(81),
    [sym_parenthesized_expression] = STATE(81),
    [sym_identifier] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_not] = ACTIONS(271),
    [anon_sym_DASH] = ACTIONS(273),
    [sym_indirection_expression] = ACTIONS(88),
    [sym_number_literal] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_SQUOTE_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [sym_true] = ACTIONS(171),
    [sym_false] = ACTIONS(171),
    [sym_null] = ACTIONS(171),
    [sym_comment] = ACTIONS(13),
  },
  [104] = {
    [anon_sym_EQ] = ACTIONS(347),
    [anon_sym_to] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(347),
    [anon_sym_or] = ACTIONS(347),
    [anon_sym_and] = ACTIONS(347),
    [anon_sym_PLUS] = ACTIONS(347),
    [anon_sym_STAR] = ACTIONS(347),
    [anon_sym_SLASH] = ACTIONS(351),
    [anon_sym_PERCENT] = ACTIONS(347),
    [anon_sym_AMP] = ACTIONS(347),
    [anon_sym_BANG_EQ] = ACTIONS(347),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_LT] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(347),
    [anon_sym_GT_EQ] = ACTIONS(347),
    [sym_comment] = ACTIONS(13),
  },
  [105] = {
    [anon_sym_in] = ACTIONS(353),
    [sym_comment] = ACTIONS(13),
  },
  [106] = {
    [sym__expression] = STATE(126),
    [sym_unary_expression] = STATE(126),
    [sym_binary_expression] = STATE(126),
    [sym_subscript_expression] = STATE(55),
    [sym_call_expression] = STATE(56),
    [sym_field_expression] = STATE(49),
    [sym_indirection_field_expression] = STATE(57),
    [sym_user_property_expression] = STATE(126),
    [sym_string_literal] = STATE(126),
    [sym_char_literal] = STATE(126),
    [sym_parenthesized_expression] = STATE(126),
    [sym_identifier] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_not] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(339),
    [sym_indirection_expression] = ACTIONS(88),
    [sym_number_literal] = ACTIONS(355),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_SQUOTE_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [sym_true] = ACTIONS(357),
    [sym_false] = ACTIONS(357),
    [sym_null] = ACTIONS(357),
    [sym_comment] = ACTIONS(13),
  },
  [107] = {
    [sym__statement] = STATE(62),
    [sym_assignment_statement] = STATE(62),
    [sym_call_statement] = STATE(62),
    [sym_if_statement] = STATE(62),
    [sym_switch_statement] = STATE(62),
    [sym_for_statement] = STATE(62),
    [sym_for_each_statement] = STATE(62),
    [sym_empty_statement] = STATE(62),
    [sym_while_statement] = STATE(62),
    [sym_return_statement] = STATE(62),
    [sym_subscript_expression] = STATE(29),
    [sym_call_expression] = STATE(30),
    [sym_field_expression] = STATE(21),
    [sym_indirection_field_expression] = STATE(31),
    [sym_user_property_expression] = STATE(32),
    [aux_sym_statement_block_repeat1] = STATE(62),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(359),
    [anon_sym_SEMI] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_switch] = ACTIONS(41),
    [anon_sym_for] = ACTIONS(43),
    [anon_sym_while] = ACTIONS(45),
    [anon_sym_return] = ACTIONS(47),
    [sym_indirection_expression] = ACTIONS(49),
    [sym_comment] = ACTIONS(13),
  },
  [108] = {
    [anon_sym_COMMA] = ACTIONS(361),
    [anon_sym_RPAREN] = ACTIONS(361),
    [anon_sym_LBRACE] = ACTIONS(361),
    [anon_sym_EQ] = ACTIONS(361),
    [anon_sym_SEMI] = ACTIONS(361),
    [anon_sym_to] = ACTIONS(361),
    [anon_sym_DASH] = ACTIONS(361),
    [anon_sym_or] = ACTIONS(361),
    [anon_sym_and] = ACTIONS(361),
    [anon_sym_PLUS] = ACTIONS(361),
    [anon_sym_STAR] = ACTIONS(361),
    [anon_sym_SLASH] = ACTIONS(363),
    [anon_sym_PERCENT] = ACTIONS(361),
    [anon_sym_AMP] = ACTIONS(361),
    [anon_sym_BANG_EQ] = ACTIONS(361),
    [anon_sym_GT] = ACTIONS(363),
    [anon_sym_LT] = ACTIONS(363),
    [anon_sym_LT_EQ] = ACTIONS(361),
    [anon_sym_GT_EQ] = ACTIONS(361),
    [anon_sym_RBRACK] = ACTIONS(361),
    [sym_comment] = ACTIONS(13),
  },
  [109] = {
    [aux_sym_string_literal_repeat1] = STATE(109),
    [anon_sym_SQUOTE] = ACTIONS(365),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH2] = ACTIONS(367),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(367),
    [sym_comment] = ACTIONS(177),
  },
  [110] = {
    [anon_sym_COMMA] = ACTIONS(370),
    [anon_sym_RPAREN] = ACTIONS(370),
    [anon_sym_LBRACE] = ACTIONS(370),
    [anon_sym_EQ] = ACTIONS(370),
    [anon_sym_SEMI] = ACTIONS(370),
    [anon_sym_to] = ACTIONS(370),
    [anon_sym_DASH] = ACTIONS(370),
    [anon_sym_or] = ACTIONS(370),
    [anon_sym_and] = ACTIONS(370),
    [anon_sym_PLUS] = ACTIONS(370),
    [anon_sym_STAR] = ACTIONS(370),
    [anon_sym_SLASH] = ACTIONS(372),
    [anon_sym_PERCENT] = ACTIONS(370),
    [anon_sym_AMP] = ACTIONS(370),
    [anon_sym_BANG_EQ] = ACTIONS(370),
    [anon_sym_GT] = ACTIONS(372),
    [anon_sym_LT] = ACTIONS(372),
    [anon_sym_LT_EQ] = ACTIONS(370),
    [anon_sym_GT_EQ] = ACTIONS(370),
    [anon_sym_RBRACK] = ACTIONS(370),
    [sym_comment] = ACTIONS(13),
  },
  [111] = {
    [anon_sym_COMMA] = ACTIONS(374),
    [anon_sym_RPAREN] = ACTIONS(374),
    [anon_sym_EQ] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(231),
    [anon_sym_or] = ACTIONS(231),
    [anon_sym_and] = ACTIONS(231),
    [anon_sym_PLUS] = ACTIONS(231),
    [anon_sym_STAR] = ACTIONS(231),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_PERCENT] = ACTIONS(231),
    [anon_sym_AMP] = ACTIONS(231),
    [anon_sym_BANG_EQ] = ACTIONS(231),
    [anon_sym_GT] = ACTIONS(233),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(231),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [sym_comment] = ACTIONS(13),
  },
  [112] = {
    [anon_sym_COMMA] = ACTIONS(376),
    [anon_sym_RPAREN] = ACTIONS(376),
    [anon_sym_LBRACE] = ACTIONS(376),
    [anon_sym_EQ] = ACTIONS(376),
    [anon_sym_SEMI] = ACTIONS(376),
    [anon_sym_to] = ACTIONS(376),
    [anon_sym_DASH] = ACTIONS(376),
    [anon_sym_or] = ACTIONS(376),
    [anon_sym_and] = ACTIONS(376),
    [anon_sym_PLUS] = ACTIONS(376),
    [anon_sym_STAR] = ACTIONS(376),
    [anon_sym_SLASH] = ACTIONS(378),
    [anon_sym_PERCENT] = ACTIONS(376),
    [anon_sym_AMP] = ACTIONS(376),
    [anon_sym_BANG_EQ] = ACTIONS(376),
    [anon_sym_GT] = ACTIONS(378),
    [anon_sym_LT] = ACTIONS(378),
    [anon_sym_LT_EQ] = ACTIONS(376),
    [anon_sym_GT_EQ] = ACTIONS(376),
    [anon_sym_LBRACK] = ACTIONS(376),
    [anon_sym_RBRACK] = ACTIONS(376),
    [anon_sym_DOT] = ACTIONS(376),
    [sym_comment] = ACTIONS(13),
  },
  [113] = {
    [aux_sym_argument_list_repeat1] = STATE(113),
    [anon_sym_COMMA] = ACTIONS(380),
    [anon_sym_RPAREN] = ACTIONS(374),
    [sym_comment] = ACTIONS(13),
  },
  [114] = {
    [anon_sym_COMMA] = ACTIONS(383),
    [anon_sym_RPAREN] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [anon_sym_EQ] = ACTIONS(383),
    [anon_sym_SEMI] = ACTIONS(383),
    [anon_sym_to] = ACTIONS(383),
    [anon_sym_DASH] = ACTIONS(383),
    [anon_sym_or] = ACTIONS(383),
    [anon_sym_and] = ACTIONS(383),
    [anon_sym_PLUS] = ACTIONS(383),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(385),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_AMP] = ACTIONS(383),
    [anon_sym_BANG_EQ] = ACTIONS(383),
    [anon_sym_GT] = ACTIONS(385),
    [anon_sym_LT] = ACTIONS(385),
    [anon_sym_LT_EQ] = ACTIONS(383),
    [anon_sym_GT_EQ] = ACTIONS(383),
    [anon_sym_RBRACK] = ACTIONS(383),
    [sym_comment] = ACTIONS(13),
  },
  [115] = {
    [sym_identifier] = ACTIONS(387),
    [anon_sym_RBRACE] = ACTIONS(195),
    [anon_sym_SEMI] = ACTIONS(195),
    [anon_sym_if] = ACTIONS(387),
    [anon_sym_else] = ACTIONS(387),
    [anon_sym_switch] = ACTIONS(387),
    [anon_sym_for] = ACTIONS(387),
    [anon_sym_while] = ACTIONS(387),
    [anon_sym_return] = ACTIONS(387),
    [sym_indirection_expression] = ACTIONS(195),
    [sym_comment] = ACTIONS(13),
  },
  [116] = {
    [sym_identifier] = ACTIONS(389),
    [anon_sym_RBRACE] = ACTIONS(391),
    [anon_sym_SEMI] = ACTIONS(391),
    [anon_sym_if] = ACTIONS(389),
    [anon_sym_switch] = ACTIONS(389),
    [anon_sym_for] = ACTIONS(389),
    [anon_sym_while] = ACTIONS(389),
    [anon_sym_return] = ACTIONS(389),
    [sym_indirection_expression] = ACTIONS(391),
    [sym_comment] = ACTIONS(13),
  },
  [117] = {
    [sym__expression] = STATE(81),
    [sym_unary_expression] = STATE(81),
    [sym_binary_expression] = STATE(81),
    [sym_subscript_expression] = STATE(55),
    [sym_call_expression] = STATE(56),
    [sym_field_expression] = STATE(49),
    [sym_indirection_field_expression] = STATE(57),
    [sym_user_property_expression] = STATE(81),
    [sym_string_literal] = STATE(81),
    [sym_char_literal] = STATE(81),
    [sym_parenthesized_expression] = STATE(81),
    [sym_identifier] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_not] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(339),
    [sym_indirection_expression] = ACTIONS(88),
    [sym_number_literal] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_SQUOTE_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [sym_true] = ACTIONS(171),
    [sym_false] = ACTIONS(171),
    [sym_null] = ACTIONS(171),
    [sym_comment] = ACTIONS(13),
  },
  [118] = {
    [sym_statement_block] = STATE(129),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [anon_sym_or] = ACTIONS(393),
    [anon_sym_and] = ACTIONS(393),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_PERCENT] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(393),
    [anon_sym_BANG_EQ] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(395),
    [anon_sym_LT] = ACTIONS(395),
    [anon_sym_LT_EQ] = ACTIONS(393),
    [anon_sym_GT_EQ] = ACTIONS(393),
    [sym_comment] = ACTIONS(13),
  },
  [119] = {
    [anon_sym_RBRACE] = ACTIONS(397),
    [sym_comment] = ACTIONS(13),
  },
  [120] = {
    [sym_identifier] = ACTIONS(399),
    [anon_sym_RBRACE] = ACTIONS(401),
    [anon_sym_SEMI] = ACTIONS(401),
    [anon_sym_if] = ACTIONS(399),
    [anon_sym_switch] = ACTIONS(399),
    [anon_sym_for] = ACTIONS(399),
    [anon_sym_while] = ACTIONS(399),
    [anon_sym_return] = ACTIONS(399),
    [sym_indirection_expression] = ACTIONS(401),
    [sym_comment] = ACTIONS(13),
  },
  [121] = {
    [anon_sym_RBRACE] = ACTIONS(403),
    [sym_comment] = ACTIONS(13),
  },
  [122] = {
    [sym_switch_case] = STATE(122),
    [aux_sym_switch_statement_repeat1] = STATE(122),
    [anon_sym_RBRACE] = ACTIONS(405),
    [anon_sym_case] = ACTIONS(407),
    [anon_sym_default] = ACTIONS(405),
    [sym_comment] = ACTIONS(13),
  },
  [123] = {
    [sym__expression] = STATE(110),
    [sym_unary_expression] = STATE(110),
    [sym_binary_expression] = STATE(110),
    [sym_subscript_expression] = STATE(55),
    [sym_call_expression] = STATE(56),
    [sym_field_expression] = STATE(49),
    [sym_indirection_field_expression] = STATE(57),
    [sym_user_property_expression] = STATE(110),
    [sym_string_literal] = STATE(110),
    [sym_char_literal] = STATE(110),
    [sym_parenthesized_expression] = STATE(110),
    [sym_identifier] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_not] = ACTIONS(271),
    [anon_sym_DASH] = ACTIONS(273),
    [sym_indirection_expression] = ACTIONS(88),
    [sym_number_literal] = ACTIONS(299),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_SQUOTE_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [sym_true] = ACTIONS(301),
    [sym_false] = ACTIONS(301),
    [sym_null] = ACTIONS(301),
    [sym_comment] = ACTIONS(13),
  },
  [124] = {
    [sym__expression] = STATE(131),
    [sym_unary_expression] = STATE(131),
    [sym_binary_expression] = STATE(131),
    [sym_subscript_expression] = STATE(55),
    [sym_call_expression] = STATE(56),
    [sym_field_expression] = STATE(49),
    [sym_indirection_field_expression] = STATE(57),
    [sym_user_property_expression] = STATE(131),
    [sym_string_literal] = STATE(131),
    [sym_char_literal] = STATE(131),
    [sym_parenthesized_expression] = STATE(131),
    [sym_identifier] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_not] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(339),
    [sym_indirection_expression] = ACTIONS(88),
    [sym_number_literal] = ACTIONS(410),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_SQUOTE_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [sym_true] = ACTIONS(412),
    [sym_false] = ACTIONS(412),
    [sym_null] = ACTIONS(412),
    [sym_comment] = ACTIONS(13),
  },
  [125] = {
    [sym__expression] = STATE(132),
    [sym_unary_expression] = STATE(132),
    [sym_binary_expression] = STATE(132),
    [sym_subscript_expression] = STATE(55),
    [sym_call_expression] = STATE(56),
    [sym_field_expression] = STATE(49),
    [sym_indirection_field_expression] = STATE(57),
    [sym_user_property_expression] = STATE(132),
    [sym_string_literal] = STATE(132),
    [sym_char_literal] = STATE(132),
    [sym_parenthesized_expression] = STATE(132),
    [sym_identifier] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_not] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(339),
    [sym_indirection_expression] = ACTIONS(88),
    [sym_number_literal] = ACTIONS(414),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_SQUOTE_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [sym_true] = ACTIONS(416),
    [sym_false] = ACTIONS(416),
    [sym_null] = ACTIONS(416),
    [sym_comment] = ACTIONS(13),
  },
  [126] = {
    [sym_statement_block] = STATE(133),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_EQ] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [anon_sym_or] = ACTIONS(393),
    [anon_sym_and] = ACTIONS(393),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_PERCENT] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(393),
    [anon_sym_BANG_EQ] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(395),
    [anon_sym_LT] = ACTIONS(395),
    [anon_sym_LT_EQ] = ACTIONS(393),
    [anon_sym_GT_EQ] = ACTIONS(393),
    [sym_comment] = ACTIONS(13),
  },
  [127] = {
    [sym_identifier] = ACTIONS(387),
    [anon_sym_RBRACE] = ACTIONS(195),
    [anon_sym_SEMI] = ACTIONS(195),
    [anon_sym_if] = ACTIONS(387),
    [anon_sym_switch] = ACTIONS(387),
    [anon_sym_for] = ACTIONS(387),
    [anon_sym_while] = ACTIONS(387),
    [anon_sym_return] = ACTIONS(387),
    [sym_indirection_expression] = ACTIONS(195),
    [sym_comment] = ACTIONS(13),
  },
  [128] = {
    [sym__expression] = STATE(110),
    [sym_unary_expression] = STATE(110),
    [sym_binary_expression] = STATE(110),
    [sym_subscript_expression] = STATE(55),
    [sym_call_expression] = STATE(56),
    [sym_field_expression] = STATE(49),
    [sym_indirection_field_expression] = STATE(57),
    [sym_user_property_expression] = STATE(110),
    [sym_string_literal] = STATE(110),
    [sym_char_literal] = STATE(110),
    [sym_parenthesized_expression] = STATE(110),
    [sym_identifier] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_not] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(339),
    [sym_indirection_expression] = ACTIONS(88),
    [sym_number_literal] = ACTIONS(299),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_DQUOTE_BSLASH_BSLASH_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_SQUOTE_BSLASH_BSLASH_LBRACK_CARET_DQUOTE_RBRACK_SQUOTE_SLASH] = ACTIONS(94),
    [sym_true] = ACTIONS(301),
    [sym_false] = ACTIONS(301),
    [sym_null] = ACTIONS(301),
    [sym_comment] = ACTIONS(13),
  },
  [129] = {
    [anon_sym_RBRACE] = ACTIONS(418),
    [anon_sym_case] = ACTIONS(418),
    [anon_sym_default] = ACTIONS(418),
    [sym_comment] = ACTIONS(13),
  },
  [130] = {
    [sym_identifier] = ACTIONS(420),
    [anon_sym_RBRACE] = ACTIONS(422),
    [anon_sym_SEMI] = ACTIONS(422),
    [anon_sym_if] = ACTIONS(420),
    [anon_sym_switch] = ACTIONS(420),
    [anon_sym_for] = ACTIONS(420),
    [anon_sym_while] = ACTIONS(420),
    [anon_sym_return] = ACTIONS(420),
    [sym_indirection_expression] = ACTIONS(422),
    [sym_comment] = ACTIONS(13),
  },
  [131] = {
    [sym_statement_block] = STATE(134),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_EQ] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [anon_sym_or] = ACTIONS(393),
    [anon_sym_and] = ACTIONS(393),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_PERCENT] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(393),
    [anon_sym_BANG_EQ] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(395),
    [anon_sym_LT] = ACTIONS(395),
    [anon_sym_LT_EQ] = ACTIONS(393),
    [anon_sym_GT_EQ] = ACTIONS(393),
    [sym_comment] = ACTIONS(13),
  },
  [132] = {
    [sym_statement_block] = STATE(135),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_EQ] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [anon_sym_or] = ACTIONS(393),
    [anon_sym_and] = ACTIONS(393),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_PERCENT] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(393),
    [anon_sym_BANG_EQ] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(395),
    [anon_sym_LT] = ACTIONS(395),
    [anon_sym_LT_EQ] = ACTIONS(393),
    [anon_sym_GT_EQ] = ACTIONS(393),
    [sym_comment] = ACTIONS(13),
  },
  [133] = {
    [sym_identifier] = ACTIONS(424),
    [anon_sym_RBRACE] = ACTIONS(426),
    [anon_sym_SEMI] = ACTIONS(426),
    [anon_sym_if] = ACTIONS(424),
    [anon_sym_switch] = ACTIONS(424),
    [anon_sym_for] = ACTIONS(424),
    [anon_sym_while] = ACTIONS(424),
    [anon_sym_return] = ACTIONS(424),
    [sym_indirection_expression] = ACTIONS(426),
    [sym_comment] = ACTIONS(13),
  },
  [134] = {
    [sym_identifier] = ACTIONS(428),
    [anon_sym_RBRACE] = ACTIONS(430),
    [anon_sym_SEMI] = ACTIONS(430),
    [anon_sym_if] = ACTIONS(428),
    [anon_sym_switch] = ACTIONS(428),
    [anon_sym_for] = ACTIONS(428),
    [anon_sym_while] = ACTIONS(428),
    [anon_sym_return] = ACTIONS(428),
    [sym_indirection_expression] = ACTIONS(430),
    [sym_comment] = ACTIONS(13),
  },
  [135] = {
    [sym_identifier] = ACTIONS(432),
    [anon_sym_RBRACE] = ACTIONS(434),
    [anon_sym_SEMI] = ACTIONS(434),
    [anon_sym_if] = ACTIONS(432),
    [anon_sym_switch] = ACTIONS(432),
    [anon_sym_for] = ACTIONS(432),
    [anon_sym_while] = ACTIONS(432),
    [anon_sym_return] = ACTIONS(432),
    [sym_indirection_expression] = ACTIONS(434),
    [sym_comment] = ACTIONS(13),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [17] = {.count = 1, .reusable = true}, SHIFT(11),
  [19] = {.count = 1, .reusable = true}, SHIFT(12),
  [21] = {.count = 1, .reusable = true}, SHIFT(13),
  [23] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [25] = {.count = 1, .reusable = true}, SHIFT(14),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_program, 2),
  [29] = {.count = 1, .reusable = true}, SHIFT(18),
  [31] = {.count = 1, .reusable = true}, SHIFT(19),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [35] = {.count = 1, .reusable = false}, SHIFT(21),
  [37] = {.count = 1, .reusable = true}, SHIFT(22),
  [39] = {.count = 1, .reusable = false}, SHIFT(23),
  [41] = {.count = 1, .reusable = false}, SHIFT(24),
  [43] = {.count = 1, .reusable = false}, SHIFT(25),
  [45] = {.count = 1, .reusable = false}, SHIFT(26),
  [47] = {.count = 1, .reusable = false}, SHIFT(27),
  [49] = {.count = 1, .reusable = true}, SHIFT(28),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_plg_function, 2),
  [53] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [55] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [58] = {.count = 1, .reusable = true}, SHIFT(35),
  [60] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [62] = {.count = 1, .reusable = true}, SHIFT(36),
  [64] = {.count = 1, .reusable = true}, SHIFT(38),
  [66] = {.count = 1, .reusable = true}, SHIFT(39),
  [68] = {.count = 1, .reusable = true}, SHIFT(40),
  [70] = {.count = 1, .reusable = true}, SHIFT(41),
  [72] = {.count = 1, .reusable = false}, REDUCE(sym_empty_statement, 1),
  [74] = {.count = 1, .reusable = true}, REDUCE(sym_empty_statement, 1),
  [76] = {.count = 1, .reusable = true}, SHIFT(43),
  [78] = {.count = 1, .reusable = false}, SHIFT(46),
  [80] = {.count = 1, .reusable = false}, SHIFT(47),
  [82] = {.count = 1, .reusable = false}, SHIFT(49),
  [84] = {.count = 1, .reusable = false}, SHIFT(50),
  [86] = {.count = 1, .reusable = true}, SHIFT(50),
  [88] = {.count = 1, .reusable = true}, SHIFT(51),
  [90] = {.count = 1, .reusable = true}, SHIFT(54),
  [92] = {.count = 1, .reusable = false}, SHIFT(52),
  [94] = {.count = 1, .reusable = true}, SHIFT(53),
  [96] = {.count = 1, .reusable = false}, SHIFT(54),
  [98] = {.count = 1, .reusable = true}, SHIFT(58),
  [100] = {.count = 1, .reusable = true}, SHIFT(59),
  [102] = {.count = 1, .reusable = true}, SHIFT(60),
  [104] = {.count = 1, .reusable = true}, SHIFT(61),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_mss_function, 4),
  [108] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 4),
  [112] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(18),
  [115] = {.count = 1, .reusable = true}, SHIFT(63),
  [117] = {.count = 1, .reusable = false}, SHIFT(64),
  [119] = {.count = 1, .reusable = true}, SHIFT(64),
  [121] = {.count = 1, .reusable = true}, SHIFT(65),
  [123] = {.count = 1, .reusable = false}, SHIFT(65),
  [125] = {.count = 1, .reusable = true}, SHIFT(66),
  [127] = {.count = 1, .reusable = false}, SHIFT(66),
  [129] = {.count = 1, .reusable = false}, SHIFT(67),
  [131] = {.count = 1, .reusable = true}, SHIFT(67),
  [133] = {.count = 1, .reusable = true}, SHIFT(68),
  [135] = {.count = 1, .reusable = false}, SHIFT(68),
  [137] = {.count = 1, .reusable = false}, SHIFT(69),
  [139] = {.count = 1, .reusable = false}, SHIFT(70),
  [141] = {.count = 1, .reusable = true}, SHIFT(71),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_call_expression, 2),
  [147] = {.count = 1, .reusable = false}, SHIFT(72),
  [149] = {.count = 1, .reusable = true}, SHIFT(72),
  [151] = {.count = 1, .reusable = true}, SHIFT(73),
  [153] = {.count = 1, .reusable = false}, SHIFT(73),
  [155] = {.count = 1, .reusable = true}, SHIFT(74),
  [157] = {.count = 1, .reusable = true}, SHIFT(76),
  [159] = {.count = 1, .reusable = true}, SHIFT(77),
  [161] = {.count = 1, .reusable = true}, SHIFT(78),
  [163] = {.count = 1, .reusable = true}, SHIFT(79),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 1),
  [169] = {.count = 1, .reusable = true}, SHIFT(81),
  [171] = {.count = 1, .reusable = false}, SHIFT(81),
  [173] = {.count = 1, .reusable = false}, SHIFT(82),
  [175] = {.count = 1, .reusable = true}, SHIFT(83),
  [177] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 1),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 1),
  [183] = {.count = 1, .reusable = true}, SHIFT(84),
  [185] = {.count = 1, .reusable = true}, SHIFT(85),
  [187] = {.count = 1, .reusable = false}, SHIFT(84),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym_call_statement, 2),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_call_statement, 2),
  [193] = {.count = 1, .reusable = true}, SHIFT(69),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_statement_block, 3),
  [197] = {.count = 2, .reusable = false}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(21),
  [200] = {.count = 1, .reusable = true}, REDUCE(aux_sym_statement_block_repeat1, 2),
  [202] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(22),
  [205] = {.count = 2, .reusable = false}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(23),
  [208] = {.count = 2, .reusable = false}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(24),
  [211] = {.count = 2, .reusable = false}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(25),
  [214] = {.count = 2, .reusable = false}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(26),
  [217] = {.count = 2, .reusable = false}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(27),
  [220] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(28),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_argument_list, 2),
  [225] = {.count = 1, .reusable = false}, REDUCE(sym_argument_list, 2),
  [227] = {.count = 1, .reusable = true}, SHIFT(86),
  [229] = {.count = 1, .reusable = true}, SHIFT(87),
  [231] = {.count = 1, .reusable = true}, SHIFT(88),
  [233] = {.count = 1, .reusable = false}, SHIFT(88),
  [235] = {.count = 1, .reusable = true}, SHIFT(90),
  [237] = {.count = 1, .reusable = true}, SHIFT(91),
  [239] = {.count = 1, .reusable = false}, SHIFT(91),
  [241] = {.count = 1, .reusable = true}, SHIFT(92),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_field_expression, 3),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_field_expression, 3),
  [247] = {.count = 1, .reusable = true}, SHIFT(93),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_indirection_field_expression, 3),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym_indirection_field_expression, 3),
  [253] = {.count = 1, .reusable = true}, SHIFT(94),
  [255] = {.count = 1, .reusable = true}, SHIFT(95),
  [257] = {.count = 1, .reusable = false}, SHIFT(95),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym_if_statement, 3),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 3),
  [263] = {.count = 1, .reusable = false}, SHIFT(97),
  [265] = {.count = 1, .reusable = true}, SHIFT(98),
  [267] = {.count = 1, .reusable = true}, SHIFT(99),
  [269] = {.count = 1, .reusable = true}, SHIFT(100),
  [271] = {.count = 1, .reusable = false}, SHIFT(103),
  [273] = {.count = 1, .reusable = true}, SHIFT(103),
  [275] = {.count = 1, .reusable = true}, SHIFT(104),
  [277] = {.count = 1, .reusable = false}, SHIFT(104),
  [279] = {.count = 1, .reusable = false}, SHIFT(105),
  [281] = {.count = 1, .reusable = false}, SHIFT(106),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym_while_statement, 3),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 3),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2),
  [289] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 2),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_string_literal, 2),
  [295] = {.count = 1, .reusable = false}, SHIFT(108),
  [297] = {.count = 1, .reusable = true}, SHIFT(109),
  [299] = {.count = 1, .reusable = true}, SHIFT(110),
  [301] = {.count = 1, .reusable = false}, SHIFT(110),
  [303] = {.count = 1, .reusable = false}, REDUCE(sym_return_statement, 3),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym_return_statement, 3),
  [307] = {.count = 1, .reusable = true}, SHIFT(111),
  [309] = {.count = 1, .reusable = false}, SHIFT(111),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_argument_list, 3),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym_argument_list, 3),
  [315] = {.count = 1, .reusable = true}, SHIFT(112),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_statement, 4),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_statement, 4),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_subscript_expression, 4),
  [323] = {.count = 1, .reusable = false}, REDUCE(sym_subscript_expression, 4),
  [325] = {.count = 1, .reusable = true}, SHIFT(114),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized_expression, 3),
  [329] = {.count = 1, .reusable = false}, REDUCE(sym_parenthesized_expression, 3),
  [331] = {.count = 1, .reusable = true}, SHIFT(115),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym_switch_statement, 4),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement, 4),
  [337] = {.count = 1, .reusable = false}, SHIFT(117),
  [339] = {.count = 1, .reusable = true}, SHIFT(117),
  [341] = {.count = 1, .reusable = true}, SHIFT(118),
  [343] = {.count = 1, .reusable = false}, SHIFT(118),
  [345] = {.count = 1, .reusable = true}, SHIFT(120),
  [347] = {.count = 1, .reusable = true}, SHIFT(123),
  [349] = {.count = 1, .reusable = true}, SHIFT(124),
  [351] = {.count = 1, .reusable = false}, SHIFT(123),
  [353] = {.count = 1, .reusable = true}, SHIFT(125),
  [355] = {.count = 1, .reusable = true}, SHIFT(126),
  [357] = {.count = 1, .reusable = false}, SHIFT(126),
  [359] = {.count = 1, .reusable = true}, SHIFT(127),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 3),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym_string_literal, 3),
  [365] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [367] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(109),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [372] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [374] = {.count = 1, .reusable = true}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [376] = {.count = 1, .reusable = true}, REDUCE(sym_argument_list, 4),
  [378] = {.count = 1, .reusable = false}, REDUCE(sym_argument_list, 4),
  [380] = {.count = 2, .reusable = true}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(86),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_user_property_expression, 5),
  [385] = {.count = 1, .reusable = false}, REDUCE(sym_user_property_expression, 5),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym_statement_block, 3),
  [389] = {.count = 1, .reusable = false}, REDUCE(sym_if_statement, 5),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 5),
  [393] = {.count = 1, .reusable = true}, SHIFT(128),
  [395] = {.count = 1, .reusable = false}, SHIFT(128),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_switch_default, 2),
  [399] = {.count = 1, .reusable = false}, REDUCE(sym_switch_statement, 5),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement, 5),
  [403] = {.count = 1, .reusable = true}, SHIFT(130),
  [405] = {.count = 1, .reusable = true}, REDUCE(aux_sym_switch_statement_repeat1, 2),
  [407] = {.count = 2, .reusable = true}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(99),
  [410] = {.count = 1, .reusable = true}, SHIFT(131),
  [412] = {.count = 1, .reusable = false}, SHIFT(131),
  [414] = {.count = 1, .reusable = true}, SHIFT(132),
  [416] = {.count = 1, .reusable = false}, SHIFT(132),
  [418] = {.count = 1, .reusable = true}, REDUCE(sym_switch_case, 3),
  [420] = {.count = 1, .reusable = false}, REDUCE(sym_switch_statement, 6),
  [422] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement, 6),
  [424] = {.count = 1, .reusable = false}, REDUCE(sym_for_each_statement, 6),
  [426] = {.count = 1, .reusable = true}, REDUCE(sym_for_each_statement, 6),
  [428] = {.count = 1, .reusable = false}, REDUCE(sym_for_statement, 7),
  [430] = {.count = 1, .reusable = true}, REDUCE(sym_for_statement, 7),
  [432] = {.count = 1, .reusable = false}, REDUCE(sym_for_each_statement, 7),
  [434] = {.count = 1, .reusable = true}, REDUCE(sym_for_each_statement, 7),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_manuscript() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
