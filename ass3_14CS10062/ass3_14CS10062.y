/*Name : Sourav Pal
  Roll No. :14CS10062
  Assignment No. : 3
  Date : 15/08/2016*/

%{
#include <stdio.h>
extern int yylex();
void yyerror(const char* s);
%}

%union {
  int ival;
  float fval;
  char *cval;
}
%token SINGLE_LINE_COMMENT;
%token MULTI_LINE_COMMENT;
%token AUTO_KEYWORD;
%token BREAK_KEYWORD;
%token CASE_KEYWORD;
%token CHAR_KEYWORD;
%token CONST_KEYWORD;
%token CONTINUE_KEYWORD;
%token DEFAULT_KEYWORD;
%token DO_KEYWORD;
%token DOUBLE_KEYWORD;
%token ELSE_KEYWORD;
%token ENUM_KEYWORD;
%token EXTERN_KEYWORD;
%token FLOAT_KEYWORD;
%token FOR_KEYWORD;
%token GOTO_KEYWORD;
%token IF_KEYWORD;
%token INLINE_KEYWORD;
%token INT_KEYWORD;
%token LONG_KEYWORD;
%token REGISTER_KEYWORD;
%token RESTRICT_KEYWORD;
%token RETURN_KEYWORD;
%token SHORT_KEYWORD;
%token SIGNED_KEYWORD;
%token SIZEOF_KEYWORD;
%token STATIC_KEYWORD;
%token STRUCT_KEYWORD;
%token SWITCH_KEYWORD;
%token TYPEDEF_KEYWORD;
%token UNION_KEYWORD;
%token UNSIGNED_KEYWORD;
%token VOID_KEYWORD;
%token VOLATILE_KEYWORD;
%token WHILE_KEYWORD;
%token _BOOL_KEYWORD;
%token _COMPLEX_KEYWORD;
%token _IMAGINARY_KEYWORD;
%token <ival> IDENTIFIER;
%token <ival> INTEGER_CONSTANT;
%token <favl> FLOATING_CONSTANT;
%token <ival> ENUMERATION_CONSTANT;
%token <cval> CHAR_CONSTANT;
%token <cval> STRING_LITERAL;
%token LEFT_SQUARE_BRACE;
%token RIGHT_SQUARE_BRACE;
%token LEFT_ROUND_BRACE;
%token RIGHT_ROUND_BRACE;
%token LEFT_CURLY_BRACE;
%token RIGHT_CURLY_BRACE;
%token PERIOD;
%token POINTS_TO;
%token PLUS_PLUS;
%token MINUS_MINUS;
%token AMPERSAND;
%token MULTIPLICATION;
%token PLUS;
%token MINUS;
%token TILDE;
%token EXCLIMATION;
%token FORWARD_SLASH;
%token PERCENTAGE;
%token LEFT_SHIFT;
%token RIGHT_SHIFT;
%token LESS_THAN;
%token GREATER_THAN;
%token LESS_THAN_EQUAL;
%token GREATER_THAN_EQUAL;
%token EQUAL_EQUAL;
%token NOT_EQUAL;
%token CARET;
%token BITWISE_OR;
%token LOGICAL_AND;
%token LOGICAL_OR;
%token QUESTION_MARK;
%token COLON;
%token SEMICOLON_TERMINATOR;
%token ELIPSES;
%token EQUAL;
%token MULTIPLICATION_EQUAL;
%token SLASH_EQUAL;
%token PERCENTAGE_EQUAL;
%token PLUS_EQUAL;
%token MINUS_EQUAL;
%token LEFT_SHIFT_EQUAL;
%token RIGHT_SHIFT_EQUAL;
%token BITWISE_AND_EQUAL;
%token BITWISE_NOT_EQUAL;
%token BITWISE_OR_EQUAL;
%token COMMA;
%token HASH;
%%
statement : ;
%%

void yyerror(const char* s) {
	printf("%s", s);
}

