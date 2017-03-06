/*Name : Sourav Pal
  Roll No. :14CS10062
  Assignment No. : 3
  Date : 15/08/2016*/

#include "y.tab.h"
#include <stdio.h>
extern int yylex();
extern char *yytext;
main()
{
	int token_returned;
	while((token_returned = yylex())!=0)
	{
	switch(token_returned)
	{
	case AUTO_KEYWORD:
		printf("<AUTO_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case BREAK_KEYWORD:
		printf("<BREAK_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case CASE_KEYWORD:
		printf("<CASE_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case CHAR_KEYWORD:
		printf("<CHAR_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case CONST_KEYWORD:
		printf("<CONST_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case CONTINUE_KEYWORD:
		printf("<CONTINUE_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case DEFAULT_KEYWORD:
		printf("<DEFAULT_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case DO_KEYWORD:
		printf("<DO_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case DOUBLE_KEYWORD:
		printf("<DOUBLE_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case ELSE_KEYWORD:
		printf("<ELSE_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case ENUM_KEYWORD:
		printf("<ENUM_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case EXTERN_KEYWORD:
		printf("<EXTERN_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case FLOAT_KEYWORD:
		printf("<FLOAT_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case FOR_KEYWORD:
		printf("<FOR_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case GOTO_KEYWORD:
		printf("<GOTO_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case IF_KEYWORD:
		printf("<IF_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case INLINE_KEYWORD:
		printf("<INLINE_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case INT_KEYWORD:
		printf("<INT_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case LONG_KEYWORD:
		printf("<LONG_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case REGISTER_KEYWORD:
		printf("<REGISTER_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case RESTRICT_KEYWORD:
		printf("<RESTRICT_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case RETURN_KEYWORD:
		printf("<RETURN_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case SHORT_KEYWORD:
		printf("<SHORT_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case SIGNED_KEYWORD:
		printf("<SIGNED_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case SIZEOF_KEYWORD:
		printf("<SIZEOF_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case STATIC_KEYWORD:
		printf("<STATIC_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case STRUCT_KEYWORD:
		printf("<STRUCT_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case SWITCH_KEYWORD:
		printf("<SWITCH_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case TYPEDEF_KEYWORD:
		printf("<TYPEDEF_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case UNION_KEYWORD:
		printf("<UNION_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case UNSIGNED_KEYWORD:
		printf("<UNSIGNED_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case VOID_KEYWORD:
		printf("<VOID_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case VOLATILE_KEYWORD:
		printf("<VOLATILE_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case WHILE_KEYWORD:
		printf("<WHILE_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case _BOOL_KEYWORD:
		printf("<_BOOL_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case _COMPLEX_KEYWORD:
		printf("<_COMPLEX_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case _IMAGINARY_KEYWORD:
		printf("<_IMAGINARY_KEYWORD, %d, %s>\n",token_returned,yytext);
		break;
	case IDENTIFIER:
		printf("<IDENTIFIER, %d, %s>\n",token_returned,yytext);
		break;
	case INTEGER_CONSTANT:
		printf("<INTEGER_CONSTANT, %d, %s>\n",token_returned,yytext);
		break;
	case FLOATING_CONSTANT:
		printf("<FLOATING_CONSTANT, %d, %s>\n",token_returned,yytext);
		break;
	case ENUMERATION_CONSTANT:
		printf("<ENUMERATION_CONSTANT, %d, %s>\n",token_returned,yytext);
		break;
	case CHAR_CONSTANT:
		printf("<CHAR_CONSTANT, %d, %s>\n",token_returned,yytext);
		break;
	case STRING_LITERAL:
		printf("<STRING_LITERAL, %d, %s>\n",token_returned,yytext);
		break;              		
	case LEFT_SQUARE_BRACE:
		printf("<LEFT_SQUARE_BRACE, %d, %s>\n",token_returned,yytext);
		break;
	case RIGHT_SQUARE_BRACE:
		printf("<RIGHT_SQUARE_BRACE, %d, %s>\n",token_returned,yytext);
		break;
	case LEFT_ROUND_BRACE:
		printf("<LEFT_ROUND_BRACE, %d, %s>\n",token_returned,yytext);
		break;
	case RIGHT_ROUND_BRACE:
		printf("<RIGHT_ROUND_BRACE, %d, %s>\n",token_returned,yytext);
		break;
	case LEFT_CURLY_BRACE:
		printf("<LEFT_CURLY_BRACE, %d, %s>\n",token_returned,yytext);
		break;
	case RIGHT_CURLY_BRACE:
		printf("<RIGHT_CURLY_BRACE, %d, %s>\n",token_returned,yytext);
		break;
	case PERIOD:
		printf("<PERIOD, %d, %s>\n",token_returned,yytext);
		break;
	case POINTS_TO:
		printf("<POINTS_TO, %d, %s>\n",token_returned,yytext);
		break;
	case PLUS_PLUS:
		printf("<PLUS_PLUS, %d, %s>\n",token_returned,yytext);
		break;
	case MINUS_MINUS:
		printf("<MINUS_MINUS, %d, %s>\n",token_returned,yytext);
		break;
	case AMPERSAND:
		printf("<AMPERSAND, %d, %s>\n",token_returned,yytext);
		break;
	case MULTIPLICATION:
		printf("<MULTIPLICATION, %d, %s>\n",token_returned,yytext);
		break;
	case PLUS:
		printf("<PLUS, %d, %s>\n",token_returned,yytext);
		break;
	case MINUS:
		printf("<MINUS, %d, %s>\n",token_returned,yytext);
		break;
	case TILDE:
		printf("<TILDE, %d, %s>\n",token_returned,yytext);
		break;
	case EXCLIMATION:
		printf("<EXCLIMATION, %d, %s>\n",token_returned,yytext);
		break;
	case FORWARD_SLASH:
		printf("<FORWARD_SLASH, %d, %s>\n",token_returned,yytext);
		break;
	case PERCENTAGE:
		printf("<PERCENTAGE, %d, %s>\n",token_returned,yytext);
		break;
	case LEFT_SHIFT:
		printf("<LEFT_SHIFT, %d, %s>\n",token_returned,yytext);
		break;
	case RIGHT_SHIFT:
		printf("<RIGHT_SHIFT, %d, %s>\n",token_returned,yytext);
		break;
	case LESS_THAN:
		printf("<LESS_THAN, %d, %s>\n",token_returned,yytext);
		break;
	case GREATER_THAN:
		printf("<GREATER_THAN, %d, %s>\n",token_returned,yytext);
		break;
	case LESS_THAN_EQUAL:
		printf("<LESS_THAN_EQUAL, %d, %s>\n",token_returned,yytext);
		break;
	case GREATER_THAN_EQUAL:
		printf("<GREATER_THAN_EQUAL, %d, %s>\n",token_returned,yytext);
		break;
	case EQUAL_EQUAL:
		printf("<EQUAL_EQUAL, %d, %s>\n",token_returned,yytext);
		break;
	case NOT_EQUAL:
		printf("<NOT_EQUAL, %d, %s>\n",token_returned,yytext);
		break;
	case CARET:
		printf("<CARET, %d, %s>\n",token_returned,yytext);
		break;
	case BITWISE_OR:
		printf("<BITWISE_OR, %d, %s>\n",token_returned,yytext);
		break;
	case LOGICAL_AND:
		printf("<LOGICAL_AND, %d, %s>\n",token_returned,yytext);
		break;
	case LOGICAL_OR:
		printf("<LOGICAL_OR, %d, %s>\n",token_returned,yytext);
		break;
	case QUESTION_MARK:
		printf("<QUESTION_MARK, %d, %s>\n",token_returned,yytext);
		break;
	case COLON:
		printf("<COLON, %d, %s>\n",token_returned,yytext);
		break;
	case SEMICOLON_TERMINATOR:
		printf("<SEMICOLON_TERMINATOR, %d, %s>\n",token_returned,yytext);
		break;
	case ELIPSES:
		printf("<ELIPSES, %d, %s>\n",token_returned,yytext);
		break;
	case EQUAL:
		printf("<EQUAL, %d, %s>\n",token_returned,yytext);
		break;
	case MULTIPLICATION_EQUAL:
		printf("<MULTIPLICATION_EQUAL, %d, %s>\n",token_returned,yytext);
		break;
	case SLASH_EQUAL:
		printf("<SLASH_EQUAL, %d, %s>\n",token_returned,yytext);
		break;
	case PERCENTAGE_EQUAL:
		printf("<PERCENTAGE_EQUAL, %d, %s>\n",token_returned,yytext);
		break;
	case PLUS_EQUAL:
		printf("<PLUS_EQUAL, %d, %s>\n",token_returned,yytext);
		break;
	case MINUS_EQUAL:
		printf("<MINUS_EQUAL, %d, %s>\n",token_returned,yytext);
		break;
	case LEFT_SHIFT_EQUAL:
		printf("<LEFT_SHIFT_EQUAL, %d, %s>\n",token_returned,yytext);
		break;
	case RIGHT_SHIFT_EQUAL:
		printf("<RIGHT_SHIFT_EQUAL, %d, %s>\n",token_returned,yytext);
		break;
	case BITWISE_AND_EQUAL:
		printf("<BITWISE_AND_EQUAL, %d, %s>\n",token_returned,yytext);
		break;
	case BITWISE_NOT_EQUAL:
		printf("<BITWISE_NOT_EQUAL, %d, %s>\n",token_returned,yytext);
		break;
	case BITWISE_OR_EQUAL:
		printf("<BITWISE_OR_EQUAL, %d, %s>\n",token_returned,yytext);
		break;
	case COMMA:
		printf("<COMMA, %d, %s>\n",token_returned,yytext);
		break;
	case HASH:
		printf("<HASH, %d, %s>\n",token_returned,yytext);
		break;
	case SINGLE_LINE_COMMENT:
		printf("<SINGLE_LINE_COMMENT, %d, %s>\n",token_returned,yytext);
		break;
	case MULTI_LINE_COMMENT:
		printf("<MULTI_LINE_COMMENT, %d, %s>\n",token_returned,yytext);
		break;
	}
	}
}
