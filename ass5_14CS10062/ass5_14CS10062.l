/*
Name : Sourav Pal
Roll No.: 14CS10062
Assignment No.: 5
Date : 23/10/2016
*/
%{
	#include "ass5_14CS10062_translator.h"
        #include "y.tab.h"
        #include <string.h>
        #include <stdlib.h>
        #include <vector>
        using namespace std;
%}

AUTO		"auto"
BREAK		"break"
CASE		"case"
CHAR		"char"
CONST		"const"
CONTINUE	"continue"
DEFAULT		"default"
DO		"do"
DOUBLE		"double"
ELSE		"else"
ENUM		"enum"
EXTERN 		"extern"
FLOAT		"float"
FOR		"for"
GOTO 		"goto"
IF		"if"
INLINE 		"inline"
INT		"int"
LONG		"long"
REGISTER	"register"
RESTRICT	"restrict"
RETURN		"return"
SHORT		"short"
SIGNED		"signed"
SIZEOF		"sizeof"
STATIC 		"static"
STRUCT		"struct"
SWITCH		"switch"
TYPEDEF		"typedef"
UNION		"union"
UNSIGNED	"unsigned"
VOID		"void"
VOLATILE	"volatile"
WHILE		"while"
_BOOL		"_Bool"
_COMPLEX	"_Complex"
_IMAGINARY	"_Imaginary"

IDENTIFIER			[_a-zA-Z][_a-zA-Z0-9]*
INTEGER_CONSTANT		([1-9][0-9]*)|"0"
FRACTIONAL_CONSTANT		[0-9]*\.[0-9]+|[0-9]+\.
EXPONENT_PART			[eE][+-]?[0-9]+
FLOATING_CONSTANT		(((([0-9]+)?\.[0-9]+)|([0-9]+\.))([eE][+-]?[0-9]+)?)|([0-9]+[eE][+-]?[0-9]+)
ENUMERATION_CONSTANT		[_a-zA-Z][_a-zA-Z0-9]*
CHAR_CONSTANT			\'(([^\'\\\n]|[\\a\\b\\f\\n\\r\\t\\v\\\'\\\"\\?\\\\])+)\'
STRING_LITERAL			\"(([^\"\\\n]|[\\a\\b\\f\\n\\r\\t\\v\\\'\\\"\\?\\\\])*)\"
WHITE_SPACE                     [ \t\n]
%x                              comment
%%


{AUTO}			{return AUTO_KEYWORD;}
{BREAK} 		{return BREAK_KEYWORD;}
{CASE}			{return CASE_KEYWORD;}
{CHAR}			{return CHAR_KEYWORD;}
{CONST}			{return CONST_KEYWORD;}
{CONTINUE}		{return CONTINUE_KEYWORD;}
{DEFAULT}		{return DEFAULT_KEYWORD;}
{DO}			{return DO_KEYWORD;}
{DOUBLE}		{return DOUBLE_KEYWORD;}
{ELSE}			{return ELSE_KEYWORD;}
{ENUM}			{return ENUM_KEYWORD;}
{EXTERN}		{return EXTERN_KEYWORD;}
{FLOAT}			{return FLOAT_KEYWORD;}
{FOR}			{return FOR_KEYWORD;}
{GOTO}			{return GOTO_KEYWORD;}
{IF}			{return IF_KEYWORD;}
{INLINE}		{return INLINE_KEYWORD;}
{INT}			{return INT_KEYWORD;}
{LONG}			{return LONG_KEYWORD;}
{REGISTER}		{return REGISTER_KEYWORD;}
{RESTRICT}		{return RESTRICT_KEYWORD;}
{RETURN}		{return RETURN_KEYWORD;}
{SHORT}			{return SHORT_KEYWORD;}
{SIGNED}		{return SIGNED_KEYWORD;}
{SIZEOF}		{return SIZEOF_KEYWORD;}
{STATIC}		{return STATIC_KEYWORD;}
{STRUCT}		{return STRUCT_KEYWORD;}
{SWITCH}		{return SWITCH_KEYWORD;}
{TYPEDEF}		{return TYPEDEF_KEYWORD;}
{UNION}			{return UNION_KEYWORD;}
{UNSIGNED}		{return UNSIGNED_KEYWORD;}
{VOID}			{return VOID_KEYWORD;}
{VOLATILE}		{return VOLATILE_KEYWORD;}
{WHILE}			{return WHILE_KEYWORD;}
{_BOOL}			{return _BOOL_KEYWORD;}
{_COMPLEX}		{return _COMPLEX_KEYWORD;}
{_IMAGINARY}		{return _IMAGINARY_KEYWORD;}

{IDENTIFIER}				 {(yylval.atr_val).name = strdup(yytext);return IDENTIFIER;}
{ENUMERATION_CONSTANT}			 {yylval.enum_val  =  yytext;       return ENUMERATION_CONSTANT;}
{INTEGER_CONSTANT}		         {yylval.int_val   =  atoi(yytext); return INTEGER_CONSTANT;}
{FLOATING_CONSTANT}			 {yylval.float_val =  atof(yytext); return FLOATING_CONSTANT;}
{CHAR_CONSTANT}				 {yylval.char_val  =  yytext[1];    return CHAR_CONSTANT;}
{STRING_LITERAL}			 {yylval.str_val   =  yytext;       return STRING_LITERAL;}

"["					{return LEFT_SQUARE_BRACE;}
"]"					{return RIGHT_SQUARE_BRACE;}
"("					{return LEFT_ROUND_BRACE;}
")"					{return RIGHT_ROUND_BRACE;}
"{"					{return LEFT_CURLY_BRACE;}
"}"					{return RIGHT_CURLY_BRACE;}
"."					{return PERIOD;}

"->"					{return POINTS_TO;}
"++"					{return PLUS_PLUS;}
"--"					{return MINUS_MINUS;}
"&"					{return AMPERSAND;}
"*"					{return MULTIPLICATION;}
"+"					{return PLUS;}
"-"					{return MINUS;}
"~"					{return TILDE;}
"!"					{return EXCLIMATION;}
"/"					{return FORWARD_SLASH;}
"%"					{return PERCENTAGE;}

"<<"					{return LEFT_SHIFT;}
">>"					{return RIGHT_SHIFT;}
"<"					{return LESS_THAN;}
">"					{return GREATER_THAN;}
"<="					{return LESS_THAN_EQUAL;}
">="					{return GREATER_THAN_EQUAL;}
"=="					{return EQUAL_EQUAL;}
"!="					{return NOT_EQUAL;}

"^"					{return CARET;}
"|"					{return BITWISE_OR;}
"&&"					{return LOGICAL_AND;}
"||"					{return LOGICAL_OR;}
"?"					{return QUESTION_MARK;}
":"					{return COLON;}
";"					{return SEMICOLON_TERMINATOR;}
"..."					{return ELIPSES;}
"="					{return EQUAL;}

"*="					{return MULTIPLICATION_EQUAL;}
"/="					{return SLASH_EQUAL;}
"%="					{return PERCENTAGE_EQUAL;}
"+="					{return PLUS_EQUAL;}
"-="					{return MINUS_EQUAL;}

"<<="					{return LEFT_SHIFT_EQUAL;}
">>="					{return RIGHT_SHIFT_EQUAL;}
"&="					{return BITWISE_AND_EQUAL;}
"^="					{return BITWISE_NOT_EQUAL;}
"|="					{return BITWISE_OR_EQUAL;}
","					{return COMMA;}
"#"					{return HASH;}


"/*"					BEGIN(comment);
<comment>[^*\n]*
<comment>"*"+[^*/\n]*
<comment>\n
<comment>"*"+"/"                        BEGIN(INITIAL);	
"//"[^\n]*				{}
{WHITE_SPACE}                           {}
.                                       {}

%%


















