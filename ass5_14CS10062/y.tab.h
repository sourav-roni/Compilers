/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AUTO_KEYWORD = 258,
    BREAK_KEYWORD = 259,
    CASE_KEYWORD = 260,
    CHAR_KEYWORD = 261,
    CONST_KEYWORD = 262,
    CONTINUE_KEYWORD = 263,
    DEFAULT_KEYWORD = 264,
    DO_KEYWORD = 265,
    DOUBLE_KEYWORD = 266,
    ELSE_KEYWORD = 267,
    ENUM_KEYWORD = 268,
    EXTERN_KEYWORD = 269,
    FLOAT_KEYWORD = 270,
    FOR_KEYWORD = 271,
    GOTO_KEYWORD = 272,
    IF_KEYWORD = 273,
    INLINE_KEYWORD = 274,
    INT_KEYWORD = 275,
    LONG_KEYWORD = 276,
    REGISTER_KEYWORD = 277,
    RESTRICT_KEYWORD = 278,
    RETURN_KEYWORD = 279,
    SHORT_KEYWORD = 280,
    SIGNED_KEYWORD = 281,
    SIZEOF_KEYWORD = 282,
    STATIC_KEYWORD = 283,
    STRUCT_KEYWORD = 284,
    SWITCH_KEYWORD = 285,
    TYPEDEF_KEYWORD = 286,
    UNION_KEYWORD = 287,
    UNSIGNED_KEYWORD = 288,
    VOID_KEYWORD = 289,
    VOLATILE_KEYWORD = 290,
    WHILE_KEYWORD = 291,
    _BOOL_KEYWORD = 292,
    _COMPLEX_KEYWORD = 293,
    _IMAGINARY_KEYWORD = 294,
    IDENTIFIER = 295,
    ENUMERATION_CONSTANT = 296,
    INTEGER_CONSTANT = 297,
    FLOATING_CONSTANT = 298,
    CHAR_CONSTANT = 299,
    STRING_LITERAL = 300,
    LEFT_SQUARE_BRACE = 301,
    RIGHT_SQUARE_BRACE = 302,
    LEFT_ROUND_BRACE = 303,
    RIGHT_ROUND_BRACE = 304,
    LEFT_CURLY_BRACE = 305,
    RIGHT_CURLY_BRACE = 306,
    PERIOD = 307,
    POINTS_TO = 308,
    PLUS_PLUS = 309,
    MINUS_MINUS = 310,
    AMPERSAND = 311,
    MULTIPLICATION = 312,
    PLUS = 313,
    MINUS = 314,
    TILDE = 315,
    EXCLIMATION = 316,
    FORWARD_SLASH = 317,
    PERCENTAGE = 318,
    LEFT_SHIFT = 319,
    RIGHT_SHIFT = 320,
    LESS_THAN = 321,
    GREATER_THAN = 322,
    LESS_THAN_EQUAL = 323,
    GREATER_THAN_EQUAL = 324,
    EQUAL_EQUAL = 325,
    NOT_EQUAL = 326,
    CARET = 327,
    BITWISE_OR = 328,
    LOGICAL_AND = 329,
    LOGICAL_OR = 330,
    QUESTION_MARK = 331,
    COLON = 332,
    SEMICOLON_TERMINATOR = 333,
    ELIPSES = 334,
    EQUAL = 335,
    MULTIPLICATION_EQUAL = 336,
    SLASH_EQUAL = 337,
    PERCENTAGE_EQUAL = 338,
    PLUS_EQUAL = 339,
    MINUS_EQUAL = 340,
    LEFT_SHIFT_EQUAL = 341,
    RIGHT_SHIFT_EQUAL = 342,
    BITWISE_AND_EQUAL = 343,
    BITWISE_NOT_EQUAL = 344,
    BITWISE_OR_EQUAL = 345,
    COMMA = 346,
    HASH = 347,
    SINGLE_LINE_COMMENT = 348,
    NEW_LINE = 349,
    IF_FIRST = 350
  };
#endif
/* Tokens.  */
#define AUTO_KEYWORD 258
#define BREAK_KEYWORD 259
#define CASE_KEYWORD 260
#define CHAR_KEYWORD 261
#define CONST_KEYWORD 262
#define CONTINUE_KEYWORD 263
#define DEFAULT_KEYWORD 264
#define DO_KEYWORD 265
#define DOUBLE_KEYWORD 266
#define ELSE_KEYWORD 267
#define ENUM_KEYWORD 268
#define EXTERN_KEYWORD 269
#define FLOAT_KEYWORD 270
#define FOR_KEYWORD 271
#define GOTO_KEYWORD 272
#define IF_KEYWORD 273
#define INLINE_KEYWORD 274
#define INT_KEYWORD 275
#define LONG_KEYWORD 276
#define REGISTER_KEYWORD 277
#define RESTRICT_KEYWORD 278
#define RETURN_KEYWORD 279
#define SHORT_KEYWORD 280
#define SIGNED_KEYWORD 281
#define SIZEOF_KEYWORD 282
#define STATIC_KEYWORD 283
#define STRUCT_KEYWORD 284
#define SWITCH_KEYWORD 285
#define TYPEDEF_KEYWORD 286
#define UNION_KEYWORD 287
#define UNSIGNED_KEYWORD 288
#define VOID_KEYWORD 289
#define VOLATILE_KEYWORD 290
#define WHILE_KEYWORD 291
#define _BOOL_KEYWORD 292
#define _COMPLEX_KEYWORD 293
#define _IMAGINARY_KEYWORD 294
#define IDENTIFIER 295
#define ENUMERATION_CONSTANT 296
#define INTEGER_CONSTANT 297
#define FLOATING_CONSTANT 298
#define CHAR_CONSTANT 299
#define STRING_LITERAL 300
#define LEFT_SQUARE_BRACE 301
#define RIGHT_SQUARE_BRACE 302
#define LEFT_ROUND_BRACE 303
#define RIGHT_ROUND_BRACE 304
#define LEFT_CURLY_BRACE 305
#define RIGHT_CURLY_BRACE 306
#define PERIOD 307
#define POINTS_TO 308
#define PLUS_PLUS 309
#define MINUS_MINUS 310
#define AMPERSAND 311
#define MULTIPLICATION 312
#define PLUS 313
#define MINUS 314
#define TILDE 315
#define EXCLIMATION 316
#define FORWARD_SLASH 317
#define PERCENTAGE 318
#define LEFT_SHIFT 319
#define RIGHT_SHIFT 320
#define LESS_THAN 321
#define GREATER_THAN 322
#define LESS_THAN_EQUAL 323
#define GREATER_THAN_EQUAL 324
#define EQUAL_EQUAL 325
#define NOT_EQUAL 326
#define CARET 327
#define BITWISE_OR 328
#define LOGICAL_AND 329
#define LOGICAL_OR 330
#define QUESTION_MARK 331
#define COLON 332
#define SEMICOLON_TERMINATOR 333
#define ELIPSES 334
#define EQUAL 335
#define MULTIPLICATION_EQUAL 336
#define SLASH_EQUAL 337
#define PERCENTAGE_EQUAL 338
#define PLUS_EQUAL 339
#define MINUS_EQUAL 340
#define LEFT_SHIFT_EQUAL 341
#define RIGHT_SHIFT_EQUAL 342
#define BITWISE_AND_EQUAL 343
#define BITWISE_NOT_EQUAL 344
#define BITWISE_OR_EQUAL 345
#define COMMA 346
#define HASH 347
#define SINGLE_LINE_COMMENT 348
#define NEW_LINE 349
#define IF_FIRST 350

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 21 "ass5_14CS10062.y" /* yacc.c:1909  */

  int int_val;
  float float_val;
  char char_val;
  char * str_val;
  char* enum_val;
  struct attribute atr_val;
  struct expr expr_val;
  vector<int>* N_val;
  vector<row_of_symbol_table*> *param_val;
  struct initial_value init_val;
  op_type op_val;
  int instr;

#line 259 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
