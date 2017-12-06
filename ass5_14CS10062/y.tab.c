/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 7 "ass5_14CS10062.y" /* yacc.c:339  */

#include <stdio.h>
#include <iostream>
#include <vector>
extern int yylex();
#include "ass5_14CS10062_translator.h"
#include <string.h>
void yyerror(const char* s);
using namespace std;

#line 77 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 21 "ass5_14CS10062.y" /* yacc.c:355  */

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

#line 322 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 339 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  34
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1105

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  212
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  365

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   350

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   204,   204,   205,   206,   207,   208,   209,   211,   212,
     214,   218,   221,   226,   227,   235,   236,   239,   241,   246,
     263,   282,   285,   297,   306,   320,   326,   327,   328,   329,
     336,   348,   349,   352,   353,   356,   360,   403,   404,   409,
     410,   413,   416,   417,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   468,   469,   501,   502,   512,
     513,   523,   524,   531,   532,   539,   540,   547,   548,   553,
     560,   561,   566,   571,   576,   583,   584,   589,   596,   597,
     611,   625,   626,   638,   650,   664,   665,   668,   669,   670,
     671,   672,   673,   676,   690,   706,   722,   747,   749,   754,
     759,   766,   771,   808,   824,   848,   850,   852,   869,   886,
     888,   892,   904,   909,   910,   913,   927,   940,   955,   958,
     960,   971,   974,   994,   995,   997,  1008,  1010,  1012,  1014,
    1016,  1021,  1026,  1030,  1055,  1095,  1096,  1097,  1098,  1100,
    1109,  1118,  1119,  1129,  1130,  1131,  1140,  1141,  1142,  1143,
    1144,  1145,  1148,  1150,  1152,  1154,  1159,  1160,  1161,  1164,
    1165,  1168,  1169,  1172,  1173,  1176,  1177,  1178,  1181,  1184,
    1194,  1204,  1229,  1231,  1234,  1245,  1248,  1259,  1262,  1265,
    1268,  1271,  1274,  1283,  1286,  1298,  1303,  1305,  1311,  1315,
    1316,  1319,  1320,  1323,  1333,  1344,  1354,  1357,  1358,  1362,
    1365,  1366,  1367,  1370,  1371,  1374,  1375,  1378,  1381,  1382,
    1385,  1386,  1389
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO_KEYWORD", "BREAK_KEYWORD",
  "CASE_KEYWORD", "CHAR_KEYWORD", "CONST_KEYWORD", "CONTINUE_KEYWORD",
  "DEFAULT_KEYWORD", "DO_KEYWORD", "DOUBLE_KEYWORD", "ELSE_KEYWORD",
  "ENUM_KEYWORD", "EXTERN_KEYWORD", "FLOAT_KEYWORD", "FOR_KEYWORD",
  "GOTO_KEYWORD", "IF_KEYWORD", "INLINE_KEYWORD", "INT_KEYWORD",
  "LONG_KEYWORD", "REGISTER_KEYWORD", "RESTRICT_KEYWORD", "RETURN_KEYWORD",
  "SHORT_KEYWORD", "SIGNED_KEYWORD", "SIZEOF_KEYWORD", "STATIC_KEYWORD",
  "STRUCT_KEYWORD", "SWITCH_KEYWORD", "TYPEDEF_KEYWORD", "UNION_KEYWORD",
  "UNSIGNED_KEYWORD", "VOID_KEYWORD", "VOLATILE_KEYWORD", "WHILE_KEYWORD",
  "_BOOL_KEYWORD", "_COMPLEX_KEYWORD", "_IMAGINARY_KEYWORD", "IDENTIFIER",
  "ENUMERATION_CONSTANT", "INTEGER_CONSTANT", "FLOATING_CONSTANT",
  "CHAR_CONSTANT", "STRING_LITERAL", "LEFT_SQUARE_BRACE",
  "RIGHT_SQUARE_BRACE", "LEFT_ROUND_BRACE", "RIGHT_ROUND_BRACE",
  "LEFT_CURLY_BRACE", "RIGHT_CURLY_BRACE", "PERIOD", "POINTS_TO",
  "PLUS_PLUS", "MINUS_MINUS", "AMPERSAND", "MULTIPLICATION", "PLUS",
  "MINUS", "TILDE", "EXCLIMATION", "FORWARD_SLASH", "PERCENTAGE",
  "LEFT_SHIFT", "RIGHT_SHIFT", "LESS_THAN", "GREATER_THAN",
  "LESS_THAN_EQUAL", "GREATER_THAN_EQUAL", "EQUAL_EQUAL", "NOT_EQUAL",
  "CARET", "BITWISE_OR", "LOGICAL_AND", "LOGICAL_OR", "QUESTION_MARK",
  "COLON", "SEMICOLON_TERMINATOR", "ELIPSES", "EQUAL",
  "MULTIPLICATION_EQUAL", "SLASH_EQUAL", "PERCENTAGE_EQUAL", "PLUS_EQUAL",
  "MINUS_EQUAL", "LEFT_SHIFT_EQUAL", "RIGHT_SHIFT_EQUAL",
  "BITWISE_AND_EQUAL", "BITWISE_NOT_EQUAL", "BITWISE_OR_EQUAL", "COMMA",
  "HASH", "SINGLE_LINE_COMMENT", "NEW_LINE", "IF_FIRST", "$accept",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", "expression", "constant_expression",
  "assignment_expression", "assignment_operator", "conditional_expression",
  "logical_OR_expression", "logical_AND_expression",
  "inclusive_OR_expression", "exclusive_OR_expression", "AND_expression",
  "equality_expression", "relational_expression", "shift_expression",
  "additive_expression", "multiplicative_expression", "cast_expression",
  "unary_operator", "unary_expression", "argument_expression_list",
  "postfix_expression", "primary_expression", "constant",
  "enumeration_constant", "M", "N", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "enum_specifier", "identifier_opt", "enumerator_list", "enumerator",
  "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "designation_opt", "designation", "designator_list", "designator", "F", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350
};
# endif

#define YYPACT_NINF -230

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-230)))

#define YYTABLE_NINF -213

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     886,  -230,  -230,  -230,  -230,   -16,  -230,  -230,  -230,  -230,
    -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,
    -230,  -230,   849,  -230,  -230,  -230,   140,   886,   886,  -230,
     886,   886,    -7,     3,  -230,  -230,  -230,   -18,    92,  -230,
     -47,  -230,   260,   125,    76,  -230,  -230,  -230,  -230,    58,
       1,  -230,  -230,    92,  -230,   -18,   888,   770,  -230,   140,
      54,   624,   808,   125,  -230,    30,     6,  -230,  -230,  -230,
    -230,  -230,    55,   955,  -230,  -230,  -230,  -230,  -230,   585,
       0,   977,   977,  -230,  -230,  -230,  -230,  -230,  -230,  -230,
    -230,    45,    73,    52,    91,   118,   152,   180,   162,   175,
     128,  -230,   999,  1015,   190,  -230,  -230,  -230,   345,  -230,
    -230,  -230,    96,  -230,   130,   137,   663,  -230,  -230,   -18,
     147,   115,  -230,   -44,   999,  -230,    -6,   585,  -230,    42,
    -230,  1055,  -230,  1055,   161,   999,   174,    51,   888,  -230,
     -26,  -230,   585,  -230,  -230,  -230,   144,  -230,   999,   999,
     999,   999,   999,   999,   999,   999,   999,   999,   999,   999,
     999,   999,   999,   999,  -230,  -230,  -230,  -230,  -230,  -230,
    -230,  -230,  -230,  -230,  -230,  -230,  -230,   999,   999,   910,
     177,   184,  -230,  -230,   150,   999,   159,   164,  -230,   191,
     210,   213,   685,   216,  -230,   188,  -230,  -230,  -230,  -230,
    -230,   217,  -230,  -230,  -230,  -230,  -230,    81,  -230,   223,
      96,  -230,  -230,   999,  -230,   231,   237,  -230,  -230,   298,
    -230,   247,  -230,  -230,  -230,  -230,   240,  -230,   999,  -230,
    -230,   933,   243,  -230,  -230,   141,  -230,  -230,  -230,   242,
     999,  -230,   999,    91,   118,   152,   180,   180,   162,   162,
     162,   162,   175,   175,   128,   128,  -230,  -230,  -230,  -230,
     -33,  -230,  -230,    57,  -230,  -230,  -230,   215,  -230,   529,
     529,   471,   218,   999,  -230,    84,   999,   252,   529,  -230,
     411,  -230,  -230,   255,   256,  -230,  -230,  -230,  -230,  -230,
     257,  -230,     0,  -230,  -230,  -230,   888,   257,    73,   999,
      52,  -230,  -230,   999,   529,  -230,  -230,  -230,   710,  -230,
     224,  -230,    69,   999,  -230,  -230,  -230,  -230,    79,  -230,
     224,  -230,  -230,   270,   710,   710,   259,   529,   224,  -230,
     157,   239,   266,  -230,   273,  -230,  -230,   276,  -230,  -230,
     999,  -230,   529,   529,  -230,   999,   224,   999,  -230,  -230,
     529,  -230,   278,   224,   316,  -230,   251,   281,  -230,  -230,
    -230,   529,   529,  -230,  -230
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   137,   140,   165,   145,   160,   135,   144,   168,   142,
     143,   138,   166,   141,   146,   136,   147,   139,   167,   148,
     149,   150,     0,    31,    33,    34,     0,   123,   125,   151,
     127,   129,   158,     0,     1,    32,   171,     0,   185,   121,
       0,   131,   133,   170,     0,   124,   126,   128,   130,     0,
       0,   189,   187,   186,   122,     0,     0,     0,    37,     0,
       0,     0,     0,   169,   118,   163,     0,   161,   172,   190,
     188,   132,   133,     0,   111,   115,   116,   117,   113,     0,
     206,     0,     0,    87,    88,    89,    90,    91,    92,   200,
      42,    55,    57,    59,    61,    63,    65,    67,    70,    75,
      78,    81,     0,    85,    93,   101,   112,   134,     0,    35,
      38,    36,     0,   176,    88,     0,     0,   197,   184,   196,
       0,   191,   193,     0,     0,   156,     0,     0,    97,     0,
      39,   153,   199,   155,     0,     0,     0,     0,     0,   205,
       0,   208,     0,    94,    95,   119,     0,   119,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    96,    85,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     0,     0,     0,
       0,     0,   107,   108,     0,     0,     0,     0,   119,     0,
       0,     0,     0,     0,   119,   111,    11,    17,    16,     2,
       3,   119,    13,     4,     5,     6,     7,     0,    15,     0,
       0,   181,   174,     0,   175,    88,     0,   195,   182,     0,
     183,     0,   164,    41,   157,   162,     0,   114,     0,   152,
     154,     0,     0,   211,   201,   206,   203,   207,   209,     0,
       0,   119,     0,    62,    64,    66,    68,    69,    71,    72,
      73,    74,    76,    77,    79,    80,    82,    83,    84,    43,
       0,   103,    99,     0,   105,   106,    28,     0,    27,     0,
       0,     0,     0,     0,    29,     0,     0,     0,     0,    12,
       0,    18,   178,     0,     0,   180,   173,   192,   194,   198,
      98,    40,   206,    86,   210,   202,     0,     0,    58,     0,
      60,   102,   104,     0,     0,    10,   119,   119,     0,    26,
     120,    30,     0,     0,     8,    14,   177,   179,     0,   204,
     120,   100,     9,     0,     0,     0,     0,     0,   120,   109,
     206,     0,     0,   120,     0,   119,    21,     0,   110,   119,
       0,   119,     0,     0,   119,     0,   120,     0,    25,   120,
       0,    56,     0,   120,    19,    22,     0,     0,   119,    23,
     119,     0,     0,    20,    24
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -230,  -161,  -230,   -32,  -230,    59,  -179,  -230,  -230,  -230,
    -230,   312,  -230,  -230,   -78,  -122,   -45,  -230,  -120,  -230,
      98,   100,   193,   194,   195,   105,    99,   102,   117,   -67,
    -230,   -73,  -230,  -230,  -230,  -230,  -230,  -128,  -134,   -40,
      10,  -230,   289,  -230,   -72,    71,  -230,  -230,  -230,   220,
      -5,  -230,   -14,   303,   -17,   -43,  -230,  -230,   138,  -230,
    -100,  -135,    82,  -229,  -230,  -230,   236,  -230
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   198,   199,   200,   201,   202,   203,   204,   205,   206,
      22,    23,    24,    57,   207,   222,   130,   177,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   263,   104,   105,   106,    65,   240,   146,    25,
      59,    40,    41,    27,    28,   132,    29,    33,    66,    67,
      30,    31,    72,    43,    44,    53,   120,   121,   122,   123,
     134,   107,   137,   138,   139,   140,   141,    60
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     128,   129,    58,   236,   223,   220,   296,   131,   143,   144,
      26,    89,    42,   232,   301,   223,   115,   110,   116,   242,
     135,    52,    36,    50,    32,   109,   136,   226,   111,   165,
      37,    54,    26,    51,    64,   164,    70,    45,    46,    38,
      47,    48,   239,  -159,    55,   224,   135,   221,    69,   129,
      68,   165,   136,    49,   237,   131,    51,   125,   228,   131,
     270,   131,   165,   267,   129,   223,   277,   209,   208,   210,
     131,   216,   119,   280,   133,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   227,   307,    89,   256,   257,   258,   126,    64,     3,
     260,   296,   234,     3,   108,   217,   302,    51,   305,   306,
     124,    69,   165,   299,   275,    12,    36,   314,   327,    12,
     145,  -120,   133,    73,    37,   148,   133,    18,   133,   325,
     329,    18,   259,   228,   262,    56,    74,   133,    75,    76,
      77,    78,   235,   322,    79,   333,   334,   147,   303,    38,
      81,    82,    83,    84,    85,    86,    87,    88,   165,   281,
     228,   319,   311,   149,   293,   283,   336,   165,   284,   165,
     330,    61,   228,    62,   150,   228,   326,   211,   323,   324,
      36,   348,   349,   291,   212,   161,   331,   135,    37,   355,
     162,   163,   295,   136,   337,   310,   218,    38,   312,   341,
     363,   364,   229,   135,   230,    69,   219,   343,   338,   136,
     231,   345,   352,   347,   233,   354,   350,   264,    39,   357,
     241,   320,   151,   152,   265,   351,   157,   158,   266,   119,
     361,   308,   362,   159,   160,   328,   178,   268,   179,   271,
     208,   269,   180,   181,   182,   183,   153,   154,   155,   156,
     272,    89,   248,   249,   250,   251,   246,   247,   321,   252,
     253,   273,   346,     1,   276,   278,     2,     3,   279,   353,
     282,     4,   165,     5,     6,     7,   254,   255,   285,     8,
       9,    10,    11,    12,   286,    13,    14,   289,    15,   290,
     294,   297,   304,    16,    17,    18,   309,    19,    20,    21,
     313,     1,   316,   317,     2,     3,   332,   292,   335,     4,
    -212,     5,     6,     7,   340,   228,   339,     8,     9,    10,
      11,    12,   342,    13,    14,   344,    15,   356,   358,   359,
     360,    16,    17,    18,    35,    19,    20,    21,   298,   315,
      56,   243,   300,   244,    71,   245,   225,    63,     1,   184,
     185,     2,     3,   186,   187,   188,     4,   288,     5,     6,
       7,   189,   190,   191,     8,     9,    10,    11,    12,   192,
      13,    14,    73,    15,   318,   193,   238,   287,    16,    17,
      18,   194,    19,    20,    21,   195,     0,    75,    76,    77,
      78,     0,     0,    79,     0,   108,   196,     0,     0,    81,
      82,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     1,   184,   185,     2,     3,   186,
     187,   188,     4,   197,     5,     6,     7,   189,   190,   191,
       8,     9,    10,    11,    12,   192,    13,    14,    73,    15,
       0,   193,     0,     0,    16,    17,    18,   194,    19,    20,
      21,   195,     0,    75,    76,    77,    78,     0,     0,    79,
       0,   108,     0,     0,     0,    81,    82,    83,    84,    85,
      86,    87,    88,     0,     1,     0,     0,     2,     3,     0,
       0,     0,     4,     0,     5,     6,     7,     0,     0,   197,
       8,     9,    10,    11,    12,     0,    13,    14,    73,    15,
       0,     0,     0,     0,    16,    17,    18,     0,    19,    20,
      21,    74,     0,    75,    76,    77,    78,     0,     0,    79,
       0,     0,     0,     0,     0,    81,    82,    83,    84,    85,
      86,    87,    88,   184,   185,     0,     0,   186,   187,   188,
       0,     0,     0,     0,     0,   189,   190,   191,     0,   197,
       0,     0,     0,   192,     0,     0,    73,     0,     0,   193,
       0,     0,     0,     0,     0,   194,     0,     0,     0,   195,
       0,    75,    76,    77,    78,     0,     0,    79,     0,   108,
       0,     0,     0,    81,    82,    83,    84,    85,    86,    87,
      88,     2,     3,     0,     0,     0,     4,     0,     5,     0,
       7,     0,     0,     0,     0,     9,    10,   197,    12,     0,
      13,    14,    73,     0,     0,     0,     0,     0,    16,    17,
      18,     0,    19,    20,    21,    74,     0,    75,    76,    77,
      78,     3,     0,    79,     0,     0,     0,     0,     0,    81,
      82,    83,    84,    85,    86,    87,    88,    12,     0,     0,
       0,    73,   112,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     0,     0,    74,     0,    75,    76,    77,    78,
       3,   113,    79,     0,     0,     0,     0,     0,    81,    82,
      83,   114,    85,    86,    87,    88,    12,     0,     0,     0,
      73,   213,     0,     0,     0,     0,     0,     0,    18,     0,
       0,     0,     0,    74,     0,    75,    76,    77,    78,     0,
     214,    79,    73,     0,     0,     0,     0,    81,    82,    83,
     215,    85,    86,    87,    88,    74,     0,    75,    76,    77,
      78,     0,     0,    79,     0,     0,     0,    73,     0,    81,
      82,    83,    84,    85,    86,    87,    88,     0,     0,     0,
      74,     0,    75,    76,    77,    78,     0,     0,    79,     0,
       0,     0,     0,   274,    81,    82,    83,    84,    85,    86,
      87,    88,     0,     1,     0,     0,     2,     3,     0,     0,
       0,     4,     0,     5,     6,     7,     0,     0,   197,     8,
       9,    10,    11,    12,     0,    13,    14,     0,    15,     0,
       0,     0,     0,    16,    17,    18,     0,    19,    20,    21,
       0,     1,     0,     0,     2,     3,     0,     0,     0,     4,
     108,     5,     6,     7,     0,     0,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,     0,     0,     0,
       0,    16,    17,    18,     0,    19,    20,    21,   117,    34,
       0,     0,     1,     0,     0,     2,     3,   118,     0,     0,
       4,     0,     5,     6,     7,     0,     0,     0,     8,     9,
      10,    11,    12,     0,    13,    14,     0,    15,     0,     0,
       0,     0,    16,    17,    18,     0,    19,    20,    21,     1,
       0,     0,     2,     3,     0,     0,     0,     4,     0,     5,
       6,     7,     0,     0,     0,     8,     9,    10,    11,    12,
       0,    13,    14,     0,    15,    73,     0,     0,     0,    16,
      17,    18,     0,    19,    20,    21,     0,     0,    74,     0,
      75,    76,    77,    78,     0,     0,    79,    73,    80,     0,
       0,     0,    81,    82,    83,    84,    85,    86,    87,    88,
      74,     0,    75,    76,    77,    78,     0,     0,    79,   261,
      73,     0,     0,     0,    81,    82,    83,    84,    85,    86,
      87,    88,     0,    74,     0,    75,    76,    77,    78,     0,
       0,    79,    73,   292,     0,     0,     0,    81,    82,    83,
      84,    85,    86,    87,    88,    74,     0,    75,    76,    77,
      78,     0,     0,   127,    73,     0,     0,     0,     0,    81,
      82,    83,    84,    85,    86,    87,    88,    74,     0,    75,
      76,    77,    78,     0,     0,   142,    73,     0,     0,     0,
       0,    81,    82,    83,    84,    85,    86,    87,    88,    74,
       0,    75,    76,    77,    78,     0,     0,    79,     0,     0,
       0,     0,     0,    81,    82,    83,    84,    85,    86,    87,
      88,     2,     3,     0,     0,     0,     4,     0,     5,     0,
       7,     0,     0,     0,     0,     9,    10,     0,    12,     0,
      13,    14,     0,     0,     0,     0,     0,     0,    16,    17,
      18,     0,    19,    20,    21,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176
};

static const yytype_int16 yycheck[] =
{
      73,    79,    42,   138,   124,    49,   235,    79,    81,    82,
       0,    56,    26,   135,    47,   135,    61,    57,    61,   147,
      46,    38,    40,    37,    40,    57,    52,   127,    60,   102,
      48,    78,    22,    38,    40,   102,    53,    27,    28,    57,
      30,    31,   142,    50,    91,    51,    46,    91,    53,   127,
      49,   124,    52,    50,    80,   127,    61,    51,    91,   131,
     188,   133,   135,   185,   142,   185,   194,   112,   108,   112,
     142,   116,    62,   201,    79,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,    49,   271,   138,   161,   162,   163,    91,    40,     7,
     178,   330,    51,     7,    50,   119,    49,   112,   269,   270,
      80,   116,   185,   241,   192,    23,    40,   278,    49,    23,
      75,    76,   127,    27,    48,    73,   131,    35,   133,   308,
      51,    35,   177,    91,   179,    80,    40,   142,    42,    43,
      44,    45,    91,   304,    48,   324,   325,    74,    91,    57,
      54,    55,    56,    57,    58,    59,    60,    61,   231,    78,
      91,   296,    78,    72,   231,   210,   327,   240,   213,   242,
      91,    46,    91,    48,    56,    91,   310,    47,   306,   307,
      40,   342,   343,   228,    47,    57,   320,    46,    48,   350,
      62,    63,    51,    52,   328,   273,    49,    57,   276,   333,
     361,   362,   131,    46,   133,   210,    91,   335,    51,    52,
      49,   339,   346,   341,    40,   349,   344,    40,    78,   353,
      76,   299,    70,    71,    40,   345,    64,    65,    78,   219,
     358,   271,   360,    58,    59,   313,    46,    78,    48,    48,
     280,    77,    52,    53,    54,    55,    66,    67,    68,    69,
      40,   296,   153,   154,   155,   156,   151,   152,   303,   157,
     158,    48,   340,     3,    48,    77,     6,     7,    51,   347,
      47,    11,   345,    13,    14,    15,   159,   160,    47,    19,
      20,    21,    22,    23,    47,    25,    26,    40,    28,    49,
      47,    49,    77,    33,    34,    35,    78,    37,    38,    39,
      48,     3,    47,    47,     6,     7,    36,    50,    49,    11,
      50,    13,    14,    15,    48,    91,    77,    19,    20,    21,
      22,    23,    49,    25,    26,    49,    28,    49,    12,    78,
      49,    33,    34,    35,    22,    37,    38,    39,   240,   280,
      80,   148,   242,   149,    55,   150,   126,    44,     3,     4,
       5,     6,     7,     8,     9,    10,    11,   219,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,   292,    30,   140,    79,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    -1,    -1,    48,    -1,    50,    51,    -1,    -1,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    78,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    30,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    -1,    -1,    48,
      -1,    50,    -1,    -1,    -1,    54,    55,    56,    57,    58,
      59,    60,    61,    -1,     3,    -1,    -1,     6,     7,    -1,
      -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,    78,
      19,    20,    21,    22,    23,    -1,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    33,    34,    35,    -1,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    -1,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,    58,
      59,    60,    61,     4,     5,    -1,    -1,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,    18,    -1,    78,
      -1,    -1,    -1,    24,    -1,    -1,    27,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    40,
      -1,    42,    43,    44,    45,    -1,    -1,    48,    -1,    50,
      -1,    -1,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,     6,     7,    -1,    -1,    -1,    11,    -1,    13,    -1,
      15,    -1,    -1,    -1,    -1,    20,    21,    78,    23,    -1,
      25,    26,    27,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    -1,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,     7,    -1,    48,    -1,    -1,    -1,    -1,    -1,    54,
      55,    56,    57,    58,    59,    60,    61,    23,    -1,    -1,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,
       7,    47,    48,    -1,    -1,    -1,    -1,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    23,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,    -1,
      47,    48,    27,    -1,    -1,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    40,    -1,    42,    43,    44,
      45,    -1,    -1,    48,    -1,    -1,    -1,    27,    -1,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,    -1,    -1,
      40,    -1,    42,    43,    44,    45,    -1,    -1,    48,    -1,
      -1,    -1,    -1,    78,    54,    55,    56,    57,    58,    59,
      60,    61,    -1,     3,    -1,    -1,     6,     7,    -1,    -1,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    78,    19,
      20,    21,    22,    23,    -1,    25,    26,    -1,    28,    -1,
      -1,    -1,    -1,    33,    34,    35,    -1,    37,    38,    39,
      -1,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,
      50,    13,    14,    15,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    -1,    37,    38,    39,    40,     0,
      -1,    -1,     3,    -1,    -1,     6,     7,    49,    -1,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    25,    26,    -1,    28,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,    37,    38,    39,     3,
      -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,
      14,    15,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      -1,    25,    26,    -1,    28,    27,    -1,    -1,    -1,    33,
      34,    35,    -1,    37,    38,    39,    -1,    -1,    40,    -1,
      42,    43,    44,    45,    -1,    -1,    48,    27,    50,    -1,
      -1,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      40,    -1,    42,    43,    44,    45,    -1,    -1,    48,    49,
      27,    -1,    -1,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    -1,    40,    -1,    42,    43,    44,    45,    -1,
      -1,    48,    27,    50,    -1,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    40,    -1,    42,    43,    44,
      45,    -1,    -1,    48,    27,    -1,    -1,    -1,    -1,    54,
      55,    56,    57,    58,    59,    60,    61,    40,    -1,    42,
      43,    44,    45,    -1,    -1,    48,    27,    -1,    -1,    -1,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    40,
      -1,    42,    43,    44,    45,    -1,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,     6,     7,    -1,    -1,    -1,    11,    -1,    13,    -1,
      15,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    -1,    37,    38,    39,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    22,    23,    25,    26,    28,    33,    34,    35,    37,
      38,    39,   106,   107,   108,   135,   136,   139,   140,   142,
     146,   147,    40,   143,     0,   107,    40,    48,    57,    78,
     137,   138,   148,   149,   150,   136,   136,   136,   136,    50,
     148,   146,   150,   151,    78,    91,    80,   109,   135,   136,
     163,    46,    48,   149,    40,   132,   144,   145,    49,   146,
     150,   138,   148,    27,    40,    42,    43,    44,    45,    48,
      50,    54,    55,    56,    57,    58,    59,    60,    61,   112,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   129,   130,   131,   157,    50,    99,
     135,    99,    28,    47,    57,   112,   151,    40,    49,   136,
     152,   153,   154,   155,    80,    51,    91,    48,   127,   110,
     112,   140,   141,   146,   156,    46,    52,   158,   159,   160,
     161,   162,    48,   127,   127,    75,   134,    74,    73,    72,
      56,    70,    71,    66,    67,    68,    69,    64,    65,    58,
      59,    57,    62,    63,   125,   127,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,   113,    46,    48,
      52,    53,    54,    55,     4,     5,     8,     9,    10,    16,
      17,    18,    24,    30,    36,    40,    51,    78,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   110,   135,   112,
     151,    47,    47,    28,    47,    57,   112,   148,    49,    91,
      49,    91,   111,   114,    51,   145,   156,    49,    91,   141,
     141,    49,   111,    40,    51,    91,   157,    80,   162,   156,
     133,    76,   133,   118,   119,   120,   121,   121,   122,   122,
     122,   122,   123,   123,   124,   124,   125,   125,   125,   112,
     110,    49,   112,   128,    40,    40,    78,   111,    78,    77,
     133,    48,    40,    48,    78,   110,    48,   133,    77,    51,
     133,    78,    47,   112,   112,    47,    47,    79,   154,    40,
      49,   112,    50,   125,    47,    51,   159,    49,   116,   133,
     117,    47,    49,    91,    77,    97,    97,   102,   135,    78,
     110,    78,   110,    48,    97,   101,    47,    47,   158,   157,
     110,   112,    97,   133,   133,   102,   134,    49,   110,    51,
      91,   134,    36,   102,   102,    49,    97,   134,    51,    77,
      48,   134,    49,   133,    49,   133,   110,   133,    97,    97,
     133,   114,   134,   110,   134,    97,    49,   134,    12,    78,
      49,   133,   133,    97,    97
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    97,    97,    97,    97,    97,    98,    98,
      98,    99,    99,   100,   100,   101,   101,   102,   102,   103,
     103,   103,   104,   104,   104,   104,   105,   105,   105,   105,
     105,   106,   106,   107,   107,   108,   108,   109,   109,   110,
     110,   111,   112,   112,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   114,   114,   115,   115,   116,
     116,   117,   117,   118,   118,   119,   119,   120,   120,   120,
     121,   121,   121,   121,   121,   122,   122,   122,   123,   123,
     123,   124,   124,   124,   124,   125,   125,   126,   126,   126,
     126,   126,   126,   127,   127,   127,   127,   127,   127,   128,
     128,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   130,   130,   130,   130,   131,   131,   131,   132,   133,
     134,   135,   135,   136,   136,   136,   136,   136,   136,   136,
     136,   137,   137,   138,   138,   139,   139,   139,   139,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   141,   141,   141,   141,   142,   142,   142,   143,
     143,   144,   144,   145,   145,   146,   146,   146,   147,   148,
     148,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   150,   150,   150,   150,   151,
     151,   152,   152,   153,   153,   154,   154,   155,   155,   156,
     157,   157,   157,   158,   158,   159,   159,   160,   161,   161,
     162,   162,   163
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     4,
       3,     2,     3,     1,     3,     1,     1,     1,     2,     8,
      11,     5,     8,    10,    12,     7,     3,     2,     2,     2,
       3,     1,     2,     1,     1,     4,     4,     1,     2,     1,
       3,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     9,     1,     4,     1,
       4,     1,     3,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     4,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     4,     1,
       3,     1,     4,     3,     4,     3,     3,     2,     2,     6,
       7,     1,     1,     1,     3,     1,     1,     1,     1,     0,
       0,     2,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     1,     5,     6,     2,     1,
       0,     1,     3,     1,     3,     1,     1,     1,     1,     2,
       1,     1,     3,     5,     4,     4,     3,     6,     5,     6,
       5,     4,     4,     4,     3,     1,     2,     2,     3,     1,
       2,     1,     3,     1,     3,     2,     1,     1,     3,     1,
       1,     3,     4,     2,     4,     1,     0,     2,     1,     2,
       3,     2,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 204 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("statement ->labeled_statement \n");}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 205 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.expr_val) = (yyvsp[0].expr_val);printf("statement ->compound_statement\n");}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 206 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.expr_val) = (yyvsp[0].expr_val);printf("statement ->expression_statement \n");}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 207 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.expr_val) = (yyvsp[0].expr_val);printf("statement ->selection_statement \n");}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 208 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.expr_val) = (yyvsp[0].expr_val);printf("statement ->iteration_statement \n");}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 209 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.expr_val) = (yyvsp[0].expr_val);printf("statement ->jump_statement \n");}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 211 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("labeled_statement ->IDENTIFIER COLON statement\n");}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 213 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("labeled_statement ->CASE_KEYWORD constant_expression COLON statement   \n");}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 214 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("labeled_statement ->DEFAULT_KEYWORD COLON statement \n");}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 219 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("compound_statement -> LEFT_CURLY_BRACE RIGHT_CURLY_BRACE\n");}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 221 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.expr_val) = (yyvsp[-1].expr_val);printf("compound_statement->LEFT_CURLY_BRACE block_item_list RIGHT_CURLY_BRACE \n");}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 226 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.expr_val) = (yyvsp[0].expr_val);printf("block_item_list ->block_item \n");}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 228 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                  backpatch((yyvsp[-2].expr_val).nextlist,(yyvsp[-1].instr));
		                  (yyval.expr_val) = (yyvsp[0].expr_val);
                                  printf("block_item_list ->block_item_list M block_item  \n");
                                }
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 235 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("block_item ->declaration\n");}
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 236 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.expr_val) = (yyvsp[0].expr_val);printf("block_item ->statement\n");}
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 239 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("expression_statement -> SEMICOLON_TERMINATOR \n");}
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 241 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.expr_val) = (yyvsp[-1].expr_val);printf("expression_statement -> expression  SEMICOLON_TERMINATOR  \n");}
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 247 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    if(((yyvsp[-5].expr_val).type)->type != bool_type)
                                    {
                                        (yyval.expr_val).nextlist = makelist(next_instr);
                                        row_of_quad x(0,0,0,goto_op);
                                        add(x);
                                    }
       
                                    backpatch((yyvsp[-4].N_val),next_instr);
	  	                    convert2bool(&(yyvsp[-5].expr_val));
	  	                    backpatch((yyvsp[-5].expr_val).truelist,(yyvsp[-2].instr));
                                    (yyval.expr_val).nextlist = mergelist((yyval.expr_val).nextlist,(yyvsp[-1].expr_val).nextlist);
                                    (yyval.expr_val).nextlist = mergelist((yyval.expr_val).nextlist,(yyvsp[0].N_val));
                                    (yyval.expr_val).nextlist = mergelist((yyval.expr_val).nextlist,(yyvsp[-5].expr_val).falselist);
                                    printf("selection_statement -> IF_KEYWORD LEFT_ROUND_BRACE expression N RIGHT_ROUND_BRACE M statement N \n");
                                }
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 264 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                     
	  	                     if(((yyvsp[-8].expr_val).type)->type!=bool_type)
                                     {
	  		                  (yyval.expr_val).nextlist = makelist(next_instr);
	  		                  row_of_quad x(0,0,0,goto_op);
	  		                  add(x);
	  	                     }
	  	                     backpatch((yyvsp[-7].N_val),next_instr);
	  	                     convert2bool(&(yyvsp[-8].expr_val));
	  	                     backpatch((yyvsp[-8].expr_val).truelist,(yyvsp[-5].instr));
	  	                     backpatch((yyvsp[-8].expr_val).falselist,(yyvsp[-1].instr));
                                     (yyval.expr_val).nextlist = mergelist((yyval.expr_val).nextlist,(yyvsp[-4].expr_val).nextlist);
                                     (yyval.expr_val).nextlist = mergelist((yyval.expr_val).nextlist,(yyvsp[-3].N_val));
                                     (yyval.expr_val).nextlist = mergelist((yyval.expr_val).nextlist,(yyvsp[0].expr_val).nextlist);
                                     printf("selection_statement ->IF_KEYWORD LEFT_ROUND_BRACE expression N  RIGHT_ROUND_BRACE M  statement N  ELSE_KEYWORD M statement  \n");
                                }
#line 2012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 283 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf(" selection_statement ->SWITCH_KEYWORD LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE statement \n");}
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 286 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                   char *res = convert2char_star((yyvsp[-6].instr));
	  	                   row_of_quad x(0,0,res,goto_op);
	  	                   add(x);
	  	                   backpatch((yyvsp[-3].N_val),next_instr);
	  	                   convert2bool(&(yyvsp[-4].expr_val));
	  	                   backpatch((yyvsp[0].expr_val).nextlist,(yyvsp[-6].instr));
	  	                   backpatch((yyvsp[-4].expr_val).truelist,(yyvsp[-1].instr));
	  	                   (yyval.expr_val).nextlist = (yyvsp[-4].expr_val).falselist;
                                   printf("iteration_statement ->WHILE_KEYWORD M LEFT_ROUND_BRACE expression N  RIGHT_ROUND_BRACE M  statement  \n");
                                }
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 298 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                   backpatch((yyvsp[-2].N_val),next_instr);
	  	                   convert2bool(&(yyvsp[-3].expr_val));
	  	                   backpatch((yyvsp[-3].expr_val).truelist,(yyvsp[-8].instr));
	  	                   backpatch((yyvsp[-7].expr_val).nextlist,(yyvsp[-6].instr));
	  	                   (yyval.expr_val).nextlist = (yyvsp[-3].expr_val).falselist;
                                   printf("iteration_statement ->DO_KEYWORD M statement M WHILE_KEYWORD LEFT_ROUND_BRACE expression N RIGHT_ROUND_BRACE SEMICOLON_TERMINATOR\n");
                                }
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 307 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                   backpatch((yyvsp[-3].N_val),(yyvsp[-8].instr));
	  	                   (yyvsp[0].expr_val).nextlist = mergelist((yyvsp[0].expr_val).nextlist,makelist(next_instr));
	  	                   row_of_quad x(0,0,0,goto_op);
	  	                   add(x);
	  	                   backpatch((yyvsp[0].expr_val).nextlist,(yyvsp[-5].instr));
	  	                   backpatch((yyvsp[-6].N_val),next_instr);
	  	                   convert2bool(&(yyvsp[-7].expr_val));
	  	                   backpatch((yyvsp[-7].expr_val).truelist,(yyvsp[-1].instr));
	  	                   (yyval.expr_val).nextlist = (yyvsp[-7].expr_val).falselist;
                printf("iteration_statement->FOR_KEYWORD LEFT_ROUND_BRACE expression_statement M  expression_statement N   M expression N RIGHT_ROUND_BRACE M  statement \n");
                               }
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 321 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                     printf("iteration_statement->FOR_KEYWORD LEFT_ROUND_BRACE declaration expression_statement  expression_statement RIGHT_ROUND_BRACE statement \n");
                               }
#line 2072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 326 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("jump_statement ->GOTO_KEYWORD IDENTIFIER SEMICOLON_TERMINATOR \n");}
#line 2078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 327 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("jump_statement ->CONTINUE_KEYWORD SEMICOLON_TERMINATOR \n");}
#line 2084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 328 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("jump_statement ->BREAK_KEYWORD SEMICOLON_TERMINATOR \n");}
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 330 "ass5_14CS10062.y" /* yacc.c:1646  */
    { 
                                  row_of_quad x(0,0,0,return_op);
	  	                  add(x);
                                  printf("jump_statement -> RETURN_KEYWORD SEMICOLON_TERMINATOR");

                                }
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 337 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
	  	                   row_of_quad x(strdup(((yyvsp[-1].expr_val).location)->name),0,0,return_value_op);
	  	                   add(x);
                                   printf("jump_statement ->RETURN_KEYWORD expression SEMICOLON_TERMINATOR \n");
                                }
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 348 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("translation_unit -> external_declaration\n");}
#line 2117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 349 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("translation_unit -> translation_unit external_declaration\n");}
#line 2123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 352 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("external_declaration ->function_definition\n");}
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 353 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("external_declaration ->function_definition\n");}
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 357 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("function_definition -> declaration_specifiers declarator declaration_list compound_statement\n");}
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 361 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
				   if(global->lookup((yyvsp[-2].atr_val).name)!=0)
					{
						//printf(" ############ I WAS ALREADY PRESENT ##############3\n");
						current = global;
                                  		printf("function_definition->declaration_specifiers declarator F compound_statement\n");
					}
				   else if(global->lookup((yyvsp[-2].atr_val).name)==0)
					{
						//printf(" ############ I WAS NOT PRESENT BEFORE ##############3\n");
						//printf(" des.p = %d\n des.q = %d\n des.c = %d\n", des.p, des.q, des.c);
						//if(des.p == 1 && des.q == 0)
				                   {
			  		               type_expression *k = new_expression(((yyvsp[-3].atr_val).type)->type,-1);
			  		               row_of_symbol_table x(strdup("RETURN"),k,(yyvsp[-3].atr_val).width,-1,0,0);
			  		               temporary->add(x);
			  		               k = new_expression(function_type,-1);
			  		               row_of_symbol_table y((yyvsp[-2].atr_val).name,k,0,-1,0,temporary);
			  		               global->add(y);
						       //row_of_quad r($2.var,0,0,function_op);
		                    		       //add(r);
						       int i;
						       for(i = next_instr-1;i>=0;i--)
							{
								if(quad_array[i].op_code == function_op)
								{
									quad_array[i].arg1 = (yyvsp[-2].atr_val).name;
									break;
								}
							}
			  	                   }
			  	                   flag.p = 0;
			  	                   flag.q = 0;
			  	                   flag.c = 0;
				                   //printf("declaration -> declaration_specifiers init_declarator_list ';'\n");
				                  current = global;
				                  printf("function_definition->declaration_specifiers declarator F compound_statement\n");
					}
                               }
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 403 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("declaration_list ->declaration \n");}
#line 2191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 404 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("declaration_list ->declaration_list declaration  \n");}
#line 2197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 409 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.expr_val) = (yyvsp[0].expr_val);printf("expression ->assignment_expression \n");}
#line 2203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 410 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("expression ->expression COMMA assignment_expression\n");}
#line 2209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 413 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("constant_expression ->conditional_expression \n");}
#line 2215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 416 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.expr_val) = (yyvsp[0].expr_val);printf("assignment_expression ->conditional_expression \n");}
#line 2221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 418 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    if(((yyvsp[-2].expr_val).type)->type == pointer_type)
                                    {
                                        char* res = strdup(((yyvsp[-2].expr_val).location)->name);
                                        char *arg1 = strdup(((yyvsp[0].expr_val).location)->name);
                                        row_of_quad x(arg1,0,res,assign_op);
                                        add(x);
                                    }
                                    else {
                                    if(!typecheck((yyvsp[-2].expr_val).type,(yyvsp[0].expr_val).type))
                                    {
                                         convert_type_array((yyvsp[-2].expr_val),(yyvsp[0].expr_val),(yyval.expr_val));
                                    }
                                    else
                                    {
                                        if((yyvsp[-2].expr_val).loc_temp)
                                        {
		  		            char *arg1 = strdup(((yyvsp[-2].expr_val).array)->name);
		  		            char *arg2 = strdup(((yyvsp[-2].expr_val).loc_temp)->name);
		  		            char *res = strdup(((yyvsp[0].expr_val).location)->name);
		  		            row_of_quad x(arg1,arg2,res,left_brace_op);
		  		            add(x);
	            		        }
	  		                else
                                        {
		  		            char *arg1 = strdup(((yyvsp[0].expr_val).location)->name);
			  	            char *res = strdup(((yyvsp[-2].expr_val).location)->name);
			  	            row_of_quad x(arg1,0,res,assign_op);
			  	            add(x);
	  		                }
                                    } 
                                    }
                                    printf("assignment_expression->unary_expression assignment_operator assignment_expression  \n");
                                }
#line 2260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 454 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("assignment_operator -> EQUAL\n");}
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 455 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("assignment_operator ->MULTIPLICATION_EQUAL \n");}
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 456 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("assignment_operator ->SLASH_EQUAL \n");}
#line 2278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 457 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("assignment_operator ->PERCENTAGE_EQUAL \n");}
#line 2284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 458 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("assignment_operator->PLUS_EQUAL \n");}
#line 2290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 459 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("assignment_operator ->MINUS_EQUAL \n");}
#line 2296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 460 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("assignment_operator ->LEFT_SHIFT_EQUAL\n");}
#line 2302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 461 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("assignment_operator ->RIGHT_SHIFT_EQUAL \n");}
#line 2308 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 462 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("assignment_operator->BITWISE_AND_EQUAL \n");}
#line 2314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 463 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("assignment_operator ->BITWISE_NOT_EQUAL  \n");}
#line 2320 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 464 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("assignment_operator ->BITWISE_OR_EQUAL \n");}
#line 2326 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 468 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.expr_val) = (yyvsp[0].expr_val);printf("conditional_expression ->logical_OR_expression \n");}
#line 2332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 470 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    (yyval.expr_val).location = current->gentemp(((yyvsp[-4].expr_val).type)->type);
	  	                    (yyval.expr_val).type = (yyvsp[-4].expr_val).type;
	  	                    char *res = strdup(((yyval.expr_val).location)->name);
	  	                    char *arg1 = strdup(((yyvsp[0].expr_val).location)->name);
	  	                    row_of_quad x(arg1,0,res,assign_op);
	  	                    add(x);
                                  
                                    
	  	                    vector<int> *l = makelist(next_instr);
	  	                    row_of_quad y(0,0,0,goto_op);
	  	                    add(y);
	  	                    backpatch((yyvsp[-3].N_val),next_instr);

	  	                    res = strdup(((yyval.expr_val).location)->name);
	  	                    arg1 = strdup(((yyvsp[-4].expr_val).location)->name);
	  	                    row_of_quad z(arg1,0,res,assign_op);
	  	                    add(z);
	  	                    l = mergelist(l,makelist(next_instr));
	  	                    row_of_quad a(0,0,0,goto_op);
	  	                    add(a);
                                    backpatch((yyvsp[-7].N_val),next_instr);
	  	                    convert2bool(&(yyvsp[-8].expr_val));
	  	                    backpatch((yyvsp[-8].expr_val).truelist,(yyvsp[-5].instr));
	  	                    backpatch((yyvsp[-8].expr_val).falselist,(yyvsp[-1].instr));
	  	                    backpatch(l,next_instr);
 
                                     printf("conditional_expression->logical_OR_expression N QUESTION_MARK M  expression N  COLON M  conditional_expression\n");
                                }
#line 2366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 501 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.expr_val) = (yyvsp[0].expr_val);printf("logical_OR_expression->logical_AND_expression \n");}
#line 2372 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 503 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    backpatch((yyvsp[-3].expr_val).falselist,(yyvsp[-1].instr));
	  	                    (yyval.expr_val).truelist = mergelist((yyvsp[-3].expr_val).truelist,(yyvsp[0].expr_val).truelist);
	  	                    (yyval.expr_val).falselist = (yyvsp[0].expr_val).falselist;
	  	                    (yyval.expr_val).type = new_expression(bool_type,-1);
                                    printf("logical_OR_expression ->logical_OR_expression LOGICAL_OR M logical_AND_expression \n");
                                }
#line 2384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 512 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.expr_val) = (yyvsp[0].expr_val);printf("logical_AND_expression ->inclusive_OR_expression  \n");}
#line 2390 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 514 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    backpatch((yyvsp[-3].expr_val).truelist,(yyvsp[-1].instr));
	  	                    (yyval.expr_val).falselist = mergelist((yyvsp[-3].expr_val).falselist, (yyvsp[0].expr_val).falselist);
	  	                    (yyval.expr_val).truelist = (yyvsp[0].expr_val).truelist;
	  	                    (yyval.expr_val).type = new_expression(bool_type,-1);
                                    printf("logical_AND_expression ->logical_AND_expression LOGICAL_AND M inclusive_OR_expression \n");
                                }
#line 2402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 523 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.expr_val) = (yyvsp[0].expr_val);printf("inclusive_OR_expression ->exclusive_OR_expression \n");}
#line 2408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 525 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                   print_operation((yyval.expr_val),(yyvsp[-2].expr_val),(yyvsp[0].expr_val),bitwise_or_op);
                                   printf("inclusive_OR_expression ->inclusive_OR_expression BITWISE_OR exclusive_OR_expression\n");
                                }
#line 2417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 531 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.expr_val) = (yyvsp[0].expr_val);printf("exclusive_OR_expression ->AND_expression\n");}
#line 2423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 533 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                   print_operation((yyval.expr_val),(yyvsp[-2].expr_val),(yyvsp[0].expr_val),bitwise_xor_op);
                                   printf("exclusive_OR_expression ->exclusive_OR_expression CARET AND_expression \n");
                                }
#line 2432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 539 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.expr_val) = (yyvsp[0].expr_val);printf("AND_expression ->equality_expression\n");}
#line 2438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 541 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    print_operation((yyval.expr_val),(yyvsp[-2].expr_val),(yyvsp[0].expr_val),bitwise_and_op);
                                    printf("AND_expression ->AND_expression AMPERSAND equality_expression \n");
                                }
#line 2447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 547 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.expr_val) = (yyvsp[0].expr_val);printf("equality_expression->relational_expression\n");}
#line 2453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 549 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    logical_operation_evaluation((yyval.expr_val),(yyvsp[-2].expr_val),(yyvsp[0].expr_val),equal_to_gop,goto_op);
                                    printf("equality_expression->equality_expression EQUAL_EQUAL relational_expression\n");
                                }
#line 2462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 554 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    logical_operation_evaluation((yyval.expr_val),(yyvsp[-2].expr_val),(yyvsp[0].expr_val),not_equal_to_gop,goto_op);
                                    printf("equality_expression ->equality_expression NOT_EQUAL relational_expression\n");
                                }
#line 2471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 560 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.expr_val) = (yyvsp[0].expr_val);printf("relational_expression-> shift_expression \n");}
#line 2477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 562 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    logical_operation_evaluation((yyval.expr_val),(yyvsp[-2].expr_val),(yyvsp[0].expr_val),less_than_gop,goto_op);
                                    printf("relational_expression -> relational_expression LESS_THAN shift_expression  \n");
                                }
#line 2486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 567 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    logical_operation_evaluation((yyval.expr_val),(yyvsp[-2].expr_val),(yyvsp[0].expr_val),greater_than_gop,goto_op);
                                    printf("relational_expression ->relational_expression GREATER_THAN shift_expression\n");
                                }
#line 2495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 572 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    logical_operation_evaluation((yyval.expr_val),(yyvsp[-2].expr_val),(yyvsp[0].expr_val),less_than_or_equal_to_gop,goto_op);
                                    printf("relational_expression ->relational_expression LESS_THAN_EQUAL shift_expression\n");
                                }
#line 2504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 577 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    logical_operation_evaluation((yyval.expr_val),(yyvsp[-2].expr_val),(yyvsp[0].expr_val),greater_than_or_equal_to_gop,goto_op);
                                    printf("relational_expression->relational_expression GREATER_THAN_EQUAL shift_expression\n");
                                }
#line 2513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 583 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.expr_val) = (yyvsp[0].expr_val);printf("shift_expression-> additive_expression\n");}
#line 2519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 585 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    print_operation((yyval.expr_val),(yyvsp[-2].expr_val),(yyvsp[0].expr_val),shift_left_op);
                                    printf("shift_expression-> shift_expression LEFT_SHIFT additive_expression  \n");
                                }
#line 2528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 590 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    print_operation((yyval.expr_val),(yyvsp[-2].expr_val),(yyvsp[0].expr_val),shift_right_op);
                                    printf("shift_expression-> shift_expression RIGHT_SHIFT additive_expression \n");
                                }
#line 2537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 596 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.expr_val) = (yyvsp[0].expr_val);printf("additive_expression-> multiplicative_expression\n");}
#line 2543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 598 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    cout<<"The additive has the name .."<<((yyvsp[-2].expr_val).location)->name<<endl;
                                    cout<<"The additive has the name .."<<((yyvsp[0].expr_val).location)->name<<endl;
                                    if(typecheck((yyvsp[-2].expr_val).type, (yyvsp[0].expr_val).type)==0)
                                    {
	  		             	convert_type((yyval.expr_val),(yyvsp[-2].expr_val),(yyvsp[0].expr_val),addition_op);   
	  	                    }
                                    else
                                    {
                                        print_operation((yyval.expr_val),(yyvsp[-2].expr_val),(yyvsp[0].expr_val),addition_op);
                                    }
                                    printf("additive_expression-> additive_expression PLUS multiplicative_expression \n");
                                }
#line 2561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 612 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    if(typecheck((yyvsp[-2].expr_val).type, (yyvsp[0].expr_val).type)==0)
                                    {
	  		             	convert_type((yyval.expr_val),(yyvsp[-2].expr_val),(yyvsp[0].expr_val),subtraction_op);   
	  	                    }
                                    else
                                    {
                                        print_operation((yyval.expr_val),(yyvsp[-2].expr_val),(yyvsp[0].expr_val),subtraction_op);
                                    }
                                    printf("additive_expression-> additive_expression MINUS multiplicative_expression \n");
                                }
#line 2577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 625 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.expr_val) = (yyvsp[0].expr_val);printf("multiplicative_expression-> cast_expression\n");}
#line 2583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 627 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    if(typecheck((yyvsp[-2].expr_val).type, (yyvsp[0].expr_val).type)==0)
                                    {
	  		             	convert_type((yyval.expr_val),(yyvsp[-2].expr_val),(yyvsp[0].expr_val),multiplication_op);   
	  	                    }
                                    else
                                    {
                                        print_operation((yyval.expr_val),(yyvsp[-2].expr_val),(yyvsp[0].expr_val),multiplication_op);
                                    }
                                    printf("multiplicative_expression-> multiplicative_expression MULTIPLICATION cast_expression\n");
                                }
#line 2599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 639 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    if(typecheck((yyvsp[-2].expr_val).type, (yyvsp[0].expr_val).type)==0)
                                    {
	  		            	convert_type((yyval.expr_val),(yyvsp[-2].expr_val),(yyvsp[0].expr_val),division_op);    
	  	                    }
                                    else
                                    {
                                        print_operation((yyval.expr_val),(yyvsp[-2].expr_val),(yyvsp[0].expr_val),division_op);
                                    }
                                    printf("multiplicative_expression-> multiplicative_expression FORWARD_SLASH cast_expression\n");
                                }
#line 2615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 651 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    if(typecheck((yyvsp[-2].expr_val).type, (yyvsp[0].expr_val).type)==0)
                                    {
	  		           	convert_type((yyval.expr_val),(yyvsp[-2].expr_val),(yyvsp[0].expr_val),mod_op);     
	  	                    }
                                    else
                                    {
                                        print_operation((yyval.expr_val),(yyvsp[-2].expr_val),(yyvsp[0].expr_val),mod_op);
                                    }
                                    printf("multiplicative_expression-> multiplicative_expression PERCENTAGE cast_expression\n");
                                }
#line 2631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 664 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.expr_val) = (yyvsp[0].expr_val);printf("cast_expression-> unary_expression\n");}
#line 2637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 665 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("cast_expression->LEFT_ROUND_BRACE type_name RIGHT_ROUND_BRACE cast_expression\n");}
#line 2643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 668 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.op_val) = unary_address_op;printf("unary_operator-> AMPERSAND\n");}
#line 2649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 669 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.op_val) = unary_star_op;printf("unary_operator-> MULTIPLICATION\n");}
#line 2655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 670 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.op_val) = unary_plus_op;printf("unary_operator-> PLUS\n");}
#line 2661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 671 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.op_val) =  unary_minus_op;printf("unary_operator-> MINUS\n");}
#line 2667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 672 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.op_val) = unary_negation_op;printf("unary_operator-> TILDE\n");}
#line 2673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 673 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.op_val) = bitwise_not_op;printf("unary_operator-> EXCLIMATION\n");}
#line 2679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 677 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                   (yyval.expr_val) = (yyvsp[0].expr_val);
	  	                   if((yyvsp[0].expr_val).loc_temp!=NULL)
                                   {
	  		               (yyval.expr_val).location = current->gentemp(((yyvsp[0].expr_val).type)->type);
	  		               char *arg1 = strdup(((yyvsp[0].expr_val).array)->name);
	  		               char *arg2 = strdup(((yyvsp[0].expr_val).loc_temp)->name);
	  		               char *res = strdup(((yyval.expr_val).location)->name);
	  		               row_of_quad x(arg1,arg2,res,right_brace_op);
	  		               add(x);
	  	                   }
                                   printf("unary_expression-> postfix_expression\n");
                                }
#line 2697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 691 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                   (yyval.expr_val).location = current->gentemp(((yyvsp[0].expr_val).type)->type);
	  	                   char *arg1 = strdup(((yyvsp[0].expr_val).location)->name);
	  	                   char *arg2 = convert2char_star("1");
	  	                   char *res = strdup(((yyvsp[0].expr_val).location)->name);
	  	                   row_of_quad x(arg1,arg2,res,addition_op);
	  	                   add(x);
	  	
                                   arg1 = strdup(((yyvsp[0].expr_val).location)->name);
	  	                   res = strdup(((yyval.expr_val).location)->name);
	  	                   row_of_quad y(arg1,0,res,assign_op);
	  	                   add(y);
	  	                   (yyval.expr_val).type = (yyvsp[0].expr_val).type;
                                   printf("unary_expression-> PLUS_PLUS unary_expression \n");
                                }
#line 2717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 707 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                   (yyval.expr_val).location = current->gentemp(((yyvsp[0].expr_val).type)->type);
	  	                   char *arg1 = strdup(((yyvsp[0].expr_val).location)->name);
	  	                   char *arg2 = convert2char_star("1");
	  	                   char *res = strdup(((yyvsp[0].expr_val).location)->name);
	  	                   row_of_quad x(arg1,arg2,res,subtraction_op);
	  	                   add(x);
	  	
                                   arg1 = strdup(((yyvsp[0].expr_val).location)->name);
	  	                   res = strdup(((yyval.expr_val).location)->name);
	  	                   row_of_quad y(arg1,0,res,assign_op);
	  	                   add(y);
	  	                   (yyval.expr_val).type = (yyvsp[0].expr_val).type;
                                   printf("unary_expression-> MINUS_MINUS unary_expression\n");
                                }
#line 2737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 723 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                
                                    if(((yyvsp[0].expr_val).type)->type != pointer_type)
                                    {
                                        (yyval.expr_val).location = current->gentemp(((yyvsp[0].expr_val).type)->type);
	  	                        char *arg1 = strdup(((yyvsp[0].expr_val).location)->name);
	  	                        char *res = strdup(((yyval.expr_val).location)->name);
	  	                        row_of_quad x(arg1,0,res,(yyvsp[-1].op_val));
	  	                        add(x);
	  	                        (yyval.expr_val).type = (yyvsp[0].expr_val).type;
                                   }
                                   else
                                   {
                                        (yyval.expr_val).location = new row_of_symbol_table();
                                        string s(((yyvsp[0].expr_val).location)->name);
                                        s = "*" + s;
                                        ((yyval.expr_val).location)->name = convert2char_star(s);
                                         (yyval.expr_val).type = ((yyvsp[0].expr_val).type)->next;
                                         (yyval.expr_val).loc_temp = 0;
                                         (yyval.expr_val).array = (yyvsp[0].expr_val).array;                                  
                                        operators.push_back((yyvsp[-1].op_val));
                                   }
                                   printf("unary_expression-> unary_operator cast_expression \n");
                                }
#line 2766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 748 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("unary_expression-> SIZEOF_KEYWORD unary_expression\n");}
#line 2772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 750 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("unary_expression-> SIZEOF_KEYWORD LEFT_ROUND_BRACE type_name RIGHT_ROUND_BRACE\n");}
#line 2778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 755 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                   (yyval.param_val) = make_parameter_list((yyvsp[0].expr_val).location);
                                   printf("argument_expression_list-> assignment_expression\n");
                                }
#line 2787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 760 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    (yyval.param_val) = merge_parameter_list((yyvsp[-2].param_val),make_parameter_list((yyvsp[0].expr_val).location));
                                    printf("argument_expression_list-> argument_expression_list COMMA assignment_expression\n");
                                }
#line 2796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 767 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    (yyval.expr_val) = (yyvsp[0].expr_val);
                                    printf("postfix_expression-> primary_expression \n");
                                }
#line 2805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 772 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    (yyval.expr_val).array = (yyvsp[-3].expr_val).array;
	  	                    (yyval.expr_val).type = ((yyvsp[-3].expr_val).type)->next;
                                    if((yyvsp[-3].expr_val).loc_temp==NULL)
                                    {
					(yyval.expr_val).loc_temp = current->gentemp(int_type);
	  		               int n = width_of(((yyvsp[-3].expr_val).type)->next);
                                       char *res = strdup(((yyval.expr_val).loc_temp)->name);
	  		               char *arg1 = strdup(((yyvsp[-1].expr_val).location)->name);
	  		               char *arg2 = convert2char_star(n);
	  		               
	  		               row_of_quad x(arg1,arg2,res,multiplication_op);
	  		               add(x);
				    }
                                    else
                                    {
                                       row_of_symbol_table *temp = current->gentemp(int_type);
		  	               (yyval.expr_val).loc_temp = current->gentemp(int_type);
		  	               int n = width_of((yyval.expr_val).type);
                                       char *res = strdup(temp->name);
		  	               char *arg1 = strdup(((yyvsp[-1].expr_val).location)->name);
		  	               char *arg2 = convert2char_star(n);
		  	               
                                       row_of_quad x(arg1,arg2,res,multiplication_op);
		  	               add(x);

                                       res = strdup(((yyval.expr_val).loc_temp)->name);
		  	               arg1 = strdup(((yyvsp[-3].expr_val).loc_temp)->name);
		  	               arg2 = strdup(temp->name);
		  	      
		  	               row_of_quad y(arg1,arg2,res,addition_op);
		  	               add(y);  
                                    }
                                    
                                    printf("postfix_expression-> postfix_expression LEFT_SQUARE_BRACE expression RIGHT_SQUARE_BRACE\n");
                                }
#line 2846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 809 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                       int count = 0;
	  	                       row_of_symbol_table *t = global->lookup(((yyvsp[-2].expr_val).location)->name);
	  	                       (yyval.expr_val).location = current->gentemp(((((t->nested_symbol_table)->table)[count]).type)->type);
                                 
	  	                       char *res = strdup(((yyval.expr_val).location)->name);
	  	                       char *arg1 = strdup(((yyvsp[-2].expr_val).location)->name);
	  	                       char *arg2 = convert2char_star(count);
      
	  	                       row_of_quad x(arg1,arg2,res,call_op);
	  	                       add(x);
                                       (yyval.expr_val).type = ((yyval.expr_val).location)->type;
                                       printf("postfix_expression -> postfix_expression LEFT_ROUND_BRACE RIGHT_ROUND_BRACE\n");

                                }
#line 2866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 825 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                       vector<row_of_symbol_table *>* temp = (yyvsp[-1].param_val);
	  	                       int count = 0;
                                       int i = 0;
                                       for(vector<row_of_symbol_table*>::iterator it = (*temp).begin() ; it != (*temp).end(); ++it)
                                       {
                                          char *arg1 = strdup((*it)->name);
                                          row_of_quad x(arg1,0,0,param_op);
                                          add(x);
	  		                  count++;
                                       }
	  	                       row_of_symbol_table *t = global->lookup(((yyvsp[-3].expr_val).location)->name);
	  	                       (yyval.expr_val).location = current->gentemp(((((t->nested_symbol_table)->table)[count]).type)->type);
	  	
                                       char *res = strdup(((yyval.expr_val).location)->name);
	  	                       char *arg1 = strdup(((yyvsp[-3].expr_val).location)->name);
	  	                       char *arg2 = convert2char_star(count);
	  	                       row_of_quad x(arg1,arg2,res,call_op);
	  	
                                       add(x);
                                   (yyval.expr_val).type = ((yyval.expr_val).location)->type;
                                   printf("postfix_expression-> postfix_expression LEFT_ROUND_BRACE argument_expression_list RIGHT_ROUND_BRACE\n");
                                }
#line 2894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 849 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("postfix_expression-> postfix_expression PERIOD IDENTIFIER \n");}
#line 2900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 851 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("postfix_expression-> postfix_expression POINTS_TO IDENTIFIER\n");}
#line 2906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 853 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    (yyval.expr_val).location = current->gentemp(((yyvsp[-1].expr_val).type)->type);
	  	                    char *arg1 = strdup(((yyvsp[-1].expr_val).location)->name);
	  	                    char *res = strdup(((yyval.expr_val).location)->name);
	  	                    row_of_quad x(arg1,0,res,assign_op);
	  	                    add(x);
                                   
	  	                    arg1 = strdup(((yyvsp[-1].expr_val).location)->name);
	  	                    char *arg2 = convert2char_star("1");
	  	                    res = strdup(((yyvsp[-1].expr_val).location)->name);
	  	                    row_of_quad y(arg1,arg2,res,addition_op);
	  	                    add(y);
                                   
	  	                    (yyval.expr_val).type = (yyvsp[-1].expr_val).type;
                                    printf("postfix_expression-> postfix_expression PLUS_PLUS \n");
                                }
#line 2927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 870 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    (yyval.expr_val).location = current->gentemp(((yyvsp[-1].expr_val).type)->type);
	  	                    char *arg1 = strdup(((yyvsp[-1].expr_val).location)->name);
	  	                    char *res = strdup(((yyval.expr_val).location)->name);
	  	                    row_of_quad x(arg1,0,res,assign_op);
	  	                    add(x);
                                   
	  	                    arg1 = strdup(((yyvsp[-1].expr_val).location)->name);
	  	                    char *arg2 = convert2char_star("1");
	  	                    res = strdup(((yyvsp[-1].expr_val).location)->name);
	  	                    row_of_quad y(arg1,arg2,res,subtraction_op);
	  	                    add(y);
                                   
	  	                    (yyval.expr_val).type = (yyvsp[-1].expr_val).type;
                                    printf("postfix_expression-> postfix_expression MINUS_MINUS \n");
                                }
#line 2948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 887 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("postfix_expression-> LEFT_ROUND_BRACE type_name RIGHT_ROUND_BRACE LEFT_CURLY_BRACE initializer_list RIGHT_CURLY_BRACE \n");}
#line 2954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 889 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("postfix_expression-> LEFT_ROUND_BRACE type_name RIGHT_ROUND_BRACE LEFT_CURLY_BRACE initializer_list COMMA RIGHT_CURLY_BRACE\n");}
#line 2960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 893 "ass5_14CS10062.y" /* yacc.c:1646  */
    {   
                                   (yyvsp[0].atr_val).location = current->lookup((yyvsp[0].atr_val).name);
	  	                   if(!((yyvsp[0].atr_val).location))(yyvsp[0].atr_val).location = global->lookup((yyvsp[0].atr_val).name);
                                   cout<<(yyvsp[0].atr_val).name<<endl;
	  	                   (yyval.expr_val).location = (yyvsp[0].atr_val).location;  
                                   (yyval.expr_val).array = (yyval.expr_val).location;
	  	                   (yyval.expr_val).loc_temp = 0;
	  	                   (yyval.expr_val).type = ((yyvsp[0].atr_val).location)->type;
                                   cout<<(yyval.expr_val).type<<endl;
                                   printf("primary_expression-> IDENTIFIER \n");
                                }
#line 2976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 905 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    (yyval.expr_val) = (yyvsp[0].expr_val);
                                    printf("primary_expression-> constant \n");
                                }
#line 2985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 909 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("primary_expression-> STRING_LITERAL \n");}
#line 2991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 910 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.expr_val) = (yyvsp[-1].expr_val);printf("primary_expression-> LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE \n");}
#line 2997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 914 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                     
                                     int *bb = (int*)malloc(sizeof(int));
                                     *bb = (yyvsp[0].int_val);
                                     (yyval.expr_val).value.data = (void*)bb;
                                     (yyval.expr_val).location = current->gentemp(int_type);
	  	                     (yyval.expr_val).type = new_expression(int_type,-1);
	  	                     char *arg1 = convert2char_star((yyvsp[0].int_val));
	  	                     char *res = strdup(((yyval.expr_val).location)->name);
	  	                     row_of_quad x(arg1,0,res,assign_op);
	  	                     add(x);
                                     printf("constant-> INTEGER_CONSTANT \n");
                                }
#line 3015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 928 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                     double *dd = (double*)malloc(sizeof(double));
                                     *dd = (yyvsp[0].float_val);
                                     (yyval.expr_val).value.data = (void*)dd;
                                     (yyval.expr_val).location = current->gentemp(double_type);
	  	                     (yyval.expr_val).type = new_expression(double_type,-1);
	  	                     char *arg1 = convert2char_star((yyvsp[0].float_val));
	  	                     char *res = strdup(((yyval.expr_val).location)->name);
	  	                     row_of_quad x(arg1,0,res,assign_op);
	  	                     add(x);
                                     printf("constant->FLOATING_CONSTANT \n");
                                }
#line 3032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 941 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                     char *dd = (char*)malloc(sizeof(char));
                                     *dd = (yyvsp[0].char_val);
                                     (yyval.expr_val).value.data = (void*)dd;
                                     (yyval.expr_val).location = current->gentemp(char_type);
	  	                     (yyval.expr_val).type = new_expression(char_type,-1);
	  	                     char *arg1 = convert2char_star((yyvsp[0].char_val));
	  	                     char *res = strdup(((yyval.expr_val).location)->name);
	  	                     row_of_quad x(arg1,0,res,assign_op);
	  	                     add(x);
                                     printf("constant-> CHAR_CONSTANT \n");
                                }
#line 3049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 955 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("enumeration_constant->  IDENTIFIER \n");}
#line 3055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 958 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.instr) = next_instr;}
#line 3061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 960 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
		                  (yyval.N_val) = makelist(next_instr);
		                  row_of_quad x(0,0,0,goto_op);
		                  add(x);
	                        }
#line 3071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 972 "ass5_14CS10062.y" /* yacc.c:1646  */
    { printf("declaration -> declaration_specifiers SEMICOLON_TERMINATOR\n"); }
#line 3077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 975 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
	  	                   if(flag.p == 1 && flag.q == 0)
                                   {
	  		               type_expression *k = new_expression(((yyvsp[-2].atr_val).type)->type,-1);
	  		               row_of_symbol_table x(strdup("RETURN"),k,(yyvsp[-2].atr_val).width,-1,0,0);
	  		               temporary->add(x);
	  		               k = new_expression(function_type,-1);
	  		               row_of_symbol_table y((yyvsp[-1].atr_val).name,k,0,-1,0,temporary);
	  		               global->add(y);
	  	                   }
	  	                   flag.p = 0;
	  	                   flag.q = 0;
	  	                   flag.c = 0;
                                   printf("declaration -> declaration_specifiers init_declarator_list SEMICOLON_TERMINATOR\n");
	                       }
#line 3097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 994 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("declaration_specifiers -> storage_class_specifier\n");}
#line 3103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 996 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("declaration_specifiers -> storage_class_specifier declaration_specifiers \n");}
#line 3109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 998 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
	  	              if(flag.p == 0 || flag.q == 0)
                              {
	  		         (yyval.atr_val).type = (yyvsp[0].atr_val).type;
	  		         (yyval.atr_val).width = (yyvsp[0].atr_val).width;
	  		         global_type = (yyval.atr_val).type;
	  		         w = (yyval.atr_val).width;
	  	              }
                              printf(" declaration_specifiers -> type_specifier\n");
	                  }
#line 3124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1009 "ass5_14CS10062.y" /* yacc.c:1646  */
    { printf("declaration_specifiers -> type_specifier declaration_specifiers\n");}
#line 3130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1011 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("declaration_specifiers -> type_qualifier\n");}
#line 3136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1013 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("declaration_specifiers -> type_qualifier declaration_specifiers \n");}
#line 3142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1015 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("declaration_specifiers -> function_specifier\n");}
#line 3148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1017 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("declaration_specifiers -> function_specifier declaration_specifiers\n");}
#line 3154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1022 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    if(flag.p == 1 && flag.q == 0)(yyval.atr_val).name = (yyvsp[0].atr_val).name;
                                    printf("init_declarator_list ->init_declarator \n");
                                }
#line 3163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1027 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("init_declarator_list->init_declarator_list COMMA init_declarator  \n");}
#line 3169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1031 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    
	  	                    if(flag.p == 0)
                                    {
	  		               type_expression *temp = new_expression(global_type->type,-1);
	  		               temp = merge_expressions((yyvsp[0].atr_val).type,temp);
	  		               int temp_size;
	  		               if(temp->type == pointer_type)temp_size = SIZE_OF_POINTER;
	  		               else
                                       {
                                           if(global_type->type == int_type)temp_size = SIZE_OF_INT;
                                           else if(global_type->type == double_type)temp_size = SIZE_OF_DOUBLE;
                                           else if(global_type->type == char_type)temp_size = SIZE_OF_CHAR;      
		  		       }
	  		               temp_size = temp_size * (yyvsp[0].atr_val).width;
	  		               row_of_symbol_table x((yyvsp[0].atr_val).name,temp,temp_size,-1,0,0);
	  		               current->add(x);
	  	                    }
	  	                    else if(flag.p == 1 && flag.q == 0)
                                    {
	  		               (yyval.atr_val).name = (yyvsp[0].atr_val).name;
	  	                    }
                                    printf("init_declarator->declarator\n");
                                }
#line 3198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1056 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    if(flag.p == 0)
                                    {
	  		               type_expression *temp = new_expression(global_type->type,-1);
	  		               temp = merge_expressions((yyvsp[-2].atr_val).type,temp);
	  		               void *value;
	  		               int temp_size;
                                       if(global_type->type == int_type)
                                       {
                                          int *value1 = (int *)malloc(sizeof(int));
	  			          (*value1) = *((int*)(yyvsp[0].init_val).data); 	
	  			          value = (void *)value1;
	  				  temp_size = SIZE_OF_INT;
                                       }
                                       else if(global_type->type == double_type)
                                       {
                                          double *value1 = (double *)malloc(sizeof(double));
	  			          (*value1) = *((double*)(yyvsp[0].init_val).data); 	
	  			          value = (void *)value1;
	  				  temp_size = SIZE_OF_DOUBLE;
                                       }
                                       else if(global_type->type == char_type)
                                       {
                                          char *value1 = (char *)malloc(sizeof(char));
	  			          (*value1) = *((char*)(yyvsp[0].init_val).data); 	
	  			          value = (void *)value1;
	  				  temp_size = SIZE_OF_CHAR;
                                       }
                                       else value = 0;
                                       temp_size = temp_size * (yyvsp[-2].atr_val).width;
	  		               row_of_symbol_table x((yyvsp[-2].atr_val).name,temp,temp_size,-1,value,0);
	  		               current->add(x);
	  			
	  		            }
	  		            
                                    printf("init_declarator ->declarator EQUAL initializer \n");
                                }
#line 3240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1095 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("storage_class_specifier->EXTERN_KEYWORD \n");}
#line 3246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1096 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("storage_class_specifier->STATIC_KEYWORD\n");}
#line 3252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1097 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("storage_class_specifier->AUTO_KEYWORD \n");}
#line 3258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1098 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("storage_class_specifier->REGISTER_KEYWORD \n");}
#line 3264 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1101 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    if(flag.p == 0 || flag.q == 0)
                                    {
	  		               (yyval.atr_val).type = new_expression(void_type,-1);
	  	    	               (yyval.atr_val).width = 0;
	  	                    }
                                    printf("type_specifier ->VOID_KEYWORD  \n");
                                }
#line 3277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1110 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                     if(flag.p == 0 || flag.q == 0)
                                     {
	  		               (yyval.atr_val).type = new_expression(char_type,-1);
	  	    	               (yyval.atr_val).width = SIZE_OF_CHAR;
	  	                     }
                                     printf("type_specifier ->CHAR_KEYWORD \n");
                                }
#line 3290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1118 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("type_specifier ->SHORT_KEYWORD  \n");}
#line 3296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1120 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                     if(flag.p == 0 || flag.q == 0)
                                     {
	  		               //printf("entered\n");
                                       (yyval.atr_val).type = new_expression(int_type,-1);
	  	    	               (yyval.atr_val).width = SIZE_OF_INT;
	  	                     }
                                     printf("type_specifier ->INT_KEYWORD \n");
                                }
#line 3310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1129 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("type_specifier->LONG_KEYWORD\n");}
#line 3316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1130 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("type_specifier ->FLOAT_KEYWORD\n");}
#line 3322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1132 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                     if(flag.p == 0 || flag.q == 0)
                                     {
	  		               (yyval.atr_val).type = new_expression(double_type,-1);
	  	    	               (yyval.atr_val).width = SIZE_OF_DOUBLE;
	  	                     }
                                    printf("type_specifier ->DOUBLE_KEYWORD \n");
                                }
#line 3335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1140 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("type_specifier->SIGNED_KEYWORD \n");}
#line 3341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1141 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("type_specifier ->UNSIGNED_KEYWORD  \n");}
#line 3347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1142 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("type_specifier ->_BOOL_KEYWORD \n");}
#line 3353 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1143 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("type_specifier->_COMPLEX_KEYWORD  \n");}
#line 3359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1144 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("type_specifier ->_IMAGINARY_KEYWORD \n");}
#line 3365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1145 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("type_specifier ->enum_specifier\n");}
#line 3371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1149 "ass5_14CS10062.y" /* yacc.c:1646  */
    { printf("specifier_qualifier_list -> type_specifier specifier_qualifier_list\n");}
#line 3377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1151 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("specifier_qualifier_list -> type_specifier\n");}
#line 3383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1153 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("specifier_qualifier_list -> type_qualifier specifier_qualifier_list\n");}
#line 3389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1155 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("specifier_qualifier_list -> type_qualifier\n");}
#line 3395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1159 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("enum_specifier ->ENUM_KEYWORD identifier_opt LEFT_CURLY_BRACE enumerator_list RIGHT_CURLY_BRACE\n");}
#line 3401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1160 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("ENUM_KEYWORD identifier_opt LEFT_CURLY_BRACE enumerator_list COMMA RIGHT_CURLY_BRACE  \n");}
#line 3407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1161 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("enum_specifier->ENUM_KEYWORD IDENTIFIER  \n");}
#line 3413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1164 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("identifier_opt ->IDENTIFIER  \n");}
#line 3419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1165 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("identifier_opt ->epsilon transition  \n");}
#line 3425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1168 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("enumerator_list ->enumerator  \n");}
#line 3431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1169 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("enumerator_list ->enumerator_list COMMA enumerator\n");}
#line 3437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1172 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("enumerator->enumeration_constant  \n");}
#line 3443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1173 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("enumerator ->enumeration_constant EQUAL constant_expression \n");}
#line 3449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1176 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("type_qualifier ->CONST_KEYWORD  \n");}
#line 3455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1177 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("type_qualifier ->RESTRICT_KEYWORD  \n");}
#line 3461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1178 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("type_qualifier->VOLATILE_KEYWORD  \n");}
#line 3467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1181 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("function_specifier->INLINE_KEYWORD   \n");}
#line 3473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1185 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                     if(flag.p == 0 || flag.q == 0)
                                     {
	  		                 (yyval.atr_val).type = merge_expressions((yyvsp[0].atr_val).type,(yyvsp[-1].atr_val).type);
	  		                 (yyval.atr_val).width = (yyvsp[0].atr_val).width;
	  		                 (yyval.atr_val).name = (yyvsp[0].atr_val).name;
	  		             }
                                     printf("declarator ->pointer direct_declarator \n");
                                }
#line 3487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1195 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
	  		            (yyval.atr_val).type = (yyvsp[0].atr_val).type;
	  		            (yyval.atr_val).name = (yyvsp[0].atr_val).name;
	  		            (yyval.atr_val).width = (yyvsp[0].atr_val).width;
                                    printf("declarator -> direct_declarator\n");
	                        }
#line 3498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1205 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    
                                    if(flag.p == 0 || flag.q == 0)
                                    {
	  		               (yyval.atr_val).name = (yyvsp[0].atr_val).name;
		  	               (yyval.atr_val).type = 0;
		  	               (yyval.atr_val).width = 1;
		  	               if(flag.c == 0)
                                       {
                                           row_of_symbol_table *t = current->lookup((yyvsp[0].atr_val).name);  
			  	           if(t)
                                           {
			  		     
                                              flag.q = 1;
			  		      temporary = (t->nested_symbol_table);	
                                               
			  	           }												
			  	           else flag.q = 0; 
			  	           flag.c++;	
		  	               }
	  	                    }	
                                    printf("direct_declarator ->IDENTIFIER \n");
                                }
#line 3526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1229 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("direct_declarator ->LEFT_ROUND_BRACE declarator RIGHT_ROUND_BRACE \n");}
#line 3532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1232 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("direct_declarator -direct_declarator LEFT_SQUARE_BRACE type_qualifier_list assignment_expression RIGHT_SQUARE_BRACE   \n");}
#line 3538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1235 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
	  	                   if(flag.p == 0 || flag.q == 0)
                                   {
	  		              type_expression *temp = new_expression(array_type,*((int*)(yyvsp[-1].expr_val).value.data));
	  		              (yyval.atr_val).type = merge_expressions((yyvsp[-3].atr_val).type,temp);
	  		              (yyval.atr_val).width = (yyvsp[-3].atr_val).width * (*((int*)(yyvsp[-1].expr_val).value.data));
	  		              (yyval.atr_val).name = (yyvsp[-3].atr_val).name;
	  	                   }
                                   printf("direct_declarator -> direct_declarator LEFT_SQUARE_BRACE assignment_expression RIGHT_SQUARE_BRACE\n");
	                       }
#line 3553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1246 "ass5_14CS10062.y" /* yacc.c:1646  */
    { printf("direct_declarator -> direct_declarator LEFT_SQUARE_BRACE type_qualifier_list RIGHT_SQUARE_BRACE \n"); }
#line 3559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1249 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
	  	                   if(flag.p == 0 || flag.q == 0)
                                   {
	  		              (yyval.atr_val).name = (yyvsp[-2].atr_val).name;
		  	              (yyval.atr_val).type = (yyvsp[-2].atr_val).type;
		  	              (yyval.atr_val).width = (yyvsp[-2].atr_val).width;
	  	                   }
                                   printf("direct_declarator -> direct_declarator LEFT_SQUARE_BRACE RIGHT_SQUARE_BRACE\n");
	                        }
#line 3573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1260 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("direct_declarator -> direct_declarator LEFT_SQUARE_BRACE STATIC_KEYWORD type_qualifier_list assignment_expression RIGHT_SQUARE_BRACE\n"); }
#line 3579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1263 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("direct_declarator -> direct_declarator LEFT_SQUARE_BRACE STATIC_KEYWORD assignment_expression RIGHT_SQUARE_BRACE\n");}
#line 3585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1266 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("direct_declarator -> direct_declarator LEFT_SQUARE_BRACE type_qualifier_list STATIC_KEYWORD assignment_expression RIGHT_SQUARE_BRACE\n");}
#line 3591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1269 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("direct_declarator -> direct_declarator LEFT_SQUARE_BRACE type_qualifier_list MULTIPLICATION RIGHT_SQUARE_BRACE\n");}
#line 3597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1272 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("direct_declarator -> direct_declarator LEFT_SQUARE_BRACE MULTIPLICATION RIGHT_SQUARE_BRACE\n");}
#line 3603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1275 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
	  	                    flag.p = 1;							
	  	                    (yyval.atr_val).name = (yyvsp[-3].atr_val).name;
	  	                    (yyval.atr_val).type = 0;
	  	                    (yyval.atr_val).width = 1;
                                    printf("direct_declarator ->direct_declarator LEFT_ROUND_BRACE parameter_type_list RIGHT_ROUND_BRACE\n");
	                       }
#line 3615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1284 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("direct_declarator -> direct_declarator LEFT_ROUND_BRACE identifier_list RIGHT_ROUND_BRACE\n");}
#line 3621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1287 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
	  	                    flag.p = 1;
	  	                    if(flag.q == 0)temporary = create_new_table();
	  	                    (yyval.atr_val).name = (yyvsp[-2].atr_val).name;
	  	                    (yyval.atr_val).type = 0;
	  	                    (yyval.atr_val).width = 1;
                                    printf("direct_declarator -> direct_declarator LEFT_ROUND_BRACE RIGHT_ROUND_BRACE\n ");
	                       }
#line 3634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1299 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
	  	                      (yyval.atr_val).type = new_expression(pointer_type,-1);
                                      printf("pointer -> MULTIPLICATION");
	                          }
#line 3643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1304 "ass5_14CS10062.y" /* yacc.c:1646  */
    { printf("pointer -> MULTIPLICATION type_qualifier_list");}
#line 3649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1306 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
	  	                     type_expression *temp = new_expression(pointer_type,-1);
	  	                     (yyval.atr_val).type = merge_expressions((yyvsp[0].atr_val).type,temp);
                                     printf("pointer -> MULTIPLICATION pointer");
	                         }
#line 3659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1312 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("pointer -> MULTIPLICATION type_qualifier_list pointer");}
#line 3665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1315 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("type_qualifier_list ->type_qualifier  \n");}
#line 3671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1316 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("type_qualifier_list ->type_qualifier \n");}
#line 3677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1319 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("parameter_type_list ->parameter_list \n");}
#line 3683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1320 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("parameter_type_list->parameter_list COMMA ELIPSES \n");}
#line 3689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1324 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    if(flag.q == 0)
                                    {
	  		                 temporary = create_new_table();
	  		                 row_of_symbol_table x((yyvsp[0].atr_val).name,(yyvsp[0].atr_val).type,(yyvsp[0].atr_val).width,-1,0,0); 
	  		                 temporary->add(x);
	  	                    }
                                    printf("parameter_list ->parameter_declaration \n");
                                }
#line 3703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1334 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                    if(flag.q == 0)
                                    {
	  		                 row_of_symbol_table x((yyvsp[0].atr_val).name,(yyvsp[0].atr_val).type,(yyvsp[0].atr_val).width,-1,0,0); 
	  		                 temporary->add(x);
	  	                    }
                                    printf("parameter_list ->parameter_list COMMA parameter_declaration \n");
                                }
#line 3716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1345 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
                                   if(flag.q == 0)
                                   {
	  		               (yyval.atr_val).type = merge_expressions((yyvsp[0].atr_val).type,(yyvsp[-1].atr_val).type);
	  		               (yyval.atr_val).name = (yyvsp[0].atr_val).name;
	  		               (yyval.atr_val).width = (yyvsp[-1].atr_val).width*(yyvsp[0].atr_val).width;
	  	                   }
                                   printf("parameter_declaration ->declaration_specifiers declarator \n");
                                }
#line 3730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1354 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("parameter_declaration ->declaration_specifiers  \n");}
#line 3736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1357 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("identifier_list  ->IDENTIFIER   \n");}
#line 3742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1359 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("identifier_list  ->identifier_list COMMA IDENTIFIER  \n");}
#line 3748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1362 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("type_name ->specifier_qualifier_list  \n");}
#line 3754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1365 "ass5_14CS10062.y" /* yacc.c:1646  */
    {(yyval.init_val) = (yyvsp[0].expr_val).value;printf("initializer->assignment_expression \n");}
#line 3760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1366 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("initializer ->LEFT_CURLY_BRACE initializer_list RIGHT_CURLY_BRACE\n");}
#line 3766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1367 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("initializer ->LEFT_CURLY_BRACE initializer_list COMMA RIGHT_CURLY_BRACE  \n");}
#line 3772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1370 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("initializer_list ->designation_opt initializer  \n");}
#line 3778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1371 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("initializer_list ->initializer_list COMMA designation_opt initializer   \n");}
#line 3784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1374 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("designation_opt->designation  \n");}
#line 3790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1375 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("designation_opt ->epsilon transition\n");}
#line 3796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1378 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("designation->designator_list EQUAL  \n");}
#line 3802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1381 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("designator_list ->designator \n");}
#line 3808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1382 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("designator_list ->designator_list designator\n");}
#line 3814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1385 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("designator ->LEFT_SQUARE_BRACE constant_expression RIGHT_SQUARE_BRACE   \n");}
#line 3820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1386 "ass5_14CS10062.y" /* yacc.c:1646  */
    {printf("designator ->PERIOD IDENTIFIER  \n");}
#line 3826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1389 "ass5_14CS10062.y" /* yacc.c:1646  */
    {
				    //printf("############### HERE WE ARE USING EPSILON TRANSITIONS USING F \n");
		
                                    current = temporary; 
		                    int i;
		                    char *t;
				    //printf("#####################INTERMEDIATE PRINTING ##################\n");
				    //print_all_tables(current);
				    //printf("#####################INTERMEDIATE PRINTING ENDS #############\n");				   
		                    for(i=0;i<=global->last_index;i++)
                                    {
			                 if((((global->table)[i]).nested_symbol_table) == current)
                                         {
				              t = strdup(((global->table)[i]).name);
				              break;
			                 }
		                    }
				    //printf(" The value of  t here is : %s", t);
		                    row_of_quad x(t,0,0,function_op);
		                    add(x);
		                    flag.p = 0;
		                    flag.q = 0;
		                    flag.c = 0;
	                       }
#line 3855 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3859 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1416 "ass5_14CS10062.y" /* yacc.c:1906  */



void yyerror(const char* s) {
	printf("%s", s);
}








