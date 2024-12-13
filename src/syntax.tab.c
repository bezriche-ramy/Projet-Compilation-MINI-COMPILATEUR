/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "syntax.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "lex.yy.h"
    #include <stdbool.h>
    #include "pile.h"
    #include "quadruplets.h"
    #include "TS_tabFormat.h"

    //extern int qc;
    //extern qdr quad[1000];

    extern int yylineno;

    char *op1, *op2; // gerer les exp_arthimetique pour maj de idf et test conditions 
    char tmp[50];  

    int quadindex1 ,quadindex2;
    char  sauvindex[4];
    char quad1[10]; 
    char quad2[10];

    char sauvidf[10];  // save type  ( CHAR FLOAT INTEGER ) , pour màj de type idf 
    char sauvval[10]; // save val  pour maj de valeur idf 



    void yyerror(const char *s);
    int yylex();


    void print_string(const char* str) {
        // Enlève les guillemets et affiche
        char* tmp = strdup(str + 1);  // Skip first quote
        tmp[strlen(tmp)-1] = '\0';    // Remove last quote
        printf("%s\n", tmp);
        free(tmp);
    }


#line 113 "syntax.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "syntax.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_LBRACE = 3,                     /* LBRACE  */
  YYSYMBOL_RBRACE = 4,                     /* RBRACE  */
  YYSYMBOL_VAR_GLOBAL = 5,                 /* VAR_GLOBAL  */
  YYSYMBOL_DECLARATION = 6,                /* DECLARATION  */
  YYSYMBOL_INSTRUCTION = 7,                /* INSTRUCTION  */
  YYSYMBOL_INTEGER = 8,                    /* INTEGER  */
  YYSYMBOL_FLOAT = 9,                      /* FLOAT  */
  YYSYMBOL_CHAR = 10,                      /* CHAR  */
  YYSYMBOL_CONST = 11,                     /* CONST  */
  YYSYMBOL_IF = 12,                        /* IF  */
  YYSYMBOL_ELSE = 13,                      /* ELSE  */
  YYSYMBOL_FOR = 14,                       /* FOR  */
  YYSYMBOL_READ = 15,                      /* READ  */
  YYSYMBOL_WRITE = 16,                     /* WRITE  */
  YYSYMBOL_AND = 17,                       /* AND  */
  YYSYMBOL_OR = 18,                        /* OR  */
  YYSYMBOL_NOT = 19,                       /* NOT  */
  YYSYMBOL_EQUAL = 20,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 21,                 /* NOT_EQUAL  */
  YYSYMBOL_LESS_EQUAL = 22,                /* LESS_EQUAL  */
  YYSYMBOL_GREATER_EQUAL = 23,             /* GREATER_EQUAL  */
  YYSYMBOL_GREATER = 24,                   /* GREATER  */
  YYSYMBOL_LESS = 25,                      /* LESS  */
  YYSYMBOL_STRING_LITERAL = 26,            /* STRING_LITERAL  */
  YYSYMBOL_IDENTIFIER = 27,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER_CONSTANT = 28,          /* INTEGER_CONSTANT  */
  YYSYMBOL_FLOAT_CONSTANT = 29,            /* FLOAT_CONSTANT  */
  YYSYMBOL_30_ = 30,                       /* '+'  */
  YYSYMBOL_31_ = 31,                       /* '-'  */
  YYSYMBOL_32_ = 32,                       /* '*'  */
  YYSYMBOL_33_ = 33,                       /* '/'  */
  YYSYMBOL_34_ = 34,                       /* ';'  */
  YYSYMBOL_35_ = 35,                       /* '='  */
  YYSYMBOL_36_ = 36,                       /* '['  */
  YYSYMBOL_37_ = 37,                       /* ']'  */
  YYSYMBOL_38_ = 38,                       /* ','  */
  YYSYMBOL_39_ = 39,                       /* '('  */
  YYSYMBOL_40_ = 40,                       /* ')'  */
  YYSYMBOL_41_ = 41,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_program = 43,                   /* program  */
  YYSYMBOL_44_1 = 44,                      /* $@1  */
  YYSYMBOL_declaration_block = 45,         /* declaration_block  */
  YYSYMBOL_declarations = 46,              /* declarations  */
  YYSYMBOL_declaration = 47,               /* declaration  */
  YYSYMBOL_var_list = 48,                  /* var_list  */
  YYSYMBOL_type = 49,                      /* type  */
  YYSYMBOL_constant_value = 50,            /* constant_value  */
  YYSYMBOL_instruction_block = 51,         /* instruction_block  */
  YYSYMBOL_52_2 = 52,                      /* $@2  */
  YYSYMBOL_instruction = 53,               /* instruction  */
  YYSYMBOL_affectation = 54,               /* affectation  */
  YYSYMBOL_affectation_arithm = 55,        /* affectation_arithm  */
  YYSYMBOL_expression = 56,                /* expression  */
  YYSYMBOL_if_statement = 57,              /* if_statement  */
  YYSYMBOL_B = 58,                         /* B  */
  YYSYMBOL_A = 59,                         /* A  */
  YYSYMBOL_condition = 60,                 /* condition  */
  YYSYMBOL_for_loop = 61,                  /* for_loop  */
  YYSYMBOL_write_inst = 62,                /* write_inst  */
  YYSYMBOL_write_args = 63,                /* write_args  */
  YYSYMBOL_read_inst = 64                  /* read_inst  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   197

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  62
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  150

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   284


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      39,    40,    32,    30,    38,    31,     2,    33,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    41,    34,
       2,    35,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    36,     2,    37,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    80,    80,    80,    87,    90,    92,    95,   102,   109,
     120,   125,   133,   137,   138,   139,   143,   144,   145,   151,
     151,   156,   157,   158,   159,   160,   161,   162,   165,   173,
     188,   205,   213,   218,   237,   258,   283,   305,   328,   350,
     367,   374,   375,   376,   384,   389,   396,   404,   426,   448,
     471,   493,   515,   537,   541,   545,   554,   557,   561,   563,
     569,   571,   580
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "LBRACE", "RBRACE",
  "VAR_GLOBAL", "DECLARATION", "INSTRUCTION", "INTEGER", "FLOAT", "CHAR",
  "CONST", "IF", "ELSE", "FOR", "READ", "WRITE", "AND", "OR", "NOT",
  "EQUAL", "NOT_EQUAL", "LESS_EQUAL", "GREATER_EQUAL", "GREATER", "LESS",
  "STRING_LITERAL", "IDENTIFIER", "INTEGER_CONSTANT", "FLOAT_CONSTANT",
  "'+'", "'-'", "'*'", "'/'", "';'", "'='", "'['", "']'", "','", "'('",
  "')'", "':'", "$accept", "program", "$@1", "declaration_block",
  "declarations", "declaration", "var_list", "type", "constant_value",
  "instruction_block", "$@2", "instruction", "affectation",
  "affectation_arithm", "expression", "if_statement", "B", "A",
  "condition", "for_loop", "write_inst", "write_args", "read_inst", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-50)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -50,     4,    39,   -50,    53,   -50,    10,    60,   -50,   -50,
     -50,    50,   -50,    42,    87,   -50,    61,    46,   -50,   -50,
      92,    68,    83,   107,   113,   156,   143,    13,   114,    57,
     -50,   -50,    58,   -50,   -50,   -50,   124,   125,   129,   -50,
     122,   133,   134,   135,    73,   127,   -50,   -50,    18,    18,
     171,    58,   -50,   100,    58,    58,    58,    36,    58,    58,
      58,   -50,   -50,   139,    73,   150,   151,   -14,   -50,     8,
      52,    81,   112,   -50,   -50,    18,    18,    18,    18,    18,
      18,    18,    18,    18,    18,   -50,   175,   176,    73,    73,
     -50,   -50,   -50,   -50,   144,    -2,   146,   145,   -50,   -50,
     110,   149,   152,   153,   154,    85,     6,   -50,   138,   138,
     138,   138,   138,   138,    81,    81,   -50,   -50,   -50,   177,
     -50,   167,   -50,   186,    18,   157,   109,   158,   -50,   -50,
     -50,   -50,   -50,   -50,   190,   -50,    96,   -50,   -50,   -50,
     -50,   -50,    18,   108,    18,   123,   191,    58,   192,   -50
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,     0,     5,     0,     0,    13,    14,
      15,     0,     6,     0,     0,    19,     0,    12,     5,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
       7,     4,    27,    18,    16,    17,     0,     0,     0,    10,
       0,     0,     0,     0,     0,    40,    41,    42,     0,     0,
       0,    27,    32,     0,    27,    27,    27,    27,    27,    27,
      27,     8,     9,     0,     0,     0,     0,     0,    40,    55,
       0,    39,     0,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    23,     0,     0,     0,     0,
      22,    24,    25,    26,    12,     0,     0,     0,    58,    59,
       0,     0,    40,    41,    42,     0,     0,    43,    47,    48,
      50,    52,    51,    49,    35,    36,    37,    38,    44,     0,
      53,    54,    11,     0,     0,     0,     0,     0,    31,    28,
      29,    30,    33,    34,     0,    46,     0,    62,    60,    61,
      57,    45,     0,     0,     0,     0,     0,    27,     0,    56
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -50,   -50,   -50,   -50,   179,   -50,   -26,   184,   -50,   -50,
     -50,   -49,   -50,   -50,   -48,   -50,   -50,   -50,   -27,   -50,
     -50,   -50,   -50
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,    15,     6,    12,    24,    13,    36,    19,
      20,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,   100,    60
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      71,    72,    74,    39,     3,    85,    86,    87,    90,    91,
      92,    93,    98,    99,     7,    88,    89,    69,     8,     9,
      10,    11,   105,    88,    89,    88,    89,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,    95,   123,    33,
     133,    34,    35,   106,     4,    68,    46,    47,    40,    48,
      41,    42,    43,    88,    89,    44,     5,    49,     8,     9,
      10,   120,   121,    45,    46,    47,    14,    48,   122,    17,
      40,    44,    41,    42,    43,    49,   136,    44,   101,   102,
     103,   104,    22,    48,    23,    45,    46,    47,    21,    48,
      18,    49,    44,    38,   143,    23,   145,    49,   148,    26,
      68,    46,    47,    27,    48,    75,    76,    77,    78,    79,
      80,    28,    49,    83,    84,    81,    82,    83,    84,   132,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      81,    82,    83,    84,    29,   138,   139,   142,    81,    82,
      83,    84,    81,    82,    83,    84,    32,    30,   126,   144,
     127,    37,   107,    81,    82,    83,    84,    63,    61,    62,
      31,    64,    70,   146,     8,     9,    10,    11,    81,    82,
      83,    84,    65,    66,    67,    73,    94,    96,    97,   118,
     119,   124,    23,   128,    88,   125,   129,   130,   131,   135,
     134,   137,   140,   141,   147,    16,   149,    25
};

static const yytype_uint8 yycheck[] =
{
      48,    49,    51,    29,     0,    54,    55,    56,    57,    58,
      59,    60,    26,    27,     4,    17,    18,    44,     8,     9,
      10,    11,    70,    17,    18,    17,    18,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    64,    40,    26,
      34,    28,    29,    70,     5,    27,    28,    29,    12,    31,
      14,    15,    16,    17,    18,    19,     3,    39,     8,     9,
      10,    88,    89,    27,    28,    29,     6,    31,    94,    27,
      12,    19,    14,    15,    16,    39,   124,    19,    26,    27,
      28,    29,    36,    31,    38,    27,    28,    29,    27,    31,
       3,    39,    19,    36,   142,    38,   144,    39,   147,     7,
      27,    28,    29,    35,    31,    20,    21,    22,    23,    24,
      25,    28,    39,    32,    33,    30,    31,    32,    33,    34,
      20,    21,    22,    23,    24,    25,    30,    31,    32,    33,
      30,    31,    32,    33,    27,    26,    27,    41,    30,    31,
      32,    33,    30,    31,    32,    33,     3,    34,    38,    41,
      40,    37,    40,    30,    31,    32,    33,    28,    34,    34,
       4,    39,    35,    40,     8,     9,    10,    11,    30,    31,
      32,    33,    39,    39,    39,     4,    37,    27,    27,     4,
       4,    35,    38,    34,    17,    40,    34,    34,    34,     3,
      13,    34,    34,     3,     3,    11,     4,    18
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    43,    44,     0,     5,     3,    46,     4,     8,     9,
      10,    11,    47,    49,     6,    45,    49,    27,     3,    51,
      52,    27,    36,    38,    48,    46,     7,    35,    28,    27,
      34,     4,     3,    26,    28,    29,    50,    37,    36,    48,
      12,    14,    15,    16,    19,    27,    28,    29,    31,    39,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      64,    34,    34,    28,    39,    39,    39,    39,    27,    60,
      35,    56,    56,     4,    53,    20,    21,    22,    23,    24,
      25,    30,    31,    32,    33,    53,    53,    53,    17,    18,
      53,    53,    53,    53,    37,    60,    27,    27,    26,    27,
      63,    26,    27,    28,    29,    56,    60,    40,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,     4,     4,
      60,    60,    48,    40,    35,    40,    38,    40,    34,    34,
      34,    34,    34,    34,    13,     3,    56,    34,    26,    27,
      34,     3,    41,    56,    41,    56,    40,     3,    53,     4
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    44,    43,    45,    46,    46,    47,    47,    47,
      48,    48,    48,    49,    49,    49,    50,    50,    50,    52,
      51,    53,    53,    53,    53,    53,    53,    53,    54,    54,
      54,    54,    54,    55,    55,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    57,    58,    59,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    61,    62,    63,    63,
      63,    63,    64
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     7,     4,     0,     2,     4,     6,     6,
       3,     6,     0,     1,     1,     1,     1,     1,     1,     0,
       5,     2,     2,     2,     2,     2,     2,     0,     4,     4,
       4,     4,     1,     4,     4,     3,     3,     3,     3,     2,
       1,     1,     1,     3,     3,     5,     5,     3,     3,     3,
       3,     3,     3,     3,     3,     2,    13,     5,     1,     1,
       3,     3,     5
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* $@1: %empty  */
#line 80 "syntax.y"
         { printf("-----------------------Debut du bloc var_global------------------------------------\n");}
#line 1264 "syntax.tab.c"
    break;

  case 6: /* declarations: declarations declaration  */
#line 92 "syntax.y"
                               {printf("-----------------------------------Declaration------------------------\n");}
#line 1270 "syntax.tab.c"
    break;

  case 7: /* declaration: type IDENTIFIER var_list ';'  */
#line 96 "syntax.y"
    {  printf("Debut de var_global\n");
        // Déclaration d'une variable simple sans valeur initiale
        printf("%s ggggg",(yyvsp[-2].string));
        printf("%s ooooo",sauvidf);
        insertSymbol((yyvsp[-2].string), sauvidf, 0, 0, 0, ""); 
    }
#line 1281 "syntax.tab.c"
    break;

  case 8: /* declaration: CONST type IDENTIFIER '=' constant_value ';'  */
#line 103 "syntax.y"
    {
        char value[50];
        //sprintf(value, "%s", $5); // Convertir la valeur constante en chaîne
        
        insertConstantSymbol((yyvsp[-3].string), sauvidf, (yyvsp[-1].string)); // Ajouter la constante avec sa valeur
    }
#line 1292 "syntax.tab.c"
    break;

  case 9: /* declaration: type IDENTIFIER '[' INTEGER_CONSTANT ']' ';'  */
#line 110 "syntax.y"
    {
        // Déclaration de tableau sans valeur initiale
        char sizeS[10];
        strcpy(sizeS,(yyvsp[-2].string)); // Sauvegarder la taille sous forme de chaîne
        int size =  atoi(sizeS); // Conversion de la chaîne en entier
        insertSymbol((yyvsp[-4].string), (yyvsp[-5].string), 1, size, 0, ""); 
    }
#line 1304 "syntax.tab.c"
    break;

  case 10: /* var_list: ',' IDENTIFIER var_list  */
#line 121 "syntax.y"
    {
        // Déclaration de variables supplémentaires sans valeur initiale
        insertSymbol((yyvsp[-1].string), sauvidf, 0, 0, 0, ""); 
    }
#line 1313 "syntax.tab.c"
    break;

  case 11: /* var_list: ',' IDENTIFIER '[' INTEGER_CONSTANT ']' var_list  */
#line 126 "syntax.y"
    {
        // Déclaration de tableaux supplémentaires sans valeur initiale
        char sizeS[10];
        strcpy(sizeS,(yyvsp[-2].string)); // Sauvegarder la taille sous forme de chaîne
        int size =  atoi(sizeS); // Conversion de la chaîne en entier
        insertSymbol((yyvsp[-4].string), (yyvsp[-5].string), 1, size, 0, ""); 
    }
#line 1325 "syntax.tab.c"
    break;

  case 13: /* type: INTEGER  */
#line 137 "syntax.y"
            {strcpy(sauvidf,"INTEGER");}
#line 1331 "syntax.tab.c"
    break;

  case 14: /* type: FLOAT  */
#line 138 "syntax.y"
            {strcpy(sauvidf,"FLOAT");}
#line 1337 "syntax.tab.c"
    break;

  case 15: /* type: CHAR  */
#line 139 "syntax.y"
           {strcpy(sauvidf,"CHAR");}
#line 1343 "syntax.tab.c"
    break;

  case 16: /* constant_value: INTEGER_CONSTANT  */
#line 143 "syntax.y"
                       { (yyval.string) = (yyvsp[0].string); strcpy(sauvidf, "INTEGER"); }
#line 1349 "syntax.tab.c"
    break;

  case 17: /* constant_value: FLOAT_CONSTANT  */
#line 144 "syntax.y"
                       { (yyval.string) = (yyvsp[0].string); strcpy(sauvidf, "FLOAT"); }
#line 1355 "syntax.tab.c"
    break;

  case 18: /* constant_value: STRING_LITERAL  */
#line 145 "syntax.y"
                       { (yyval.string) = (yyvsp[0].string); strcpy(sauvidf, "CHAR"); }
#line 1361 "syntax.tab.c"
    break;

  case 19: /* $@2: %empty  */
#line 151 "syntax.y"
    { printf("------------------------Debut du bloc d'instructions-------------------\n");}
#line 1367 "syntax.tab.c"
    break;

  case 21: /* instruction: affectation instruction  */
#line 156 "syntax.y"
                                     { /* printf("*********AFFECTATION**********\n"); */ }
#line 1373 "syntax.tab.c"
    break;

  case 22: /* instruction: condition instruction  */
#line 157 "syntax.y"
                                     {  printf("*********CONDITION**********\n");  }
#line 1379 "syntax.tab.c"
    break;

  case 23: /* instruction: if_statement instruction  */
#line 158 "syntax.y"
                                        { printf("*********IF ELSE**********\n"); }
#line 1385 "syntax.tab.c"
    break;

  case 28: /* affectation: IDENTIFIER '=' IDENTIFIER ';'  */
#line 166 "syntax.y"
            {    printf("*********ICI idf = idf **********\n");
                get_type_of_idf((yyvsp[-1].string),sauvidf);
                insert_type((yyvsp[-3].string),sauvidf);
                get_value_of_idf((yyvsp[-1].string),sauvval);
                set_value_of_idf((yyvsp[-3].string),sauvval);
    
            }
#line 1397 "syntax.tab.c"
    break;

  case 29: /* affectation: IDENTIFIER '=' INTEGER_CONSTANT ';'  */
#line 174 "syntax.y"
            {       printf("*********ICI idf = integer **********\n");
                    get_type_of_idf((yyvsp[-3].string),sauvidf);
                    printf("ICI LA VAL DE INTEGER_CONSTANT %s\n",(yyvsp[-1].string));
                    set_value_of_idf((yyvsp[-3].string),(yyvsp[-1].string));
                    ajout_quad_affect_val((yyvsp[-3].string),(yyvsp[-1].string));
                  if(is_int_or_float((yyvsp[-1].string))==1)
                   {
                        // printf("\n it's an int ");
                        insert_type((yyvsp[-3].string),"INTEGER");
                    }else{
                        // printf("it's a float");
                        insert_type((yyvsp[-3].string),"FLOAT");
                    }
            }
#line 1416 "syntax.tab.c"
    break;

  case 30: /* affectation: IDENTIFIER '=' FLOAT_CONSTANT ';'  */
#line 189 "syntax.y"
            {       printf("*********ICI idf = float **********\n");
                    get_type_of_idf((yyvsp[-3].string),sauvidf);
                    printf("ICI LA VAL DE FLOAT_CONSTANT %s\n",(yyvsp[-1].string));
                    set_value_of_idf((yyvsp[-3].string),(yyvsp[-1].string));
                    //printf("[[[[[[[[[[[[[[[[[   avant : qc = %d   ]]]]]]]]]]]]]]]]]]\n",qc);
                    ajout_quad_affect_val((yyvsp[-3].string),(yyvsp[-1].string));
                    //printf("[[[[[[[[[[[[[[[[[   apres : qc = %d   ]]]]]]]]]]]]]]]]]]\n",qc);
                  if(is_int_or_float((yyvsp[-1].string))==1)
                   {
                        // printf("\n it's an int ");
                        insert_type((yyvsp[-3].string),"INTEGER");
                    }else{
                        // printf("it's a float");
                        insert_type((yyvsp[-3].string),"FLOAT");
                    }
            }
#line 1437 "syntax.tab.c"
    break;

  case 31: /* affectation: IDENTIFIER '=' STRING_LITERAL ';'  */
#line 206 "syntax.y"
            {       printf("*********ICI idf = string_literal **********\n");
                    get_type_of_idf((yyvsp[-3].string),sauvidf);
                    printf("ICI LA VAL DE STRING_LITERAL %s\n",(yyvsp[-1].string));
                    set_value_of_idf((yyvsp[-3].string),(yyvsp[-1].string));
                    ajout_quad_affect_val((yyvsp[-3].string),(yyvsp[-1].string));
                  // VERIFIER SI CHAR ET SI SIZE > AU NOMBRE DE CARACTERES
            }
#line 1449 "syntax.tab.c"
    break;

  case 33: /* affectation_arithm: IDENTIFIER '=' expression ';'  */
#line 219 "syntax.y"
            {     printf("*********ICI idf = exp **********\n");
                  strcpy(tmp, Depiler());
                  get_type_of_idf((yyvsp[-3].string),sauvidf);
                  printf("ICI LA VAL DE TMP %s\n",tmp);
                  printf("ICI SET DE LA VAL\n");
                  set_value_of_idf((yyvsp[-3].string),tmp);
                  ajout_quad_affect_val((yyvsp[-3].string),tmp);
                  if(is_int_or_float(tmp)==1)
                   {
                       // printf("\n its an int ");
                        insert_type((yyvsp[-3].string),"INTEGER");
                    }else{
                       // printf("its a float");
                        insert_type((yyvsp[-3].string),"FLOAT");
                    }
                    //printf("///////////////QC = %d tmp = %s//////////////////",qc,tmp);
                    maj_quad(qc-2, 3, tmp);
            }
#line 1472 "syntax.tab.c"
    break;

  case 34: /* affectation_arithm: IDENTIFIER '=' condition ';'  */
#line 238 "syntax.y"
            {     printf("*********ICI idf = condition  **********\n");
                  // LA PROF DIDN'T ASK FOR THIS BUT I'M JUST CHECKING IF CONDITIONS ARE WORKING CORRECTLY
                  strcpy(tmp, Depiler());
                  get_type_of_idf((yyvsp[-3].string),sauvidf);
                  printf("ICI LA VAL DE TMP %s\n",tmp);
                  printf("ICI SET DE LA VAL\n");
                  set_value_of_idf((yyvsp[-3].string),tmp);
                  ajout_quad_affect_val((yyvsp[-3].string),tmp);
                  if(is_int_or_float(tmp)==1)
                   {
                       // printf("\n its an int ");
                        insert_type((yyvsp[-3].string),"INTEGER");
                    }else{
                       // printf("its a float");
                        insert_type((yyvsp[-3].string),"FLOAT");
                    }
                    maj_quad(qc-2, 3, tmp);
            }
#line 1495 "syntax.tab.c"
    break;

  case 35: /* expression: expression '+' expression  */
#line 258 "syntax.y"
                              { 
                printf("*********ICI exp + exp **********\n");
                op2 = malloc(50); 
                op1 = malloc(50); 
                strcpy(op2, Depiler());  printf("op2 = %s\n",op2); printf("op2 est toujours valide et vaut = %s\n",op2); 
                strcpy(op1, Depiler());  printf("op1 = %s\n",op1); 
                //printf("op2 = %s /// op1 =  %s ",op2,op1);
                if(!is_int_or_float(op2)){
                       float ope1 = atof(op1); // Convertir en float
                       float ope2 = atof(op2); 
                       float res = ope1 + ope2;
                        // Convertir le résultat en chaîne
                        sprintf(tmp, "%.2f", res);
                    }else{  // convertir en int
                       int ope1 = atoi(op1);  printf("ope1 = %d\n",ope1);
                       int ope2 = atoi(op2);  printf("ope2 = %d\n",ope2);
                       int res = ope1 + ope2; printf("++++++++++++++++++++++++++++++++++++++++++ICI RESULTAT %d+++++++++++++++++++++++++++",res);
                       sprintf(tmp, "%d",res); printf("tmp = %s\n",tmp);
                    }
                
                
                Empiler(tmp);
                ajout_quad_opbinaire('+',op1,op2);
                free(op2); free(op1);
             }
#line 1525 "syntax.tab.c"
    break;

  case 36: /* expression: expression '-' expression  */
#line 283 "syntax.y"
                                { 
                printf("*********ICI exp - exp **********\n");
                op2 = malloc(50); 
                op1 = malloc(50); 
                strcpy(op2, Depiler());  printf("op2 = %s\n",op2); printf("op2 est toujours valide et vaut = %s\n",op2); 
                strcpy(op1, Depiler());  printf("op1 = %s\n",op1); 
                if(!is_int_or_float(op2)){
                       float ope1 = atof(op1); // Convertir en float
                       float ope2 = atof(op2); 
                           float res = ope1 - ope2;
                        // Convertir le résultat en chaîne
                        sprintf(tmp, "%.2f", res);
                    }else{
                       int ope1 = atoi(op1); // convertir en int 
                       int ope2 = atoi(op2); 
                        int res = ope1 - ope2;
                        sprintf(tmp, "%d",res);
                    }
                Empiler(tmp);
                ajout_quad_opbinaire('-',op1,op2);
                free(op2); free(op1);
             }
#line 1552 "syntax.tab.c"
    break;

  case 37: /* expression: expression '*' expression  */
#line 305 "syntax.y"
                                { 
                printf("*********ICI exp * exp **********\n");
                op2 = malloc(50); 
                op1 = malloc(50); 
                strcpy(op2, Depiler());  printf("op2 = %s\n",op2); printf("op2 est toujours valide et vaut = %s\n",op2); 
                strcpy(op1, Depiler());  printf("op1 = %s\n",op1); 
                if(!is_int_or_float(op2)){
                       float ope1 = atof(op1); // Convertir en float
                       float ope2 = atof(op2); 
                           float res = ope1 * ope2;
                        // Convertir le résultat en chaîne
                        sprintf(tmp, "%.2f", res);
                    }else{
                       int ope1 = atoi(op1); // convertir en int 
                        int ope2 = atoi(op2); 
                        int res = ope1 * ope2;
                        sprintf(tmp, "%d",res);
                    }
                Empiler(tmp);
                //printf("///////////////QC = %d tmp = %s//////////////////",qc,tmp);
                ajout_quad_opbinaire('*',op1,op2);printf("///////////////QC = %d tmp = %s//////////////////",qc,tmp);
                free(op2); free(op1);
             }
#line 1580 "syntax.tab.c"
    break;

  case 38: /* expression: expression '/' expression  */
#line 328 "syntax.y"
                                { 
                printf("*********ICI exp / exp **********\n");
                op2 = malloc(50); 
                op1 = malloc(50); 
                strcpy(op2, Depiler());  printf("op2 = %s\n",op2); printf("op2 est toujours valide et vaut = %s\n",op2); 
                strcpy(op1, Depiler());  printf("op1 = %s\n",op1); 
                if(!is_int_or_float(op2)){
                       float ope1 = atof(op1); // Convertir en float
                       float ope2 = atof(op2); 
                           float res = ope1 / ope2;
                        // Convertir le résultat en chaîne
                        sprintf(tmp, "%.2f", res);
                    }else{
                       int ope1 = atoi(op1); // convertir en int 
                       int ope2 = atoi(op2); 
                        int res = ope1 / ope2;
                        sprintf(tmp, "%d",res);
                    }
                Empiler(tmp);
                ajout_quad_opbinaire('/',op1,op2);
                free(op2); free(op1);
             }
#line 1607 "syntax.tab.c"
    break;

  case 39: /* expression: '-' expression  */
#line 350 "syntax.y"
                   {
                     op1 = malloc(50); 
                     strcpy(op1, Depiler());  printf("op1 = %s\n",op1);
                      if(!is_int_or_float(op1)){
                       float ope1 = atof(op1); // Convertir en float
                           float res = - ope1;
                        // Convertir le résultat en chaîne
                        sprintf(tmp, "%.2f", res);
                    }else{
                       int ope1 = atoi(op1); // convertir en int 
                        int res = - ope1;
                        sprintf(tmp, "%d",res);
                    }
                    Empiler(tmp);
                    ajout_quad_opunaire(op1);
                    free(op1);
                  }
#line 1629 "syntax.tab.c"
    break;

  case 40: /* expression: IDENTIFIER  */
#line 368 "syntax.y"
       {
         get_value_of_idf((yyvsp[0].string),tmp);
         printf("tmp de %s = %s\n",(yyvsp[0].string),tmp);
         Empiler(tmp);
         Afficher_pile();
       }
#line 1640 "syntax.tab.c"
    break;

  case 41: /* expression: INTEGER_CONSTANT  */
#line 374 "syntax.y"
                      { Empiler((yyvsp[0].string)); Afficher_pile(); }
#line 1646 "syntax.tab.c"
    break;

  case 42: /* expression: FLOAT_CONSTANT  */
#line 375 "syntax.y"
                    { Empiler((yyvsp[0].string));}
#line 1652 "syntax.tab.c"
    break;

  case 44: /* if_statement: B instruction RBRACE  */
#line 384 "syntax.y"
                                  {
    sprintf(sauvindex,"%d",qc);
	maj_quad(quadindex2,1,sauvindex);
}
#line 1661 "syntax.tab.c"
    break;

  case 45: /* B: A instruction RBRACE ELSE LBRACE  */
#line 389 "syntax.y"
                                    {
    quadindex2=qc;
	quadruplet("BR","","","");
	sprintf(sauvindex,"%d",qc);
	maj_quad(quadindex1,1,sauvindex);
}
#line 1672 "syntax.tab.c"
    break;

  case 46: /* A: IF '(' condition ')' LBRACE  */
#line 396 "syntax.y"
                               {
    strcpy(tmp, Depiler());
   ajout_quad_affect_val("tmp_cond",tmp);
	quadindex1=qc;
	quadruplet(quad1 ,"","","tmp_cond");
}
#line 1683 "syntax.tab.c"
    break;

  case 47: /* condition: expression EQUAL expression  */
#line 405 "syntax.y"
            {  int res;
            strcpy(quad1,"BNE");
            printf("*********ICI exp = exp **********\n");
                op2 = malloc(50); 
                op1 = malloc(50); 
                strcpy(op2, Depiler());
                strcpy(op1, Depiler());
            if(!is_int_or_float(op1)){
                float ope1 = atof(op1); 
                float  ope2 = atof(op2); 
                int res = (ope1 == ope2);
                }
            else{
                int ope1 = atoi(op1); // convertir en int 
                int ope2 = atoi(op2); 
                int res = (ope1 == ope2);
                }
            sprintf(tmp, "%d",res);
            Empiler(tmp);
            free(op2); free(op1);
            }
#line 1709 "syntax.tab.c"
    break;

  case 48: /* condition: expression NOT_EQUAL expression  */
#line 426 "syntax.y"
                                     {  
            int res;
            strcpy(quad1,"BE");
            printf("*********ICI exp != exp **********\n");
                op2 = malloc(50); 
                op1 = malloc(50); 
                strcpy(op2, Depiler());
                strcpy(op1, Depiler());
            if(!is_int_or_float(op1)){
                float ope1 = atof(op1); 
                float  ope2 = atof(op2); 
                int res = (ope1 != ope2);
                }
            else{
                int ope1 = atoi(op1); // convertir en int 
                int ope2 = atoi(op2); 
                int res = (ope1 != ope2);
                }
            sprintf(tmp, "%d",res);
            Empiler(tmp);
            free(op2); free(op1);
            }
#line 1736 "syntax.tab.c"
    break;

  case 49: /* condition: expression LESS expression  */
#line 448 "syntax.y"
                                {  
            strcpy(quad1,"BGE");
            printf("*********ICI exp < exp **********\n");
                op2 = malloc(50); 
                op1 = malloc(50); 
                strcpy(op2, Depiler()); printf("op2 = %s\n",op2); printf("op2 est toujours valide et vaut = %s\n",op2); 
                strcpy(op1, Depiler());
            if(!is_int_or_float(op1)){
                float ope1 = atof(op1); 
                float  ope2 = atof(op2); 
                int res = (ope1 < ope2);
                sprintf(tmp, "%d",res);
                }
            else{// convertir en int
                int ope1 = atoi(op1);  printf("ope1 = %d\n",ope1);
                int ope2 = atoi(op2);  printf("ope2 = %d\n",ope2);
                int res = (ope1 < ope2); printf("res = %d\n",res);
                sprintf(tmp, "%d",res);
                }
            //quadruplet(quad1,op1,op2,"<temporaire>");
            Empiler(tmp); Afficher_pile();
            free(op2); free(op1);
            }
#line 1764 "syntax.tab.c"
    break;

  case 50: /* condition: expression LESS_EQUAL expression  */
#line 471 "syntax.y"
                                      {  
            int res;
            strcpy(quad1,"BG");
            printf("*********ICI exp <= exp **********\n");
                op2 = malloc(50); 
                op1 = malloc(50);  
                strcpy(op2, Depiler()); 
                strcpy(op1, Depiler());
            if(!is_int_or_float(op1)){
                float ope1 = atof(op1); 
                float  ope2 = atof(op2); 
                int res = (ope1 <= ope2);
                }
            else{
                int ope1 = atoi(op1); // convertir en int 
                int ope2 = atoi(op2); 
                int res = (ope1 <= ope2);
                }
            sprintf(tmp, "%d",res);
            Empiler(tmp); Afficher_pile();
            free(op2); free(op1);
            }
#line 1791 "syntax.tab.c"
    break;

  case 51: /* condition: expression GREATER expression  */
#line 493 "syntax.y"
                                   {  
            int res;
            strcpy(quad1,"BLE");
            printf("*********ICI exp > exp **********\n");
                op2 = malloc(50); 
                op1 = malloc(50); 
                strcpy(op2, Depiler());
                strcpy(op1, Depiler());
            if(!is_int_or_float(op1)){
                float ope1 = atof(op1); 
                float  ope2 = atof(op2); 
                int res = (ope1 > ope2);
                }
            else{
                int ope1 = atoi(op1); // convertir en int 
                int ope2 = atoi(op2); 
                int res = (ope1 > ope2);
                }
            sprintf(tmp, "%d",res);
            Empiler(tmp);
            free(op2); free(op1);
            }
#line 1818 "syntax.tab.c"
    break;

  case 52: /* condition: expression GREATER_EQUAL expression  */
#line 515 "syntax.y"
                                         {  
            int res;
            strcpy(quad1,"BL");
            printf("*********ICI exp >= exp **********\n");
                op2 = malloc(50); 
                op1 = malloc(50); 
                strcpy(op2, Depiler());
                strcpy(op1, Depiler());
            if(!is_int_or_float(op1)){
                float ope1 = atof(op1); 
                float  ope2 = atof(op2); 
                int res = (ope1 >= ope2);
                }
            else{
                int ope1 = atoi(op1); // convertir en int 
                int ope2 = atoi(op2); 
                int res = (ope1 >= ope2);
                }
            sprintf(tmp, "%d",res);
            Empiler(tmp);
            free(op2); free(op1);
            }
#line 1845 "syntax.tab.c"
    break;

  case 53: /* condition: condition AND condition  */
#line 538 "syntax.y"
    { 
       
    }
#line 1853 "syntax.tab.c"
    break;

  case 54: /* condition: condition OR condition  */
#line 542 "syntax.y"
    { 
       
    }
#line 1861 "syntax.tab.c"
    break;

  case 55: /* condition: NOT condition  */
#line 546 "syntax.y"
    {

    }
#line 1869 "syntax.tab.c"
    break;

  case 58: /* write_args: STRING_LITERAL  */
#line 562 "syntax.y"
    { print_string((yyvsp[0].string)); /* Affiche une chaîne*/ }
#line 1875 "syntax.tab.c"
    break;

  case 59: /* write_args: IDENTIFIER  */
#line 564 "syntax.y"
    {
        // Rechercher la valeur associée à l'identifiant dans la table des symboles
        Symbol *sym = lookupSymbol((yyvsp[0].string));
        printf("%s\n", sym->val); // Affiche la valeur de l'identifiant
    }
#line 1885 "syntax.tab.c"
    break;

  case 60: /* write_args: write_args ',' STRING_LITERAL  */
#line 570 "syntax.y"
    { print_string((yyvsp[0].string)); /* Affiche la chaîne littérale suivante */}
#line 1891 "syntax.tab.c"
    break;

  case 61: /* write_args: write_args ',' IDENTIFIER  */
#line 572 "syntax.y"
    {
        // Rechercher la valeur associée à l'identifiant suivant
        Symbol *sym = lookupSymbol((yyvsp[0].string));
        printf("%s\n", sym->val); // Affiche la valeur de l'identifiant 
    }
#line 1901 "syntax.tab.c"
    break;

  case 62: /* read_inst: READ '(' IDENTIFIER ')' ';'  */
#line 581 "syntax.y"
    {
        Symbol *sym = lookupSymbol((yyvsp[-2].string)); // Vérifier si l'identifiant est déclaré
            char input[50];
            fgets(input, sizeof(input), stdin); // Lire une valeur de l'utilisateur
            input[strcspn(input, "\n")] = '\0'; // Supprimer le caractère de nouvelle ligne
            set_value_of_idf((yyvsp[-2].string),input);
   
    }
#line 1914 "syntax.tab.c"
    break;


#line 1918 "syntax.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 593 "syntax.y"


void yyerror(const char *s) {
    fprintf(stderr, "Error: %s at line %d\n", s, yylineno);
}

int yywrap()
{
   return 1;
}

int main() {
    yyparse();
    char *x = "nailaaaa";
    Initpile();
    Empiler(x);
    Empiler("hello");
    afficher_qdr();
    //maj_quad(11, 3, "hehe it changed");
    //afficher_qdr();
    test_affichage_pile();
    Afficher_pile();
    
    /*
    insertSymbol("x", "INTEGER", 0, 0, 0, "10");
    insertSymbol("y", "FLOAT", 0, 0, 0, "3.14");
    insertArraySymbol("arr", "INTEGER", 5);
    insertConstantSymbol("PI", "FLOAT", "3.14159");
    */
    afficherTableSymboles();
    return 1;
}
