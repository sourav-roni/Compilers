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
#line 1 "ass4_14CS10062.y" /* yacc.c:339  */

#include <stdio.h>
extern int yylex();
void yyerror(const char* s);

#line 72 "y.tab.c" /* yacc.c:339  */

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
#line 7 "ass4_14CS10062.y" /* yacc.c:355  */

  int ival;
  float fval;
  char *cval;

#line 306 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 323 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   821

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  210
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  340

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   349

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
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   110,   110,   111,   112,   113,   116,   117,   118,   119,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   133,
     134,   137,   138,   141,   142,   143,   144,   145,   146,   149,
     150,   151,   152,   153,   154,   157,   158,   161,   162,   163,
     164,   167,   168,   169,   172,   173,   174,   177,   178,   179,
     180,   181,   184,   185,   186,   189,   190,   193,   194,   197,
     198,   201,   202,   205,   206,   209,   210,   213,   214,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     230,   231,   235,   240,   243,   244,   247,   248,   249,   250,
     253,   254,   257,   258,   261,   262,   265,   266,   267,   268,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   286,   287,   290,   291,   294,   295,   296,
     299,   300,   303,   304,   307,   308,   311,   312,   313,   316,
     319,   322,   323,   326,   327,   328,   329,   330,   331,   332,
     333,   336,   337,   340,   341,   344,   345,   348,   349,   352,
     353,   356,   357,   360,   361,   364,   365,   368,   369,   372,
     375,   376,   377,   380,   381,   384,   385,   388,   391,   392,
     395,   396,   401,   402,   403,   404,   405,   406,   409,   410,
     411,   415,   418,   419,   422,   423,   426,   427,   430,   433,
     434,   437,   438,   439,   442,   443,   444,   445,   448,   449,
     450,   451,   456,   457,   460,   461,   464,   467,   468,   471,
     472
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SINGLE_LINE_COMMENT",
  "MULTI_LINE_COMMENT", "AUTO_KEYWORD", "BREAK_KEYWORD", "CASE_KEYWORD",
  "CHAR_KEYWORD", "CONST_KEYWORD", "CONTINUE_KEYWORD", "DEFAULT_KEYWORD",
  "DO_KEYWORD", "DOUBLE_KEYWORD", "ELSE_KEYWORD", "ENUM_KEYWORD",
  "EXTERN_KEYWORD", "FLOAT_KEYWORD", "FOR_KEYWORD", "GOTO_KEYWORD",
  "IF_KEYWORD", "INLINE_KEYWORD", "INT_KEYWORD", "LONG_KEYWORD",
  "REGISTER_KEYWORD", "RESTRICT_KEYWORD", "RETURN_KEYWORD",
  "SHORT_KEYWORD", "SIGNED_KEYWORD", "SIZEOF_KEYWORD", "STATIC_KEYWORD",
  "STRUCT_KEYWORD", "SWITCH_KEYWORD", "TYPEDEF_KEYWORD", "UNION_KEYWORD",
  "UNSIGNED_KEYWORD", "VOID_KEYWORD", "VOLATILE_KEYWORD", "WHILE_KEYWORD",
  "_BOOL_KEYWORD", "_COMPLEX_KEYWORD", "_IMAGINARY_KEYWORD", "IDENTIFIER",
  "INTEGER_CONSTANT", "FLOATING_CONSTANT", "ENUMERATION_CONSTANT",
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
  "HASH", "$accept", "primary_expression", "constant",
  "postfix_expression", "argument_expression_list_opt",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "AND_expression", "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "init_declarator_list_opt", "declaration_specifiers",
  "declaration_specifiers_opt", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "enum_specifier", "identifier_opt",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "pointer_opt", "direct_declarator",
  "type_qualifier_list_opt", "assignment_expression_opt",
  "identifier_list_opt", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "designation_opt", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list_opt", "block_item_list", "block_item",
  "expression_statement", "expression_opt", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list_opt",
  "declaration_list", YY_NULLPTR
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
     345,   346,   347,   348,   349
};
# endif

#define YYPACT_NINF -216

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-216)))

#define YYTABLE_NINF -209

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     623,  -216,  -216,  -216,  -216,   -30,  -216,  -216,  -216,  -216,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,
    -216,  -216,  -216,   -11,   623,   623,  -216,   623,   623,   548,
    -216,  -216,    -3,    15,    26,   -64,   -33,  -216,   225,    16,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,    46,  -216,
      12,    26,  -216,    12,   625,  -216,   -11,    81,   623,  -216,
      12,    42,    80,   -10,  -216,  -216,  -216,  -216,    82,   149,
    -216,  -216,  -216,  -216,  -216,  -216,   484,    90,   669,   669,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,    57,   729,
     691,  -216,    78,   122,   123,   100,   125,   108,    74,    83,
      96,   136,  -216,  -216,  -216,   310,  -216,  -216,   137,     8,
     585,   691,  -216,    35,   484,  -216,  -216,   -31,   769,  -216,
     769,   153,   691,   132,    -7,   625,  -216,    54,  -216,   484,
    -216,  -216,   691,   691,   134,   158,  -216,  -216,  -216,  -216,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,   691,
    -216,  -216,   691,   691,   691,   691,   691,   691,   691,   691,
     691,   691,   691,   691,   691,   691,   691,   691,   691,   691,
     691,   141,   691,   143,   150,   428,   182,   194,   189,   691,
     195,   204,   179,   166,  -216,  -216,  -216,  -216,   210,   310,
    -216,  -216,   187,  -216,  -216,  -216,  -216,    26,   713,   130,
    -216,   -41,   218,   219,   180,  -216,   181,  -216,  -216,  -216,
    -216,   230,  -216,   691,  -216,  -216,  -216,   647,   233,  -216,
    -216,    97,  -216,  -216,  -216,   232,   -38,   238,   199,  -216,
    -216,  -216,  -216,  -216,  -216,  -216,    78,    78,   122,   122,
     123,   123,   123,   123,   100,   100,   125,   108,    74,    83,
      96,   -43,  -216,   215,  -216,   428,   257,   370,   216,   691,
     217,   691,   691,   428,  -216,  -216,  -216,   691,   252,  -216,
     256,   691,  -216,  -216,  -216,   263,   264,   258,  -216,    90,
    -216,  -216,  -216,   625,   258,  -216,  -216,   691,   691,   428,
    -216,   259,   691,   228,  -216,   -29,  -216,   -25,   -21,  -216,
     262,  -216,  -216,   265,  -216,  -216,  -216,    -6,  -216,  -216,
    -216,  -216,   691,   244,   691,   428,   428,   428,  -216,  -216,
    -216,    99,   -14,   691,   261,   298,  -216,  -216,  -216,   278,
     292,   691,   428,  -216,   428,   308,  -216,  -216,   428,  -216
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    98,   101,   126,   106,   121,    96,   105,   129,   103,
     104,    99,   127,   102,   107,    97,   108,   100,   128,   109,
     110,   111,   205,   132,    91,    91,   112,    91,    91,     0,
     202,   204,   119,     0,   142,     0,    84,    92,    94,     0,
     131,    90,    86,    87,    88,    89,     1,   203,     0,   149,
     147,   141,    83,   132,     0,   209,   132,     0,   207,   133,
     132,   130,   124,     0,   122,   148,   150,    93,    94,     0,
       2,     6,     7,     9,     8,     4,     0,   166,     0,     0,
      29,    30,    31,    32,    33,    34,    10,     3,    23,    35,
       0,    37,    41,    44,    47,    52,    55,    57,    59,    61,
      63,    65,    67,   160,    95,   183,   206,   210,     0,   142,
     146,     0,   117,     0,     0,    27,    80,     0,   116,   159,
     116,     0,     0,     0,     0,     0,   165,     0,   168,     0,
      24,    25,     0,    20,     0,     0,    15,    16,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     0,
      35,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   190,     0,     0,     0,   190,
       0,     0,     2,   189,   186,   187,   172,   173,     0,   182,
     184,   174,     0,   175,   176,   177,   134,   142,   144,   141,
     157,   132,     0,     0,   151,   153,   145,    82,   125,   118,
     123,     0,     5,     0,   115,   113,   114,     0,     0,   171,
     161,   166,   163,   167,   169,     0,     0,     0,    19,    21,
      13,    14,    68,    38,    39,    40,    42,    43,    45,    46,
      48,    49,    50,    51,    53,    54,    56,    58,    60,    62,
      64,     0,   200,     0,   199,   190,     0,   190,     0,     0,
       0,     0,     0,   190,   181,   185,   188,     0,    30,   143,
       0,     0,   155,   140,   139,     0,     0,    28,    81,   166,
      36,   170,   162,     0,     0,    11,    12,     0,     0,   190,
     180,     0,   190,     0,   198,     0,   201,     0,     0,   178,
       0,   138,   135,     0,   152,   154,   158,     0,   164,    22,
      66,   179,     0,     0,   190,   190,   190,   190,   136,   137,
      17,   166,     0,   190,     0,   192,   193,   194,    18,     0,
       0,   190,   190,   195,   190,     0,   191,   197,   190,   196
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -216,  -216,  -216,  -216,  -216,  -216,   -37,  -216,   -77,    61,
      86,    66,    93,   148,   197,   198,   193,   205,  -216,  -107,
     -52,  -216,   -75,  -113,   -35,  -216,     0,    76,  -216,   311,
    -216,   -36,    39,   260,  -216,  -216,  -216,   268,   -20,  -216,
     -16,  -216,  -216,  -101,  -216,  -216,   326,   273,  -216,  -216,
     102,  -216,   -95,  -120,   105,  -215,  -216,  -216,   269,  -114,
    -216,   331,  -216,  -216,   200,  -216,  -158,  -216,  -216,  -216,
    -216,   372,  -216,  -216,  -216
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    86,    87,    88,   227,   228,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     116,   149,   183,   208,    22,    35,    56,    42,    36,    37,
      24,    25,   119,   215,    26,    33,    63,    64,    27,    28,
      68,    39,    61,    50,   270,   202,    40,    51,   203,   204,
     205,   206,   121,   104,   124,   125,   126,   127,   128,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
      29,    30,    31,    57,    58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   117,   103,    55,   207,   222,   283,    38,   198,   218,
    -156,   285,    32,   151,    49,   207,    52,     3,    34,   211,
     212,   260,   315,   107,    41,    41,   316,    41,    41,    23,
     317,    66,   115,    12,   225,     3,   288,   329,   197,   117,
     118,   130,   131,   112,   108,    18,   220,   320,    34,  -120,
     213,    12,  -156,   150,   117,   213,   120,   226,    59,   253,
      53,   256,   213,    18,   213,   207,    60,    48,   213,   -85,
     184,    34,   213,   103,   150,   233,   234,   235,   118,   213,
      62,   229,   118,   113,   118,   150,   221,   321,   209,    49,
     109,    62,   110,   118,   120,   251,   267,   232,   120,   293,
     120,    43,   122,    44,    45,   132,   283,   133,   123,   120,
     201,   134,   135,   136,   137,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   105,   313,   150,   223,   152,   122,     3,
     280,   290,   153,   154,   123,   122,   269,   122,   166,   299,
     282,   123,   328,   123,   184,    12,   324,   214,   167,   214,
     271,   278,   111,   308,    54,   330,   165,    18,   159,   160,
     161,   162,   168,   335,   219,   311,   230,    49,    69,    66,
     150,   310,   155,   156,   295,   272,   297,   298,   196,   157,
     158,    70,    71,    72,    73,    74,    75,   163,   164,   114,
     231,   325,   326,   327,   217,    78,    79,    80,    81,    82,
      83,    84,    85,   169,   170,   300,   236,   237,   336,   303,
     337,   252,   292,   254,   339,   240,   241,   242,   243,   255,
       1,   103,   257,     2,     3,   309,   258,   322,     4,   259,
       5,     6,     7,   238,   239,   261,     8,     9,    10,    11,
      12,   150,    13,    14,   262,    15,   244,   245,   263,   213,
      16,    17,    18,   264,    19,    20,    21,   266,     1,   273,
     274,     2,     3,   275,   276,   201,     4,  -208,     5,     6,
       7,   277,   281,   284,     8,     9,    10,    11,    12,   286,
      13,    14,   287,    15,   289,   291,   294,   296,    16,    17,
      18,   301,    19,    20,    21,   302,   306,    54,   314,   312,
     279,   318,   332,   246,   319,     1,   171,   172,     2,     3,
     173,   174,   175,     4,   323,     5,     6,     7,   176,   177,
     178,     8,     9,    10,    11,    12,   179,    13,    14,    69,
      15,   331,   180,   334,   304,    16,    17,    18,   181,    19,
      20,    21,   182,    71,    72,    73,    74,    75,   333,   338,
      76,   249,   105,   247,    67,   248,    78,    79,    80,    81,
      82,    83,    84,    85,   250,     1,    65,   305,     2,     3,
     216,   210,   199,     4,   307,     5,     6,     7,   106,   265,
    -190,     8,     9,    10,    11,    12,   224,    13,    14,    69,
      15,    47,     0,     0,     0,    16,    17,    18,     0,    19,
      20,    21,    70,    71,    72,    73,    74,    75,     0,     0,
      76,     0,     0,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    84,    85,   171,   172,     0,     0,   173,   174,
     175,     0,     0,     0,     0,     0,   176,   177,   178,     0,
       0,     0,     0,     0,   179,     0,     0,    69,     0,     0,
     180,     0,     0,     0,     0,     0,   181,     0,     0,     0,
     182,    71,    72,    73,    74,    75,     0,     0,    76,     0,
     105,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      84,    85,     2,     3,     0,     0,     0,     4,     0,     5,
       0,     7,     0,     0,     0,     0,     9,    10,     0,    12,
       0,    13,    14,    69,     0,     0,     0,     0,     0,    16,
      17,    18,     0,    19,    20,    21,    70,    71,    72,    73,
      74,    75,     0,     0,    76,     0,     0,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    84,    85,    46,     0,
       0,     0,     0,     1,     0,     0,     2,     3,     0,     0,
       0,     4,     0,     5,     6,     7,     0,     0,     0,     8,
       9,    10,    11,    12,     0,    13,    14,     0,    15,     0,
       0,     0,     0,    16,    17,    18,     0,    19,    20,    21,
       1,     0,     0,     2,     3,     0,     0,     0,     4,     0,
       5,     6,     7,     0,     0,     0,     8,     9,    10,    11,
      12,     0,    13,    14,     0,    15,     0,     0,     0,     0,
      16,    17,    18,     0,    19,    20,    21,   200,     1,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     5,     6,
       7,     0,     0,     0,     8,     9,    10,    11,    12,     0,
      13,    14,     0,    15,    69,     0,     0,     0,    16,    17,
      18,     0,    19,    20,    21,     0,     0,    70,    71,    72,
      73,    74,    75,     0,     0,    76,    69,    77,     0,     0,
       0,    78,    79,    80,    81,    82,    83,    84,    85,    70,
      71,    72,    73,    74,    75,     0,     0,    76,    69,   279,
       0,     0,     0,    78,    79,    80,    81,    82,    83,    84,
      85,    70,    71,    72,    73,    74,    75,     0,     0,   129,
      69,     0,     0,     0,     0,    78,    79,    80,    81,    82,
      83,    84,    85,    70,    71,    72,    73,    74,    75,     0,
       0,    76,    69,     0,     0,     0,     0,    78,    79,    80,
      81,    82,    83,    84,    85,    70,    71,    72,    73,    74,
      75,     0,     0,    76,     0,     0,     0,     0,     0,    78,
      79,    80,   268,    82,    83,    84,    85,     2,     3,     0,
       0,     0,     4,     0,     5,     0,     7,     0,     0,     0,
       0,     9,    10,     0,    12,     0,    13,    14,     0,     0,
       0,     0,     0,     0,    16,    17,    18,     0,    19,    20,
      21,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148
};

static const yytype_int16 yycheck[] =
{
       0,    76,    54,    38,   111,   125,   221,    23,   109,   122,
      51,    49,    42,    90,    34,   122,    80,     9,    59,   114,
      51,   179,    51,    58,    24,    25,    51,    27,    28,    29,
      51,    51,    69,    25,   129,     9,    79,    51,    30,   114,
      76,    78,    79,    53,    60,    37,    53,    53,    59,    52,
      93,    25,    93,    90,   129,    93,    76,   132,    42,   172,
      93,   175,    93,    37,    93,   172,    50,    52,    93,    80,
     105,    59,    93,   125,   111,   152,   153,   154,   114,    93,
      45,   133,   118,    93,   120,   122,    93,    93,    53,   109,
      48,    45,    50,   129,   114,   170,   197,   149,   118,   257,
     120,    25,    48,    27,    28,    48,   321,    50,    54,   129,
     110,    54,    55,    56,    57,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,    52,   292,   172,    82,    59,    48,     9,
     217,   255,    64,    65,    54,    48,   198,    48,    74,   263,
      53,    54,    53,    54,   189,    25,   314,   118,    75,   120,
      30,   213,    82,   283,    82,   323,    58,    37,    68,    69,
      70,    71,    76,   331,    42,   289,    42,   197,    29,   199,
     217,   288,    60,    61,   259,   201,   261,   262,    51,    66,
      67,    42,    43,    44,    45,    46,    47,    72,    73,    50,
      42,   315,   316,   317,    51,    56,    57,    58,    59,    60,
      61,    62,    63,    77,    78,   267,   155,   156,   332,   271,
     334,    80,   257,    80,   338,   159,   160,   161,   162,    79,
       5,   283,    50,     8,     9,   287,    42,   312,    13,    50,
      15,    16,    17,   157,   158,    50,    21,    22,    23,    24,
      25,   288,    27,    28,    50,    30,   163,   164,    79,    93,
      35,    36,    37,    53,    39,    40,    41,    80,     5,    51,
      51,     8,     9,    93,    93,   275,    13,    52,    15,    16,
      17,    51,    49,    51,    21,    22,    23,    24,    25,    51,
      27,    28,    93,    30,    79,    38,    80,    80,    35,    36,
      37,    49,    39,    40,    41,    49,    42,    82,    80,    50,
      52,    49,    14,   165,    49,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    80,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    80,    32,    51,    81,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    80,    51,
      50,   168,    52,   166,    53,   167,    56,    57,    58,    59,
      60,    61,    62,    63,   169,     5,    50,   275,     8,     9,
     120,   113,   109,    13,   279,    15,    16,    17,    57,   189,
      80,    21,    22,    23,    24,    25,   127,    27,    28,    29,
      30,    29,    -1,    -1,    -1,    35,    36,    37,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,     6,     7,    -1,    -1,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    29,    -1,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      42,    43,    44,    45,    46,    47,    -1,    -1,    50,    -1,
      52,    -1,    -1,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,     8,     9,    -1,    -1,    -1,    13,    -1,    15,
      -1,    17,    -1,    -1,    -1,    -1,    22,    23,    -1,    25,
      -1,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    -1,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,     0,    -1,
      -1,    -1,    -1,     5,    -1,    -1,     8,     9,    -1,    -1,
      -1,    13,    -1,    15,    16,    17,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    -1,    27,    28,    -1,    30,    -1,
      -1,    -1,    -1,    35,    36,    37,    -1,    39,    40,    41,
       5,    -1,    -1,     8,     9,    -1,    -1,    -1,    13,    -1,
      15,    16,    17,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    -1,    27,    28,    -1,    30,    -1,    -1,    -1,    -1,
      35,    36,    37,    -1,    39,    40,    41,    42,     5,    -1,
      -1,     8,     9,    -1,    -1,    -1,    13,    -1,    15,    16,
      17,    -1,    -1,    -1,    21,    22,    23,    24,    25,    -1,
      27,    28,    -1,    30,    29,    -1,    -1,    -1,    35,    36,
      37,    -1,    39,    40,    41,    -1,    -1,    42,    43,    44,
      45,    46,    47,    -1,    -1,    50,    29,    52,    -1,    -1,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    42,
      43,    44,    45,    46,    47,    -1,    -1,    50,    29,    52,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    42,    43,    44,    45,    46,    47,    -1,    -1,    50,
      29,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    42,    43,    44,    45,    46,    47,    -1,
      -1,    50,    29,    -1,    -1,    -1,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    42,    43,    44,    45,    46,
      47,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,     8,     9,    -1,
      -1,    -1,    13,    -1,    15,    -1,    17,    -1,    -1,    -1,
      -1,    22,    23,    -1,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    -1,    39,    40,
      41,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     8,     9,    13,    15,    16,    17,    21,    22,
      23,    24,    25,    27,    28,    30,    35,    36,    37,    39,
      40,    41,   119,   121,   125,   126,   129,   133,   134,   165,
     166,   167,    42,   130,    59,   120,   123,   124,   135,   136,
     141,   121,   122,   122,   122,   122,     0,   166,    52,   133,
     138,   142,    80,    93,    82,   119,   121,   168,   169,    42,
      50,   137,    45,   131,   132,   141,   133,   124,   135,    29,
      42,    43,    44,    45,    46,    47,    50,    52,    56,    57,
      58,    59,    60,    61,    62,    63,    96,    97,    98,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   148,    52,   156,   119,   135,    48,
      50,    82,    53,    93,    50,   101,   115,   117,   126,   127,
     133,   147,    48,    54,   149,   150,   151,   152,   153,    50,
     101,   101,    48,    50,    54,    55,    56,    57,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,   116,
     101,   103,    59,    64,    65,    60,    61,    66,    67,    68,
      69,    70,    71,    72,    73,    58,    74,    75,    76,    77,
      78,     6,     7,    10,    11,    12,    18,    19,    20,    26,
      32,    38,    42,   117,   119,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,    51,    30,   138,   142,
      42,   121,   140,   143,   144,   145,   146,   114,   118,    53,
     132,   147,    51,    93,   127,   128,   128,    51,   118,    42,
      53,    93,   148,    82,   153,   147,   117,    99,   100,   115,
      42,    42,   115,   103,   103,   103,   104,   104,   105,   105,
     106,   106,   106,   106,   107,   107,   108,   109,   110,   111,
     112,   117,    80,   118,    80,    79,   154,    50,    42,    50,
     161,    50,    50,    79,    53,   159,    80,   138,    59,   115,
     139,    30,   135,    51,    51,    93,    93,    51,   115,    52,
     103,    49,    53,   150,    51,    49,    51,    93,    79,    79,
     154,    38,   119,   161,    80,   117,    80,   117,   117,   154,
     115,    49,    49,   115,    81,   145,    42,   149,   148,   115,
     114,   154,    50,   161,    80,    51,    51,    51,    49,    49,
      53,    93,   117,    80,   161,   154,   154,   154,    53,    51,
     161,    80,    14,    80,    51,   161,   154,   154,    51,   154
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    96,    96,    96,    97,    97,    97,    97,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    99,
      99,   100,   100,   101,   101,   101,   101,   101,   101,   102,
     102,   102,   102,   102,   102,   103,   103,   104,   104,   104,
     104,   105,   105,   105,   106,   106,   106,   107,   107,   107,
     107,   107,   108,   108,   108,   109,   109,   110,   110,   111,
     111,   112,   112,   113,   113,   114,   114,   115,   115,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     117,   117,   118,   119,   120,   120,   121,   121,   121,   121,
     122,   122,   123,   123,   124,   124,   125,   125,   125,   125,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   127,   127,   128,   128,   129,   129,   129,
     130,   130,   131,   131,   132,   132,   133,   133,   133,   134,
     135,   136,   136,   137,   137,   137,   137,   137,   137,   137,
     137,   138,   138,   139,   139,   140,   140,   141,   141,   142,
     142,   143,   143,   144,   144,   145,   145,   146,   146,   147,
     148,   148,   148,   149,   149,   150,   150,   151,   152,   152,
     153,   153,   154,   154,   154,   154,   154,   154,   155,   155,
     155,   156,   157,   157,   158,   158,   159,   159,   160,   161,
     161,   162,   162,   162,   163,   163,   163,   163,   164,   164,
     164,   164,   165,   165,   166,   166,   167,   168,   168,   169,
     169
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     4,     4,     3,     3,     2,     2,     6,     7,     1,
       0,     1,     3,     1,     2,     2,     2,     2,     4,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     5,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     1,     0,     2,     2,     2,     2,
       1,     0,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     0,     5,     6,     2,
       1,     0,     1,     3,     1,     3,     1,     1,     1,     1,
       2,     1,     0,     1,     3,     5,     6,     6,     5,     4,
       4,     1,     0,     1,     0,     1,     0,     2,     3,     1,
       2,     1,     3,     1,     3,     2,     1,     1,     3,     1,
       1,     3,     4,     2,     4,     1,     0,     2,     1,     2,
       3,     2,     1,     1,     1,     1,     1,     1,     3,     4,
       3,     3,     1,     0,     1,     2,     1,     1,     2,     1,
       0,     7,     5,     5,     5,     7,     9,     8,     3,     2,
       2,     3,     1,     2,     1,     1,     4,     1,     0,     1,
       2
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
#line 110 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("primary_expression-> IDENTIFIER\n");}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 111 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("primary_expression-> constant\n");}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 112 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("primary_expression-> STRING_LITERAL\n");}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 113 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("primary_expression-> LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE\n");}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 116 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("constant-> INTEGER_CONSTANT \n");}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 117 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("constant->FLOATING_CONSTANT \n");}
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 118 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("constant-> CHAR_CONSTANT \n");}
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 119 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("constant->ENUMERATION_CONSTANT\n");}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 122 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("postfix_expression-> primary_expression \n");}
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 123 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("postfix_expression-> postfix_expression '[' expression ']'\n");}
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 124 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("postfix_expression-> postfix_expression '(' argument_expression_list_opt ')'\n");}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 125 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("postfix_expression-> postfix_expression '.' IDENTIFIER_VARIABLE\n");}
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 126 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("postfix_expression-> postfix_expression STRUCTURE_DEREFERNCE_OP IDENTIFIER_VARIABLE\n");}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 127 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("postfix_expression-> postfix_expression INCREMENT_OP \n");}
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 128 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("postfix_expression-> postfix_expression DECREMENT_OP \n");}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 129 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("postfix_expression-> '(' type_name ')' '{' initializer_list '}'\n");}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 130 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("postfix_expression-> '(' type_name ')' '{' initializer_list ',' '}'\n");}
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 134 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("argument_expression_list_opt ->epsilon\n");}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 141 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("unary_expression-> additive_expression\n");}
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 142 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("unary_expression-> PLUS_PLUS unary_expression \n");}
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 143 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("unary_expression-> MINUS_MINUS unary_expression\n");}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 144 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("unary_expression-> unary_operator cast_expression \n");}
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 145 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("unary_expression-> SIZEOF_KEYWORD unary_expression\n");}
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 146 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("unary_expression-> SIZEOF_KEYWORD LEFT_ROUND_BRACE type_name RIGHT_ROUND_BRACE\n");}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 149 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("unary_operator-> AMPERSAND\n");}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 150 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("unary_operator->MULTIPLICATION\n");}
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 151 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("unary_operator-> PLUS\n");}
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 152 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("unary_operator-> MINUS\n");}
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 153 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("unary_operator-> TILDE\n");}
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 154 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("unary_operator-> EXCLIMATION\n");}
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 157 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("cast_expression-> unary_expressio\n");}
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 158 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("cast_expression->LEFT_ROUND_BRACE type_name RIGHT_ROUND_BRACE cast_expression\n");}
#line 1980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 161 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("multiplicative_expression-> cast_expression\n");}
#line 1986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 162 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("multiplicative_expression-> multiplicative_expression MULTIPLICATION cast_expression\n");}
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 163 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("multiplicative_expression-> multiplicative_expression FORWARD_SLASH cast_expression\n");}
#line 1998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 164 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("multiplicative_expression-> multiplicative_expression PERCENTAGE cast_expression\n");}
#line 2004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 167 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("additive_expression-> multiplicative_expression\n");}
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 168 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("additive_expression-> additive_expression PLUS multiplicative_expression \n");}
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 169 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("additive_expression-> additive_expression MINUS multiplicative_expression \n");}
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 172 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("shift_expression-> additive_expression\n");}
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 173 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("shift_expression-> shift_expression LEFT_SHIFT additive_expression  \n");}
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 174 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("shift_expression-> shift_expression RIGHT_SHIFT additive_expression \n");}
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 177 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("relational_expression-> shift_expression \n");}
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 178 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("relational_expression -> relational_expression LESS_THAN shift_expression  \n");}
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 179 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("relational_expression ->relational_expression GREATER_THAN shift_expression\n");}
#line 2058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 180 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("relational_expression ->relational_expression LESS_THAN_EQUAL shift_expression\n");}
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 181 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("relational_expression->relational_expression GREATER_THAN_EQUAL shift_expression\n");}
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 184 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("equality_expression->relational_expression\n");}
#line 2076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 185 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("equality_expression->equality_expression EQUAL_EQUAL relational_expression\n");}
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 186 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("equality_expression ->equality_expression NOT_EQUAL relational_expression\n");}
#line 2088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 189 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("AND_expression ->equality_expression\n");}
#line 2094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 190 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("AND_expression ->AND_expression AMPERSAND equality_expression\n");}
#line 2100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 193 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("exclusive_OR_expression ->AND_expression\n");}
#line 2106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 194 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("exclusive_OR_expression ->exclusive_OR_expression CARET AND_expression \n");}
#line 2112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 197 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("inclusive_OR_expression ->exclusive_OR_expression \n");}
#line 2118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 198 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("inclusive_OR_expression ->inclusive_OR_expression BITWISE_OR exclusive_OR_expression \n");}
#line 2124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 201 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("logical_AND_expression ->inclusive_OR_expression  \n");}
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 202 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("logical_AND_expression ->logical_AND_expression LOGICAL_AND inclusive_OR_expression \n");}
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 205 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("logical_OR_expression->logical_AND_expression \n");}
#line 2142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 206 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("logical_OR_expression ->logical_OR_expression LOGICAL_OR logical_AND_expression \n");}
#line 2148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 209 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("conditional_expression ->logical_OR_expression \n");}
#line 2154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 210 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("conditional_expression->logical_OR_expression QUESTION_MARK expression COLON conditional_expression\n");}
#line 2160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 213 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("assignment_expression ->conditional_expression \n");}
#line 2166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 214 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("assignment_expression->unary_expression assignment_operator assignment_expression \n");}
#line 2172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 217 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("assignment_operator -> EQUAL\n");}
#line 2178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 218 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("assignment_operator -> MULTIPLICATION_EQUAL\n");}
#line 2184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 219 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("assignment_operator -> SLASH_EQUAL\n");}
#line 2190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 220 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("assignment_operator -> PERCENTAGE_EQUAL\n");}
#line 2196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 221 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("assignment_operator-> PLUS_EQUAL \n");}
#line 2202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 222 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("assignment_operator -> MINUS_EQUAL \n");}
#line 2208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 223 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("assignment_operator -> LEFT_SHIFT_EQUAL\n");}
#line 2214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 224 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("assignment_operator -> RIGHT_SHIFT_EQUAL\n");}
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 225 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("assignment_operator-> BITWISE_AND_EQUAL \n");}
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 226 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("assignment_operator -> BITWISE_NOT_EQUAL  \n");}
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 227 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("assignment_operator -> BITWISE_OR_EQUAL\n");}
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 230 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("expression ->assignment_expression \n");}
#line 2244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 231 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("expression ->expression COMMA assignment_expression \n");}
#line 2250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 235 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("constant_expression ->conditional_expression \n");}
#line 2256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 240 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("declaration ->declaration_specifiers init_declarator_list_opt SEMICOLON_TERMINATOR  \n");}
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 243 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("init_declarator_list_opt->init_declarator_list  \n");}
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 244 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("init_declarator_list_opt ->epsilon\n");}
#line 2274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 247 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("declaration_specifiers ->storage_class_specifier declaration_specifiers_opt\n");}
#line 2280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 248 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("declaration_specifiers ->type_specifier declaration_specifiers_opt\n");}
#line 2286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 249 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("declaration_specifiers ->type_qualifier declaration_specifiers_opt\n");}
#line 2292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 250 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("declaration_specifiers->function_specifier declaration_specifiers_opt\n");}
#line 2298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 253 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("declaration_specifiers_opt ->declaration_specifiers\n");}
#line 2304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 254 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("init_declarator_list_opt ->epsilon\n");}
#line 2310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 257 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("init_declarator_list -> init_declarator\n");}
#line 2316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 258 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("init_declarator_list -> init_declarator_list COMMA init_declarator\n");}
#line 2322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 261 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("init_declarator->declarator\n");}
#line 2328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 262 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("init_declarator ->declarator EQUAL initializer \n");}
#line 2334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 265 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("storage_class_specifier-> EXTERN_KEYWORD \n");}
#line 2340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 266 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("storage_class_specifier-> STATIC_KEYWORD\n");}
#line 2346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 267 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("storage_class_specifier-> AUTO_KEYWORD \n");}
#line 2352 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 268 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("storage_class_specifier-> REGISTER_KEYWORD \n");}
#line 2358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 271 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("type_specifier ->VOID_KEYWORD  \n");}
#line 2364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 272 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("type_specifier ->CHAR_KEYWORD \n");}
#line 2370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 273 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("type_specifier ->SHORT_KEYWORD  \n");}
#line 2376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 274 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("type_specifier ->INT_KEYWORD \n");}
#line 2382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 275 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("type_specifier->LONG_KEYWORD\n");}
#line 2388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 276 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("type_specifier ->FLOAT_KEYWORD\n");}
#line 2394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 277 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("type_specifier ->DOUBLE_KEYWORD \n");}
#line 2400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 278 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("type_specifier->SIGNED_KEYWORD \n");}
#line 2406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 279 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("type_specifier ->UNSIGNED_KEYWORD  \n");}
#line 2412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 280 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("type_specifier ->_BOOL_KEYWORD \n");}
#line 2418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 281 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("type_specifier->_COMPLEX_KEYWORD  \n");}
#line 2424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 282 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("type_specifier ->_IMAGINARY_KEYWORD \n");}
#line 2430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 283 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("type_specifier ->enum_specifier\n");}
#line 2436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 286 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("specifier_qualifier_list ->type_specifier specifier_qualifier_list_opt \n");}
#line 2442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 287 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("specifier_qualifier_list->type_qualifier specifier_qualifier_list_opt  \n");}
#line 2448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 290 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("specifier_qualifier_list_opt ->specifier_qualifier_list  \n");}
#line 2454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 291 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("specifier_qualifier_list_opt ->epsilon\n");}
#line 2460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 294 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("enum_specifier ->ENUM_KEYWORD identifier_opt LEFT_CURLY_BRACE enumerator_list RIGHT_CURLY_BRACE  \n");}
#line 2466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 295 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("enum_specifier ->ENUM_KEYWORD identifier_opt LEFT_CURLY_BRACE enumerator_list COMMA RIGHT_CURLY_BRACE  \n");}
#line 2472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 296 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("enum_specifier->ENUM_KEYWORD IDENTIFIER  \n");}
#line 2478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 299 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("identifier_opt ->IDENTIFIER\n");}
#line 2484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 300 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("identifier_opt ->epsilon\n");}
#line 2490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 303 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("enumerator_list ->enumerator  \n");}
#line 2496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 304 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("enumerator_list ->enumerator_list COMMA enumerator\n");}
#line 2502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 307 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("enumerator->ENUMERATION_CONSTANT  \n");}
#line 2508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 308 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("enumerator ->ENUMERATION_CONSTANT EQUAL constant_expression \n");}
#line 2514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 311 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("type_qualifier ->CONST_KEYWORD  \n");}
#line 2520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 312 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("type_qualifier ->RESTRICT_KEYWORD  \n");}
#line 2526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 313 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("type_qualifier->VOLATILE_KEYWORD  \n");}
#line 2532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 316 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("function_specifier -> INLINE_KEYWORD   \n");}
#line 2538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 319 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("declarator -> pointer_opt direct_declarator \n");}
#line 2544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 322 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("pointer_opt -> pointer  \n");}
#line 2550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 323 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("pointer_opt ->epsilon\n");}
#line 2556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 326 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("direct_declarator ->IDENTIFIER \n");}
#line 2562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 327 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("direct_declarator ->LEFT_ROUND_BRACE declarator RIGHT_ROUND_BRACE  \n");}
#line 2568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 328 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("direct_declarator ->direct_declarator LEFT_SQUARE_BRACE type_qualifier_list_opt assignment_expression_opt RIGHT_SQUARE_BRACE\n");}
#line 2574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 329 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("direct_declarator ->direct_declarator LEFT_SQUARE_BRACE STATIC_KEYWORD type_qualifier_list_opt assignment_expression RIGHT_SQUARE_BRACE\n");}
#line 2580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 330 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("direct_declarator->direct_declarator LEFT_SQUARE_BRACE type_qualifier_list STATIC_KEYWORD assignment_expression RIGHT_SQUARE_BRACE  \n");}
#line 2586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 331 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("direct_declarator ->direct_declarator LEFT_SQUARE_BRACE type_qualifier_list_opt MULTIPLICATION RIGHT_SQUARE_BRACE \n");}
#line 2592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 332 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("direct_declarator->direct_declarator LEFT_ROUND_BRACE parameter_type_list RIGHT_ROUND_BRACE  \n");}
#line 2598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 333 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("direct_declarator ->direct_declarator LEFT_ROUND_BRACE identifier_list_opt RIGHT_ROUND_BRACE  \n");}
#line 2604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 336 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("type_qualifier_list_opt ->type_qualifier_list \n");}
#line 2610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 337 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("type_qualifier_list_opt ->epsilon transition \n");}
#line 2616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 340 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("assignment_expression_opt->assignment_expression  \n");}
#line 2622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 341 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("assignment_expression_opt ->epsilon transition \n");}
#line 2628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 344 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("identifier_list_opt ->identifier_list  \n");}
#line 2634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 345 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("identifier_list_opt ->epsilon transition  \n");}
#line 2640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 348 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("pointer->MULTIPLICATION type_qualifier_list_opt \n");}
#line 2646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 349 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("pointer ->MULTIPLICATION type_qualifier_list_opt pointer \n");}
#line 2652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 352 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("type_qualifier_list ->type_qualifier\n");}
#line 2658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 353 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("type_qualifier_list ->type_qualifier_list type_qualifier\n");}
#line 2664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 356 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("parameter_type_list ->parameter_list \n");}
#line 2670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 357 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("parameter_type_list->parameter_list COMMA ELIPSES\n");}
#line 2676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 360 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("parameter_list ->parameter_declaration \n");}
#line 2682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 361 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("parameter_list ->parameter_list COMMA parameter_declaration \n");}
#line 2688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 364 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("parameter_declaration ->declaration_specifiers declarator \n");}
#line 2694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 365 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("parameter_declaration ->declaration_specifiers  \n");}
#line 2700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 368 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("identifier_list  ->IDENTIFIER   \n");}
#line 2706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 369 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("identifier_list  ->identifier_list COMMA IDENTIFIER  \n");}
#line 2712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 372 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("type_name ->specifier_qualifier_list  \n");}
#line 2718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 375 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("initializer->assignment_expression \n");}
#line 2724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 376 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("initializer ->LEFT_CURLY_BRACE initializer_list RIGHT_CURLY_BRACE \n");}
#line 2730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 377 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("initializer ->LEFT_CURLY_BRACE initializer_list COMMA RIGHT_CURLY_BRACE  \n");}
#line 2736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 380 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("initializer_list ->designation_opt initializer  \n");}
#line 2742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 381 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("initializer_list ->initializer_list COMMA designation_opt initializer   \n");}
#line 2748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 384 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("designation_opt->designation  \n");}
#line 2754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 385 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("designation_opt -> epsilon\n");}
#line 2760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 388 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("designation-> designator_list EQUAL  \n");}
#line 2766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 391 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("designator_list -> designator \n");}
#line 2772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 392 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("designator_list -> designator_list designator\n");}
#line 2778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 395 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("designator -> LEFT_SQUARE_BRACE constant_expression RIGHT_SQUARE_BRACE\n");}
#line 2784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 396 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("designator -> PERIOD IDENTIFIER\n");}
#line 2790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 401 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("statement -> labeled_statement \n");}
#line 2796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 402 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("statement -> compound_statement\n");}
#line 2802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 403 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("statement -> expression_statement \n");}
#line 2808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 404 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("statement -> selection_statement \n");}
#line 2814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 405 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("statement -> iteration_statement \n");}
#line 2820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 406 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("statement -> jump_statement \n");}
#line 2826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 409 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("labeled_statement ->IDENTIFIER COLON statement\n");}
#line 2832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 410 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("labeled_statement -> CASE_KEYWORD constant_expression COLON statement  \n");}
#line 2838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 411 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("labeled_statement -> DEFAULT_KEYWORD COLON statement \n");}
#line 2844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 415 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("compound_statement-> LEFT_CURLY_BRACE block_item_list_opt RIGHT_CURLY_BRACE \n");}
#line 2850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 418 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("block_item_list_opt ->block_item_list \n");}
#line 2856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 419 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("block_item_list_opt ->epsilon\n");}
#line 2862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 422 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("block_item_list -> block_item \n");}
#line 2868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 423 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("block_item_list -> block_item_list block_item \n");}
#line 2874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 426 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("block_item -> declaration\n");}
#line 2880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 427 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("block_item -> statement\n");}
#line 2886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 430 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("expression_statement -> expression_opt SEMICOLON_TERMINATOR \n");}
#line 2892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 433 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("expression_opt ->expression \n");}
#line 2898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 434 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("expression_opt->epsilon \n");}
#line 2904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 437 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("selection_statement ->IF_KEYWORD LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE statement ELSE_KEYWORD statement\n");}
#line 2910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 438 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("selection_statement ->IF_KEYWORD LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE statement \n");}
#line 2916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 439 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("selection_statement ->SWITCH_KEYWORD LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE statement\n");}
#line 2922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 442 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("iteration_statement ->WHILE_KEYWORD LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE statement\n");}
#line 2928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 443 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("iteration_statement ->DO_KEYWORD statement WHILE_KEYWORD LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE SEMICOLON_TERMINATOR\n");}
#line 2934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 444 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("iteration_statement->FOR_KEYWORD LEFT_ROUND_BRACE expression_opt SEMICOLON_TERMINATOR expression_opt SEMICOLON_TERMINATOR expression_opt RIGHT_ROUND_BRACE statement\n");}
#line 2940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 445 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("iteration_statement->FOR_KEYWORD LEFT_ROUND_BRACE declaration expression_opt SEMICOLON_TERMINATOR expression_opt RIGHT_ROUND_BRACE statement \n");}
#line 2946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 448 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("jump_statement ->GOTO_KEYWORD IDENTIFIER SEMICOLON_TERMINATOR  \n");}
#line 2952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 449 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("jump_statement ->CONTINUE_KEYWORD SEMICOLON_TERMINATOR \n");}
#line 2958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 450 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("jump_statement ->BREAK_KEYWORD SEMICOLON_TERMINATOR \n");}
#line 2964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 451 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("jump_statement ->RETURN_KEYWORD expression_opt SEMICOLON_TERMINATOR \n");}
#line 2970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 456 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("translation_unit -> external_declaration\n");}
#line 2976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 457 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("translation_unit -> translation_unit external_declaration\n");}
#line 2982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 460 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("external_declaration -> function_definition\n");}
#line 2988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 461 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("external_declaration -> declaration\n");}
#line 2994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 464 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("function_definition->declaration_specifiers declarator declaration_list_opt compound_statement\n");}
#line 3000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 467 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("declaration_list_opt -> declaration_list \n");}
#line 3006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 468 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("declaration_list_opt -> epsilon\n");}
#line 3012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 471 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("declaration_list -> declaration \n");}
#line 3018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 472 "ass4_14CS10062.y" /* yacc.c:1646  */
    {printf("declaration_list -> declaration_list declaration  \n");}
#line 3024 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3028 "y.tab.c" /* yacc.c:1646  */
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
#line 475 "ass4_14CS10062.y" /* yacc.c:1906  */


void yyerror(const char* s) {
	printf("%s", s);
}































