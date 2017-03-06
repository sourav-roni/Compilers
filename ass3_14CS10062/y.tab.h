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
    SINGLE_LINE_COMMENT = 258,
    MULTI_LINE_COMMENT = 259,
    AUTO_KEYWORD = 260,
    BREAK_KEYWORD = 261,
    CASE_KEYWORD = 262,
    CHAR_KEYWORD = 263,
    CONST_KEYWORD = 264,
    CONTINUE_KEYWORD = 265,
    DEFAULT_KEYWORD = 266,
    DO_KEYWORD = 267,
    DOUBLE_KEYWORD = 268,
    ELSE_KEYWORD = 269,
    ENUM_KEYWORD = 270,
    EXTERN_KEYWORD = 271,
    FLOAT_KEYWORD = 272,
    FOR_KEYWORD = 273,
    GOTO_KEYWORD = 274,
    IF_KEYWORD = 275,
    INLINE_KEYWORD = 276,
    INT_KEYWORD = 277,
    LONG_KEYWORD = 278,
    REGISTER_KEYWORD = 279,
    RESTRICT_KEYWORD = 280,
    RETURN_KEYWORD = 281,
    SHORT_KEYWORD = 282,
    SIGNED_KEYWORD = 283,
    SIZEOF_KEYWORD = 284,
    STATIC_KEYWORD = 285,
    STRUCT_KEYWORD = 286,
    SWITCH_KEYWORD = 287,
    TYPEDEF_KEYWORD = 288,
    UNION_KEYWORD = 289,
    UNSIGNED_KEYWORD = 290,
    VOID_KEYWORD = 291,
    VOLATILE_KEYWORD = 292,
    WHILE_KEYWORD = 293,
    _BOOL_KEYWORD = 294,
    _COMPLEX_KEYWORD = 295,
    _IMAGINARY_KEYWORD = 296,
    IDENTIFIER = 297,
    INTEGER_CONSTANT = 298,
    FLOATING_CONSTANT = 299,
    ENUMERATION_CONSTANT = 300,
    CHAR_CONSTANT = 301,
    STRING_LITERAL = 302,
    LEFT_SQUARE_BRACE = 303,
    RIGHT_SQUARE_BRACE = 304,
    LEFT_ROUND_BRACE = 305,
    RIGHT_ROUND_BRACE = 306,
    LEFT_CURLY_BRACE = 307,
    RIGHT_CURLY_BRACE = 308,
    PERIOD = 309,
    POINTS_TO = 310,
    PLUS_PLUS = 311,
    MINUS_MINUS = 312,
    AMPERSAND = 313,
    MULTIPLICATION = 314,
    PLUS = 315,
    MINUS = 316,
    TILDE = 317,
    EXCLIMATION = 318,
    FORWARD_SLASH = 319,
    PERCENTAGE = 320,
    LEFT_SHIFT = 321,
    RIGHT_SHIFT = 322,
    LESS_THAN = 323,
    GREATER_THAN = 324,
    LESS_THAN_EQUAL = 325,
    GREATER_THAN_EQUAL = 326,
    EQUAL_EQUAL = 327,
    NOT_EQUAL = 328,
    CARET = 329,
    BITWISE_OR = 330,
    LOGICAL_AND = 331,
    LOGICAL_OR = 332,
    QUESTION_MARK = 333,
    COLON = 334,
    SEMICOLON_TERMINATOR = 335,
    ELIPSES = 336,
    EQUAL = 337,
    MULTIPLICATION_EQUAL = 338,
    SLASH_EQUAL = 339,
    PERCENTAGE_EQUAL = 340,
    PLUS_EQUAL = 341,
    MINUS_EQUAL = 342,
    LEFT_SHIFT_EQUAL = 343,
    RIGHT_SHIFT_EQUAL = 344,
    BITWISE_AND_EQUAL = 345,
    BITWISE_NOT_EQUAL = 346,
    BITWISE_OR_EQUAL = 347,
    COMMA = 348,
    HASH = 349
  };
#endif
/* Tokens.  */
#define SINGLE_LINE_COMMENT 258
#define MULTI_LINE_COMMENT 259
#define AUTO_KEYWORD 260
#define BREAK_KEYWORD 261
#define CASE_KEYWORD 262
#define CHAR_KEYWORD 263
#define CONST_KEYWORD 264
#define CONTINUE_KEYWORD 265
#define DEFAULT_KEYWORD 266
#define DO_KEYWORD 267
#define DOUBLE_KEYWORD 268
#define ELSE_KEYWORD 269
#define ENUM_KEYWORD 270
#define EXTERN_KEYWORD 271
#define FLOAT_KEYWORD 272
#define FOR_KEYWORD 273
#define GOTO_KEYWORD 274
#define IF_KEYWORD 275
#define INLINE_KEYWORD 276
#define INT_KEYWORD 277
#define LONG_KEYWORD 278
#define REGISTER_KEYWORD 279
#define RESTRICT_KEYWORD 280
#define RETURN_KEYWORD 281
#define SHORT_KEYWORD 282
#define SIGNED_KEYWORD 283
#define SIZEOF_KEYWORD 284
#define STATIC_KEYWORD 285
#define STRUCT_KEYWORD 286
#define SWITCH_KEYWORD 287
#define TYPEDEF_KEYWORD 288
#define UNION_KEYWORD 289
#define UNSIGNED_KEYWORD 290
#define VOID_KEYWORD 291
#define VOLATILE_KEYWORD 292
#define WHILE_KEYWORD 293
#define _BOOL_KEYWORD 294
#define _COMPLEX_KEYWORD 295
#define _IMAGINARY_KEYWORD 296
#define IDENTIFIER 297
#define INTEGER_CONSTANT 298
#define FLOATING_CONSTANT 299
#define ENUMERATION_CONSTANT 300
#define CHAR_CONSTANT 301
#define STRING_LITERAL 302
#define LEFT_SQUARE_BRACE 303
#define RIGHT_SQUARE_BRACE 304
#define LEFT_ROUND_BRACE 305
#define RIGHT_ROUND_BRACE 306
#define LEFT_CURLY_BRACE 307
#define RIGHT_CURLY_BRACE 308
#define PERIOD 309
#define POINTS_TO 310
#define PLUS_PLUS 311
#define MINUS_MINUS 312
#define AMPERSAND 313
#define MULTIPLICATION 314
#define PLUS 315
#define MINUS 316
#define TILDE 317
#define EXCLIMATION 318
#define FORWARD_SLASH 319
#define PERCENTAGE 320
#define LEFT_SHIFT 321
#define RIGHT_SHIFT 322
#define LESS_THAN 323
#define GREATER_THAN 324
#define LESS_THAN_EQUAL 325
#define GREATER_THAN_EQUAL 326
#define EQUAL_EQUAL 327
#define NOT_EQUAL 328
#define CARET 329
#define BITWISE_OR 330
#define LOGICAL_AND 331
#define LOGICAL_OR 332
#define QUESTION_MARK 333
#define COLON 334
#define SEMICOLON_TERMINATOR 335
#define ELIPSES 336
#define EQUAL 337
#define MULTIPLICATION_EQUAL 338
#define SLASH_EQUAL 339
#define PERCENTAGE_EQUAL 340
#define PLUS_EQUAL 341
#define MINUS_EQUAL 342
#define LEFT_SHIFT_EQUAL 343
#define RIGHT_SHIFT_EQUAL 344
#define BITWISE_AND_EQUAL 345
#define BITWISE_NOT_EQUAL 346
#define BITWISE_OR_EQUAL 347
#define COMMA 348
#define HASH 349

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "ass3_14CS10062.y" /* yacc.c:1909  */

  int ival;
  float fval;
  char *cval;

#line 248 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
