// A Bison parser, made by GNU Bison 3.0.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2013 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


// First part of user declarations.

#line 37 "seclang-parser.cc" // lalr1.cc:399

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "seclang-parser.hh"

// User implementation prologue.

#line 51 "seclang-parser.cc" // lalr1.cc:407
// Unqualified %code blocks.
#line 358 "seclang-parser.yy" // lalr1.cc:408

#include "src/parser/driver.h"

#line 57 "seclang-parser.cc" // lalr1.cc:408


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyempty = true)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace yy {
#line 143 "seclang-parser.cc" // lalr1.cc:474

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  seclang_parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
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
              // Fall through.
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  seclang_parser::seclang_parser (modsecurity::Parser::Driver& driver_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      driver (driver_yyarg)
  {}

  seclang_parser::~seclang_parser ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  inline
  seclang_parser::by_state::by_state ()
    : state (empty)
  {}

  inline
  seclang_parser::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  seclang_parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.state = empty;
  }

  inline
  seclang_parser::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  seclang_parser::symbol_number_type
  seclang_parser::by_state::type_get () const
  {
    return state == empty ? 0 : yystos_[state];
  }

  inline
  seclang_parser::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  seclang_parser::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
      switch (that.type_get ())
    {
      case 142: // "Accuracy"
      case 143: // "Allow"
      case 144: // "Append"
      case 145: // "AuditLog"
      case 146: // "Block"
      case 147: // "Capture"
      case 148: // "Chain"
      case 149: // "ACTION_CTL_AUDIT_ENGINE"
      case 150: // "ACTION_CTL_AUDIT_LOG_PARTS"
      case 151: // "ACTION_CTL_BDY_JSON"
      case 152: // "ACTION_CTL_BDY_XML"
      case 153: // "ACTION_CTL_FORCE_REQ_BODY_VAR"
      case 154: // "ACTION_CTL_REQUEST_BODY_ACCESS"
      case 155: // "ACTION_CTL_RULE_REMOVE_BY_ID"
      case 156: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_ID"
      case 157: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG"
      case 158: // "Deny"
      case 159: // "DeprecateVar"
      case 160: // "Drop"
      case 161: // "Exec"
      case 162: // "ExpireVar"
      case 163: // "Id"
      case 164: // "InitCol"
      case 165: // "Log"
      case 166: // "LogData"
      case 167: // "Maturity"
      case 168: // "Msg"
      case 169: // "MultiMatch"
      case 170: // "NoAuditLog"
      case 171: // "NoLog"
      case 172: // "Pass"
      case 173: // "Pause"
      case 174: // "Phase"
      case 175: // "Prepend"
      case 176: // "Proxy"
      case 177: // "Redirect"
      case 178: // "Rev"
      case 179: // "SanatiseArg"
      case 180: // "SanatiseMatched"
      case 181: // "SanatiseMatchedBytes"
      case 182: // "SanatiseRequestHeader"
      case 183: // "SanatiseResponseHeader"
      case 184: // "SetEnv"
      case 185: // "SetRsc"
      case 186: // "SetSid"
      case 187: // "SetUID"
      case 188: // "Severity"
      case 189: // "Skip"
      case 190: // "SkipAfter"
      case 191: // "Status"
      case 192: // "Tag"
      case 193: // "ACTION_TRANSFORMATION_BASE_64_ENCODE"
      case 194: // "ACTION_TRANSFORMATION_BASE_64_DECODE"
      case 195: // "ACTION_TRANSFORMATION_BASE_64_DECODE_EXT"
      case 196: // "ACTION_TRANSFORMATION_CMD_LINE"
      case 197: // "ACTION_TRANSFORMATION_COMPRESS_WHITESPACE"
      case 198: // "ACTION_TRANSFORMATION_CSS_DECODE"
      case 199: // "ACTION_TRANSFORMATION_HEX_ENCODE"
      case 200: // "ACTION_TRANSFORMATION_HEX_DECODE"
      case 201: // "ACTION_TRANSFORMATION_HTML_ENTITY_DECODE"
      case 202: // "ACTION_TRANSFORMATION_JS_DECODE"
      case 203: // "ACTION_TRANSFORMATION_LENGTH"
      case 204: // "ACTION_TRANSFORMATION_LOWERCASE"
      case 205: // "ACTION_TRANSFORMATION_MD5"
      case 206: // "ACTION_TRANSFORMATION_NONE"
      case 207: // "ACTION_TRANSFORMATION_NORMALISE_PATH"
      case 208: // "ACTION_TRANSFORMATION_NORMALISE_PATH_WIN"
      case 209: // "ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT"
      case 210: // "ACTION_TRANSFORMATION_PARITY_ODD_7_BIT"
      case 211: // "ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT"
      case 212: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS"
      case 213: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR"
      case 214: // "ACTION_TRANSFORMATION_REMOVE_NULLS"
      case 215: // "ACTION_TRANSFORMATION_REMOVE_WHITESPACE"
      case 216: // "ACTION_TRANSFORMATION_REPLACE_COMMENTS"
      case 217: // "ACTION_TRANSFORMATION_REPLACE_NULLS"
      case 218: // "ACTION_TRANSFORMATION_SHA1"
      case 219: // "ACTION_TRANSFORMATION_SQL_HEX_DECODE"
      case 220: // "ACTION_TRANSFORMATION_TRIM"
      case 221: // "ACTION_TRANSFORMATION_UPPERCASE"
      case 222: // "ACTION_TRANSFORMATION_URL_DECODE"
      case 223: // "ACTION_TRANSFORMATION_URL_DECODE_UNI"
      case 224: // "ACTION_TRANSFORMATION_UTF8_TO_UNICODE"
      case 225: // "Ver"
      case 226: // "xmlns"
      case 227: // "CONFIG_COMPONENT_SIG"
      case 228: // "CONFIG_CONN_ENGINE"
      case 229: // "CONFIG_SEC_ARGUMENT_SEPARATOR"
      case 230: // "CONFIG_SEC_WEB_APP_ID"
      case 231: // "CONFIG_SEC_SERVER_SIG"
      case 232: // "CONFIG_DIR_AUDIT_DIR"
      case 233: // "CONFIG_DIR_AUDIT_DIR_MOD"
      case 234: // "CONFIG_DIR_AUDIT_ENG"
      case 235: // "CONFIG_DIR_AUDIT_FLE_MOD"
      case 236: // "CONFIG_DIR_AUDIT_LOG"
      case 237: // "CONFIG_DIR_AUDIT_LOG2"
      case 238: // "CONFIG_DIR_AUDIT_LOG_P"
      case 239: // "CONFIG_DIR_AUDIT_STS"
      case 240: // "CONFIG_DIR_AUDIT_TPE"
      case 241: // "CONFIG_DIR_DEBUG_LOG"
      case 242: // "CONFIG_DIR_DEBUG_LVL"
      case 243: // "CONFIG_SEC_CACHE_TRANSFORMATIONS"
      case 244: // "CONFIG_SEC_DISABLE_BACKEND_COMPRESS"
      case 245: // "CONFIG_SEC_HASH_ENGINE"
      case 246: // "CONFIG_SEC_HASH_KEY"
      case 247: // "CONFIG_SEC_HASH_PARAM"
      case 248: // "CONFIG_SEC_HASH_METHOD_RX"
      case 249: // "CONFIG_SEC_HASH_METHOD_PM"
      case 250: // "CONFIG_SEC_CHROOT_DIR"
      case 251: // "CONFIG_DIR_GEO_DB"
      case 252: // "CONFIG_DIR_GSB_DB"
      case 253: // "CONFIG_SEC_GUARDIAN_LOG"
      case 254: // "CONFIG_DIR_PCRE_MATCH_LIMIT"
      case 255: // "CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION"
      case 256: // "CONFIG_SEC_CONN_R_STATE_LIMIT"
      case 257: // "CONFIG_SEC_CONN_W_STATE_LIMIT"
      case 258: // "CONFIG_SEC_SENSOR_ID"
      case 259: // "CONFIG_DIR_REQ_BODY"
      case 260: // "CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT"
      case 261: // "CONFIG_DIR_REQ_BODY_LIMIT"
      case 262: // "CONFIG_DIR_REQ_BODY_LIMIT_ACTION"
      case 263: // "CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT"
      case 264: // "CONFIG_DIR_RES_BODY"
      case 265: // "CONFIG_DIR_RES_BODY_LIMIT"
      case 266: // "CONFIG_DIR_RES_BODY_LIMIT_ACTION"
      case 267: // "CONFIG_SEC_RULE_INHERITANCE"
      case 268: // "CONFIG_SEC_RULE_PERF_TIME"
      case 269: // "CONFIG_DIR_RULE_ENG"
      case 270: // "CONFIG_DIR_SEC_ACTION"
      case 271: // "CONFIG_DIR_SEC_DEFAULT_ACTION"
      case 272: // "CONFIG_DIR_SEC_MARKER"
      case 273: // "CONFIG_DIR_UNICODE_MAP_FILE"
      case 274: // "CONFIG_SEC_COLLECTION_TIMEOUT"
      case 275: // "CONFIG_SEC_HTTP_BLKEY"
      case 276: // "CONFIG_SEC_INTERCEPT_ON_ERROR"
      case 277: // "CONFIG_SEC_REMOTE_RULES_FAIL_ACTION"
      case 278: // "CONFIG_SEC_RULE_REMOVE_BY_ID"
      case 279: // "CONFIG_SEC_RULE_REMOVE_BY_MSG"
      case 280: // "CONFIG_SEC_RULE_REMOVE_BY_TAG"
      case 281: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG"
      case 282: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_MSG"
      case 283: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID"
      case 284: // "CONFIG_SEC_RULE_UPDATE_ACTION_BY_ID"
      case 285: // "CONFIG_UPDLOAD_KEEP_FILES"
      case 286: // "CONFIG_UPDLOAD_SAVE_TMP_FILES"
      case 287: // "CONFIG_UPLOAD_DIR"
      case 288: // "CONFIG_UPLOAD_FILE_LIMIT"
      case 289: // "CONFIG_UPLOAD_FILE_MODE"
      case 290: // "CONFIG_VALUE_ABORT"
      case 291: // "CONFIG_VALUE_DETC"
      case 292: // "CONFIG_VALUE_HTTPS"
      case 293: // "CONFIG_VALUE_OFF"
      case 294: // "CONFIG_VALUE_ON"
      case 295: // "CONFIG_VALUE_PARALLEL"
      case 296: // "CONFIG_VALUE_PROCESS_PARTIAL"
      case 297: // "CONFIG_VALUE_REJECT"
      case 298: // "CONFIG_VALUE_RELEVANT_ONLY"
      case 299: // "CONFIG_VALUE_SERIAL"
      case 300: // "CONFIG_VALUE_WARN"
      case 301: // "CONFIG_XML_EXTERNAL_ENTITY"
      case 302: // "CONGIG_DIR_RESPONSE_BODY_MP"
      case 303: // "CONGIG_DIR_SEC_ARG_SEP"
      case 304: // "CONGIG_DIR_SEC_COOKIE_FORMAT"
      case 305: // "CONFIG_SEC_COOKIEV0_SEPARATOR"
      case 306: // "CONGIG_DIR_SEC_DATA_DIR"
      case 307: // "CONGIG_DIR_SEC_STATUS_ENGINE"
      case 308: // "CONFIG_SEC_STREAM_IN_BODY_INSPECTION"
      case 309: // "CONFIG_SEC_STREAM_OUT_BODY_INSPECTION"
      case 310: // "CONGIG_DIR_SEC_TMP_DIR"
      case 311: // "DIRECTIVE"
      case 312: // "DIRECTIVE_SECRULESCRIPT"
      case 313: // "FREE_TEXT_QUOTE_MACRO_EXPANSION"
      case 314: // "QUOTATION_MARK"
      case 315: // "RUN_TIME_VAR_BLD"
      case 316: // "RUN_TIME_VAR_DUR"
      case 317: // "RUN_TIME_VAR_HSV"
      case 318: // "RUN_TIME_VAR_REMOTE_USER"
      case 319: // "RUN_TIME_VAR_TIME"
      case 320: // "RUN_TIME_VAR_TIME_DAY"
      case 321: // "RUN_TIME_VAR_TIME_EPOCH"
      case 322: // "RUN_TIME_VAR_TIME_HOUR"
      case 323: // "RUN_TIME_VAR_TIME_MIN"
      case 324: // "RUN_TIME_VAR_TIME_MON"
      case 325: // "RUN_TIME_VAR_TIME_SEC"
      case 326: // "RUN_TIME_VAR_TIME_WDAY"
      case 327: // "RUN_TIME_VAR_TIME_YEAR"
      case 328: // "VARIABLE"
      case 329: // "Dictionary element"
      case 330: // "Dictionary element, selected by regexp"
        value.move< std::string > (that.value);
        break;

      case 337: // op
      case 338: // op_before_init
        value.move< std::unique_ptr<Operator> > (that.value);
        break;

      case 345: // run_time_string
        value.move< std::unique_ptr<RunTimeString> > (that.value);
        break;

      case 342: // var
        value.move< std::unique_ptr<Variable> > (that.value);
        break;

      case 343: // act
      case 344: // setvar_action
        value.move< std::unique_ptr<actions::Action> > (that.value);
        break;

      case 340: // variables
      case 341: // variables_may_be_quoted
        value.move< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > (that.value);
        break;

      case 335: // actions
      case 336: // actions_may_quoted
        value.move< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty;
  }

  inline
  seclang_parser::stack_symbol_type&
  seclang_parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
      switch (that.type_get ())
    {
      case 142: // "Accuracy"
      case 143: // "Allow"
      case 144: // "Append"
      case 145: // "AuditLog"
      case 146: // "Block"
      case 147: // "Capture"
      case 148: // "Chain"
      case 149: // "ACTION_CTL_AUDIT_ENGINE"
      case 150: // "ACTION_CTL_AUDIT_LOG_PARTS"
      case 151: // "ACTION_CTL_BDY_JSON"
      case 152: // "ACTION_CTL_BDY_XML"
      case 153: // "ACTION_CTL_FORCE_REQ_BODY_VAR"
      case 154: // "ACTION_CTL_REQUEST_BODY_ACCESS"
      case 155: // "ACTION_CTL_RULE_REMOVE_BY_ID"
      case 156: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_ID"
      case 157: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG"
      case 158: // "Deny"
      case 159: // "DeprecateVar"
      case 160: // "Drop"
      case 161: // "Exec"
      case 162: // "ExpireVar"
      case 163: // "Id"
      case 164: // "InitCol"
      case 165: // "Log"
      case 166: // "LogData"
      case 167: // "Maturity"
      case 168: // "Msg"
      case 169: // "MultiMatch"
      case 170: // "NoAuditLog"
      case 171: // "NoLog"
      case 172: // "Pass"
      case 173: // "Pause"
      case 174: // "Phase"
      case 175: // "Prepend"
      case 176: // "Proxy"
      case 177: // "Redirect"
      case 178: // "Rev"
      case 179: // "SanatiseArg"
      case 180: // "SanatiseMatched"
      case 181: // "SanatiseMatchedBytes"
      case 182: // "SanatiseRequestHeader"
      case 183: // "SanatiseResponseHeader"
      case 184: // "SetEnv"
      case 185: // "SetRsc"
      case 186: // "SetSid"
      case 187: // "SetUID"
      case 188: // "Severity"
      case 189: // "Skip"
      case 190: // "SkipAfter"
      case 191: // "Status"
      case 192: // "Tag"
      case 193: // "ACTION_TRANSFORMATION_BASE_64_ENCODE"
      case 194: // "ACTION_TRANSFORMATION_BASE_64_DECODE"
      case 195: // "ACTION_TRANSFORMATION_BASE_64_DECODE_EXT"
      case 196: // "ACTION_TRANSFORMATION_CMD_LINE"
      case 197: // "ACTION_TRANSFORMATION_COMPRESS_WHITESPACE"
      case 198: // "ACTION_TRANSFORMATION_CSS_DECODE"
      case 199: // "ACTION_TRANSFORMATION_HEX_ENCODE"
      case 200: // "ACTION_TRANSFORMATION_HEX_DECODE"
      case 201: // "ACTION_TRANSFORMATION_HTML_ENTITY_DECODE"
      case 202: // "ACTION_TRANSFORMATION_JS_DECODE"
      case 203: // "ACTION_TRANSFORMATION_LENGTH"
      case 204: // "ACTION_TRANSFORMATION_LOWERCASE"
      case 205: // "ACTION_TRANSFORMATION_MD5"
      case 206: // "ACTION_TRANSFORMATION_NONE"
      case 207: // "ACTION_TRANSFORMATION_NORMALISE_PATH"
      case 208: // "ACTION_TRANSFORMATION_NORMALISE_PATH_WIN"
      case 209: // "ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT"
      case 210: // "ACTION_TRANSFORMATION_PARITY_ODD_7_BIT"
      case 211: // "ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT"
      case 212: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS"
      case 213: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR"
      case 214: // "ACTION_TRANSFORMATION_REMOVE_NULLS"
      case 215: // "ACTION_TRANSFORMATION_REMOVE_WHITESPACE"
      case 216: // "ACTION_TRANSFORMATION_REPLACE_COMMENTS"
      case 217: // "ACTION_TRANSFORMATION_REPLACE_NULLS"
      case 218: // "ACTION_TRANSFORMATION_SHA1"
      case 219: // "ACTION_TRANSFORMATION_SQL_HEX_DECODE"
      case 220: // "ACTION_TRANSFORMATION_TRIM"
      case 221: // "ACTION_TRANSFORMATION_UPPERCASE"
      case 222: // "ACTION_TRANSFORMATION_URL_DECODE"
      case 223: // "ACTION_TRANSFORMATION_URL_DECODE_UNI"
      case 224: // "ACTION_TRANSFORMATION_UTF8_TO_UNICODE"
      case 225: // "Ver"
      case 226: // "xmlns"
      case 227: // "CONFIG_COMPONENT_SIG"
      case 228: // "CONFIG_CONN_ENGINE"
      case 229: // "CONFIG_SEC_ARGUMENT_SEPARATOR"
      case 230: // "CONFIG_SEC_WEB_APP_ID"
      case 231: // "CONFIG_SEC_SERVER_SIG"
      case 232: // "CONFIG_DIR_AUDIT_DIR"
      case 233: // "CONFIG_DIR_AUDIT_DIR_MOD"
      case 234: // "CONFIG_DIR_AUDIT_ENG"
      case 235: // "CONFIG_DIR_AUDIT_FLE_MOD"
      case 236: // "CONFIG_DIR_AUDIT_LOG"
      case 237: // "CONFIG_DIR_AUDIT_LOG2"
      case 238: // "CONFIG_DIR_AUDIT_LOG_P"
      case 239: // "CONFIG_DIR_AUDIT_STS"
      case 240: // "CONFIG_DIR_AUDIT_TPE"
      case 241: // "CONFIG_DIR_DEBUG_LOG"
      case 242: // "CONFIG_DIR_DEBUG_LVL"
      case 243: // "CONFIG_SEC_CACHE_TRANSFORMATIONS"
      case 244: // "CONFIG_SEC_DISABLE_BACKEND_COMPRESS"
      case 245: // "CONFIG_SEC_HASH_ENGINE"
      case 246: // "CONFIG_SEC_HASH_KEY"
      case 247: // "CONFIG_SEC_HASH_PARAM"
      case 248: // "CONFIG_SEC_HASH_METHOD_RX"
      case 249: // "CONFIG_SEC_HASH_METHOD_PM"
      case 250: // "CONFIG_SEC_CHROOT_DIR"
      case 251: // "CONFIG_DIR_GEO_DB"
      case 252: // "CONFIG_DIR_GSB_DB"
      case 253: // "CONFIG_SEC_GUARDIAN_LOG"
      case 254: // "CONFIG_DIR_PCRE_MATCH_LIMIT"
      case 255: // "CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION"
      case 256: // "CONFIG_SEC_CONN_R_STATE_LIMIT"
      case 257: // "CONFIG_SEC_CONN_W_STATE_LIMIT"
      case 258: // "CONFIG_SEC_SENSOR_ID"
      case 259: // "CONFIG_DIR_REQ_BODY"
      case 260: // "CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT"
      case 261: // "CONFIG_DIR_REQ_BODY_LIMIT"
      case 262: // "CONFIG_DIR_REQ_BODY_LIMIT_ACTION"
      case 263: // "CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT"
      case 264: // "CONFIG_DIR_RES_BODY"
      case 265: // "CONFIG_DIR_RES_BODY_LIMIT"
      case 266: // "CONFIG_DIR_RES_BODY_LIMIT_ACTION"
      case 267: // "CONFIG_SEC_RULE_INHERITANCE"
      case 268: // "CONFIG_SEC_RULE_PERF_TIME"
      case 269: // "CONFIG_DIR_RULE_ENG"
      case 270: // "CONFIG_DIR_SEC_ACTION"
      case 271: // "CONFIG_DIR_SEC_DEFAULT_ACTION"
      case 272: // "CONFIG_DIR_SEC_MARKER"
      case 273: // "CONFIG_DIR_UNICODE_MAP_FILE"
      case 274: // "CONFIG_SEC_COLLECTION_TIMEOUT"
      case 275: // "CONFIG_SEC_HTTP_BLKEY"
      case 276: // "CONFIG_SEC_INTERCEPT_ON_ERROR"
      case 277: // "CONFIG_SEC_REMOTE_RULES_FAIL_ACTION"
      case 278: // "CONFIG_SEC_RULE_REMOVE_BY_ID"
      case 279: // "CONFIG_SEC_RULE_REMOVE_BY_MSG"
      case 280: // "CONFIG_SEC_RULE_REMOVE_BY_TAG"
      case 281: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG"
      case 282: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_MSG"
      case 283: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID"
      case 284: // "CONFIG_SEC_RULE_UPDATE_ACTION_BY_ID"
      case 285: // "CONFIG_UPDLOAD_KEEP_FILES"
      case 286: // "CONFIG_UPDLOAD_SAVE_TMP_FILES"
      case 287: // "CONFIG_UPLOAD_DIR"
      case 288: // "CONFIG_UPLOAD_FILE_LIMIT"
      case 289: // "CONFIG_UPLOAD_FILE_MODE"
      case 290: // "CONFIG_VALUE_ABORT"
      case 291: // "CONFIG_VALUE_DETC"
      case 292: // "CONFIG_VALUE_HTTPS"
      case 293: // "CONFIG_VALUE_OFF"
      case 294: // "CONFIG_VALUE_ON"
      case 295: // "CONFIG_VALUE_PARALLEL"
      case 296: // "CONFIG_VALUE_PROCESS_PARTIAL"
      case 297: // "CONFIG_VALUE_REJECT"
      case 298: // "CONFIG_VALUE_RELEVANT_ONLY"
      case 299: // "CONFIG_VALUE_SERIAL"
      case 300: // "CONFIG_VALUE_WARN"
      case 301: // "CONFIG_XML_EXTERNAL_ENTITY"
      case 302: // "CONGIG_DIR_RESPONSE_BODY_MP"
      case 303: // "CONGIG_DIR_SEC_ARG_SEP"
      case 304: // "CONGIG_DIR_SEC_COOKIE_FORMAT"
      case 305: // "CONFIG_SEC_COOKIEV0_SEPARATOR"
      case 306: // "CONGIG_DIR_SEC_DATA_DIR"
      case 307: // "CONGIG_DIR_SEC_STATUS_ENGINE"
      case 308: // "CONFIG_SEC_STREAM_IN_BODY_INSPECTION"
      case 309: // "CONFIG_SEC_STREAM_OUT_BODY_INSPECTION"
      case 310: // "CONGIG_DIR_SEC_TMP_DIR"
      case 311: // "DIRECTIVE"
      case 312: // "DIRECTIVE_SECRULESCRIPT"
      case 313: // "FREE_TEXT_QUOTE_MACRO_EXPANSION"
      case 314: // "QUOTATION_MARK"
      case 315: // "RUN_TIME_VAR_BLD"
      case 316: // "RUN_TIME_VAR_DUR"
      case 317: // "RUN_TIME_VAR_HSV"
      case 318: // "RUN_TIME_VAR_REMOTE_USER"
      case 319: // "RUN_TIME_VAR_TIME"
      case 320: // "RUN_TIME_VAR_TIME_DAY"
      case 321: // "RUN_TIME_VAR_TIME_EPOCH"
      case 322: // "RUN_TIME_VAR_TIME_HOUR"
      case 323: // "RUN_TIME_VAR_TIME_MIN"
      case 324: // "RUN_TIME_VAR_TIME_MON"
      case 325: // "RUN_TIME_VAR_TIME_SEC"
      case 326: // "RUN_TIME_VAR_TIME_WDAY"
      case 327: // "RUN_TIME_VAR_TIME_YEAR"
      case 328: // "VARIABLE"
      case 329: // "Dictionary element"
      case 330: // "Dictionary element, selected by regexp"
        value.copy< std::string > (that.value);
        break;

      case 337: // op
      case 338: // op_before_init
        value.copy< std::unique_ptr<Operator> > (that.value);
        break;

      case 345: // run_time_string
        value.copy< std::unique_ptr<RunTimeString> > (that.value);
        break;

      case 342: // var
        value.copy< std::unique_ptr<Variable> > (that.value);
        break;

      case 343: // act
      case 344: // setvar_action
        value.copy< std::unique_ptr<actions::Action> > (that.value);
        break;

      case 340: // variables
      case 341: // variables_may_be_quoted
        value.copy< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > (that.value);
        break;

      case 335: // actions
      case 336: // actions_may_quoted
        value.copy< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
  seclang_parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  seclang_parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
  seclang_parser::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  seclang_parser::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  seclang_parser::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  seclang_parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  seclang_parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  seclang_parser::debug_level_type
  seclang_parser::debug_level () const
  {
    return yydebug_;
  }

  void
  seclang_parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline seclang_parser::state_type
  seclang_parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  seclang_parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  seclang_parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  seclang_parser::parse ()
  {
    /// Whether yyla contains a lookahead.
    bool yyempty = true;

    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    // User initialization code.
    #line 351 "/root/ModSecurity-v3-Mar/src/parser/seclang-parser.yy" // lalr1.cc:725
{
  // Initialize the initial location.
  yyla.location.begin.filename = yyla.location.end.filename = &driver.file;
}

#line 846 "seclang-parser.cc" // lalr1.cc:725

    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyempty)
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            symbol_type yylookahead (yylex (driver));
            yyla.move (yylookahead);
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
        yyempty = false;
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Discard the token being shifted.
    yyempty = true;

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
        switch (yyr1_[yyn])
    {
      case 142: // "Accuracy"
      case 143: // "Allow"
      case 144: // "Append"
      case 145: // "AuditLog"
      case 146: // "Block"
      case 147: // "Capture"
      case 148: // "Chain"
      case 149: // "ACTION_CTL_AUDIT_ENGINE"
      case 150: // "ACTION_CTL_AUDIT_LOG_PARTS"
      case 151: // "ACTION_CTL_BDY_JSON"
      case 152: // "ACTION_CTL_BDY_XML"
      case 153: // "ACTION_CTL_FORCE_REQ_BODY_VAR"
      case 154: // "ACTION_CTL_REQUEST_BODY_ACCESS"
      case 155: // "ACTION_CTL_RULE_REMOVE_BY_ID"
      case 156: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_ID"
      case 157: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG"
      case 158: // "Deny"
      case 159: // "DeprecateVar"
      case 160: // "Drop"
      case 161: // "Exec"
      case 162: // "ExpireVar"
      case 163: // "Id"
      case 164: // "InitCol"
      case 165: // "Log"
      case 166: // "LogData"
      case 167: // "Maturity"
      case 168: // "Msg"
      case 169: // "MultiMatch"
      case 170: // "NoAuditLog"
      case 171: // "NoLog"
      case 172: // "Pass"
      case 173: // "Pause"
      case 174: // "Phase"
      case 175: // "Prepend"
      case 176: // "Proxy"
      case 177: // "Redirect"
      case 178: // "Rev"
      case 179: // "SanatiseArg"
      case 180: // "SanatiseMatched"
      case 181: // "SanatiseMatchedBytes"
      case 182: // "SanatiseRequestHeader"
      case 183: // "SanatiseResponseHeader"
      case 184: // "SetEnv"
      case 185: // "SetRsc"
      case 186: // "SetSid"
      case 187: // "SetUID"
      case 188: // "Severity"
      case 189: // "Skip"
      case 190: // "SkipAfter"
      case 191: // "Status"
      case 192: // "Tag"
      case 193: // "ACTION_TRANSFORMATION_BASE_64_ENCODE"
      case 194: // "ACTION_TRANSFORMATION_BASE_64_DECODE"
      case 195: // "ACTION_TRANSFORMATION_BASE_64_DECODE_EXT"
      case 196: // "ACTION_TRANSFORMATION_CMD_LINE"
      case 197: // "ACTION_TRANSFORMATION_COMPRESS_WHITESPACE"
      case 198: // "ACTION_TRANSFORMATION_CSS_DECODE"
      case 199: // "ACTION_TRANSFORMATION_HEX_ENCODE"
      case 200: // "ACTION_TRANSFORMATION_HEX_DECODE"
      case 201: // "ACTION_TRANSFORMATION_HTML_ENTITY_DECODE"
      case 202: // "ACTION_TRANSFORMATION_JS_DECODE"
      case 203: // "ACTION_TRANSFORMATION_LENGTH"
      case 204: // "ACTION_TRANSFORMATION_LOWERCASE"
      case 205: // "ACTION_TRANSFORMATION_MD5"
      case 206: // "ACTION_TRANSFORMATION_NONE"
      case 207: // "ACTION_TRANSFORMATION_NORMALISE_PATH"
      case 208: // "ACTION_TRANSFORMATION_NORMALISE_PATH_WIN"
      case 209: // "ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT"
      case 210: // "ACTION_TRANSFORMATION_PARITY_ODD_7_BIT"
      case 211: // "ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT"
      case 212: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS"
      case 213: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR"
      case 214: // "ACTION_TRANSFORMATION_REMOVE_NULLS"
      case 215: // "ACTION_TRANSFORMATION_REMOVE_WHITESPACE"
      case 216: // "ACTION_TRANSFORMATION_REPLACE_COMMENTS"
      case 217: // "ACTION_TRANSFORMATION_REPLACE_NULLS"
      case 218: // "ACTION_TRANSFORMATION_SHA1"
      case 219: // "ACTION_TRANSFORMATION_SQL_HEX_DECODE"
      case 220: // "ACTION_TRANSFORMATION_TRIM"
      case 221: // "ACTION_TRANSFORMATION_UPPERCASE"
      case 222: // "ACTION_TRANSFORMATION_URL_DECODE"
      case 223: // "ACTION_TRANSFORMATION_URL_DECODE_UNI"
      case 224: // "ACTION_TRANSFORMATION_UTF8_TO_UNICODE"
      case 225: // "Ver"
      case 226: // "xmlns"
      case 227: // "CONFIG_COMPONENT_SIG"
      case 228: // "CONFIG_CONN_ENGINE"
      case 229: // "CONFIG_SEC_ARGUMENT_SEPARATOR"
      case 230: // "CONFIG_SEC_WEB_APP_ID"
      case 231: // "CONFIG_SEC_SERVER_SIG"
      case 232: // "CONFIG_DIR_AUDIT_DIR"
      case 233: // "CONFIG_DIR_AUDIT_DIR_MOD"
      case 234: // "CONFIG_DIR_AUDIT_ENG"
      case 235: // "CONFIG_DIR_AUDIT_FLE_MOD"
      case 236: // "CONFIG_DIR_AUDIT_LOG"
      case 237: // "CONFIG_DIR_AUDIT_LOG2"
      case 238: // "CONFIG_DIR_AUDIT_LOG_P"
      case 239: // "CONFIG_DIR_AUDIT_STS"
      case 240: // "CONFIG_DIR_AUDIT_TPE"
      case 241: // "CONFIG_DIR_DEBUG_LOG"
      case 242: // "CONFIG_DIR_DEBUG_LVL"
      case 243: // "CONFIG_SEC_CACHE_TRANSFORMATIONS"
      case 244: // "CONFIG_SEC_DISABLE_BACKEND_COMPRESS"
      case 245: // "CONFIG_SEC_HASH_ENGINE"
      case 246: // "CONFIG_SEC_HASH_KEY"
      case 247: // "CONFIG_SEC_HASH_PARAM"
      case 248: // "CONFIG_SEC_HASH_METHOD_RX"
      case 249: // "CONFIG_SEC_HASH_METHOD_PM"
      case 250: // "CONFIG_SEC_CHROOT_DIR"
      case 251: // "CONFIG_DIR_GEO_DB"
      case 252: // "CONFIG_DIR_GSB_DB"
      case 253: // "CONFIG_SEC_GUARDIAN_LOG"
      case 254: // "CONFIG_DIR_PCRE_MATCH_LIMIT"
      case 255: // "CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION"
      case 256: // "CONFIG_SEC_CONN_R_STATE_LIMIT"
      case 257: // "CONFIG_SEC_CONN_W_STATE_LIMIT"
      case 258: // "CONFIG_SEC_SENSOR_ID"
      case 259: // "CONFIG_DIR_REQ_BODY"
      case 260: // "CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT"
      case 261: // "CONFIG_DIR_REQ_BODY_LIMIT"
      case 262: // "CONFIG_DIR_REQ_BODY_LIMIT_ACTION"
      case 263: // "CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT"
      case 264: // "CONFIG_DIR_RES_BODY"
      case 265: // "CONFIG_DIR_RES_BODY_LIMIT"
      case 266: // "CONFIG_DIR_RES_BODY_LIMIT_ACTION"
      case 267: // "CONFIG_SEC_RULE_INHERITANCE"
      case 268: // "CONFIG_SEC_RULE_PERF_TIME"
      case 269: // "CONFIG_DIR_RULE_ENG"
      case 270: // "CONFIG_DIR_SEC_ACTION"
      case 271: // "CONFIG_DIR_SEC_DEFAULT_ACTION"
      case 272: // "CONFIG_DIR_SEC_MARKER"
      case 273: // "CONFIG_DIR_UNICODE_MAP_FILE"
      case 274: // "CONFIG_SEC_COLLECTION_TIMEOUT"
      case 275: // "CONFIG_SEC_HTTP_BLKEY"
      case 276: // "CONFIG_SEC_INTERCEPT_ON_ERROR"
      case 277: // "CONFIG_SEC_REMOTE_RULES_FAIL_ACTION"
      case 278: // "CONFIG_SEC_RULE_REMOVE_BY_ID"
      case 279: // "CONFIG_SEC_RULE_REMOVE_BY_MSG"
      case 280: // "CONFIG_SEC_RULE_REMOVE_BY_TAG"
      case 281: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG"
      case 282: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_MSG"
      case 283: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID"
      case 284: // "CONFIG_SEC_RULE_UPDATE_ACTION_BY_ID"
      case 285: // "CONFIG_UPDLOAD_KEEP_FILES"
      case 286: // "CONFIG_UPDLOAD_SAVE_TMP_FILES"
      case 287: // "CONFIG_UPLOAD_DIR"
      case 288: // "CONFIG_UPLOAD_FILE_LIMIT"
      case 289: // "CONFIG_UPLOAD_FILE_MODE"
      case 290: // "CONFIG_VALUE_ABORT"
      case 291: // "CONFIG_VALUE_DETC"
      case 292: // "CONFIG_VALUE_HTTPS"
      case 293: // "CONFIG_VALUE_OFF"
      case 294: // "CONFIG_VALUE_ON"
      case 295: // "CONFIG_VALUE_PARALLEL"
      case 296: // "CONFIG_VALUE_PROCESS_PARTIAL"
      case 297: // "CONFIG_VALUE_REJECT"
      case 298: // "CONFIG_VALUE_RELEVANT_ONLY"
      case 299: // "CONFIG_VALUE_SERIAL"
      case 300: // "CONFIG_VALUE_WARN"
      case 301: // "CONFIG_XML_EXTERNAL_ENTITY"
      case 302: // "CONGIG_DIR_RESPONSE_BODY_MP"
      case 303: // "CONGIG_DIR_SEC_ARG_SEP"
      case 304: // "CONGIG_DIR_SEC_COOKIE_FORMAT"
      case 305: // "CONFIG_SEC_COOKIEV0_SEPARATOR"
      case 306: // "CONGIG_DIR_SEC_DATA_DIR"
      case 307: // "CONGIG_DIR_SEC_STATUS_ENGINE"
      case 308: // "CONFIG_SEC_STREAM_IN_BODY_INSPECTION"
      case 309: // "CONFIG_SEC_STREAM_OUT_BODY_INSPECTION"
      case 310: // "CONGIG_DIR_SEC_TMP_DIR"
      case 311: // "DIRECTIVE"
      case 312: // "DIRECTIVE_SECRULESCRIPT"
      case 313: // "FREE_TEXT_QUOTE_MACRO_EXPANSION"
      case 314: // "QUOTATION_MARK"
      case 315: // "RUN_TIME_VAR_BLD"
      case 316: // "RUN_TIME_VAR_DUR"
      case 317: // "RUN_TIME_VAR_HSV"
      case 318: // "RUN_TIME_VAR_REMOTE_USER"
      case 319: // "RUN_TIME_VAR_TIME"
      case 320: // "RUN_TIME_VAR_TIME_DAY"
      case 321: // "RUN_TIME_VAR_TIME_EPOCH"
      case 322: // "RUN_TIME_VAR_TIME_HOUR"
      case 323: // "RUN_TIME_VAR_TIME_MIN"
      case 324: // "RUN_TIME_VAR_TIME_MON"
      case 325: // "RUN_TIME_VAR_TIME_SEC"
      case 326: // "RUN_TIME_VAR_TIME_WDAY"
      case 327: // "RUN_TIME_VAR_TIME_YEAR"
      case 328: // "VARIABLE"
      case 329: // "Dictionary element"
      case 330: // "Dictionary element, selected by regexp"
        yylhs.value.build< std::string > ();
        break;

      case 337: // op
      case 338: // op_before_init
        yylhs.value.build< std::unique_ptr<Operator> > ();
        break;

      case 345: // run_time_string
        yylhs.value.build< std::unique_ptr<RunTimeString> > ();
        break;

      case 342: // var
        yylhs.value.build< std::unique_ptr<Variable> > ();
        break;

      case 343: // act
      case 344: // setvar_action
        yylhs.value.build< std::unique_ptr<actions::Action> > ();
        break;

      case 340: // variables
      case 341: // variables_may_be_quoted
        yylhs.value.build< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ();
        break;

      case 335: // actions
      case 336: // actions_may_quoted
        yylhs.value.build< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ();
        break;

      default:
        break;
    }


      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 2:
#line 732 "seclang-parser.yy" // lalr1.cc:847
    {
        return 0;
      }
#line 1182 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 6:
#line 745 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_auditLog->setStorageDirMode(strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 8));
      }
#line 1190 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 7:
#line 751 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_auditLog->setStorageDir(yystack_[0].value.as< std::string > ());
      }
#line 1198 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 8:
#line 757 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_auditLog->setStatus(modsecurity::audit_log::AuditLog::RelevantOnlyAuditLogStatus);
      }
#line 1206 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 9:
#line 761 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_auditLog->setStatus(modsecurity::audit_log::AuditLog::OffAuditLogStatus);
      }
#line 1214 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 10:
#line 765 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_auditLog->setStatus(modsecurity::audit_log::AuditLog::OnAuditLogStatus);
      }
#line 1222 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 11:
#line 771 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_auditLog->setFileMode(strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 8));
      }
#line 1230 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 12:
#line 777 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_auditLog->setFilePath2(yystack_[0].value.as< std::string > ());
      }
#line 1238 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 13:
#line 783 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_auditLog->setParts(yystack_[0].value.as< std::string > ());
      }
#line 1246 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 14:
#line 789 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_auditLog->setFilePath1(yystack_[0].value.as< std::string > ());
      }
#line 1254 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 15:
#line 794 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_auditLog->setFormat(modsecurity::audit_log::AuditLog::JSONAuditLogFormat);
      }
#line 1262 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 16:
#line 799 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_auditLog->setFormat(modsecurity::audit_log::AuditLog::NativeAuditLogFormat);
      }
#line 1270 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 17:
#line 805 "seclang-parser.yy" // lalr1.cc:847
    {
        std::string relevant_status(yystack_[0].value.as< std::string > ());
        driver.m_auditLog->setRelevantStatus(relevant_status);
      }
#line 1279 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 18:
#line 812 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_auditLog->setType(modsecurity::audit_log::AuditLog::SerialAuditLogType);
      }
#line 1287 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 19:
#line 816 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_auditLog->setType(modsecurity::audit_log::AuditLog::ParallelAuditLogType);
      }
#line 1295 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 20:
#line 820 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_auditLog->setType(modsecurity::audit_log::AuditLog::HttpsAuditLogType);
      }
#line 1303 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 21:
#line 826 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_uploadKeepFiles = modsecurity::RulesProperties::TrueConfigBoolean;
      }
#line 1311 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 22:
#line 830 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_uploadKeepFiles = modsecurity::RulesProperties::FalseConfigBoolean;
      }
#line 1319 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 23:
#line 834 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.error(yystack_[2].location, "SecUploadKeepFiles RelevantOnly is not currently supported. Accepted values are On or Off");
        YYERROR;
      }
#line 1328 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 24:
#line 839 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_uploadFileLimit.m_set = true;
        driver.m_uploadFileLimit.m_value = strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 10);
      }
#line 1337 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 25:
#line 844 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_uploadFileMode.m_set = true;
        driver.m_uploadFileMode.m_value = strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 8);
      }
#line 1346 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 26:
#line 849 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_uploadDirectory.m_set = true;
        driver.m_uploadDirectory.m_value = yystack_[0].value.as< std::string > ();
      }
#line 1355 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 27:
#line 854 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_tmpSaveUploadedFiles = modsecurity::RulesProperties::TrueConfigBoolean;
      }
#line 1363 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 28:
#line 858 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_tmpSaveUploadedFiles = modsecurity::RulesProperties::FalseConfigBoolean;
      }
#line 1371 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 29:
#line 865 "seclang-parser.yy" // lalr1.cc:847
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(yystack_[1].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ());
      }
#line 1379 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 30:
#line 869 "seclang-parser.yy" // lalr1.cc:847
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ());
      }
#line 1387 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 31:
#line 876 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_INIT(yystack_[0].value.as< std::unique_ptr<actions::Action> > (), yystack_[3].location)
        yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ()->push_back(std::move(yystack_[0].value.as< std::unique_ptr<actions::Action> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ());
      }
#line 1397 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 32:
#line 882 "seclang-parser.yy" // lalr1.cc:847
    {
        std::unique_ptr<std::vector<std::unique_ptr<actions::Action>>> b(new std::vector<std::unique_ptr<actions::Action>>());
        ACTION_INIT(yystack_[0].value.as< std::unique_ptr<actions::Action> > (), yystack_[1].location)
        b->push_back(std::move(yystack_[0].value.as< std::unique_ptr<actions::Action> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(b);
      }
#line 1408 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 33:
#line 892 "seclang-parser.yy" // lalr1.cc:847
    {
        yylhs.value.as< std::unique_ptr<Operator> > () = std::move(yystack_[0].value.as< std::unique_ptr<Operator> > ());
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(driver.ref.back(), &error) == false) {
            driver.error(yystack_[1].location, error);
            YYERROR;
        }
      }
#line 1421 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 34:
#line 901 "seclang-parser.yy" // lalr1.cc:847
    {
        yylhs.value.as< std::unique_ptr<Operator> > () = std::move(yystack_[0].value.as< std::unique_ptr<Operator> > ());
        yylhs.value.as< std::unique_ptr<Operator> > ()->m_negation = true;
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(driver.ref.back(), &error) == false) {
            driver.error(yystack_[2].location, error);
            YYERROR;
        }
      }
#line 1435 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 35:
#line 911 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rx(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(driver.ref.back(), &error) == false) {
            driver.error(yystack_[1].location, error);
            YYERROR;
        }
      }
#line 1448 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 36:
#line 920 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rx(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
        yylhs.value.as< std::unique_ptr<Operator> > ()->m_negation = true;
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(driver.ref.back(), &error) == false) {
            driver.error(yystack_[2].location, error);
            YYERROR;
        }
      }
#line 1462 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 37:
#line 933 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::UnconditionalMatch());
      }
#line 1470 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 38:
#line 937 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::DetectSQLi());
      }
#line 1478 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 39:
#line 941 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::DetectXSS());
      }
#line 1486 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 40:
#line 945 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateUrlEncoding());
      }
#line 1494 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 41:
#line 949 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateUtf8Encoding());
      }
#line 1502 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 42:
#line 953 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::InspectFile(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1510 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 43:
#line 957 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::FuzzyHash(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1518 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 44:
#line 961 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateByteRange(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1526 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 45:
#line 965 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateDTD(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1534 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 46:
#line 969 "seclang-parser.yy" // lalr1.cc:847
    {
        /* $$ = new operators::ValidateHash($1); */
        OPERATOR_NOT_SUPPORTED("ValidateHash", yystack_[2].location);
      }
#line 1543 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 47:
#line 974 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateSchema(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1551 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 48:
#line 978 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::VerifyCC(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1559 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 49:
#line 982 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::VerifyCPF(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1567 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 50:
#line 986 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::VerifySSN(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1575 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 51:
#line 990 "seclang-parser.yy" // lalr1.cc:847
    {
        /* $$ = new operators::GsbLookup($1); */
        OPERATOR_NOT_SUPPORTED("GsbLookup", yystack_[2].location);
      }
#line 1584 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 52:
#line 995 "seclang-parser.yy" // lalr1.cc:847
    {
        /* $$ = new operators::Rsub($1); */
        OPERATOR_NOT_SUPPORTED("Rsub", yystack_[2].location);
      }
#line 1593 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 53:
#line 1000 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Within(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1601 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 54:
#line 1004 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ContainsWord(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1609 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 55:
#line 1008 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Contains(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1617 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 56:
#line 1012 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::EndsWith(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1625 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 57:
#line 1016 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Eq(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1633 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 58:
#line 1020 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Ge(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1641 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 59:
#line 1024 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Gt(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1649 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 60:
#line 1028 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::IpMatchF(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1657 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 61:
#line 1032 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::IpMatch(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1665 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 62:
#line 1036 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Le(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1673 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 63:
#line 1040 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Lt(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1681 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 64:
#line 1044 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::PmFromFile(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1689 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 65:
#line 1048 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Pm(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1697 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 66:
#line 1052 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rbl(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1705 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 67:
#line 1056 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rx(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1713 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 68:
#line 1060 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::StrEq(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1721 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 69:
#line 1064 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::StrMatch(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1729 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 70:
#line 1068 "seclang-parser.yy" // lalr1.cc:847
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::BeginsWith(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1737 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 71:
#line 1072 "seclang-parser.yy" // lalr1.cc:847
    {
#ifdef WITH_GEOIP
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::GeoLookup());
#else
        std::stringstream ss;
            ss << "This version of ModSecurity was not compiled with GeoIP support.";
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
#endif  // WITH_GEOIP
      }
#line 1752 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 73:
#line 1087 "seclang-parser.yy" // lalr1.cc:847
    {
        std::vector<actions::Action *> *a = new std::vector<actions::Action *>();
        for (auto &i : *yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            a->push_back(i.release());
        }
        std::vector<Variable *> *v = new std::vector<Variable *>();
        for (auto &i : *yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ().get()) {
            v->push_back(i.release());
        }

        Operator *op = yystack_[1].value.as< std::unique_ptr<Operator> > ().release();
        Rule *rule = new Rule(
            /* op */ op,
            /* variables */ v,
            /* actions */ a,
            /* file name */ driver.ref.back(),
            /* line number */ yystack_[4].location.end.line
            );
        if (driver.addSecRule(rule) == false) {
            delete rule;
            YYERROR;
        }
      }
#line 1780 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 74:
#line 1111 "seclang-parser.yy" // lalr1.cc:847
    {
        std::vector<Variable *> *v = new std::vector<Variable *>();
        for (auto &i : *yystack_[1].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ().get()) {
            v->push_back(i.release());
        }

        Rule *rule = new Rule(
            /* op */ yystack_[0].value.as< std::unique_ptr<Operator> > ().release(),
            /* variables */ v,
            /* actions */ NULL,
            /* file name */ driver.ref.back(),
            /* line number */ yystack_[3].location.end.line
            );
        if (driver.addSecRule(rule) == false) {
            delete rule;
            YYERROR;
        }
      }
#line 1803 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 75:
#line 1130 "seclang-parser.yy" // lalr1.cc:847
    {
        std::vector<actions::Action *> *a = new std::vector<actions::Action *>();
        for (auto &i : *yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            a->push_back(i.release());
        }
        Rule *rule = new Rule(
            /* op */ NULL,
            /* variables */ NULL,
            /* actions */ a,
            /* file name */ driver.ref.back(),
            /* line number */ yystack_[2].location.end.line
            );
        driver.addSecAction(rule);
      }
#line 1822 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 76:
#line 1145 "seclang-parser.yy" // lalr1.cc:847
    {
        std::string err;
        std::vector<actions::Action *> *a = new std::vector<actions::Action *>();
        for (auto &i : *yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            a->push_back(i.release());
        }
        RuleScript *r = new RuleScript(
            /* path to script */ yystack_[1].value.as< std::string > (),
            /* actions */ a,
            /* file name */ driver.ref.back(),
            /* line number */ yystack_[2].location.end.line
            );

        if (r->init(&err) == false) {
            driver.error(yystack_[2].location, "Failed to load script: " + err);
            delete r;
            YYERROR;
        }
        if (driver.addSecRuleScript(r) == false) {
            delete r;
            YYERROR;
        }
      }
#line 1850 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 77:
#line 1169 "seclang-parser.yy" // lalr1.cc:847
    {
        bool hasDisruptive = false;
        std::vector<actions::Action *> *actions = new std::vector<actions::Action *>();
        for (auto &i : *yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            actions->push_back(i.release());
        }
        std::vector<actions::Action *> checkedActions;
        int definedPhase = -1;
        int secRuleDefinedPhase = -1;
        for (actions::Action *a : *actions) {
            actions::Phase *phase = dynamic_cast<actions::Phase *>(a);
            if (a->isDisruptive() == true && dynamic_cast<actions::disruptive::Block *>(a) == NULL) {
                hasDisruptive = true;
            }
            if (phase != NULL) {
                definedPhase = phase->m_phase;
                secRuleDefinedPhase = phase->m_secRulesPhase;
                delete phase;
            } else if (a->action_kind == actions::Action::RunTimeOnlyIfMatchKind ||
                a->action_kind == actions::Action::RunTimeBeforeMatchAttemptKind) {
                actions::transformations::None *none = dynamic_cast<actions::transformations::None *>(a);
                if (none != NULL) {
                    driver.error(yystack_[2].location, "The transformation none is not suitable to be part of the SecDefaultActions");
                    YYERROR;
                }
                checkedActions.push_back(a);
            } else {
                driver.error(yystack_[2].location, "The action '" + a->m_name + "' is not suitable to be part of the SecDefaultActions");
                YYERROR;
            }
        }
        if (definedPhase == -1) {
            definedPhase = modsecurity::Phases::RequestHeadersPhase;
        }

        if (hasDisruptive == false) {
            driver.error(yystack_[2].location, "SecDefaultAction must specify a disruptive action.");
            YYERROR;
        }

        if (!driver.m_defaultActions[definedPhase].empty()) {
            std::stringstream ss;
            ss << "SecDefaultActions can only be placed once per phase and configuration context. Phase ";
            ss << secRuleDefinedPhase;
            ss << " was informed already.";
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }

        for (actions::Action *a : checkedActions) {
            driver.m_defaultActions[definedPhase].push_back(a);
        }

        delete actions;
      }
#line 1910 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 78:
#line 1225 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.addSecMarker(modsecurity::utils::string::removeBracketsIfNeeded(yystack_[0].value.as< std::string > ()));
      }
#line 1918 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 79:
#line 1229 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_secRuleEngine = modsecurity::Rules::DisabledRuleEngine;
      }
#line 1926 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 80:
#line 1233 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_secRuleEngine = modsecurity::Rules::EnabledRuleEngine;
      }
#line 1934 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 81:
#line 1237 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_secRuleEngine = modsecurity::Rules::DetectionOnlyRuleEngine;
      }
#line 1942 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 82:
#line 1241 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_secRequestBodyAccess = modsecurity::RulesProperties::TrueConfigBoolean;
      }
#line 1950 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 83:
#line 1245 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_secRequestBodyAccess = modsecurity::RulesProperties::FalseConfigBoolean;
      }
#line 1958 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 84:
#line 1249 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_secResponseBodyAccess = modsecurity::RulesProperties::TrueConfigBoolean;
      }
#line 1966 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 85:
#line 1253 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_secResponseBodyAccess = modsecurity::RulesProperties::FalseConfigBoolean;
      }
#line 1974 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 86:
#line 1257 "seclang-parser.yy" // lalr1.cc:847
    {
        if (yystack_[0].value.as< std::string > ().length() != 1) {
          driver.error(yystack_[1].location, "Argument separator should be set to a single character.");
          YYERROR;
        }
        driver.m_secArgumentSeparator.m_value = yystack_[0].value.as< std::string > ();
        driver.m_secArgumentSeparator.m_set = true;
      }
#line 1987 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 87:
#line 1266 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_components.push_back(yystack_[0].value.as< std::string > ());
      }
#line 1995 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 88:
#line 1270 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.error(yystack_[2].location, "SecConnEngine is not yet supported.");
        YYERROR;
      }
#line 2004 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 89:
#line 1275 "seclang-parser.yy" // lalr1.cc:847
    {
      }
#line 2011 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 90:
#line 1278 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_secWebAppId.m_value = yystack_[0].value.as< std::string > ();
        driver.m_secWebAppId.m_set = true;
      }
#line 2020 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 91:
#line 1283 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.error(yystack_[1].location, "SecServerSignature is not supported.");
        YYERROR;
      }
#line 2029 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 92:
#line 1288 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.error(yystack_[1].location, "SecCacheTransformations is not supported.");
        YYERROR;
      }
#line 2038 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 93:
#line 1293 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.error(yystack_[2].location, "SecDisableBackendCompression is not supported.");
        YYERROR;
      }
#line 2047 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 94:
#line 1298 "seclang-parser.yy" // lalr1.cc:847
    {
      }
#line 2054 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 95:
#line 1301 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.error(yystack_[2].location, "SecContentInjection is not yet supported.");
        YYERROR;
      }
#line 2063 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 96:
#line 1306 "seclang-parser.yy" // lalr1.cc:847
    {
      }
#line 2070 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 97:
#line 1309 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.error(yystack_[1].location, "SecChrootDir is not supported.");
        YYERROR;
      }
#line 2079 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 98:
#line 1314 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.error(yystack_[2].location, "SecHashEngine is not yet supported.");
        YYERROR;
      }
#line 2088 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 99:
#line 1319 "seclang-parser.yy" // lalr1.cc:847
    {
      }
#line 2095 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 100:
#line 1322 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.error(yystack_[1].location, "SecHashKey is not yet supported.");
        YYERROR;
      }
#line 2104 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 101:
#line 1327 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.error(yystack_[1].location, "SecHashParam is not yet supported.");
        YYERROR;
      }
#line 2113 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 102:
#line 1332 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.error(yystack_[1].location, "SecHashMethodRx is not yet supported.");
        YYERROR;
      }
#line 2122 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 103:
#line 1337 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.error(yystack_[1].location, "SecHashMethodPm is not yet supported.");
        YYERROR;
      }
#line 2131 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 104:
#line 1342 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.error(yystack_[1].location, "SecGsbLookupDb is not supported.");
        YYERROR;
      }
#line 2140 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 105:
#line 1347 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.error(yystack_[1].location, "SecGuardianLog is not supported.");
        YYERROR;
      }
#line 2149 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 106:
#line 1352 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.error(yystack_[2].location, "SecInterceptOnError is not yet supported.");
        YYERROR;
      }
#line 2158 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 107:
#line 1357 "seclang-parser.yy" // lalr1.cc:847
    {
      }
#line 2165 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 108:
#line 1360 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.error(yystack_[1].location, "SecConnReadStateLimit is not yet supported.");
        YYERROR;
      }
#line 2174 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 109:
#line 1365 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.error(yystack_[1].location, "SecConnWriteStateLimit is not yet supported.");
        YYERROR;
      }
#line 2183 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 110:
#line 1370 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.error(yystack_[1].location, "SecSensorId is not yet supported.");
        YYERROR;
      }
#line 2192 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 111:
#line 1375 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.error(yystack_[2].location, "SecRuleInheritance is not yet supported.");
        YYERROR;
      }
#line 2201 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 112:
#line 1380 "seclang-parser.yy" // lalr1.cc:847
    {
      }
#line 2208 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 113:
#line 1383 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.error(yystack_[1].location, "SecRulePerfTime is not yet supported.");
        YYERROR;
      }
#line 2217 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 114:
#line 1388 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.error(yystack_[1].location, "SecStreamInBodyInspection is not supported.");
        YYERROR;
      }
#line 2226 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 115:
#line 1393 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.error(yystack_[1].location, "SecStreamOutBodyInspection is not supported.");
        YYERROR;
      }
#line 2235 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 116:
#line 1398 "seclang-parser.yy" // lalr1.cc:847
    {
        std::string error;
        if (driver.m_exceptions.load(yystack_[0].value.as< std::string > (), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleRemoveById: failed to load:";
            ss << yystack_[0].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2252 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 117:
#line 1411 "seclang-parser.yy" // lalr1.cc:847
    {
        std::string error;
        if (driver.m_exceptions.loadRemoveRuleByTag(yystack_[0].value.as< std::string > (), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleRemoveByTag: failed to load:";
            ss << yystack_[0].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2269 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 118:
#line 1424 "seclang-parser.yy" // lalr1.cc:847
    {
        std::string error;
        if (driver.m_exceptions.loadRemoveRuleByMsg(yystack_[0].value.as< std::string > (), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleRemoveByMsg: failed to load:";
            ss << yystack_[0].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2286 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 119:
#line 1437 "seclang-parser.yy" // lalr1.cc:847
    {
        std::string error;
        if (driver.m_exceptions.loadUpdateTargetByTag(yystack_[1].value.as< std::string > (), std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleUpdateTargetByTag: failed to load:";
            ss << yystack_[1].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }
      }
#line 2303 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 120:
#line 1450 "seclang-parser.yy" // lalr1.cc:847
    {
        std::string error;
        if (driver.m_exceptions.loadUpdateTargetByMsg(yystack_[1].value.as< std::string > (), std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleUpdateTargetByMsg: failed to load:";
            ss << yystack_[1].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }
      }
#line 2320 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 121:
#line 1463 "seclang-parser.yy" // lalr1.cc:847
    {
        std::string error;
        double ruleId;
        try {
            ruleId = std::stod(yystack_[1].value.as< std::string > ());
        } catch (...) {
            std::stringstream ss;
            ss << "SecRuleUpdateTargetById: failed to load:";
            ss << "The input \"" + yystack_[1].value.as< std::string > () + "\" does not ";
            ss << "seems to be a valid rule id.";
            ss << ". ";
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }

        if (driver.m_exceptions.loadUpdateTargetById(ruleId, std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleUpdateTargetById: failed to load:";
            ss << yystack_[1].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }
      }
#line 2350 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 122:
#line 1489 "seclang-parser.yy" // lalr1.cc:847
    {
        std::string error;
        double ruleId;
        try {
            ruleId = std::stod(yystack_[1].value.as< std::string > ());
        } catch (...) {
            std::stringstream ss;
            ss << "SecRuleUpdateActionById: failed to load:";
            ss << "The input \"" + yystack_[1].value.as< std::string > () + "\" does not ";
            ss << "seems to be a valid rule id.";
            ss << ". ";
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }


        std::vector<actions::Action *> *a = new std::vector<actions::Action *>();
        for (auto &i : *yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            a->push_back(i.release());
        }

        driver.error(yystack_[2].location, "SecRuleUpdateActionById is not yet supported");
        YYERROR;
      }
#line 2379 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 123:
#line 1515 "seclang-parser.yy" // lalr1.cc:847
    {
        if (driver.m_debugLog != NULL) {
          driver.m_debugLog->setDebugLogLevel(atoi(yystack_[0].value.as< std::string > ().c_str()));
        } else {
            std::stringstream ss;
            ss << "Internal error, there is no DebugLog ";
            ss << "object associated with the driver class";
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2395 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 124:
#line 1527 "seclang-parser.yy" // lalr1.cc:847
    {
        if (driver.m_debugLog != NULL) {
            std::string error;
            driver.m_debugLog->setDebugLogFile(yystack_[0].value.as< std::string > (), &error);
            if (error.size() > 0) {
                std::stringstream ss;
                ss << "Failed to start DebugLog: " << error;
                driver.error(yystack_[1].location, ss.str());
                YYERROR;
            }
        } else {
            std::stringstream ss;
            ss << "Internal error, there is no DebugLog ";
            ss << "object associated with the driver class";
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2418 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 125:
#line 1547 "seclang-parser.yy" // lalr1.cc:847
    {
#ifdef WITH_GEOIP
        std::string err;
        std::string file = modsecurity::utils::find_resource(yystack_[0].value.as< std::string > (),
            driver.ref.back(), &err);
        if (file.empty()) {
            std::stringstream ss;
            ss << "Failed to load locate the GeoDB file from: " << yystack_[0].value.as< std::string > () << " ";
            ss << err;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
        if (GeoLookup::getInstance().setDataBase(file) == false) {
            std::stringstream ss;
            ss << "Failed to load the GeoDB from: ";
            ss << file;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
#else
        std::stringstream ss;
        ss << "This version of ModSecurity was not compiled with GeoIP support.";
        driver.error(yystack_[1].location, ss.str());
        YYERROR;
#endif  // WITH_GEOIP
      }
#line 2449 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 126:
#line 1575 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_requestBodyLimit.m_set = true;
        driver.m_requestBodyLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2458 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 127:
#line 1580 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_requestBodyNoFilesLimit.m_set = true;
        driver.m_requestBodyNoFilesLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2467 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 128:
#line 1585 "seclang-parser.yy" // lalr1.cc:847
    {
        std::stringstream ss;
        ss << "As of ModSecurity version 3.0, SecRequestBodyInMemoryLimit is no longer ";
        ss << "supported. Instead, you can use your web server configurations to control ";
        ss << "those values. ModSecurity will follow the web server decision.";
        driver.error(yystack_[1].location, ss.str());
        YYERROR;
      }
#line 2480 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 129:
#line 1594 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_responseBodyLimit.m_set = true;
        driver.m_responseBodyLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2489 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 130:
#line 1599 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_requestBodyLimitAction = modsecurity::Rules::BodyLimitAction::ProcessPartialBodyLimitAction;
      }
#line 2497 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 131:
#line 1603 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_requestBodyLimitAction = modsecurity::Rules::BodyLimitAction::RejectBodyLimitAction;
      }
#line 2505 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 132:
#line 1607 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_responseBodyLimitAction = modsecurity::Rules::BodyLimitAction::ProcessPartialBodyLimitAction;
      }
#line 2513 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 133:
#line 1611 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_responseBodyLimitAction = modsecurity::Rules::BodyLimitAction::RejectBodyLimitAction;
      }
#line 2521 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 134:
#line 1615 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_remoteRulesActionOnFailed = Rules::OnFailedRemoteRulesAction::AbortOnFailedRemoteRulesAction;
      }
#line 2529 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 135:
#line 1619 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_remoteRulesActionOnFailed = Rules::OnFailedRemoteRulesAction::WarnOnFailedRemoteRulesAction;
      }
#line 2537 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 138:
#line 1633 "seclang-parser.yy" // lalr1.cc:847
    {
        std::istringstream buf(yystack_[0].value.as< std::string > ());
        std::istream_iterator<std::string> beg(buf), end;
        std::set<std::string> tokens(beg, end);
        driver.m_responseBodyTypeToBeInspected.m_set = true;
        for (std::set<std::string>::iterator it=tokens.begin();
            it!=tokens.end(); ++it)
        {
            driver.m_responseBodyTypeToBeInspected.m_value.insert(*it);
        }
      }
#line 2553 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 139:
#line 1645 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_responseBodyTypeToBeInspected.m_set = true;
        driver.m_responseBodyTypeToBeInspected.m_clear = true;
        driver.m_responseBodyTypeToBeInspected.m_value.clear();
      }
#line 2563 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 140:
#line 1651 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_secXMLExternalEntity = modsecurity::RulesProperties::FalseConfigBoolean;
      }
#line 2571 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 141:
#line 1655 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_secXMLExternalEntity = modsecurity::RulesProperties::TrueConfigBoolean;
      }
#line 2579 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 142:
#line 1659 "seclang-parser.yy" // lalr1.cc:847
    {
/* Parser error disabled to avoid breaking default installations with modsecurity.conf-recommended
        std::stringstream ss;
        ss << "As of ModSecurity version 3.0, SecTmpDir is no longer supported.";
        ss << " Instead, you can use your web server configurations to control when";
        ss << "and where to swap. ModSecurity will follow the web server decision.";
        driver.error(@0, ss.str());
        YYERROR;
*/
      }
#line 2594 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 145:
#line 1680 "seclang-parser.yy" // lalr1.cc:847
    {
        if (atoi(yystack_[0].value.as< std::string > ().c_str()) == 1) {
          driver.error(yystack_[1].location, "SecCookieFormat 1 is not yet supported.");
          YYERROR;
        }
      }
#line 2605 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 146:
#line 1687 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.error(yystack_[1].location, "SecCookieV0Separator is not yet supported.");
        YYERROR;
      }
#line 2614 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 149:
#line 1702 "seclang-parser.yy" // lalr1.cc:847
    {
/* Parser error disabled to avoid breaking default CRS installations with crs-setup.conf-recommended
        driver.error(@0, "SecCollectionTimeout is not yet supported.");
        YYERROR;
*/
      }
#line 2625 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 150:
#line 1709 "seclang-parser.yy" // lalr1.cc:847
    {
        driver.m_httpblKey.m_set = true;
        driver.m_httpblKey.m_value = yystack_[0].value.as< std::string > ();
      }
#line 2634 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 151:
#line 1717 "seclang-parser.yy" // lalr1.cc:847
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2642 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 152:
#line 1721 "seclang-parser.yy" // lalr1.cc:847
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[1].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2650 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 153:
#line 1728 "seclang-parser.yy" // lalr1.cc:847
    {
        yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()->push_back(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2659 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 154:
#line 1733 "seclang-parser.yy" // lalr1.cc:847
    {
        std::unique_ptr<Variable> c(new VariableModificatorExclusion(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2669 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 155:
#line 1739 "seclang-parser.yy" // lalr1.cc:847
    {
        std::unique_ptr<Variable> c(new VariableModificatorCount(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2679 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 156:
#line 1745 "seclang-parser.yy" // lalr1.cc:847
    {
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> b(new std::vector<std::unique_ptr<Variable>>());
        b->push_back(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(b);
      }
#line 2689 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 157:
#line 1751 "seclang-parser.yy" // lalr1.cc:847
    {
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> b(new std::vector<std::unique_ptr<Variable>>());
        std::unique_ptr<Variable> c(new VariableModificatorExclusion(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        b->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(b);
      }
#line 2700 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 158:
#line 1758 "seclang-parser.yy" // lalr1.cc:847
    {
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> b(new std::vector<std::unique_ptr<Variable>>());
        std::unique_ptr<Variable> c(new VariableModificatorCount(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        b->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(b);
      }
#line 2711 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 159:
#line 1768 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Args_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2719 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 160:
#line 1772 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Args_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2727 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 161:
#line 1776 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Args_NoDictElement());
      }
#line 2735 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 162:
#line 1780 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsPost_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2743 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 163:
#line 1784 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsPost_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2751 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 164:
#line 1788 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsPost_NoDictElement());
      }
#line 2759 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 165:
#line 1792 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsGet_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2767 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 166:
#line 1796 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsGet_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2775 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 167:
#line 1800 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsGet_NoDictElement());
      }
#line 2783 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 168:
#line 1804 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesSizes_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2791 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 169:
#line 1808 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesSizes_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2799 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 170:
#line 1812 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesSizes_NoDictElement());
      }
#line 2807 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 171:
#line 1816 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2815 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 172:
#line 1820 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2823 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 173:
#line 1824 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesNames_NoDictElement());
      }
#line 2831 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 174:
#line 1828 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesTmpContent_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2839 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 175:
#line 1832 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesTmpContent_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2847 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 176:
#line 1836 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesTmpContent_NoDictElement());
      }
#line 2855 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 177:
#line 1840 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultiPartFileName_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2863 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 178:
#line 1844 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultiPartFileName_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2871 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 179:
#line 1848 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultiPartFileName_NoDictElement());
      }
#line 2879 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 180:
#line 1852 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultiPartName_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2887 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 181:
#line 1856 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultiPartName_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2895 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 182:
#line 1860 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultiPartName_NoDictElement());
      }
#line 2903 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 183:
#line 1864 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVarsNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2911 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 184:
#line 1868 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVarsNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2919 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 185:
#line 1872 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVarsNames_NoDictElement());
      }
#line 2927 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 186:
#line 1876 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVars_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2935 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 187:
#line 1880 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVars_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2943 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 188:
#line 1884 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVars_NoDictElement());
      }
#line 2951 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 189:
#line 1888 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Files_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2959 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 190:
#line 1892 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Files_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2967 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 191:
#line 1896 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Files_NoDictElement());
      }
#line 2975 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 192:
#line 1900 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestCookies_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2983 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 193:
#line 1904 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestCookies_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2991 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 194:
#line 1908 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestCookies_NoDictElement());
      }
#line 2999 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 195:
#line 1912 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestHeaders_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3007 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 196:
#line 1916 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestHeaders_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3015 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 197:
#line 1920 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestHeaders_NoDictElement());
      }
#line 3023 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 198:
#line 1924 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseHeaders_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3031 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 199:
#line 1928 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseHeaders_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3039 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 200:
#line 1932 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseHeaders_NoDictElement());
      }
#line 3047 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 201:
#line 1936 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Geo_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3055 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 202:
#line 1940 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Geo_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3063 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 203:
#line 1944 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Geo_NoDictElement());
      }
#line 3071 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 204:
#line 1948 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestCookiesNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3079 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 205:
#line 1952 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestCookiesNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3087 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 206:
#line 1956 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestCookiesNames_NoDictElement());
      }
#line 3095 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 207:
#line 1960 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Rule_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3103 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 208:
#line 1964 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Rule_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3111 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 209:
#line 1968 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Rule_NoDictElement());
      }
#line 3119 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 210:
#line 1972 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Env("ENV:" + yystack_[0].value.as< std::string > ()));
      }
#line 3127 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 211:
#line 1976 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Env("ENV:" + yystack_[0].value.as< std::string > ()));
      }
#line 3135 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 212:
#line 1980 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Env("ENV"));
      }
#line 3143 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 213:
#line 1984 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::XML("XML:" + yystack_[0].value.as< std::string > ()));
      }
#line 3151 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 214:
#line 1988 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::XML("XML:" + yystack_[0].value.as< std::string > ()));
      }
#line 3159 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 215:
#line 1992 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::XML_NoDictElement());
      }
#line 3167 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 216:
#line 1996 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesTmpNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3175 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 217:
#line 2000 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesTmpNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3183 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 218:
#line 2004 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesTmpNames_NoDictElement());
      }
#line 3191 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 219:
#line 2008 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Resource_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3199 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 220:
#line 2012 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Resource_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3207 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 221:
#line 2016 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Resource_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3215 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 222:
#line 2020 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Resource_NoDictElement());
      }
#line 3223 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 223:
#line 2024 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Ip_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3231 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 224:
#line 2028 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Ip_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3239 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 225:
#line 2032 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Ip_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3247 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 226:
#line 2036 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Ip_NoDictElement());
      }
#line 3255 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 227:
#line 2040 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Global_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3263 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 228:
#line 2044 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Global_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3271 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 229:
#line 2048 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Global_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3279 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 230:
#line 2052 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Global_NoDictElement());
      }
#line 3287 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 231:
#line 2056 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::User_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3295 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 232:
#line 2060 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::User_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3303 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 233:
#line 2064 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::User_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3311 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 234:
#line 2068 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::User_NoDictElement());
      }
#line 3319 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 235:
#line 2072 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Tx_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3327 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 236:
#line 2076 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Tx_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3335 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 237:
#line 2080 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Tx_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3343 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 238:
#line 2084 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Tx_NoDictElement());
      }
#line 3351 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 239:
#line 2088 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Session_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3359 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 240:
#line 2092 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Session_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3367 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 241:
#line 2096 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Session_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3375 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 242:
#line 2100 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Session_NoDictElement());
      }
#line 3383 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 243:
#line 2104 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3391 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 244:
#line 2108 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3399 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 245:
#line 2112 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsNames_NoDictElement());
      }
#line 3407 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 246:
#line 2116 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsGetNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3415 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 247:
#line 2120 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsGetNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3423 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 248:
#line 2124 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsGetNames_NoDictElement());
      }
#line 3431 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 249:
#line 2129 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsPostNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3439 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 250:
#line 2133 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsPostNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3447 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 251:
#line 2137 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsPostNames_NoDictElement());
      }
#line 3455 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 252:
#line 2142 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestHeadersNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3463 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 253:
#line 2146 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestHeadersNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3471 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 254:
#line 2150 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestHeadersNames_NoDictElement());
      }
#line 3479 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 255:
#line 2155 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseContentType());
      }
#line 3487 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 256:
#line 2160 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseHeadersNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3495 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 257:
#line 2164 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseHeadersNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3503 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 258:
#line 2168 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseHeadersNames_NoDictElement());
      }
#line 3511 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 259:
#line 2172 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsCombinedSize());
      }
#line 3519 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 260:
#line 2176 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::AuthType());
      }
#line 3527 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 261:
#line 2180 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesCombinedSize());
      }
#line 3535 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 262:
#line 2184 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FullRequest());
      }
#line 3543 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 263:
#line 2188 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FullRequestLength());
      }
#line 3551 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 264:
#line 2192 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::InboundDataError());
      }
#line 3559 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 265:
#line 2196 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVar());
      }
#line 3567 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 266:
#line 2200 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVarName());
      }
#line 3575 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 267:
#line 2204 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartBoundaryQuoted());
      }
#line 3583 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 268:
#line 2208 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartBoundaryWhiteSpace());
      }
#line 3591 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 269:
#line 2212 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartCrlfLFLines());
      }
#line 3599 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 270:
#line 2216 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartDateAfter());
      }
#line 3607 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 271:
#line 2220 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartDateBefore());
      }
#line 3615 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 272:
#line 2224 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartFileLimitExceeded());
      }
#line 3623 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 273:
#line 2228 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartHeaderFolding());
      }
#line 3631 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 274:
#line 2232 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartInvalidHeaderFolding());
      }
#line 3639 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 275:
#line 2236 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartInvalidPart());
      }
#line 3647 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 276:
#line 2240 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartInvalidQuoting());
      }
#line 3655 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 277:
#line 2244 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartLFLine());
      }
#line 3663 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 278:
#line 2248 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartMissingSemicolon());
      }
#line 3671 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 279:
#line 2252 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartStrictError());
      }
#line 3679 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 280:
#line 2256 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartUnmatchedBoundary());
      }
#line 3687 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 281:
#line 2260 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::OutboundDataError());
      }
#line 3695 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 282:
#line 2264 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::PathInfo());
      }
#line 3703 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 283:
#line 2268 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::QueryString());
      }
#line 3711 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 284:
#line 2272 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RemoteAddr());
      }
#line 3719 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 285:
#line 2276 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RemoteHost());
      }
#line 3727 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 286:
#line 2280 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RemotePort());
      }
#line 3735 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 287:
#line 2284 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ReqbodyError());
      }
#line 3743 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 288:
#line 2288 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ReqbodyErrorMsg());
      }
#line 3751 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 289:
#line 2292 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ReqbodyProcessor());
      }
#line 3759 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 290:
#line 2296 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ReqbodyProcessorError());
      }
#line 3767 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 291:
#line 2300 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ReqbodyProcessorErrorMsg());
      }
#line 3775 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 292:
#line 2304 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestBasename());
      }
#line 3783 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 293:
#line 2308 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestBody());
      }
#line 3791 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 294:
#line 2312 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestBodyLength());
      }
#line 3799 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 295:
#line 2316 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestFilename());
      }
#line 3807 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 296:
#line 2320 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestLine());
      }
#line 3815 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 297:
#line 2324 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestMethod());
      }
#line 3823 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 298:
#line 2328 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestProtocol());
      }
#line 3831 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 299:
#line 2332 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestURI());
      }
#line 3839 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 300:
#line 2336 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestURIRaw());
      }
#line 3847 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 301:
#line 2340 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseBody());
      }
#line 3855 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 302:
#line 2344 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseContentLength());
      }
#line 3863 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 303:
#line 2348 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseProtocol());
      }
#line 3871 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 304:
#line 2352 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseStatus());
      }
#line 3879 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 305:
#line 2356 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ServerAddr());
      }
#line 3887 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 306:
#line 2360 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ServerName());
      }
#line 3895 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 307:
#line 2364 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ServerPort());
      }
#line 3903 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 308:
#line 2368 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::SessionID());
      }
#line 3911 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 309:
#line 2372 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::UniqueID());
      }
#line 3919 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 310:
#line 2376 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::UrlEncodedError());
      }
#line 3927 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 311:
#line 2380 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::UserID());
      }
#line 3935 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 312:
#line 2384 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Status());
      }
#line 3943 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 313:
#line 2388 "seclang-parser.yy" // lalr1.cc:847
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::WebAppId());
      }
#line 3951 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 314:
#line 2392 "seclang-parser.yy" // lalr1.cc:847
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new Duration(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3962 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 315:
#line 2400 "seclang-parser.yy" // lalr1.cc:847
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new ModsecBuild(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3973 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 316:
#line 2407 "seclang-parser.yy" // lalr1.cc:847
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new HighestSeverity(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3984 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 317:
#line 2414 "seclang-parser.yy" // lalr1.cc:847
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new RemoteUser(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3995 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 318:
#line 2421 "seclang-parser.yy" // lalr1.cc:847
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new Time(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4006 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 319:
#line 2428 "seclang-parser.yy" // lalr1.cc:847
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeDay(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4017 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 320:
#line 2435 "seclang-parser.yy" // lalr1.cc:847
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeEpoch(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4028 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 321:
#line 2442 "seclang-parser.yy" // lalr1.cc:847
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeHour(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4039 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 322:
#line 2449 "seclang-parser.yy" // lalr1.cc:847
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeMin(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4050 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 323:
#line 2456 "seclang-parser.yy" // lalr1.cc:847
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeMon(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4061 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 324:
#line 2463 "seclang-parser.yy" // lalr1.cc:847
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
            std::unique_ptr<Variable> c(new TimeSec(name));
            yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4072 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 325:
#line 2470 "seclang-parser.yy" // lalr1.cc:847
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeWDay(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4083 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 326:
#line 2477 "seclang-parser.yy" // lalr1.cc:847
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeYear(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4094 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 327:
#line 2487 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Accuracy(yystack_[0].value.as< std::string > ()));
      }
#line 4102 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 328:
#line 2491 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Allow(yystack_[0].value.as< std::string > ()));
      }
#line 4110 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 329:
#line 2495 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_NOT_SUPPORTED("Append", yystack_[1].location);
      }
#line 4118 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 330:
#line 2499 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::AuditLog(yystack_[0].value.as< std::string > ()));
      }
#line 4126 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 331:
#line 2503 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Block(yystack_[0].value.as< std::string > ()));
      }
#line 4134 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 332:
#line 2507 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Capture(yystack_[0].value.as< std::string > ()));
      }
#line 4142 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 333:
#line 2511 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Chain(yystack_[0].value.as< std::string > ()));
      }
#line 4150 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 334:
#line 2515 "seclang-parser.yy" // lalr1.cc:847
    {
        //ACTION_NOT_SUPPORTED("CtlAuditEngine", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 4159 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 335:
#line 2520 "seclang-parser.yy" // lalr1.cc:847
    {
        //ACTION_NOT_SUPPORTED("CtlAuditEngine", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 4168 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 336:
#line 2525 "seclang-parser.yy" // lalr1.cc:847
    {
        //ACTION_NOT_SUPPORTED("CtlAuditEngine", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 4177 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 337:
#line 2530 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::AuditLogParts(yystack_[0].value.as< std::string > ()));
      }
#line 4185 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 338:
#line 2534 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyProcessorJSON(yystack_[0].value.as< std::string > ()));
      }
#line 4193 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 339:
#line 2538 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyProcessorXML(yystack_[0].value.as< std::string > ()));
      }
#line 4201 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 340:
#line 2542 "seclang-parser.yy" // lalr1.cc:847
    {
        //ACTION_NOT_SUPPORTED("CtlForceReequestBody", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 4210 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 341:
#line 2547 "seclang-parser.yy" // lalr1.cc:847
    {
        //ACTION_NOT_SUPPORTED("CtlForceReequestBody", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 4219 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 342:
#line 2552 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyAccess(yystack_[1].value.as< std::string > () + "true"));
      }
#line 4227 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 343:
#line 2556 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyAccess(yystack_[1].value.as< std::string > () + "false"));
      }
#line 4235 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 344:
#line 2560 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleEngine("ctl:RuleEngine=on"));
      }
#line 4243 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 345:
#line 2564 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleEngine("ctl:RuleEngine=off"));
      }
#line 4251 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 346:
#line 2568 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleEngine("ctl:RuleEngine=detectiononly"));
      }
#line 4259 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 347:
#line 2572 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveById(yystack_[0].value.as< std::string > ()));
      }
#line 4267 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 348:
#line 2576 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveTargetById(yystack_[0].value.as< std::string > ()));
      }
#line 4275 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 349:
#line 2580 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveTargetByTag(yystack_[0].value.as< std::string > ()));
      }
#line 4283 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 350:
#line 2584 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Deny(yystack_[0].value.as< std::string > ()));
      }
#line 4291 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 351:
#line 2588 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_NOT_SUPPORTED("DeprecateVar", yystack_[1].location);
      }
#line 4299 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 352:
#line 2592 "seclang-parser.yy" // lalr1.cc:847
    {
        //ACTION_NOT_SUPPORTED("Drop", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[0].value.as< std::string > ()));
      }
#line 4308 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 353:
#line 2597 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Exec(yystack_[0].value.as< std::string > ()));
      }
#line 4316 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 354:
#line 2601 "seclang-parser.yy" // lalr1.cc:847
    {
        //ACTION_NOT_SUPPORTED("ExpireVar", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[0].value.as< std::string > ()));
      }
#line 4325 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 355:
#line 2606 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::RuleId(yystack_[0].value.as< std::string > ()));
      }
#line 4333 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 356:
#line 2610 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::InitCol(yystack_[1].value.as< std::string > (), std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4341 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 357:
#line 2614 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::LogData(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4349 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 358:
#line 2618 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Log(yystack_[0].value.as< std::string > ()));
      }
#line 4357 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 359:
#line 2622 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Maturity(yystack_[0].value.as< std::string > ()));
      }
#line 4365 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 360:
#line 2626 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Msg(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4373 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 361:
#line 2630 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::MultiMatch(yystack_[0].value.as< std::string > ()));
      }
#line 4381 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 362:
#line 2634 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::NoAuditLog(yystack_[0].value.as< std::string > ()));
      }
#line 4389 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 363:
#line 2638 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::NoLog(yystack_[0].value.as< std::string > ()));
      }
#line 4397 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 364:
#line 2642 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Pass(yystack_[0].value.as< std::string > ()));
      }
#line 4405 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 365:
#line 2646 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_NOT_SUPPORTED("Pause", yystack_[1].location);
      }
#line 4413 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 366:
#line 2650 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Phase(yystack_[0].value.as< std::string > ()));
      }
#line 4421 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 367:
#line 2654 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_NOT_SUPPORTED("Prepend", yystack_[1].location);
      }
#line 4429 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 368:
#line 2658 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_NOT_SUPPORTED("Proxy", yystack_[1].location);
      }
#line 4437 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 369:
#line 2662 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Redirect(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4445 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 370:
#line 2666 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Rev(yystack_[0].value.as< std::string > ()));
      }
#line 4453 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 371:
#line 2670 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_NOT_SUPPORTED("SanatiseArg", yystack_[1].location);
      }
#line 4461 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 372:
#line 2674 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_NOT_SUPPORTED("SanatiseMatched", yystack_[1].location);
      }
#line 4469 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 373:
#line 2678 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_NOT_SUPPORTED("SanatiseMatchedBytes", yystack_[1].location);
      }
#line 4477 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 374:
#line 2682 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_NOT_SUPPORTED("SanatiseRequestHeader", yystack_[1].location);
      }
#line 4485 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 375:
#line 2686 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_NOT_SUPPORTED("SanatiseResponseHeader", yystack_[1].location);
      }
#line 4493 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 376:
#line 2690 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_NOT_SUPPORTED("SetEnv", yystack_[1].location);
      }
#line 4501 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 377:
#line 2694 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetRSC(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4509 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 378:
#line 2698 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetSID(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4517 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 379:
#line 2702 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetUID(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4525 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 380:
#line 2706 "seclang-parser.yy" // lalr1.cc:847
    {
        yylhs.value.as< std::unique_ptr<actions::Action> > () = std::move(yystack_[0].value.as< std::unique_ptr<actions::Action> > ());
      }
#line 4533 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 381:
#line 2710 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Severity(yystack_[0].value.as< std::string > ()));
      }
#line 4541 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 382:
#line 2714 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Skip(yystack_[0].value.as< std::string > ()));
      }
#line 4549 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 383:
#line 2718 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SkipAfter(yystack_[0].value.as< std::string > ()));
      }
#line 4557 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 384:
#line 2722 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::data::Status(yystack_[0].value.as< std::string > ()));
      }
#line 4565 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 385:
#line 2726 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Tag(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4573 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 386:
#line 2730 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Ver(yystack_[0].value.as< std::string > ()));
      }
#line 4581 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 387:
#line 2734 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::XmlNS(yystack_[0].value.as< std::string > ()));
      }
#line 4589 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 388:
#line 2738 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ParityZero7bit(yystack_[0].value.as< std::string > ()));
      }
#line 4597 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 389:
#line 2742 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ParityOdd7bit(yystack_[0].value.as< std::string > ()));
      }
#line 4605 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 390:
#line 2746 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ParityEven7bit(yystack_[0].value.as< std::string > ()));
      }
#line 4613 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 391:
#line 2750 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::SqlHexDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4621 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 392:
#line 2754 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Base64Encode(yystack_[0].value.as< std::string > ()));
      }
#line 4629 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 393:
#line 2758 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Base64Decode(yystack_[0].value.as< std::string > ()));
      }
#line 4637 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 394:
#line 2762 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Base64DecodeExt(yystack_[0].value.as< std::string > ()));
      }
#line 4645 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 395:
#line 2766 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::CmdLine(yystack_[0].value.as< std::string > ()));
      }
#line 4653 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 396:
#line 2770 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Sha1(yystack_[0].value.as< std::string > ()));
      }
#line 4661 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 397:
#line 2774 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Md5(yystack_[0].value.as< std::string > ()));
      }
#line 4669 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 398:
#line 2778 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::HexEncode(yystack_[0].value.as< std::string > ()));
      }
#line 4677 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 399:
#line 2782 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::HexDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4685 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 400:
#line 2786 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::LowerCase(yystack_[0].value.as< std::string > ()));
      }
#line 4693 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 401:
#line 2790 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::UpperCase(yystack_[0].value.as< std::string > ()));
      }
#line 4701 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 402:
#line 2794 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::UrlDecodeUni(yystack_[0].value.as< std::string > ()));
      }
#line 4709 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 403:
#line 2798 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::UrlDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4717 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 404:
#line 2802 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::None(yystack_[0].value.as< std::string > ()));
      }
#line 4725 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 405:
#line 2806 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::CompressWhitespace(yystack_[0].value.as< std::string > ()));
      }
#line 4733 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 406:
#line 2810 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveWhitespace(yystack_[0].value.as< std::string > ()));
      }
#line 4741 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 407:
#line 2814 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ReplaceNulls(yystack_[0].value.as< std::string > ()));
      }
#line 4749 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 408:
#line 2818 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveNulls(yystack_[0].value.as< std::string > ()));
      }
#line 4757 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 409:
#line 2822 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::HtmlEntityDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4765 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 410:
#line 2826 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::JsDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4773 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 411:
#line 2830 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::CssDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4781 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 412:
#line 2834 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Trim(yystack_[0].value.as< std::string > ()));
      }
#line 4789 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 413:
#line 2838 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::NormalisePathWin(yystack_[0].value.as< std::string > ()));
      }
#line 4797 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 414:
#line 2842 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::NormalisePath(yystack_[0].value.as< std::string > ()));
      }
#line 4805 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 415:
#line 2846 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Length(yystack_[0].value.as< std::string > ()));
      }
#line 4813 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 416:
#line 2850 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Utf8ToUnicode(yystack_[0].value.as< std::string > ()));
      }
#line 4821 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 417:
#line 2854 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveCommentsChar(yystack_[0].value.as< std::string > ()));
      }
#line 4829 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 418:
#line 2858 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveComments(yystack_[0].value.as< std::string > ()));
      }
#line 4837 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 419:
#line 2862 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ReplaceComments(yystack_[0].value.as< std::string > ()));
      }
#line 4845 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 420:
#line 2869 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::unsetOperation, std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
      }
#line 4853 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 421:
#line 2873 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::setToOneOperation, std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
      }
#line 4861 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 422:
#line 2877 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::setOperation, std::move(yystack_[2].value.as< std::unique_ptr<Variable> > ()), std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4869 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 423:
#line 2881 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::sumAndSetOperation, std::move(yystack_[2].value.as< std::unique_ptr<Variable> > ()), std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4877 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 424:
#line 2885 "seclang-parser.yy" // lalr1.cc:847
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::substractAndSetOperation, std::move(yystack_[2].value.as< std::unique_ptr<Variable> > ()), std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4885 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 425:
#line 2892 "seclang-parser.yy" // lalr1.cc:847
    {
        yystack_[1].value.as< std::unique_ptr<RunTimeString> > ()->appendText(yystack_[0].value.as< std::string > ());
        yylhs.value.as< std::unique_ptr<RunTimeString> > () = std::move(yystack_[1].value.as< std::unique_ptr<RunTimeString> > ());
      }
#line 4894 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 426:
#line 2897 "seclang-parser.yy" // lalr1.cc:847
    {
        yystack_[1].value.as< std::unique_ptr<RunTimeString> > ()->appendVar(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ()));
        yylhs.value.as< std::unique_ptr<RunTimeString> > () = std::move(yystack_[1].value.as< std::unique_ptr<RunTimeString> > ());
      }
#line 4903 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 427:
#line 2902 "seclang-parser.yy" // lalr1.cc:847
    {
        std::unique_ptr<RunTimeString> r(new RunTimeString());
        r->appendText(yystack_[0].value.as< std::string > ());
        yylhs.value.as< std::unique_ptr<RunTimeString> > () = std::move(r);
      }
#line 4913 "seclang-parser.cc" // lalr1.cc:847
    break;

  case 428:
#line 2908 "seclang-parser.yy" // lalr1.cc:847
    {
        std::unique_ptr<RunTimeString> r(new RunTimeString());
        r->appendVar(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ()));
        yylhs.value.as< std::unique_ptr<RunTimeString> > () = std::move(r);
      }
#line 4923 "seclang-parser.cc" // lalr1.cc:847
    break;


#line 4927 "seclang-parser.cc" // lalr1.cc:847
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state,
                                           yyempty ? yyempty_ : yyla.type_get ()));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyempty)
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyempty = true;
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyempty)
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyempty)
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  seclang_parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
  seclang_parser::yysyntax_error_ (state_type yystate, symbol_number_type yytoken) const
  {
    std::string yyres;
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yytoken) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (yytoken != yyempty_)
      {
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const short int seclang_parser::yypact_ninf_ = -374;

  const signed char seclang_parser::yytable_ninf_ = -1;

  const short int
  seclang_parser::yypact_[] =
  {
    2668,  -374,  -273,  -374,   -90,  -374,  -242,  -374,  -374,  -374,
    -374,  -374,  -263,  -374,  -374,  -374,  -374,  -374,  -270,  -374,
    -374,  -374,  -152,  -149,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,  -374,  -374,  -374,  -374,  -374,  -374,  -147,  -374,  -374,
    -148,  -374,  -141,  -374,  -142,  -137,  -374,  -279,   -86,   -86,
    -374,  -374,  -374,  -374,  -129,  -287,  -374,  -374,  -374,  1435,
    1435,  1435,   -86,  -257,  -127,  -374,  -374,  -374,  -125,  -374,
    -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  1435,   -86,
    2820,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,  -374,  -374,  2249,  -249,  -374,  -374,  -374,  -374,  -374,
    -374,  -374,  -255,  -374,  -374,  -374,  -123,  -121,  -374,  -374,
    -374,  -374,  -374,  -374,  -374,  -374,  -374,  2377,  -374,  2377,
    -374,  2377,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,
    2377,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  2377,  2377,
    2377,  -374,  -374,  -374,  -374,  2377,  -374,  -374,  -374,  -374,
    -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,
    3013,  -374,     7,  -374,  -374,  -374,  -374,  -374,  -374,  2567,
    2567,  -155,  -153,  -151,  -146,  -144,  -140,  -138,  -135,  -133,
    -131,  -128,  -126,  -124,  -122,  -120,  -118,  -374,  -116,  -114,
    -112,  -110,  -374,  -374,  -108,  -374,  -374,  -374,  -374,  -374,
    -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -106,
    -374,  -374,  -374,  -374,  -374,   443,  -374,  -374,  -374,  -104,
    -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,   530,   617,   938,  1025,  1112,  -100,   -98,  1524,  -374,
    -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,  -374,  -374,    18,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,  -374,  -374,  -374,  -374,  1931,  -374,  -374,  -374,  2567,
     -52,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,  -374,  -374,  -374,  2464,  2464,  2464,  2464,  2464,  2464,
    2464,  2464,     5,  3013,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,  -374,  2464,  -374,  -374,  -374,  -374,  2464,  -374,  -374,
    2464,  -374,  -374,  2464,  -374,  -374,  2464,  -374,  -374,  2464,
    -374,  -374,  -374,  -374,    10,  1613,  2059,  2377,  2377,  2377,
    -374,  -374,  2377,  2377,  2377,  -374,  2377,  2377,  2377,  2377,
    2377,  2377,  2377,  2377,  2377,  2377,  2377,  2377,  2377,  2377,
    2377,  -374,  2377,  2377,  2377,  2377,  -374,  -374,  2377,  2377,
    2377,  2377,   -86,  -374,  2464,  -374,  2377,  2377,  2377,  -374,
    -374,  -374,  -374,  -374,  2567,  2567,  -374,  -374,  2464,  2464,
    2464,  2464,  2464,  2464,  2464,  2464,  2464,  2464,  2464,  2464,
    2464,  2464,  2464,  2464,  2464,  2464,  2464,  2464,  2464,  2464,
    2464,  2464,  2464,  2464,  2464,  2464,  2464,  2464,  -374,  2464,
    2464,  2464,  -374,  -374
  };

  const unsigned short int
  seclang_parser::yydefact_[] =
  {
       0,     2,     0,   139,     0,    87,     0,    86,    90,    91,
       7,     6,     0,    11,    14,    12,    13,    17,     0,   124,
     123,    92,     0,     0,   100,   101,   102,   103,    97,   125,
     104,   105,   137,   136,   108,   109,   110,     0,   128,   126,
       0,   127,     0,   129,     0,     0,   113,     0,     0,     0,
      78,   148,   149,   150,     0,     0,   116,   118,   117,     0,
       0,     0,     0,     0,     0,    26,    24,    25,     0,   138,
     144,   145,   146,   143,   147,   114,   115,   142,     0,     0,
       0,     4,    72,     5,    96,    95,    15,    16,    89,    88,
       9,    10,     8,    20,    19,    18,    94,    93,    99,    98,
      83,    82,   130,   131,    85,    84,   132,   133,   112,   111,
      81,    79,    80,     0,     0,   327,   328,   329,   330,   331,
     332,   333,     0,   337,   338,   339,     0,     0,   347,   348,
     349,   350,   351,   352,   353,   354,   355,     0,   358,     0,
     359,     0,   361,   362,   363,   364,   365,   366,   367,   368,
       0,   370,   371,   372,   373,   374,   375,   376,     0,     0,
       0,   381,   382,   383,   384,     0,   392,   393,   394,   395,
     405,   411,   398,   399,   409,   410,   415,   400,   397,   404,
     414,   413,   390,   389,   388,   418,   417,   408,   406,   419,
     407,   396,   391,   412,   401,   403,   402,   416,   386,   387,
       0,    75,    30,    32,    77,   107,   106,   134,   135,     0,
       0,   161,   164,   167,   170,   173,   176,   179,   182,   185,
     188,   191,   194,   197,   200,   203,   206,   259,   248,   209,
     245,   251,   260,   261,   218,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     288,   287,   291,   290,   289,   292,   294,   293,   295,   254,
     296,   297,   298,   300,   299,   222,   301,   302,   255,   258,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   313,
     312,   226,   230,   238,   242,   234,   212,   215,     0,   315,
     314,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   119,   151,   156,   120,   121,   122,    22,    21,
      23,    28,    27,   140,   141,     0,    76,     1,     3,     0,
     421,   380,   346,   345,   344,   335,   334,   336,   341,   340,
     343,   342,   427,   428,   356,   357,   360,   369,   377,   378,
     379,   385,     0,     0,   158,   157,   159,   160,   162,   163,
     165,   166,   168,   169,   171,   172,   174,   175,   177,   178,
     180,   181,   183,   184,   186,   187,   189,   190,   192,   193,
     195,   196,   198,   199,   201,   202,   204,   205,   246,   247,
     207,   208,   243,   244,   249,   250,   216,   217,   252,   253,
     220,   221,   219,   256,   257,   224,   225,   223,   228,   229,
     227,   236,   237,   235,   240,   241,   239,   232,   233,   231,
     210,   211,   213,   214,     0,     0,     0,     0,     0,     0,
      38,    39,     0,     0,     0,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37,     0,     0,     0,     0,    40,    41,     0,     0,
       0,     0,    74,    33,    35,   420,     0,     0,     0,   425,
     426,    29,    31,   152,     0,     0,   153,    34,    36,    70,
      55,    54,    56,    57,    43,    58,    51,    59,    42,    60,
      61,    62,    63,    64,    65,    66,    52,    67,    68,    69,
      44,    45,    46,    47,    48,    49,    50,    53,    73,   422,
     423,   424,   155,   154
  };

  const short int
  seclang_parser::yypgoto_[] =
  {
    -374,  -374,   -48,  -374,   -45,  -160,  -374,  -373,  -374,   -55,
    -117,   -59,  -195,  -374,  -132
  };

  const short int
  seclang_parser::yydefgoto_[] =
  {
      -1,    80,    81,    82,   201,   202,   462,   463,    83,   312,
     313,   343,   203,   331,   344
  };

  const unsigned short int
  seclang_parser::yytable_[] =
  {
     314,   314,   314,   207,   204,   315,   316,   345,   353,   346,
     353,   113,   110,   208,   111,   112,   425,   317,   347,   314,
      84,    85,    93,   325,   425,    94,   348,   349,   350,    95,
      90,    91,   328,   351,   326,    92,   318,   319,   335,   336,
     352,   320,   332,   337,   333,   334,   466,   467,   468,    86,
      87,    88,    89,   477,   330,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,    96,    97,   402,    98,    99,   100,   101,   102,   103,
     354,   355,   104,   105,   106,   107,   108,   109,   472,   407,
     410,   413,   416,   419,   205,   206,   321,   322,   323,   324,
     338,   339,   340,   341,   356,   357,   358,   359,   360,   361,
       0,   424,     0,   362,   363,   364,   365,     0,     0,   366,
     367,   368,   369,   464,   370,   371,   372,   373,   374,   375,
       0,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   403,   404,     0,   200,   420,
     421,   422,   423,     0,     0,     0,     0,     0,     0,   314,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     465,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   470,   470,   470,   470,   470,
     470,   470,   470,     0,   478,   479,   480,   481,     0,     0,
     482,   483,   484,     0,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   471,
     500,   501,   502,   503,   473,     0,   504,   505,   506,   507,
       0,     0,     0,     0,   509,   510,   511,     0,     0,     0,
       0,     0,     0,   470,     0,     0,     0,     0,   470,     0,
       0,   470,     0,     0,   470,     0,     0,   470,     0,     0,
     470,     0,     0,     0,     0,     0,   476,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   470,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   512,   513,   508,     0,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,     0,
     470,   470,   470,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   342,     0,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,     0,   400,   401,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   342,     0,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,     0,   405,
     406,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     342,     0,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,   408,   409,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   342,     0,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,     0,   411,   412,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   342,     0,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,     0,   414,   415,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   342,     0,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,   417,   418,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   474,   475,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,     0,     0,
       0,     0,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,     0,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,     0,     0,     0,     0,
       0,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,     0,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   342,     0,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,     0,     0,     0,     0,
     329,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   342,     0,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,     0,     0,     0,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,     0,     0,     0,     0,     1,     0,
       0,     0,     2,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     342,     0,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   469,     0,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     327,     0,     0,     0,     2,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,     4,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199
  };

  const short int
  seclang_parser::yycheck_[] =
  {
      59,    60,    61,   290,    49,    60,    61,   139,     3,   141,
       3,    97,   291,   300,   293,   294,     6,    62,   150,    78,
     293,   294,   292,    78,     6,   295,   158,   159,   160,   299,
     293,   294,    80,   165,    79,   298,   293,   294,   293,   294,
     200,   298,   291,   298,   293,   294,    98,    99,   100,   139,
     140,   293,   294,   426,   113,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   293,   294,   275,   293,   294,   293,   294,   296,   297,
     209,   210,   293,   294,   296,   297,   293,   294,   353,   291,
     292,   293,   294,   295,   293,   294,   293,   294,   293,   294,
     293,   294,   293,   294,   329,   330,   329,   330,   329,   330,
      -1,   298,    -1,   329,   330,   329,   330,    -1,    -1,   329,
     330,   329,   330,   325,   329,   330,   329,   330,   329,   330,
      -1,   329,   330,   329,   330,   329,   330,   329,   330,   329,
     330,   329,   330,   329,   330,   329,   330,   329,   330,   329,
     330,   329,   330,   329,   330,   329,   330,    -1,   314,   329,
     330,   329,   330,    -1,    -1,    -1,    -1,    -1,    -1,   298,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     329,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   344,   345,   346,   347,   348,
     349,   350,   351,    -1,   426,   427,   428,   429,    -1,    -1,
     432,   433,   434,    -1,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   314,
     452,   453,   454,   455,   314,    -1,   458,   459,   460,   461,
      -1,    -1,    -1,    -1,   466,   467,   468,    -1,    -1,    -1,
      -1,    -1,    -1,   402,    -1,    -1,    -1,    -1,   407,    -1,
      -1,   410,    -1,    -1,   413,    -1,    -1,   416,    -1,    -1,
     419,    -1,    -1,    -1,    -1,    -1,   425,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   464,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   474,   475,   462,    -1,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,    -1,
     509,   510,   511,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   313,    -1,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,    -1,   329,   330,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   313,    -1,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,    -1,   329,
     330,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     313,    -1,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,    -1,   329,   330,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   313,    -1,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,    -1,   329,   330,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   313,    -1,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,    -1,   329,   330,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   313,    -1,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
      -1,   329,   330,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    -1,    -1,
      -1,    -1,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,    -1,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    -1,    -1,    -1,    -1,
      -1,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   313,    -1,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    -1,    -1,    -1,    -1,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   313,    -1,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    -1,    -1,    -1,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    -1,    -1,    -1,    -1,     0,    -1,
      -1,    -1,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     313,    -1,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   313,    -1,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       0,    -1,    -1,    -1,     4,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   138,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
      97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226
  };

  const unsigned short int
  seclang_parser::yystos_[] =
  {
       0,     0,     4,     5,   138,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     332,   333,   334,   339,   293,   294,   139,   140,   293,   294,
     293,   294,   298,   292,   295,   299,   293,   294,   293,   294,
     293,   294,   296,   297,   293,   294,   296,   297,   293,   294,
     291,   293,   294,    97,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     314,   335,   336,   343,   335,   293,   294,   290,   300,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   340,   341,   342,   340,   340,   335,   293,   294,
     298,   293,   294,   293,   294,   340,   335,     0,   333,   101,
     342,   344,   291,   293,   294,   293,   294,   298,   293,   294,
     293,   294,   313,   342,   345,   345,   345,   345,   345,   345,
     345,   345,   336,     3,   342,   342,   329,   330,   329,   330,
     329,   330,   329,   330,   329,   330,   329,   330,   329,   330,
     329,   330,   329,   330,   329,   330,   329,   330,   329,   330,
     329,   330,   329,   330,   329,   330,   329,   330,   329,   330,
     329,   330,   329,   330,   329,   330,   329,   330,   329,   330,
     329,   330,   345,   329,   330,   329,   330,   345,   329,   330,
     345,   329,   330,   345,   329,   330,   345,   329,   330,   345,
     329,   330,   329,   330,   341,     6,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   337,   338,   345,   342,    98,    99,   100,   313,
     342,   314,   343,   314,     8,     9,   342,   338,   345,   345,
     345,   345,   345,   345,   345,   345,   345,   345,   345,   345,
     345,   345,   345,   345,   345,   345,   345,   345,   345,   345,
     345,   345,   345,   345,   345,   345,   345,   345,   335,   345,
     345,   345,   342,   342
  };

  const unsigned short int
  seclang_parser::yyr1_[] =
  {
       0,   331,   332,   332,   332,   333,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   335,
     335,   336,   336,   337,   337,   337,   337,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   340,   340,   341,   341,   341,   341,   341,   341,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     344,   344,   344,   344,   344,   345,   345,   345,   345
  };

  const unsigned char
  seclang_parser::yyr2_[] =
  {
       0,     2,     1,     2,     1,     1,     1,     1,     2,     2,
       2,     1,     1,     1,     1,     2,     2,     1,     2,     2,
       2,     2,     2,     2,     1,     1,     1,     2,     2,     3,
       1,     3,     1,     1,     2,     1,     2,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     1,     4,     3,     2,     2,     2,     1,     2,
       2,     2,     2,     2,     2,     2,     1,     1,     2,     2,
       1,     1,     1,     2,     2,     2,     2,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     4,     4,     1,     2,     2,     2,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     2,     2,     1,     2,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     2,     2,     1,     2,
       2,     2,     1,     2,     2,     2,     1,     2,     2,     2,
       1,     2,     2,     2,     1,     2,     2,     2,     1,     2,
       2,     2,     1,     2,     2,     1,     2,     2,     1,     2,
       2,     1,     2,     2,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     3,     3,     3,     2,     2,     1,     1
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const seclang_parser::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "\",\"",
  "\"CONFIG_CONTENT_INJECTION\"", "\"CONGIG_DIR_RESPONSE_BODY_MP_CLEAR\"",
  "PIPE", "NEW_LINE", "VAR_COUNT", "VAR_EXCLUSION", "VARIABLE_ARGS",
  "VARIABLE_ARGS_POST", "VARIABLE_ARGS_GET", "VARIABLE_FILES_SIZES",
  "VARIABLE_FILES_NAMES", "VARIABLE_FILES_TMP_CONTENT",
  "VARIABLE_MULTIPART_FILENAME", "VARIABLE_MULTIPART_NAME",
  "VARIABLE_MATCHED_VARS_NAMES", "VARIABLE_MATCHED_VARS", "VARIABLE_FILES",
  "VARIABLE_REQUEST_COOKIES", "VARIABLE_REQUEST_HEADERS",
  "VARIABLE_RESPONSE_HEADERS", "VARIABLE_GEO",
  "VARIABLE_REQUEST_COOKIES_NAMES", "VARIABLE_ARGS_COMBINED_SIZE",
  "VARIABLE_ARGS_GET_NAMES", "VARIABLE_RULE", "\"Variable ARGS_NAMES\"",
  "VARIABLE_ARGS_POST_NAMES", "\"AUTH_TYPE\"", "\"FILES_COMBINED_SIZE\"",
  "\"FILES_TMPNAMES\"", "\"FULL_REQUEST\"", "\"FULL_REQUEST_LENGTH\"",
  "\"INBOUND_DATA_ERROR\"", "\"MATCHED_VAR\"", "\"MATCHED_VAR_NAME\"",
  "VARIABLE_MULTIPART_BOUNDARY_QUOTED",
  "VARIABLE_MULTIPART_BOUNDARY_WHITESPACE", "\"MULTIPART_CRLF_LF_LINES\"",
  "\"MULTIPART_DATA_AFTER\"", "VARIABLE_MULTIPART_DATA_BEFORE",
  "\"MULTIPART_FILE_LIMIT_EXCEEDED\"", "\"MULTIPART_HEADER_FOLDING\"",
  "\"MULTIPART_INVALID_HEADER_FOLDING\"",
  "VARIABLE_MULTIPART_INVALID_PART", "\"MULTIPART_INVALID_QUOTING\"",
  "VARIABLE_MULTIPART_LF_LINE", "VARIABLE_MULTIPART_MISSING_SEMICOLON",
  "\"MULTIPART_STRICT_ERROR\"", "\"MULTIPART_UNMATCHED_BOUNDARY\"",
  "\"OUTBOUND_DATA_ERROR\"", "\"PATH_INFO\"", "\"QUERY_STRING\"",
  "\"REMOTE_ADDR\"", "\"REMOTE_HOST\"", "\"REMOTE_PORT\"",
  "\"REQBODY_ERROR_MSG\"", "\"REQBODY_ERROR\"",
  "\"REQBODY_PROCESSOR_ERROR_MSG\"", "\"REQBODY_PROCESSOR_ERROR\"",
  "\"REQBODY_PROCESSOR\"", "\"REQUEST_BASENAME\"",
  "\"REQUEST_BODY_LENGTH\"", "\"REQUEST_BODY\"", "\"REQUEST_FILENAME\"",
  "VARIABLE_REQUEST_HEADERS_NAMES", "\"REQUEST_LINE\"",
  "\"REQUEST_METHOD\"", "\"REQUEST_PROTOCOL\"", "\"REQUEST_URI_RAW\"",
  "\"REQUEST_URI\"", "\"RESOURCE\"", "\"RESPONSE_BODY\"",
  "\"RESPONSE_CONTENT_LENGTH\"", "VARIABLE_RESPONSE_CONTENT_TYPE",
  "VARIABLE_RESPONSE_HEADERS_NAMES", "\"RESPONSE_PROTOCOL\"",
  "\"RESPONSE_STATUS\"", "\"SERVER_ADDR\"", "\"SERVER_NAME\"",
  "\"SERVER_PORT\"", "\"SESSIONID\"", "\"UNIQUE_ID\"",
  "\"URLENCODED_ERROR\"", "\"USERID\"", "\"WEBAPPID\"",
  "\"VARIABLE_STATUS\"", "\"VARIABLE_IP\"", "\"VARIABLE_GLOBAL\"",
  "\"VARIABLE_TX\"", "\"VARIABLE_SESSION\"", "\"VARIABLE_USER\"",
  "\"RUN_TIME_VAR_ENV\"", "\"RUN_TIME_VAR_XML\"", "\"SetVar\"",
  "SETVAR_OPERATION_EQUALS", "SETVAR_OPERATION_EQUALS_PLUS",
  "SETVAR_OPERATION_EQUALS_MINUS", "\"NOT\"", "\"OPERATOR_BEGINS_WITH\"",
  "\"OPERATOR_CONTAINS\"", "\"OPERATOR_CONTAINS_WORD\"",
  "\"OPERATOR_DETECT_SQLI\"", "\"OPERATOR_DETECT_XSS\"",
  "\"OPERATOR_ENDS_WITH\"", "\"OPERATOR_EQ\"", "\"OPERATOR_FUZZY_HASH\"",
  "\"OPERATOR_GEOLOOKUP\"", "\"OPERATOR_GE\"", "\"OPERATOR_GSB_LOOKUP\"",
  "\"OPERATOR_GT\"", "\"OPERATOR_INSPECT_FILE\"",
  "\"OPERATOR_IP_MATCH_FROM_FILE\"", "\"OPERATOR_IP_MATCH\"",
  "\"OPERATOR_LE\"", "\"OPERATOR_LT\"", "\"OPERATOR_PM_FROM_FILE\"",
  "\"OPERATOR_PM\"", "\"OPERATOR_RBL\"", "\"OPERATOR_RSUB\"",
  "\"Operator RX (content only)\"", "\"OPERATOR_RX\"",
  "\"OPERATOR_STR_EQ\"", "\"OPERATOR_STR_MATCH\"",
  "\"OPERATOR_UNCONDITIONAL_MATCH\"", "\"OPERATOR_VALIDATE_BYTE_RANGE\"",
  "\"OPERATOR_VALIDATE_DTD\"", "\"OPERATOR_VALIDATE_HASH\"",
  "\"OPERATOR_VALIDATE_SCHEMA\"", "\"OPERATOR_VALIDATE_URL_ENCODING\"",
  "\"OPERATOR_VALIDATE_UTF8_ENCODING\"", "\"OPERATOR_VERIFY_CC\"",
  "\"OPERATOR_VERIFY_CPF\"", "\"OPERATOR_VERIFY_SSN\"",
  "\"OPERATOR_WITHIN\"", "CONFIG_DIR_AUDIT_LOG_FMT", "JSON", "NATIVE",
  "\"ACTION_CTL_RULE_ENGINE\"", "\"Accuracy\"", "\"Allow\"", "\"Append\"",
  "\"AuditLog\"", "\"Block\"", "\"Capture\"", "\"Chain\"",
  "\"ACTION_CTL_AUDIT_ENGINE\"", "\"ACTION_CTL_AUDIT_LOG_PARTS\"",
  "\"ACTION_CTL_BDY_JSON\"", "\"ACTION_CTL_BDY_XML\"",
  "\"ACTION_CTL_FORCE_REQ_BODY_VAR\"",
  "\"ACTION_CTL_REQUEST_BODY_ACCESS\"", "\"ACTION_CTL_RULE_REMOVE_BY_ID\"",
  "\"ACTION_CTL_RULE_REMOVE_TARGET_BY_ID\"",
  "\"ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG\"", "\"Deny\"",
  "\"DeprecateVar\"", "\"Drop\"", "\"Exec\"", "\"ExpireVar\"", "\"Id\"",
  "\"InitCol\"", "\"Log\"", "\"LogData\"", "\"Maturity\"", "\"Msg\"",
  "\"MultiMatch\"", "\"NoAuditLog\"", "\"NoLog\"", "\"Pass\"", "\"Pause\"",
  "\"Phase\"", "\"Prepend\"", "\"Proxy\"", "\"Redirect\"", "\"Rev\"",
  "\"SanatiseArg\"", "\"SanatiseMatched\"", "\"SanatiseMatchedBytes\"",
  "\"SanatiseRequestHeader\"", "\"SanatiseResponseHeader\"", "\"SetEnv\"",
  "\"SetRsc\"", "\"SetSid\"", "\"SetUID\"", "\"Severity\"", "\"Skip\"",
  "\"SkipAfter\"", "\"Status\"", "\"Tag\"",
  "\"ACTION_TRANSFORMATION_BASE_64_ENCODE\"",
  "\"ACTION_TRANSFORMATION_BASE_64_DECODE\"",
  "\"ACTION_TRANSFORMATION_BASE_64_DECODE_EXT\"",
  "\"ACTION_TRANSFORMATION_CMD_LINE\"",
  "\"ACTION_TRANSFORMATION_COMPRESS_WHITESPACE\"",
  "\"ACTION_TRANSFORMATION_CSS_DECODE\"",
  "\"ACTION_TRANSFORMATION_HEX_ENCODE\"",
  "\"ACTION_TRANSFORMATION_HEX_DECODE\"",
  "\"ACTION_TRANSFORMATION_HTML_ENTITY_DECODE\"",
  "\"ACTION_TRANSFORMATION_JS_DECODE\"",
  "\"ACTION_TRANSFORMATION_LENGTH\"",
  "\"ACTION_TRANSFORMATION_LOWERCASE\"", "\"ACTION_TRANSFORMATION_MD5\"",
  "\"ACTION_TRANSFORMATION_NONE\"",
  "\"ACTION_TRANSFORMATION_NORMALISE_PATH\"",
  "\"ACTION_TRANSFORMATION_NORMALISE_PATH_WIN\"",
  "\"ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT\"",
  "\"ACTION_TRANSFORMATION_PARITY_ODD_7_BIT\"",
  "\"ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT\"",
  "\"ACTION_TRANSFORMATION_REMOVE_COMMENTS\"",
  "\"ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR\"",
  "\"ACTION_TRANSFORMATION_REMOVE_NULLS\"",
  "\"ACTION_TRANSFORMATION_REMOVE_WHITESPACE\"",
  "\"ACTION_TRANSFORMATION_REPLACE_COMMENTS\"",
  "\"ACTION_TRANSFORMATION_REPLACE_NULLS\"",
  "\"ACTION_TRANSFORMATION_SHA1\"",
  "\"ACTION_TRANSFORMATION_SQL_HEX_DECODE\"",
  "\"ACTION_TRANSFORMATION_TRIM\"", "\"ACTION_TRANSFORMATION_UPPERCASE\"",
  "\"ACTION_TRANSFORMATION_URL_DECODE\"",
  "\"ACTION_TRANSFORMATION_URL_DECODE_UNI\"",
  "\"ACTION_TRANSFORMATION_UTF8_TO_UNICODE\"", "\"Ver\"", "\"xmlns\"",
  "\"CONFIG_COMPONENT_SIG\"", "\"CONFIG_CONN_ENGINE\"",
  "\"CONFIG_SEC_ARGUMENT_SEPARATOR\"", "\"CONFIG_SEC_WEB_APP_ID\"",
  "\"CONFIG_SEC_SERVER_SIG\"", "\"CONFIG_DIR_AUDIT_DIR\"",
  "\"CONFIG_DIR_AUDIT_DIR_MOD\"", "\"CONFIG_DIR_AUDIT_ENG\"",
  "\"CONFIG_DIR_AUDIT_FLE_MOD\"", "\"CONFIG_DIR_AUDIT_LOG\"",
  "\"CONFIG_DIR_AUDIT_LOG2\"", "\"CONFIG_DIR_AUDIT_LOG_P\"",
  "\"CONFIG_DIR_AUDIT_STS\"", "\"CONFIG_DIR_AUDIT_TPE\"",
  "\"CONFIG_DIR_DEBUG_LOG\"", "\"CONFIG_DIR_DEBUG_LVL\"",
  "\"CONFIG_SEC_CACHE_TRANSFORMATIONS\"",
  "\"CONFIG_SEC_DISABLE_BACKEND_COMPRESS\"", "\"CONFIG_SEC_HASH_ENGINE\"",
  "\"CONFIG_SEC_HASH_KEY\"", "\"CONFIG_SEC_HASH_PARAM\"",
  "\"CONFIG_SEC_HASH_METHOD_RX\"", "\"CONFIG_SEC_HASH_METHOD_PM\"",
  "\"CONFIG_SEC_CHROOT_DIR\"", "\"CONFIG_DIR_GEO_DB\"",
  "\"CONFIG_DIR_GSB_DB\"", "\"CONFIG_SEC_GUARDIAN_LOG\"",
  "\"CONFIG_DIR_PCRE_MATCH_LIMIT\"",
  "\"CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION\"",
  "\"CONFIG_SEC_CONN_R_STATE_LIMIT\"", "\"CONFIG_SEC_CONN_W_STATE_LIMIT\"",
  "\"CONFIG_SEC_SENSOR_ID\"", "\"CONFIG_DIR_REQ_BODY\"",
  "\"CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT\"",
  "\"CONFIG_DIR_REQ_BODY_LIMIT\"", "\"CONFIG_DIR_REQ_BODY_LIMIT_ACTION\"",
  "\"CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT\"", "\"CONFIG_DIR_RES_BODY\"",
  "\"CONFIG_DIR_RES_BODY_LIMIT\"", "\"CONFIG_DIR_RES_BODY_LIMIT_ACTION\"",
  "\"CONFIG_SEC_RULE_INHERITANCE\"", "\"CONFIG_SEC_RULE_PERF_TIME\"",
  "\"CONFIG_DIR_RULE_ENG\"", "\"CONFIG_DIR_SEC_ACTION\"",
  "\"CONFIG_DIR_SEC_DEFAULT_ACTION\"", "\"CONFIG_DIR_SEC_MARKER\"",
  "\"CONFIG_DIR_UNICODE_MAP_FILE\"", "\"CONFIG_SEC_COLLECTION_TIMEOUT\"",
  "\"CONFIG_SEC_HTTP_BLKEY\"", "\"CONFIG_SEC_INTERCEPT_ON_ERROR\"",
  "\"CONFIG_SEC_REMOTE_RULES_FAIL_ACTION\"",
  "\"CONFIG_SEC_RULE_REMOVE_BY_ID\"", "\"CONFIG_SEC_RULE_REMOVE_BY_MSG\"",
  "\"CONFIG_SEC_RULE_REMOVE_BY_TAG\"",
  "\"CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG\"",
  "\"CONFIG_SEC_RULE_UPDATE_TARGET_BY_MSG\"",
  "\"CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID\"",
  "\"CONFIG_SEC_RULE_UPDATE_ACTION_BY_ID\"",
  "\"CONFIG_UPDLOAD_KEEP_FILES\"", "\"CONFIG_UPDLOAD_SAVE_TMP_FILES\"",
  "\"CONFIG_UPLOAD_DIR\"", "\"CONFIG_UPLOAD_FILE_LIMIT\"",
  "\"CONFIG_UPLOAD_FILE_MODE\"", "\"CONFIG_VALUE_ABORT\"",
  "\"CONFIG_VALUE_DETC\"", "\"CONFIG_VALUE_HTTPS\"",
  "\"CONFIG_VALUE_OFF\"", "\"CONFIG_VALUE_ON\"",
  "\"CONFIG_VALUE_PARALLEL\"", "\"CONFIG_VALUE_PROCESS_PARTIAL\"",
  "\"CONFIG_VALUE_REJECT\"", "\"CONFIG_VALUE_RELEVANT_ONLY\"",
  "\"CONFIG_VALUE_SERIAL\"", "\"CONFIG_VALUE_WARN\"",
  "\"CONFIG_XML_EXTERNAL_ENTITY\"", "\"CONGIG_DIR_RESPONSE_BODY_MP\"",
  "\"CONGIG_DIR_SEC_ARG_SEP\"", "\"CONGIG_DIR_SEC_COOKIE_FORMAT\"",
  "\"CONFIG_SEC_COOKIEV0_SEPARATOR\"", "\"CONGIG_DIR_SEC_DATA_DIR\"",
  "\"CONGIG_DIR_SEC_STATUS_ENGINE\"",
  "\"CONFIG_SEC_STREAM_IN_BODY_INSPECTION\"",
  "\"CONFIG_SEC_STREAM_OUT_BODY_INSPECTION\"",
  "\"CONGIG_DIR_SEC_TMP_DIR\"", "\"DIRECTIVE\"",
  "\"DIRECTIVE_SECRULESCRIPT\"", "\"FREE_TEXT_QUOTE_MACRO_EXPANSION\"",
  "\"QUOTATION_MARK\"", "\"RUN_TIME_VAR_BLD\"", "\"RUN_TIME_VAR_DUR\"",
  "\"RUN_TIME_VAR_HSV\"", "\"RUN_TIME_VAR_REMOTE_USER\"",
  "\"RUN_TIME_VAR_TIME\"", "\"RUN_TIME_VAR_TIME_DAY\"",
  "\"RUN_TIME_VAR_TIME_EPOCH\"", "\"RUN_TIME_VAR_TIME_HOUR\"",
  "\"RUN_TIME_VAR_TIME_MIN\"", "\"RUN_TIME_VAR_TIME_MON\"",
  "\"RUN_TIME_VAR_TIME_SEC\"", "\"RUN_TIME_VAR_TIME_WDAY\"",
  "\"RUN_TIME_VAR_TIME_YEAR\"", "\"VARIABLE\"", "\"Dictionary element\"",
  "\"Dictionary element, selected by regexp\"", "$accept", "input", "line",
  "audit_log", "actions", "actions_may_quoted", "op", "op_before_init",
  "expression", "variables", "variables_may_be_quoted", "var", "act",
  "setvar_action", "run_time_string", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short int
  seclang_parser::yyrline_[] =
  {
       0,   731,   731,   735,   736,   739,   744,   750,   756,   760,
     764,   770,   776,   782,   788,   793,   798,   804,   811,   815,
     819,   825,   829,   833,   838,   843,   848,   853,   857,   864,
     868,   875,   881,   891,   900,   910,   919,   932,   936,   940,
     944,   948,   952,   956,   960,   964,   968,   973,   977,   981,
     985,   989,   994,   999,  1003,  1007,  1011,  1015,  1019,  1023,
    1027,  1031,  1035,  1039,  1043,  1047,  1051,  1055,  1059,  1063,
    1067,  1071,  1085,  1086,  1110,  1129,  1144,  1168,  1224,  1228,
    1232,  1236,  1240,  1244,  1248,  1252,  1256,  1265,  1269,  1274,
    1277,  1282,  1287,  1292,  1297,  1300,  1305,  1308,  1313,  1318,
    1321,  1326,  1331,  1336,  1341,  1346,  1351,  1356,  1359,  1364,
    1369,  1374,  1379,  1382,  1387,  1392,  1397,  1410,  1423,  1436,
    1449,  1462,  1488,  1514,  1526,  1546,  1574,  1579,  1584,  1593,
    1598,  1602,  1606,  1610,  1614,  1618,  1622,  1627,  1632,  1644,
    1650,  1654,  1658,  1669,  1678,  1679,  1686,  1691,  1696,  1701,
    1708,  1716,  1720,  1727,  1732,  1738,  1744,  1750,  1757,  1767,
    1771,  1775,  1779,  1783,  1787,  1791,  1795,  1799,  1803,  1807,
    1811,  1815,  1819,  1823,  1827,  1831,  1835,  1839,  1843,  1847,
    1851,  1855,  1859,  1863,  1867,  1871,  1875,  1879,  1883,  1887,
    1891,  1895,  1899,  1903,  1907,  1911,  1915,  1919,  1923,  1927,
    1931,  1935,  1939,  1943,  1947,  1951,  1955,  1959,  1963,  1967,
    1971,  1975,  1979,  1983,  1987,  1991,  1995,  1999,  2003,  2007,
    2011,  2015,  2019,  2023,  2027,  2031,  2035,  2039,  2043,  2047,
    2051,  2055,  2059,  2063,  2067,  2071,  2075,  2079,  2083,  2087,
    2091,  2095,  2099,  2103,  2107,  2111,  2115,  2119,  2123,  2128,
    2132,  2136,  2141,  2145,  2149,  2154,  2159,  2163,  2167,  2171,
    2175,  2179,  2183,  2187,  2191,  2195,  2199,  2203,  2207,  2211,
    2215,  2219,  2223,  2227,  2231,  2235,  2239,  2243,  2247,  2251,
    2255,  2259,  2263,  2267,  2271,  2275,  2279,  2283,  2287,  2291,
    2295,  2299,  2303,  2307,  2311,  2315,  2319,  2323,  2327,  2331,
    2335,  2339,  2343,  2347,  2351,  2355,  2359,  2363,  2367,  2371,
    2375,  2379,  2383,  2387,  2391,  2399,  2406,  2413,  2420,  2427,
    2434,  2441,  2448,  2455,  2462,  2469,  2476,  2486,  2490,  2494,
    2498,  2502,  2506,  2510,  2514,  2519,  2524,  2529,  2533,  2537,
    2541,  2546,  2551,  2555,  2559,  2563,  2567,  2571,  2575,  2579,
    2583,  2587,  2591,  2596,  2600,  2605,  2609,  2613,  2617,  2621,
    2625,  2629,  2633,  2637,  2641,  2645,  2649,  2653,  2657,  2661,
    2665,  2669,  2673,  2677,  2681,  2685,  2689,  2693,  2697,  2701,
    2705,  2709,  2713,  2717,  2721,  2725,  2729,  2733,  2737,  2741,
    2745,  2749,  2753,  2757,  2761,  2765,  2769,  2773,  2777,  2781,
    2785,  2789,  2793,  2797,  2801,  2805,  2809,  2813,  2817,  2821,
    2825,  2829,  2833,  2837,  2841,  2845,  2849,  2853,  2857,  2861,
    2868,  2872,  2876,  2880,  2884,  2891,  2896,  2901,  2907
  };

  // Print the state stack on the debug stream.
  void
  seclang_parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  seclang_parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG



} // yy
#line 6379 "seclang-parser.cc" // lalr1.cc:1155
#line 2914 "seclang-parser.yy" // lalr1.cc:1156


void yy::seclang_parser::error (const location_type& l, const std::string& m) {
    driver.error (l, m);
}
