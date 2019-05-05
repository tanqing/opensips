/* A Bison parser, made by GNU Bison 3.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
#line 205 "cfg.y" /* yacc.c:1906  */

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

#line 297 "cfg.tab.h" /* yacc.c:1906  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CFG_TAB_H_INCLUDED  */
