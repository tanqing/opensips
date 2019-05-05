/* A Bison parser, made by GNU Bison 3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 79 "cfg.y" /* yacc.c:338  */


#include <stdlib.h>
#include <stdio.h>
#include <sys/socket.h>
#include <unistd.h>
#include <netinet/in.h>
#include <netinet/in_systm.h>
#include <netinet/ip.h>
#include <arpa/inet.h>
#include <string.h>
#include <errno.h>
#include "route_struct.h"
#include "globals.h"
#include "route.h"
#include "dprint.h"
#include "sr_module.h"
#include "modparam.h"
#include "ip_addr.h"
#include "resolve.h"
#include "socket_info.h"
#include "name_alias.h"
#include "ut.h"
#include "dset.h"
#include "pvar.h"
#include "blacklists.h"
#include "xlog.h"
#include "db/db_insertq.h"
#include "bin_interface.h"
#include "net/trans.h"
#include "config.h"

#ifdef SHM_EXTRA_STATS
#include "mem/module_info.h"
#endif

#ifdef DEBUG_DMALLOC
#include <dmalloc.h>
#endif

/* hack to avoid alloca usage in the generated C file (needed for compiler
 with no built in alloca, like icc*/
#undef _ALLOCA_H


extern int yylex();
static void yyerror(char* s);
static void yyerrorf(char* fmt, ...);
static char* tmp;
static int i_tmp, rc;
static void* cmd_tmp;
static struct socket_id* lst_tmp;
static int rt;  /* Type of route block for find_export */
static str s_tmp;
static str tstr;
static struct net* net_tmp;
static pv_spec_t *spec;
static pv_elem_t *pvmodel;
static struct bl_rule *bl_head = 0;
static struct bl_rule *bl_tail = 0;

action_elem_t elems[MAX_ACTION_ELEMS];
static action_elem_t route_elems[MAX_ACTION_ELEMS];
action_elem_t *a_tmp;

static inline void warn(char* s);
static struct socket_id* mk_listen_id(char*, enum sip_protos, int);
static struct socket_id* set_listen_id_adv(struct socket_id *, char *, int);
static struct multi_str *new_string(char *s);
static int parse_ipnet(char *in, int len, struct net **ipnet);

extern int line;
extern int column;
extern int startcolumn;
extern char *finame;

#ifndef SHM_EXTRA_STATS
struct multi_str{
	char *s;
	struct multi_str* next;
};
#else 
static struct multi_str *tmp_mod;
#endif

#define get_cfg_file_name \
	((finame) ? finame : cfg_file ? cfg_file : "default")



#define mk_action_(_res, _type, _no, _elems) \
	do { \
		_res = mk_action(_type, _no, _elems, line, get_cfg_file_name); \
	} while(0)
#define mk_action0(_res, _type, _p1_type, _p2_type, _p1, _p2) \
	do { \
		_res = mk_action(_type, 0, 0, line, get_cfg_file_name); \
	} while(0)
#define mk_action1(_res, _type, _p1_type, _p1) \
	do { \
		elems[0].type = _p1_type; \
		elems[0].u.data = _p1; \
		_res = mk_action(_type, 1, elems, line, get_cfg_file_name); \
	} while(0)
#define	mk_action2(_res, _type, _p1_type, _p2_type, _p1, _p2) \
	do { \
		elems[0].type = _p1_type; \
		elems[0].u.data = _p1; \
		elems[1].type = _p2_type; \
		elems[1].u.data = _p2; \
		_res = mk_action(_type, 2, elems, line, get_cfg_file_name); \
	} while(0)
#define mk_action3(_res, _type, _p1_type, _p2_type, _p3_type, _p1, _p2, _p3) \
	do { \
		elems[0].type = _p1_type; \
		elems[0].u.data = _p1; \
		elems[1].type = _p2_type; \
		elems[1].u.data = _p2; \
		elems[2].type = _p3_type; \
		elems[2].u.data = _p3; \
		_res = mk_action(_type, 3, elems, line, get_cfg_file_name); \
	} while(0)


#line 194 "cfg.tab.c" /* yacc.c:338  */
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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "cfg.tab.h".  */
#ifndef YY_YY_CFG_TAB_H_INCLUDED
# define YY_YY_CFG_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FORWARD = 258,
    SEND = 259,
    DROP = 260,
    ASSERT = 261,
    EXIT = 262,
    RETURN = 263,
    LOG_TOK = 264,
    ERROR = 265,
    ROUTE = 266,
    ROUTE_FAILURE = 267,
    ROUTE_ONREPLY = 268,
    ROUTE_BRANCH = 269,
    ROUTE_ERROR = 270,
    ROUTE_LOCAL = 271,
    ROUTE_STARTUP = 272,
    ROUTE_TIMER = 273,
    ROUTE_EVENT = 274,
    SET_HOST = 275,
    SET_HOSTPORT = 276,
    PREFIX = 277,
    STRIP = 278,
    STRIP_TAIL = 279,
    APPEND_BRANCH = 280,
    REMOVE_BRANCH = 281,
    PV_PRINTF = 282,
    SET_USER = 283,
    SET_USERPASS = 284,
    SET_PORT = 285,
    SET_URI = 286,
    REVERT_URI = 287,
    SET_DSTURI = 288,
    RESET_DSTURI = 289,
    ISDSTURISET = 290,
    FORCE_RPORT = 291,
    FORCE_LOCAL_RPORT = 292,
    FORCE_TCP_ALIAS = 293,
    IF = 294,
    ELSE = 295,
    SWITCH = 296,
    CASE = 297,
    DEFAULT = 298,
    SBREAK = 299,
    WHILE = 300,
    FOR = 301,
    IN = 302,
    SET_ADV_ADDRESS = 303,
    SET_ADV_PORT = 304,
    FORCE_SEND_SOCKET = 305,
    SERIALIZE_BRANCHES = 306,
    NEXT_BRANCHES = 307,
    USE_BLACKLIST = 308,
    UNUSE_BLACKLIST = 309,
    SETFLAG = 310,
    RESETFLAG = 311,
    ISFLAGSET = 312,
    SETBFLAG = 313,
    RESETBFLAG = 314,
    ISBFLAGSET = 315,
    METHOD = 316,
    PROTO = 317,
    AF = 318,
    IS_MYSELF = 319,
    MSGLEN = 320,
    NULLV = 321,
    CACHE_STORE = 322,
    CACHE_FETCH = 323,
    CACHE_COUNTER_FETCH = 324,
    CACHE_REMOVE = 325,
    CACHE_ADD = 326,
    CACHE_SUB = 327,
    CACHE_RAW_QUERY = 328,
    XDBG = 329,
    XLOG = 330,
    XLOG_BUF_SIZE = 331,
    XLOG_FORCE_COLOR = 332,
    XLOG_DEFAULT_LEVEL = 333,
    RAISE_EVENT = 334,
    SUBSCRIBE_EVENT = 335,
    CONSTRUCT_URI = 336,
    GET_TIMESTAMP = 337,
    SCRIPT_TRACE = 338,
    FORK = 339,
    DEBUG_MODE = 340,
    DEBUG = 341,
    ENABLE_ASSERTS = 342,
    ABORT_ON_ASSERT = 343,
    LOGLEVEL = 344,
    LOGSTDERROR = 345,
    LOGFACILITY = 346,
    LOGNAME = 347,
    AVP_ALIASES = 348,
    LISTEN = 349,
    MEMGROUP = 350,
    ALIAS = 351,
    AUTO_ALIASES = 352,
    DNS = 353,
    REV_DNS = 354,
    DNS_TRY_IPV6 = 355,
    DNS_TRY_NAPTR = 356,
    DNS_RETR_TIME = 357,
    DNS_RETR_NO = 358,
    DNS_SERVERS_NO = 359,
    DNS_USE_SEARCH = 360,
    MAX_WHILE_LOOPS = 361,
    CHILDREN = 362,
    CHECK_VIA = 363,
    SHM_HASH_SPLIT_PERCENTAGE = 364,
    SHM_SECONDARY_HASH_SIZE = 365,
    MEM_WARMING_ENABLED = 366,
    MEM_WARMING_PATTERN_FILE = 367,
    MEM_WARMING_PERCENTAGE = 368,
    MEMLOG = 369,
    MEMDUMP = 370,
    EXECMSGTHRESHOLD = 371,
    EXECDNSTHRESHOLD = 372,
    TCPTHRESHOLD = 373,
    EVENT_SHM_THRESHOLD = 374,
    EVENT_PKG_THRESHOLD = 375,
    QUERYBUFFERSIZE = 376,
    QUERYFLUSHTIME = 377,
    SIP_WARNING = 378,
    SOCK_MODE = 379,
    SOCK_USER = 380,
    SOCK_GROUP = 381,
    UNIX_SOCK = 382,
    UNIX_SOCK_CHILDREN = 383,
    UNIX_TX_TIMEOUT = 384,
    SERVER_SIGNATURE = 385,
    SERVER_HEADER = 386,
    USER_AGENT_HEADER = 387,
    LOADMODULE = 388,
    MPATH = 389,
    MODPARAM = 390,
    MAXBUFFER = 391,
    CHROOT = 392,
    WDIR = 393,
    MHOMED = 394,
    POLL_METHOD = 395,
    TCP_ACCEPT_ALIASES = 396,
    TCP_CHILDREN = 397,
    TCP_CONNECT_TIMEOUT = 398,
    TCP_CON_LIFETIME = 399,
    TCP_LISTEN_BACKLOG = 400,
    TCP_MAX_CONNECTIONS = 401,
    TCP_NO_NEW_CONN_BFLAG = 402,
    TCP_KEEPALIVE = 403,
    TCP_KEEPCOUNT = 404,
    TCP_KEEPIDLE = 405,
    TCP_KEEPINTERVAL = 406,
    TCP_MAX_MSG_TIME = 407,
    ADVERTISED_ADDRESS = 408,
    ADVERTISED_PORT = 409,
    DISABLE_CORE = 410,
    OPEN_FD_LIMIT = 411,
    MCAST_LOOPBACK = 412,
    MCAST_TTL = 413,
    TOS = 414,
    DISABLE_DNS_FAILOVER = 415,
    DISABLE_DNS_BLACKLIST = 416,
    DST_BLACKLIST = 417,
    DISABLE_STATELESS_FWD = 418,
    DB_VERSION_TABLE = 419,
    DB_DEFAULT_URL = 420,
    DB_MAX_ASYNC_CONNECTIONS = 421,
    DISABLE_503_TRANSLATION = 422,
    SYNC_TOKEN = 423,
    ASYNC_TOKEN = 424,
    LAUNCH_TOKEN = 425,
    EQUAL = 426,
    EQUAL_T = 427,
    GT = 428,
    LT = 429,
    GTE = 430,
    LTE = 431,
    DIFF = 432,
    MATCH = 433,
    NOTMATCH = 434,
    COLONEQ = 435,
    PLUSEQ = 436,
    MINUSEQ = 437,
    SLASHEQ = 438,
    MULTEQ = 439,
    MODULOEQ = 440,
    BANDEQ = 441,
    BOREQ = 442,
    BXOREQ = 443,
    OR = 444,
    AND = 445,
    BOR = 446,
    BAND = 447,
    BXOR = 448,
    BLSHIFT = 449,
    BRSHIFT = 450,
    PLUS = 451,
    MINUS = 452,
    SLASH = 453,
    MULT = 454,
    MODULO = 455,
    NOT = 456,
    BNOT = 457,
    NUMBER = 458,
    ZERO = 459,
    ID = 460,
    STRING = 461,
    SCRIPTVAR = 462,
    IPV6ADDR = 463,
    IPV4ADDR = 464,
    IPNET = 465,
    COMMA = 466,
    SEMICOLON = 467,
    RPAREN = 468,
    LPAREN = 469,
    LBRACE = 470,
    RBRACE = 471,
    LBRACK = 472,
    RBRACK = 473,
    AS = 474,
    USE_CHILDREN = 475,
    DOT = 476,
    CR = 477,
    COLON = 478,
    ANY = 479,
    ANYCAST = 480,
    SCRIPTVARERR = 481
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 205 "cfg.y" /* yacc.c:353  */

	long intval;
	unsigned long uval;
	char* strval;
	struct expr* expr;
	struct action* action;
	struct net* ipnet;
	struct ip_addr* ipaddr;
	struct socket_id* sockid;
	struct _pv_spec *specval;
	struct multi_str* multistr;

#line 477 "cfg.tab.c" /* yacc.c:353  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CFG_TAB_H_INCLUDED  */



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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  188
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5106

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  227
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  559
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1197

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   481

#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   486,   486,   489,   490,   491,   494,   495,   496,   496,
     497,   497,   498,   498,   499,   499,   500,   500,   501,   501,
     502,   502,   503,   503,   504,   504,   506,   509,   523,   531,
     545,   554,   555,   558,   559,   560,   564,   565,   566,   571,
     577,   578,   581,   582,   583,   584,   588,   591,   592,   596,
     597,   598,   599,   600,   601,   604,   607,   611,   615,   619,
     622,   626,   630,   636,   637,   639,   640,   643,   650,   660,
     661,   662,   666,   668,   670,   674,   675,   676,   677,   678,
     681,   683,   687,   688,   694,   695,   696,   697,   698,   699,
     700,   701,   702,   703,   704,   705,   706,   707,   708,   709,
     710,   711,   712,   713,   714,   715,   716,   717,   718,   719,
     720,   721,   729,   737,   745,   753,   761,   769,   777,   785,
     793,   801,   802,   803,   804,   805,   806,   807,   808,   809,
     810,   811,   821,   822,   842,   843,   844,   845,   846,   847,
     848,   849,   850,   851,   852,   853,   854,   855,   856,   857,
     867,   877,   878,   881,   882,   885,   886,   889,   890,   893,
     894,   897,   898,   901,   902,   911,   918,   919,   922,   923,
     926,   927,   934,   935,   942,   943,   950,   951,   952,   953,
     956,   957,   960,   961,   962,   963,   964,   965,   966,   967,
     974,   977,  1021,  1022,  1027,  1029,  1030,  1031,  1037,  1039,
    1053,  1055,  1058,  1059,  1062,  1063,  1070,  1071,  1078,  1079,
    1083,  1110,  1111,  1112,  1113,  1116,  1117,  1120,  1121,  1131,
    1134,  1135,  1136,  1137,  1138,  1139,  1142,  1143,  1146,  1149,
    1153,  1154,  1160,  1166,  1170,  1171,  1174,  1190,  1206,  1207,
    1210,  1220,  1231,  1234,  1243,  1248,  1256,  1271,  1274,  1280,
    1283,  1291,  1297,  1300,  1306,  1309,  1317,  1320,  1328,  1331,
    1339,  1342,  1354,  1358,  1378,  1399,  1420,  1424,  1425,  1426,
    1427,  1428,  1429,  1432,  1433,  1436,  1437,  1438,  1439,  1441,
    1442,  1445,  1446,  1449,  1450,  1451,  1455,  1471,  1476,  1477,
    1478,  1480,  1485,  1488,  1491,  1494,  1497,  1504,  1510,  1514,
    1515,  1518,  1519,  1532,  1536,  1537,  1538,  1539,  1540,  1541,
    1542,  1543,  1544,  1545,  1549,  1550,  1551,  1552,  1553,  1554,
    1557,  1560,  1563,  1566,  1569,  1572,  1575,  1578,  1581,  1584,
    1587,  1590,  1603,  1616,  1638,  1639,  1640,  1641,  1642,  1645,
    1646,  1647,  1650,  1651,  1652,  1655,  1656,  1657,  1658,  1659,
    1660,  1661,  1662,  1665,  1673,  1683,  1691,  1709,  1718,  1719,
    1721,  1722,  1725,  1734,  1743,  1751,  1759,  1768,  1777,  1785,
    1796,  1802,  1810,  1815,  1825,  1832,  1839,  1849,  1854,  1859,
    1866,  1871,  1876,  1881,  1886,  1896,  1906,  1916,  1928,  1940,
    1952,  1956,  1962,  1968,  1975,  1976,  1979,  1985,  1991,  1992,
    1994,  1997,  1998,  1999,  2000,  2001,  2007,  2013,  2019,  2025,
    2028,  2034,  2035,  2037,  2040,  2042,  2043,  2045,  2047,  2048,
    2050,  2052,  2053,  2057,  2061,  2064,  2067,  2068,  2072,  2076,
    2080,  2084,  2085,  2089,  2093,  2097,  2101,  2102,  2108,  2109,
    2111,  2118,  2139,  2140,  2142,  2144,  2145,  2148,  2150,  2151,
    2153,  2155,  2156,  2159,  2161,  2162,  2164,  2177,  2179,  2181,
    2183,  2185,  2187,  2210,  2225,  2227,  2228,  2230,  2232,  2233,
    2235,  2237,  2238,  2240,  2242,  2243,  2245,  2247,  2248,  2250,
    2251,  2252,  2254,  2255,  2257,  2259,  2260,  2261,  2262,  2264,
    2265,  2267,  2269,  2273,  2276,  2279,  2282,  2286,  2288,  2289,
    2302,  2307,  2309,  2310,  2314,  2317,  2318,  2322,  2327,  2330,
    2331,  2334,  2337,  2338,  2342,  2345,  2346,  2350,  2353,  2354,
    2363,  2375,  2388,  2395,  2404,  2413,  2424,  2435,  2448,  2461,
    2472,  2483,  2496,  2509,  2518,  2525,  2542,  2559,  2561,  2564,
    2566,  2568,  2570,  2572,  2574,  2576,  2578,  2580,  2583,  2585,
    2588,  2602,  2608,  2610,  2618,  2626,  2632,  2638,  2642,  2645
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FORWARD", "SEND", "DROP", "ASSERT",
  "EXIT", "RETURN", "LOG_TOK", "ERROR", "ROUTE", "ROUTE_FAILURE",
  "ROUTE_ONREPLY", "ROUTE_BRANCH", "ROUTE_ERROR", "ROUTE_LOCAL",
  "ROUTE_STARTUP", "ROUTE_TIMER", "ROUTE_EVENT", "SET_HOST",
  "SET_HOSTPORT", "PREFIX", "STRIP", "STRIP_TAIL", "APPEND_BRANCH",
  "REMOVE_BRANCH", "PV_PRINTF", "SET_USER", "SET_USERPASS", "SET_PORT",
  "SET_URI", "REVERT_URI", "SET_DSTURI", "RESET_DSTURI", "ISDSTURISET",
  "FORCE_RPORT", "FORCE_LOCAL_RPORT", "FORCE_TCP_ALIAS", "IF", "ELSE",
  "SWITCH", "CASE", "DEFAULT", "SBREAK", "WHILE", "FOR", "IN",
  "SET_ADV_ADDRESS", "SET_ADV_PORT", "FORCE_SEND_SOCKET",
  "SERIALIZE_BRANCHES", "NEXT_BRANCHES", "USE_BLACKLIST",
  "UNUSE_BLACKLIST", "SETFLAG", "RESETFLAG", "ISFLAGSET", "SETBFLAG",
  "RESETBFLAG", "ISBFLAGSET", "METHOD", "PROTO", "AF", "IS_MYSELF",
  "MSGLEN", "NULLV", "CACHE_STORE", "CACHE_FETCH", "CACHE_COUNTER_FETCH",
  "CACHE_REMOVE", "CACHE_ADD", "CACHE_SUB", "CACHE_RAW_QUERY", "XDBG",
  "XLOG", "XLOG_BUF_SIZE", "XLOG_FORCE_COLOR", "XLOG_DEFAULT_LEVEL",
  "RAISE_EVENT", "SUBSCRIBE_EVENT", "CONSTRUCT_URI", "GET_TIMESTAMP",
  "SCRIPT_TRACE", "FORK", "DEBUG_MODE", "DEBUG", "ENABLE_ASSERTS",
  "ABORT_ON_ASSERT", "LOGLEVEL", "LOGSTDERROR", "LOGFACILITY", "LOGNAME",
  "AVP_ALIASES", "LISTEN", "MEMGROUP", "ALIAS", "AUTO_ALIASES", "DNS",
  "REV_DNS", "DNS_TRY_IPV6", "DNS_TRY_NAPTR", "DNS_RETR_TIME",
  "DNS_RETR_NO", "DNS_SERVERS_NO", "DNS_USE_SEARCH", "MAX_WHILE_LOOPS",
  "CHILDREN", "CHECK_VIA", "SHM_HASH_SPLIT_PERCENTAGE",
  "SHM_SECONDARY_HASH_SIZE", "MEM_WARMING_ENABLED",
  "MEM_WARMING_PATTERN_FILE", "MEM_WARMING_PERCENTAGE", "MEMLOG",
  "MEMDUMP", "EXECMSGTHRESHOLD", "EXECDNSTHRESHOLD", "TCPTHRESHOLD",
  "EVENT_SHM_THRESHOLD", "EVENT_PKG_THRESHOLD", "QUERYBUFFERSIZE",
  "QUERYFLUSHTIME", "SIP_WARNING", "SOCK_MODE", "SOCK_USER", "SOCK_GROUP",
  "UNIX_SOCK", "UNIX_SOCK_CHILDREN", "UNIX_TX_TIMEOUT", "SERVER_SIGNATURE",
  "SERVER_HEADER", "USER_AGENT_HEADER", "LOADMODULE", "MPATH", "MODPARAM",
  "MAXBUFFER", "CHROOT", "WDIR", "MHOMED", "POLL_METHOD",
  "TCP_ACCEPT_ALIASES", "TCP_CHILDREN", "TCP_CONNECT_TIMEOUT",
  "TCP_CON_LIFETIME", "TCP_LISTEN_BACKLOG", "TCP_MAX_CONNECTIONS",
  "TCP_NO_NEW_CONN_BFLAG", "TCP_KEEPALIVE", "TCP_KEEPCOUNT",
  "TCP_KEEPIDLE", "TCP_KEEPINTERVAL", "TCP_MAX_MSG_TIME",
  "ADVERTISED_ADDRESS", "ADVERTISED_PORT", "DISABLE_CORE", "OPEN_FD_LIMIT",
  "MCAST_LOOPBACK", "MCAST_TTL", "TOS", "DISABLE_DNS_FAILOVER",
  "DISABLE_DNS_BLACKLIST", "DST_BLACKLIST", "DISABLE_STATELESS_FWD",
  "DB_VERSION_TABLE", "DB_DEFAULT_URL", "DB_MAX_ASYNC_CONNECTIONS",
  "DISABLE_503_TRANSLATION", "SYNC_TOKEN", "ASYNC_TOKEN", "LAUNCH_TOKEN",
  "EQUAL", "EQUAL_T", "GT", "LT", "GTE", "LTE", "DIFF", "MATCH",
  "NOTMATCH", "COLONEQ", "PLUSEQ", "MINUSEQ", "SLASHEQ", "MULTEQ",
  "MODULOEQ", "BANDEQ", "BOREQ", "BXOREQ", "OR", "AND", "BOR", "BAND",
  "BXOR", "BLSHIFT", "BRSHIFT", "PLUS", "MINUS", "SLASH", "MULT", "MODULO",
  "NOT", "BNOT", "NUMBER", "ZERO", "ID", "STRING", "SCRIPTVAR", "IPV6ADDR",
  "IPV4ADDR", "IPNET", "COMMA", "SEMICOLON", "RPAREN", "LPAREN", "LBRACE",
  "RBRACE", "LBRACK", "RBRACK", "AS", "USE_CHILDREN", "DOT", "CR", "COLON",
  "ANY", "ANYCAST", "SCRIPTVARERR", "$accept", "cfg", "statements",
  "statement", "$@1", "$@2", "$@3", "$@4", "$@5", "$@6", "$@7", "$@8",
  "$@9", "listen_id", "proto", "port", "snumber", "phostport",
  "panyhostport", "alias_def", "id_lst", "listen_def", "any_proto",
  "multi_string", "blst_elem", "blst_elem_list", "assign_stm",
  "module_stm", "ip", "ipv4", "ipv6addr", "ipv6", "folded_string",
  "route_name", "route_stm", "failure_route_stm", "onreply_route_stm",
  "branch_route_stm", "error_route_stm", "local_route_stm",
  "startup_route_stm", "timer_route_stm", "event_route_stm", "exp",
  "equalop", "compop", "matchop", "intop", "strop", "script_var",
  "exp_elem", "exp_cond", "ipnet", "host_sep", "host", "assignop",
  "assignexp", "assign_cmd", "exp_stm", "stm", "actions", "action",
  "if_cmd", "while_cmd", "foreach_cmd", "switch_cmd", "switch_stm",
  "case_stms", "case_stm", "default_stm", "module_func_param",
  "route_param", "async_func", "cmd", YY_NULLPTR
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
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481
};
# endif

#define YYPACT_NINF -923

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-923)))

#define YYTABLE_NINF -371

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    4884,   -63,   -58,    26,    30,   244,   271,   272,   327,   339,
     380,   389,   392,   395,   406,   407,   419,   428,   441,   450,
      51,    53,    56,    57,    58,    59,   488,   509,   539,   540,
     543,   547,   551,   580,   581,   585,   586,   608,   615,   630,
     633,   634,   645,   653,   691,   698,   713,    98,   716,    46,
     717,   728,   735,   736,   778,   782,   792,   793,   815,   816,
     817,   818,   819,   823,   824,   825,   826,   827,   828,   829,
     830,   831,   832,   833,    63,    75,   834,   835,   836,   837,
     838,   839,  -923,   162,  4717,  -923,   239,   203,   544,   495,
     583,   618,   636,   892,   974,  -923,  -923,  -923,    50,   140,
     157,   808,   202,   400,   204,   205,   400,   206,   156,   100,
     194,   806,     8,   207,   208,   209,  -923,   810,  -923,   811,
    -923,   812,  -923,   813,  -923,   814,  -923,   820,   217,   218,
     219,   220,   222,   235,   117,   238,   237,   308,   243,   338,
     367,   368,   377,   388,   391,   412,   417,   166,   171,  -923,
    -923,   173,  -923,   843,   434,   142,   165,   436,   169,   438,
     444,   446,   457,   458,   459,   195,   460,   463,   468,   472,
     474,    68,   475,   476,   493,   494,   496,   198,  -923,   821,
    -923,   847,   846,   849,   174,   175,   498,   499,  -923,   -63,
    -923,    18,  -923,    39,  -923,    28,  -923,    40,  -923,    69,
    -923,    71,  -923,    76,  -923,    42,  -923,    44,  -923,  -923,
    -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,   850,   851,
    -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,
    -923,  -923,  -923,  -923,  1017,  -923,   796,  -158,   800,  -923,
     798,  -923,   799,  -923,  -923,  -923,   868,   802,  -923,   803,
    -923,   341,  -923,  -923,  -923,  -923,  -923,   -52,  -923,  -923,
    -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,
    -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,
    -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,
    -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,
    -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,
    -923,  -923,  -923,  -923,   844,  -923,  -923,  -923,  -923,  -923,
    -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,
    -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,
    -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,
    -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,
    -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,
    -923,   805,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,
    -923,  -923,  4584,   265,  -923,   265,  -923,  4584,   265,  -923,
     265,  -923,  4584,  -923,  4584,  -923,  4584,  -923,   265,  -923,
     265,  -923,  -923,  -923,   507,   405,   875,   859,   877,   176,
     865,   405,   405,  -923,  -923,   197,   893,   891,   884,    48,
      74,   887,   888,   898,   899,    78,    79,    80,    83,    84,
      85,    88,    89,   900,   907,   917,    91,    93,    94,    97,
     918,    99,   919,   920,   921,   922,   923,  3412,   924,  3412,
     945,   102,   114,   115,   118,   119,   120,   122,   123,   124,
     126,   127,   135,   136,   947,   948,   949,   952,   966,   967,
     968,   970,   971,   981,   982,   983,   989,   990,   993,   994,
     995,   137,  -923,  -923,  -923,   546,   998,  1036,  -923,  -923,
    -923,  -923,  -923,   113,  -923,  -923,  -923,   996,   997,  1119,
     999,  1000,  1333,  1416,  1630,  1001,   304,   807,   809,   415,
    -923,  1008,  -923,  -923,  1007,  -923,  -923,  1002,  -923,  -923,
    1005,  -146,  -923,   104,  -923,   177,  1006,  3412,  1009,   311,
    -923,   170,  -923,   178,  -923,    49,  -923,   179,  -923,   180,
    -923,   181,  -923,   501,  -923,   502,   366,   309,   -14,  -923,
     182,  -923,   184,  -923,   185,  -923,   187,  1010,  -923,   188,
    1011,  1013,  1014,  1015,   132,  3412,  3412,  3706,  3787,  -923,
    3493,   740,  -923,  -923,  -923,  -923,  -923,  -923,   -67,  3493,
     -67,  -923,    73,  -923,   153,  -923,   201,  -923,   505,  -923,
      70,  -923,   189,  -923,   190,  -923,   -96,  -923,   427,  -923,
     445,  -923,   449,  -923,   471,  -923,   489,  1023,  1024,  1025,
    1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,  1038,
     -67,    -9,  1016,  1016,  -923,   151,   965,   969,  -923,  -923,
    -923,  -923,  -923,  -923,  -923,  -923,  3787,  -923,  -923,  -923,
    -923,  -923,  -923,  1035,  1039,  -923,  1040,  1041,  -923,  -923,
    -923,  1042,   -18,  1043,  -137,    23,  1044,  -137,  1022,  -923,
    -923,    34,   386,  1037,   351,  -923,    64,  1046,  1047,  -923,
    1048,   482,  -923,   -43,  -923,  -923,  1050,  1051,  1052,  1053,
    1056,  1055,  1058,  1057,   508,  1059,  1060,  1061,  1062,  1063,
    1064,  1065,  1066,  1067,  1068,   512,  -923,  1069,  1070,  1073,
    1074,  1077,  1078,  1079,  1080,  1081,  1082,  1083,  1084,  -923,
    1085,  1086,  -923,  -923,  -923,  -923,  1087,  1088,  -923,  -923,
    -107,  -923,  1713,  3787,  -923,  3787,  -923,   662,  -923,   334,
    -923,  3412,  3412,  3999,  1180,  -923,  -923,  -923,  -923,  -923,
    -923,  -923,  -923,  -923,   399,   314,  -923,   400,   347,  1089,
    -923,   986,  1090,  1091,  1092,  1093,  1094,  1095,  1096,  1097,
     525,  1098,  -923,  1099,  1100,  1101,  1102,  1103,  1104,  1105,
    1106,  1107,  1108,   589,  1109,   604,  1110,   672,  1112,   687,
    1075,  1076,  1116,  1117,  1118,  1121,  1122,   382,   387,   363,
     418,   734,  1135,  1136,  1137,  1138,  -923,   138,  1139,   737,
    1160,  -923,  -923,  -150,  -923,   741,  -923,  -923,   738,  4584,
    4584,  4584,  4584,  1133,  1134,  1157,  4584,  -923,  -923,  -923,
    -923,  -923,  -923,  -147,  1054,  -923,  -923,  1163,  1164,   351,
    -923,  -923,  1169,  -923,  -146,  -923,  -923,  -923,  -923,  1124,
    -923,  1188,  -923,  -923,  -923,  -923,  1189,  -923,  1190,  -923,
     361,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,
    -923,  -923,  1192,  -923,  -923,  -923,  1193,  1203,  -923,  -923,
    -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,
    -923,  -923,  -923,   490,  3787,  3787,  3787,  3787,  3787,  3787,
    3787,  3787,  3787,  3787,  -923,  -923,  -923,  -923,  1927,  4080,
    -923,  -923,  -923,  -923,  -923,  -923,  -923,  1195,   -67,  -923,
    -923,  -923,  -923,  -923,  -923,  -923,  -923,  1208,  -923,  -923,
    -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,
     504,  -923,  -923,   753,  -923,  -923,   754,  -923,  -923,  1212,
    -923,  1222,  1223,  1224,  1225,  1226,  1227,  1228,  -923,  -923,
    -923,  -923,  1229,  -923,  -923,   -67,  -923,  1250,  1252,   -67,
    1253,  -923,   152,   265,   265,  -923,  -923,  -923,  -923,   342,
    -923,  2010,  2224,  2307,  2521,  1245,  1248,  1262,  2604,  1275,
    1259,  -923,  -923,  -923,  1270,   447,  -923,  1269,  1279,  1280,
    1281,  -923,  -923,  -923,  -923,   749,  1287,  1288,  1291,  -923,
     743,   743,   743,   743,   743,  -923,  -923,  -923,  -923,  -923,
    -923,  -923,  1204,  1292,  1293,  1294,  1295,  1296,  1297,  1298,
    1299,  1300,  1303,  1304,  1305,  1306,  1307,  1309,   755,   452,
     485,   756,   759,  1310,  1311,   760,  1312,  -923,   763,  1313,
    1314,  -923,  -923,  -923,  -923,  -923,  -923,  4584,  4584,  4584,
    -923,  -923,  1319,   447,  1317,  -923,  -923,  -923,  -923,   378,
    -923,  -923,  -923,  -923,   430,  1301,   424,  -923,  4080,  -923,
    -923,  -923,  -923,  -923,  -923,  -923,  -923,  1323,   -67,   -67,
    -923,   310,   335,  1324,  -923,  -923,  -923,   -67,  -923,  1320,
    -923,  1325,  -923,  1326,  -923,  -923,  -923,  -923,  -923,  2818,
    2901,  3115,  -923,  1322,  -137,  -923,  -923,  -923,  -923,  1316,
    1318,  -923,  1321,  -923,  -923,  -923,   764,  1329,  1330,  1335,
    1336,  1337,  1339,  1338,  1340,  1341,  1344,  1343,  -923,  -923,
    -923,  -137,  1346,  4293,  4374,  4584,   336,  -923,  -923,  -923,
    1331,  1332,  1334,  1349,  -923,  -923,  -923,  1352,  -923,  1350,
    1354,  1351,   739,  1353,   822,  3198,  1355,  1356,   767,   768,
     771,   772,  1359,  1358,  1360,  -923,  1362,  -923,  1363,  -923,
    -923,   -67,  -923,   -67,  -923,   -67,  -923,   -67,  -923,  1361,
    1364,  -923,  -923,  -923,  1365,  1366,  1367,  1368,  1371,  -923,
    -923,  -923,  -923,  -923,   -67,  1370,  -923
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,     0,     4,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     6,     7,   228,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,     0,    94,     0,
      96,     0,    98,     0,   100,     0,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   230,
     229,     0,   233,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   215,     0,
     217,     0,     0,     0,     0,     0,     0,     0,     1,     5,
       3,     0,     9,     0,    11,     0,    13,     0,    15,     0,
      17,     0,    19,     0,    21,     0,    23,     0,    25,   186,
     183,   187,   184,   188,   185,    73,    80,    79,     0,     0,
      33,    72,    76,    75,    78,    77,    74,    82,    81,    84,
      83,    86,    85,   190,     0,    30,     0,    51,    49,   189,
       0,   194,   301,    28,   237,   236,     0,     0,    42,     0,
      46,    47,   193,    27,   234,   238,   235,    29,   196,   195,
      88,    87,    90,    89,    91,    93,    95,    97,    99,   101,
     104,   103,   108,   107,   110,   109,   112,   111,   114,   113,
     116,   115,   118,   117,   120,   119,   122,   121,   124,   123,
     126,   125,   128,   127,   130,   129,   132,   131,   134,   133,
     136,   135,   138,   137,   140,   139,   178,   177,   180,   179,
     182,   181,   213,   212,     0,   106,   105,   143,   142,   141,
     146,   145,   144,   148,   147,   151,   149,   150,   153,   152,
     155,   154,   157,   156,   159,   158,   161,   160,   163,   162,
     166,   164,   165,   168,   167,   172,   171,   174,   173,   176,
     175,   170,   169,   198,   301,   197,   200,   199,   202,   201,
     204,   203,   206,   205,   208,   207,   211,   209,   210,   214,
     216,     0,   219,   221,   220,   223,   222,   225,   224,   227,
     226,   247,     0,     0,   249,     0,   252,     0,     0,   254,
       0,   256,     0,   258,     0,   260,     0,   262,     0,   266,
       0,    34,    35,    39,     0,     0,     0,    52,     0,     0,
       0,     0,     0,    48,   300,     0,     0,     0,     0,     0,
       0,   402,     0,   404,   408,     0,     0,     0,     0,     0,
       0,     0,     0,   459,     0,     0,     0,     0,     0,     0,
     480,     0,   485,   487,   489,   491,   494,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   286,   351,   287,     0,     0,     0,   343,   346,
     347,   348,   349,     0,   243,   242,   244,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    40,    36,    55,
      53,     0,    50,   192,    65,   191,   239,    43,   303,   302,
       0,     0,   394,     0,   398,     0,     0,     0,     0,     0,
     411,     0,   438,     0,   442,     0,   445,     0,   465,     0,
     448,     0,   454,     0,   451,     0,     0,     0,     0,   471,
       0,   474,     0,   468,     0,   477,     0,     0,   482,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   290,
       0,   291,   272,   288,   336,   289,   335,   334,     0,     0,
       0,   498,     0,   502,     0,   505,     0,   509,     0,   512,
       0,   515,     0,   518,     0,   415,     0,   418,     0,   421,
       0,   426,     0,   431,     0,   436,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   538,     0,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,     0,   350,   344,   245,
     342,   352,   345,     0,     0,   250,     0,     0,   255,   257,
     259,     0,     0,     0,     0,     0,     0,     0,    56,    54,
      66,     0,     0,     0,     0,    70,     0,     0,     0,   393,
       0,     0,   401,     0,   403,   407,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   458,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   479,
       0,     0,   484,   486,   488,   490,     0,     0,   493,   269,
       0,   338,     0,     0,   315,     0,   314,   316,   317,     0,
     318,     0,     0,     0,   353,   339,   273,   275,   276,   277,
     278,   274,   279,   280,   281,   282,   285,     0,     0,     0,
     355,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   510,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   552,     0,     0,     0,
       0,   377,   372,   374,   535,     0,   332,   333,   331,     0,
       0,     0,     0,     0,     0,     0,     0,    31,    32,    41,
      38,    37,    57,    59,     0,    45,    44,     0,     0,     0,
      63,    64,     0,    71,     0,   218,   395,   392,   399,     0,
     396,     0,   405,   406,   412,   409,     0,   439,     0,   443,
       0,   440,   446,   444,   466,   464,   449,   447,   455,   453,
     452,   450,     0,   457,   460,   461,     0,     0,   472,   470,
     475,   473,   469,   467,   478,   476,   483,   481,   495,   492,
     270,   337,   329,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   271,   268,   267,   341,     0,     0,
     295,   297,   298,   296,   294,   293,   292,     0,     0,   497,
     496,   501,   499,   500,   504,   503,   508,     0,   506,   511,
     514,   513,   517,   516,   413,   414,   416,   417,   419,   420,
       0,   424,   425,     0,   429,   430,     0,   434,   435,     0,
     558,     0,     0,     0,     0,     0,     0,     0,   240,   539,
     241,   540,     0,   541,   542,     0,   545,     0,     0,     0,
       0,   391,     0,     0,     0,   557,   537,   378,   375,   376,
     536,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      60,    58,   231,   232,     0,     0,    69,     0,     0,     0,
       0,   382,   381,   380,   383,     0,     0,     0,     0,   330,
     325,   324,   326,   327,   328,   319,   320,   322,   321,   323,
     340,   354,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   388,     0,     0,
       0,   379,   373,   246,   248,   251,   253,     0,     0,     0,
     263,    61,     0,     0,     0,   397,   400,   410,   437,     0,
     441,   456,   462,   463,     0,     0,   359,   361,     0,   507,
     422,   423,   427,   428,   432,   433,   559,     0,     0,     0,
     522,     0,     0,     0,   534,   543,   544,     0,   546,     0,
     548,     0,   551,     0,   553,   390,   389,   555,   556,     0,
       0,     0,    62,     0,     0,   387,   385,   384,   386,     0,
       0,   357,     0,   360,   358,   356,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   261,   264,
     265,     0,     0,   369,   365,   371,     0,   519,   523,   524,
       0,     0,     0,     0,   533,   547,   549,     0,   554,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   367,     0,   363,     0,   520,
     521,     0,   525,     0,   526,     0,   529,     0,   530,     0,
       0,    67,   366,   362,     0,     0,     0,     0,     0,    68,
     527,   528,   531,   532,     0,     0,   550
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -923,  -923,  -923,  1165,  -923,  -923,  -923,  -923,  -923,  -923,
    -923,  -923,  -923,  -163,  -109,  -630,  -103,  -108,  -923,  -923,
     785,  -923,   442,  1111,   702,  -923,  -923,  -923,  -734,  -923,
    1342,  -923,  -610,  -362,  -923,  -923,  -923,  -923,  -923,  -923,
    -923,  -923,  -923,  -431,  -923,  -923,  -923,  -923,  -923,  -436,
    -923,  -417,  -922,  -923,  -923,  -923,  -621,  -410,  -923,  -575,
    -380,  -482,  -401,  -923,  -923,  -923,  -923,  -923,   500,  -923,
     291,  -923,   939,  -405
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,   248,   249,   819,   726,   250,   238,   251,
     252,   239,   832,   515,   665,   666,    95,    96,   253,   254,
     255,   256,   788,   497,   192,   194,   196,   198,   200,   202,
     204,   206,   208,   570,   744,   745,   746,   747,   748,   485,
     572,   728,   903,   416,   257,   636,   729,   486,   575,   734,
     487,   488,   489,   490,   491,   492,  1065,  1066,  1067,  1114,
     805,   995,   798,   493
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     221,   236,   237,   226,   750,   640,   790,   499,   355,   241,
     902,   571,   502,   571,   503,   808,   504,   640,   579,   381,
     640,   640,   640,   498,   820,   821,   500,   823,   501,   386,
     573,   826,   573,   287,   289,   825,   505,   574,   506,   574,
     384,   389,   577,   397,   577,   399,   576,   152,   576,   522,
     683,   209,   116,   967,   118,   663,   968,   120,   122,   124,
     126,   405,   406,  1054,   178,   833,   817,   407,   664,   353,
     391,   761,   393,   979,   752,   524,   180,   395,   980,   530,
     532,   534,   731,   732,   536,   538,   540,   818,   735,   542,
     544,   571,   549,   677,   551,   553,   673,   735,   555,   149,
     558,   231,   882,   581,   883,   667,   880,   767,    97,   768,
     573,   698,   700,    98,   641,   583,   585,   574,   282,   587,
     589,   591,   577,   593,   595,   597,   576,   599,   601,   571,
     571,  1103,   727,   716,   719,   720,   603,   605,   624,   961,
     482,   211,   749,   317,   751,   414,   731,   732,   573,   573,
     814,   815,   800,  1036,   754,   574,   574,   229,   213,   484,
     577,   577,   188,   730,   576,   576,   320,   308,   841,   415,
     325,   678,   310,   684,   312,   373,   375,   513,   670,   681,
     685,   687,   689,   701,   794,   703,   705,   722,   707,   710,
     763,   765,   699,   482,   795,   233,   340,    99,   518,   366,
     727,   100,   757,   216,   796,   222,   224,   227,   258,   260,
     262,   234,   484,   242,   243,   193,   244,   245,   270,   272,
     274,   276,   117,   278,   119,   246,   817,   121,   123,   125,
     127,   730,   247,   382,   179,   383,   280,   817,   286,   284,
     640,   508,   509,   387,   290,   388,   181,   818,   517,   508,
     191,   902,   494,   210,   495,   496,   385,   390,   818,   398,
     153,   400,   523,  1000,  1001,  1002,  1003,  1004,  1005,  1006,
    1007,  1008,  1009,   354,   243,   834,   244,   245,   354,   243,
     835,   244,   245,   762,   392,   246,   394,   727,   525,   727,
     246,   396,   531,   533,   535,   571,   571,   537,   539,   541,
     895,   896,   543,   545,   150,   550,   232,   552,   554,   288,
     668,   556,   906,   559,   573,   573,   582,   669,   730,   902,
     730,   574,   574,   283,  1011,   642,   577,   577,   584,   586,
     576,   576,   588,   590,   592,   717,   594,   596,   598,   292,
     600,   602,  1030,   212,   569,   718,   569,   318,   319,   604,
     606,   625,   962,   898,   801,   801,   755,   802,   802,   756,
     214,   230,   803,   803,   804,  1037,   218,   219,   294,   296,
     321,   322,   309,   220,   326,   327,   679,   311,   298,   313,
     374,   376,   514,   671,   682,   686,   688,   690,   702,   300,
     704,   706,   302,   708,   711,   764,   766,   234,   341,   235,
     342,   367,  -299,   368,   234,   217,   235,   223,   225,   228,
     259,   261,   263,   304,   994,   101,   640,   735,   306,   753,
     271,   273,   275,   277,   569,   279,   676,   991,   680,   971,
     972,   973,   974,   218,   219,   315,   978,   323,   281,   328,
     220,   285,   102,   103,  1105,   330,   291,   332,   727,   727,
     727,   727,   727,   727,   727,   727,   727,   727,   334,   336,
     338,   343,   569,   569,   345,   900,  1064,  1112,   494,   347,
     495,   496,  1013,   349,  1132,   351,   356,   358,   758,   730,
     730,   730,   730,   730,   730,   730,   730,   730,   730,   640,
     640,   640,   640,  1115,   360,   362,   640,   364,   104,   377,
     379,  1149,   691,   693,   218,   219,   759,   218,   219,   197,
     105,   220,   697,  1119,   220,   652,   482,   482,   482,  1031,
    -284,  -284,   653,  1034,   675,   884,   885,   886,   887,   888,
     889,   890,   891,   892,   893,   484,   484,   484,  1121,  1156,
    -284,   293,   482,   482,   234,  1041,   242,   243,  1042,   244,
     245,   106,   894,   905,   482,   831,   235,   195,   246,   828,
     107,   484,   484,   108,   992,   247,   109,   993,   482,   948,
     295,   297,   695,   484,   952,   830,   953,   110,   111,   696,
     299,  1106,   218,   219,  1107,   482,   735,   484,   948,   220,
     112,   301,   827,   950,   303,   949,   218,   219,   199,   113,
     951,  1039,  1040,   220,   484,  -283,  -283,   244,   245,   901,
     354,   243,   114,   244,   245,   305,   246,   640,   640,   640,
     307,   115,   246,  1108,   950,  -283,   218,   219,   569,   569,
     769,   954,   770,   220,   201,   656,  1109,   316,   657,   324,
     658,   329,  1117,  1118,   904,  1120,  1122,   331,   771,   333,
     772,  1124,   773,   203,   774,   244,   245,   901,   948,   128,
     335,   337,   339,   344,   246,  1085,   346,  1099,  1100,  1101,
     640,   348,   640,   640,   775,   350,   776,   352,   357,   359,
     129,   884,   885,   886,   887,   888,   889,   890,   891,   892,
     893,   950,   777,   839,   778,   840,   361,   363,  1086,   365,
    1157,   378,   380,   999,   692,   694,   507,  1015,   760,  1016,
     130,   131,   354,   243,   132,   244,   245,   626,   133,   850,
     831,   851,   134,   862,   246,   863,   627,   628,   629,   630,
     631,   632,   633,   634,   635,  1184,   917,  1185,   918,  1186,
     638,  1187,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   135,   136,  1152,  1154,  1155,   137,   138,  1195,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   139,
     448,  -368,  -368,  1166,   449,   450,   140,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     930,   141,   931,   464,   142,   143,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   933,   144,   934,   474,   475,
     476,   477,   478,   638,   145,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   736,   737,   738,   739,   740,   741,
     742,   743,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   146,   448,  -364,  -364,  1168,   449,   450,   147,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   936,   148,   937,   464,   151,   154,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   939,   155,
     940,   474,   475,   476,   477,   478,   156,   157,   479,   480,
     205,   626,   736,   737,   738,   739,   740,   741,   742,   743,
     627,   628,   629,   630,   631,   632,   633,   634,   635,   884,
     885,   886,   887,   888,   889,   890,   891,   892,   893,   889,
     890,   891,   892,   893,   481,   955,   482,   956,   964,   158,
     965,   483,   969,   159,   970,  -368,  1017,  1019,  1018,  1020,
    1059,  1110,  1060,   160,   161,   484,  1083,  1087,  1084,  1088,
    1089,  1093,  1090,  1094,   969,  1136,  1096,  1137,  1171,  1173,
    1172,  1174,  1175,  1177,  1176,  1178,   162,   163,   164,   165,
     166,   479,   480,   207,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   182,   183,   184,   185,   186,
     187,   215,   240,   264,   265,   266,   267,   268,   403,   404,
     408,   409,   -30,   269,   369,   411,   412,   481,   418,   482,
     654,   806,   655,   908,   483,   807,   413,   638,  -364,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   484,   314,
     370,   371,   372,   401,   402,   417,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   244,   448,   510,   511,
     512,   449,   450,   516,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   520,   519,   521,
     464,   526,   527,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   528,   529,   546,   474,   475,   476,   477,   478,
     638,   547,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   548,   557,   560,   561,   562,   563,   564,   578,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   580,
     448,   607,   608,   609,   449,   450,   610,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     611,   612,   613,   464,   614,   615,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   616,   617,   618,   474,   475,
     476,   477,   478,   619,   620,   479,   480,   621,   622,   623,
     637,   659,   651,   514,   643,   644,   662,   646,   647,   672,
     899,   797,   674,   709,   712,   661,   713,   714,   715,   779,
     780,   781,   782,   783,   784,   785,   786,   787,   789,   791,
     792,   481,   824,   482,   793,   813,  1064,   822,   483,   190,
     809,   829,   639,  1038,   810,   811,   812,   981,   816,   836,
     837,   838,   484,   842,   843,   844,   845,   846,   847,   848,
     849,   984,   852,   853,   854,   855,   856,   857,   858,   859,
     860,   861,   864,   865,   866,   867,   941,   942,   479,   480,
     868,   869,   870,   871,   872,   873,   874,   875,   876,   877,
     878,   879,   907,   909,   910,   911,   912,   913,   914,   915,
     916,   919,   920,   921,   922,   923,   924,   925,   926,   927,
     928,   929,   932,   935,   481,   938,   482,   943,   944,   945,
     987,   483,   946,   947,   638,   645,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   484,   957,   958,   959,   960,
     963,   975,   976,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   966,   448,   977,   982,   983,   449,   450,
     985,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   988,   989,   990,   464,   996,   997,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   998,
    1012,  1014,   474,   475,   476,   477,   478,   638,  1021,   419,
     420,   421,   422,   423,   424,   425,   426,   427,  1022,  1023,
    1024,  1025,  1026,  1027,  1028,  1029,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,   446,   447,  1032,   448,  1033,  1035,
    1047,   449,   450,  1048,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,  1049,  1051,  1052,
     464,  1053,  1055,   465,   466,   467,   468,   469,   470,   471,
     472,   473,  1056,  1057,  1058,   474,   475,   476,   477,   478,
    1061,  1062,   479,   480,  1063,  1068,  1069,  1070,  1071,  1072,
    1073,  1074,  1075,  1076,  1077,  1078,  1079,  1111,  1081,  1080,
    1082,  1091,  1102,  1125,  1092,  1095,  1097,  1098,  1104,  1116,
    1123,  1126,  1127,  1131,  1158,  1159,   986,  1160,   481,  1133,
     482,  1134,  1138,  1139,  1135,   483,  1140,  1141,  1142,   648,
    1143,  1144,  1161,  1145,  1146,  1147,  1148,  1150,  1162,   484,
    1164,  1163,   799,  1165,  1180,  1167,  1113,  1188,  1169,  1170,
    1179,     0,     0,  1181,  1182,  1183,     0,  1189,  1190,  1191,
    1192,  1193,  1194,  1196,     0,   479,   480,     0,   410,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   481,     0,   482,     0,   660,     0,     0,   483,     0,
       0,   638,   649,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   484,     0,     0,     0,     0,     0,     0,     0,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
       0,   448,     0,     0,     0,   449,   450,     0,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,     0,     0,     0,   464,     0,     0,   465,   466,   467,
     468,   469,   470,   471,   472,   473,     0,     0,     0,   474,
     475,   476,   477,   478,   638,     0,   419,   420,   421,   422,
     423,   424,   425,   426,   427,     0,     0,     0,     0,     0,
       0,     0,     0,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,     0,   448,     0,     0,     0,   449,   450,
       0,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,     0,     0,     0,   464,     0,     0,
     465,   466,   467,   468,   469,   470,   471,   472,   473,     0,
       0,     0,   474,   475,   476,   477,   478,     0,     0,   479,
     480,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   481,     0,   482,     0,     0,
       0,     0,   483,     0,     0,     0,   650,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   484,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   479,   480,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   481,     0,
     482,     0,     0,     0,     0,   483,     0,     0,   638,   881,
     419,   420,   421,   422,   423,   424,   425,   426,   427,   484,
       0,     0,     0,     0,     0,     0,     0,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   447,     0,   448,     0,
       0,     0,   449,   450,     0,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,     0,     0,
       0,   464,     0,     0,   465,   466,   467,   468,   469,   470,
     471,   472,   473,     0,     0,     0,   474,   475,   476,   477,
     478,   638,     0,   419,   420,   421,   422,   423,   424,   425,
     426,   427,     0,     0,     0,     0,     0,     0,     0,     0,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
       0,   448,     0,     0,     0,   449,   450,     0,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,     0,     0,     0,   464,     0,     0,   465,   466,   467,
     468,   469,   470,   471,   472,   473,     0,     0,     0,   474,
     475,   476,   477,   478,     0,     0,   479,   480,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   481,     0,   482,     0,     0,     0,     0,   483,
       0,     0,     0,  1010,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   484,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   479,
     480,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   481,     0,   482,     0,     0,
       0,     0,   483,     0,     0,   638,  1043,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   484,     0,     0,     0,
       0,     0,     0,     0,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,     0,   448,     0,     0,     0,   449,
     450,     0,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,     0,     0,     0,   464,     0,
       0,   465,   466,   467,   468,   469,   470,   471,   472,   473,
       0,     0,     0,   474,   475,   476,   477,   478,   638,     0,
     419,   420,   421,   422,   423,   424,   425,   426,   427,     0,
       0,     0,     0,     0,     0,     0,     0,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   447,     0,   448,     0,
       0,     0,   449,   450,     0,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,     0,     0,
       0,   464,     0,     0,   465,   466,   467,   468,   469,   470,
     471,   472,   473,     0,     0,     0,   474,   475,   476,   477,
     478,     0,     0,   479,   480,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   481,
       0,   482,     0,     0,     0,     0,   483,     0,     0,     0,
    1044,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     484,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   479,   480,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   481,     0,   482,     0,     0,     0,     0,   483,
       0,     0,   638,  1045,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   484,     0,     0,     0,     0,     0,     0,
       0,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,     0,   448,     0,     0,     0,   449,   450,     0,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,     0,     0,     0,   464,     0,     0,   465,   466,
     467,   468,   469,   470,   471,   472,   473,     0,     0,     0,
     474,   475,   476,   477,   478,   638,     0,   419,   420,   421,
     422,   423,   424,   425,   426,   427,     0,     0,     0,     0,
       0,     0,     0,     0,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,     0,   448,     0,     0,     0,   449,
     450,     0,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,     0,     0,     0,   464,     0,
       0,   465,   466,   467,   468,   469,   470,   471,   472,   473,
       0,     0,     0,   474,   475,   476,   477,   478,     0,     0,
     479,   480,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   481,     0,   482,     0,
       0,     0,     0,   483,     0,     0,     0,  1046,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   484,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   479,   480,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   481,
       0,   482,     0,     0,     0,     0,   483,     0,     0,   638,
    1050,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     484,     0,     0,     0,     0,     0,     0,     0,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   443,   444,   445,   446,   447,     0,   448,
       0,     0,     0,   449,   450,     0,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,     0,
       0,     0,   464,     0,     0,   465,   466,   467,   468,   469,
     470,   471,   472,   473,     0,     0,     0,   474,   475,   476,
     477,   478,   638,     0,   419,   420,   421,   422,   423,   424,
     425,   426,   427,     0,     0,     0,     0,     0,     0,     0,
       0,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,     0,   448,     0,     0,     0,   449,   450,     0,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,     0,     0,     0,   464,     0,     0,   465,   466,
     467,   468,   469,   470,   471,   472,   473,     0,     0,     0,
     474,   475,   476,   477,   478,     0,     0,   479,   480,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   481,     0,   482,     0,     0,     0,     0,
     483,     0,     0,     0,  1128,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   484,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     479,   480,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   481,     0,   482,     0,
       0,     0,     0,   483,     0,     0,   638,  1129,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   484,     0,     0,
       0,     0,     0,     0,     0,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,     0,   448,     0,     0,     0,
     449,   450,     0,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,     0,     0,     0,   464,
       0,     0,   465,   466,   467,   468,   469,   470,   471,   472,
     473,     0,     0,     0,   474,   475,   476,   477,   478,   638,
       0,   419,   420,   421,   422,   423,   424,   425,   426,   427,
       0,     0,     0,     0,     0,     0,     0,     0,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   443,   444,   445,   446,   447,     0,   448,
       0,     0,     0,   449,   450,     0,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,     0,
       0,     0,   464,     0,     0,   465,   466,   467,   468,   469,
     470,   471,   472,   473,     0,     0,     0,   474,   475,   476,
     477,   478,     0,     0,   479,   480,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     481,     0,   482,     0,     0,     0,     0,   483,     0,     0,
       0,  1130,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   484,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   479,   480,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   481,     0,   482,     0,     0,     0,     0,
     483,     0,     0,     0,  -370,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   484,     0,     0,     0,     0,     0,
       0,     0,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,     0,     0,     0,     0,     0,     0,     0,     0,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,     0,     0,     0,   464,     0,     0,   465,
     466,   467,   468,   469,   470,   471,   472,   473,     0,     0,
       0,   474,   475,   476,   477,   478,   419,   420,   421,   422,
     423,   424,   425,   426,   427,     0,     0,     0,     0,     0,
       0,     0,     0,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,     0,   448,     0,     0,     0,   449,   450,
       0,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,     0,     0,     0,   464,     0,     0,
     465,   466,   467,   468,   469,   470,   471,   472,   473,     0,
       0,     0,   474,   475,   476,   477,   478,     0,     0,     0,
       0,   479,   480,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   218,   219,
       0,     0,     0,   565,     0,   220,     0,   481,     0,   482,
       0,     0,     0,     0,     0,     0,   566,   567,     0,   568,
       0,     0,     0,     0,     0,     0,     0,     0,   484,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   479,   480,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   731,   732,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   481,     0,
     482,     0,     0,     0,     0,   483,     0,     0,   733,   419,
     420,   421,   422,   423,   424,   425,   426,   427,     0,   484,
       0,     0,     0,     0,     0,     0,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,   446,   447,     0,   448,     0,     0,
       0,   449,   450,     0,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,     0,     0,     0,
     464,     0,     0,   465,   466,   467,   468,   469,   470,   471,
     472,   473,     0,     0,     0,   474,   475,   476,   477,   478,
     419,   420,   421,   422,   423,   424,   425,   426,   427,     0,
       0,     0,     0,     0,     0,     0,     0,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   446,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,     0,     0,
       0,   464,     0,     0,   465,   466,   467,   468,   469,   470,
     471,   472,   473,     0,     0,     0,   474,   475,   476,   477,
     478,     0,     0,     0,     0,   479,   480,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   481,     0,   482,     0,     0,     0,     0,   483,     0,
       0,     0,   721,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   484,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   479,   480,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   218,   219,     0,     0,     0,     0,   723,
     220,     0,   481,   724,   482,     0,     0,     0,     0,     0,
       0,   725,   419,   420,   421,   422,   423,   424,   425,   426,
     427,     0,     0,   484,     0,     0,     0,     0,     0,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,     0,
     448,     0,     0,     0,   449,   450,     0,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
       0,     0,     0,   464,     0,     0,   465,   466,   467,   468,
     469,   470,   471,   472,   473,     0,     0,     0,   474,   475,
     476,   477,   478,   419,   420,   421,   422,   423,   424,   425,
     426,   427,     0,     0,     0,     0,     0,     0,     0,     0,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
       0,   448,     0,     0,     0,   449,   450,     0,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,     0,     0,     0,   464,     0,     0,   465,   466,   467,
     468,   469,   470,   471,   472,   473,     0,     0,     0,   474,
     475,   476,   477,   478,     0,     0,     0,     0,   479,   480,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   481,     0,   482,     0,     0,     0,
       0,   483,     0,     0,     0,   897,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   484,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   479,
     480,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   481,     0,   482,     0,     0,
       0,     0,   483,     0,     0,   733,   419,   420,   421,   422,
     423,   424,   425,   426,   427,     0,   484,     0,     0,     0,
       0,     0,     0,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,     0,   448,     0,     0,  1151,   449,   450,
       0,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,     0,     0,     0,   464,     0,     0,
     465,   466,   467,   468,   469,   470,   471,   472,   473,     0,
       0,     0,   474,   475,   476,   477,   478,   419,   420,   421,
     422,   423,   424,   425,   426,   427,     0,     0,     0,     0,
       0,     0,     0,     0,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,     0,   448,     0,     0,  1153,   449,
     450,     0,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,     0,     0,     0,   464,     0,
       0,   465,   466,   467,   468,   469,   470,   471,   472,   473,
       0,     0,     0,   474,   475,   476,   477,   478,     0,     0,
       0,     0,   479,   480,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   481,     0,
     482,     0,     0,     0,     0,   483,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   484,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   479,   480,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   481,
       0,   482,     0,     0,     0,     0,   483,   419,   420,   421,
     422,   423,   424,   425,   426,   427,     0,     0,     0,     0,
     484,     0,     0,     0,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,     0,   448,     0,     0,     0,   449,
     450,     0,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,     0,     0,     0,   464,     0,
       0,   465,   466,   467,   468,   469,   470,   471,   472,   473,
       0,     0,     0,   474,   475,   476,   477,   478,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    -2,   189,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    -8,   -10,
     -12,   -14,   -16,   -18,   -20,   -22,   -24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   479,   480,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   481,
       0,   482,     0,     2,     3,     4,   483,     0,     0,     0,
       0,     5,     6,     7,     8,     9,    10,    11,    12,    13,
     484,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,     0,     0,     0,     0,     0,     0,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    -8,   -10,   -12,   -14,   -16,
     -18,   -20,   -22,   -24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     3,     4,     0,     0,     0,     0,     0,     5,     6,
       7,     8,     9,    10,    11,    12,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,     0,     0,
       0,     0,     0,     0,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    82
};

static const yytype_int16 yycheck[] =
{
     103,   110,   110,   106,   579,   487,   616,   387,   171,     1,
     744,   447,   392,   449,   394,   636,   396,   499,   449,     1,
     502,   503,   504,   385,     1,   655,   388,   657,   390,     1,
     447,   661,   449,   136,   137,     1,   398,   447,   400,   449,
       1,     1,   447,     1,   449,     1,   447,     1,   449,     1,
       1,     1,     1,   203,     1,   201,   206,     1,     1,     1,
       1,   219,   220,   985,     1,     1,   203,   225,   214,     1,
       1,     1,     1,   220,     1,     1,     1,     1,   225,     1,
       1,     1,   189,   190,     1,     1,     1,   224,   570,     1,
       1,   527,     1,   529,     1,     1,   527,   579,     1,     1,
       1,     1,   723,     1,   725,     1,   213,   203,   171,   205,
     527,   547,   548,   171,     1,     1,     1,   527,     1,     1,
       1,     1,   527,     1,     1,     1,   527,     1,     1,   565,
     566,  1053,   568,     1,   565,   566,     1,     1,     1,     1,
     207,     1,   578,     1,   580,   197,   189,   190,   565,   566,
     168,   169,     1,     1,     1,   565,   566,     1,     1,   226,
     565,   566,     0,   568,   565,   566,     1,     1,   211,   221,
       1,     1,     1,   535,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,   620,     1,     1,   567,     1,     1,
       1,     1,   206,   207,   203,     1,     1,   171,     1,     1,
     636,   171,     1,     1,   213,     1,     1,     1,     1,     1,
       1,   203,   226,   205,   206,    12,   208,   209,     1,     1,
       1,     1,   171,     1,   171,   217,   203,   171,   171,   171,
     171,   636,   224,   215,   171,   217,     1,   203,     1,     1,
     722,   404,   405,   215,     1,   217,   171,   224,   411,   412,
      11,   985,   203,   203,   205,   206,   217,   217,   224,   217,
     214,   217,   214,   884,   885,   886,   887,   888,   889,   890,
     891,   892,   893,   205,   206,   211,   208,   209,   205,   206,
     216,   208,   209,   213,   215,   217,   215,   723,   214,   725,
     217,   215,   214,   214,   214,   731,   732,   214,   214,   214,
     731,   732,   214,   214,   206,   214,   206,   214,   214,     1,
     206,   214,   748,   214,   731,   732,   214,   213,   723,  1053,
     725,   731,   732,   206,   899,   212,   731,   732,   214,   214,
     731,   732,   214,   214,   214,   203,   214,   214,   214,     1,
     214,   214,   952,   203,   447,   213,   449,   205,   206,   214,
     214,   214,   214,   733,   203,   203,   203,   206,   206,   206,
     203,   205,   211,   211,   213,   213,   196,   197,     1,     1,
     205,   206,   206,   203,   205,   206,   206,   206,     1,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   206,     1,
     206,   206,     1,   206,   206,   206,   206,   203,   203,   205,
     205,   203,   205,   205,   203,   203,   205,   203,   203,   203,
     203,   203,   203,     1,   850,   171,   898,   899,     1,   582,
     203,   203,   203,   203,   527,   203,   529,    66,   531,   809,
     810,   811,   812,   196,   197,     1,   816,     1,   203,     1,
     203,   203,   171,   171,    66,     1,   203,     1,   884,   885,
     886,   887,   888,   889,   890,   891,   892,   893,     1,     1,
       1,     1,   565,   566,     1,    66,    42,    43,   203,     1,
     205,   206,   908,     1,  1104,     1,     1,     1,   586,   884,
     885,   886,   887,   888,   889,   890,   891,   892,   893,   971,
     972,   973,   974,  1068,     1,     1,   978,     1,   171,     1,
       1,  1131,     1,     1,   196,   197,     1,   196,   197,    14,
     171,   203,   203,   203,   203,   211,   207,   207,   207,   955,
     206,   207,   218,   959,   213,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   226,   226,   226,   203,   203,
     226,   203,   207,   207,   203,   203,   205,   206,   206,   208,
     209,   171,   218,   206,   207,   664,   205,    13,   217,   662,
     171,   226,   226,   171,   203,   224,   171,   206,   207,   206,
     203,   203,   206,   226,   211,   224,   213,   171,   171,   213,
     203,   203,   196,   197,   206,   207,  1068,   226,   206,   203,
     171,   203,   206,   206,   203,   213,   196,   197,    15,   171,
     213,   963,   964,   203,   226,   206,   207,   208,   209,   210,
     205,   206,   171,   208,   209,   203,   217,  1099,  1100,  1101,
     203,   171,   217,  1059,   206,   226,   196,   197,   731,   732,
     203,   213,   205,   203,    16,   220,   206,   203,   223,   203,
     225,   203,  1078,  1079,   747,  1081,  1082,   203,   203,   203,
     205,  1087,   203,    17,   205,   208,   209,   210,   206,   171,
     203,   203,   203,   203,   217,   213,   203,  1047,  1048,  1049,
    1152,   203,  1154,  1155,   203,   203,   205,   203,   203,   203,
     171,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   206,   203,   211,   205,   213,   203,   203,   213,   203,
    1136,   203,   203,   213,   203,   203,   199,   203,   203,   205,
     171,   171,   205,   206,   171,   208,   209,   171,   171,   211,
     829,   213,   171,   211,   217,   213,   180,   181,   182,   183,
     184,   185,   186,   187,   188,  1171,   211,  1173,   213,  1175,
       1,  1177,     3,     4,     5,     6,     7,     8,     9,    10,
      11,   171,   171,  1133,  1134,  1135,   171,   171,  1194,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,   171,
      41,    42,    43,    44,    45,    46,   171,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
     211,   171,   213,    64,   171,   171,    67,    68,    69,    70,
      71,    72,    73,    74,    75,   211,   171,   213,    79,    80,
      81,    82,    83,     1,   171,     3,     4,     5,     6,     7,
       8,     9,    10,    11,   172,   173,   174,   175,   176,   177,
     178,   179,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,   171,    41,    42,    43,    44,    45,    46,   171,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,   211,   171,   213,    64,   171,   171,    67,
      68,    69,    70,    71,    72,    73,    74,    75,   211,   171,
     213,    79,    80,    81,    82,    83,   171,   171,   169,   170,
      18,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   196,
     197,   198,   199,   200,   205,   211,   207,   213,   211,   171,
     213,   212,   211,   171,   213,   216,   203,   203,   205,   205,
     211,  1064,   213,   171,   171,   226,   211,   211,   213,   213,
     211,   211,   213,   213,   211,   211,   213,   213,   211,   211,
     213,   213,   211,   211,   213,   213,   171,   171,   171,   171,
     171,   169,   170,    19,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   203,   206,   203,   203,   203,   203,   203,     1,   223,
     220,   223,   223,   203,   203,   223,   223,   205,   223,   207,
     223,    66,   223,    47,   212,    66,   251,     1,   216,     3,
       4,     5,     6,     7,     8,     9,    10,    11,   226,   206,
     203,   205,   203,   203,   203,   211,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,   208,    41,   203,   220,
     203,    45,    46,   218,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,   206,   205,   215,
      64,   214,   214,    67,    68,    69,    70,    71,    72,    73,
      74,    75,   214,   214,   214,    79,    80,    81,    82,    83,
       1,   214,     3,     4,     5,     6,     7,     8,     9,    10,
      11,   214,   214,   214,   214,   214,   214,   214,   214,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,   214,
      41,   214,   214,   214,    45,    46,   214,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
     214,   214,   214,    64,   214,   214,    67,    68,    69,    70,
      71,    72,    73,    74,    75,   214,   214,   214,    79,    80,
      81,    82,    83,   214,   214,   169,   170,   214,   214,   214,
     212,   203,   211,   206,   218,   218,   211,   218,   218,   213,
      40,   205,   213,   213,   213,   223,   213,   213,   213,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   205,   220,   207,   206,   203,    42,   203,   212,    84,
     215,   214,   216,   962,   215,   215,   215,   203,   215,   213,
     213,   213,   226,   213,   213,   213,   213,   211,   213,   211,
     213,   829,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   211,   211,   211,   211,   169,   170,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   205,   213,   207,   211,   211,   211,
     206,   212,   211,   211,     1,   216,     3,     4,     5,     6,
       7,     8,     9,    10,    11,   226,   211,   211,   211,   211,
     211,   218,   218,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,   213,    41,   218,   213,   213,    45,    46,
     211,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,   206,   206,   206,    64,   206,   206,
      67,    68,    69,    70,    71,    72,    73,    74,    75,   206,
     215,   203,    79,    80,    81,    82,    83,     1,   206,     3,
       4,     5,     6,     7,     8,     9,    10,    11,   206,   206,
     206,   206,   206,   206,   206,   206,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,   206,    41,   206,   206,
     215,    45,    46,   215,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,   215,   203,   220,
      64,   211,   213,    67,    68,    69,    70,    71,    72,    73,
      74,    75,   213,   213,   213,    79,    80,    81,    82,    83,
     213,   213,   169,   170,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   211,   211,   211,   216,   211,   213,
     211,   211,   203,   203,   213,   213,   213,   213,   211,   206,
     206,   206,   206,   211,   203,   203,   834,   203,   205,   223,
     207,   223,   213,   213,   223,   212,   211,   211,   211,   216,
     211,   213,   203,   213,   213,   211,   213,   211,   206,   226,
     206,   211,   623,   212,   206,   212,  1066,   206,   213,   213,
     211,    -1,    -1,   213,   212,   212,    -1,   213,   213,   213,
     213,   213,   211,   213,    -1,   169,   170,    -1,   246,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   205,    -1,   207,    -1,   514,    -1,    -1,   212,    -1,
      -1,     1,   216,     3,     4,     5,     6,     7,     8,     9,
      10,    11,   226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    41,    -1,    -1,    -1,    45,    46,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    -1,    -1,    64,    -1,    -1,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    -1,    -1,    -1,    79,
      80,    81,    82,    83,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    41,    -1,    -1,    -1,    45,    46,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    -1,    -1,    64,    -1,    -1,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      -1,    -1,    79,    80,    81,    82,    83,    -1,    -1,   169,
     170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   205,    -1,   207,    -1,    -1,
      -1,    -1,   212,    -1,    -1,    -1,   216,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   169,   170,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,
     207,    -1,    -1,    -1,    -1,   212,    -1,    -1,     1,   216,
       3,     4,     5,     6,     7,     8,     9,    10,    11,   226,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    41,    -1,
      -1,    -1,    45,    46,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    -1,
      -1,    64,    -1,    -1,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    -1,    -1,    -1,    79,    80,    81,    82,
      83,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    41,    -1,    -1,    -1,    45,    46,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    -1,    -1,    64,    -1,    -1,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    -1,    -1,    -1,    79,
      80,    81,    82,    83,    -1,    -1,   169,   170,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   205,    -1,   207,    -1,    -1,    -1,    -1,   212,
      -1,    -1,    -1,   216,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   169,
     170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   205,    -1,   207,    -1,    -1,
      -1,    -1,   212,    -1,    -1,     1,   216,     3,     4,     5,
       6,     7,     8,     9,    10,    11,   226,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    41,    -1,    -1,    -1,    45,
      46,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    -1,    -1,    64,    -1,
      -1,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    -1,    -1,    79,    80,    81,    82,    83,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    41,    -1,
      -1,    -1,    45,    46,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    -1,
      -1,    64,    -1,    -1,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    -1,    -1,    -1,    79,    80,    81,    82,
      83,    -1,    -1,   169,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,
      -1,   207,    -1,    -1,    -1,    -1,   212,    -1,    -1,    -1,
     216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   169,   170,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   205,    -1,   207,    -1,    -1,    -1,    -1,   212,
      -1,    -1,     1,   216,     3,     4,     5,     6,     7,     8,
       9,    10,    11,   226,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    41,    -1,    -1,    -1,    45,    46,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    -1,    -1,    64,    -1,    -1,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    -1,    -1,    -1,
      79,    80,    81,    82,    83,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    41,    -1,    -1,    -1,    45,
      46,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    -1,    -1,    64,    -1,
      -1,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    -1,    -1,    79,    80,    81,    82,    83,    -1,    -1,
     169,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,   207,    -1,
      -1,    -1,    -1,   212,    -1,    -1,    -1,   216,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   169,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,
      -1,   207,    -1,    -1,    -1,    -1,   212,    -1,    -1,     1,
     216,     3,     4,     5,     6,     7,     8,     9,    10,    11,
     226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    41,
      -1,    -1,    -1,    45,    46,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      -1,    -1,    64,    -1,    -1,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    -1,    -1,    79,    80,    81,
      82,    83,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    41,    -1,    -1,    -1,    45,    46,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    -1,    -1,    64,    -1,    -1,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    -1,    -1,    -1,
      79,    80,    81,    82,    83,    -1,    -1,   169,   170,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   205,    -1,   207,    -1,    -1,    -1,    -1,
     212,    -1,    -1,    -1,   216,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     169,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,   207,    -1,
      -1,    -1,    -1,   212,    -1,    -1,     1,   216,     3,     4,
       5,     6,     7,     8,     9,    10,    11,   226,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    41,    -1,    -1,    -1,
      45,    46,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    -1,    -1,    64,
      -1,    -1,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    -1,    -1,    -1,    79,    80,    81,    82,    83,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    41,
      -1,    -1,    -1,    45,    46,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      -1,    -1,    64,    -1,    -1,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    -1,    -1,    79,    80,    81,
      82,    83,    -1,    -1,   169,   170,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     205,    -1,   207,    -1,    -1,    -1,    -1,   212,    -1,    -1,
      -1,   216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   169,   170,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   205,    -1,   207,    -1,    -1,    -1,    -1,
     212,    -1,    -1,    -1,   216,     3,     4,     5,     6,     7,
       8,     9,    10,    11,   226,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    -1,    -1,    64,    -1,    -1,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    -1,    -1,
      -1,    79,    80,    81,    82,    83,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    41,    -1,    -1,    -1,    45,    46,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    -1,    -1,    64,    -1,    -1,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      -1,    -1,    79,    80,    81,    82,    83,    -1,    -1,    -1,
      -1,   169,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,   197,
      -1,    -1,    -1,   201,    -1,   203,    -1,   205,    -1,   207,
      -1,    -1,    -1,    -1,    -1,    -1,   214,   215,    -1,   217,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   169,   170,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   189,   190,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,
     207,    -1,    -1,    -1,    -1,   212,    -1,    -1,   215,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,   226,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    41,    -1,    -1,
      -1,    45,    46,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    -1,    -1,
      64,    -1,    -1,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    -1,    -1,    -1,    79,    80,    81,    82,    83,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    -1,
      -1,    64,    -1,    -1,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    -1,    -1,    -1,    79,    80,    81,    82,
      83,    -1,    -1,    -1,    -1,   169,   170,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   205,    -1,   207,    -1,    -1,    -1,    -1,   212,    -1,
      -1,    -1,   216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   169,   170,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   196,   197,    -1,    -1,    -1,    -1,   202,
     203,    -1,   205,   206,   207,    -1,    -1,    -1,    -1,    -1,
      -1,   214,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      41,    -1,    -1,    -1,    45,    46,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    -1,    -1,    64,    -1,    -1,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    -1,    -1,    79,    80,
      81,    82,    83,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    41,    -1,    -1,    -1,    45,    46,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    -1,    -1,    64,    -1,    -1,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    -1,    -1,    -1,    79,
      80,    81,    82,    83,    -1,    -1,    -1,    -1,   169,   170,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   205,    -1,   207,    -1,    -1,    -1,
      -1,   212,    -1,    -1,    -1,   216,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   169,
     170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   205,    -1,   207,    -1,    -1,
      -1,    -1,   212,    -1,    -1,   215,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,   226,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    41,    -1,    -1,    44,    45,    46,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    -1,    -1,    64,    -1,    -1,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      -1,    -1,    79,    80,    81,    82,    83,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    41,    -1,    -1,    44,    45,
      46,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    -1,    -1,    64,    -1,
      -1,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    -1,    -1,    79,    80,    81,    82,    83,    -1,    -1,
      -1,    -1,   169,   170,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,
     207,    -1,    -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   169,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,
      -1,   207,    -1,    -1,    -1,    -1,   212,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
     226,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    41,    -1,    -1,    -1,    45,
      46,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    -1,    -1,    64,    -1,
      -1,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    -1,    -1,    79,    80,    81,    82,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   169,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,
      -1,   207,    -1,    76,    77,    78,   212,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    88,    89,    90,    91,    92,
     226,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   222,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    78,    -1,    -1,    -1,    -1,    -1,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    -1,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,    -1,    -1,
      -1,    -1,    -1,    -1,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   222
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,    76,    77,    78,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   222,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   253,   254,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,     1,   171,     1,   171,
       1,   171,     1,   171,     1,   171,     1,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,     1,
     206,   171,     1,   214,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,     1,   171,
       1,   171,   171,   171,   171,   171,   171,   171,     0,     1,
     230,    11,   261,    12,   262,    13,   263,    14,   264,    15,
     265,    16,   266,    17,   267,    18,   268,    19,   269,     1,
     203,     1,   203,     1,   203,   203,     1,   203,   196,   197,
     203,   243,     1,   203,     1,   203,   243,     1,   203,     1,
     205,     1,   206,     1,   203,   205,   241,   244,   245,   248,
     206,     1,   205,   206,   208,   209,   217,   224,   240,   241,
     244,   246,   247,   255,   256,   257,   258,   281,     1,   203,
       1,   203,     1,   203,   203,   203,   203,   203,   203,   203,
       1,   203,     1,   203,     1,   203,     1,   203,     1,   203,
       1,   203,     1,   206,     1,   203,     1,   243,     1,   243,
       1,   203,     1,   203,     1,   203,     1,   203,     1,   203,
       1,   203,     1,   203,     1,   203,     1,   203,     1,   206,
       1,   206,     1,   206,   206,     1,   203,     1,   205,   206,
       1,   205,   206,     1,   203,     1,   205,   206,     1,   203,
       1,   203,     1,   203,     1,   203,     1,   203,     1,   203,
       1,   203,   205,     1,   203,     1,   203,     1,   203,     1,
     203,     1,   203,     1,   205,   240,     1,   203,     1,   203,
       1,   203,     1,   203,     1,   203,     1,   203,   205,   203,
     203,   205,   203,     1,   206,     1,   206,     1,   203,     1,
     203,     1,   215,   217,     1,   217,     1,   215,   217,     1,
     217,     1,   215,     1,   215,     1,   215,     1,   217,     1,
     217,   203,   203,     1,   223,   219,   220,   225,   220,   223,
     257,   223,   223,   247,   197,   221,   280,   211,   223,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    41,    45,
      46,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    64,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    79,    80,    81,    82,    83,   169,
     170,   205,   207,   212,   226,   276,   284,   287,   288,   289,
     290,   291,   292,   300,   203,   205,   206,   260,   260,   287,
     260,   260,   287,   287,   287,   260,   260,   199,   240,   240,
     203,   220,   203,     1,   206,   250,   218,   240,     1,   205,
     206,   215,     1,   214,     1,   214,   214,   214,   214,   214,
       1,   214,     1,   214,     1,   214,     1,   214,     1,   214,
       1,   214,     1,   214,     1,   214,   214,   214,   214,     1,
     214,     1,   214,     1,   214,     1,   214,   214,     1,   214,
     214,   214,   214,   214,   214,   201,   214,   215,   217,   243,
     270,   276,   277,   278,   284,   285,   289,   300,   214,   270,
     214,     1,   214,     1,   214,     1,   214,     1,   214,     1,
     214,     1,   214,     1,   214,     1,   214,     1,   214,     1,
     214,     1,   214,     1,   214,     1,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,     1,   214,   171,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   282,   212,     1,   216,
     288,     1,   212,   218,   218,   216,   218,   218,   216,   216,
     216,   211,   211,   218,   223,   223,   220,   223,   225,   203,
     250,   223,   211,   201,   214,   251,   252,     1,   206,   213,
       1,   206,   213,   270,   213,   213,   243,   276,     1,   206,
     243,     1,   206,     1,   260,     1,   206,     1,   206,     1,
     206,     1,   203,     1,   203,   206,   213,   203,   276,   206,
     276,     1,   206,     1,   206,     1,   206,     1,   206,   213,
       1,   206,   213,   213,   213,   213,     1,   203,   213,   270,
     270,   216,   287,   202,   206,   214,   243,   276,   278,   283,
     300,   189,   190,   215,   286,   288,   172,   173,   174,   175,
     176,   177,   178,   179,   271,   272,   273,   274,   275,   276,
     286,   276,     1,   240,     1,   203,   206,     1,   244,     1,
     203,     1,   213,     1,   206,     1,   206,   203,   205,   203,
     205,   203,   205,   203,   205,   203,   205,   203,   205,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   259,   206,
     259,   206,   206,   206,   276,   203,   213,   205,   299,   299,
       1,   203,   206,   211,   213,   297,    66,    66,   283,   215,
     215,   215,   215,   203,   168,   169,   215,   203,   224,   242,
       1,   242,   203,   242,   220,     1,   242,   206,   243,   214,
     224,   241,   249,     1,   211,   216,   213,   213,   213,   211,
     213,   211,   213,   213,   213,   213,   211,   213,   211,   213,
     211,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   211,   213,   213,   213,   211,   211,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   216,   283,   283,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   218,   270,   270,   216,   287,    40,
      66,   210,   255,   279,   243,   206,   276,   213,    47,   213,
     213,   213,   213,   213,   213,   213,   213,   211,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     211,   213,   213,   211,   213,   213,   211,   213,   213,   211,
     213,   211,   211,   211,   211,   211,   211,   211,   206,   213,
     206,   213,   211,   213,   213,   211,   213,   211,   211,   211,
     211,     1,   214,   211,   211,   213,   213,   203,   206,   211,
     213,   287,   287,   287,   287,   218,   218,   218,   287,   220,
     225,   203,   213,   213,   249,   211,   251,   206,   206,   206,
     206,    66,   203,   206,   276,   298,   206,   206,   206,   213,
     283,   283,   283,   283,   283,   283,   283,   283,   283,   283,
     216,   286,   215,   276,   203,   203,   205,   203,   205,   203,
     205,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     259,   276,   206,   206,   276,   206,     1,   213,   297,   260,
     260,   203,   206,   216,   216,   216,   216,   215,   215,   215,
     216,   203,   220,   211,   279,   213,   213,   213,   213,   211,
     213,   213,   213,   213,    42,   293,   294,   295,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   211,   211,   211,
     213,   211,   211,   211,   213,   213,   213,   211,   213,   211,
     213,   211,   213,   211,   213,   213,   213,   213,   213,   287,
     287,   287,   203,   279,   211,    66,   203,   206,   276,   206,
     243,   216,    43,   295,   296,   286,   206,   276,   276,   203,
     276,   203,   276,   206,   276,   203,   206,   206,   216,   216,
     216,   211,   242,   223,   223,   223,   211,   213,   213,   213,
     211,   211,   211,   211,   213,   213,   213,   211,   213,   242,
     211,    44,   287,    44,   287,   287,   203,   276,   203,   203,
     203,   203,   206,   211,   206,   212,    44,   212,    44,   213,
     213,   211,   213,   211,   213,   211,   213,   211,   213,   211,
     206,   213,   212,   212,   276,   276,   276,   276,   206,   213,
     213,   213,   213,   213,   211,   276,   213
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   227,   228,   229,   229,   229,   230,   230,   231,   230,
     232,   230,   233,   230,   234,   230,   235,   230,   236,   230,
     237,   230,   238,   230,   239,   230,   230,   240,   240,   240,
     241,   242,   242,   243,   243,   243,   244,   244,   244,   244,
     245,   245,   246,   246,   246,   246,   246,   247,   247,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   249,   249,   250,   250,   251,   251,   252,
     252,   252,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   254,
     254,   254,   254,   254,   255,   255,   256,   257,   258,   258,
     259,   259,   260,   260,   260,   261,   261,   261,   262,   262,
     263,   263,   263,   264,   264,   265,   265,   266,   266,   267,
     267,   268,   268,   269,   269,   269,   269,   270,   270,   270,
     270,   270,   270,   271,   271,   272,   272,   272,   272,   273,
     273,   274,   274,   275,   275,   275,   276,   276,   277,   277,
     277,   277,   278,   278,   278,   278,   278,   279,   279,   280,
     280,   281,   281,   281,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   283,   283,   283,   283,   283,   283,
     283,   283,   283,   283,   283,   283,   283,   283,   283,   283,
     283,   284,   284,   284,   285,   285,   285,   285,   285,   286,
     286,   286,   287,   287,   287,   288,   288,   288,   288,   288,
     288,   288,   288,   289,   289,   290,   291,   292,   293,   293,
     294,   294,   295,   295,   295,   295,   295,   295,   295,   295,
     296,   296,   297,   297,   297,   297,   297,   297,   297,   297,
     298,   298,   298,   298,   298,   298,   298,   298,   299,   299,
     299,   299,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     1,     1,     0,     2,
       0,     2,     0,     2,     0,     2,     0,     2,     0,     2,
       0,     2,     0,     2,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     3,     5,     5,     2,
       3,     5,     1,     3,     5,     5,     1,     1,     2,     1,
       3,     1,     2,     3,     4,     3,     4,     5,     6,     5,
       6,     7,     8,     1,     1,     1,     2,     9,    10,     3,
       1,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     2,     3,     2,     3,     2,     3,
       2,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     5,     5,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     2,     7,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     8,     8,     2,     1,     1,     1,     1,     1,     3,
       2,     2,     1,     1,     1,     4,     7,     2,     7,     2,
       4,     7,     2,     7,     2,     4,     2,     4,     2,     4,
       2,     9,     2,     7,     9,     9,     2,     3,     3,     2,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     3,     3,     3,     1,     1,     1,     3,     2,     1,
       3,     2,     2,     1,     2,     2,     1,     1,     1,     1,
       2,     1,     2,     3,     5,     3,     7,     7,     2,     1,
       2,     1,     6,     5,     4,     3,     6,     5,     4,     3,
       3,     2,     1,     3,     1,     2,     2,     1,     2,     3,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     4,
       4,     2,     4,     3,     2,     4,     4,     6,     2,     4,
       6,     3,     1,     3,     1,     4,     4,     3,     1,     4,
       6,     2,     4,     4,     4,     2,     4,     4,     2,     4,
       4,     2,     6,     6,     4,     4,     2,     6,     6,     4,
       4,     2,     6,     6,     4,     4,     2,     6,     2,     4,
       4,     6,     2,     4,     4,     2,     4,     4,     2,     4,
       4,     2,     4,     4,     2,     4,     6,     4,     3,     1,
       4,     4,     6,     6,     4,     2,     4,     4,     2,     4,
       4,     2,     4,     4,     2,     4,     4,     2,     4,     3,
       1,     4,     2,     4,     3,     1,     3,     1,     3,     1,
       3,     1,     4,     3,     1,     4,     4,     4,     2,     4,
       4,     4,     2,     4,     4,     2,     4,     6,     4,     2,
       3,     4,     2,     4,     4,     2,     4,     4,     2,     8,
      10,    10,     6,     8,     8,    10,    10,    12,    12,    10,
      10,    12,    12,     8,     6,     3,     4,     4,     2,     4,
       4,     4,     4,     6,     6,     4,     6,     8,     6,     8,
      14,     6,     3,     6,     8,     6,     6,     4,     4,     6
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
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
  unsigned long yylno = yyrline[yyrule];
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
    default: /* Avoid compiler warnings. */
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
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

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
                  (unsigned long) yystacksize));

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
        case 3:
#line 489 "cfg.y" /* yacc.c:1645  */
    {}
#line 3209 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 4:
#line 490 "cfg.y" /* yacc.c:1645  */
    {}
#line 3215 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 5:
#line 491 "cfg.y" /* yacc.c:1645  */
    { yyerror(""); YYABORT;}
#line 3221 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 8:
#line 496 "cfg.y" /* yacc.c:1645  */
    {rt=REQUEST_ROUTE;}
#line 3227 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 10:
#line 497 "cfg.y" /* yacc.c:1645  */
    {rt=FAILURE_ROUTE;}
#line 3233 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 12:
#line 498 "cfg.y" /* yacc.c:1645  */
    {rt=ONREPLY_ROUTE;}
#line 3239 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 14:
#line 499 "cfg.y" /* yacc.c:1645  */
    {rt=BRANCH_ROUTE;}
#line 3245 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 16:
#line 500 "cfg.y" /* yacc.c:1645  */
    {rt=ERROR_ROUTE;}
#line 3251 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 18:
#line 501 "cfg.y" /* yacc.c:1645  */
    {rt=LOCAL_ROUTE;}
#line 3257 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 20:
#line 502 "cfg.y" /* yacc.c:1645  */
    {rt=STARTUP_ROUTE;}
#line 3263 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 22:
#line 503 "cfg.y" /* yacc.c:1645  */
    {rt=TIMER_ROUTE;}
#line 3269 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 24:
#line 504 "cfg.y" /* yacc.c:1645  */
    {rt=EVENT_ROUTE;}
#line 3275 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 27:
#line 509 "cfg.y" /* yacc.c:1645  */
    {	tmp=ip_addr2a((yyvsp[0].ipaddr));
							if(tmp==0){
								LM_CRIT("cfg. parser: bad ip address.\n");
								(yyval.strval)=0;
							}else{
								(yyval.strval)=pkg_malloc(strlen(tmp)+1);
								if ((yyval.strval)==0){
									LM_CRIT("cfg. parser: out of memory.\n");
									YYABORT;
								}else{
									strncpy((yyval.strval), tmp, strlen(tmp)+1);
								}
							}
						}
#line 3294 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 28:
#line 523 "cfg.y" /* yacc.c:1645  */
    {	(yyval.strval)=pkg_malloc(strlen((yyvsp[0].strval))+1);
							if ((yyval.strval)==0){
									LM_CRIT("cfg. parser: out of memory.\n");
									YYABORT;
							}else{
									strncpy((yyval.strval), (yyvsp[0].strval), strlen((yyvsp[0].strval))+1);
							}
						}
#line 3307 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 29:
#line 531 "cfg.y" /* yacc.c:1645  */
    {	if ((yyvsp[0].strval)==0) {
								(yyval.strval) = 0;
							} else {
								(yyval.strval)=pkg_malloc(strlen((yyvsp[0].strval))+1);
								if ((yyval.strval)==0){
									LM_CRIT("cfg. parser: out of memory.\n");
									YYABORT;
								}else{
									strncpy((yyval.strval), (yyvsp[0].strval), strlen((yyvsp[0].strval))+1);
								}
							}
						}
#line 3324 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 30:
#line 545 "cfg.y" /* yacc.c:1645  */
    {
		if (parse_proto((unsigned char *)(yyvsp[0].strval), strlen((yyvsp[0].strval)), &i_tmp) < 0) {
			yyerrorf("cannot handle protocol <%s>\n", (yyvsp[0].strval));
			YYABORT;
		}
		(yyval.intval) = i_tmp;
	 }
#line 3336 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 31:
#line 554 "cfg.y" /* yacc.c:1645  */
    { (yyval.intval)=(yyvsp[0].intval); }
#line 3342 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 32:
#line 555 "cfg.y" /* yacc.c:1645  */
    { (yyval.intval)=0; }
#line 3348 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 33:
#line 558 "cfg.y" /* yacc.c:1645  */
    { (yyval.intval)=(yyvsp[0].intval); }
#line 3354 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 34:
#line 559 "cfg.y" /* yacc.c:1645  */
    { (yyval.intval)=(yyvsp[0].intval); }
#line 3360 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 35:
#line 560 "cfg.y" /* yacc.c:1645  */
    { (yyval.intval)=-(yyvsp[0].intval); }
#line 3366 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 36:
#line 564 "cfg.y" /* yacc.c:1645  */
    { (yyval.sockid)=mk_listen_id((yyvsp[0].strval), (yyvsp[-2].intval), 0); }
#line 3372 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 37:
#line 565 "cfg.y" /* yacc.c:1645  */
    { (yyval.sockid)=mk_listen_id((yyvsp[-2].strval), (yyvsp[-4].intval), (yyvsp[0].intval));}
#line 3378 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 38:
#line 566 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.sockid)=0;
				yyerror("port number expected");
				YYABORT;
				}
#line 3388 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 39:
#line 571 "cfg.y" /* yacc.c:1645  */
    { (yyval.sockid)=0;
				yyerror("protocol expected");
				YYABORT;
			}
#line 3397 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 40:
#line 577 "cfg.y" /* yacc.c:1645  */
    { (yyval.sockid)=mk_listen_id(0, (yyvsp[-2].intval), 0); }
#line 3403 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 41:
#line 578 "cfg.y" /* yacc.c:1645  */
    { (yyval.sockid)=mk_listen_id(0, (yyvsp[-4].intval), (yyvsp[0].intval)); }
#line 3409 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 42:
#line 581 "cfg.y" /* yacc.c:1645  */
    { (yyval.sockid)=mk_listen_id((yyvsp[0].strval), PROTO_NONE, 0); }
#line 3415 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 43:
#line 582 "cfg.y" /* yacc.c:1645  */
    { (yyval.sockid)=mk_listen_id((yyvsp[0].strval), PROTO_NONE, 0); }
#line 3421 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 44:
#line 583 "cfg.y" /* yacc.c:1645  */
    { (yyval.sockid)=mk_listen_id((yyvsp[-2].strval), PROTO_NONE, (yyvsp[0].intval)); }
#line 3427 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 45:
#line 584 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.sockid)=0;
				yyerror(" port number expected");
				}
#line 3436 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 47:
#line 591 "cfg.y" /* yacc.c:1645  */
    {  (yyval.sockid)=(yyvsp[0].sockid) ; }
#line 3442 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 48:
#line 592 "cfg.y" /* yacc.c:1645  */
    { (yyval.sockid)=(yyvsp[-1].sockid); (yyval.sockid)->next=(yyvsp[0].sockid); }
#line 3448 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 49:
#line 596 "cfg.y" /* yacc.c:1645  */
    { (yyval.sockid)=(yyvsp[0].sockid); }
#line 3454 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 50:
#line 597 "cfg.y" /* yacc.c:1645  */
    { (yyval.sockid)=(yyvsp[-2].sockid); (yyval.sockid)->children=(yyvsp[0].intval); }
#line 3460 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 51:
#line 598 "cfg.y" /* yacc.c:1645  */
    { (yyval.sockid)=(yyvsp[0].sockid); }
#line 3466 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 52:
#line 599 "cfg.y" /* yacc.c:1645  */
    { (yyval.sockid)=(yyvsp[-1].sockid); (yyval.sockid)->flags=SI_IS_ANYCAST; }
#line 3472 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 53:
#line 600 "cfg.y" /* yacc.c:1645  */
    { (yyval.sockid)=(yyvsp[-2].sockid); (yyval.sockid)->children=(yyvsp[0].intval); }
#line 3478 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 54:
#line 601 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.sockid)=(yyvsp[-3].sockid); (yyval.sockid)->children=(yyvsp[0].intval); (yyval.sockid)->flags=SI_IS_ANYCAST;
				}
#line 3486 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 55:
#line 604 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.sockid)=(yyvsp[-2].sockid); set_listen_id_adv((struct socket_id *)(yyvsp[-2].sockid), (yyvsp[0].strval), 5060);
				}
#line 3494 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 56:
#line 607 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.sockid)=(yyvsp[-3].sockid); set_listen_id_adv((struct socket_id *)(yyvsp[-3].sockid), (yyvsp[-1].strval), 5060);
				(yyval.sockid)->flags=SI_IS_ANYCAST;
				}
#line 3503 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 57:
#line 611 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.sockid)=(yyvsp[-4].sockid); set_listen_id_adv((struct socket_id *)(yyvsp[-4].sockid), (yyvsp[-2].strval), 5060);
				(yyvsp[-4].sockid)->children=(yyvsp[0].intval);
				}
#line 3512 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 58:
#line 615 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.sockid)=(yyvsp[-5].sockid); set_listen_id_adv((struct socket_id *)(yyvsp[-5].sockid), (yyvsp[-3].strval), 5060);
				(yyvsp[-5].sockid)->children=(yyvsp[0].intval); (yyval.sockid)->flags=SI_IS_ANYCAST;
				}
#line 3521 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 59:
#line 619 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.sockid)=(yyvsp[-4].sockid); set_listen_id_adv((struct socket_id *)(yyvsp[-4].sockid), (yyvsp[-2].strval), (yyvsp[0].intval));
				}
#line 3529 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 60:
#line 622 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.sockid)=(yyvsp[-5].sockid); set_listen_id_adv((struct socket_id *)(yyvsp[-5].sockid), (yyvsp[-3].strval), (yyvsp[-1].intval));
				(yyval.sockid)->flags=SI_IS_ANYCAST;
				}
#line 3538 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 61:
#line 626 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.sockid)=(yyvsp[-6].sockid); set_listen_id_adv((struct socket_id *)(yyvsp[-6].sockid), (yyvsp[-4].strval), (yyvsp[-2].intval));
				(yyvsp[-6].sockid)->children=(yyvsp[0].intval);
				}
#line 3547 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 62:
#line 630 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.sockid)=(yyvsp[-7].sockid); set_listen_id_adv((struct socket_id *)(yyvsp[-7].sockid), (yyvsp[-5].strval), (yyvsp[-3].intval));
				(yyvsp[-7].sockid)->children=(yyvsp[0].intval); (yyval.sockid)->flags=SI_IS_ANYCAST;
				}
#line 3556 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 63:
#line 636 "cfg.y" /* yacc.c:1645  */
    { (yyval.intval)=PROTO_NONE; }
#line 3562 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 64:
#line 637 "cfg.y" /* yacc.c:1645  */
    { (yyval.intval)=(yyvsp[0].intval); }
#line 3568 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 65:
#line 639 "cfg.y" /* yacc.c:1645  */
    { (yyval.multistr)=new_string((yyvsp[0].strval)); }
#line 3574 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 66:
#line 640 "cfg.y" /* yacc.c:1645  */
    { (yyval.multistr)=new_string((yyvsp[-1].strval)); (yyval.multistr)->next=(yyvsp[0].multistr); }
#line 3580 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 67:
#line 643 "cfg.y" /* yacc.c:1645  */
    {
				s_tmp.s=(yyvsp[-1].strval);
				s_tmp.len=strlen((yyvsp[-1].strval));
				if (add_rule_to_list(&bl_head,&bl_tail,(yyvsp[-5].ipnet),&s_tmp,(yyvsp[-3].intval),(yyvsp[-7].intval),0)) {
					yyerror("failed to add backlist element\n");YYABORT;
				}
			}
#line 3592 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 68:
#line 650 "cfg.y" /* yacc.c:1645  */
    {
				s_tmp.s=(yyvsp[-1].strval);
				s_tmp.len=strlen((yyvsp[-1].strval));
				if (add_rule_to_list(&bl_head,&bl_tail,(yyvsp[-5].ipnet),&s_tmp,
				(yyvsp[-3].intval),(yyvsp[-7].intval),BLR_APPLY_CONTRARY)) {
					yyerror("failed to add backlist element\n");YYABORT;
				}
			}
#line 3605 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 69:
#line 660 "cfg.y" /* yacc.c:1645  */
    {}
#line 3611 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 70:
#line 661 "cfg.y" /* yacc.c:1645  */
    {}
#line 3617 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 71:
#line 662 "cfg.y" /* yacc.c:1645  */
    { yyerror("bad black list element");}
#line 3623 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 72:
#line 667 "cfg.y" /* yacc.c:1645  */
    { yyerror("\'debug\' is deprecated, use \'log_level\' instead\n");}
#line 3629 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 73:
#line 669 "cfg.y" /* yacc.c:1645  */
    {yyerror("fork is deprecated, use debug_mode\n");}
#line 3635 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 74:
#line 670 "cfg.y" /* yacc.c:1645  */
    {
			/* in debug mode, force logging to DEBUG level*/
			*log_level = debug_mode?L_DBG:(yyvsp[0].intval);
			}
#line 3644 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 75:
#line 674 "cfg.y" /* yacc.c:1645  */
    { enable_asserts=(yyvsp[0].intval); }
#line 3650 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 76:
#line 675 "cfg.y" /* yacc.c:1645  */
    { yyerror("boolean value expected"); }
#line 3656 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 77:
#line 676 "cfg.y" /* yacc.c:1645  */
    { abort_on_assert=(yyvsp[0].intval); }
#line 3662 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 78:
#line 677 "cfg.y" /* yacc.c:1645  */
    { yyerror("boolean value expected"); }
#line 3668 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 79:
#line 678 "cfg.y" /* yacc.c:1645  */
    { debug_mode=(yyvsp[0].intval);
			if (debug_mode) { *log_level = L_DBG;log_stderr=1;}
			}
#line 3676 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 80:
#line 682 "cfg.y" /* yacc.c:1645  */
    { yyerror("boolean value expected for debug_mode"); }
#line 3682 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 81:
#line 686 "cfg.y" /* yacc.c:1645  */
    { if (!config_check && !debug_mode) log_stderr=(yyvsp[0].intval); }
#line 3688 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 82:
#line 687 "cfg.y" /* yacc.c:1645  */
    { yyerror("boolean value expected"); }
#line 3694 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 83:
#line 688 "cfg.y" /* yacc.c:1645  */
    {
			if ( (i_tmp=str2facility((yyvsp[0].strval)))==-1)
				yyerror("bad facility (see syslog(3) man page)");
			if (!config_check)
				log_facility=i_tmp;
			}
#line 3705 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 84:
#line 694 "cfg.y" /* yacc.c:1645  */
    { yyerror("ID expected"); }
#line 3711 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 85:
#line 695 "cfg.y" /* yacc.c:1645  */
    { log_name=(yyvsp[0].strval); }
#line 3717 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 86:
#line 696 "cfg.y" /* yacc.c:1645  */
    { yyerror("string value expected"); }
#line 3723 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 87:
#line 697 "cfg.y" /* yacc.c:1645  */
    { received_dns|= ((yyvsp[0].intval))?DO_DNS:0; }
#line 3729 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 88:
#line 698 "cfg.y" /* yacc.c:1645  */
    { yyerror("boolean value expected"); }
#line 3735 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 89:
#line 699 "cfg.y" /* yacc.c:1645  */
    { received_dns|= ((yyvsp[0].intval))?DO_REV_DNS:0; }
#line 3741 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 90:
#line 700 "cfg.y" /* yacc.c:1645  */
    { yyerror("boolean value expected"); }
#line 3747 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 91:
#line 701 "cfg.y" /* yacc.c:1645  */
    { dns_try_ipv6=(yyvsp[0].intval); }
#line 3753 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 92:
#line 702 "cfg.y" /* yacc.c:1645  */
    { yyerror("boolean value expected"); }
#line 3759 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 93:
#line 703 "cfg.y" /* yacc.c:1645  */
    { dns_try_naptr=(yyvsp[0].intval); }
#line 3765 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 94:
#line 704 "cfg.y" /* yacc.c:1645  */
    { yyerror("boolean value expected"); }
#line 3771 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 95:
#line 705 "cfg.y" /* yacc.c:1645  */
    { dns_retr_time=(yyvsp[0].intval); }
#line 3777 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 96:
#line 706 "cfg.y" /* yacc.c:1645  */
    { yyerror("number expected"); }
#line 3783 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 97:
#line 707 "cfg.y" /* yacc.c:1645  */
    { dns_retr_no=(yyvsp[0].intval); }
#line 3789 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 98:
#line 708 "cfg.y" /* yacc.c:1645  */
    { yyerror("number expected"); }
#line 3795 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 99:
#line 709 "cfg.y" /* yacc.c:1645  */
    { dns_servers_no=(yyvsp[0].intval); }
#line 3801 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 100:
#line 710 "cfg.y" /* yacc.c:1645  */
    { yyerror("number expected"); }
#line 3807 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 101:
#line 711 "cfg.y" /* yacc.c:1645  */
    { dns_search_list=(yyvsp[0].intval); }
#line 3813 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 102:
#line 712 "cfg.y" /* yacc.c:1645  */
    { yyerror("boolean value expected"); }
#line 3819 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 103:
#line 713 "cfg.y" /* yacc.c:1645  */
    { max_while_loops=(yyvsp[0].intval); }
#line 3825 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 104:
#line 714 "cfg.y" /* yacc.c:1645  */
    { yyerror("number expected"); }
#line 3831 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 105:
#line 715 "cfg.y" /* yacc.c:1645  */
    { maxbuffer=(yyvsp[0].intval); }
#line 3837 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 106:
#line 716 "cfg.y" /* yacc.c:1645  */
    { yyerror("number expected"); }
#line 3843 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 107:
#line 717 "cfg.y" /* yacc.c:1645  */
    { children_no=(yyvsp[0].intval); }
#line 3849 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 108:
#line 718 "cfg.y" /* yacc.c:1645  */
    { yyerror("number expected"); }
#line 3855 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 109:
#line 719 "cfg.y" /* yacc.c:1645  */
    { check_via=(yyvsp[0].intval); }
#line 3861 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 110:
#line 720 "cfg.y" /* yacc.c:1645  */
    { yyerror("boolean value expected"); }
#line 3867 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 111:
#line 721 "cfg.y" /* yacc.c:1645  */
    {
			#ifdef HP_MALLOC
			shm_hash_split_percentage=(yyvsp[0].intval);
			#else
			LM_ERR("Cannot set parameter; Please recompile with support "
				"for HP_MALLOC\n");
			#endif
			}
#line 3880 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 112:
#line 729 "cfg.y" /* yacc.c:1645  */
    {
			#ifdef HP_MALLOC
			yyerror("number expected");
			#else
			LM_ERR("Cannot set parameter; Please recompile with support "
				"for HP_MALLOC\n");
			#endif
				}
#line 3893 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 113:
#line 737 "cfg.y" /* yacc.c:1645  */
    {
			#ifdef HP_MALLOC
			shm_secondary_hash_size=(yyvsp[0].intval);
			#else
			LM_ERR("Cannot set parameter; Please recompile with support"
				" for HP_MALLOC\n");
			#endif
			}
#line 3906 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 114:
#line 745 "cfg.y" /* yacc.c:1645  */
    {
			#ifdef HP_MALLOC
			yyerror("number expected");
			#else
			LM_ERR("Cannot set parameter; Please recompile with support "
				"for HP_MALLOC\n");
			#endif
			}
#line 3919 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 115:
#line 753 "cfg.y" /* yacc.c:1645  */
    {
			#ifdef HP_MALLOC
			mem_warming_enabled = (yyvsp[0].intval);
			#else
			LM_ERR("Cannot set parameter; Please recompile with support"
				" for HP_MALLOC\n");
			#endif
			}
#line 3932 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 116:
#line 761 "cfg.y" /* yacc.c:1645  */
    {
			#ifdef HP_MALLOC
			yyerror("number expected");
			#else
			LM_ERR("Cannot set parameter; Please recompile with support "
				"for HP_MALLOC\n");
			#endif
			}
#line 3945 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 117:
#line 769 "cfg.y" /* yacc.c:1645  */
    {
			#ifdef HP_MALLOC
			mem_warming_pattern_file = (yyvsp[0].strval);
			#else
			LM_ERR("Cannot set parameter; Please recompile with "
				"support for HP_MALLOC\n");
			#endif
			}
#line 3958 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 118:
#line 777 "cfg.y" /* yacc.c:1645  */
    {
			#ifdef HP_MALLOC
			yyerror("string expected");
			#else
			LM_ERR("Cannot set parameter; Please recompile with support "
				"for HP_MALLOC\n");
			#endif
			}
#line 3971 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 119:
#line 785 "cfg.y" /* yacc.c:1645  */
    {
			#ifdef HP_MALLOC
			mem_warming_percentage = (yyvsp[0].intval);
			#else
			LM_ERR("Cannot set parameter; Please recompile with "
				"support for HP_MALLOC\n");
			#endif
			}
#line 3984 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 120:
#line 793 "cfg.y" /* yacc.c:1645  */
    {
			#ifdef HP_MALLOC
			yyerror("number expected");
			#else
			LM_ERR("Cannot set parameter; Please recompile with support "
				"for HP_MALLOC\n");
			#endif
			}
#line 3997 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 121:
#line 801 "cfg.y" /* yacc.c:1645  */
    { memlog=(yyvsp[0].intval); memdump=(yyvsp[0].intval); }
#line 4003 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 122:
#line 802 "cfg.y" /* yacc.c:1645  */
    { yyerror("int value expected"); }
#line 4009 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 123:
#line 803 "cfg.y" /* yacc.c:1645  */
    { memdump=(yyvsp[0].intval); }
#line 4015 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 124:
#line 804 "cfg.y" /* yacc.c:1645  */
    { yyerror("int value expected"); }
#line 4021 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 125:
#line 805 "cfg.y" /* yacc.c:1645  */
    { execmsgthreshold=(yyvsp[0].intval); }
#line 4027 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 126:
#line 806 "cfg.y" /* yacc.c:1645  */
    { yyerror("int value expected"); }
#line 4033 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 127:
#line 807 "cfg.y" /* yacc.c:1645  */
    { execdnsthreshold=(yyvsp[0].intval); }
#line 4039 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 128:
#line 808 "cfg.y" /* yacc.c:1645  */
    { yyerror("int value expected"); }
#line 4045 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 129:
#line 809 "cfg.y" /* yacc.c:1645  */
    { tcpthreshold=(yyvsp[0].intval); }
#line 4051 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 130:
#line 810 "cfg.y" /* yacc.c:1645  */
    { yyerror("int value expected"); }
#line 4057 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 131:
#line 811 "cfg.y" /* yacc.c:1645  */
    {
			#ifdef STATISTICS
			if ((yyvsp[0].intval) < 0 || (yyvsp[0].intval) > 100)
				yyerror("SHM threshold has to be a percentage between"
					" 0 and 100");
			event_shm_threshold=(yyvsp[0].intval);
			#else
			yyerror("statistics support not compiled in");
			#endif /* STATISTICS */
			}
#line 4072 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 132:
#line 821 "cfg.y" /* yacc.c:1645  */
    { yyerror("int value expected"); }
#line 4078 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 133:
#line 822 "cfg.y" /* yacc.c:1645  */
    {
			#ifdef PKG_MALLOC
			#ifdef STATISTICS
			#ifdef USE_SHM_MEM
				warn("No PKG memory, all allocations are mapped to SHM; "
					"Use event_shm_threshold instead or recompile with PKG_MALLOC "
					"instead of USE_SHM_MEM in order to have separate PKG memory");
			#else
			if ((yyvsp[0].intval) < 0 || (yyvsp[0].intval) > 100)
				yyerror("PKG threshold has to be a percentage between "
					"0 and 100");
			event_pkg_threshold=(yyvsp[0].intval);
			#endif
			#else
			yyerror("statistics support not compiled in");
			#endif
			#else
			yyerror("pkg_malloc support not compiled in");
			#endif
			}
#line 4103 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 134:
#line 842 "cfg.y" /* yacc.c:1645  */
    { yyerror("int value expected"); }
#line 4109 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 135:
#line 843 "cfg.y" /* yacc.c:1645  */
    { query_buffer_size=(yyvsp[0].intval); }
#line 4115 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 136:
#line 844 "cfg.y" /* yacc.c:1645  */
    { yyerror("int value expected"); }
#line 4121 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 137:
#line 845 "cfg.y" /* yacc.c:1645  */
    { query_flush_time=(yyvsp[0].intval); }
#line 4127 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 138:
#line 846 "cfg.y" /* yacc.c:1645  */
    { yyerror("int value expected"); }
#line 4133 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 139:
#line 847 "cfg.y" /* yacc.c:1645  */
    { sip_warning=(yyvsp[0].intval); }
#line 4139 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 140:
#line 848 "cfg.y" /* yacc.c:1645  */
    { yyerror("boolean value expected"); }
#line 4145 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 141:
#line 849 "cfg.y" /* yacc.c:1645  */
    { chroot_dir=(yyvsp[0].strval); }
#line 4151 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 142:
#line 850 "cfg.y" /* yacc.c:1645  */
    { chroot_dir=(yyvsp[0].strval); }
#line 4157 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 143:
#line 851 "cfg.y" /* yacc.c:1645  */
    { yyerror("string value expected"); }
#line 4163 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 144:
#line 852 "cfg.y" /* yacc.c:1645  */
    { working_dir=(yyvsp[0].strval); }
#line 4169 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 145:
#line 853 "cfg.y" /* yacc.c:1645  */
    { working_dir=(yyvsp[0].strval); }
#line 4175 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 146:
#line 854 "cfg.y" /* yacc.c:1645  */
    { yyerror("string value expected"); }
#line 4181 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 147:
#line 855 "cfg.y" /* yacc.c:1645  */
    { mhomed=(yyvsp[0].intval); }
#line 4187 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 148:
#line 856 "cfg.y" /* yacc.c:1645  */
    { yyerror("boolean value expected"); }
#line 4193 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 149:
#line 857 "cfg.y" /* yacc.c:1645  */
    {
									io_poll_method=get_poll_type((yyvsp[0].strval));
									if (io_poll_method==POLL_NONE){
										LM_CRIT("bad poll method name:"
											" %s\n, try one of %s.\n",
											(yyvsp[0].strval), poll_support);
										yyerror("bad poll_method "
											"value");
									}
								}
#line 4208 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 150:
#line 867 "cfg.y" /* yacc.c:1645  */
    {
									io_poll_method=get_poll_type((yyvsp[0].strval));
									if (io_poll_method==POLL_NONE){
										LM_CRIT("bad poll method name:"
											" %s\n, try one of %s.\n",
											(yyvsp[0].strval), poll_support);
										yyerror("bad poll_method "
											"value");
									}
									}
#line 4223 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 151:
#line 877 "cfg.y" /* yacc.c:1645  */
    { yyerror("poll method name expected"); }
#line 4229 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 152:
#line 878 "cfg.y" /* yacc.c:1645  */
    {
				tcp_accept_aliases=(yyvsp[0].intval);
		}
#line 4237 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 153:
#line 881 "cfg.y" /* yacc.c:1645  */
    { yyerror("boolean value expected"); }
#line 4243 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 154:
#line 882 "cfg.y" /* yacc.c:1645  */
    {
				tcp_children_no=(yyvsp[0].intval);
		}
#line 4251 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 155:
#line 885 "cfg.y" /* yacc.c:1645  */
    { yyerror("number expected"); }
#line 4257 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 156:
#line 886 "cfg.y" /* yacc.c:1645  */
    {
				tcp_connect_timeout=(yyvsp[0].intval);
		}
#line 4265 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 157:
#line 889 "cfg.y" /* yacc.c:1645  */
    { yyerror("number expected"); }
#line 4271 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 158:
#line 890 "cfg.y" /* yacc.c:1645  */
    {
				tcp_con_lifetime=(yyvsp[0].intval);
		}
#line 4279 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 159:
#line 893 "cfg.y" /* yacc.c:1645  */
    { yyerror("number expected"); }
#line 4285 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 160:
#line 894 "cfg.y" /* yacc.c:1645  */
    {
				tcp_listen_backlog=(yyvsp[0].intval);
		}
#line 4293 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 161:
#line 897 "cfg.y" /* yacc.c:1645  */
    { yyerror("number expected"); }
#line 4299 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 162:
#line 898 "cfg.y" /* yacc.c:1645  */
    {
				tcp_max_connections=(yyvsp[0].intval);
		}
#line 4307 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 163:
#line 901 "cfg.y" /* yacc.c:1645  */
    { yyerror("number expected"); }
#line 4313 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 164:
#line 902 "cfg.y" /* yacc.c:1645  */
    {
				tmp = NULL;
				fix_flag_name(tmp, (yyvsp[0].intval));
				tcp_no_new_conn_bflag =
					get_flag_id_by_name(FLAG_TYPE_BRANCH, tmp);
				if (!flag_in_range( (flag_t)tcp_no_new_conn_bflag ) )
					yyerror("invalid TCP no_new_conn Branch Flag");
				flag_idx2mask( &tcp_no_new_conn_bflag );
		}
#line 4327 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 165:
#line 911 "cfg.y" /* yacc.c:1645  */
    {
				tcp_no_new_conn_bflag =
					get_flag_id_by_name(FLAG_TYPE_BRANCH, (yyvsp[0].strval));
				if (!flag_in_range( (flag_t)tcp_no_new_conn_bflag ) )
					yyerror("invalid TCP no_new_conn Branch Flag");
				flag_idx2mask( &tcp_no_new_conn_bflag );
		}
#line 4339 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 166:
#line 918 "cfg.y" /* yacc.c:1645  */
    { yyerror("number value expected"); }
#line 4345 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 167:
#line 919 "cfg.y" /* yacc.c:1645  */
    {
				tcp_keepalive=(yyvsp[0].intval);
		}
#line 4353 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 168:
#line 922 "cfg.y" /* yacc.c:1645  */
    { yyerror("boolean value expected"); }
#line 4359 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 169:
#line 923 "cfg.y" /* yacc.c:1645  */
    {
				tcp_max_msg_time=(yyvsp[0].intval);
		}
#line 4367 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 170:
#line 926 "cfg.y" /* yacc.c:1645  */
    { yyerror("boolean value expected"); }
#line 4373 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 171:
#line 927 "cfg.y" /* yacc.c:1645  */
    {
			#ifndef HAVE_TCP_KEEPCNT
				warn("cannot be enabled TCP_KEEPCOUNT (no OS support)");
			#else
				tcp_keepcount=(yyvsp[0].intval);
			#endif
		}
#line 4385 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 172:
#line 934 "cfg.y" /* yacc.c:1645  */
    { yyerror("int value expected"); }
#line 4391 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 173:
#line 935 "cfg.y" /* yacc.c:1645  */
    {
			#ifndef HAVE_TCP_KEEPIDLE
				warn("cannot be enabled TCP_KEEPIDLE (no OS support)");
			#else
				tcp_keepidle=(yyvsp[0].intval);
			#endif
		}
#line 4403 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 174:
#line 942 "cfg.y" /* yacc.c:1645  */
    { yyerror("int value expected"); }
#line 4409 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 175:
#line 943 "cfg.y" /* yacc.c:1645  */
    {
			#ifndef HAVE_TCP_KEEPINTVL
				warn("cannot be enabled TCP_KEEPINTERVAL (no OS support)");
			#else
				tcp_keepinterval=(yyvsp[0].intval);
			 #endif
		}
#line 4421 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 176:
#line 950 "cfg.y" /* yacc.c:1645  */
    { yyerror("int value expected"); }
#line 4427 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 177:
#line 951 "cfg.y" /* yacc.c:1645  */
    { server_signature=(yyvsp[0].intval); }
#line 4433 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 178:
#line 952 "cfg.y" /* yacc.c:1645  */
    { yyerror("boolean value expected"); }
#line 4439 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 179:
#line 953 "cfg.y" /* yacc.c:1645  */
    { server_header.s=(yyvsp[0].strval);
									server_header.len=strlen((yyvsp[0].strval));
									}
#line 4447 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 180:
#line 956 "cfg.y" /* yacc.c:1645  */
    { yyerror("string value expected"); }
#line 4453 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 181:
#line 957 "cfg.y" /* yacc.c:1645  */
    { user_agent_header.s=(yyvsp[0].strval);
									user_agent_header.len=strlen((yyvsp[0].strval));
									}
#line 4461 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 182:
#line 960 "cfg.y" /* yacc.c:1645  */
    { yyerror("string value expected"); }
#line 4467 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 183:
#line 961 "cfg.y" /* yacc.c:1645  */
    { xlog_buf_size = (yyvsp[0].intval); }
#line 4473 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 184:
#line 962 "cfg.y" /* yacc.c:1645  */
    { xlog_force_color = (yyvsp[0].intval); }
#line 4479 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 185:
#line 963 "cfg.y" /* yacc.c:1645  */
    { xlog_default_level = (yyvsp[0].intval); }
#line 4485 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 186:
#line 964 "cfg.y" /* yacc.c:1645  */
    { yyerror("number expected"); }
#line 4491 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 187:
#line 965 "cfg.y" /* yacc.c:1645  */
    { yyerror("boolean value expected"); }
#line 4497 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 188:
#line 966 "cfg.y" /* yacc.c:1645  */
    { yyerror("number expected"); }
#line 4503 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 189:
#line 967 "cfg.y" /* yacc.c:1645  */
    {
							if (add_listener((yyvsp[0].sockid))!=0){
								LM_CRIT("cfg. parser: failed"
										" to add listen address\n");
								break;
							}
						}
#line 4515 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 190:
#line 974 "cfg.y" /* yacc.c:1645  */
    { yyerror("ip address or hostname "
						"expected (use quotes if the hostname includes"
						" config keywords)"); }
#line 4523 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 191:
#line 977 "cfg.y" /* yacc.c:1645  */
    {
							/* convert STIRNG ($3) to an ID */
							/* update the memstats type for each module */
							#ifndef SHM_EXTRA_STATS
								LM_CRIT("SHM_EXTRA_STATS not defined");
								YYABORT;
							#else

							#ifdef SHM_SHOW_DEFAULT_GROUP
							if(strcmp((yyvsp[-2].strval), "default") == 0){
								LM_CRIT("default group  name is not allowed");
								YYABORT;
							}
							#endif

							for(tmp_mod = mod_names; tmp_mod; tmp_mod=tmp_mod->next){
								if(strcmp((yyvsp[-2].strval), tmp_mod->s) == 0){
									LM_CRIT("The same mem-group name is used twice: [%s] [%s]\n", (yyvsp[-2].strval), tmp_mod->s);
									YYABORT;
								}
							}

							tmp_mod = pkg_malloc(sizeof(struct multi_str));
							if(!tmp_mod){
								LM_CRIT("out of pkg memory");
								YYABORT;
							}

							tmp_mod->s = (yyvsp[-2].strval);
							tmp_mod->next = mod_names;
							mod_names = tmp_mod;
							for (tmp_mod = (yyvsp[0].multistr); tmp_mod; tmp_mod = tmp_mod->next){
								if(set_mem_idx(tmp_mod->s, mem_free_idx)){
									YYABORT;
								}
							}

							mem_free_idx++;	

							if(alloc_group_stat()){
								YYABORT;
							}
							#endif
						}
#line 4572 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 192:
#line 1021 "cfg.y" /* yacc.c:1645  */
    { yyerror("invalid or no module specified"); }
#line 4578 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 193:
#line 1022 "cfg.y" /* yacc.c:1645  */
    {
							for(lst_tmp=(yyvsp[0].sockid); lst_tmp; lst_tmp=lst_tmp->next)
								add_alias(lst_tmp->name, strlen(lst_tmp->name),
											lst_tmp->port, lst_tmp->proto);
							  }
#line 4588 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 194:
#line 1027 "cfg.y" /* yacc.c:1645  */
    { yyerror("hostname expected (use quotes"
							" if the hostname includes config keywords)"); }
#line 4595 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 195:
#line 1029 "cfg.y" /* yacc.c:1645  */
    { auto_aliases=(yyvsp[0].intval); }
#line 4601 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 196:
#line 1030 "cfg.y" /* yacc.c:1645  */
    { yyerror("number  expected"); }
#line 4607 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 197:
#line 1031 "cfg.y" /* yacc.c:1645  */
    {
								if ((yyvsp[0].strval)) {
									default_global_address.s=(yyvsp[0].strval);
									default_global_address.len=strlen((yyvsp[0].strval));
								}
								}
#line 4618 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 198:
#line 1037 "cfg.y" /* yacc.c:1645  */
    {yyerror("ip address or hostname "
												"expected"); }
#line 4625 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 199:
#line 1039 "cfg.y" /* yacc.c:1645  */
    {
								tmp = int2str((yyvsp[0].intval), &i_tmp);
								if (i_tmp > default_global_port.len)
									default_global_port.s =
									pkg_realloc(default_global_port.s, i_tmp);
								if (!default_global_port.s) {
									LM_CRIT("cfg. parser: out of memory.\n");
									YYABORT;
								} else {
									default_global_port.len = i_tmp;
									memcpy(default_global_port.s, tmp,
											default_global_port.len);
								}
								}
#line 4644 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 200:
#line 1053 "cfg.y" /* yacc.c:1645  */
    {yyerror("ip address or hostname "
												"expected"); }
#line 4651 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 201:
#line 1055 "cfg.y" /* yacc.c:1645  */
    {
										disable_core_dump=(yyvsp[0].intval);
									}
#line 4659 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 202:
#line 1058 "cfg.y" /* yacc.c:1645  */
    { yyerror("boolean value expected"); }
#line 4665 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 203:
#line 1059 "cfg.y" /* yacc.c:1645  */
    {
										open_files_limit=(yyvsp[0].intval);
									}
#line 4673 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 204:
#line 1062 "cfg.y" /* yacc.c:1645  */
    { yyerror("number expected"); }
#line 4679 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 205:
#line 1063 "cfg.y" /* yacc.c:1645  */
    {
								#ifdef USE_MCAST
										mcast_loopback=(yyvsp[0].intval);
								#else
									warn("no multicast support compiled in");
								#endif
		  }
#line 4691 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 206:
#line 1070 "cfg.y" /* yacc.c:1645  */
    { yyerror("boolean value expected"); }
#line 4697 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 207:
#line 1071 "cfg.y" /* yacc.c:1645  */
    {
								#ifdef USE_MCAST
										mcast_ttl=(yyvsp[0].intval);
								#else
									warn("no multicast support compiled in");
								#endif
		  }
#line 4709 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 208:
#line 1078 "cfg.y" /* yacc.c:1645  */
    { yyerror("number expected as tos"); }
#line 4715 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 209:
#line 1079 "cfg.y" /* yacc.c:1645  */
    { tos = (yyvsp[0].intval);
							if (tos<=0)
								yyerror("invalid tos value");
		 }
#line 4724 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 210:
#line 1083 "cfg.y" /* yacc.c:1645  */
    { if (strcasecmp((yyvsp[0].strval),"IPTOS_LOWDELAY")) {
								tos=IPTOS_LOWDELAY;
							} else if (strcasecmp((yyvsp[0].strval),"IPTOS_THROUGHPUT")) {
								tos=IPTOS_THROUGHPUT;
							} else if (strcasecmp((yyvsp[0].strval),"IPTOS_RELIABILITY")) {
								tos=IPTOS_RELIABILITY;
#if defined(IPTOS_MINCOST)
							} else if (strcasecmp((yyvsp[0].strval),"IPTOS_MINCOST")) {
								tos=IPTOS_MINCOST;
#endif
#if defined(IPTOS_LOWCOST)
							} else if (strcasecmp((yyvsp[0].strval),"IPTOS_LOWCOST")) {
								tos=IPTOS_LOWCOST;
#endif
							} else {
								yyerror("invalid tos value - allowed: "
									"IPTOS_LOWDELAY,IPTOS_THROUGHPUT,"
									"IPTOS_RELIABILITY"
#if defined(IPTOS_LOWCOST)
									",IPTOS_LOWCOST"
#endif
#if defined(IPTOS_MINCOST)
									",IPTOS_MINCOST"
#endif
									"\n");
							}
		 }
#line 4756 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 211:
#line 1110 "cfg.y" /* yacc.c:1645  */
    { yyerror("number expected"); }
#line 4762 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 212:
#line 1111 "cfg.y" /* yacc.c:1645  */
    { set_mpath((yyvsp[0].strval)); }
#line 4768 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 213:
#line 1112 "cfg.y" /* yacc.c:1645  */
    { yyerror("string value expected"); }
#line 4774 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 214:
#line 1113 "cfg.y" /* yacc.c:1645  */
    {
										disable_dns_failover=(yyvsp[0].intval);
									}
#line 4782 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 215:
#line 1116 "cfg.y" /* yacc.c:1645  */
    { yyerror("boolean value expected"); }
#line 4788 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 216:
#line 1117 "cfg.y" /* yacc.c:1645  */
    {
										disable_dns_blacklist=(yyvsp[0].intval);
									}
#line 4796 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 217:
#line 1120 "cfg.y" /* yacc.c:1645  */
    { yyerror("boolean value expected"); }
#line 4802 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 218:
#line 1121 "cfg.y" /* yacc.c:1645  */
    {
				s_tmp.s = (yyvsp[-4].strval);
				s_tmp.len = strlen((yyvsp[-4].strval));
				if (create_bl_head( BL_CORE_ID, BL_READONLY_LIST,
				    bl_head, bl_tail, &s_tmp)==0) {
					yyerror("failed to create blacklist\n");
					YYABORT;
				}
				bl_head = bl_tail = NULL;
				}
#line 4817 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 219:
#line 1131 "cfg.y" /* yacc.c:1645  */
    {
				sl_fwd_disabled=(yyvsp[0].intval);
				}
#line 4825 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 220:
#line 1134 "cfg.y" /* yacc.c:1645  */
    { db_version_table=(yyvsp[0].strval); }
#line 4831 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 221:
#line 1135 "cfg.y" /* yacc.c:1645  */
    { yyerror("string value expected"); }
#line 4837 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 222:
#line 1136 "cfg.y" /* yacc.c:1645  */
    { db_default_url=(yyvsp[0].strval); }
#line 4843 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 223:
#line 1137 "cfg.y" /* yacc.c:1645  */
    { yyerror("string value expected"); }
#line 4849 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 224:
#line 1138 "cfg.y" /* yacc.c:1645  */
    { db_max_async_connections=(yyvsp[0].intval); }
#line 4855 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 225:
#line 1139 "cfg.y" /* yacc.c:1645  */
    {
				yyerror("integer value expected");
				}
#line 4863 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 226:
#line 1142 "cfg.y" /* yacc.c:1645  */
    { disable_503_translation=(yyvsp[0].intval); }
#line 4869 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 227:
#line 1143 "cfg.y" /* yacc.c:1645  */
    {
				yyerror("integer value expected");
				}
#line 4877 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 228:
#line 1146 "cfg.y" /* yacc.c:1645  */
    { yyerror("unknown config variable"); }
#line 4883 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 229:
#line 1149 "cfg.y" /* yacc.c:1645  */
    {
			if (load_module((yyvsp[0].strval)) < 0)
				yyerrorf("failed to load module %s\n", (yyvsp[0].strval));
		}
#line 4892 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 230:
#line 1153 "cfg.y" /* yacc.c:1645  */
    { yyerror("string expected");  }
#line 4898 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 231:
#line 1154 "cfg.y" /* yacc.c:1645  */
    {
				if (set_mod_param_regex((yyvsp[-5].strval), (yyvsp[-3].strval), STR_PARAM, (yyvsp[-1].strval)) != 0) {
					yyerrorf("Parameter <%s> not found in module <%s> - "
						"can't set", (yyvsp[-3].strval), (yyvsp[-5].strval));
				}
			}
#line 4909 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 232:
#line 1160 "cfg.y" /* yacc.c:1645  */
    {
				if (set_mod_param_regex((yyvsp[-5].strval), (yyvsp[-3].strval), INT_PARAM, (void*)(yyvsp[-1].intval)) != 0) {
					yyerrorf("Parameter <%s> not found in module <%s> - "
						"can't set", (yyvsp[-3].strval), (yyvsp[-5].strval));
				}
			}
#line 4920 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 233:
#line 1166 "cfg.y" /* yacc.c:1645  */
    { yyerror("Invalid arguments"); }
#line 4926 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 234:
#line 1170 "cfg.y" /* yacc.c:1645  */
    { (yyval.ipaddr)=(yyvsp[0].ipaddr); }
#line 4932 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 235:
#line 1171 "cfg.y" /* yacc.c:1645  */
    { (yyval.ipaddr)=(yyvsp[0].ipaddr); }
#line 4938 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 236:
#line 1174 "cfg.y" /* yacc.c:1645  */
    {
					(yyval.ipaddr)=pkg_malloc(sizeof(struct ip_addr));
					if ((yyval.ipaddr)==0){
						LM_CRIT("ERROR: cfg. parser: out of memory.\n");
						YYABORT;
					}else{
						memset((yyval.ipaddr), 0, sizeof(struct ip_addr));
						(yyval.ipaddr)->af=AF_INET;
						(yyval.ipaddr)->len=16;
						if (inet_pton(AF_INET, (yyvsp[0].strval), (yyval.ipaddr)->u.addr)<=0){
							yyerror("bad ipv4 address");
						}
					}
				}
#line 4957 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 237:
#line 1190 "cfg.y" /* yacc.c:1645  */
    {
					(yyval.ipaddr)=pkg_malloc(sizeof(struct ip_addr));
					if ((yyval.ipaddr)==0){
						LM_CRIT("ERROR: cfg. parser: out of memory.\n");
						YYABORT;
					}else{
						memset((yyval.ipaddr), 0, sizeof(struct ip_addr));
						(yyval.ipaddr)->af=AF_INET6;
						(yyval.ipaddr)->len=16;
						if (inet_pton(AF_INET6, (yyvsp[0].strval), (yyval.ipaddr)->u.addr)<=0){
							yyerror("bad ipv6 address");
						}
					}
				}
#line 4976 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 238:
#line 1206 "cfg.y" /* yacc.c:1645  */
    { (yyval.ipaddr)=(yyvsp[0].ipaddr); }
#line 4982 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 239:
#line 1207 "cfg.y" /* yacc.c:1645  */
    {(yyval.ipaddr)=(yyvsp[-1].ipaddr); }
#line 4988 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 240:
#line 1210 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.strval) = pkg_malloc( strlen((yyvsp[-1].strval)) + strlen((yyvsp[0].strval)) + 1);
				if ((yyval.strval)==0){
					yyerror("cfg. parser: out of memory");
					YYABORT;
				} else {
					strcpy((yyval.strval),(yyvsp[-1].strval)); strcat((yyval.strval),(yyvsp[0].strval));
					pkg_free((yyvsp[-1].strval)); pkg_free((yyvsp[0].strval));
				}
			}
#line 5003 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 241:
#line 1220 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.strval) = pkg_malloc( strlen((yyvsp[-1].strval)) + strlen((yyvsp[0].strval)) + 1);
				if ((yyval.strval)==0){
					LM_CRIT("ERROR: cfg. parser: out of memory.\n");
					YYABORT;
				} else {
					strcpy((yyval.strval),(yyvsp[-1].strval)); strcat((yyval.strval),(yyvsp[0].strval));
					pkg_free((yyvsp[-1].strval)); pkg_free((yyvsp[0].strval));
				}
			}
#line 5018 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 242:
#line 1231 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.strval) = (yyvsp[0].strval);
				}
#line 5026 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 243:
#line 1234 "cfg.y" /* yacc.c:1645  */
    {
				tmp=int2str((yyvsp[0].intval), &i_tmp);
				if (((yyval.strval)=pkg_malloc(i_tmp+1))==0) {
					yyerror("cfg. parser: out of memory.\n");
					YYABORT;
				}
				memcpy( (yyval.strval), tmp, i_tmp);
				(yyval.strval)[i_tmp] = 0;
				}
#line 5040 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 244:
#line 1243 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.strval) = (yyvsp[0].strval);
		}
#line 5048 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 245:
#line 1248 "cfg.y" /* yacc.c:1645  */
    {
						if (rlist[DEFAULT_RT].a!=0) {
							yyerror("overwriting default "
								"request routing table");
							YYABORT;
						}
						push((yyvsp[-1].action), &rlist[DEFAULT_RT].a);
					}
#line 5061 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 246:
#line 1256 "cfg.y" /* yacc.c:1645  */
    {
						if ( strtol((yyvsp[-4].strval),&tmp,10)==0 && *tmp==0) {
							/* route[0] detected */
							if (rlist[DEFAULT_RT].a!=0) {
								yyerror("overwriting(2) default "
									"request routing table");
								YYABORT;
							}
							push((yyvsp[-1].action), &rlist[DEFAULT_RT].a);
						} else {
							i_tmp = get_script_route_idx((yyvsp[-4].strval),rlist,RT_NO,1);
							if (i_tmp==-1) YYABORT;
							push((yyvsp[-1].action), &rlist[i_tmp].a);
						}
					}
#line 5081 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 247:
#line 1271 "cfg.y" /* yacc.c:1645  */
    { yyerror("invalid  route  statement"); }
#line 5087 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 248:
#line 1274 "cfg.y" /* yacc.c:1645  */
    {
						i_tmp = get_script_route_idx((yyvsp[-4].strval),failure_rlist,
								FAILURE_RT_NO,1);
						if (i_tmp==-1) YYABORT;
						push((yyvsp[-1].action), &failure_rlist[i_tmp].a);
					}
#line 5098 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 249:
#line 1280 "cfg.y" /* yacc.c:1645  */
    { yyerror("invalid failure_route statement"); }
#line 5104 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 250:
#line 1283 "cfg.y" /* yacc.c:1645  */
    {
						if (onreply_rlist[DEFAULT_RT].a!=0) {
							yyerror("overwriting default "
								"onreply routing table");
							YYABORT;
						}
						push((yyvsp[-1].action), &onreply_rlist[DEFAULT_RT].a);
					}
#line 5117 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 251:
#line 1291 "cfg.y" /* yacc.c:1645  */
    {
						i_tmp = get_script_route_idx((yyvsp[-4].strval),onreply_rlist,
								ONREPLY_RT_NO,1);
						if (i_tmp==-1) YYABORT;
						push((yyvsp[-1].action), &onreply_rlist[i_tmp].a);
					}
#line 5128 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 252:
#line 1297 "cfg.y" /* yacc.c:1645  */
    { yyerror("invalid onreply_route statement"); }
#line 5134 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 253:
#line 1300 "cfg.y" /* yacc.c:1645  */
    {
						i_tmp = get_script_route_idx((yyvsp[-4].strval),branch_rlist,
								BRANCH_RT_NO,1);
						if (i_tmp==-1) YYABORT;
						push((yyvsp[-1].action), &branch_rlist[i_tmp].a);
					}
#line 5145 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 254:
#line 1306 "cfg.y" /* yacc.c:1645  */
    { yyerror("invalid branch_route statement"); }
#line 5151 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 255:
#line 1309 "cfg.y" /* yacc.c:1645  */
    {
						if (error_rlist.a!=0) {
							yyerror("overwriting default "
								"error routing table");
							YYABORT;
						}
						push((yyvsp[-1].action), &error_rlist.a);
					}
#line 5164 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 256:
#line 1317 "cfg.y" /* yacc.c:1645  */
    { yyerror("invalid error_route statement"); }
#line 5170 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 257:
#line 1320 "cfg.y" /* yacc.c:1645  */
    {
						if (local_rlist.a!=0) {
							yyerror("re-definition of local "
								"route detected");
							YYABORT;
						}
						push((yyvsp[-1].action), &local_rlist.a);
					}
#line 5183 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 258:
#line 1328 "cfg.y" /* yacc.c:1645  */
    { yyerror("invalid local_route statement"); }
#line 5189 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 259:
#line 1331 "cfg.y" /* yacc.c:1645  */
    {
						if (startup_rlist.a!=0) {
							yyerror("re-definition of startup "
								"route detected");
							YYABORT;
						}
						push((yyvsp[-1].action), &startup_rlist.a);
					}
#line 5202 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 260:
#line 1339 "cfg.y" /* yacc.c:1645  */
    { yyerror("invalid startup_route statement"); }
#line 5208 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 261:
#line 1342 "cfg.y" /* yacc.c:1645  */
    {
						i_tmp = 0;
						while (timer_rlist[i_tmp].a!=0 && i_tmp < TIMER_RT_NO) {
							i_tmp++;
						}
						if(i_tmp == TIMER_RT_NO) {
							yyerror("Too many timer routes defined\n");
							YYABORT;
						}
						timer_rlist[i_tmp].interval = (yyvsp[-4].intval);
						push((yyvsp[-1].action), &timer_rlist[i_tmp].a);
					}
#line 5225 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 262:
#line 1354 "cfg.y" /* yacc.c:1645  */
    { yyerror("invalid timer_route statement"); }
#line 5231 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 263:
#line 1358 "cfg.y" /* yacc.c:1645  */
    {
						i_tmp = 1;
						while (event_rlist[i_tmp].a !=0 && i_tmp < EVENT_RT_NO) {
							if (strcmp((yyvsp[-4].strval), event_rlist[i_tmp].name) == 0) {
								LM_ERR("Script route <%s> redefined\n", (yyvsp[-4].strval));
								YYABORT;
							}
							i_tmp++;
						}

						if (i_tmp == EVENT_RT_NO) {
							yyerror("Too many event routes defined\n");
							YYABORT;
						}

						event_rlist[i_tmp].name = (yyvsp[-4].strval);
						event_rlist[i_tmp].mode = EV_ROUTE_SYNC;

						push((yyvsp[-1].action), &event_rlist[i_tmp].a);
					}
#line 5256 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 264:
#line 1378 "cfg.y" /* yacc.c:1645  */
    {

						i_tmp = 1;
						while (event_rlist[i_tmp].a !=0 && i_tmp < EVENT_RT_NO) {
							if (strcmp((yyvsp[-6].strval), event_rlist[i_tmp].name) == 0) {
								LM_ERR("Script route <%s> redefined\n", (yyvsp[-6].strval));
								YYABORT;
							}
							i_tmp++;
						}

						if (i_tmp == EVENT_RT_NO) {
							yyerror("Too many event routes defined\n");
							YYABORT;
						}

						event_rlist[i_tmp].name = (yyvsp[-6].strval);
						event_rlist[i_tmp].mode = EV_ROUTE_SYNC;

						push((yyvsp[-1].action), &event_rlist[i_tmp].a);
					}
#line 5282 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 265:
#line 1399 "cfg.y" /* yacc.c:1645  */
    {

						i_tmp = 1;
						while (event_rlist[i_tmp].a !=0 && i_tmp < EVENT_RT_NO) {
							if (strcmp((yyvsp[-6].strval), event_rlist[i_tmp].name) == 0) {
								LM_ERR("Script route <%s> redefined\n", (yyvsp[-6].strval));
								YYABORT;
							}
							i_tmp++;
						}

						if (i_tmp == EVENT_RT_NO) {
							yyerror("Too many event routes defined\n");
							YYABORT;
						}

						event_rlist[i_tmp].name = (yyvsp[-6].strval);
						event_rlist[i_tmp].mode = EV_ROUTE_ASYNC;

						push((yyvsp[-1].action), &event_rlist[i_tmp].a);
					}
#line 5308 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 266:
#line 1420 "cfg.y" /* yacc.c:1645  */
    { yyerror("invalid event_route statement"); }
#line 5314 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 267:
#line 1424 "cfg.y" /* yacc.c:1645  */
    { (yyval.expr)=mk_exp(AND_OP, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 5320 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 268:
#line 1425 "cfg.y" /* yacc.c:1645  */
    { (yyval.expr)=mk_exp(OR_OP, (yyvsp[-2].expr), (yyvsp[0].expr));  }
#line 5326 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 269:
#line 1426 "cfg.y" /* yacc.c:1645  */
    { (yyval.expr)=mk_exp(NOT_OP, (yyvsp[0].expr), 0);  }
#line 5332 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 270:
#line 1427 "cfg.y" /* yacc.c:1645  */
    { (yyval.expr)=mk_exp(EVAL_OP, (yyvsp[-1].expr), 0); }
#line 5338 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 271:
#line 1428 "cfg.y" /* yacc.c:1645  */
    { (yyval.expr)=(yyvsp[-1].expr); }
#line 5344 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 272:
#line 1429 "cfg.y" /* yacc.c:1645  */
    { (yyval.expr)=(yyvsp[0].expr); }
#line 5350 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 273:
#line 1432 "cfg.y" /* yacc.c:1645  */
    {(yyval.intval)=EQUAL_OP; }
#line 5356 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 274:
#line 1433 "cfg.y" /* yacc.c:1645  */
    {(yyval.intval)=DIFF_OP; }
#line 5362 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 275:
#line 1436 "cfg.y" /* yacc.c:1645  */
    {(yyval.intval)=GT_OP; }
#line 5368 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 276:
#line 1437 "cfg.y" /* yacc.c:1645  */
    {(yyval.intval)=LT_OP; }
#line 5374 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 277:
#line 1438 "cfg.y" /* yacc.c:1645  */
    {(yyval.intval)=GTE_OP; }
#line 5380 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 278:
#line 1439 "cfg.y" /* yacc.c:1645  */
    {(yyval.intval)=LTE_OP; }
#line 5386 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 279:
#line 1441 "cfg.y" /* yacc.c:1645  */
    {(yyval.intval)=MATCH_OP; }
#line 5392 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 280:
#line 1442 "cfg.y" /* yacc.c:1645  */
    {(yyval.intval)=NOTMATCH_OP; }
#line 5398 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 281:
#line 1445 "cfg.y" /* yacc.c:1645  */
    {(yyval.intval)=(yyvsp[0].intval); }
#line 5404 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 282:
#line 1446 "cfg.y" /* yacc.c:1645  */
    {(yyval.intval)=(yyvsp[0].intval); }
#line 5410 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 283:
#line 1449 "cfg.y" /* yacc.c:1645  */
    {(yyval.intval)=(yyvsp[0].intval); }
#line 5416 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 284:
#line 1450 "cfg.y" /* yacc.c:1645  */
    {(yyval.intval)=(yyvsp[0].intval); }
#line 5422 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 285:
#line 1451 "cfg.y" /* yacc.c:1645  */
    {(yyval.intval)=(yyvsp[0].intval); }
#line 5428 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 286:
#line 1455 "cfg.y" /* yacc.c:1645  */
    {
				spec = (pv_spec_t*)pkg_malloc(sizeof(pv_spec_t));
				if (spec==NULL){
					yyerror("no more pkg memory\n");
					YYABORT;
				}
				memset(spec, 0, sizeof(pv_spec_t));
				tstr.s = (yyvsp[0].strval);
				tstr.len = strlen(tstr.s);
				if(pv_parse_spec(&tstr, spec)==NULL)
				{
					yyerror("unknown script variable");
				}

				(yyval.specval) = spec;
			}
#line 5449 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 287:
#line 1471 "cfg.y" /* yacc.c:1645  */
    {
			(yyval.specval)=0; yyerror("invalid script variable name");
		}
#line 5457 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 288:
#line 1476 "cfg.y" /* yacc.c:1645  */
    {(yyval.expr)=(yyvsp[0].expr); }
#line 5463 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 289:
#line 1477 "cfg.y" /* yacc.c:1645  */
    {(yyval.expr)=mk_elem( NO_OP, ACTION_O, 0, ACTIONS_ST, (yyvsp[0].action) ); }
#line 5469 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 290:
#line 1478 "cfg.y" /* yacc.c:1645  */
    {(yyval.expr)=mk_elem( NO_OP, NUMBER_O, 0, NUMBER_ST,
											(void*)(yyvsp[0].intval) ); }
#line 5476 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 291:
#line 1480 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.expr)=mk_elem(NO_OP, SCRIPTVAR_O,0,SCRIPTVAR_ST,(void*)(yyvsp[0].specval));
			}
#line 5484 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 292:
#line 1485 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.expr)=mk_elem( (yyvsp[-1].intval), SCRIPTVAR_O,(void*)(yyvsp[-2].specval),SCRIPTVAR_ST,(void*)(yyvsp[0].specval));
			}
#line 5492 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 293:
#line 1488 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.expr)=mk_elem( (yyvsp[-1].intval), SCRIPTVAR_O,(void*)(yyvsp[-2].specval),STR_ST,(yyvsp[0].strval));
			}
#line 5500 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 294:
#line 1491 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.expr)=mk_elem( (yyvsp[-1].intval), SCRIPTVAR_O,(void*)(yyvsp[-2].specval),NUMBER_ST,(void *)(yyvsp[0].intval));
			}
#line 5508 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 295:
#line 1494 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.expr)=mk_elem( (yyvsp[-1].intval), SCRIPTVAR_O,(void*)(yyvsp[-2].specval), NULLV_ST, 0);
			}
#line 5516 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 296:
#line 1497 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.expr)=mk_elem((yyvsp[-1].intval), SCRIPTVAR_O, (void*)(yyvsp[-2].specval), NET_ST, (yyvsp[0].ipnet));
			}
#line 5524 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 297:
#line 1504 "cfg.y" /* yacc.c:1645  */
    {
				if (parse_ipnet((yyvsp[0].strval), strlen((yyvsp[0].strval)), &net_tmp) < 0)
					yyerror("unable to parse ip and/or netmask\n");

				(yyval.ipnet) = net_tmp;
			}
#line 5535 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 298:
#line 1510 "cfg.y" /* yacc.c:1645  */
    { (yyval.ipnet)=mk_net_bitlen((yyvsp[0].ipaddr), (yyvsp[0].ipaddr)->len*8); }
#line 5541 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 299:
#line 1514 "cfg.y" /* yacc.c:1645  */
    {(yyval.strval)=".";}
#line 5547 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 300:
#line 1515 "cfg.y" /* yacc.c:1645  */
    {(yyval.strval)="-"; }
#line 5553 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 301:
#line 1518 "cfg.y" /* yacc.c:1645  */
    { (yyval.strval)=(yyvsp[0].strval); }
#line 5559 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 302:
#line 1519 "cfg.y" /* yacc.c:1645  */
    { (yyval.strval)=(char*)pkg_malloc(strlen((yyvsp[-2].strval))+1+strlen((yyvsp[0].strval))+1);
						  if ((yyval.strval)==0){
							LM_CRIT("cfg. parser: memory allocation"
										" failure while parsing host\n");
							YYABORT;
						  }else{
							memcpy((yyval.strval), (yyvsp[-2].strval), strlen((yyvsp[-2].strval)));
							(yyval.strval)[strlen((yyvsp[-2].strval))]=*(yyvsp[-1].strval);
							memcpy((yyval.strval)+strlen((yyvsp[-2].strval))+1, (yyvsp[0].strval), strlen((yyvsp[0].strval)));
							(yyval.strval)[strlen((yyvsp[-2].strval))+1+strlen((yyvsp[0].strval))]=0;
						  }
						  pkg_free((yyvsp[-2].strval)); pkg_free((yyvsp[0].strval));
						}
#line 5577 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 303:
#line 1532 "cfg.y" /* yacc.c:1645  */
    { (yyval.strval)=0; pkg_free((yyvsp[-2].strval)); yyerror("invalid hostname (use quotes if hostname has config keywords)"); }
#line 5583 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 304:
#line 1536 "cfg.y" /* yacc.c:1645  */
    { (yyval.intval) = EQ_T; }
#line 5589 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 305:
#line 1537 "cfg.y" /* yacc.c:1645  */
    { (yyval.intval) = COLONEQ_T; }
#line 5595 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 306:
#line 1538 "cfg.y" /* yacc.c:1645  */
    { (yyval.intval) = PLUSEQ_T; }
#line 5601 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 307:
#line 1539 "cfg.y" /* yacc.c:1645  */
    { (yyval.intval) = MINUSEQ_T;}
#line 5607 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 308:
#line 1540 "cfg.y" /* yacc.c:1645  */
    { (yyval.intval) = DIVEQ_T; }
#line 5613 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 309:
#line 1541 "cfg.y" /* yacc.c:1645  */
    { (yyval.intval) = MULTEQ_T; }
#line 5619 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 310:
#line 1542 "cfg.y" /* yacc.c:1645  */
    { (yyval.intval) = MODULOEQ_T; }
#line 5625 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 311:
#line 1543 "cfg.y" /* yacc.c:1645  */
    { (yyval.intval) = BANDEQ_T; }
#line 5631 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 312:
#line 1544 "cfg.y" /* yacc.c:1645  */
    { (yyval.intval) = BOREQ_T; }
#line 5637 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 313:
#line 1545 "cfg.y" /* yacc.c:1645  */
    { (yyval.intval) = BXOREQ_T; }
#line 5643 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 314:
#line 1549 "cfg.y" /* yacc.c:1645  */
    { (yyval.expr) = mk_elem(VALUE_OP, NUMBERV_O, (void*)(yyvsp[0].intval), 0, 0); }
#line 5649 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 315:
#line 1550 "cfg.y" /* yacc.c:1645  */
    { (yyval.expr) = mk_elem(VALUE_OP, STRINGV_O, (yyvsp[0].strval), 0, 0); }
#line 5655 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 316:
#line 1551 "cfg.y" /* yacc.c:1645  */
    { (yyval.expr) = mk_elem(VALUE_OP, SCRIPTVAR_O, (yyvsp[0].specval), 0, 0); }
#line 5661 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 317:
#line 1552 "cfg.y" /* yacc.c:1645  */
    { (yyval.expr)= (yyvsp[0].expr); }
#line 5667 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 318:
#line 1553 "cfg.y" /* yacc.c:1645  */
    { (yyval.expr)=mk_elem( NO_OP, ACTION_O, 0, ACTIONS_ST, (yyvsp[0].action) ); }
#line 5673 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 319:
#line 1554 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.expr) = mk_elem(PLUS_OP, EXPR_O, (yyvsp[-2].expr), EXPR_ST, (yyvsp[0].expr));
			}
#line 5681 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 320:
#line 1557 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.expr) = mk_elem(MINUS_OP, EXPR_O, (yyvsp[-2].expr), EXPR_ST, (yyvsp[0].expr));
			}
#line 5689 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 321:
#line 1560 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.expr) = mk_elem(MULT_OP, EXPR_O, (yyvsp[-2].expr), EXPR_ST, (yyvsp[0].expr));
			}
#line 5697 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 322:
#line 1563 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.expr) = mk_elem(DIV_OP, EXPR_O, (yyvsp[-2].expr), EXPR_ST, (yyvsp[0].expr));
			}
#line 5705 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 323:
#line 1566 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.expr) = mk_elem(MODULO_OP, EXPR_O, (yyvsp[-2].expr), EXPR_ST, (yyvsp[0].expr));
			}
#line 5713 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 324:
#line 1569 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.expr) = mk_elem(BAND_OP, EXPR_O, (yyvsp[-2].expr), EXPR_ST, (yyvsp[0].expr));
			}
#line 5721 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 325:
#line 1572 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.expr) = mk_elem(BOR_OP, EXPR_O, (yyvsp[-2].expr), EXPR_ST, (yyvsp[0].expr));
			}
#line 5729 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 326:
#line 1575 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.expr) = mk_elem(BXOR_OP, EXPR_O, (yyvsp[-2].expr), EXPR_ST, (yyvsp[0].expr));
			}
#line 5737 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 327:
#line 1578 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.expr) = mk_elem(BLSHIFT_OP, EXPR_O, (yyvsp[-2].expr), EXPR_ST, (yyvsp[0].expr));
			}
#line 5745 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 328:
#line 1581 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.expr) = mk_elem(BRSHIFT_OP, EXPR_O, (yyvsp[-2].expr), EXPR_ST, (yyvsp[0].expr));
			}
#line 5753 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 329:
#line 1584 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.expr) = mk_elem(BNOT_OP, EXPR_O, (yyvsp[0].expr), 0, 0);
			}
#line 5761 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 330:
#line 1587 "cfg.y" /* yacc.c:1645  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 5767 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 331:
#line 1590 "cfg.y" /* yacc.c:1645  */
    {
			if(!pv_is_w((yyvsp[-2].specval)))
				yyerror("invalid left operand in assignment");
			if((yyvsp[-2].specval)->trans!=0)
				yyerror("transformations not accepted in left side "
					"of assignment");

			mk_action2( (yyval.action), (yyvsp[-1].intval),
					SCRIPTVAR_ST,
					EXPR_ST,
					(yyvsp[-2].specval),
					(yyvsp[0].expr));
		}
#line 5785 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 332:
#line 1603 "cfg.y" /* yacc.c:1645  */
    {
			if(!pv_is_w((yyvsp[-2].specval)))
				yyerror("invalid left operand in assignment");
			if((yyvsp[-2].specval)->trans!=0)
				yyerror("transformations not accepted in left side "
					"of assignment");

			mk_action2( (yyval.action), EQ_T,
					SCRIPTVAR_ST,
					NULLV_ST,
					(yyvsp[-2].specval),
					0);
		}
#line 5803 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 333:
#line 1616 "cfg.y" /* yacc.c:1645  */
    {
			if(!pv_is_w((yyvsp[-2].specval)))
				yyerror("invalid left operand in assignment");
			/* not all can get NULL with := */
			switch((yyvsp[-2].specval)->type) {
				case PVT_AVP:
				break;
				default:
					yyerror("invalid left operand in NULL assignment");
			}
			if((yyvsp[-2].specval)->trans!=0)
				yyerror("transformations not accepted in left side "
					"of assignment");

			mk_action2( (yyval.action), COLONEQ_T,
					SCRIPTVAR_ST,
					NULLV_ST,
					(yyvsp[-2].specval),
					0);
		}
#line 5828 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 334:
#line 1638 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=(yyvsp[0].action); }
#line 5834 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 335:
#line 1639 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=(yyvsp[0].action); }
#line 5840 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 336:
#line 1640 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=(yyvsp[0].action); }
#line 5846 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 337:
#line 1641 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=(yyvsp[-1].action); }
#line 5852 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 338:
#line 1642 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; }
#line 5858 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 339:
#line 1645 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=(yyvsp[0].action); }
#line 5864 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 340:
#line 1646 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=(yyvsp[-1].action); }
#line 5870 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 341:
#line 1647 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; }
#line 5876 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 342:
#line 1650 "cfg.y" /* yacc.c:1645  */
    {(yyval.action)=append_action((yyvsp[-1].action), (yyvsp[0].action)); }
#line 5882 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 343:
#line 1651 "cfg.y" /* yacc.c:1645  */
    {(yyval.action)=(yyvsp[0].action);}
#line 5888 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 344:
#line 1652 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("bad command!)"); }
#line 5894 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 345:
#line 1655 "cfg.y" /* yacc.c:1645  */
    {(yyval.action)=(yyvsp[-1].action);}
#line 5900 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 346:
#line 1656 "cfg.y" /* yacc.c:1645  */
    {(yyval.action)=(yyvsp[0].action);}
#line 5906 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 347:
#line 1657 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=(yyvsp[0].action);}
#line 5912 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 348:
#line 1658 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=(yyvsp[0].action);}
#line 5918 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 349:
#line 1659 "cfg.y" /* yacc.c:1645  */
    {(yyval.action)=(yyvsp[0].action);}
#line 5924 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 350:
#line 1660 "cfg.y" /* yacc.c:1645  */
    {(yyval.action)=(yyvsp[-1].action);}
#line 5930 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 351:
#line 1661 "cfg.y" /* yacc.c:1645  */
    {(yyval.action)=0;}
#line 5936 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 352:
#line 1662 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("bad command: missing ';'?"); }
#line 5942 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 353:
#line 1665 "cfg.y" /* yacc.c:1645  */
    { mk_action3( (yyval.action), IF_T,
													 EXPR_ST,
													 ACTIONS_ST,
													 NOSUBTYPE,
													 (yyvsp[-1].expr),
													 (yyvsp[0].action),
													 0);
									}
#line 5955 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 354:
#line 1673 "cfg.y" /* yacc.c:1645  */
    { mk_action3( (yyval.action), IF_T,
													 EXPR_ST,
													 ACTIONS_ST,
													 ACTIONS_ST,
													 (yyvsp[-3].expr),
													 (yyvsp[-2].action),
													 (yyvsp[0].action));
									}
#line 5968 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 355:
#line 1683 "cfg.y" /* yacc.c:1645  */
    { mk_action2( (yyval.action), WHILE_T,
													 EXPR_ST,
													 ACTIONS_ST,
													 (yyvsp[-1].expr),
													 (yyvsp[0].action));
									}
#line 5979 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 356:
#line 1691 "cfg.y" /* yacc.c:1645  */
    {
					if ((yyvsp[-4].specval)->type != PVT_SCRIPTVAR &&
					    (yyvsp[-4].specval)->type != PVT_AVP &&
						pv_type((yyvsp[-4].specval)->type) != PVT_JSON) {
						yyerror("\nfor-each statement: only \"var\", \"avp\" "
					            "and \"json\" iterators are supported!");
					}

					mk_action3( (yyval.action), FOR_EACH_T,
					            SCRIPTVAR_ST,
					            SCRIPTVAR_ST,
					            ACTIONS_ST,
					            (yyvsp[-4].specval),
					            (yyvsp[-2].specval),
					            (yyvsp[0].action));
					}
#line 6000 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 357:
#line 1709 "cfg.y" /* yacc.c:1645  */
    {
											mk_action2( (yyval.action), SWITCH_T,
														SCRIPTVAR_ST,
														ACTIONS_ST,
														(yyvsp[-4].specval),
														(yyvsp[-1].action));
									}
#line 6012 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 358:
#line 1718 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=append_action((yyvsp[-1].action), (yyvsp[0].action)); }
#line 6018 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 359:
#line 1719 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=(yyvsp[0].action); }
#line 6024 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 360:
#line 1721 "cfg.y" /* yacc.c:1645  */
    {(yyval.action)=append_action((yyvsp[-1].action), (yyvsp[0].action)); }
#line 6030 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 361:
#line 1722 "cfg.y" /* yacc.c:1645  */
    {(yyval.action)=(yyvsp[0].action);}
#line 6036 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 362:
#line 1726 "cfg.y" /* yacc.c:1645  */
    { mk_action3( (yyval.action), CASE_T,
													NUMBER_ST,
													ACTIONS_ST,
													NUMBER_ST,
													(void*)(yyvsp[-4].intval),
													(yyvsp[-2].action),
													(void*)1);
											}
#line 6049 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 363:
#line 1735 "cfg.y" /* yacc.c:1645  */
    { mk_action3( (yyval.action), CASE_T,
													NUMBER_ST,
													ACTIONS_ST,
													NUMBER_ST,
													(void*)(yyvsp[-3].intval),
													0,
													(void*)1);
											}
#line 6062 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 364:
#line 1743 "cfg.y" /* yacc.c:1645  */
    { mk_action3( (yyval.action), CASE_T,
													NUMBER_ST,
													ACTIONS_ST,
													NUMBER_ST,
													(void*)(yyvsp[-2].intval),
													(yyvsp[0].action),
													(void*)0);
									}
#line 6075 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 365:
#line 1751 "cfg.y" /* yacc.c:1645  */
    { mk_action3( (yyval.action), CASE_T,
													NUMBER_ST,
													ACTIONS_ST,
													NUMBER_ST,
													(void*)(yyvsp[-1].intval),
													0,
													(void*)0);
							}
#line 6088 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 366:
#line 1760 "cfg.y" /* yacc.c:1645  */
    { mk_action3( (yyval.action), CASE_T,
													STR_ST,
													ACTIONS_ST,
													NUMBER_ST,
													(void*)(yyvsp[-4].strval),
													(yyvsp[-2].action),
													(void*)1);
											}
#line 6101 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 367:
#line 1769 "cfg.y" /* yacc.c:1645  */
    { mk_action3( (yyval.action), CASE_T,
													STR_ST,
													ACTIONS_ST,
													NUMBER_ST,
													(void*)(yyvsp[-3].strval),
													0,
													(void*)1);
											}
#line 6114 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 368:
#line 1777 "cfg.y" /* yacc.c:1645  */
    { mk_action3( (yyval.action), CASE_T,
													STR_ST,
													ACTIONS_ST,
													NUMBER_ST,
													(void*)(yyvsp[-2].strval),
													(yyvsp[0].action),
													(void*)0);
									}
#line 6127 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 369:
#line 1785 "cfg.y" /* yacc.c:1645  */
    { mk_action3( (yyval.action), CASE_T,
													STR_ST,
													ACTIONS_ST,
													NUMBER_ST,
													(void*)(yyvsp[-1].strval),
													0,
													(void*)0);
							}
#line 6140 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 370:
#line 1796 "cfg.y" /* yacc.c:1645  */
    { mk_action2( (yyval.action), DEFAULT_T,
													ACTIONS_ST,
													0,
													(yyvsp[0].action),
													0);
									}
#line 6151 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 371:
#line 1802 "cfg.y" /* yacc.c:1645  */
    { mk_action2( (yyval.action), DEFAULT_T,
													ACTIONS_ST,
													0,
													0,
													0);
									}
#line 6162 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 372:
#line 1810 "cfg.y" /* yacc.c:1645  */
    {
										elems[1].type = STRING_ST;
										elems[1].u.data = (yyvsp[0].strval);
										(yyval.intval)=1;
										}
#line 6172 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 373:
#line 1815 "cfg.y" /* yacc.c:1645  */
    {
										if ((yyvsp[-2].intval)+1>=MAX_ACTION_ELEMS) {
											yyerror("too many arguments "
												"in function\n");
											(yyval.intval)=0;
										}
										elems[(yyvsp[-2].intval)+1].type = STRING_ST;
										elems[(yyvsp[-2].intval)+1].u.data = (yyvsp[0].strval);
										(yyval.intval)=(yyvsp[-2].intval)+1;
										}
#line 6187 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 374:
#line 1825 "cfg.y" /* yacc.c:1645  */
    {
										elems[1].type = NULLV_ST;
										elems[1].u.data = NULL;
										elems[2].type = NULLV_ST;
										elems[2].u.data = NULL;
										(yyval.intval)=2;
										}
#line 6199 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 375:
#line 1832 "cfg.y" /* yacc.c:1645  */
    {
										elems[1].type = NULLV_ST;
										elems[1].u.data = NULL;
										elems[2].type = STRING_ST;
										elems[2].u.data = (yyvsp[0].strval);
										(yyval.intval)=2;
										}
#line 6211 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 376:
#line 1839 "cfg.y" /* yacc.c:1645  */
    {
										if ((yyvsp[-1].intval)+1>=MAX_ACTION_ELEMS) {
											yyerror("too many arguments "
												"in function\n");
											(yyval.intval)=0;
										}
										elems[(yyvsp[-1].intval)+1].type = NULLV_ST;
										elems[(yyvsp[-1].intval)+1].u.data = NULL;
										(yyval.intval)=(yyvsp[-1].intval)+1;
										}
#line 6226 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 377:
#line 1849 "cfg.y" /* yacc.c:1645  */
    {
										(yyval.intval)=0;
										yyerror("numbers used as parameters -"
											" they should be quoted");
										}
#line 6236 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 378:
#line 1854 "cfg.y" /* yacc.c:1645  */
    {
										(yyval.intval)=0;
										yyerror("numbers used as parameters -"
											" they should be quoted");
										}
#line 6246 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 379:
#line 1859 "cfg.y" /* yacc.c:1645  */
    {
										(yyval.intval)=0;
										yyerror("numbers used as parameters -"
											" they should be quoted");
										}
#line 6256 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 380:
#line 1866 "cfg.y" /* yacc.c:1645  */
    {
						route_elems[0].type = STRING_ST;
						route_elems[0].u.data = (yyvsp[0].strval);
						(yyval.intval)=1;
			}
#line 6266 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 381:
#line 1871 "cfg.y" /* yacc.c:1645  */
    {
						route_elems[0].type = NUMBER_ST;
						route_elems[0].u.data = (void*)(long)(yyvsp[0].intval);
						(yyval.intval)=1;
			}
#line 6276 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 382:
#line 1876 "cfg.y" /* yacc.c:1645  */
    {
						route_elems[0].type = NULLV_ST;
						route_elems[0].u.data = 0;
						(yyval.intval)=1;
			}
#line 6286 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 383:
#line 1881 "cfg.y" /* yacc.c:1645  */
    {
						route_elems[0].type = SCRIPTVAR_ST;
						route_elems[0].u.data = (yyvsp[0].specval);
						(yyval.intval)=1;
			}
#line 6296 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 384:
#line 1886 "cfg.y" /* yacc.c:1645  */
    {
						if ((yyvsp[-2].intval)>=MAX_ACTION_ELEMS) {
							yyerror("too many arguments in function\n");
							(yyval.intval)=-1;
						} else {
							route_elems[(yyvsp[-2].intval)].type = STRING_ST;
							route_elems[(yyvsp[-2].intval)].u.data = (yyvsp[0].strval);
							(yyval.intval)=(yyvsp[-2].intval)+1;
						}
			}
#line 6311 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 385:
#line 1896 "cfg.y" /* yacc.c:1645  */
    {
						if ((yyvsp[-2].intval)>=MAX_ACTION_ELEMS) {
							yyerror("too many arguments in function\n");
							(yyval.intval)=-1;
						} else {
							route_elems[(yyvsp[-2].intval)].type = NUMBER_ST;
							route_elems[(yyvsp[-2].intval)].u.data = (void*)(long)(yyvsp[0].intval);
							(yyval.intval)=(yyvsp[-2].intval)+1;
						}
			}
#line 6326 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 386:
#line 1906 "cfg.y" /* yacc.c:1645  */
    {
						if ((yyvsp[-2].intval)+1>=MAX_ACTION_ELEMS) {
							yyerror("too many arguments in function\n");
							(yyval.intval)=-1;
						} else {
							route_elems[(yyvsp[-2].intval)].type = SCRIPTVAR_ST;
							route_elems[(yyvsp[-2].intval)].u.data = (yyvsp[0].specval);
							(yyval.intval)=(yyvsp[-2].intval)+1;
						}
			}
#line 6341 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 387:
#line 1916 "cfg.y" /* yacc.c:1645  */
    {
						if ((yyvsp[-2].intval)+1>=MAX_ACTION_ELEMS) {
							yyerror("too many arguments in function\n");
							(yyval.intval)=-1;
						} else {
							route_elems[(yyvsp[-2].intval)].type = NULLV_ST;
							route_elems[(yyvsp[-2].intval)].u.data = 0;
							(yyval.intval)=(yyvsp[-2].intval)+1;
						}
			}
#line 6356 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 388:
#line 1928 "cfg.y" /* yacc.c:1645  */
    {
				cmd_tmp=(void*)find_acmd_export_t((yyvsp[-2].strval), 0);
				if (cmd_tmp==0){
					yyerrorf("unknown async command <%s>, "
						"missing loadmodule?", (yyvsp[-2].strval));
					(yyval.action)=0;
				}else{
					elems[0].type = ACMD_ST;
					elems[0].u.data = cmd_tmp;
					mk_action_((yyval.action), AMODULE_T, 1, elems);
				}
			}
#line 6373 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 389:
#line 1940 "cfg.y" /* yacc.c:1645  */
    {
				cmd_tmp=(void*)find_acmd_export_t((yyvsp[-3].strval), (yyvsp[-1].intval));
				if (cmd_tmp==0){
					yyerrorf("unknown async command <%s>, "
						"missing loadmodule?", (yyvsp[-3].strval));
					(yyval.action)=0;
				}else{
					elems[0].type = ACMD_ST;
					elems[0].u.data = cmd_tmp;
					mk_action_((yyval.action), AMODULE_T, (yyvsp[-1].intval)+1, elems);
				}
			}
#line 6390 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 390:
#line 1952 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.action)=0;
				yyerrorf("bad arguments for command <%s>", (yyvsp[-3].strval));
			}
#line 6399 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 391:
#line 1956 "cfg.y" /* yacc.c:1645  */
    {
				(yyval.action)=0;
				yyerrorf("bare word <%s> found, command calls need '()'", (yyvsp[-1].strval));
			}
#line 6408 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 392:
#line 1962 "cfg.y" /* yacc.c:1645  */
    { mk_action2( (yyval.action), FORWARD_T,
											STRING_ST,
											0,
											(yyvsp[-1].strval),
											0);
										}
#line 6419 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 393:
#line 1968 "cfg.y" /* yacc.c:1645  */
    {
										mk_action2( (yyval.action), FORWARD_T,
											0,
											0,
											0,
											0);
										}
#line 6431 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 394:
#line 1975 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
#line 6437 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 395:
#line 1976 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("bad forward "
										"argument"); }
#line 6444 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 396:
#line 1979 "cfg.y" /* yacc.c:1645  */
    { mk_action2( (yyval.action), SEND_T,
											STRING_ST,
											0,
											(yyvsp[-1].strval),
											0);
										}
#line 6455 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 397:
#line 1985 "cfg.y" /* yacc.c:1645  */
    { mk_action2( (yyval.action), SEND_T,
											STRING_ST,
											STRING_ST,
											(yyvsp[-3].strval),
											(yyvsp[-1].strval));
										}
#line 6466 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 398:
#line 1991 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
#line 6472 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 399:
#line 1992 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("bad send"
													"argument"); }
#line 6479 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 400:
#line 1994 "cfg.y" /* yacc.c:1645  */
    {
			mk_action2( (yyval.action), ASSERT_T, EXPR_ST, STRING_ST, (yyvsp[-3].expr), (yyvsp[-1].strval));
			}
#line 6487 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 401:
#line 1997 "cfg.y" /* yacc.c:1645  */
    {mk_action2( (yyval.action), DROP_T,0, 0, 0, 0); }
#line 6493 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 402:
#line 1998 "cfg.y" /* yacc.c:1645  */
    {mk_action2( (yyval.action), DROP_T,0, 0, 0, 0); }
#line 6499 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 403:
#line 1999 "cfg.y" /* yacc.c:1645  */
    {mk_action2( (yyval.action), EXIT_T,0, 0, 0, 0); }
#line 6505 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 404:
#line 2000 "cfg.y" /* yacc.c:1645  */
    {mk_action2( (yyval.action), EXIT_T,0, 0, 0, 0); }
#line 6511 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 405:
#line 2001 "cfg.y" /* yacc.c:1645  */
    {mk_action2( (yyval.action), RETURN_T,
																NUMBER_ST,
																0,
																(void*)(yyvsp[-1].intval),
																0);
												}
#line 6522 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 406:
#line 2007 "cfg.y" /* yacc.c:1645  */
    {mk_action2( (yyval.action), RETURN_T,
																SCRIPTVAR_ST,
																0,
																(void*)(yyvsp[-1].specval),
																0);
												}
#line 6533 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 407:
#line 2013 "cfg.y" /* yacc.c:1645  */
    {mk_action2( (yyval.action), RETURN_T,
																NUMBER_ST,
																0,
																(void*)1,
																0);
												}
#line 6544 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 408:
#line 2019 "cfg.y" /* yacc.c:1645  */
    {mk_action2( (yyval.action), RETURN_T,
																NUMBER_ST,
																0,
																(void*)1,
																0);
												}
#line 6555 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 409:
#line 2025 "cfg.y" /* yacc.c:1645  */
    {mk_action2( (yyval.action), LOG_T, NUMBER_ST,
													STRING_ST,(void*)4,(yyvsp[-1].strval));
									}
#line 6563 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 410:
#line 2028 "cfg.y" /* yacc.c:1645  */
    {mk_action2( (yyval.action), LOG_T,
																NUMBER_ST,
																STRING_ST,
																(void*)(yyvsp[-3].intval),
																(yyvsp[-1].strval));
												}
#line 6574 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 411:
#line 2034 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
#line 6580 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 412:
#line 2035 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("bad log"
									"argument"); }
#line 6587 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 413:
#line 2037 "cfg.y" /* yacc.c:1645  */
    {
			mk_action2((yyval.action), SETFLAG_T, NUMBER_ST, 0, (void *)(yyvsp[-1].intval), 0 );
			}
#line 6595 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 414:
#line 2040 "cfg.y" /* yacc.c:1645  */
    {mk_action2((yyval.action), SETFLAG_T, STR_ST, 0,
													(void *)(yyvsp[-1].strval), 0 ); }
#line 6602 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 415:
#line 2042 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("missing '(' or ')'?"); }
#line 6608 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 416:
#line 2043 "cfg.y" /* yacc.c:1645  */
    {mk_action2( (yyval.action), RESETFLAG_T,
										NUMBER_ST, 0, (void *)(yyvsp[-1].intval), 0 ); }
#line 6615 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 417:
#line 2045 "cfg.y" /* yacc.c:1645  */
    {mk_action2( (yyval.action), RESETFLAG_T,
										STR_ST, 0, (void *)(yyvsp[-1].strval), 0 ); }
#line 6622 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 418:
#line 2047 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("missing '(' or ')'?"); }
#line 6628 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 419:
#line 2048 "cfg.y" /* yacc.c:1645  */
    {mk_action2( (yyval.action), ISFLAGSET_T,
										NUMBER_ST, 0, (void *)(yyvsp[-1].intval), 0 ); }
#line 6635 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 420:
#line 2050 "cfg.y" /* yacc.c:1645  */
    {mk_action2( (yyval.action), ISFLAGSET_T,
										STR_ST, 0, (void *)(yyvsp[-1].strval), 0 ); }
#line 6642 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 421:
#line 2052 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("missing '(' or ')'?"); }
#line 6648 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 422:
#line 2053 "cfg.y" /* yacc.c:1645  */
    {mk_action2( (yyval.action),
													SETBFLAG_T,
													NUMBER_ST, NUMBER_ST,
													(void *)(yyvsp[-3].intval), (void *)(yyvsp[-1].intval) ); }
#line 6657 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 423:
#line 2057 "cfg.y" /* yacc.c:1645  */
    {mk_action2( (yyval.action),
													SETBFLAG_T,
													NUMBER_ST, STR_ST,
													(void *)(yyvsp[-3].intval), (void *)(yyvsp[-1].strval) ); }
#line 6666 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 424:
#line 2061 "cfg.y" /* yacc.c:1645  */
    {mk_action2( (yyval.action), SETBFLAG_T,
													NUMBER_ST, NUMBER_ST,
													0, (void *)(yyvsp[-1].intval) ); }
#line 6674 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 425:
#line 2064 "cfg.y" /* yacc.c:1645  */
    {mk_action2( (yyval.action), SETBFLAG_T,
													NUMBER_ST, STR_ST,
													0, (void *)(yyvsp[-1].strval) ); }
#line 6682 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 426:
#line 2067 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("missing '(' or ')'?"); }
#line 6688 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 427:
#line 2068 "cfg.y" /* yacc.c:1645  */
    {mk_action2( (yyval.action),
													RESETBFLAG_T,
													NUMBER_ST, NUMBER_ST,
													(void *)(yyvsp[-3].intval), (void *)(yyvsp[-1].intval) ); }
#line 6697 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 428:
#line 2072 "cfg.y" /* yacc.c:1645  */
    {mk_action2( (yyval.action),
													RESETBFLAG_T,
													NUMBER_ST, STR_ST,
													(void *)(yyvsp[-3].intval), (void *)(yyvsp[-1].strval) ); }
#line 6706 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 429:
#line 2076 "cfg.y" /* yacc.c:1645  */
    {mk_action2( (yyval.action),
													RESETBFLAG_T,
													NUMBER_ST, NUMBER_ST,
													0, (void *)(yyvsp[-1].intval) ); }
#line 6715 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 430:
#line 2080 "cfg.y" /* yacc.c:1645  */
    {mk_action2( (yyval.action),
													RESETBFLAG_T,
													NUMBER_ST, STR_ST,
													0, (void *)(yyvsp[-1].strval) ); }
#line 6724 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 431:
#line 2084 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("missing '(' or ')'?"); }
#line 6730 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 432:
#line 2085 "cfg.y" /* yacc.c:1645  */
    {mk_action2( (yyval.action),
													ISBFLAGSET_T,
													NUMBER_ST, NUMBER_ST,
													(void *)(yyvsp[-3].intval), (void *)(yyvsp[-1].intval) ); }
#line 6739 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 433:
#line 2089 "cfg.y" /* yacc.c:1645  */
    {mk_action2( (yyval.action),
													ISBFLAGSET_T,
													NUMBER_ST, STR_ST,
													(void *)(yyvsp[-3].intval), (void *)(yyvsp[-1].strval) ); }
#line 6748 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 434:
#line 2093 "cfg.y" /* yacc.c:1645  */
    {mk_action2( (yyval.action),
													ISBFLAGSET_T,
													NUMBER_ST, NUMBER_ST,
													0, (void *)(yyvsp[-1].intval) ); }
#line 6757 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 435:
#line 2097 "cfg.y" /* yacc.c:1645  */
    {mk_action2( (yyval.action),
													ISBFLAGSET_T,
													NUMBER_ST, STR_ST,
													0, (void *)(yyvsp[-1].strval) ); }
#line 6766 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 436:
#line 2101 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("missing '(' or ')'?"); }
#line 6772 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 437:
#line 2102 "cfg.y" /* yacc.c:1645  */
    {mk_action2( (yyval.action), ERROR_T,
																STRING_ST,
																STRING_ST,
																(yyvsp[-3].strval),
																(yyvsp[-1].strval));
												  }
#line 6783 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 438:
#line 2108 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
#line 6789 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 439:
#line 2109 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("bad error"
														"argument"); }
#line 6796 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 440:
#line 2111 "cfg.y" /* yacc.c:1645  */
    {
						i_tmp = get_script_route_idx( (yyvsp[-1].strval), rlist, RT_NO, 0);
						if (i_tmp==-1) yyerror("too many script routes");
						mk_action2( (yyval.action), ROUTE_T, NUMBER_ST,
							0, (void*)(long)i_tmp, 0);
					}
#line 6807 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 441:
#line 2118 "cfg.y" /* yacc.c:1645  */
    {
						i_tmp = get_script_route_idx( (yyvsp[-3].strval), rlist, RT_NO, 0);
						if (i_tmp==-1) yyerror("too many script routes");
						if ((yyvsp[-1].intval) <= 0) yyerror("too many route parameters");

						/* duplicate the list */
						a_tmp = pkg_malloc((yyvsp[-1].intval) * sizeof(action_elem_t));
						if (!a_tmp) {
							yyerror("no more pkg memory");
							YYABORT;
						}
						memcpy(a_tmp, route_elems, (yyvsp[-1].intval)*sizeof(action_elem_t));

						mk_action3( (yyval.action), ROUTE_T, NUMBER_ST,	/* route idx */
							NUMBER_ST,					/* number of params */
							SCRIPTVAR_ELEM_ST,			/* parameters */
							(void*)(long)i_tmp,
							(void*)(long)(yyvsp[-1].intval),
							(void*)a_tmp);
					}
#line 6832 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 442:
#line 2139 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
#line 6838 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 443:
#line 2140 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("bad route"
						"argument"); }
#line 6845 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 444:
#line 2142 "cfg.y" /* yacc.c:1645  */
    { mk_action2( (yyval.action), SET_HOST_T, STR_ST,
														0, (yyvsp[-1].strval), 0); }
#line 6852 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 445:
#line 2144 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
#line 6858 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 446:
#line 2145 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("bad argument, "
														"string expected"); }
#line 6865 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 447:
#line 2148 "cfg.y" /* yacc.c:1645  */
    { mk_action2( (yyval.action), PREFIX_T, STR_ST,
														0, (yyvsp[-1].strval), 0); }
#line 6872 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 448:
#line 2150 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
#line 6878 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 449:
#line 2151 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("bad argument, "
														"string expected"); }
#line 6885 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 450:
#line 2153 "cfg.y" /* yacc.c:1645  */
    { mk_action2( (yyval.action), STRIP_TAIL_T,
									NUMBER_ST, 0, (void *) (yyvsp[-1].intval), 0); }
#line 6892 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 451:
#line 2155 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
#line 6898 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 452:
#line 2156 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("bad argument, "
														"number expected"); }
#line 6905 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 453:
#line 2159 "cfg.y" /* yacc.c:1645  */
    { mk_action2( (yyval.action), STRIP_T, NUMBER_ST,
														0, (void *) (yyvsp[-1].intval), 0); }
#line 6912 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 454:
#line 2161 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
#line 6918 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 455:
#line 2162 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("bad argument, "
														"number expected"); }
#line 6925 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 456:
#line 2164 "cfg.y" /* yacc.c:1645  */
    {
			{
				qvalue_t q;

				rc = str2q(&q, (yyvsp[-1].strval), strlen((yyvsp[-1].strval)));
				if (rc < 0)
					yyerrorf("bad qvalue (%.*s): %s",
							 strlen((yyvsp[-1].strval)), (yyvsp[-1].strval), qverr2str(rc));

				mk_action2( (yyval.action), APPEND_BRANCH_T, STR_ST, NUMBER_ST, (yyvsp[-3].strval),
						(void *)(long)q);
			}
		}
#line 6943 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 457:
#line 2177 "cfg.y" /* yacc.c:1645  */
    { mk_action2( (yyval.action), APPEND_BRANCH_T,
						STR_ST, NUMBER_ST, (yyvsp[-1].strval), (void *)Q_UNSPECIFIED) ; }
#line 6950 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 458:
#line 2179 "cfg.y" /* yacc.c:1645  */
    { mk_action2( (yyval.action), APPEND_BRANCH_T,
						STR_ST, NUMBER_ST, 0, (void *)Q_UNSPECIFIED) ; }
#line 6957 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 459:
#line 2181 "cfg.y" /* yacc.c:1645  */
    { mk_action2( (yyval.action), APPEND_BRANCH_T,
						STR_ST, NUMBER_ST, 0, (void *)Q_UNSPECIFIED ) ; }
#line 6964 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 460:
#line 2183 "cfg.y" /* yacc.c:1645  */
    {
						mk_action1((yyval.action), REMOVE_BRANCH_T, NUMBER_ST, (void*)(yyvsp[-1].intval));}
#line 6971 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 461:
#line 2185 "cfg.y" /* yacc.c:1645  */
    {
						mk_action1( (yyval.action), REMOVE_BRANCH_T, SCRIPTVAR_ST, (yyvsp[-1].specval));}
#line 6978 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 462:
#line 2187 "cfg.y" /* yacc.c:1645  */
    {
				spec = (pv_spec_t*)pkg_malloc(sizeof(pv_spec_t));
				memset(spec, 0, sizeof(pv_spec_t));
				tstr.s = (yyvsp[-3].strval);
				tstr.len = strlen(tstr.s);
				if(pv_parse_spec(&tstr, spec)==NULL)
				{
					yyerror("unknown script variable in first parameter");
				}
				if(!pv_is_w(spec))
					yyerror("read-only script variable in first parameter");

				pvmodel = 0;
				tstr.s = (yyvsp[-1].strval);
				tstr.len = strlen(tstr.s);
				if(pv_parse_format(&tstr, &pvmodel)<0)
				{
					yyerror("error in second parameter");
				}

				mk_action2( (yyval.action), PV_PRINTF_T,
						SCRIPTVAR_ST, SCRIPTVAR_ELEM_ST, spec, pvmodel) ;
			}
#line 7006 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 463:
#line 2210 "cfg.y" /* yacc.c:1645  */
    {
				if(!pv_is_w((yyvsp[-3].specval)))
					yyerror("read-only script variable in first parameter");
				pvmodel = 0;
				tstr.s = (yyvsp[-1].strval);
				tstr.len = strlen(tstr.s);
				if(pv_parse_format(&tstr, &pvmodel)<0)
				{
					yyerror("error in second parameter");
				}

				mk_action2( (yyval.action), PV_PRINTF_T,
						SCRIPTVAR_ST, SCRIPTVAR_ELEM_ST, (yyvsp[-3].specval), pvmodel) ;
			}
#line 7025 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 464:
#line 2225 "cfg.y" /* yacc.c:1645  */
    { mk_action2( (yyval.action), SET_HOSTPORT_T,
														STR_ST, 0, (yyvsp[-1].strval), 0); }
#line 7032 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 465:
#line 2227 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
#line 7038 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 466:
#line 2228 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("bad argument,"
												" string expected"); }
#line 7045 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 467:
#line 2230 "cfg.y" /* yacc.c:1645  */
    { mk_action2( (yyval.action), SET_PORT_T, STR_ST,
														0, (yyvsp[-1].strval), 0); }
#line 7052 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 468:
#line 2232 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
#line 7058 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 469:
#line 2233 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("bad argument, "
														"string expected"); }
#line 7065 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 470:
#line 2235 "cfg.y" /* yacc.c:1645  */
    { mk_action2( (yyval.action), SET_USER_T,
														STR_ST, 0, (yyvsp[-1].strval), 0); }
#line 7072 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 471:
#line 2237 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
#line 7078 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 472:
#line 2238 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("bad argument, "
														"string expected"); }
#line 7085 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 473:
#line 2240 "cfg.y" /* yacc.c:1645  */
    { mk_action2( (yyval.action), SET_USERPASS_T,
														STR_ST, 0, (yyvsp[-1].strval), 0); }
#line 7092 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 474:
#line 2242 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
#line 7098 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 475:
#line 2243 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("bad argument, "
														"string expected"); }
#line 7105 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 476:
#line 2245 "cfg.y" /* yacc.c:1645  */
    { mk_action2( (yyval.action), SET_URI_T, STR_ST,
														0, (yyvsp[-1].strval), 0); }
#line 7112 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 477:
#line 2247 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
#line 7118 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 478:
#line 2248 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("bad argument, "
										"string expected"); }
#line 7125 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 479:
#line 2250 "cfg.y" /* yacc.c:1645  */
    { mk_action2( (yyval.action), REVERT_URI_T, 0,0,0,0); }
#line 7131 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 480:
#line 2251 "cfg.y" /* yacc.c:1645  */
    { mk_action2( (yyval.action), REVERT_URI_T, 0,0,0,0); }
#line 7137 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 481:
#line 2252 "cfg.y" /* yacc.c:1645  */
    { mk_action2( (yyval.action), SET_DSTURI_T,
													STR_ST, 0, (yyvsp[-1].strval), 0); }
#line 7144 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 482:
#line 2254 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
#line 7150 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 483:
#line 2255 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("bad argument, "
										"string expected"); }
#line 7157 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 484:
#line 2257 "cfg.y" /* yacc.c:1645  */
    { mk_action2( (yyval.action), RESET_DSTURI_T,
															0,0,0,0); }
#line 7164 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 485:
#line 2259 "cfg.y" /* yacc.c:1645  */
    { mk_action2( (yyval.action), RESET_DSTURI_T, 0,0,0,0); }
#line 7170 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 486:
#line 2260 "cfg.y" /* yacc.c:1645  */
    { mk_action2( (yyval.action), ISDSTURISET_T, 0,0,0,0);}
#line 7176 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 487:
#line 2261 "cfg.y" /* yacc.c:1645  */
    { mk_action2( (yyval.action), ISDSTURISET_T, 0,0,0,0); }
#line 7182 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 488:
#line 2262 "cfg.y" /* yacc.c:1645  */
    { mk_action2( (yyval.action), FORCE_RPORT_T,
															0, 0, 0, 0); }
#line 7189 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 489:
#line 2264 "cfg.y" /* yacc.c:1645  */
    { mk_action2( (yyval.action), FORCE_RPORT_T,0, 0, 0, 0); }
#line 7195 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 490:
#line 2265 "cfg.y" /* yacc.c:1645  */
    {
					mk_action2( (yyval.action), FORCE_LOCAL_RPORT_T,0, 0, 0, 0); }
#line 7202 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 491:
#line 2267 "cfg.y" /* yacc.c:1645  */
    {
					mk_action2( (yyval.action), FORCE_LOCAL_RPORT_T,0, 0, 0, 0); }
#line 7209 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 492:
#line 2269 "cfg.y" /* yacc.c:1645  */
    {
				mk_action2( (yyval.action), FORCE_TCP_ALIAS_T,NUMBER_ST, 0,
					(void*)(yyvsp[-1].intval), 0);
		}
#line 7218 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 493:
#line 2273 "cfg.y" /* yacc.c:1645  */
    {
				mk_action2( (yyval.action), FORCE_TCP_ALIAS_T,0, 0, 0, 0);
		}
#line 7226 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 494:
#line 2276 "cfg.y" /* yacc.c:1645  */
    {
				mk_action2( (yyval.action), FORCE_TCP_ALIAS_T,0, 0, 0, 0);
		}
#line 7234 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 495:
#line 2279 "cfg.y" /* yacc.c:1645  */
    {(yyval.action)=0;
					yyerror("bad argument, number expected");
					}
#line 7242 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 496:
#line 2282 "cfg.y" /* yacc.c:1645  */
    {
								mk_action2( (yyval.action), SET_ADV_ADDR_T, STR_ST,
											0, (yyvsp[-1].strval), 0);
								}
#line 7251 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 497:
#line 2286 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("bad argument, "
														"string expected"); }
#line 7258 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 498:
#line 2288 "cfg.y" /* yacc.c:1645  */
    {(yyval.action)=0; yyerror("missing '(' or ')' ?"); }
#line 7264 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 499:
#line 2289 "cfg.y" /* yacc.c:1645  */
    {
								tstr.s = int2str((yyvsp[-1].intval), &tstr.len);
								if (!(tmp = pkg_malloc(tstr.len + 1))) {
										LM_CRIT("out of pkg memory\n");
										(yyval.action) = 0;
										YYABORT;
								} else {
									memcpy(tmp, tstr.s, tstr.len);
									tmp[tstr.len] = '\0';
									mk_action2((yyval.action), SET_ADV_PORT_T, STR_ST,
											   0, tmp, 0);
								}
								            }
#line 7282 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 500:
#line 2302 "cfg.y" /* yacc.c:1645  */
    {
								mk_action2((yyval.action), SET_ADV_PORT_T,
										   STR_ST, NOSUBTYPE,
										   (yyvsp[-1].strval), NULL);
								}
#line 7292 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 501:
#line 2307 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("bad argument "
						"(string or integer expected)"); }
#line 7299 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 502:
#line 2309 "cfg.y" /* yacc.c:1645  */
    {(yyval.action)=0; yyerror("missing '(' or ')' ?"); }
#line 7305 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 503:
#line 2310 "cfg.y" /* yacc.c:1645  */
    {
								mk_action2( (yyval.action), FORCE_SEND_SOCKET_T,
									SOCKID_ST, 0, (yyvsp[-1].sockid), 0);
								}
#line 7314 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 504:
#line 2314 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerror("bad argument,"
								" proto:host[:port] expected");
								}
#line 7322 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 505:
#line 2317 "cfg.y" /* yacc.c:1645  */
    {(yyval.action)=0; yyerror("missing '(' or ')' ?"); }
#line 7328 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 506:
#line 2318 "cfg.y" /* yacc.c:1645  */
    {
								mk_action1( (yyval.action), SERIALIZE_BRANCHES_T,
									NUMBER_ST, (void*)(long)(yyvsp[-1].intval));
								}
#line 7337 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 507:
#line 2322 "cfg.y" /* yacc.c:1645  */
    {
								mk_action2( (yyval.action), SERIALIZE_BRANCHES_T,
									NUMBER_ST, NUMBER_ST,
									(void*)(long)(yyvsp[-3].intval), (void*)(long)(yyvsp[-1].intval));
								}
#line 7347 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 508:
#line 2327 "cfg.y" /* yacc.c:1645  */
    {(yyval.action)=0; yyerror("bad argument,"
								" number expected");
								}
#line 7355 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 509:
#line 2330 "cfg.y" /* yacc.c:1645  */
    {(yyval.action)=0; yyerror("missing '(' or ')' ?"); }
#line 7361 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 510:
#line 2331 "cfg.y" /* yacc.c:1645  */
    {
								mk_action2( (yyval.action), NEXT_BRANCHES_T, 0, 0, 0, 0);
								}
#line 7369 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 511:
#line 2334 "cfg.y" /* yacc.c:1645  */
    {(yyval.action)=0; yyerror("no argument is"
								" expected");
								}
#line 7377 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 512:
#line 2337 "cfg.y" /* yacc.c:1645  */
    {(yyval.action)=0; yyerror("missing '(' or ')' ?"); }
#line 7383 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 513:
#line 2338 "cfg.y" /* yacc.c:1645  */
    {
								mk_action2( (yyval.action), USE_BLACKLIST_T,
									STRING_ST, 0, (yyvsp[-1].strval), 0);
								}
#line 7392 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 514:
#line 2342 "cfg.y" /* yacc.c:1645  */
    {(yyval.action)=0; yyerror("bad argument,"
								" string expected");
								}
#line 7400 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 515:
#line 2345 "cfg.y" /* yacc.c:1645  */
    {(yyval.action)=0; yyerror("missing '(' or ')' ?"); }
#line 7406 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 516:
#line 2346 "cfg.y" /* yacc.c:1645  */
    {
								mk_action2( (yyval.action), UNUSE_BLACKLIST_T,
									STRING_ST, 0, (yyvsp[-1].strval), 0);
								}
#line 7415 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 517:
#line 2350 "cfg.y" /* yacc.c:1645  */
    {(yyval.action)=0; yyerror("bad argument,"
								" string expected");
								}
#line 7423 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 518:
#line 2353 "cfg.y" /* yacc.c:1645  */
    {(yyval.action)=0; yyerror("missing '(' or ')' ?"); }
#line 7429 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 519:
#line 2354 "cfg.y" /* yacc.c:1645  */
    {
									mk_action3( (yyval.action), CACHE_STORE_T,
													STR_ST,
													STR_ST,
													STR_ST,
													(yyvsp[-5].strval),
													(yyvsp[-3].strval),
													(yyvsp[-1].strval));
							}
#line 7443 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 520:
#line 2364 "cfg.y" /* yacc.c:1645  */
    {
								elems[0].type = STR_ST;
								elems[0].u.data = (yyvsp[-7].strval);
								elems[1].type = STR_ST;
								elems[1].u.data = (yyvsp[-5].strval);
								elems[2].type = STR_ST;
								elems[2].u.data = (yyvsp[-3].strval);
								elems[3].type = NUMBER_ST;
								elems[3].u.number = (yyvsp[-1].intval);
								mk_action_((yyval.action), CACHE_STORE_T, 4, elems);
							}
#line 7459 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 521:
#line 2376 "cfg.y" /* yacc.c:1645  */
    {
								elems[0].type = STR_ST;
								elems[0].u.data = (yyvsp[-7].strval);
								elems[1].type = STR_ST;
								elems[1].u.data = (yyvsp[-5].strval);
								elems[2].type = STR_ST;
								elems[2].u.data = (yyvsp[-3].strval);
								elems[3].type = SCRIPTVAR_ST;
								elems[3].u.data = (yyvsp[-1].specval);
								mk_action_((yyval.action), CACHE_STORE_T, 4, elems);
							}
#line 7475 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 522:
#line 2388 "cfg.y" /* yacc.c:1645  */
    {
									mk_action2( (yyval.action), CACHE_REMOVE_T,
													STR_ST,
													STR_ST,
													(yyvsp[-3].strval),
													(yyvsp[-1].strval));
							}
#line 7487 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 523:
#line 2395 "cfg.y" /* yacc.c:1645  */
    {
									mk_action3( (yyval.action), CACHE_FETCH_T,
													STR_ST,
													STR_ST,
													SCRIPTVAR_ST,
													(yyvsp[-5].strval),
													(yyvsp[-3].strval),
													(yyvsp[-1].specval));
							}
#line 7501 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 524:
#line 2404 "cfg.y" /* yacc.c:1645  */
    {
									mk_action3( (yyval.action), CACHE_COUNTER_FETCH_T,
													STR_ST,
													STR_ST,
													SCRIPTVAR_ST,
													(yyvsp[-5].strval),
													(yyvsp[-3].strval),
													(yyvsp[-1].specval));
							}
#line 7515 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 525:
#line 2413 "cfg.y" /* yacc.c:1645  */
    {
								elems[0].type = STR_ST;
								elems[0].u.data = (yyvsp[-7].strval);
								elems[1].type = STR_ST;
								elems[1].u.data = (yyvsp[-5].strval);
								elems[2].type = NUMBER_ST;
								elems[2].u.number = (yyvsp[-3].intval);
								elems[3].type = NUMBER_ST;
								elems[3].u.number = (yyvsp[-1].intval);
								mk_action_((yyval.action), CACHE_ADD_T, 4, elems);
							}
#line 7531 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 526:
#line 2424 "cfg.y" /* yacc.c:1645  */
    {
								elems[0].type = STR_ST;
								elems[0].u.data = (yyvsp[-7].strval);
								elems[1].type = STR_ST;
								elems[1].u.data = (yyvsp[-5].strval);
								elems[2].type = SCRIPTVAR_ST;
								elems[2].u.data = (yyvsp[-3].specval);
								elems[3].type = NUMBER_ST;
								elems[3].u.number = (yyvsp[-1].intval);
								mk_action_((yyval.action), CACHE_ADD_T, 4, elems);
							}
#line 7547 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 527:
#line 2435 "cfg.y" /* yacc.c:1645  */
    {
								elems[0].type = STR_ST;
								elems[0].u.data = (yyvsp[-9].strval);
								elems[1].type = STR_ST;
								elems[1].u.data = (yyvsp[-7].strval);
								elems[2].type = NUMBER_ST;
								elems[2].u.number = (yyvsp[-5].intval);
								elems[3].type = NUMBER_ST;
								elems[3].u.number = (yyvsp[-3].intval);
								elems[4].type = SCRIPTVAR_ST;
								elems[4].u.data = (yyvsp[-1].specval);
								mk_action_((yyval.action), CACHE_ADD_T, 5, elems);
							}
#line 7565 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 528:
#line 2448 "cfg.y" /* yacc.c:1645  */
    {
								elems[0].type = STR_ST;
								elems[0].u.data = (yyvsp[-9].strval);
								elems[1].type = STR_ST;
								elems[1].u.data = (yyvsp[-7].strval);
								elems[2].type = SCRIPTVAR_ST;
								elems[2].u.data = (yyvsp[-5].specval);
								elems[3].type = NUMBER_ST;
								elems[3].u.number = (yyvsp[-3].intval);
								elems[4].type = SCRIPTVAR_ST;
								elems[4].u.data = (yyvsp[-1].specval);
								mk_action_((yyval.action), CACHE_ADD_T, 5, elems);
							}
#line 7583 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 529:
#line 2461 "cfg.y" /* yacc.c:1645  */
    {
								elems[0].type = STR_ST;
								elems[0].u.data = (yyvsp[-7].strval);
								elems[1].type = STR_ST;
								elems[1].u.data = (yyvsp[-5].strval);
								elems[2].type = NUMBER_ST;
								elems[2].u.number = (yyvsp[-3].intval);
								elems[3].type = NUMBER_ST;
								elems[3].u.number = (yyvsp[-1].intval);
								mk_action_((yyval.action), CACHE_SUB_T, 4, elems);
							}
#line 7599 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 530:
#line 2472 "cfg.y" /* yacc.c:1645  */
    {
								elems[0].type = STR_ST;
								elems[0].u.data = (yyvsp[-7].strval);
								elems[1].type = STR_ST;
								elems[1].u.data = (yyvsp[-5].strval);
								elems[2].type = SCRIPTVAR_ST;
								elems[2].u.data = (yyvsp[-3].specval);
								elems[3].type = NUMBER_ST;
								elems[3].u.number = (yyvsp[-1].intval);
								mk_action_((yyval.action), CACHE_SUB_T, 4, elems);
							}
#line 7615 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 531:
#line 2483 "cfg.y" /* yacc.c:1645  */
    {
								elems[0].type = STR_ST;
								elems[0].u.data = (yyvsp[-9].strval);
								elems[1].type = STR_ST;
								elems[1].u.data = (yyvsp[-7].strval);
								elems[2].type = NUMBER_ST;
								elems[2].u.number = (yyvsp[-5].intval);
								elems[3].type = NUMBER_ST;
								elems[3].u.number = (yyvsp[-3].intval);
								elems[4].type = SCRIPTVAR_ST;
								elems[4].u.data = (yyvsp[-1].specval);
								mk_action_((yyval.action), CACHE_SUB_T, 5, elems);
							}
#line 7633 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 532:
#line 2496 "cfg.y" /* yacc.c:1645  */
    {
								elems[0].type = STR_ST;
								elems[0].u.data = (yyvsp[-9].strval);
								elems[1].type = STR_ST;
								elems[1].u.data = (yyvsp[-7].strval);
								elems[2].type = SCRIPTVAR_ST;
								elems[2].u.data = (yyvsp[-5].specval);
								elems[3].type = NUMBER_ST;
								elems[3].u.number = (yyvsp[-3].intval);
								elems[4].type = SCRIPTVAR_ST;
								elems[4].u.data = (yyvsp[-1].specval);
								mk_action_((yyval.action), CACHE_SUB_T, 5, elems);
							}
#line 7651 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 533:
#line 2509 "cfg.y" /* yacc.c:1645  */
    {
								elems[0].type = STR_ST;
								elems[0].u.data = (yyvsp[-5].strval);
								elems[1].type = STR_ST;
								elems[1].u.data = (yyvsp[-3].strval);
								elems[2].type = STR_ST;
								elems[2].u.data = (yyvsp[-1].strval);
								mk_action_((yyval.action), CACHE_RAW_QUERY_T, 3, elems);
							}
#line 7665 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 534:
#line 2518 "cfg.y" /* yacc.c:1645  */
    {
								elems[0].type = STR_ST;
								elems[0].u.data = (yyvsp[-3].strval);
								elems[1].type = STR_ST;
								elems[1].u.data = (yyvsp[-1].strval);
								mk_action_((yyval.action), CACHE_RAW_QUERY_T, 2, elems);
							}
#line 7677 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 535:
#line 2525 "cfg.y" /* yacc.c:1645  */
    {
						 			cmd_tmp=(void*)find_cmd_export_t((yyvsp[-2].strval), 0, rt);
									if (cmd_tmp==0){
										if (find_cmd_export_t((yyvsp[-2].strval), 0, 0)) {
											yyerror("Command cannot be "
												"used in the block\n");
										} else {
											yyerrorf("unknown command <%s>, "
												"missing loadmodule?", (yyvsp[-2].strval));
										}
										(yyval.action)=0;
									}else{
										elems[0].type = CMD_ST;
										elems[0].u.data = cmd_tmp;
										mk_action_((yyval.action), MODULE_T, 1, elems);
									}
								}
#line 7699 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 536:
#line 2542 "cfg.y" /* yacc.c:1645  */
    {
									cmd_tmp=(void*)find_cmd_export_t((yyvsp[-3].strval),(yyvsp[-1].intval),rt);
									if (cmd_tmp==0){
										if (find_cmd_export_t((yyvsp[-3].strval), (yyvsp[-1].intval), 0)) {
											yyerror("Command cannot be "
												"used in the block\n");
										} else {
											yyerrorf("unknown command <%s>, "
												"missing loadmodule?", (yyvsp[-3].strval));
										}
										(yyval.action)=0;
									}else{
										elems[0].type = CMD_ST;
										elems[0].u.data = cmd_tmp;
										mk_action_((yyval.action), MODULE_T, (yyvsp[-1].intval)+1, elems);
									}
								}
#line 7721 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 537:
#line 2559 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0; yyerrorf("bad arguments for "
												"command <%s>", (yyvsp[-3].strval)); }
#line 7728 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 538:
#line 2561 "cfg.y" /* yacc.c:1645  */
    { (yyval.action)=0;
			yyerrorf("bare word <%s> found, command calls need '()'", (yyvsp[-1].strval));
			}
#line 7736 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 539:
#line 2564 "cfg.y" /* yacc.c:1645  */
    {
				mk_action1((yyval.action), XDBG_T, STR_ST, (yyvsp[-1].strval));	}
#line 7743 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 540:
#line 2566 "cfg.y" /* yacc.c:1645  */
    {
				mk_action1((yyval.action), XDBG_T, STR_ST, (yyvsp[-1].strval));	}
#line 7750 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 541:
#line 2568 "cfg.y" /* yacc.c:1645  */
    {
				mk_action1((yyval.action), XLOG_T, STR_ST, (yyvsp[-1].strval)); }
#line 7757 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 542:
#line 2570 "cfg.y" /* yacc.c:1645  */
    {
				mk_action1((yyval.action), XLOG_T, STR_ST, (yyvsp[-1].strval)); }
#line 7764 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 543:
#line 2572 "cfg.y" /* yacc.c:1645  */
    {
				mk_action2((yyval.action), XLOG_T, STR_ST, STR_ST, (yyvsp[-3].strval), (yyvsp[-1].strval)); }
#line 7771 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 544:
#line 2574 "cfg.y" /* yacc.c:1645  */
    {
				mk_action2((yyval.action), XLOG_T, STR_ST, STR_ST, (yyvsp[-3].strval), (yyvsp[-1].strval)); }
#line 7778 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 545:
#line 2576 "cfg.y" /* yacc.c:1645  */
    {
				mk_action1((yyval.action), RAISE_EVENT_T, STR_ST, (yyvsp[-1].strval)); }
#line 7785 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 546:
#line 2578 "cfg.y" /* yacc.c:1645  */
    {
				mk_action2((yyval.action), RAISE_EVENT_T, STR_ST, SCRIPTVAR_ST, (yyvsp[-3].strval), (yyvsp[-1].specval)); }
#line 7792 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 547:
#line 2580 "cfg.y" /* yacc.c:1645  */
    {
				mk_action3((yyval.action), RAISE_EVENT_T, STR_ST, SCRIPTVAR_ST,
					SCRIPTVAR_ST, (yyvsp[-5].strval), (yyvsp[-3].specval), (yyvsp[-1].specval)); }
#line 7800 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 548:
#line 2583 "cfg.y" /* yacc.c:1645  */
    {
				mk_action2((yyval.action), SUBSCRIBE_EVENT_T, STR_ST, STR_ST, (yyvsp[-3].strval), (yyvsp[-1].strval)); }
#line 7807 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 549:
#line 2585 "cfg.y" /* yacc.c:1645  */
    {
				mk_action3((yyval.action), SUBSCRIBE_EVENT_T, STR_ST, STR_ST,
					NUMBER_ST, (yyvsp[-5].strval), (yyvsp[-3].strval), (void*)(long)(yyvsp[-1].intval)); }
#line 7815 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 550:
#line 2588 "cfg.y" /* yacc.c:1645  */
    {
				elems[0].type = STR_ST;
				elems[0].u.data = (yyvsp[-11].strval);
				elems[1].type = STR_ST;
				elems[1].u.data = (yyvsp[-9].strval);
				elems[2].type = STR_ST;
				elems[2].u.data = (yyvsp[-7].strval);
				elems[3].type = STR_ST;
				elems[3].u.data = (yyvsp[-5].strval);
				elems[4].type = STR_ST;
				elems[4].u.data = (yyvsp[-3].strval);
				elems[5].type = SCRIPTVAR_ST;
				elems[5].u.data = (yyvsp[-1].specval);
				mk_action_((yyval.action), CONSTRUCT_URI_T,6,elems); }
#line 7834 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 551:
#line 2602 "cfg.y" /* yacc.c:1645  */
    {
				elems[0].type = SCRIPTVAR_ST;
				elems[0].u.data = (yyvsp[-3].specval);
				elems[1].type = SCRIPTVAR_ST;
				elems[1].u.data = (yyvsp[-1].specval);
				mk_action_((yyval.action), GET_TIMESTAMP_T,2,elems); }
#line 7845 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 552:
#line 2608 "cfg.y" /* yacc.c:1645  */
    {
				mk_action2((yyval.action), SCRIPT_TRACE_T, 0, 0, 0, 0); }
#line 7852 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 553:
#line 2610 "cfg.y" /* yacc.c:1645  */
    {
				pvmodel = 0;
				tstr.s = (yyvsp[-1].strval);
				tstr.len = strlen(tstr.s);
				if(pv_parse_format(&tstr, &pvmodel)<0)
					yyerror("error in second parameter");
				mk_action2((yyval.action), SCRIPT_TRACE_T, NUMBER_ST,
						   SCRIPTVAR_ELEM_ST, (void *)(yyvsp[-3].intval), pvmodel); }
#line 7865 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 554:
#line 2618 "cfg.y" /* yacc.c:1645  */
    {
				pvmodel = 0;
				tstr.s = (yyvsp[-3].strval);
				tstr.len = strlen(tstr.s);
				if(pv_parse_format(&tstr, &pvmodel)<0)
					yyerror("error in second parameter");
				mk_action3((yyval.action), SCRIPT_TRACE_T, NUMBER_ST,
						SCRIPTVAR_ELEM_ST, STR_ST, (void *)(yyvsp[-5].intval), pvmodel, (yyvsp[-1].strval)); }
#line 7878 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 555:
#line 2626 "cfg.y" /* yacc.c:1645  */
    {
				i_tmp = get_script_route_idx( (yyvsp[-1].strval), rlist, RT_NO, 0);
				if (i_tmp==-1) yyerror("too many script routes");
				mk_action2((yyval.action), ASYNC_T, ACTIONS_ST, NUMBER_ST,
						(yyvsp[-3].action), (void*)(long)i_tmp);
				}
#line 7889 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 556:
#line 2632 "cfg.y" /* yacc.c:1645  */
    {
				i_tmp = get_script_route_idx( (yyvsp[-1].strval), rlist, RT_NO, 0);
				if (i_tmp==-1) yyerror("too many script routes");
				mk_action2((yyval.action), LAUNCH_T, ACTIONS_ST, NUMBER_ST,
						(yyvsp[-3].action), (void*)(long)i_tmp);
				}
#line 7900 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 557:
#line 2638 "cfg.y" /* yacc.c:1645  */
    {
				mk_action2((yyval.action), LAUNCH_T, ACTIONS_ST, NUMBER_ST,
						(yyvsp[-1].action), (void*)(long)-1);
				}
#line 7909 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 558:
#line 2642 "cfg.y" /* yacc.c:1645  */
    {
				mk_action2((yyval.action), IS_MYSELF_T, STR_ST, 0, (yyvsp[-1].strval), 0);
				}
#line 7917 "cfg.tab.c" /* yacc.c:1645  */
    break;

  case 559:
#line 2645 "cfg.y" /* yacc.c:1645  */
    {
				mk_action2((yyval.action), IS_MYSELF_T, STR_ST, STR_ST, (yyvsp[-3].strval), (yyvsp[-1].strval));
				}
#line 7925 "cfg.tab.c" /* yacc.c:1645  */
    break;


#line 7929 "cfg.tab.c" /* yacc.c:1645  */
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
#line 2651 "cfg.y" /* yacc.c:1903  */


static inline void ALLOW_UNUSED warn(char* s)
{
	LM_WARN("warning in config file %s, line %d, column %d-%d: %s\n",
			get_cfg_file_name, line, startcolumn, column, s);
}

static void yyerror(char* s)
{
	LM_CRIT("parse error in config file %s, line %d, column %d-%d: %s\n",
			get_cfg_file_name, line, startcolumn, column, s);
	cfg_errors++;
}

#define ERROR_MAXLEN 1024
static void yyerrorf(char *fmt, ...)
{
	char *tmp = pkg_malloc(ERROR_MAXLEN);
	va_list ap;
	va_start(ap, fmt);

	vsnprintf(tmp, ERROR_MAXLEN, fmt, ap);
	yyerror(tmp);

	pkg_free(tmp);
	va_end(ap);
}


static struct socket_id* mk_listen_id(char* host, enum sip_protos proto,
																	int port)
{
	struct socket_id* l;
	l=pkg_malloc(sizeof(struct socket_id));
	if (l==0){
		LM_CRIT("cfg. parser: out of memory.\n");
	}else{
		l->name     = host;
		l->adv_name = NULL;
		l->adv_port = 0;
		l->proto    = proto;
		l->port     = port;
		l->children = 0;
		l->next     = NULL;
	}

	return l;
}

static struct multi_str *new_string(char *s)
{
	struct multi_str *ms = pkg_malloc(sizeof(struct multi_str));
	if (!ms) {
		LM_CRIT("cfg. parser: out of memory.\n");
	}else{
		ms->s    = s;
		ms->next = NULL;
	}
	return ms;
}

static struct socket_id* set_listen_id_adv(struct socket_id* sock,
											char *adv_name,
											int adv_port)
{
	sock->adv_name=adv_name;
	sock->adv_port=adv_port;
	return sock;
}

static int parse_ipnet(char *in, int len, struct net **ipnet)
{
	char *p = NULL;
	str ip_s, mask_s;
	struct ip_addr *ip = NULL, *mask = NULL, *ip_tmp;
	int af;
	unsigned int bitlen;

	p = q_memchr(in, '.', len);
	if (p)
		af = AF_INET;
	else if (q_memchr(in, ':', len)) {
		af = AF_INET6;
	} else {
		LM_ERR("Not an IP");
		return -1;
	}

	p = q_memchr(in, '/', len);
	if (!p) {
		LM_ERR("No netmask\n");
		return -1;
	}
	ip_s.s = in;
	ip_s.len = p - in;

	mask_s.s = p + 1;
	mask_s.len = len - ip_s.len - 1;
	if (!mask_s.s || mask_s.len == 0) {
		LM_ERR("Empty netmask\n");
		return -1;
	}

	ip_tmp = (af == AF_INET) ? str2ip(&ip_s) : str2ip6(&ip_s);
	if (!ip_tmp) {
		LM_ERR("Invalid IP\n");
		return -1;
	}
	ip = pkg_malloc(sizeof *ip);
	if (!ip) {
		LM_CRIT("No more pkg memory\n");
		return -1;
	}
	memcpy(ip, ip_tmp, sizeof *ip);

	p = (af == AF_INET) ? q_memchr(p, '.', len-(p-in)+1) : q_memchr(p, ':', len-(p-in)+1);
	if (p) {
		ip_tmp = (af == AF_INET) ? str2ip(&mask_s) : str2ip6(&mask_s);
		if (!ip_tmp) {
			LM_ERR("Invalid netmask\n");
			return -1;
		}
		mask = pkg_malloc(sizeof *mask);
		if (!mask) {
			LM_CRIT("No more pkg memory\n");
			return -1;
		}
		memcpy(mask, ip_tmp, sizeof *mask);

		*ipnet = mk_net(ip, mask);
	} else {
		if (str2int(&mask_s, &bitlen) < 0) {
			LM_ERR("Invalid netmask bitlen\n");
			return -1;
		}

		*ipnet = mk_net_bitlen(ip, bitlen);
	}

	pkg_free(ip);
	pkg_free(mask);

	if (*ipnet == NULL)
			return -1;

	return 0;
}
