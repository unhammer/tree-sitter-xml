#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 395
#define SYMBOL_COUNT 135
#define ALIAS_COUNT 0
#define TOKEN_COUNT 70
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym__Char = 1,
  sym__S = 2,
  sym_Name = 3,
  anon_sym_ = 4,
  sym_Nmtoken = 5,
  anon_sym_DQUOTE = 6,
  aux_sym_SLASH_LBRACK_CARET_PERCENT_AMP_DQUOTE_RBRACK_SLASH = 7,
  aux_sym_SLASH_LBRACK_CARET_LT_AMP_RBRACK_SLASH = 8,
  anon_sym_SQUOTE = 9,
  sym_SystemLiteral = 10,
  sym_PubidLiteral = 11,
  sym_CharData = 12,
  anon_sym_LT_BANG_DASH_DASH = 13,
  anon_sym_DASH_DASH_GT = 14,
  anon_sym_LT_QMARK = 15,
  anon_sym_QMARK_GT = 16,
  sym__CDStart = 17,
  anon_sym_RBRACK_RBRACK_GT = 18,
  anon_sym_LT_QMARKxml = 19,
  anon_sym_version = 20,
  anon_sym_EQ = 21,
  sym_VersionNum = 22,
  anon_sym_LT_BANGDOCTYPE = 23,
  anon_sym_LBRACK = 24,
  anon_sym_RBRACK = 25,
  anon_sym_GT = 26,
  anon_sym_standalone = 27,
  anon_sym_yes = 28,
  anon_sym_no = 29,
  anon_sym_LT = 30,
  anon_sym_LT_SLASH = 31,
  anon_sym_SLASH_GT = 32,
  anon_sym_LT_BANGELEMENT = 33,
  anon_sym_EMPTY = 34,
  anon_sym_ANY = 35,
  anon_sym_QMARK = 36,
  anon_sym_STAR = 37,
  anon_sym_PLUS = 38,
  anon_sym_LPAREN = 39,
  anon_sym_PIPE = 40,
  anon_sym_RPAREN = 41,
  anon_sym_COMMA = 42,
  anon_sym_POUNDPCDATA = 43,
  anon_sym_RPAREN_STAR = 44,
  anon_sym_LT_BANGATTLIST = 45,
  sym_StringType = 46,
  anon_sym_ID = 47,
  anon_sym_IDREF = 48,
  anon_sym_IDREFS = 49,
  anon_sym_ENTITY = 50,
  anon_sym_ENTITIES = 51,
  anon_sym_NMTOKEN = 52,
  anon_sym_NMTOKENS = 53,
  anon_sym_NOTATION = 54,
  anon_sym_POUNDREQUIRED = 55,
  anon_sym_POUNDIMPLIED = 56,
  anon_sym_POUNDFIXED = 57,
  anon_sym_LT_BANG_LBRACK = 58,
  sym_CharRef = 59,
  anon_sym_AMP = 60,
  anon_sym_PERCENT = 61,
  anon_sym_SEMI = 62,
  anon_sym_LT_BANGENTITY = 63,
  anon_sym_SYSTEM = 64,
  anon_sym_PUBLIC = 65,
  anon_sym_NDATA = 66,
  anon_sym_encoding = 67,
  sym_EncName = 68,
  anon_sym_LT_BANGNOTATION = 69,
  sym_source_file = 70,
  sym__EntityValue = 71,
  sym_AttValue = 72,
  sym_Comment = 73,
  sym_PI = 74,
  sym__PITarget = 75,
  sym__CDSect = 76,
  sym_CData = 77,
  sym__CDEnd = 78,
  sym_prolog = 79,
  sym_XMLDecl = 80,
  sym_VersionInfo = 81,
  sym__Eq = 82,
  sym__Misc = 83,
  sym_doctypedecl = 84,
  sym__DeclSep = 85,
  sym__intSubset = 86,
  sym__markupdecl = 87,
  sym_SDDecl = 88,
  sym_element = 89,
  sym_STag = 90,
  sym_Attribute = 91,
  sym_ETag = 92,
  sym__content = 93,
  sym_EmptyElemTag = 94,
  sym_elementdecl = 95,
  sym_contentspec = 96,
  sym_children = 97,
  sym__cp = 98,
  sym__choice = 99,
  sym__seq = 100,
  sym_Mixed = 101,
  sym_AttlistDecl = 102,
  sym__AttDef = 103,
  sym__AttType = 104,
  sym_TokenizedType = 105,
  sym__EnumeratedType = 106,
  sym_NotationType = 107,
  sym_Enumeration = 108,
  sym_DefaultDecl = 109,
  sym__Reference = 110,
  sym_EntityRef = 111,
  sym_PEReference = 112,
  sym__EntityDecl = 113,
  sym_GEDecl = 114,
  sym_PEDecl = 115,
  sym__EntityDef = 116,
  sym__PEDef = 117,
  sym_ExternalID = 118,
  sym_NDataDecl = 119,
  sym_EncodingDecl = 120,
  sym_NotationDecl = 121,
  sym_PublicID = 122,
  aux_sym_source_file_repeat1 = 123,
  aux_sym__EntityValue_repeat1 = 124,
  aux_sym_AttValue_repeat1 = 125,
  aux_sym_Comment_repeat1 = 126,
  aux_sym__intSubset_repeat1 = 127,
  aux_sym_STag_repeat1 = 128,
  aux_sym__content_repeat1 = 129,
  aux_sym__choice_repeat1 = 130,
  aux_sym__seq_repeat1 = 131,
  aux_sym_Mixed_repeat1 = 132,
  aux_sym_AttlistDecl_repeat1 = 133,
  aux_sym_Enumeration_repeat1 = 134,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym__Char] = "_Char",
  [sym__S] = "_S",
  [sym_Name] = "Name",
  [anon_sym_] = " ",
  [sym_Nmtoken] = "Nmtoken",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_LBRACK_CARET_PERCENT_AMP_DQUOTE_RBRACK_SLASH] = "/[^%&\"]/",
  [aux_sym_SLASH_LBRACK_CARET_LT_AMP_RBRACK_SLASH] = "/[^<&]/",
  [anon_sym_SQUOTE] = "'",
  [sym_SystemLiteral] = "SystemLiteral",
  [sym_PubidLiteral] = "PubidLiteral",
  [sym_CharData] = "CharData",
  [anon_sym_LT_BANG_DASH_DASH] = "<!--",
  [anon_sym_DASH_DASH_GT] = "-->",
  [anon_sym_LT_QMARK] = "<?",
  [anon_sym_QMARK_GT] = "?>",
  [sym__CDStart] = "_CDStart",
  [anon_sym_RBRACK_RBRACK_GT] = "]]>",
  [anon_sym_LT_QMARKxml] = "<?xml",
  [anon_sym_version] = "version",
  [anon_sym_EQ] = "=",
  [sym_VersionNum] = "VersionNum",
  [anon_sym_LT_BANGDOCTYPE] = "<!DOCTYPE",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_GT] = ">",
  [anon_sym_standalone] = "standalone",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [anon_sym_LT] = "<",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_BANGELEMENT] = "<!ELEMENT",
  [anon_sym_EMPTY] = "EMPTY",
  [anon_sym_ANY] = "ANY",
  [anon_sym_QMARK] = "?",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_LPAREN] = "(",
  [anon_sym_PIPE] = "|",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_POUNDPCDATA] = "#PCDATA",
  [anon_sym_RPAREN_STAR] = ")*",
  [anon_sym_LT_BANGATTLIST] = "<!ATTLIST",
  [sym_StringType] = "StringType",
  [anon_sym_ID] = "ID",
  [anon_sym_IDREF] = "IDREF",
  [anon_sym_IDREFS] = "IDREFS",
  [anon_sym_ENTITY] = "ENTITY",
  [anon_sym_ENTITIES] = "ENTITIES",
  [anon_sym_NMTOKEN] = "NMTOKEN",
  [anon_sym_NMTOKENS] = "NMTOKENS",
  [anon_sym_NOTATION] = "NOTATION",
  [anon_sym_POUNDREQUIRED] = "#REQUIRED",
  [anon_sym_POUNDIMPLIED] = "#IMPLIED",
  [anon_sym_POUNDFIXED] = "#FIXED",
  [anon_sym_LT_BANG_LBRACK] = "<![",
  [sym_CharRef] = "CharRef",
  [anon_sym_AMP] = "&",
  [anon_sym_PERCENT] = "%",
  [anon_sym_SEMI] = ";",
  [anon_sym_LT_BANGENTITY] = "<!ENTITY",
  [anon_sym_SYSTEM] = "SYSTEM",
  [anon_sym_PUBLIC] = "PUBLIC",
  [anon_sym_NDATA] = "NDATA",
  [anon_sym_encoding] = "encoding",
  [sym_EncName] = "EncName",
  [anon_sym_LT_BANGNOTATION] = "<!NOTATION",
  [sym_source_file] = "source_file",
  [sym__EntityValue] = "_EntityValue",
  [sym_AttValue] = "AttValue",
  [sym_Comment] = "Comment",
  [sym_PI] = "PI",
  [sym__PITarget] = "_PITarget",
  [sym__CDSect] = "_CDSect",
  [sym_CData] = "CData",
  [sym__CDEnd] = "_CDEnd",
  [sym_prolog] = "prolog",
  [sym_XMLDecl] = "XMLDecl",
  [sym_VersionInfo] = "VersionInfo",
  [sym__Eq] = "_Eq",
  [sym__Misc] = "_Misc",
  [sym_doctypedecl] = "doctypedecl",
  [sym__DeclSep] = "_DeclSep",
  [sym__intSubset] = "_intSubset",
  [sym__markupdecl] = "_markupdecl",
  [sym_SDDecl] = "SDDecl",
  [sym_element] = "element",
  [sym_STag] = "STag",
  [sym_Attribute] = "Attribute",
  [sym_ETag] = "ETag",
  [sym__content] = "_content",
  [sym_EmptyElemTag] = "EmptyElemTag",
  [sym_elementdecl] = "elementdecl",
  [sym_contentspec] = "contentspec",
  [sym_children] = "children",
  [sym__cp] = "_cp",
  [sym__choice] = "_choice",
  [sym__seq] = "_seq",
  [sym_Mixed] = "Mixed",
  [sym_AttlistDecl] = "AttlistDecl",
  [sym__AttDef] = "_AttDef",
  [sym__AttType] = "_AttType",
  [sym_TokenizedType] = "TokenizedType",
  [sym__EnumeratedType] = "_EnumeratedType",
  [sym_NotationType] = "NotationType",
  [sym_Enumeration] = "Enumeration",
  [sym_DefaultDecl] = "DefaultDecl",
  [sym__Reference] = "_Reference",
  [sym_EntityRef] = "EntityRef",
  [sym_PEReference] = "PEReference",
  [sym__EntityDecl] = "_EntityDecl",
  [sym_GEDecl] = "GEDecl",
  [sym_PEDecl] = "PEDecl",
  [sym__EntityDef] = "_EntityDef",
  [sym__PEDef] = "_PEDef",
  [sym_ExternalID] = "ExternalID",
  [sym_NDataDecl] = "NDataDecl",
  [sym_EncodingDecl] = "EncodingDecl",
  [sym_NotationDecl] = "NotationDecl",
  [sym_PublicID] = "PublicID",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__EntityValue_repeat1] = "_EntityValue_repeat1",
  [aux_sym_AttValue_repeat1] = "AttValue_repeat1",
  [aux_sym_Comment_repeat1] = "Comment_repeat1",
  [aux_sym__intSubset_repeat1] = "_intSubset_repeat1",
  [aux_sym_STag_repeat1] = "STag_repeat1",
  [aux_sym__content_repeat1] = "_content_repeat1",
  [aux_sym__choice_repeat1] = "_choice_repeat1",
  [aux_sym__seq_repeat1] = "_seq_repeat1",
  [aux_sym_Mixed_repeat1] = "Mixed_repeat1",
  [aux_sym_AttlistDecl_repeat1] = "AttlistDecl_repeat1",
  [aux_sym_Enumeration_repeat1] = "Enumeration_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__Char] = {
    .visible = false,
    .named = true,
  },
  [sym__S] = {
    .visible = false,
    .named = true,
  },
  [sym_Name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym_Nmtoken] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_PERCENT_AMP_DQUOTE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_LT_AMP_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_SystemLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym_PubidLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym_CharData] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_BANG_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__CDStart] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_RBRACK_RBRACK_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_QMARKxml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_VersionNum] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_BANGDOCTYPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_standalone] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_BANGELEMENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EMPTY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ANY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDPCDATA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_BANGATTLIST] = {
    .visible = true,
    .named = false,
  },
  [sym_StringType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ID] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IDREF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IDREFS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENTITY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENTITIES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NMTOKEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NMTOKENS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOTATION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDREQUIRED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDIMPLIED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDFIXED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_BANG_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_CharRef] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_BANGENTITY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SYSTEM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUBLIC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NDATA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_encoding] = {
    .visible = true,
    .named = false,
  },
  [sym_EncName] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_BANGNOTATION] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__EntityValue] = {
    .visible = false,
    .named = true,
  },
  [sym_AttValue] = {
    .visible = true,
    .named = true,
  },
  [sym_Comment] = {
    .visible = true,
    .named = true,
  },
  [sym_PI] = {
    .visible = true,
    .named = true,
  },
  [sym__PITarget] = {
    .visible = false,
    .named = true,
  },
  [sym__CDSect] = {
    .visible = false,
    .named = true,
  },
  [sym_CData] = {
    .visible = true,
    .named = true,
  },
  [sym__CDEnd] = {
    .visible = false,
    .named = true,
  },
  [sym_prolog] = {
    .visible = true,
    .named = true,
  },
  [sym_XMLDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_VersionInfo] = {
    .visible = true,
    .named = true,
  },
  [sym__Eq] = {
    .visible = false,
    .named = true,
  },
  [sym__Misc] = {
    .visible = false,
    .named = true,
  },
  [sym_doctypedecl] = {
    .visible = true,
    .named = true,
  },
  [sym__DeclSep] = {
    .visible = false,
    .named = true,
  },
  [sym__intSubset] = {
    .visible = false,
    .named = true,
  },
  [sym__markupdecl] = {
    .visible = false,
    .named = true,
  },
  [sym_SDDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_STag] = {
    .visible = true,
    .named = true,
  },
  [sym_Attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_ETag] = {
    .visible = true,
    .named = true,
  },
  [sym__content] = {
    .visible = false,
    .named = true,
  },
  [sym_EmptyElemTag] = {
    .visible = true,
    .named = true,
  },
  [sym_elementdecl] = {
    .visible = true,
    .named = true,
  },
  [sym_contentspec] = {
    .visible = true,
    .named = true,
  },
  [sym_children] = {
    .visible = true,
    .named = true,
  },
  [sym__cp] = {
    .visible = false,
    .named = true,
  },
  [sym__choice] = {
    .visible = false,
    .named = true,
  },
  [sym__seq] = {
    .visible = false,
    .named = true,
  },
  [sym_Mixed] = {
    .visible = true,
    .named = true,
  },
  [sym_AttlistDecl] = {
    .visible = true,
    .named = true,
  },
  [sym__AttDef] = {
    .visible = false,
    .named = true,
  },
  [sym__AttType] = {
    .visible = false,
    .named = true,
  },
  [sym_TokenizedType] = {
    .visible = true,
    .named = true,
  },
  [sym__EnumeratedType] = {
    .visible = false,
    .named = true,
  },
  [sym_NotationType] = {
    .visible = true,
    .named = true,
  },
  [sym_Enumeration] = {
    .visible = true,
    .named = true,
  },
  [sym_DefaultDecl] = {
    .visible = true,
    .named = true,
  },
  [sym__Reference] = {
    .visible = false,
    .named = true,
  },
  [sym_EntityRef] = {
    .visible = true,
    .named = true,
  },
  [sym_PEReference] = {
    .visible = true,
    .named = true,
  },
  [sym__EntityDecl] = {
    .visible = false,
    .named = true,
  },
  [sym_GEDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_PEDecl] = {
    .visible = true,
    .named = true,
  },
  [sym__EntityDef] = {
    .visible = false,
    .named = true,
  },
  [sym__PEDef] = {
    .visible = false,
    .named = true,
  },
  [sym_ExternalID] = {
    .visible = true,
    .named = true,
  },
  [sym_NDataDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_EncodingDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_NotationDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_PublicID] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__EntityValue_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_AttValue_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_Comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__intSubset_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_STag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__choice_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__seq_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_Mixed_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_AttlistDecl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_Enumeration_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == ' ')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '(')
        ADVANCE(13);
      if (lookahead == ')')
        ADVANCE(14);
      if (lookahead == '*')
        ADVANCE(15);
      if (lookahead == '+')
        ADVANCE(16);
      if (lookahead == ',')
        ADVANCE(17);
      if (lookahead == ';')
        ADVANCE(18);
      if (lookahead == '<')
        ADVANCE(19);
      if (lookahead == '=')
        ADVANCE(68);
      if (lookahead == '>')
        ADVANCE(69);
      if (lookahead == '?')
        ADVANCE(70);
      if (lookahead == '[')
        ADVANCE(71);
      if (lookahead == ']')
        ADVANCE(72);
      if (lookahead == '|')
        ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\r')
        ADVANCE(74);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9'))
        ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      ADVANCE(74);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym__S);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '#')
        ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'x')
        ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == ';')
        ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_CharRef);
      END_STATE();
    case 11:
      if (lookahead == ';')
        ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(63);
      if (lookahead == '?')
        ADVANCE(64);
      END_STATE();
    case 20:
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == 'A')
        ADVANCE(23);
      if (lookahead == 'D')
        ADVANCE(30);
      if (lookahead == 'E')
        ADVANCE(37);
      if (lookahead == 'N')
        ADVANCE(49);
      if (lookahead == '[')
        ADVANCE(57);
      END_STATE();
    case 21:
      if (lookahead == '-')
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LT_BANG_DASH_DASH);
      END_STATE();
    case 23:
      if (lookahead == 'T')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'T')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'L')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'I')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'S')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'T')
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT_BANGATTLIST);
      END_STATE();
    case 30:
      if (lookahead == 'O')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'C')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'T')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'Y')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'P')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'E')
        ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LT_BANGDOCTYPE);
      END_STATE();
    case 37:
      if (lookahead == 'L')
        ADVANCE(38);
      if (lookahead == 'N')
        ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == 'E')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'M')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'E')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'N')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'T')
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LT_BANGELEMENT);
      END_STATE();
    case 44:
      if (lookahead == 'T')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'I')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'T')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'Y')
        ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT_BANGENTITY);
      END_STATE();
    case 49:
      if (lookahead == 'O')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'T')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'A')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'T')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'I')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'O')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'N')
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT_BANGNOTATION);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT_BANG_LBRACK);
      if (lookahead == 'C')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'D')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'A')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'T')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'A')
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__CDStart);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      if (lookahead == 'x')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'm')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'l')
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LT_QMARKxml);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__Char);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__Char);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__Char);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(76);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_Name);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(76);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 79:
      if (lookahead == '<')
        ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      END_STATE();
    case 80:
      if (lookahead == '!')
        ADVANCE(81);
      if (lookahead == '?')
        ADVANCE(64);
      END_STATE();
    case 81:
      if (lookahead == '-')
        ADVANCE(21);
      END_STATE();
    case 82:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(74);
      if (lookahead != 0)
        ADVANCE(74);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__Char);
      if (lookahead == '-')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == '>')
        ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 86:
      if (lookahead == '/')
        ADVANCE(87);
      if (lookahead == '>')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      END_STATE();
    case 87:
      if (lookahead == '>')
        ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      END_STATE();
    case 90:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      END_STATE();
    case 91:
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '<')
        ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '/')
        ADVANCE(63);
      if (lookahead == '?')
        ADVANCE(95);
      END_STATE();
    case 93:
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '[')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'C')
        ADVANCE(58);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 96:
      if (lookahead == '<')
        ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'D')
        ADVANCE(30);
      END_STATE();
    case 99:
      if (lookahead == '?')
        ADVANCE(100);
      if (lookahead == 'e')
        ADVANCE(102);
      if (lookahead == 's')
        ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      END_STATE();
    case 100:
      if (lookahead == '>')
        ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 102:
      if (lookahead == 'n')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'c')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 'o')
        ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 'd')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'i')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'n')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'g')
        ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_encoding);
      END_STATE();
    case 110:
      if (lookahead == 't')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'a')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'n')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'd')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'a')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'l')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'o')
        ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == 'n')
        ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 'e')
        ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_standalone);
      END_STATE();
    case 120:
      if (lookahead == 'v')
        ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      END_STATE();
    case 121:
      if (lookahead == 'e')
        ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 'r')
        ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == 's')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 'i')
        ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == 'o')
        ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == 'n')
        ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 128:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      END_STATE();
    case 129:
      if (lookahead == '!')
        ADVANCE(81);
      if (lookahead == '?')
        ADVANCE(95);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_CharData);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '<')
        ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(131);
      if (lookahead != 0)
        ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__S);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<')
        ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_CharData);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<')
        ADVANCE(132);
      END_STATE();
    case 133:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '?')
        ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(74);
      if (lookahead != 0)
        ADVANCE(74);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__Char);
      if (lookahead == '>')
        ADVANCE(101);
      END_STATE();
    case 135:
      if (lookahead == '=')
        ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      END_STATE();
    case 136:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == ']')
        ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(74);
      if (lookahead != 0)
        ADVANCE(74);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__Char);
      if (lookahead == ']')
        ADVANCE(138);
      END_STATE();
    case 138:
      if (lookahead == '>')
        ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK_GT);
      END_STATE();
    case 140:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '#')
        ADVANCE(141);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      END_STATE();
    case 141:
      if (lookahead == 'F')
        ADVANCE(142);
      if (lookahead == 'I')
        ADVANCE(147);
      if (lookahead == 'R')
        ADVANCE(154);
      END_STATE();
    case 142:
      if (lookahead == 'I')
        ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 'X')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'E')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'D')
        ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_POUNDFIXED);
      END_STATE();
    case 147:
      if (lookahead == 'M')
        ADVANCE(148);
      END_STATE();
    case 148:
      if (lookahead == 'P')
        ADVANCE(149);
      END_STATE();
    case 149:
      if (lookahead == 'L')
        ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'I')
        ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == 'E')
        ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 'D')
        ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_POUNDIMPLIED);
      END_STATE();
    case 154:
      if (lookahead == 'E')
        ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == 'Q')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 'U')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'I')
        ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == 'R')
        ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 'E')
        ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 'D')
        ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_POUNDREQUIRED);
      END_STATE();
    case 162:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '<')
        ADVANCE(163);
      if (lookahead == ']')
        ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!')
        ADVANCE(164);
      if (lookahead == '?')
        ADVANCE(95);
      END_STATE();
    case 164:
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == 'A')
        ADVANCE(23);
      if (lookahead == 'E')
        ADVANCE(37);
      if (lookahead == 'N')
        ADVANCE(49);
      END_STATE();
    case 165:
      if (lookahead == ']')
        ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      END_STATE();
    case 166:
      if (lookahead == ']')
        ADVANCE(138);
      END_STATE();
    case 167:
      if (lookahead == '>')
        ADVANCE(69);
      if (lookahead == 'P')
        ADVANCE(168);
      if (lookahead == 'S')
        ADVANCE(174);
      if (lookahead == '[')
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      END_STATE();
    case 168:
      if (lookahead == 'U')
        ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 'B')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 'L')
        ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == 'I')
        ADVANCE(172);
      END_STATE();
    case 172:
      if (lookahead == 'C')
        ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_PUBLIC);
      END_STATE();
    case 174:
      if (lookahead == 'Y')
        ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead == 'S')
        ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 'T')
        ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == 'E')
        ADVANCE(178);
      END_STATE();
    case 178:
      if (lookahead == 'M')
        ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_SYSTEM);
      END_STATE();
    case 180:
      if (lookahead == '1')
        ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      END_STATE();
    case 181:
      if (lookahead == '.')
        ADVANCE(182);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_VersionNum);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(183);
      END_STATE();
    case 184:
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '<')
        ADVANCE(185);
      if (lookahead == ']')
        ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      END_STATE();
    case 185:
      if (lookahead == '!')
        ADVANCE(164);
      if (lookahead == '?')
        ADVANCE(95);
      END_STATE();
    case 186:
      if (lookahead == 'n')
        ADVANCE(187);
      if (lookahead == 'y')
        ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      END_STATE();
    case 187:
      if (lookahead == 'o')
        ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 189:
      if (lookahead == 'e')
        ADVANCE(190);
      END_STATE();
    case 190:
      if (lookahead == 's')
        ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 192:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_EncName);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      END_STATE();
    case 194:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '<')
        ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LT_AMP_RBRACK_SLASH);
      END_STATE();
    case 196:
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '<')
        ADVANCE(195);
      END_STATE();
    case 197:
      if (lookahead == '\"')
        ADVANCE(198);
      if (lookahead == '\'')
        ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      END_STATE();
    case 198:
      if (lookahead == '\"')
        ADVANCE(199);
      if (lookahead != 0)
        ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_SystemLiteral);
      END_STATE();
    case 200:
      if (lookahead == '\'')
        ADVANCE(199);
      if (lookahead != 0)
        ADVANCE(200);
      END_STATE();
    case 201:
      if (lookahead == '\"')
        ADVANCE(202);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      END_STATE();
    case 202:
      if (lookahead == '\"')
        ADVANCE(203);
      if (lookahead == 'x')
        ADVANCE(204);
      if (('!' <= lookahead && lookahead <= '%') ||
          ('\'' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_')
        ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_PubidLiteral);
      END_STATE();
    case 204:
      if (lookahead == '\"')
        ADVANCE(203);
      if (lookahead == '2')
        ADVANCE(205);
      if (lookahead == 'A')
        ADVANCE(202);
      if (lookahead == 'D')
        ADVANCE(202);
      if (lookahead == 'x')
        ADVANCE(204);
      if (('!' <= lookahead && lookahead <= '%') ||
          ('\'' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_')
        ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 205:
      if (lookahead == '\"')
        ADVANCE(203);
      if (lookahead == '0')
        ADVANCE(202);
      if (lookahead == 'x')
        ADVANCE(204);
      if (('!' <= lookahead && lookahead <= '%') ||
          ('\'' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_')
        ADVANCE(202);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 206:
      if (lookahead == '\'')
        ADVANCE(207);
      if (lookahead == 'x')
        ADVANCE(208);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '%') ||
          ('(' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_PubidLiteral);
      if (lookahead == '\'')
        ADVANCE(207);
      if (lookahead == 'x')
        ADVANCE(208);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '%') ||
          ('(' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      END_STATE();
    case 208:
      if (lookahead == '\'')
        ADVANCE(207);
      if (lookahead == '2')
        ADVANCE(209);
      if (lookahead == 'A')
        ADVANCE(206);
      if (lookahead == 'D')
        ADVANCE(206);
      if (lookahead == 'x')
        ADVANCE(208);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '%') ||
          ('(' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      END_STATE();
    case 209:
      if (lookahead == '\'')
        ADVANCE(207);
      if (lookahead == '0')
        ADVANCE(206);
      if (lookahead == 'x')
        ADVANCE(208);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '%') ||
          ('(' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_')
        ADVANCE(206);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      END_STATE();
    case 210:
      if (lookahead == ';')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      END_STATE();
    case 211:
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      END_STATE();
    case 212:
      if (lookahead == '(')
        ADVANCE(13);
      if (lookahead == 'A')
        ADVANCE(213);
      if (lookahead == 'E')
        ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      END_STATE();
    case 213:
      if (lookahead == 'N')
        ADVANCE(214);
      END_STATE();
    case 214:
      if (lookahead == 'Y')
        ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_ANY);
      END_STATE();
    case 216:
      if (lookahead == 'M')
        ADVANCE(217);
      END_STATE();
    case 217:
      if (lookahead == 'P')
        ADVANCE(218);
      END_STATE();
    case 218:
      if (lookahead == 'T')
        ADVANCE(219);
      END_STATE();
    case 219:
      if (lookahead == 'Y')
        ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_EMPTY);
      END_STATE();
    case 221:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'P')
        ADVANCE(168);
      if (lookahead == 'S')
        ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      END_STATE();
    case 222:
      if (lookahead == '#')
        ADVANCE(223);
      if (lookahead == '(')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      END_STATE();
    case 223:
      if (lookahead == 'P')
        ADVANCE(224);
      END_STATE();
    case 224:
      if (lookahead == 'C')
        ADVANCE(225);
      END_STATE();
    case 225:
      if (lookahead == 'D')
        ADVANCE(226);
      END_STATE();
    case 226:
      if (lookahead == 'A')
        ADVANCE(227);
      END_STATE();
    case 227:
      if (lookahead == 'T')
        ADVANCE(228);
      END_STATE();
    case 228:
      if (lookahead == 'A')
        ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_POUNDPCDATA);
      END_STATE();
    case 230:
      if (lookahead == '*')
        ADVANCE(15);
      if (lookahead == '+')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(69);
      if (lookahead == '?')
        ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      END_STATE();
    case 231:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      if (lookahead != 0)
        ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_PERCENT_AMP_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 233:
      if (lookahead == ')')
        ADVANCE(14);
      if (lookahead == '*')
        ADVANCE(15);
      if (lookahead == '+')
        ADVANCE(16);
      if (lookahead == ',')
        ADVANCE(17);
      if (lookahead == '?')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      END_STATE();
    case 234:
      if (lookahead == ')')
        ADVANCE(235);
      if (lookahead == '|')
        ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '*')
        ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_RPAREN_STAR);
      END_STATE();
    case 237:
      if (lookahead == '(')
        ADVANCE(13);
      if (lookahead == 'C')
        ADVANCE(238);
      if (lookahead == 'E')
        ADVANCE(243);
      if (lookahead == 'I')
        ADVANCE(252);
      if (lookahead == 'N')
        ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      END_STATE();
    case 238:
      if (lookahead == 'D')
        ADVANCE(239);
      END_STATE();
    case 239:
      if (lookahead == 'A')
        ADVANCE(240);
      END_STATE();
    case 240:
      if (lookahead == 'T')
        ADVANCE(241);
      END_STATE();
    case 241:
      if (lookahead == 'A')
        ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_StringType);
      END_STATE();
    case 243:
      if (lookahead == 'N')
        ADVANCE(244);
      END_STATE();
    case 244:
      if (lookahead == 'T')
        ADVANCE(245);
      END_STATE();
    case 245:
      if (lookahead == 'I')
        ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead == 'T')
        ADVANCE(247);
      END_STATE();
    case 247:
      if (lookahead == 'I')
        ADVANCE(248);
      if (lookahead == 'Y')
        ADVANCE(251);
      END_STATE();
    case 248:
      if (lookahead == 'E')
        ADVANCE(249);
      END_STATE();
    case 249:
      if (lookahead == 'S')
        ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_ENTITIES);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_ENTITY);
      END_STATE();
    case 252:
      if (lookahead == 'D')
        ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_ID);
      if (lookahead == 'R')
        ADVANCE(254);
      END_STATE();
    case 254:
      if (lookahead == 'E')
        ADVANCE(255);
      END_STATE();
    case 255:
      if (lookahead == 'F')
        ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_IDREF);
      if (lookahead == 'S')
        ADVANCE(257);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_IDREFS);
      END_STATE();
    case 258:
      if (lookahead == 'M')
        ADVANCE(259);
      if (lookahead == 'O')
        ADVANCE(266);
      END_STATE();
    case 259:
      if (lookahead == 'T')
        ADVANCE(260);
      END_STATE();
    case 260:
      if (lookahead == 'O')
        ADVANCE(261);
      END_STATE();
    case 261:
      if (lookahead == 'K')
        ADVANCE(262);
      END_STATE();
    case 262:
      if (lookahead == 'E')
        ADVANCE(263);
      END_STATE();
    case 263:
      if (lookahead == 'N')
        ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_NMTOKEN);
      if (lookahead == 'S')
        ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_NMTOKENS);
      END_STATE();
    case 266:
      if (lookahead == 'T')
        ADVANCE(267);
      END_STATE();
    case 267:
      if (lookahead == 'A')
        ADVANCE(268);
      END_STATE();
    case 268:
      if (lookahead == 'T')
        ADVANCE(269);
      END_STATE();
    case 269:
      if (lookahead == 'I')
        ADVANCE(270);
      END_STATE();
    case 270:
      if (lookahead == 'O')
        ADVANCE(271);
      END_STATE();
    case 271:
      if (lookahead == 'N')
        ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_NOTATION);
      END_STATE();
    case 273:
      if (lookahead == 'N')
        ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      END_STATE();
    case 274:
      if (lookahead == 'D')
        ADVANCE(275);
      END_STATE();
    case 275:
      if (lookahead == 'A')
        ADVANCE(276);
      END_STATE();
    case 276:
      if (lookahead == 'T')
        ADVANCE(277);
      END_STATE();
    case 277:
      if (lookahead == 'A')
        ADVANCE(278);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_NDATA);
      END_STATE();
    case 279:
      if (lookahead == ')')
        ADVANCE(14);
      if (lookahead == '*')
        ADVANCE(15);
      if (lookahead == '+')
        ADVANCE(16);
      if (lookahead == ',')
        ADVANCE(17);
      if (lookahead == '>')
        ADVANCE(69);
      if (lookahead == '?')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      END_STATE();
    case 280:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 79},
  [2] = {.lex_state = 82},
  [3] = {.lex_state = 86},
  [4] = {.lex_state = 79},
  [5] = {.lex_state = 90},
  [6] = {.lex_state = 91},
  [7] = {.lex_state = 91},
  [8] = {.lex_state = 96},
  [9] = {.lex_state = 96},
  [10] = {.lex_state = 82},
  [11] = {.lex_state = 99},
  [12] = {.lex_state = 120},
  [13] = {.lex_state = 99},
  [14] = {.lex_state = 86},
  [15] = {.lex_state = 128},
  [16] = {.lex_state = 130},
  [17] = {.lex_state = 128},
  [18] = {.lex_state = 96},
  [19] = {.lex_state = 79},
  [20] = {.lex_state = 91},
  [21] = {.lex_state = 96},
  [22] = {.lex_state = 82},
  [23] = {.lex_state = 133},
  [24] = {.lex_state = 96},
  [25] = {.lex_state = 135},
  [26] = {.lex_state = 99},
  [27] = {.lex_state = 91},
  [28] = {.lex_state = 99},
  [29] = {.lex_state = 99},
  [30] = {.lex_state = 86},
  [31] = {.lex_state = 82},
  [32] = {.lex_state = 86},
  [33] = {.lex_state = 128},
  [34] = {.lex_state = 91},
  [35] = {.lex_state = 82},
  [36] = {.lex_state = 86},
  [37] = {.lex_state = 136},
  [38] = {.lex_state = 86},
  [39] = {.lex_state = 86},
  [40] = {.lex_state = 86},
  [41] = {.lex_state = 130},
  [42] = {.lex_state = 130},
  [43] = {.lex_state = 128},
  [44] = {.lex_state = 91},
  [45] = {.lex_state = 130},
  [46] = {.lex_state = 91},
  [47] = {.lex_state = 91},
  [48] = {.lex_state = 86},
  [49] = {.lex_state = 91},
  [50] = {.lex_state = 96},
  [51] = {.lex_state = 133},
  [52] = {.lex_state = 135},
  [53] = {.lex_state = 140},
  [54] = {.lex_state = 140},
  [55] = {.lex_state = 91},
  [56] = {.lex_state = 135},
  [57] = {.lex_state = 135},
  [58] = {.lex_state = 99},
  [59] = {.lex_state = 99},
  [60] = {.lex_state = 99},
  [61] = {.lex_state = 86},
  [62] = {.lex_state = 130},
  [63] = {.lex_state = 128},
  [64] = {.lex_state = 86},
  [65] = {.lex_state = 162},
  [66] = {.lex_state = 82},
  [67] = {.lex_state = 99},
  [68] = {.lex_state = 128},
  [69] = {.lex_state = 128},
  [70] = {.lex_state = 91},
  [71] = {.lex_state = 130},
  [72] = {.lex_state = 82},
  [73] = {.lex_state = 99},
  [74] = {.lex_state = 165},
  [75] = {.lex_state = 130},
  [76] = {.lex_state = 136},
  [77] = {.lex_state = 86},
  [78] = {.lex_state = 86},
  [79] = {.lex_state = 130},
  [80] = {.lex_state = 91},
  [81] = {.lex_state = 91},
  [82] = {.lex_state = 86},
  [83] = {.lex_state = 130},
  [84] = {.lex_state = 91},
  [85] = {.lex_state = 91},
  [86] = {.lex_state = 91},
  [87] = {.lex_state = 167},
  [88] = {.lex_state = 91},
  [89] = {.lex_state = 96},
  [90] = {.lex_state = 133},
  [91] = {.lex_state = 140},
  [92] = {.lex_state = 140},
  [93] = {.lex_state = 180},
  [94] = {.lex_state = 180},
  [95] = {.lex_state = 140},
  [96] = {.lex_state = 140},
  [97] = {.lex_state = 91},
  [98] = {.lex_state = 99},
  [99] = {.lex_state = 135},
  [100] = {.lex_state = 130},
  [101] = {.lex_state = 128},
  [102] = {.lex_state = 86},
  [103] = {.lex_state = 86},
  [104] = {.lex_state = 86},
  [105] = {.lex_state = 162},
  [106] = {.lex_state = 133},
  [107] = {.lex_state = 162},
  [108] = {.lex_state = 128},
  [109] = {.lex_state = 130},
  [110] = {.lex_state = 133},
  [111] = {.lex_state = 130},
  [112] = {.lex_state = 130},
  [113] = {.lex_state = 136},
  [114] = {.lex_state = 86},
  [115] = {.lex_state = 130},
  [116] = {.lex_state = 86},
  [117] = {.lex_state = 86},
  [118] = {.lex_state = 128},
  [119] = {.lex_state = 130},
  [120] = {.lex_state = 91},
  [121] = {.lex_state = 86},
  [122] = {.lex_state = 167},
  [123] = {.lex_state = 184},
  [124] = {.lex_state = 91},
  [125] = {.lex_state = 140},
  [126] = {.lex_state = 140},
  [127] = {.lex_state = 140},
  [128] = {.lex_state = 186},
  [129] = {.lex_state = 186},
  [130] = {.lex_state = 192},
  [131] = {.lex_state = 192},
  [132] = {.lex_state = 91},
  [133] = {.lex_state = 140},
  [134] = {.lex_state = 130},
  [135] = {.lex_state = 128},
  [136] = {.lex_state = 86},
  [137] = {.lex_state = 162},
  [138] = {.lex_state = 133},
  [139] = {.lex_state = 130},
  [140] = {.lex_state = 133},
  [141] = {.lex_state = 130},
  [142] = {.lex_state = 86},
  [143] = {.lex_state = 128},
  [144] = {.lex_state = 130},
  [145] = {.lex_state = 86},
  [146] = {.lex_state = 130},
  [147] = {.lex_state = 184},
  [148] = {.lex_state = 91},
  [149] = {.lex_state = 79},
  [150] = {.lex_state = 79},
  [151] = {.lex_state = 167},
  [152] = {.lex_state = 86},
  [153] = {.lex_state = 79},
  [154] = {.lex_state = 79},
  [155] = {.lex_state = 86},
  [156] = {.lex_state = 79},
  [157] = {.lex_state = 79},
  [158] = {.lex_state = 184},
  [159] = {.lex_state = 184},
  [160] = {.lex_state = 99},
  [161] = {.lex_state = 140},
  [162] = {.lex_state = 140},
  [163] = {.lex_state = 140},
  [164] = {.lex_state = 140},
  [165] = {.lex_state = 194},
  [166] = {.lex_state = 196},
  [167] = {.lex_state = 86},
  [168] = {.lex_state = 162},
  [169] = {.lex_state = 130},
  [170] = {.lex_state = 130},
  [171] = {.lex_state = 130},
  [172] = {.lex_state = 86},
  [173] = {.lex_state = 184},
  [174] = {.lex_state = 197},
  [175] = {.lex_state = 201},
  [176] = {.lex_state = 167},
  [177] = {.lex_state = 184},
  [178] = {.lex_state = 91},
  [179] = {.lex_state = 86},
  [180] = {.lex_state = 86},
  [181] = {.lex_state = 86},
  [182] = {.lex_state = 210},
  [183] = {.lex_state = 211},
  [184] = {.lex_state = 86},
  [185] = {.lex_state = 184},
  [186] = {.lex_state = 99},
  [187] = {.lex_state = 99},
  [188] = {.lex_state = 86},
  [189] = {.lex_state = 86},
  [190] = {.lex_state = 194},
  [191] = {.lex_state = 86},
  [192] = {.lex_state = 196},
  [193] = {.lex_state = 86},
  [194] = {.lex_state = 91},
  [195] = {.lex_state = 86},
  [196] = {.lex_state = 167},
  [197] = {.lex_state = 79},
  [198] = {.lex_state = 184},
  [199] = {.lex_state = 184},
  [200] = {.lex_state = 79},
  [201] = {.lex_state = 86},
  [202] = {.lex_state = 184},
  [203] = {.lex_state = 79},
  [204] = {.lex_state = 79},
  [205] = {.lex_state = 79},
  [206] = {.lex_state = 194},
  [207] = {.lex_state = 86},
  [208] = {.lex_state = 194},
  [209] = {.lex_state = 196},
  [210] = {.lex_state = 196},
  [211] = {.lex_state = 91},
  [212] = {.lex_state = 86},
  [213] = {.lex_state = 197},
  [214] = {.lex_state = 86},
  [215] = {.lex_state = 184},
  [216] = {.lex_state = 212},
  [217] = {.lex_state = 86},
  [218] = {.lex_state = 184},
  [219] = {.lex_state = 86},
  [220] = {.lex_state = 221},
  [221] = {.lex_state = 86},
  [222] = {.lex_state = 167},
  [223] = {.lex_state = 91},
  [224] = {.lex_state = 167},
  [225] = {.lex_state = 86},
  [226] = {.lex_state = 86},
  [227] = {.lex_state = 86},
  [228] = {.lex_state = 222},
  [229] = {.lex_state = 86},
  [230] = {.lex_state = 230},
  [231] = {.lex_state = 79},
  [232] = {.lex_state = 184},
  [233] = {.lex_state = 86},
  [234] = {.lex_state = 86},
  [235] = {.lex_state = 231},
  [236] = {.lex_state = 86},
  [237] = {.lex_state = 86},
  [238] = {.lex_state = 79},
  [239] = {.lex_state = 79},
  [240] = {.lex_state = 86},
  [241] = {.lex_state = 91},
  [242] = {.lex_state = 86},
  [243] = {.lex_state = 222},
  [244] = {.lex_state = 233},
  [245] = {.lex_state = 222},
  [246] = {.lex_state = 234},
  [247] = {.lex_state = 233},
  [248] = {.lex_state = 86},
  [249] = {.lex_state = 184},
  [250] = {.lex_state = 86},
  [251] = {.lex_state = 237},
  [252] = {.lex_state = 184},
  [253] = {.lex_state = 86},
  [254] = {.lex_state = 86},
  [255] = {.lex_state = 86},
  [256] = {.lex_state = 86},
  [257] = {.lex_state = 231},
  [258] = {.lex_state = 86},
  [259] = {.lex_state = 184},
  [260] = {.lex_state = 273},
  [261] = {.lex_state = 86},
  [262] = {.lex_state = 221},
  [263] = {.lex_state = 201},
  [264] = {.lex_state = 86},
  [265] = {.lex_state = 184},
  [266] = {.lex_state = 91},
  [267] = {.lex_state = 234},
  [268] = {.lex_state = 233},
  [269] = {.lex_state = 233},
  [270] = {.lex_state = 222},
  [271] = {.lex_state = 234},
  [272] = {.lex_state = 86},
  [273] = {.lex_state = 86},
  [274] = {.lex_state = 234},
  [275] = {.lex_state = 233},
  [276] = {.lex_state = 222},
  [277] = {.lex_state = 279},
  [278] = {.lex_state = 222},
  [279] = {.lex_state = 233},
  [280] = {.lex_state = 233},
  [281] = {.lex_state = 184},
  [282] = {.lex_state = 280},
  [283] = {.lex_state = 79},
  [284] = {.lex_state = 79},
  [285] = {.lex_state = 79},
  [286] = {.lex_state = 231},
  [287] = {.lex_state = 210},
  [288] = {.lex_state = 86},
  [289] = {.lex_state = 231},
  [290] = {.lex_state = 184},
  [291] = {.lex_state = 79},
  [292] = {.lex_state = 86},
  [293] = {.lex_state = 86},
  [294] = {.lex_state = 184},
  [295] = {.lex_state = 234},
  [296] = {.lex_state = 86},
  [297] = {.lex_state = 234},
  [298] = {.lex_state = 233},
  [299] = {.lex_state = 279},
  [300] = {.lex_state = 233},
  [301] = {.lex_state = 233},
  [302] = {.lex_state = 86},
  [303] = {.lex_state = 86},
  [304] = {.lex_state = 234},
  [305] = {.lex_state = 234},
  [306] = {.lex_state = 234},
  [307] = {.lex_state = 222},
  [308] = {.lex_state = 222},
  [309] = {.lex_state = 222},
  [310] = {.lex_state = 233},
  [311] = {.lex_state = 222},
  [312] = {.lex_state = 233},
  [313] = {.lex_state = 233},
  [314] = {.lex_state = 279},
  [315] = {.lex_state = 233},
  [316] = {.lex_state = 233},
  [317] = {.lex_state = 233},
  [318] = {.lex_state = 280},
  [319] = {.lex_state = 233},
  [320] = {.lex_state = 212},
  [321] = {.lex_state = 140},
  [322] = {.lex_state = 231},
  [323] = {.lex_state = 86},
  [324] = {.lex_state = 86},
  [325] = {.lex_state = 184},
  [326] = {.lex_state = 86},
  [327] = {.lex_state = 234},
  [328] = {.lex_state = 279},
  [329] = {.lex_state = 233},
  [330] = {.lex_state = 279},
  [331] = {.lex_state = 233},
  [332] = {.lex_state = 86},
  [333] = {.lex_state = 234},
  [334] = {.lex_state = 233},
  [335] = {.lex_state = 222},
  [336] = {.lex_state = 233},
  [337] = {.lex_state = 222},
  [338] = {.lex_state = 233},
  [339] = {.lex_state = 233},
  [340] = {.lex_state = 233},
  [341] = {.lex_state = 233},
  [342] = {.lex_state = 233},
  [343] = {.lex_state = 280},
  [344] = {.lex_state = 79},
  [345] = {.lex_state = 233},
  [346] = {.lex_state = 86},
  [347] = {.lex_state = 86},
  [348] = {.lex_state = 79},
  [349] = {.lex_state = 86},
  [350] = {.lex_state = 86},
  [351] = {.lex_state = 184},
  [352] = {.lex_state = 86},
  [353] = {.lex_state = 279},
  [354] = {.lex_state = 279},
  [355] = {.lex_state = 234},
  [356] = {.lex_state = 233},
  [357] = {.lex_state = 233},
  [358] = {.lex_state = 233},
  [359] = {.lex_state = 79},
  [360] = {.lex_state = 233},
  [361] = {.lex_state = 280},
  [362] = {.lex_state = 280},
  [363] = {.lex_state = 233},
  [364] = {.lex_state = 233},
  [365] = {.lex_state = 86},
  [366] = {.lex_state = 233},
  [367] = {.lex_state = 140},
  [368] = {.lex_state = 79},
  [369] = {.lex_state = 233},
  [370] = {.lex_state = 280},
  [371] = {.lex_state = 233},
  [372] = {.lex_state = 233},
  [373] = {.lex_state = 233},
  [374] = {.lex_state = 233},
  [375] = {.lex_state = 86},
  [376] = {.lex_state = 79},
  [377] = {.lex_state = 233},
  [378] = {.lex_state = 86},
  [379] = {.lex_state = 79},
  [380] = {.lex_state = 233},
  [381] = {.lex_state = 233},
  [382] = {.lex_state = 79},
  [383] = {.lex_state = 233},
  [384] = {.lex_state = 86},
  [385] = {.lex_state = 86},
  [386] = {.lex_state = 233},
  [387] = {.lex_state = 233},
  [388] = {.lex_state = 79},
  [389] = {.lex_state = 233},
  [390] = {.lex_state = 86},
  [391] = {.lex_state = 233},
  [392] = {.lex_state = 233},
  [393] = {.lex_state = 79},
  [394] = {.lex_state = 233},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__Char] = ACTIONS(3),
    [sym__S] = ACTIONS(3),
    [sym_Name] = ACTIONS(3),
    [anon_sym_] = ACTIONS(1),
    [sym_Nmtoken] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AMP_DQUOTE_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACK_CARET_LT_AMP_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(1),
    [anon_sym_LT_QMARK] = ACTIONS(3),
    [sym__CDStart] = ACTIONS(1),
    [anon_sym_LT_QMARKxml] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_BANGDOCTYPE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_LT_BANGELEMENT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LT_BANGATTLIST] = ACTIONS(1),
    [anon_sym_LT_BANG_LBRACK] = ACTIONS(3),
    [sym_CharRef] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LT_BANGENTITY] = ACTIONS(1),
    [anon_sym_LT_BANGNOTATION] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(5),
    [sym_Comment] = STATE(8),
    [sym_PI] = STATE(8),
    [sym_prolog] = STATE(6),
    [sym_XMLDecl] = STATE(7),
    [sym__Misc] = STATE(8),
    [sym__S] = ACTIONS(5),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(8),
    [anon_sym_LT_QMARK] = ACTIONS(10),
    [anon_sym_LT_QMARKxml] = ACTIONS(12),
  },
  [2] = {
    [aux_sym_Comment_repeat1] = STATE(10),
    [sym__Char] = ACTIONS(14),
    [sym__S] = ACTIONS(16),
    [anon_sym_DASH_DASH_GT] = ACTIONS(18),
  },
  [3] = {
    [sym__PITarget] = STATE(11),
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(22),
  },
  [4] = {
    [sym_VersionInfo] = STATE(13),
    [sym__S] = ACTIONS(24),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym__S] = ACTIONS(20),
  },
  [6] = {
    [sym_element] = STATE(15),
    [sym_STag] = STATE(16),
    [sym_EmptyElemTag] = STATE(17),
    [sym__S] = ACTIONS(20),
    [anon_sym_LT] = ACTIONS(29),
  },
  [7] = {
    [sym_Comment] = STATE(18),
    [sym_PI] = STATE(18),
    [sym__Misc] = STATE(18),
    [sym__S] = ACTIONS(31),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(8),
    [anon_sym_LT_QMARK] = ACTIONS(34),
  },
  [8] = {
    [sym_doctypedecl] = STATE(20),
    [sym__S] = ACTIONS(20),
    [anon_sym_LT_BANGDOCTYPE] = ACTIONS(36),
    [anon_sym_LT] = ACTIONS(38),
  },
  [9] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_LT_BANGDOCTYPE] = ACTIONS(40),
    [anon_sym_LT] = ACTIONS(42),
  },
  [10] = {
    [aux_sym_Comment_repeat1] = STATE(22),
    [sym__Char] = ACTIONS(44),
    [sym__S] = ACTIONS(16),
    [anon_sym_DASH_DASH_GT] = ACTIONS(46),
  },
  [11] = {
    [sym__S] = ACTIONS(48),
    [anon_sym_QMARK_GT] = ACTIONS(51),
  },
  [12] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_version] = ACTIONS(53),
  },
  [13] = {
    [sym_SDDecl] = STATE(28),
    [sym_EncodingDecl] = STATE(29),
    [sym__S] = ACTIONS(55),
    [anon_sym_QMARK_GT] = ACTIONS(58),
  },
  [14] = {
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(60),
  },
  [15] = {
    [sym_Comment] = STATE(33),
    [sym_PI] = STATE(33),
    [sym__Misc] = STATE(33),
    [aux_sym_source_file_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(62),
    [sym__S] = ACTIONS(64),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(67),
    [anon_sym_LT_QMARK] = ACTIONS(69),
  },
  [16] = {
    [sym_Comment] = STATE(41),
    [sym_PI] = STATE(41),
    [sym__CDSect] = STATE(41),
    [sym_element] = STATE(41),
    [sym_STag] = STATE(42),
    [sym_ETag] = STATE(43),
    [sym__content] = STATE(44),
    [sym_EmptyElemTag] = STATE(45),
    [sym__Reference] = STATE(41),
    [sym_EntityRef] = STATE(41),
    [aux_sym__content_repeat1] = STATE(46),
    [sym__S] = ACTIONS(16),
    [sym_CharData] = ACTIONS(71),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(73),
    [anon_sym_LT_QMARK] = ACTIONS(75),
    [sym__CDStart] = ACTIONS(77),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_LT_SLASH] = ACTIONS(81),
    [sym_CharRef] = ACTIONS(83),
    [anon_sym_AMP] = ACTIONS(85),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym__S] = ACTIONS(87),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(87),
    [anon_sym_LT_QMARK] = ACTIONS(87),
  },
  [18] = {
    [sym_doctypedecl] = STATE(47),
    [sym__S] = ACTIONS(20),
    [anon_sym_LT_BANGDOCTYPE] = ACTIONS(36),
    [anon_sym_LT] = ACTIONS(89),
  },
  [19] = {
    [sym__S] = ACTIONS(91),
  },
  [20] = {
    [sym_Comment] = STATE(49),
    [sym_PI] = STATE(49),
    [sym__Misc] = STATE(49),
    [aux_sym_source_file_repeat1] = STATE(49),
    [sym__S] = ACTIONS(94),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(67),
    [anon_sym_LT_QMARK] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(89),
  },
  [21] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_LT_BANGDOCTYPE] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
  },
  [22] = {
    [aux_sym_Comment_repeat1] = STATE(22),
    [sym__Char] = ACTIONS(101),
    [sym__S] = ACTIONS(16),
    [anon_sym_DASH_DASH_GT] = ACTIONS(104),
  },
  [23] = {
    [aux_sym_Comment_repeat1] = STATE(51),
    [sym__Char] = ACTIONS(106),
    [sym__S] = ACTIONS(16),
    [anon_sym_QMARK_GT] = ACTIONS(108),
  },
  [24] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_LT_BANGDOCTYPE] = ACTIONS(110),
    [anon_sym_LT] = ACTIONS(112),
  },
  [25] = {
    [sym__Eq] = STATE(54),
    [sym__S] = ACTIONS(114),
    [anon_sym_EQ] = ACTIONS(117),
  },
  [26] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_QMARK_GT] = ACTIONS(119),
    [anon_sym_standalone] = ACTIONS(121),
    [anon_sym_encoding] = ACTIONS(123),
  },
  [27] = {
    [sym__S] = ACTIONS(125),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(125),
    [anon_sym_LT_QMARK] = ACTIONS(125),
  },
  [28] = {
    [sym__S] = ACTIONS(127),
    [anon_sym_QMARK_GT] = ACTIONS(119),
  },
  [29] = {
    [sym_SDDecl] = STATE(60),
    [sym__S] = ACTIONS(130),
    [anon_sym_QMARK_GT] = ACTIONS(119),
  },
  [30] = {
    [aux_sym_STag_repeat1] = STATE(64),
    [sym__S] = ACTIONS(133),
    [anon_sym_GT] = ACTIONS(136),
    [anon_sym_SLASH_GT] = ACTIONS(138),
  },
  [31] = {
    [aux_sym_Comment_repeat1] = STATE(66),
    [sym__Char] = ACTIONS(140),
    [sym__S] = ACTIONS(16),
    [anon_sym_DASH_DASH_GT] = ACTIONS(142),
  },
  [32] = {
    [sym__PITarget] = STATE(67),
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(144),
  },
  [33] = {
    [sym_Comment] = STATE(68),
    [sym_PI] = STATE(68),
    [sym__Misc] = STATE(68),
    [aux_sym_source_file_repeat1] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(146),
    [sym__S] = ACTIONS(148),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(67),
    [anon_sym_LT_QMARK] = ACTIONS(69),
  },
  [34] = {
    [sym_Comment] = STATE(41),
    [sym_PI] = STATE(41),
    [sym__CDSect] = STATE(41),
    [sym_element] = STATE(41),
    [sym_STag] = STATE(42),
    [sym_ETag] = STATE(69),
    [sym__content] = STATE(70),
    [sym_EmptyElemTag] = STATE(45),
    [sym__Reference] = STATE(41),
    [sym_EntityRef] = STATE(41),
    [aux_sym__content_repeat1] = STATE(46),
    [sym__S] = ACTIONS(20),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(73),
    [anon_sym_LT_QMARK] = ACTIONS(75),
    [sym__CDStart] = ACTIONS(77),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_LT_SLASH] = ACTIONS(81),
    [sym_CharRef] = ACTIONS(83),
    [anon_sym_AMP] = ACTIONS(85),
  },
  [35] = {
    [aux_sym_Comment_repeat1] = STATE(72),
    [sym__Char] = ACTIONS(151),
    [sym__S] = ACTIONS(16),
    [anon_sym_DASH_DASH_GT] = ACTIONS(153),
  },
  [36] = {
    [sym__PITarget] = STATE(73),
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(155),
  },
  [37] = {
    [sym_CData] = STATE(74),
    [sym__CDEnd] = STATE(75),
    [aux_sym_Comment_repeat1] = STATE(76),
    [sym__Char] = ACTIONS(157),
    [sym__S] = ACTIONS(16),
    [anon_sym_RBRACK_RBRACK_GT] = ACTIONS(159),
  },
  [38] = {
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(161),
  },
  [39] = {
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(163),
  },
  [40] = {
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(165),
  },
  [41] = {
    [sym__S] = ACTIONS(16),
    [sym_CharData] = ACTIONS(167),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(169),
    [anon_sym_LT_QMARK] = ACTIONS(169),
    [sym__CDStart] = ACTIONS(169),
    [anon_sym_LT] = ACTIONS(171),
    [anon_sym_LT_SLASH] = ACTIONS(169),
    [sym_CharRef] = ACTIONS(169),
    [anon_sym_AMP] = ACTIONS(171),
  },
  [42] = {
    [sym_Comment] = STATE(41),
    [sym_PI] = STATE(41),
    [sym__CDSect] = STATE(41),
    [sym_element] = STATE(41),
    [sym_STag] = STATE(42),
    [sym_ETag] = STATE(83),
    [sym__content] = STATE(84),
    [sym_EmptyElemTag] = STATE(45),
    [sym__Reference] = STATE(41),
    [sym_EntityRef] = STATE(41),
    [aux_sym__content_repeat1] = STATE(46),
    [sym__S] = ACTIONS(16),
    [sym_CharData] = ACTIONS(173),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(73),
    [anon_sym_LT_QMARK] = ACTIONS(75),
    [sym__CDStart] = ACTIONS(77),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_LT_SLASH] = ACTIONS(175),
    [sym_CharRef] = ACTIONS(83),
    [anon_sym_AMP] = ACTIONS(85),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym__S] = ACTIONS(177),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(177),
    [anon_sym_LT_QMARK] = ACTIONS(177),
  },
  [44] = {
    [sym_ETag] = STATE(69),
    [sym__S] = ACTIONS(20),
    [anon_sym_LT_SLASH] = ACTIONS(81),
  },
  [45] = {
    [sym__S] = ACTIONS(16),
    [sym_CharData] = ACTIONS(179),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(87),
    [anon_sym_LT_QMARK] = ACTIONS(87),
    [sym__CDStart] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(179),
    [anon_sym_LT_SLASH] = ACTIONS(87),
    [sym_CharRef] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(179),
  },
  [46] = {
    [sym_Comment] = STATE(41),
    [sym_PI] = STATE(41),
    [sym__CDSect] = STATE(41),
    [sym_element] = STATE(41),
    [sym_STag] = STATE(42),
    [sym_EmptyElemTag] = STATE(45),
    [sym__Reference] = STATE(41),
    [sym_EntityRef] = STATE(41),
    [aux_sym__content_repeat1] = STATE(85),
    [sym__S] = ACTIONS(20),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(73),
    [anon_sym_LT_QMARK] = ACTIONS(75),
    [sym__CDStart] = ACTIONS(77),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_LT_SLASH] = ACTIONS(181),
    [sym_CharRef] = ACTIONS(83),
    [anon_sym_AMP] = ACTIONS(85),
  },
  [47] = {
    [sym_Comment] = STATE(86),
    [sym_PI] = STATE(86),
    [sym__Misc] = STATE(86),
    [aux_sym_source_file_repeat1] = STATE(86),
    [sym__S] = ACTIONS(183),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(67),
    [anon_sym_LT_QMARK] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(186),
  },
  [48] = {
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(188),
  },
  [49] = {
    [sym_Comment] = STATE(88),
    [sym_PI] = STATE(88),
    [sym__Misc] = STATE(88),
    [aux_sym_source_file_repeat1] = STATE(88),
    [sym__S] = ACTIONS(190),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(67),
    [anon_sym_LT_QMARK] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(186),
  },
  [50] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_LT_BANGDOCTYPE] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(195),
  },
  [51] = {
    [aux_sym_Comment_repeat1] = STATE(90),
    [sym__Char] = ACTIONS(197),
    [sym__S] = ACTIONS(16),
    [anon_sym_QMARK_GT] = ACTIONS(199),
  },
  [52] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_EQ] = ACTIONS(201),
  },
  [53] = {
    [sym__S] = ACTIONS(203),
    [anon_sym_DQUOTE] = ACTIONS(206),
    [anon_sym_SQUOTE] = ACTIONS(206),
  },
  [54] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_DQUOTE] = ACTIONS(208),
    [anon_sym_SQUOTE] = ACTIONS(210),
  },
  [55] = {
    [sym__S] = ACTIONS(212),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(212),
    [anon_sym_LT_QMARK] = ACTIONS(212),
  },
  [56] = {
    [sym__Eq] = STATE(95),
    [sym__S] = ACTIONS(114),
    [anon_sym_EQ] = ACTIONS(117),
  },
  [57] = {
    [sym__Eq] = STATE(96),
    [sym__S] = ACTIONS(114),
    [anon_sym_EQ] = ACTIONS(117),
  },
  [58] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_QMARK_GT] = ACTIONS(214),
  },
  [59] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_QMARK_GT] = ACTIONS(214),
    [anon_sym_standalone] = ACTIONS(121),
  },
  [60] = {
    [sym__S] = ACTIONS(216),
    [anon_sym_QMARK_GT] = ACTIONS(214),
  },
  [61] = {
    [sym_Attribute] = STATE(102),
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(221),
    [anon_sym_SLASH_GT] = ACTIONS(223),
  },
  [62] = {
    [sym__S] = ACTIONS(16),
    [sym_CharData] = ACTIONS(225),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(227),
    [anon_sym_LT_QMARK] = ACTIONS(227),
    [sym__CDStart] = ACTIONS(227),
    [anon_sym_LT] = ACTIONS(225),
    [anon_sym_LT_SLASH] = ACTIONS(227),
    [sym_CharRef] = ACTIONS(227),
    [anon_sym_AMP] = ACTIONS(225),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [sym__S] = ACTIONS(229),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(229),
    [anon_sym_LT_QMARK] = ACTIONS(229),
  },
  [64] = {
    [aux_sym_STag_repeat1] = STATE(104),
    [sym__S] = ACTIONS(231),
    [anon_sym_GT] = ACTIONS(221),
    [anon_sym_SLASH_GT] = ACTIONS(223),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [sym__S] = ACTIONS(40),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(40),
    [anon_sym_LT_QMARK] = ACTIONS(40),
    [anon_sym_RBRACK] = ACTIONS(40),
    [anon_sym_LT] = ACTIONS(42),
    [anon_sym_LT_BANGELEMENT] = ACTIONS(40),
    [anon_sym_LT_BANGATTLIST] = ACTIONS(40),
    [anon_sym_PERCENT] = ACTIONS(40),
    [anon_sym_LT_BANGENTITY] = ACTIONS(40),
    [anon_sym_LT_BANGNOTATION] = ACTIONS(40),
  },
  [66] = {
    [aux_sym_Comment_repeat1] = STATE(22),
    [sym__Char] = ACTIONS(44),
    [sym__S] = ACTIONS(16),
    [anon_sym_DASH_DASH_GT] = ACTIONS(234),
  },
  [67] = {
    [sym__S] = ACTIONS(236),
    [anon_sym_QMARK_GT] = ACTIONS(239),
  },
  [68] = {
    [sym_Comment] = STATE(68),
    [sym_PI] = STATE(68),
    [sym__Misc] = STATE(68),
    [aux_sym_source_file_repeat1] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(241),
    [sym__S] = ACTIONS(243),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(247),
    [anon_sym_LT_QMARK] = ACTIONS(250),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [sym__S] = ACTIONS(253),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(253),
    [anon_sym_LT_QMARK] = ACTIONS(253),
  },
  [70] = {
    [sym_ETag] = STATE(108),
    [sym__S] = ACTIONS(20),
    [anon_sym_LT_SLASH] = ACTIONS(81),
  },
  [71] = {
    [sym__S] = ACTIONS(16),
    [sym_CharData] = ACTIONS(42),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(40),
    [anon_sym_LT_QMARK] = ACTIONS(40),
    [sym__CDStart] = ACTIONS(40),
    [anon_sym_LT] = ACTIONS(42),
    [anon_sym_LT_SLASH] = ACTIONS(40),
    [sym_CharRef] = ACTIONS(40),
    [anon_sym_AMP] = ACTIONS(42),
  },
  [72] = {
    [aux_sym_Comment_repeat1] = STATE(22),
    [sym__Char] = ACTIONS(44),
    [sym__S] = ACTIONS(16),
    [anon_sym_DASH_DASH_GT] = ACTIONS(255),
  },
  [73] = {
    [sym__S] = ACTIONS(257),
    [anon_sym_QMARK_GT] = ACTIONS(260),
  },
  [74] = {
    [sym__CDEnd] = STATE(112),
    [sym__S] = ACTIONS(20),
    [anon_sym_RBRACK_RBRACK_GT] = ACTIONS(262),
  },
  [75] = {
    [sym__S] = ACTIONS(16),
    [sym_CharData] = ACTIONS(264),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(266),
    [anon_sym_LT_QMARK] = ACTIONS(266),
    [sym__CDStart] = ACTIONS(266),
    [anon_sym_LT] = ACTIONS(264),
    [anon_sym_LT_SLASH] = ACTIONS(266),
    [sym_CharRef] = ACTIONS(266),
    [anon_sym_AMP] = ACTIONS(264),
  },
  [76] = {
    [aux_sym_Comment_repeat1] = STATE(113),
    [sym__Char] = ACTIONS(268),
    [sym__S] = ACTIONS(16),
    [anon_sym_RBRACK_RBRACK_GT] = ACTIONS(270),
  },
  [77] = {
    [aux_sym_STag_repeat1] = STATE(116),
    [sym__S] = ACTIONS(272),
    [anon_sym_GT] = ACTIONS(136),
    [anon_sym_SLASH_GT] = ACTIONS(275),
  },
  [78] = {
    [sym__S] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(280),
  },
  [79] = {
    [sym__S] = ACTIONS(16),
    [sym_CharData] = ACTIONS(282),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(284),
    [anon_sym_LT_QMARK] = ACTIONS(284),
    [sym__CDStart] = ACTIONS(284),
    [anon_sym_LT] = ACTIONS(282),
    [anon_sym_LT_SLASH] = ACTIONS(284),
    [sym_CharRef] = ACTIONS(284),
    [anon_sym_AMP] = ACTIONS(282),
  },
  [80] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(286),
    [anon_sym_LT_QMARK] = ACTIONS(286),
    [sym__CDStart] = ACTIONS(286),
    [anon_sym_LT] = ACTIONS(288),
    [anon_sym_LT_SLASH] = ACTIONS(286),
    [sym_CharRef] = ACTIONS(286),
    [anon_sym_AMP] = ACTIONS(288),
  },
  [81] = {
    [sym_Comment] = STATE(41),
    [sym_PI] = STATE(41),
    [sym__CDSect] = STATE(41),
    [sym_element] = STATE(41),
    [sym_STag] = STATE(42),
    [sym_ETag] = STATE(119),
    [sym__content] = STATE(120),
    [sym_EmptyElemTag] = STATE(45),
    [sym__Reference] = STATE(41),
    [sym_EntityRef] = STATE(41),
    [aux_sym__content_repeat1] = STATE(46),
    [sym__S] = ACTIONS(20),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(73),
    [anon_sym_LT_QMARK] = ACTIONS(75),
    [sym__CDStart] = ACTIONS(77),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_LT_SLASH] = ACTIONS(175),
    [sym_CharRef] = ACTIONS(83),
    [anon_sym_AMP] = ACTIONS(85),
  },
  [82] = {
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(290),
  },
  [83] = {
    [sym__S] = ACTIONS(16),
    [sym_CharData] = ACTIONS(292),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(177),
    [anon_sym_LT_QMARK] = ACTIONS(177),
    [sym__CDStart] = ACTIONS(177),
    [anon_sym_LT] = ACTIONS(292),
    [anon_sym_LT_SLASH] = ACTIONS(177),
    [sym_CharRef] = ACTIONS(177),
    [anon_sym_AMP] = ACTIONS(292),
  },
  [84] = {
    [sym_ETag] = STATE(119),
    [sym__S] = ACTIONS(20),
    [anon_sym_LT_SLASH] = ACTIONS(175),
  },
  [85] = {
    [sym_Comment] = STATE(41),
    [sym_PI] = STATE(41),
    [sym__CDSect] = STATE(41),
    [sym_element] = STATE(41),
    [sym_STag] = STATE(42),
    [sym_EmptyElemTag] = STATE(45),
    [sym__Reference] = STATE(41),
    [sym_EntityRef] = STATE(41),
    [aux_sym__content_repeat1] = STATE(85),
    [sym__S] = ACTIONS(20),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(294),
    [anon_sym_LT_QMARK] = ACTIONS(297),
    [sym__CDStart] = ACTIONS(300),
    [anon_sym_LT] = ACTIONS(303),
    [anon_sym_LT_SLASH] = ACTIONS(286),
    [sym_CharRef] = ACTIONS(306),
    [anon_sym_AMP] = ACTIONS(309),
  },
  [86] = {
    [sym_Comment] = STATE(88),
    [sym_PI] = STATE(88),
    [sym__Misc] = STATE(88),
    [aux_sym_source_file_repeat1] = STATE(88),
    [sym__S] = ACTIONS(190),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(67),
    [anon_sym_LT_QMARK] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(312),
  },
  [87] = {
    [sym__S] = ACTIONS(314),
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_GT] = ACTIONS(319),
  },
  [88] = {
    [sym_Comment] = STATE(88),
    [sym_PI] = STATE(88),
    [sym__Misc] = STATE(88),
    [aux_sym_source_file_repeat1] = STATE(88),
    [sym__S] = ACTIONS(321),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(247),
    [anon_sym_LT_QMARK] = ACTIONS(250),
    [anon_sym_LT] = ACTIONS(325),
  },
  [89] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_LT_BANGDOCTYPE] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(329),
  },
  [90] = {
    [aux_sym_Comment_repeat1] = STATE(90),
    [sym__Char] = ACTIONS(331),
    [sym__S] = ACTIONS(16),
    [anon_sym_QMARK_GT] = ACTIONS(104),
  },
  [91] = {
    [sym__S] = ACTIONS(334),
    [anon_sym_DQUOTE] = ACTIONS(337),
    [anon_sym_SQUOTE] = ACTIONS(337),
  },
  [92] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_DQUOTE] = ACTIONS(337),
    [anon_sym_SQUOTE] = ACTIONS(337),
  },
  [93] = {
    [sym__S] = ACTIONS(20),
    [sym_VersionNum] = ACTIONS(339),
  },
  [94] = {
    [sym__S] = ACTIONS(20),
    [sym_VersionNum] = ACTIONS(341),
  },
  [95] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_DQUOTE] = ACTIONS(343),
    [anon_sym_SQUOTE] = ACTIONS(345),
  },
  [96] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_DQUOTE] = ACTIONS(347),
    [anon_sym_SQUOTE] = ACTIONS(349),
  },
  [97] = {
    [sym__S] = ACTIONS(351),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(351),
    [anon_sym_LT_QMARK] = ACTIONS(351),
  },
  [98] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_QMARK_GT] = ACTIONS(353),
  },
  [99] = {
    [sym__Eq] = STATE(133),
    [sym__S] = ACTIONS(114),
    [anon_sym_EQ] = ACTIONS(117),
  },
  [100] = {
    [sym__S] = ACTIONS(16),
    [sym_CharData] = ACTIONS(355),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(357),
    [anon_sym_LT_QMARK] = ACTIONS(357),
    [sym__CDStart] = ACTIONS(357),
    [anon_sym_LT] = ACTIONS(355),
    [anon_sym_LT_SLASH] = ACTIONS(357),
    [sym_CharRef] = ACTIONS(357),
    [anon_sym_AMP] = ACTIONS(355),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(359),
    [sym__S] = ACTIONS(359),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(359),
    [anon_sym_LT_QMARK] = ACTIONS(359),
  },
  [102] = {
    [sym__S] = ACTIONS(361),
    [anon_sym_GT] = ACTIONS(361),
    [anon_sym_SLASH_GT] = ACTIONS(361),
  },
  [103] = {
    [sym_Attribute] = STATE(102),
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(363),
    [anon_sym_SLASH_GT] = ACTIONS(365),
  },
  [104] = {
    [aux_sym_STag_repeat1] = STATE(104),
    [sym__S] = ACTIONS(367),
    [anon_sym_GT] = ACTIONS(361),
    [anon_sym_SLASH_GT] = ACTIONS(361),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym__S] = ACTIONS(97),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(97),
    [anon_sym_LT_QMARK] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_LT_BANGELEMENT] = ACTIONS(97),
    [anon_sym_LT_BANGATTLIST] = ACTIONS(97),
    [anon_sym_PERCENT] = ACTIONS(97),
    [anon_sym_LT_BANGENTITY] = ACTIONS(97),
    [anon_sym_LT_BANGNOTATION] = ACTIONS(97),
  },
  [106] = {
    [aux_sym_Comment_repeat1] = STATE(138),
    [sym__Char] = ACTIONS(371),
    [sym__S] = ACTIONS(16),
    [anon_sym_QMARK_GT] = ACTIONS(373),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym__S] = ACTIONS(110),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(110),
    [anon_sym_LT_QMARK] = ACTIONS(110),
    [anon_sym_RBRACK] = ACTIONS(110),
    [anon_sym_LT] = ACTIONS(112),
    [anon_sym_LT_BANGELEMENT] = ACTIONS(110),
    [anon_sym_LT_BANGATTLIST] = ACTIONS(110),
    [anon_sym_PERCENT] = ACTIONS(110),
    [anon_sym_LT_BANGENTITY] = ACTIONS(110),
    [anon_sym_LT_BANGNOTATION] = ACTIONS(110),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(375),
    [sym__S] = ACTIONS(375),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(375),
    [anon_sym_LT_QMARK] = ACTIONS(375),
  },
  [109] = {
    [sym__S] = ACTIONS(16),
    [sym_CharData] = ACTIONS(99),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(97),
    [anon_sym_LT_QMARK] = ACTIONS(97),
    [sym__CDStart] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_LT_SLASH] = ACTIONS(97),
    [sym_CharRef] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(99),
  },
  [110] = {
    [aux_sym_Comment_repeat1] = STATE(140),
    [sym__Char] = ACTIONS(377),
    [sym__S] = ACTIONS(16),
    [anon_sym_QMARK_GT] = ACTIONS(379),
  },
  [111] = {
    [sym__S] = ACTIONS(16),
    [sym_CharData] = ACTIONS(112),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(110),
    [anon_sym_LT_QMARK] = ACTIONS(110),
    [sym__CDStart] = ACTIONS(110),
    [anon_sym_LT] = ACTIONS(112),
    [anon_sym_LT_SLASH] = ACTIONS(110),
    [sym_CharRef] = ACTIONS(110),
    [anon_sym_AMP] = ACTIONS(112),
  },
  [112] = {
    [sym__S] = ACTIONS(16),
    [sym_CharData] = ACTIONS(381),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(383),
    [anon_sym_LT_QMARK] = ACTIONS(383),
    [sym__CDStart] = ACTIONS(383),
    [anon_sym_LT] = ACTIONS(381),
    [anon_sym_LT_SLASH] = ACTIONS(383),
    [sym_CharRef] = ACTIONS(383),
    [anon_sym_AMP] = ACTIONS(381),
  },
  [113] = {
    [aux_sym_Comment_repeat1] = STATE(113),
    [sym__Char] = ACTIONS(385),
    [sym__S] = ACTIONS(16),
    [anon_sym_RBRACK_RBRACK_GT] = ACTIONS(104),
  },
  [114] = {
    [sym_Attribute] = STATE(102),
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(221),
    [anon_sym_SLASH_GT] = ACTIONS(388),
  },
  [115] = {
    [sym__S] = ACTIONS(16),
    [sym_CharData] = ACTIONS(390),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(229),
    [anon_sym_LT_QMARK] = ACTIONS(229),
    [sym__CDStart] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(390),
    [anon_sym_LT_SLASH] = ACTIONS(229),
    [sym_CharRef] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(390),
  },
  [116] = {
    [aux_sym_STag_repeat1] = STATE(104),
    [sym__S] = ACTIONS(392),
    [anon_sym_GT] = ACTIONS(221),
    [anon_sym_SLASH_GT] = ACTIONS(388),
  },
  [117] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_GT] = ACTIONS(395),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(397),
    [sym__S] = ACTIONS(397),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(397),
    [anon_sym_LT_QMARK] = ACTIONS(397),
  },
  [119] = {
    [sym__S] = ACTIONS(16),
    [sym_CharData] = ACTIONS(399),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(253),
    [anon_sym_LT_QMARK] = ACTIONS(253),
    [sym__CDStart] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(399),
    [anon_sym_LT_SLASH] = ACTIONS(253),
    [sym_CharRef] = ACTIONS(253),
    [anon_sym_AMP] = ACTIONS(399),
  },
  [120] = {
    [sym_ETag] = STATE(144),
    [sym__S] = ACTIONS(20),
    [anon_sym_LT_SLASH] = ACTIONS(175),
  },
  [121] = {
    [sym__S] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(404),
  },
  [122] = {
    [sym_ExternalID] = STATE(151),
    [sym__S] = ACTIONS(20),
    [anon_sym_LBRACK] = ACTIONS(406),
    [anon_sym_GT] = ACTIONS(408),
    [anon_sym_SYSTEM] = ACTIONS(410),
    [anon_sym_PUBLIC] = ACTIONS(412),
  },
  [123] = {
    [sym_Comment] = STATE(159),
    [sym_PI] = STATE(159),
    [sym__DeclSep] = STATE(159),
    [sym__intSubset] = STATE(158),
    [sym__markupdecl] = STATE(159),
    [sym_elementdecl] = STATE(159),
    [sym_AttlistDecl] = STATE(159),
    [sym_PEReference] = STATE(159),
    [sym__EntityDecl] = STATE(159),
    [sym_GEDecl] = STATE(159),
    [sym_PEDecl] = STATE(159),
    [sym_NotationDecl] = STATE(159),
    [aux_sym__intSubset_repeat1] = STATE(159),
    [sym__S] = ACTIONS(414),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(67),
    [anon_sym_LT_QMARK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(417),
    [anon_sym_LT_BANGELEMENT] = ACTIONS(419),
    [anon_sym_LT_BANGATTLIST] = ACTIONS(421),
    [anon_sym_PERCENT] = ACTIONS(423),
    [anon_sym_LT_BANGENTITY] = ACTIONS(425),
    [anon_sym_LT_BANGNOTATION] = ACTIONS(427),
  },
  [124] = {
    [sym__S] = ACTIONS(429),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(429),
    [anon_sym_LT_QMARK] = ACTIONS(429),
    [anon_sym_LT] = ACTIONS(431),
  },
  [125] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_DQUOTE] = ACTIONS(433),
    [anon_sym_SQUOTE] = ACTIONS(433),
  },
  [126] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_DQUOTE] = ACTIONS(435),
  },
  [127] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(435),
  },
  [128] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_yes] = ACTIONS(437),
    [anon_sym_no] = ACTIONS(437),
  },
  [129] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_yes] = ACTIONS(439),
    [anon_sym_no] = ACTIONS(439),
  },
  [130] = {
    [sym__S] = ACTIONS(20),
    [sym_EncName] = ACTIONS(441),
  },
  [131] = {
    [sym__S] = ACTIONS(20),
    [sym_EncName] = ACTIONS(443),
  },
  [132] = {
    [sym__S] = ACTIONS(445),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(445),
    [anon_sym_LT_QMARK] = ACTIONS(445),
  },
  [133] = {
    [sym_AttValue] = STATE(167),
    [sym__S] = ACTIONS(20),
    [anon_sym_DQUOTE] = ACTIONS(447),
    [anon_sym_SQUOTE] = ACTIONS(449),
  },
  [134] = {
    [sym__S] = ACTIONS(16),
    [sym_CharData] = ACTIONS(451),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(453),
    [anon_sym_LT_QMARK] = ACTIONS(453),
    [sym__CDStart] = ACTIONS(453),
    [anon_sym_LT] = ACTIONS(451),
    [anon_sym_LT_SLASH] = ACTIONS(453),
    [sym_CharRef] = ACTIONS(453),
    [anon_sym_AMP] = ACTIONS(451),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(455),
    [sym__S] = ACTIONS(455),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(455),
    [anon_sym_LT_QMARK] = ACTIONS(455),
  },
  [136] = {
    [sym_Attribute] = STATE(102),
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(219),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [sym__S] = ACTIONS(193),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(193),
    [anon_sym_LT_QMARK] = ACTIONS(193),
    [anon_sym_RBRACK] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(195),
    [anon_sym_LT_BANGELEMENT] = ACTIONS(193),
    [anon_sym_LT_BANGATTLIST] = ACTIONS(193),
    [anon_sym_PERCENT] = ACTIONS(193),
    [anon_sym_LT_BANGENTITY] = ACTIONS(193),
    [anon_sym_LT_BANGNOTATION] = ACTIONS(193),
  },
  [138] = {
    [aux_sym_Comment_repeat1] = STATE(90),
    [sym__Char] = ACTIONS(197),
    [sym__S] = ACTIONS(16),
    [anon_sym_QMARK_GT] = ACTIONS(457),
  },
  [139] = {
    [sym__S] = ACTIONS(16),
    [sym_CharData] = ACTIONS(195),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(193),
    [anon_sym_LT_QMARK] = ACTIONS(193),
    [sym__CDStart] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(195),
    [anon_sym_LT_SLASH] = ACTIONS(193),
    [sym_CharRef] = ACTIONS(193),
    [anon_sym_AMP] = ACTIONS(195),
  },
  [140] = {
    [aux_sym_Comment_repeat1] = STATE(90),
    [sym__Char] = ACTIONS(197),
    [sym__S] = ACTIONS(16),
    [anon_sym_QMARK_GT] = ACTIONS(459),
  },
  [141] = {
    [sym__S] = ACTIONS(16),
    [sym_CharData] = ACTIONS(461),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(359),
    [anon_sym_LT_QMARK] = ACTIONS(359),
    [sym__CDStart] = ACTIONS(359),
    [anon_sym_LT] = ACTIONS(461),
    [anon_sym_LT_SLASH] = ACTIONS(359),
    [sym_CharRef] = ACTIONS(359),
    [anon_sym_AMP] = ACTIONS(461),
  },
  [142] = {
    [sym_Attribute] = STATE(102),
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(363),
    [anon_sym_SLASH_GT] = ACTIONS(463),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(465),
    [sym__S] = ACTIONS(465),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(465),
    [anon_sym_LT_QMARK] = ACTIONS(465),
  },
  [144] = {
    [sym__S] = ACTIONS(16),
    [sym_CharData] = ACTIONS(467),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(375),
    [anon_sym_LT_QMARK] = ACTIONS(375),
    [sym__CDStart] = ACTIONS(375),
    [anon_sym_LT] = ACTIONS(467),
    [anon_sym_LT_SLASH] = ACTIONS(375),
    [sym_CharRef] = ACTIONS(375),
    [anon_sym_AMP] = ACTIONS(467),
  },
  [145] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_GT] = ACTIONS(469),
  },
  [146] = {
    [sym__S] = ACTIONS(16),
    [sym_CharData] = ACTIONS(471),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(397),
    [anon_sym_LT_QMARK] = ACTIONS(397),
    [sym__CDStart] = ACTIONS(397),
    [anon_sym_LT] = ACTIONS(471),
    [anon_sym_LT_SLASH] = ACTIONS(397),
    [sym_CharRef] = ACTIONS(397),
    [anon_sym_AMP] = ACTIONS(471),
  },
  [147] = {
    [sym_Comment] = STATE(159),
    [sym_PI] = STATE(159),
    [sym__DeclSep] = STATE(159),
    [sym__intSubset] = STATE(173),
    [sym__markupdecl] = STATE(159),
    [sym_elementdecl] = STATE(159),
    [sym_AttlistDecl] = STATE(159),
    [sym_PEReference] = STATE(159),
    [sym__EntityDecl] = STATE(159),
    [sym_GEDecl] = STATE(159),
    [sym_PEDecl] = STATE(159),
    [sym_NotationDecl] = STATE(159),
    [aux_sym__intSubset_repeat1] = STATE(159),
    [sym__S] = ACTIONS(414),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(67),
    [anon_sym_LT_QMARK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(473),
    [anon_sym_LT_BANGELEMENT] = ACTIONS(419),
    [anon_sym_LT_BANGATTLIST] = ACTIONS(421),
    [anon_sym_PERCENT] = ACTIONS(423),
    [anon_sym_LT_BANGENTITY] = ACTIONS(425),
    [anon_sym_LT_BANGNOTATION] = ACTIONS(427),
  },
  [148] = {
    [sym__S] = ACTIONS(475),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(475),
    [anon_sym_LT_QMARK] = ACTIONS(475),
    [anon_sym_LT] = ACTIONS(477),
  },
  [149] = {
    [sym__S] = ACTIONS(479),
  },
  [150] = {
    [sym__S] = ACTIONS(482),
  },
  [151] = {
    [sym__S] = ACTIONS(485),
    [anon_sym_LBRACK] = ACTIONS(488),
    [anon_sym_GT] = ACTIONS(490),
  },
  [152] = {
    [sym__S] = ACTIONS(492),
    [anon_sym_GT] = ACTIONS(490),
  },
  [153] = {
    [sym__S] = ACTIONS(495),
  },
  [154] = {
    [sym__S] = ACTIONS(498),
  },
  [155] = {
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(501),
  },
  [156] = {
    [sym__S] = ACTIONS(503),
  },
  [157] = {
    [sym__S] = ACTIONS(506),
  },
  [158] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_RBRACK] = ACTIONS(473),
  },
  [159] = {
    [sym_Comment] = STATE(185),
    [sym_PI] = STATE(185),
    [sym__DeclSep] = STATE(185),
    [sym__markupdecl] = STATE(185),
    [sym_elementdecl] = STATE(185),
    [sym_AttlistDecl] = STATE(185),
    [sym_PEReference] = STATE(185),
    [sym__EntityDecl] = STATE(185),
    [sym_GEDecl] = STATE(185),
    [sym_PEDecl] = STATE(185),
    [sym_NotationDecl] = STATE(185),
    [aux_sym__intSubset_repeat1] = STATE(185),
    [sym__S] = ACTIONS(509),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(67),
    [anon_sym_LT_QMARK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(512),
    [anon_sym_LT_BANGELEMENT] = ACTIONS(419),
    [anon_sym_LT_BANGATTLIST] = ACTIONS(421),
    [anon_sym_PERCENT] = ACTIONS(423),
    [anon_sym_LT_BANGENTITY] = ACTIONS(425),
    [anon_sym_LT_BANGNOTATION] = ACTIONS(427),
  },
  [160] = {
    [sym__S] = ACTIONS(514),
    [anon_sym_QMARK_GT] = ACTIONS(514),
  },
  [161] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_DQUOTE] = ACTIONS(516),
  },
  [162] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(516),
  },
  [163] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_DQUOTE] = ACTIONS(518),
  },
  [164] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(518),
  },
  [165] = {
    [sym__Reference] = STATE(190),
    [sym_EntityRef] = STATE(190),
    [aux_sym_AttValue_repeat1] = STATE(190),
    [sym__S] = ACTIONS(20),
    [anon_sym_DQUOTE] = ACTIONS(520),
    [aux_sym_SLASH_LBRACK_CARET_LT_AMP_RBRACK_SLASH] = ACTIONS(522),
    [sym_CharRef] = ACTIONS(524),
    [anon_sym_AMP] = ACTIONS(526),
  },
  [166] = {
    [sym__Reference] = STATE(192),
    [sym_EntityRef] = STATE(192),
    [aux_sym_AttValue_repeat1] = STATE(192),
    [sym__S] = ACTIONS(20),
    [aux_sym_SLASH_LBRACK_CARET_LT_AMP_RBRACK_SLASH] = ACTIONS(528),
    [anon_sym_SQUOTE] = ACTIONS(520),
    [sym_CharRef] = ACTIONS(530),
    [anon_sym_AMP] = ACTIONS(532),
  },
  [167] = {
    [sym__S] = ACTIONS(534),
    [anon_sym_GT] = ACTIONS(534),
    [anon_sym_SLASH_GT] = ACTIONS(534),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(327),
    [sym__S] = ACTIONS(327),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(327),
    [anon_sym_LT_QMARK] = ACTIONS(327),
    [anon_sym_RBRACK] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(329),
    [anon_sym_LT_BANGELEMENT] = ACTIONS(327),
    [anon_sym_LT_BANGATTLIST] = ACTIONS(327),
    [anon_sym_PERCENT] = ACTIONS(327),
    [anon_sym_LT_BANGENTITY] = ACTIONS(327),
    [anon_sym_LT_BANGNOTATION] = ACTIONS(327),
  },
  [169] = {
    [sym__S] = ACTIONS(16),
    [sym_CharData] = ACTIONS(329),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(327),
    [anon_sym_LT_QMARK] = ACTIONS(327),
    [sym__CDStart] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(329),
    [anon_sym_LT_SLASH] = ACTIONS(327),
    [sym_CharRef] = ACTIONS(327),
    [anon_sym_AMP] = ACTIONS(329),
  },
  [170] = {
    [sym__S] = ACTIONS(16),
    [sym_CharData] = ACTIONS(536),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(455),
    [anon_sym_LT_QMARK] = ACTIONS(455),
    [sym__CDStart] = ACTIONS(455),
    [anon_sym_LT] = ACTIONS(536),
    [anon_sym_LT_SLASH] = ACTIONS(455),
    [sym_CharRef] = ACTIONS(455),
    [anon_sym_AMP] = ACTIONS(536),
  },
  [171] = {
    [sym__S] = ACTIONS(16),
    [sym_CharData] = ACTIONS(538),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(465),
    [anon_sym_LT_QMARK] = ACTIONS(465),
    [sym__CDStart] = ACTIONS(465),
    [anon_sym_LT] = ACTIONS(538),
    [anon_sym_LT_SLASH] = ACTIONS(465),
    [sym_CharRef] = ACTIONS(465),
    [anon_sym_AMP] = ACTIONS(538),
  },
  [172] = {
    [sym__S] = ACTIONS(540),
    [anon_sym_GT] = ACTIONS(543),
  },
  [173] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_RBRACK] = ACTIONS(545),
  },
  [174] = {
    [sym__S] = ACTIONS(20),
    [sym_SystemLiteral] = ACTIONS(547),
  },
  [175] = {
    [sym__S] = ACTIONS(20),
    [sym_PubidLiteral] = ACTIONS(549),
  },
  [176] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_LBRACK] = ACTIONS(551),
    [anon_sym_GT] = ACTIONS(543),
  },
  [177] = {
    [sym_Comment] = STATE(159),
    [sym_PI] = STATE(159),
    [sym__DeclSep] = STATE(159),
    [sym__intSubset] = STATE(199),
    [sym__markupdecl] = STATE(159),
    [sym_elementdecl] = STATE(159),
    [sym_AttlistDecl] = STATE(159),
    [sym_PEReference] = STATE(159),
    [sym__EntityDecl] = STATE(159),
    [sym_GEDecl] = STATE(159),
    [sym_PEDecl] = STATE(159),
    [sym_NotationDecl] = STATE(159),
    [aux_sym__intSubset_repeat1] = STATE(159),
    [sym__S] = ACTIONS(414),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(67),
    [anon_sym_LT_QMARK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(545),
    [anon_sym_LT_BANGELEMENT] = ACTIONS(419),
    [anon_sym_LT_BANGATTLIST] = ACTIONS(421),
    [anon_sym_PERCENT] = ACTIONS(423),
    [anon_sym_LT_BANGENTITY] = ACTIONS(425),
    [anon_sym_LT_BANGNOTATION] = ACTIONS(427),
  },
  [178] = {
    [sym__S] = ACTIONS(553),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(553),
    [anon_sym_LT_QMARK] = ACTIONS(553),
    [anon_sym_LT] = ACTIONS(555),
  },
  [179] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_GT] = ACTIONS(543),
  },
  [180] = {
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(557),
  },
  [181] = {
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(559),
  },
  [182] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_SEMI] = ACTIONS(561),
  },
  [183] = {
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(563),
    [anon_sym_PERCENT] = ACTIONS(565),
  },
  [184] = {
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(567),
  },
  [185] = {
    [sym_Comment] = STATE(185),
    [sym_PI] = STATE(185),
    [sym__DeclSep] = STATE(185),
    [sym__markupdecl] = STATE(185),
    [sym_elementdecl] = STATE(185),
    [sym_AttlistDecl] = STATE(185),
    [sym_PEReference] = STATE(185),
    [sym__EntityDecl] = STATE(185),
    [sym_GEDecl] = STATE(185),
    [sym_PEDecl] = STATE(185),
    [sym_NotationDecl] = STATE(185),
    [aux_sym__intSubset_repeat1] = STATE(185),
    [sym__S] = ACTIONS(569),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(573),
    [anon_sym_LT_QMARK] = ACTIONS(576),
    [anon_sym_RBRACK] = ACTIONS(579),
    [anon_sym_LT_BANGELEMENT] = ACTIONS(581),
    [anon_sym_LT_BANGATTLIST] = ACTIONS(584),
    [anon_sym_PERCENT] = ACTIONS(587),
    [anon_sym_LT_BANGENTITY] = ACTIONS(590),
    [anon_sym_LT_BANGNOTATION] = ACTIONS(593),
  },
  [186] = {
    [sym__S] = ACTIONS(596),
    [anon_sym_QMARK_GT] = ACTIONS(596),
  },
  [187] = {
    [sym__S] = ACTIONS(598),
    [anon_sym_QMARK_GT] = ACTIONS(598),
  },
  [188] = {
    [sym__S] = ACTIONS(600),
    [anon_sym_GT] = ACTIONS(600),
    [anon_sym_SLASH_GT] = ACTIONS(600),
  },
  [189] = {
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(602),
  },
  [190] = {
    [sym__Reference] = STATE(208),
    [sym_EntityRef] = STATE(208),
    [aux_sym_AttValue_repeat1] = STATE(208),
    [sym__S] = ACTIONS(20),
    [anon_sym_DQUOTE] = ACTIONS(604),
    [aux_sym_SLASH_LBRACK_CARET_LT_AMP_RBRACK_SLASH] = ACTIONS(606),
    [sym_CharRef] = ACTIONS(608),
    [anon_sym_AMP] = ACTIONS(526),
  },
  [191] = {
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(610),
  },
  [192] = {
    [sym__Reference] = STATE(210),
    [sym_EntityRef] = STATE(210),
    [aux_sym_AttValue_repeat1] = STATE(210),
    [sym__S] = ACTIONS(20),
    [aux_sym_SLASH_LBRACK_CARET_LT_AMP_RBRACK_SLASH] = ACTIONS(612),
    [anon_sym_SQUOTE] = ACTIONS(604),
    [sym_CharRef] = ACTIONS(614),
    [anon_sym_AMP] = ACTIONS(532),
  },
  [193] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_GT] = ACTIONS(616),
  },
  [194] = {
    [sym__S] = ACTIONS(618),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(618),
    [anon_sym_LT_QMARK] = ACTIONS(618),
    [anon_sym_LT] = ACTIONS(620),
  },
  [195] = {
    [sym__S] = ACTIONS(622),
    [anon_sym_GT] = ACTIONS(616),
  },
  [196] = {
    [sym__S] = ACTIONS(625),
    [anon_sym_LBRACK] = ACTIONS(625),
    [anon_sym_GT] = ACTIONS(625),
  },
  [197] = {
    [sym__S] = ACTIONS(627),
  },
  [198] = {
    [sym_Comment] = STATE(159),
    [sym_PI] = STATE(159),
    [sym__DeclSep] = STATE(159),
    [sym__intSubset] = STATE(215),
    [sym__markupdecl] = STATE(159),
    [sym_elementdecl] = STATE(159),
    [sym_AttlistDecl] = STATE(159),
    [sym_PEReference] = STATE(159),
    [sym__EntityDecl] = STATE(159),
    [sym_GEDecl] = STATE(159),
    [sym_PEDecl] = STATE(159),
    [sym_NotationDecl] = STATE(159),
    [aux_sym__intSubset_repeat1] = STATE(159),
    [sym__S] = ACTIONS(414),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(67),
    [anon_sym_LT_QMARK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(630),
    [anon_sym_LT_BANGELEMENT] = ACTIONS(419),
    [anon_sym_LT_BANGATTLIST] = ACTIONS(421),
    [anon_sym_PERCENT] = ACTIONS(423),
    [anon_sym_LT_BANGENTITY] = ACTIONS(425),
    [anon_sym_LT_BANGNOTATION] = ACTIONS(427),
  },
  [199] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_RBRACK] = ACTIONS(630),
  },
  [200] = {
    [sym__S] = ACTIONS(632),
  },
  [201] = {
    [sym__AttDef] = STATE(219),
    [aux_sym_AttlistDecl_repeat1] = STATE(219),
    [sym__S] = ACTIONS(635),
    [anon_sym_GT] = ACTIONS(638),
  },
  [202] = {
    [sym__S] = ACTIONS(640),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(640),
    [anon_sym_LT_QMARK] = ACTIONS(640),
    [anon_sym_RBRACK] = ACTIONS(640),
    [anon_sym_LT_BANGELEMENT] = ACTIONS(640),
    [anon_sym_LT_BANGATTLIST] = ACTIONS(640),
    [anon_sym_PERCENT] = ACTIONS(640),
    [anon_sym_LT_BANGENTITY] = ACTIONS(640),
    [anon_sym_LT_BANGNOTATION] = ACTIONS(640),
  },
  [203] = {
    [sym__S] = ACTIONS(642),
  },
  [204] = {
    [sym__S] = ACTIONS(645),
  },
  [205] = {
    [sym__S] = ACTIONS(648),
  },
  [206] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_DQUOTE] = ACTIONS(284),
    [aux_sym_SLASH_LBRACK_CARET_LT_AMP_RBRACK_SLASH] = ACTIONS(282),
    [sym_CharRef] = ACTIONS(284),
    [anon_sym_AMP] = ACTIONS(282),
  },
  [207] = {
    [sym__S] = ACTIONS(651),
    [anon_sym_GT] = ACTIONS(651),
    [anon_sym_SLASH_GT] = ACTIONS(651),
  },
  [208] = {
    [sym__Reference] = STATE(208),
    [sym_EntityRef] = STATE(208),
    [aux_sym_AttValue_repeat1] = STATE(208),
    [sym__S] = ACTIONS(20),
    [anon_sym_DQUOTE] = ACTIONS(653),
    [aux_sym_SLASH_LBRACK_CARET_LT_AMP_RBRACK_SLASH] = ACTIONS(655),
    [sym_CharRef] = ACTIONS(658),
    [anon_sym_AMP] = ACTIONS(661),
  },
  [209] = {
    [sym__S] = ACTIONS(20),
    [aux_sym_SLASH_LBRACK_CARET_LT_AMP_RBRACK_SLASH] = ACTIONS(282),
    [anon_sym_SQUOTE] = ACTIONS(284),
    [sym_CharRef] = ACTIONS(284),
    [anon_sym_AMP] = ACTIONS(282),
  },
  [210] = {
    [sym__Reference] = STATE(210),
    [sym_EntityRef] = STATE(210),
    [aux_sym_AttValue_repeat1] = STATE(210),
    [sym__S] = ACTIONS(20),
    [aux_sym_SLASH_LBRACK_CARET_LT_AMP_RBRACK_SLASH] = ACTIONS(664),
    [anon_sym_SQUOTE] = ACTIONS(653),
    [sym_CharRef] = ACTIONS(667),
    [anon_sym_AMP] = ACTIONS(670),
  },
  [211] = {
    [sym__S] = ACTIONS(673),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(673),
    [anon_sym_LT_QMARK] = ACTIONS(673),
    [anon_sym_LT] = ACTIONS(675),
  },
  [212] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_GT] = ACTIONS(677),
  },
  [213] = {
    [sym__S] = ACTIONS(20),
    [sym_SystemLiteral] = ACTIONS(679),
  },
  [214] = {
    [sym__S] = ACTIONS(681),
    [anon_sym_GT] = ACTIONS(677),
  },
  [215] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_RBRACK] = ACTIONS(684),
  },
  [216] = {
    [sym_contentspec] = STATE(229),
    [sym_children] = STATE(227),
    [sym__choice] = STATE(230),
    [sym__seq] = STATE(230),
    [sym_Mixed] = STATE(227),
    [sym__S] = ACTIONS(20),
    [anon_sym_EMPTY] = ACTIONS(686),
    [anon_sym_ANY] = ACTIONS(686),
    [anon_sym_LPAREN] = ACTIONS(688),
  },
  [217] = {
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
  },
  [218] = {
    [sym__S] = ACTIONS(694),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(694),
    [anon_sym_LT_QMARK] = ACTIONS(694),
    [anon_sym_RBRACK] = ACTIONS(694),
    [anon_sym_LT_BANGELEMENT] = ACTIONS(694),
    [anon_sym_LT_BANGATTLIST] = ACTIONS(694),
    [anon_sym_PERCENT] = ACTIONS(694),
    [anon_sym_LT_BANGENTITY] = ACTIONS(694),
    [anon_sym_LT_BANGNOTATION] = ACTIONS(694),
  },
  [219] = {
    [sym__AttDef] = STATE(234),
    [aux_sym_AttlistDecl_repeat1] = STATE(234),
    [sym__S] = ACTIONS(696),
    [anon_sym_GT] = ACTIONS(692),
  },
  [220] = {
    [sym__EntityValue] = STATE(236),
    [sym__EntityDef] = STATE(236),
    [sym_ExternalID] = STATE(237),
    [sym__S] = ACTIONS(20),
    [anon_sym_DQUOTE] = ACTIONS(699),
    [anon_sym_SYSTEM] = ACTIONS(410),
    [anon_sym_PUBLIC] = ACTIONS(412),
  },
  [221] = {
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(701),
  },
  [222] = {
    [sym_ExternalID] = STATE(240),
    [sym_PublicID] = STATE(240),
    [sym__S] = ACTIONS(20),
    [anon_sym_SYSTEM] = ACTIONS(410),
    [anon_sym_PUBLIC] = ACTIONS(703),
  },
  [223] = {
    [sym__S] = ACTIONS(705),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(705),
    [anon_sym_LT_QMARK] = ACTIONS(705),
    [anon_sym_LT] = ACTIONS(707),
  },
  [224] = {
    [sym__S] = ACTIONS(709),
    [anon_sym_LBRACK] = ACTIONS(709),
    [anon_sym_GT] = ACTIONS(709),
  },
  [225] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_GT] = ACTIONS(711),
  },
  [226] = {
    [sym__S] = ACTIONS(713),
    [anon_sym_GT] = ACTIONS(711),
  },
  [227] = {
    [sym__S] = ACTIONS(716),
    [anon_sym_GT] = ACTIONS(716),
  },
  [228] = {
    [sym__cp] = STATE(247),
    [sym__choice] = STATE(244),
    [sym__seq] = STATE(244),
    [sym__S] = ACTIONS(718),
    [sym_Name] = ACTIONS(721),
    [anon_sym_LPAREN] = ACTIONS(723),
    [anon_sym_POUNDPCDATA] = ACTIONS(725),
  },
  [229] = {
    [sym__S] = ACTIONS(727),
    [anon_sym_GT] = ACTIONS(730),
  },
  [230] = {
    [sym__S] = ACTIONS(732),
    [anon_sym_GT] = ACTIONS(735),
    [anon_sym_QMARK] = ACTIONS(737),
    [anon_sym_STAR] = ACTIONS(737),
    [anon_sym_PLUS] = ACTIONS(737),
  },
  [231] = {
    [sym__S] = ACTIONS(739),
  },
  [232] = {
    [sym__S] = ACTIONS(742),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(742),
    [anon_sym_LT_QMARK] = ACTIONS(742),
    [anon_sym_RBRACK] = ACTIONS(742),
    [anon_sym_LT_BANGELEMENT] = ACTIONS(742),
    [anon_sym_LT_BANGATTLIST] = ACTIONS(742),
    [anon_sym_PERCENT] = ACTIONS(742),
    [anon_sym_LT_BANGENTITY] = ACTIONS(742),
    [anon_sym_LT_BANGNOTATION] = ACTIONS(742),
  },
  [233] = {
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(744),
  },
  [234] = {
    [sym__AttDef] = STATE(234),
    [aux_sym_AttlistDecl_repeat1] = STATE(234),
    [sym__S] = ACTIONS(746),
    [anon_sym_GT] = ACTIONS(750),
  },
  [235] = {
    [sym__Reference] = STATE(257),
    [sym_EntityRef] = STATE(257),
    [sym_PEReference] = STATE(257),
    [aux_sym__EntityValue_repeat1] = STATE(257),
    [sym__S] = ACTIONS(20),
    [anon_sym_DQUOTE] = ACTIONS(752),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AMP_DQUOTE_RBRACK_SLASH] = ACTIONS(754),
    [sym_CharRef] = ACTIONS(756),
    [anon_sym_AMP] = ACTIONS(758),
    [anon_sym_PERCENT] = ACTIONS(760),
  },
  [236] = {
    [sym__S] = ACTIONS(762),
    [anon_sym_GT] = ACTIONS(765),
  },
  [237] = {
    [sym_NDataDecl] = STATE(261),
    [sym__S] = ACTIONS(767),
    [anon_sym_GT] = ACTIONS(770),
  },
  [238] = {
    [sym__S] = ACTIONS(772),
  },
  [239] = {
    [sym__S] = ACTIONS(775),
  },
  [240] = {
    [sym__S] = ACTIONS(778),
    [anon_sym_GT] = ACTIONS(781),
  },
  [241] = {
    [sym__S] = ACTIONS(783),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(783),
    [anon_sym_LT_QMARK] = ACTIONS(783),
    [anon_sym_LT] = ACTIONS(785),
  },
  [242] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_GT] = ACTIONS(787),
  },
  [243] = {
    [sym__cp] = STATE(268),
    [sym__choice] = STATE(244),
    [sym__seq] = STATE(244),
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(721),
    [anon_sym_LPAREN] = ACTIONS(723),
    [anon_sym_POUNDPCDATA] = ACTIONS(789),
  },
  [244] = {
    [sym__S] = ACTIONS(791),
    [anon_sym_QMARK] = ACTIONS(794),
    [anon_sym_STAR] = ACTIONS(794),
    [anon_sym_PLUS] = ACTIONS(794),
    [anon_sym_PIPE] = ACTIONS(796),
    [anon_sym_RPAREN] = ACTIONS(796),
    [anon_sym_COMMA] = ACTIONS(796),
  },
  [245] = {
    [sym__cp] = STATE(247),
    [sym__choice] = STATE(244),
    [sym__seq] = STATE(244),
    [sym__S] = ACTIONS(798),
    [sym_Name] = ACTIONS(721),
    [anon_sym_LPAREN] = ACTIONS(723),
  },
  [246] = {
    [aux_sym_Mixed_repeat1] = STATE(274),
    [sym__S] = ACTIONS(801),
    [anon_sym_PIPE] = ACTIONS(804),
    [anon_sym_RPAREN] = ACTIONS(806),
    [anon_sym_RPAREN_STAR] = ACTIONS(808),
  },
  [247] = {
    [aux_sym__choice_repeat1] = STATE(279),
    [aux_sym__seq_repeat1] = STATE(280),
    [sym__S] = ACTIONS(810),
    [anon_sym_PIPE] = ACTIONS(813),
    [anon_sym_RPAREN] = ACTIONS(815),
    [anon_sym_COMMA] = ACTIONS(817),
  },
  [248] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_GT] = ACTIONS(819),
  },
  [249] = {
    [sym__S] = ACTIONS(821),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(821),
    [anon_sym_LT_QMARK] = ACTIONS(821),
    [anon_sym_RBRACK] = ACTIONS(821),
    [anon_sym_LT_BANGELEMENT] = ACTIONS(821),
    [anon_sym_LT_BANGATTLIST] = ACTIONS(821),
    [anon_sym_PERCENT] = ACTIONS(821),
    [anon_sym_LT_BANGENTITY] = ACTIONS(821),
    [anon_sym_LT_BANGNOTATION] = ACTIONS(821),
  },
  [250] = {
    [sym__S] = ACTIONS(823),
    [anon_sym_GT] = ACTIONS(823),
  },
  [251] = {
    [sym__AttType] = STATE(285),
    [sym_TokenizedType] = STATE(285),
    [sym__EnumeratedType] = STATE(285),
    [sym_NotationType] = STATE(285),
    [sym_Enumeration] = STATE(285),
    [sym__S] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(825),
    [sym_StringType] = ACTIONS(827),
    [anon_sym_ID] = ACTIONS(829),
    [anon_sym_IDREF] = ACTIONS(829),
    [anon_sym_IDREFS] = ACTIONS(831),
    [anon_sym_ENTITY] = ACTIONS(831),
    [anon_sym_ENTITIES] = ACTIONS(831),
    [anon_sym_NMTOKEN] = ACTIONS(829),
    [anon_sym_NMTOKENS] = ACTIONS(831),
    [anon_sym_NOTATION] = ACTIONS(833),
  },
  [252] = {
    [sym__S] = ACTIONS(835),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(835),
    [anon_sym_LT_QMARK] = ACTIONS(835),
    [anon_sym_RBRACK] = ACTIONS(835),
    [anon_sym_LT_BANGELEMENT] = ACTIONS(835),
    [anon_sym_LT_BANGATTLIST] = ACTIONS(835),
    [anon_sym_PERCENT] = ACTIONS(835),
    [anon_sym_LT_BANGENTITY] = ACTIONS(835),
    [anon_sym_LT_BANGNOTATION] = ACTIONS(835),
  },
  [253] = {
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(690),
  },
  [254] = {
    [sym__S] = ACTIONS(837),
    [anon_sym_GT] = ACTIONS(837),
  },
  [255] = {
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(839),
  },
  [256] = {
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(841),
  },
  [257] = {
    [sym__Reference] = STATE(289),
    [sym_EntityRef] = STATE(289),
    [sym_PEReference] = STATE(289),
    [aux_sym__EntityValue_repeat1] = STATE(289),
    [sym__S] = ACTIONS(20),
    [anon_sym_DQUOTE] = ACTIONS(843),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AMP_DQUOTE_RBRACK_SLASH] = ACTIONS(845),
    [sym_CharRef] = ACTIONS(847),
    [anon_sym_AMP] = ACTIONS(758),
    [anon_sym_PERCENT] = ACTIONS(760),
  },
  [258] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_GT] = ACTIONS(849),
  },
  [259] = {
    [sym__S] = ACTIONS(851),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(851),
    [anon_sym_LT_QMARK] = ACTIONS(851),
    [anon_sym_RBRACK] = ACTIONS(851),
    [anon_sym_LT_BANGELEMENT] = ACTIONS(851),
    [anon_sym_LT_BANGATTLIST] = ACTIONS(851),
    [anon_sym_PERCENT] = ACTIONS(851),
    [anon_sym_LT_BANGENTITY] = ACTIONS(851),
    [anon_sym_LT_BANGNOTATION] = ACTIONS(851),
  },
  [260] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_NDATA] = ACTIONS(853),
  },
  [261] = {
    [sym__S] = ACTIONS(855),
    [anon_sym_GT] = ACTIONS(855),
  },
  [262] = {
    [sym__EntityValue] = STATE(292),
    [sym__PEDef] = STATE(292),
    [sym_ExternalID] = STATE(292),
    [sym__S] = ACTIONS(20),
    [anon_sym_DQUOTE] = ACTIONS(699),
    [anon_sym_SYSTEM] = ACTIONS(410),
    [anon_sym_PUBLIC] = ACTIONS(412),
  },
  [263] = {
    [sym__S] = ACTIONS(20),
    [sym_PubidLiteral] = ACTIONS(857),
  },
  [264] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_GT] = ACTIONS(859),
  },
  [265] = {
    [sym__S] = ACTIONS(861),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(861),
    [anon_sym_LT_QMARK] = ACTIONS(861),
    [anon_sym_RBRACK] = ACTIONS(861),
    [anon_sym_LT_BANGELEMENT] = ACTIONS(861),
    [anon_sym_LT_BANGATTLIST] = ACTIONS(861),
    [anon_sym_PERCENT] = ACTIONS(861),
    [anon_sym_LT_BANGENTITY] = ACTIONS(861),
    [anon_sym_LT_BANGNOTATION] = ACTIONS(861),
  },
  [266] = {
    [sym__S] = ACTIONS(863),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(863),
    [anon_sym_LT_QMARK] = ACTIONS(863),
    [anon_sym_LT] = ACTIONS(865),
  },
  [267] = {
    [aux_sym_Mixed_repeat1] = STATE(297),
    [sym__S] = ACTIONS(867),
    [anon_sym_PIPE] = ACTIONS(804),
    [anon_sym_RPAREN] = ACTIONS(870),
    [anon_sym_RPAREN_STAR] = ACTIONS(872),
  },
  [268] = {
    [aux_sym__choice_repeat1] = STATE(300),
    [aux_sym__seq_repeat1] = STATE(301),
    [sym__S] = ACTIONS(874),
    [anon_sym_PIPE] = ACTIONS(813),
    [anon_sym_RPAREN] = ACTIONS(877),
    [anon_sym_COMMA] = ACTIONS(817),
  },
  [269] = {
    [sym__S] = ACTIONS(879),
    [anon_sym_PIPE] = ACTIONS(879),
    [anon_sym_RPAREN] = ACTIONS(879),
    [anon_sym_COMMA] = ACTIONS(879),
  },
  [270] = {
    [sym__cp] = STATE(268),
    [sym__choice] = STATE(244),
    [sym__seq] = STATE(244),
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(721),
    [anon_sym_LPAREN] = ACTIONS(723),
  },
  [271] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_PIPE] = ACTIONS(881),
    [anon_sym_RPAREN] = ACTIONS(870),
    [anon_sym_RPAREN_STAR] = ACTIONS(872),
  },
  [272] = {
    [sym__S] = ACTIONS(883),
    [sym_Name] = ACTIONS(886),
  },
  [273] = {
    [sym__S] = ACTIONS(888),
    [anon_sym_GT] = ACTIONS(888),
  },
  [274] = {
    [aux_sym_Mixed_repeat1] = STATE(306),
    [sym__S] = ACTIONS(890),
    [anon_sym_PIPE] = ACTIONS(804),
    [anon_sym_RPAREN_STAR] = ACTIONS(872),
  },
  [275] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_PIPE] = ACTIONS(893),
    [anon_sym_RPAREN] = ACTIONS(877),
    [anon_sym_COMMA] = ACTIONS(895),
  },
  [276] = {
    [sym__cp] = STATE(310),
    [sym__choice] = STATE(244),
    [sym__seq] = STATE(244),
    [sym__S] = ACTIONS(897),
    [sym_Name] = ACTIONS(721),
    [anon_sym_LPAREN] = ACTIONS(723),
  },
  [277] = {
    [sym__S] = ACTIONS(900),
    [anon_sym_GT] = ACTIONS(900),
    [anon_sym_QMARK] = ACTIONS(900),
    [anon_sym_STAR] = ACTIONS(900),
    [anon_sym_PLUS] = ACTIONS(900),
    [anon_sym_PIPE] = ACTIONS(900),
    [anon_sym_RPAREN] = ACTIONS(900),
    [anon_sym_COMMA] = ACTIONS(900),
  },
  [278] = {
    [sym__cp] = STATE(312),
    [sym__choice] = STATE(244),
    [sym__seq] = STATE(244),
    [sym__S] = ACTIONS(902),
    [sym_Name] = ACTIONS(721),
    [anon_sym_LPAREN] = ACTIONS(723),
  },
  [279] = {
    [aux_sym__choice_repeat1] = STATE(315),
    [sym__S] = ACTIONS(905),
    [anon_sym_PIPE] = ACTIONS(813),
    [anon_sym_RPAREN] = ACTIONS(908),
  },
  [280] = {
    [aux_sym__seq_repeat1] = STATE(317),
    [sym__S] = ACTIONS(910),
    [anon_sym_RPAREN] = ACTIONS(877),
    [anon_sym_COMMA] = ACTIONS(817),
  },
  [281] = {
    [sym__S] = ACTIONS(913),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(913),
    [anon_sym_LT_QMARK] = ACTIONS(913),
    [anon_sym_RBRACK] = ACTIONS(913),
    [anon_sym_LT_BANGELEMENT] = ACTIONS(913),
    [anon_sym_LT_BANGATTLIST] = ACTIONS(913),
    [anon_sym_PERCENT] = ACTIONS(913),
    [anon_sym_LT_BANGENTITY] = ACTIONS(913),
    [anon_sym_LT_BANGNOTATION] = ACTIONS(913),
  },
  [282] = {
    [sym__S] = ACTIONS(915),
    [sym_Nmtoken] = ACTIONS(918),
  },
  [283] = {
    [sym__S] = ACTIONS(920),
  },
  [284] = {
    [sym__S] = ACTIONS(922),
  },
  [285] = {
    [sym__S] = ACTIONS(925),
  },
  [286] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_DQUOTE] = ACTIONS(284),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AMP_DQUOTE_RBRACK_SLASH] = ACTIONS(282),
    [sym_CharRef] = ACTIONS(284),
    [anon_sym_AMP] = ACTIONS(282),
    [anon_sym_PERCENT] = ACTIONS(284),
  },
  [287] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_SEMI] = ACTIONS(928),
  },
  [288] = {
    [sym__S] = ACTIONS(930),
    [anon_sym_GT] = ACTIONS(930),
  },
  [289] = {
    [sym__Reference] = STATE(289),
    [sym_EntityRef] = STATE(289),
    [sym_PEReference] = STATE(289),
    [aux_sym__EntityValue_repeat1] = STATE(289),
    [sym__S] = ACTIONS(20),
    [anon_sym_DQUOTE] = ACTIONS(932),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AMP_DQUOTE_RBRACK_SLASH] = ACTIONS(934),
    [sym_CharRef] = ACTIONS(937),
    [anon_sym_AMP] = ACTIONS(940),
    [anon_sym_PERCENT] = ACTIONS(943),
  },
  [290] = {
    [sym__S] = ACTIONS(946),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(946),
    [anon_sym_LT_QMARK] = ACTIONS(946),
    [anon_sym_RBRACK] = ACTIONS(946),
    [anon_sym_LT_BANGELEMENT] = ACTIONS(946),
    [anon_sym_LT_BANGATTLIST] = ACTIONS(946),
    [anon_sym_PERCENT] = ACTIONS(946),
    [anon_sym_LT_BANGENTITY] = ACTIONS(946),
    [anon_sym_LT_BANGNOTATION] = ACTIONS(946),
  },
  [291] = {
    [sym__S] = ACTIONS(948),
  },
  [292] = {
    [sym__S] = ACTIONS(951),
    [anon_sym_GT] = ACTIONS(954),
  },
  [293] = {
    [sym__S] = ACTIONS(956),
    [anon_sym_GT] = ACTIONS(956),
  },
  [294] = {
    [sym__S] = ACTIONS(958),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(958),
    [anon_sym_LT_QMARK] = ACTIONS(958),
    [anon_sym_RBRACK] = ACTIONS(958),
    [anon_sym_LT_BANGELEMENT] = ACTIONS(958),
    [anon_sym_LT_BANGATTLIST] = ACTIONS(958),
    [anon_sym_PERCENT] = ACTIONS(958),
    [anon_sym_LT_BANGENTITY] = ACTIONS(958),
    [anon_sym_LT_BANGNOTATION] = ACTIONS(958),
  },
  [295] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_PIPE] = ACTIONS(881),
    [anon_sym_RPAREN] = ACTIONS(960),
    [anon_sym_RPAREN_STAR] = ACTIONS(962),
  },
  [296] = {
    [sym__S] = ACTIONS(964),
    [anon_sym_GT] = ACTIONS(964),
  },
  [297] = {
    [aux_sym_Mixed_repeat1] = STATE(306),
    [sym__S] = ACTIONS(966),
    [anon_sym_PIPE] = ACTIONS(804),
    [anon_sym_RPAREN_STAR] = ACTIONS(962),
  },
  [298] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_PIPE] = ACTIONS(893),
    [anon_sym_RPAREN] = ACTIONS(969),
    [anon_sym_COMMA] = ACTIONS(895),
  },
  [299] = {
    [sym__S] = ACTIONS(971),
    [anon_sym_GT] = ACTIONS(971),
    [anon_sym_QMARK] = ACTIONS(971),
    [anon_sym_STAR] = ACTIONS(971),
    [anon_sym_PLUS] = ACTIONS(971),
    [anon_sym_PIPE] = ACTIONS(971),
    [anon_sym_RPAREN] = ACTIONS(971),
    [anon_sym_COMMA] = ACTIONS(971),
  },
  [300] = {
    [aux_sym__choice_repeat1] = STATE(315),
    [sym__S] = ACTIONS(973),
    [anon_sym_PIPE] = ACTIONS(813),
    [anon_sym_RPAREN] = ACTIONS(976),
  },
  [301] = {
    [aux_sym__seq_repeat1] = STATE(317),
    [sym__S] = ACTIONS(978),
    [anon_sym_RPAREN] = ACTIONS(969),
    [anon_sym_COMMA] = ACTIONS(817),
  },
  [302] = {
    [sym__S] = ACTIONS(981),
    [sym_Name] = ACTIONS(984),
  },
  [303] = {
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(984),
  },
  [304] = {
    [sym__S] = ACTIONS(986),
    [anon_sym_PIPE] = ACTIONS(986),
    [anon_sym_RPAREN_STAR] = ACTIONS(986),
  },
  [305] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_PIPE] = ACTIONS(881),
    [anon_sym_RPAREN_STAR] = ACTIONS(962),
  },
  [306] = {
    [aux_sym_Mixed_repeat1] = STATE(306),
    [sym__S] = ACTIONS(988),
    [anon_sym_PIPE] = ACTIONS(992),
    [anon_sym_RPAREN_STAR] = ACTIONS(986),
  },
  [307] = {
    [sym__cp] = STATE(336),
    [sym__choice] = STATE(244),
    [sym__seq] = STATE(244),
    [sym__S] = ACTIONS(995),
    [sym_Name] = ACTIONS(721),
    [anon_sym_LPAREN] = ACTIONS(723),
  },
  [308] = {
    [sym__cp] = STATE(338),
    [sym__choice] = STATE(244),
    [sym__seq] = STATE(244),
    [sym__S] = ACTIONS(998),
    [sym_Name] = ACTIONS(721),
    [anon_sym_LPAREN] = ACTIONS(723),
  },
  [309] = {
    [sym__cp] = STATE(336),
    [sym__choice] = STATE(244),
    [sym__seq] = STATE(244),
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(721),
    [anon_sym_LPAREN] = ACTIONS(723),
  },
  [310] = {
    [sym__S] = ACTIONS(1001),
    [anon_sym_PIPE] = ACTIONS(1001),
    [anon_sym_RPAREN] = ACTIONS(1001),
  },
  [311] = {
    [sym__cp] = STATE(338),
    [sym__choice] = STATE(244),
    [sym__seq] = STATE(244),
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(721),
    [anon_sym_LPAREN] = ACTIONS(723),
  },
  [312] = {
    [sym__S] = ACTIONS(1003),
    [anon_sym_RPAREN] = ACTIONS(1003),
    [anon_sym_COMMA] = ACTIONS(1003),
  },
  [313] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_PIPE] = ACTIONS(893),
    [anon_sym_RPAREN] = ACTIONS(976),
  },
  [314] = {
    [sym__S] = ACTIONS(1005),
    [anon_sym_GT] = ACTIONS(1005),
    [anon_sym_QMARK] = ACTIONS(1005),
    [anon_sym_STAR] = ACTIONS(1005),
    [anon_sym_PLUS] = ACTIONS(1005),
    [anon_sym_PIPE] = ACTIONS(1005),
    [anon_sym_RPAREN] = ACTIONS(1005),
    [anon_sym_COMMA] = ACTIONS(1005),
  },
  [315] = {
    [aux_sym__choice_repeat1] = STATE(315),
    [sym__S] = ACTIONS(1007),
    [anon_sym_PIPE] = ACTIONS(1011),
    [anon_sym_RPAREN] = ACTIONS(1001),
  },
  [316] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_RPAREN] = ACTIONS(969),
    [anon_sym_COMMA] = ACTIONS(895),
  },
  [317] = {
    [aux_sym__seq_repeat1] = STATE(317),
    [sym__S] = ACTIONS(1014),
    [anon_sym_RPAREN] = ACTIONS(1003),
    [anon_sym_COMMA] = ACTIONS(1018),
  },
  [318] = {
    [sym__S] = ACTIONS(20),
    [sym_Nmtoken] = ACTIONS(1021),
  },
  [319] = {
    [aux_sym_Enumeration_repeat1] = STATE(345),
    [sym__S] = ACTIONS(1023),
    [anon_sym_PIPE] = ACTIONS(1026),
    [anon_sym_RPAREN] = ACTIONS(1028),
  },
  [320] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(1030),
  },
  [321] = {
    [sym_AttValue] = STATE(347),
    [sym_DefaultDecl] = STATE(349),
    [sym__S] = ACTIONS(20),
    [anon_sym_DQUOTE] = ACTIONS(447),
    [anon_sym_SQUOTE] = ACTIONS(449),
    [anon_sym_POUNDREQUIRED] = ACTIONS(1032),
    [anon_sym_POUNDIMPLIED] = ACTIONS(1032),
    [anon_sym_POUNDFIXED] = ACTIONS(1034),
  },
  [322] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_DQUOTE] = ACTIONS(640),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AMP_DQUOTE_RBRACK_SLASH] = ACTIONS(1036),
    [sym_CharRef] = ACTIONS(640),
    [anon_sym_AMP] = ACTIONS(1036),
    [anon_sym_PERCENT] = ACTIONS(640),
  },
  [323] = {
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(1038),
  },
  [324] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_GT] = ACTIONS(1040),
  },
  [325] = {
    [sym__S] = ACTIONS(1042),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(1042),
    [anon_sym_LT_QMARK] = ACTIONS(1042),
    [anon_sym_RBRACK] = ACTIONS(1042),
    [anon_sym_LT_BANGELEMENT] = ACTIONS(1042),
    [anon_sym_LT_BANGATTLIST] = ACTIONS(1042),
    [anon_sym_PERCENT] = ACTIONS(1042),
    [anon_sym_LT_BANGENTITY] = ACTIONS(1042),
    [anon_sym_LT_BANGNOTATION] = ACTIONS(1042),
  },
  [326] = {
    [sym__S] = ACTIONS(1044),
    [anon_sym_GT] = ACTIONS(1044),
  },
  [327] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_PIPE] = ACTIONS(881),
    [anon_sym_RPAREN_STAR] = ACTIONS(1046),
  },
  [328] = {
    [sym__S] = ACTIONS(1048),
    [anon_sym_GT] = ACTIONS(1048),
    [anon_sym_QMARK] = ACTIONS(1048),
    [anon_sym_STAR] = ACTIONS(1048),
    [anon_sym_PLUS] = ACTIONS(1048),
    [anon_sym_PIPE] = ACTIONS(1048),
    [anon_sym_RPAREN] = ACTIONS(1048),
    [anon_sym_COMMA] = ACTIONS(1048),
  },
  [329] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_PIPE] = ACTIONS(893),
    [anon_sym_RPAREN] = ACTIONS(1050),
  },
  [330] = {
    [sym__S] = ACTIONS(1052),
    [anon_sym_GT] = ACTIONS(1052),
    [anon_sym_QMARK] = ACTIONS(1052),
    [anon_sym_STAR] = ACTIONS(1052),
    [anon_sym_PLUS] = ACTIONS(1052),
    [anon_sym_PIPE] = ACTIONS(1052),
    [anon_sym_RPAREN] = ACTIONS(1052),
    [anon_sym_COMMA] = ACTIONS(1052),
  },
  [331] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_RPAREN] = ACTIONS(1054),
    [anon_sym_COMMA] = ACTIONS(895),
  },
  [332] = {
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(1056),
  },
  [333] = {
    [sym__S] = ACTIONS(1058),
    [anon_sym_PIPE] = ACTIONS(1058),
    [anon_sym_RPAREN_STAR] = ACTIONS(1058),
  },
  [334] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_PIPE] = ACTIONS(881),
  },
  [335] = {
    [sym__cp] = STATE(356),
    [sym__choice] = STATE(244),
    [sym__seq] = STATE(244),
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(721),
    [anon_sym_LPAREN] = ACTIONS(723),
  },
  [336] = {
    [sym__S] = ACTIONS(1060),
    [anon_sym_PIPE] = ACTIONS(1060),
    [anon_sym_RPAREN] = ACTIONS(1060),
  },
  [337] = {
    [sym__cp] = STATE(357),
    [sym__choice] = STATE(244),
    [sym__seq] = STATE(244),
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(721),
    [anon_sym_LPAREN] = ACTIONS(723),
  },
  [338] = {
    [sym__S] = ACTIONS(1062),
    [anon_sym_RPAREN] = ACTIONS(1062),
    [anon_sym_COMMA] = ACTIONS(1062),
  },
  [339] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_PIPE] = ACTIONS(893),
  },
  [340] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_COMMA] = ACTIONS(895),
  },
  [341] = {
    [aux_sym_Enumeration_repeat1] = STATE(360),
    [sym__S] = ACTIONS(1064),
    [anon_sym_PIPE] = ACTIONS(1026),
    [anon_sym_RPAREN] = ACTIONS(1067),
  },
  [342] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_PIPE] = ACTIONS(1069),
    [anon_sym_RPAREN] = ACTIONS(1067),
  },
  [343] = {
    [sym__S] = ACTIONS(1071),
    [sym_Nmtoken] = ACTIONS(1074),
  },
  [344] = {
    [sym__S] = ACTIONS(1076),
  },
  [345] = {
    [aux_sym_Enumeration_repeat1] = STATE(364),
    [sym__S] = ACTIONS(1064),
    [anon_sym_PIPE] = ACTIONS(1026),
    [anon_sym_RPAREN] = ACTIONS(1067),
  },
  [346] = {
    [sym__S] = ACTIONS(1078),
    [sym_Name] = ACTIONS(1081),
  },
  [347] = {
    [sym__S] = ACTIONS(1083),
    [anon_sym_GT] = ACTIONS(1083),
  },
  [348] = {
    [sym__S] = ACTIONS(1085),
  },
  [349] = {
    [sym__S] = ACTIONS(1088),
    [anon_sym_GT] = ACTIONS(1088),
  },
  [350] = {
    [sym__S] = ACTIONS(1090),
    [anon_sym_GT] = ACTIONS(1090),
  },
  [351] = {
    [sym__S] = ACTIONS(1092),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(1092),
    [anon_sym_LT_QMARK] = ACTIONS(1092),
    [anon_sym_RBRACK] = ACTIONS(1092),
    [anon_sym_LT_BANGELEMENT] = ACTIONS(1092),
    [anon_sym_LT_BANGATTLIST] = ACTIONS(1092),
    [anon_sym_PERCENT] = ACTIONS(1092),
    [anon_sym_LT_BANGENTITY] = ACTIONS(1092),
    [anon_sym_LT_BANGNOTATION] = ACTIONS(1092),
  },
  [352] = {
    [sym__S] = ACTIONS(1094),
    [anon_sym_GT] = ACTIONS(1094),
  },
  [353] = {
    [sym__S] = ACTIONS(1096),
    [anon_sym_GT] = ACTIONS(1096),
    [anon_sym_QMARK] = ACTIONS(1096),
    [anon_sym_STAR] = ACTIONS(1096),
    [anon_sym_PLUS] = ACTIONS(1096),
    [anon_sym_PIPE] = ACTIONS(1096),
    [anon_sym_RPAREN] = ACTIONS(1096),
    [anon_sym_COMMA] = ACTIONS(1096),
  },
  [354] = {
    [sym__S] = ACTIONS(1098),
    [anon_sym_GT] = ACTIONS(1098),
    [anon_sym_QMARK] = ACTIONS(1098),
    [anon_sym_STAR] = ACTIONS(1098),
    [anon_sym_PLUS] = ACTIONS(1098),
    [anon_sym_PIPE] = ACTIONS(1098),
    [anon_sym_RPAREN] = ACTIONS(1098),
    [anon_sym_COMMA] = ACTIONS(1098),
  },
  [355] = {
    [sym__S] = ACTIONS(1100),
    [anon_sym_PIPE] = ACTIONS(1100),
    [anon_sym_RPAREN_STAR] = ACTIONS(1100),
  },
  [356] = {
    [sym__S] = ACTIONS(1102),
    [anon_sym_PIPE] = ACTIONS(1102),
    [anon_sym_RPAREN] = ACTIONS(1102),
  },
  [357] = {
    [sym__S] = ACTIONS(1104),
    [anon_sym_RPAREN] = ACTIONS(1104),
    [anon_sym_COMMA] = ACTIONS(1104),
  },
  [358] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_PIPE] = ACTIONS(1069),
    [anon_sym_RPAREN] = ACTIONS(1106),
  },
  [359] = {
    [sym__S] = ACTIONS(1108),
  },
  [360] = {
    [aux_sym_Enumeration_repeat1] = STATE(364),
    [sym__S] = ACTIONS(1110),
    [anon_sym_PIPE] = ACTIONS(1026),
    [anon_sym_RPAREN] = ACTIONS(1106),
  },
  [361] = {
    [sym__S] = ACTIONS(1113),
    [sym_Nmtoken] = ACTIONS(1116),
  },
  [362] = {
    [sym__S] = ACTIONS(20),
    [sym_Nmtoken] = ACTIONS(1116),
  },
  [363] = {
    [sym__S] = ACTIONS(1118),
    [anon_sym_PIPE] = ACTIONS(1118),
    [anon_sym_RPAREN] = ACTIONS(1118),
  },
  [364] = {
    [aux_sym_Enumeration_repeat1] = STATE(364),
    [sym__S] = ACTIONS(1120),
    [anon_sym_PIPE] = ACTIONS(1124),
    [anon_sym_RPAREN] = ACTIONS(1118),
  },
  [365] = {
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(1127),
  },
  [366] = {
    [aux_sym_Mixed_repeat1] = STATE(377),
    [sym__S] = ACTIONS(1129),
    [anon_sym_PIPE] = ACTIONS(1132),
    [anon_sym_RPAREN] = ACTIONS(1134),
  },
  [367] = {
    [sym_AttValue] = STATE(378),
    [sym__S] = ACTIONS(20),
    [anon_sym_DQUOTE] = ACTIONS(447),
    [anon_sym_SQUOTE] = ACTIONS(449),
  },
  [368] = {
    [sym__S] = ACTIONS(1136),
  },
  [369] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_PIPE] = ACTIONS(1069),
    [anon_sym_RPAREN] = ACTIONS(1138),
  },
  [370] = {
    [sym__S] = ACTIONS(20),
    [sym_Nmtoken] = ACTIONS(1140),
  },
  [371] = {
    [sym__S] = ACTIONS(1142),
    [anon_sym_PIPE] = ACTIONS(1142),
    [anon_sym_RPAREN] = ACTIONS(1142),
  },
  [372] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_PIPE] = ACTIONS(1069),
  },
  [373] = {
    [aux_sym_Mixed_repeat1] = STATE(383),
    [sym__S] = ACTIONS(1144),
    [anon_sym_PIPE] = ACTIONS(1132),
    [anon_sym_RPAREN] = ACTIONS(1147),
  },
  [374] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_PIPE] = ACTIONS(1149),
    [anon_sym_RPAREN] = ACTIONS(1147),
  },
  [375] = {
    [sym__S] = ACTIONS(1151),
    [sym_Name] = ACTIONS(1154),
  },
  [376] = {
    [sym__S] = ACTIONS(1156),
  },
  [377] = {
    [aux_sym_Mixed_repeat1] = STATE(387),
    [sym__S] = ACTIONS(1144),
    [anon_sym_PIPE] = ACTIONS(1132),
    [anon_sym_RPAREN] = ACTIONS(1147),
  },
  [378] = {
    [sym__S] = ACTIONS(1158),
    [anon_sym_GT] = ACTIONS(1158),
  },
  [379] = {
    [sym__S] = ACTIONS(1160),
  },
  [380] = {
    [sym__S] = ACTIONS(1162),
    [anon_sym_PIPE] = ACTIONS(1162),
    [anon_sym_RPAREN] = ACTIONS(1162),
  },
  [381] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_PIPE] = ACTIONS(1149),
    [anon_sym_RPAREN] = ACTIONS(1164),
  },
  [382] = {
    [sym__S] = ACTIONS(1166),
  },
  [383] = {
    [aux_sym_Mixed_repeat1] = STATE(387),
    [sym__S] = ACTIONS(1168),
    [anon_sym_PIPE] = ACTIONS(1132),
    [anon_sym_RPAREN] = ACTIONS(1164),
  },
  [384] = {
    [sym__S] = ACTIONS(1171),
    [sym_Name] = ACTIONS(1174),
  },
  [385] = {
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(1174),
  },
  [386] = {
    [sym__S] = ACTIONS(986),
    [anon_sym_PIPE] = ACTIONS(986),
    [anon_sym_RPAREN] = ACTIONS(986),
  },
  [387] = {
    [aux_sym_Mixed_repeat1] = STATE(387),
    [sym__S] = ACTIONS(1176),
    [anon_sym_PIPE] = ACTIONS(1180),
    [anon_sym_RPAREN] = ACTIONS(986),
  },
  [388] = {
    [sym__S] = ACTIONS(1183),
  },
  [389] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_PIPE] = ACTIONS(1149),
    [anon_sym_RPAREN] = ACTIONS(1185),
  },
  [390] = {
    [sym__S] = ACTIONS(20),
    [sym_Name] = ACTIONS(1187),
  },
  [391] = {
    [sym__S] = ACTIONS(1058),
    [anon_sym_PIPE] = ACTIONS(1058),
    [anon_sym_RPAREN] = ACTIONS(1058),
  },
  [392] = {
    [sym__S] = ACTIONS(20),
    [anon_sym_PIPE] = ACTIONS(1149),
  },
  [393] = {
    [sym__S] = ACTIONS(1189),
  },
  [394] = {
    [sym__S] = ACTIONS(1100),
    [anon_sym_PIPE] = ACTIONS(1100),
    [anon_sym_RPAREN] = ACTIONS(1100),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 2, .reusable = true}, SHIFT(8), SHIFT_EXTRA(),
  [8] = {.count = 1, .reusable = true}, SHIFT(2),
  [10] = {.count = 1, .reusable = false}, SHIFT(3),
  [12] = {.count = 1, .reusable = true}, SHIFT(4),
  [14] = {.count = 1, .reusable = false}, SHIFT(10),
  [16] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [18] = {.count = 1, .reusable = true}, SHIFT(9),
  [20] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [22] = {.count = 1, .reusable = true}, SHIFT(11),
  [24] = {.count = 2, .reusable = true}, SHIFT(12), SHIFT_EXTRA(),
  [27] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [29] = {.count = 1, .reusable = true}, SHIFT(14),
  [31] = {.count = 2, .reusable = true}, SHIFT(18), SHIFT_EXTRA(),
  [34] = {.count = 1, .reusable = true}, SHIFT(3),
  [36] = {.count = 1, .reusable = true}, SHIFT(19),
  [38] = {.count = 1, .reusable = false}, REDUCE(sym_prolog, 1),
  [40] = {.count = 1, .reusable = true}, REDUCE(sym_Comment, 2),
  [42] = {.count = 1, .reusable = false}, REDUCE(sym_Comment, 2),
  [44] = {.count = 1, .reusable = false}, SHIFT(22),
  [46] = {.count = 1, .reusable = true}, SHIFT(21),
  [48] = {.count = 2, .reusable = true}, SHIFT(23), SHIFT_EXTRA(),
  [51] = {.count = 1, .reusable = true}, SHIFT(24),
  [53] = {.count = 1, .reusable = true}, SHIFT(25),
  [55] = {.count = 2, .reusable = true}, SHIFT(26), SHIFT_EXTRA(),
  [58] = {.count = 1, .reusable = true}, SHIFT(27),
  [60] = {.count = 1, .reusable = true}, SHIFT(30),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [64] = {.count = 2, .reusable = true}, SHIFT(33), SHIFT_EXTRA(),
  [67] = {.count = 1, .reusable = true}, SHIFT(31),
  [69] = {.count = 1, .reusable = true}, SHIFT(32),
  [71] = {.count = 1, .reusable = false}, SHIFT(34),
  [73] = {.count = 1, .reusable = true}, SHIFT(35),
  [75] = {.count = 1, .reusable = true}, SHIFT(36),
  [77] = {.count = 1, .reusable = true}, SHIFT(37),
  [79] = {.count = 1, .reusable = false}, SHIFT(38),
  [81] = {.count = 1, .reusable = true}, SHIFT(39),
  [83] = {.count = 1, .reusable = true}, SHIFT(41),
  [85] = {.count = 1, .reusable = false}, SHIFT(40),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_element, 1),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_prolog, 2),
  [91] = {.count = 2, .reusable = true}, SHIFT(48), SHIFT_EXTRA(),
  [94] = {.count = 2, .reusable = true}, SHIFT(49), SHIFT_EXTRA(),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_Comment, 3),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_Comment, 3),
  [101] = {.count = 2, .reusable = false}, REDUCE(aux_sym_Comment_repeat1, 2), SHIFT_REPEAT(22),
  [104] = {.count = 1, .reusable = true}, REDUCE(aux_sym_Comment_repeat1, 2),
  [106] = {.count = 1, .reusable = false}, SHIFT(51),
  [108] = {.count = 1, .reusable = true}, SHIFT(50),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym_PI, 3),
  [112] = {.count = 1, .reusable = false}, REDUCE(sym_PI, 3),
  [114] = {.count = 2, .reusable = true}, SHIFT(52), SHIFT_EXTRA(),
  [117] = {.count = 1, .reusable = true}, SHIFT(53),
  [119] = {.count = 1, .reusable = true}, SHIFT(55),
  [121] = {.count = 1, .reusable = true}, SHIFT(56),
  [123] = {.count = 1, .reusable = true}, SHIFT(57),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_XMLDecl, 3),
  [127] = {.count = 2, .reusable = true}, SHIFT(58), SHIFT_EXTRA(),
  [130] = {.count = 2, .reusable = true}, SHIFT(59), SHIFT_EXTRA(),
  [133] = {.count = 2, .reusable = true}, SHIFT(61), SHIFT_EXTRA(),
  [136] = {.count = 1, .reusable = true}, SHIFT(62),
  [138] = {.count = 1, .reusable = true}, SHIFT(63),
  [140] = {.count = 1, .reusable = false}, SHIFT(66),
  [142] = {.count = 1, .reusable = true}, SHIFT(65),
  [144] = {.count = 1, .reusable = true}, SHIFT(67),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [148] = {.count = 2, .reusable = true}, SHIFT(68), SHIFT_EXTRA(),
  [151] = {.count = 1, .reusable = false}, SHIFT(72),
  [153] = {.count = 1, .reusable = true}, SHIFT(71),
  [155] = {.count = 1, .reusable = true}, SHIFT(73),
  [157] = {.count = 1, .reusable = false}, SHIFT(76),
  [159] = {.count = 1, .reusable = true}, SHIFT(75),
  [161] = {.count = 1, .reusable = true}, SHIFT(77),
  [163] = {.count = 1, .reusable = true}, SHIFT(78),
  [165] = {.count = 1, .reusable = true}, SHIFT(79),
  [167] = {.count = 1, .reusable = false}, SHIFT(80),
  [169] = {.count = 1, .reusable = true}, REDUCE(aux_sym__content_repeat1, 1),
  [171] = {.count = 1, .reusable = false}, REDUCE(aux_sym__content_repeat1, 1),
  [173] = {.count = 1, .reusable = false}, SHIFT(81),
  [175] = {.count = 1, .reusable = true}, SHIFT(82),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_element, 2),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_element, 1),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym__content, 1),
  [183] = {.count = 2, .reusable = true}, SHIFT(86), SHIFT_EXTRA(),
  [186] = {.count = 1, .reusable = false}, REDUCE(sym_prolog, 3),
  [188] = {.count = 1, .reusable = true}, SHIFT(87),
  [190] = {.count = 2, .reusable = true}, SHIFT(88), SHIFT_EXTRA(),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_PI, 4),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_PI, 4),
  [197] = {.count = 1, .reusable = false}, SHIFT(90),
  [199] = {.count = 1, .reusable = true}, SHIFT(89),
  [201] = {.count = 1, .reusable = true}, SHIFT(91),
  [203] = {.count = 2, .reusable = true}, SHIFT(92), SHIFT_EXTRA(),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym__Eq, 1),
  [208] = {.count = 1, .reusable = true}, SHIFT(93),
  [210] = {.count = 1, .reusable = true}, SHIFT(94),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_XMLDecl, 4),
  [214] = {.count = 1, .reusable = true}, SHIFT(97),
  [216] = {.count = 2, .reusable = true}, SHIFT(98), SHIFT_EXTRA(),
  [219] = {.count = 1, .reusable = true}, SHIFT(99),
  [221] = {.count = 1, .reusable = true}, SHIFT(100),
  [223] = {.count = 1, .reusable = true}, SHIFT(101),
  [225] = {.count = 1, .reusable = false}, REDUCE(sym_STag, 3),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_STag, 3),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_EmptyElemTag, 3),
  [231] = {.count = 2, .reusable = true}, SHIFT(103), SHIFT_EXTRA(),
  [234] = {.count = 1, .reusable = true}, SHIFT(105),
  [236] = {.count = 2, .reusable = true}, SHIFT(106), SHIFT_EXTRA(),
  [239] = {.count = 1, .reusable = true}, SHIFT(107),
  [241] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [243] = {.count = 3, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68), SHIFT_EXTRA(),
  [247] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [250] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_element, 3),
  [255] = {.count = 1, .reusable = true}, SHIFT(109),
  [257] = {.count = 2, .reusable = true}, SHIFT(110), SHIFT_EXTRA(),
  [260] = {.count = 1, .reusable = true}, SHIFT(111),
  [262] = {.count = 1, .reusable = true}, SHIFT(112),
  [264] = {.count = 1, .reusable = false}, REDUCE(sym__CDSect, 2),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym__CDSect, 2),
  [268] = {.count = 1, .reusable = false}, SHIFT(113),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_CData, 1),
  [272] = {.count = 2, .reusable = true}, SHIFT(114), SHIFT_EXTRA(),
  [275] = {.count = 1, .reusable = true}, SHIFT(115),
  [277] = {.count = 2, .reusable = true}, SHIFT(117), SHIFT_EXTRA(),
  [280] = {.count = 1, .reusable = true}, SHIFT(118),
  [282] = {.count = 1, .reusable = false}, REDUCE(sym_EntityRef, 2),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym_EntityRef, 2),
  [286] = {.count = 1, .reusable = true}, REDUCE(aux_sym__content_repeat1, 2),
  [288] = {.count = 1, .reusable = false}, REDUCE(aux_sym__content_repeat1, 2),
  [290] = {.count = 1, .reusable = true}, SHIFT(121),
  [292] = {.count = 1, .reusable = false}, REDUCE(sym_element, 2),
  [294] = {.count = 2, .reusable = true}, REDUCE(aux_sym__content_repeat1, 2), SHIFT_REPEAT(35),
  [297] = {.count = 2, .reusable = true}, REDUCE(aux_sym__content_repeat1, 2), SHIFT_REPEAT(36),
  [300] = {.count = 2, .reusable = true}, REDUCE(aux_sym__content_repeat1, 2), SHIFT_REPEAT(37),
  [303] = {.count = 2, .reusable = false}, REDUCE(aux_sym__content_repeat1, 2), SHIFT_REPEAT(38),
  [306] = {.count = 2, .reusable = true}, REDUCE(aux_sym__content_repeat1, 2), SHIFT_REPEAT(41),
  [309] = {.count = 2, .reusable = false}, REDUCE(aux_sym__content_repeat1, 2), SHIFT_REPEAT(40),
  [312] = {.count = 1, .reusable = false}, REDUCE(sym_prolog, 4),
  [314] = {.count = 2, .reusable = true}, SHIFT(122), SHIFT_EXTRA(),
  [317] = {.count = 1, .reusable = true}, SHIFT(123),
  [319] = {.count = 1, .reusable = true}, SHIFT(124),
  [321] = {.count = 3, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(88), SHIFT_EXTRA(),
  [325] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_PI, 5),
  [329] = {.count = 1, .reusable = false}, REDUCE(sym_PI, 5),
  [331] = {.count = 2, .reusable = false}, REDUCE(aux_sym_Comment_repeat1, 2), SHIFT_REPEAT(90),
  [334] = {.count = 2, .reusable = true}, SHIFT(125), SHIFT_EXTRA(),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym__Eq, 2),
  [339] = {.count = 1, .reusable = true}, SHIFT(126),
  [341] = {.count = 1, .reusable = true}, SHIFT(127),
  [343] = {.count = 1, .reusable = true}, SHIFT(128),
  [345] = {.count = 1, .reusable = true}, SHIFT(129),
  [347] = {.count = 1, .reusable = true}, SHIFT(130),
  [349] = {.count = 1, .reusable = true}, SHIFT(131),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_XMLDecl, 5),
  [353] = {.count = 1, .reusable = true}, SHIFT(132),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym_STag, 4),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_STag, 4),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym_EmptyElemTag, 4),
  [361] = {.count = 1, .reusable = true}, REDUCE(aux_sym_STag_repeat1, 2),
  [363] = {.count = 1, .reusable = true}, SHIFT(134),
  [365] = {.count = 1, .reusable = true}, SHIFT(135),
  [367] = {.count = 3, .reusable = true}, REDUCE(aux_sym_STag_repeat1, 2), SHIFT_REPEAT(136), SHIFT_EXTRA(),
  [371] = {.count = 1, .reusable = false}, SHIFT(138),
  [373] = {.count = 1, .reusable = true}, SHIFT(137),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_element, 4),
  [377] = {.count = 1, .reusable = false}, SHIFT(140),
  [379] = {.count = 1, .reusable = true}, SHIFT(139),
  [381] = {.count = 1, .reusable = false}, REDUCE(sym__CDSect, 3),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym__CDSect, 3),
  [385] = {.count = 2, .reusable = false}, REDUCE(aux_sym_Comment_repeat1, 2), SHIFT_REPEAT(113),
  [388] = {.count = 1, .reusable = true}, SHIFT(141),
  [390] = {.count = 1, .reusable = false}, REDUCE(sym_EmptyElemTag, 3),
  [392] = {.count = 2, .reusable = true}, SHIFT(142), SHIFT_EXTRA(),
  [395] = {.count = 1, .reusable = true}, SHIFT(143),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_ETag, 3),
  [399] = {.count = 1, .reusable = false}, REDUCE(sym_element, 3),
  [401] = {.count = 2, .reusable = true}, SHIFT(145), SHIFT_EXTRA(),
  [404] = {.count = 1, .reusable = true}, SHIFT(146),
  [406] = {.count = 1, .reusable = true}, SHIFT(147),
  [408] = {.count = 1, .reusable = true}, SHIFT(148),
  [410] = {.count = 1, .reusable = true}, SHIFT(149),
  [412] = {.count = 1, .reusable = true}, SHIFT(150),
  [414] = {.count = 2, .reusable = true}, SHIFT(159), SHIFT_EXTRA(),
  [417] = {.count = 1, .reusable = true}, SHIFT(152),
  [419] = {.count = 1, .reusable = true}, SHIFT(153),
  [421] = {.count = 1, .reusable = true}, SHIFT(154),
  [423] = {.count = 1, .reusable = true}, SHIFT(155),
  [425] = {.count = 1, .reusable = true}, SHIFT(156),
  [427] = {.count = 1, .reusable = true}, SHIFT(157),
  [429] = {.count = 1, .reusable = true}, REDUCE(sym_doctypedecl, 4),
  [431] = {.count = 1, .reusable = false}, REDUCE(sym_doctypedecl, 4),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym__Eq, 3),
  [435] = {.count = 1, .reusable = true}, SHIFT(160),
  [437] = {.count = 1, .reusable = true}, SHIFT(161),
  [439] = {.count = 1, .reusable = true}, SHIFT(162),
  [441] = {.count = 1, .reusable = true}, SHIFT(163),
  [443] = {.count = 1, .reusable = true}, SHIFT(164),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_XMLDecl, 6),
  [447] = {.count = 1, .reusable = true}, SHIFT(165),
  [449] = {.count = 1, .reusable = true}, SHIFT(166),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym_STag, 5),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_STag, 5),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_EmptyElemTag, 5),
  [457] = {.count = 1, .reusable = true}, SHIFT(168),
  [459] = {.count = 1, .reusable = true}, SHIFT(169),
  [461] = {.count = 1, .reusable = false}, REDUCE(sym_EmptyElemTag, 4),
  [463] = {.count = 1, .reusable = true}, SHIFT(170),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_ETag, 4),
  [467] = {.count = 1, .reusable = false}, REDUCE(sym_element, 4),
  [469] = {.count = 1, .reusable = true}, SHIFT(171),
  [471] = {.count = 1, .reusable = false}, REDUCE(sym_ETag, 3),
  [473] = {.count = 1, .reusable = true}, SHIFT(172),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_doctypedecl, 5),
  [477] = {.count = 1, .reusable = false}, REDUCE(sym_doctypedecl, 5),
  [479] = {.count = 2, .reusable = true}, SHIFT(174), SHIFT_EXTRA(),
  [482] = {.count = 2, .reusable = true}, SHIFT(175), SHIFT_EXTRA(),
  [485] = {.count = 2, .reusable = true}, SHIFT(176), SHIFT_EXTRA(),
  [488] = {.count = 1, .reusable = true}, SHIFT(177),
  [490] = {.count = 1, .reusable = true}, SHIFT(178),
  [492] = {.count = 2, .reusable = true}, SHIFT(179), SHIFT_EXTRA(),
  [495] = {.count = 2, .reusable = true}, SHIFT(180), SHIFT_EXTRA(),
  [498] = {.count = 2, .reusable = true}, SHIFT(181), SHIFT_EXTRA(),
  [501] = {.count = 1, .reusable = true}, SHIFT(182),
  [503] = {.count = 2, .reusable = true}, SHIFT(183), SHIFT_EXTRA(),
  [506] = {.count = 2, .reusable = true}, SHIFT(184), SHIFT_EXTRA(),
  [509] = {.count = 2, .reusable = true}, SHIFT(185), SHIFT_EXTRA(),
  [512] = {.count = 1, .reusable = true}, REDUCE(sym__intSubset, 1),
  [514] = {.count = 1, .reusable = true}, REDUCE(sym_VersionInfo, 6),
  [516] = {.count = 1, .reusable = true}, SHIFT(186),
  [518] = {.count = 1, .reusable = true}, SHIFT(187),
  [520] = {.count = 1, .reusable = true}, SHIFT(188),
  [522] = {.count = 1, .reusable = false}, SHIFT(190),
  [524] = {.count = 1, .reusable = true}, SHIFT(190),
  [526] = {.count = 1, .reusable = false}, SHIFT(189),
  [528] = {.count = 1, .reusable = false}, SHIFT(192),
  [530] = {.count = 1, .reusable = true}, SHIFT(192),
  [532] = {.count = 1, .reusable = false}, SHIFT(191),
  [534] = {.count = 1, .reusable = true}, REDUCE(sym_Attribute, 3),
  [536] = {.count = 1, .reusable = false}, REDUCE(sym_EmptyElemTag, 5),
  [538] = {.count = 1, .reusable = false}, REDUCE(sym_ETag, 4),
  [540] = {.count = 2, .reusable = true}, SHIFT(193), SHIFT_EXTRA(),
  [543] = {.count = 1, .reusable = true}, SHIFT(194),
  [545] = {.count = 1, .reusable = true}, SHIFT(195),
  [547] = {.count = 1, .reusable = true}, SHIFT(196),
  [549] = {.count = 1, .reusable = true}, SHIFT(197),
  [551] = {.count = 1, .reusable = true}, SHIFT(198),
  [553] = {.count = 1, .reusable = true}, REDUCE(sym_doctypedecl, 6),
  [555] = {.count = 1, .reusable = false}, REDUCE(sym_doctypedecl, 6),
  [557] = {.count = 1, .reusable = true}, SHIFT(200),
  [559] = {.count = 1, .reusable = true}, SHIFT(201),
  [561] = {.count = 1, .reusable = true}, SHIFT(202),
  [563] = {.count = 1, .reusable = true}, SHIFT(203),
  [565] = {.count = 1, .reusable = true}, SHIFT(204),
  [567] = {.count = 1, .reusable = true}, SHIFT(205),
  [569] = {.count = 3, .reusable = true}, REDUCE(aux_sym__intSubset_repeat1, 2), SHIFT_REPEAT(185), SHIFT_EXTRA(),
  [573] = {.count = 2, .reusable = true}, REDUCE(aux_sym__intSubset_repeat1, 2), SHIFT_REPEAT(31),
  [576] = {.count = 2, .reusable = true}, REDUCE(aux_sym__intSubset_repeat1, 2), SHIFT_REPEAT(32),
  [579] = {.count = 1, .reusable = true}, REDUCE(aux_sym__intSubset_repeat1, 2),
  [581] = {.count = 2, .reusable = true}, REDUCE(aux_sym__intSubset_repeat1, 2), SHIFT_REPEAT(153),
  [584] = {.count = 2, .reusable = true}, REDUCE(aux_sym__intSubset_repeat1, 2), SHIFT_REPEAT(154),
  [587] = {.count = 2, .reusable = true}, REDUCE(aux_sym__intSubset_repeat1, 2), SHIFT_REPEAT(155),
  [590] = {.count = 2, .reusable = true}, REDUCE(aux_sym__intSubset_repeat1, 2), SHIFT_REPEAT(156),
  [593] = {.count = 2, .reusable = true}, REDUCE(aux_sym__intSubset_repeat1, 2), SHIFT_REPEAT(157),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym_SDDecl, 6),
  [598] = {.count = 1, .reusable = true}, REDUCE(sym_EncodingDecl, 6),
  [600] = {.count = 1, .reusable = true}, REDUCE(sym_AttValue, 2),
  [602] = {.count = 1, .reusable = true}, SHIFT(206),
  [604] = {.count = 1, .reusable = true}, SHIFT(207),
  [606] = {.count = 1, .reusable = false}, SHIFT(208),
  [608] = {.count = 1, .reusable = true}, SHIFT(208),
  [610] = {.count = 1, .reusable = true}, SHIFT(209),
  [612] = {.count = 1, .reusable = false}, SHIFT(210),
  [614] = {.count = 1, .reusable = true}, SHIFT(210),
  [616] = {.count = 1, .reusable = true}, SHIFT(211),
  [618] = {.count = 1, .reusable = true}, REDUCE(sym_doctypedecl, 7),
  [620] = {.count = 1, .reusable = false}, REDUCE(sym_doctypedecl, 7),
  [622] = {.count = 2, .reusable = true}, SHIFT(212), SHIFT_EXTRA(),
  [625] = {.count = 1, .reusable = true}, REDUCE(sym_ExternalID, 3),
  [627] = {.count = 2, .reusable = true}, SHIFT(213), SHIFT_EXTRA(),
  [630] = {.count = 1, .reusable = true}, SHIFT(214),
  [632] = {.count = 2, .reusable = true}, SHIFT(216), SHIFT_EXTRA(),
  [635] = {.count = 2, .reusable = true}, SHIFT(217), SHIFT_EXTRA(),
  [638] = {.count = 1, .reusable = true}, SHIFT(218),
  [640] = {.count = 1, .reusable = true}, REDUCE(sym_PEReference, 3),
  [642] = {.count = 2, .reusable = true}, SHIFT(220), SHIFT_EXTRA(),
  [645] = {.count = 2, .reusable = true}, SHIFT(221), SHIFT_EXTRA(),
  [648] = {.count = 2, .reusable = true}, SHIFT(222), SHIFT_EXTRA(),
  [651] = {.count = 1, .reusable = true}, REDUCE(sym_AttValue, 3),
  [653] = {.count = 1, .reusable = true}, REDUCE(aux_sym_AttValue_repeat1, 2),
  [655] = {.count = 2, .reusable = false}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(208),
  [658] = {.count = 2, .reusable = true}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(208),
  [661] = {.count = 2, .reusable = false}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(189),
  [664] = {.count = 2, .reusable = false}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(210),
  [667] = {.count = 2, .reusable = true}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(210),
  [670] = {.count = 2, .reusable = false}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(191),
  [673] = {.count = 1, .reusable = true}, REDUCE(sym_doctypedecl, 8),
  [675] = {.count = 1, .reusable = false}, REDUCE(sym_doctypedecl, 8),
  [677] = {.count = 1, .reusable = true}, SHIFT(223),
  [679] = {.count = 1, .reusable = true}, SHIFT(224),
  [681] = {.count = 2, .reusable = true}, SHIFT(225), SHIFT_EXTRA(),
  [684] = {.count = 1, .reusable = true}, SHIFT(226),
  [686] = {.count = 1, .reusable = true}, SHIFT(227),
  [688] = {.count = 1, .reusable = true}, SHIFT(228),
  [690] = {.count = 1, .reusable = true}, SHIFT(231),
  [692] = {.count = 1, .reusable = true}, SHIFT(232),
  [694] = {.count = 1, .reusable = true}, REDUCE(sym_AttlistDecl, 4),
  [696] = {.count = 2, .reusable = true}, SHIFT(233), SHIFT_EXTRA(),
  [699] = {.count = 1, .reusable = true}, SHIFT(235),
  [701] = {.count = 1, .reusable = true}, SHIFT(238),
  [703] = {.count = 1, .reusable = true}, SHIFT(239),
  [705] = {.count = 1, .reusable = true}, REDUCE(sym_doctypedecl, 9),
  [707] = {.count = 1, .reusable = false}, REDUCE(sym_doctypedecl, 9),
  [709] = {.count = 1, .reusable = true}, REDUCE(sym_ExternalID, 5),
  [711] = {.count = 1, .reusable = true}, SHIFT(241),
  [713] = {.count = 2, .reusable = true}, SHIFT(242), SHIFT_EXTRA(),
  [716] = {.count = 1, .reusable = true}, REDUCE(sym_contentspec, 1),
  [718] = {.count = 2, .reusable = true}, SHIFT(243), SHIFT_EXTRA(),
  [721] = {.count = 1, .reusable = true}, SHIFT(244),
  [723] = {.count = 1, .reusable = true}, SHIFT(245),
  [725] = {.count = 1, .reusable = true}, SHIFT(246),
  [727] = {.count = 2, .reusable = true}, SHIFT(248), SHIFT_EXTRA(),
  [730] = {.count = 1, .reusable = true}, SHIFT(249),
  [732] = {.count = 2, .reusable = true}, REDUCE(sym_children, 1), SHIFT_EXTRA(),
  [735] = {.count = 1, .reusable = true}, REDUCE(sym_children, 1),
  [737] = {.count = 1, .reusable = true}, SHIFT(250),
  [739] = {.count = 2, .reusable = true}, SHIFT(251), SHIFT_EXTRA(),
  [742] = {.count = 1, .reusable = true}, REDUCE(sym_AttlistDecl, 5),
  [744] = {.count = 1, .reusable = true}, SHIFT(252),
  [746] = {.count = 3, .reusable = true}, REDUCE(aux_sym_AttlistDecl_repeat1, 2), SHIFT_REPEAT(253), SHIFT_EXTRA(),
  [750] = {.count = 1, .reusable = true}, REDUCE(aux_sym_AttlistDecl_repeat1, 2),
  [752] = {.count = 1, .reusable = true}, SHIFT(254),
  [754] = {.count = 1, .reusable = false}, SHIFT(257),
  [756] = {.count = 1, .reusable = true}, SHIFT(257),
  [758] = {.count = 1, .reusable = false}, SHIFT(255),
  [760] = {.count = 1, .reusable = true}, SHIFT(256),
  [762] = {.count = 2, .reusable = true}, SHIFT(258), SHIFT_EXTRA(),
  [765] = {.count = 1, .reusable = true}, SHIFT(259),
  [767] = {.count = 2, .reusable = true}, REDUCE(sym__EntityDef, 1), SHIFT_EXTRA(),
  [770] = {.count = 1, .reusable = true}, REDUCE(sym__EntityDef, 1),
  [772] = {.count = 2, .reusable = true}, SHIFT(262), SHIFT_EXTRA(),
  [775] = {.count = 2, .reusable = true}, SHIFT(263), SHIFT_EXTRA(),
  [778] = {.count = 2, .reusable = true}, SHIFT(264), SHIFT_EXTRA(),
  [781] = {.count = 1, .reusable = true}, SHIFT(265),
  [783] = {.count = 1, .reusable = true}, REDUCE(sym_doctypedecl, 10),
  [785] = {.count = 1, .reusable = false}, REDUCE(sym_doctypedecl, 10),
  [787] = {.count = 1, .reusable = true}, SHIFT(266),
  [789] = {.count = 1, .reusable = true}, SHIFT(267),
  [791] = {.count = 2, .reusable = true}, REDUCE(sym__cp, 1), SHIFT_EXTRA(),
  [794] = {.count = 1, .reusable = true}, SHIFT(269),
  [796] = {.count = 1, .reusable = true}, REDUCE(sym__cp, 1),
  [798] = {.count = 2, .reusable = true}, SHIFT(270), SHIFT_EXTRA(),
  [801] = {.count = 2, .reusable = true}, SHIFT(271), SHIFT_EXTRA(),
  [804] = {.count = 1, .reusable = true}, SHIFT(272),
  [806] = {.count = 1, .reusable = false}, SHIFT(273),
  [808] = {.count = 1, .reusable = true}, SHIFT(273),
  [810] = {.count = 2, .reusable = true}, SHIFT(275), SHIFT_EXTRA(),
  [813] = {.count = 1, .reusable = true}, SHIFT(276),
  [815] = {.count = 1, .reusable = true}, SHIFT(277),
  [817] = {.count = 1, .reusable = true}, SHIFT(278),
  [819] = {.count = 1, .reusable = true}, SHIFT(281),
  [821] = {.count = 1, .reusable = true}, REDUCE(sym_elementdecl, 6),
  [823] = {.count = 1, .reusable = true}, REDUCE(sym_children, 2),
  [825] = {.count = 1, .reusable = true}, SHIFT(282),
  [827] = {.count = 1, .reusable = true}, SHIFT(285),
  [829] = {.count = 1, .reusable = false}, SHIFT(283),
  [831] = {.count = 1, .reusable = true}, SHIFT(283),
  [833] = {.count = 1, .reusable = true}, SHIFT(284),
  [835] = {.count = 1, .reusable = true}, REDUCE(sym_AttlistDecl, 6),
  [837] = {.count = 1, .reusable = true}, REDUCE(sym__EntityValue, 2),
  [839] = {.count = 1, .reusable = true}, SHIFT(286),
  [841] = {.count = 1, .reusable = true}, SHIFT(287),
  [843] = {.count = 1, .reusable = true}, SHIFT(288),
  [845] = {.count = 1, .reusable = false}, SHIFT(289),
  [847] = {.count = 1, .reusable = true}, SHIFT(289),
  [849] = {.count = 1, .reusable = true}, SHIFT(290),
  [851] = {.count = 1, .reusable = true}, REDUCE(sym_GEDecl, 6),
  [853] = {.count = 1, .reusable = true}, SHIFT(291),
  [855] = {.count = 1, .reusable = true}, REDUCE(sym__EntityDef, 2),
  [857] = {.count = 1, .reusable = true}, SHIFT(293),
  [859] = {.count = 1, .reusable = true}, SHIFT(294),
  [861] = {.count = 1, .reusable = true}, REDUCE(sym_NotationDecl, 6),
  [863] = {.count = 1, .reusable = true}, REDUCE(sym_doctypedecl, 11),
  [865] = {.count = 1, .reusable = false}, REDUCE(sym_doctypedecl, 11),
  [867] = {.count = 2, .reusable = true}, SHIFT(295), SHIFT_EXTRA(),
  [870] = {.count = 1, .reusable = false}, SHIFT(296),
  [872] = {.count = 1, .reusable = true}, SHIFT(296),
  [874] = {.count = 2, .reusable = true}, SHIFT(298), SHIFT_EXTRA(),
  [877] = {.count = 1, .reusable = true}, SHIFT(299),
  [879] = {.count = 1, .reusable = true}, REDUCE(sym__cp, 2),
  [881] = {.count = 1, .reusable = true}, SHIFT(302),
  [883] = {.count = 2, .reusable = true}, SHIFT(303), SHIFT_EXTRA(),
  [886] = {.count = 1, .reusable = true}, SHIFT(304),
  [888] = {.count = 1, .reusable = true}, REDUCE(sym_Mixed, 3),
  [890] = {.count = 2, .reusable = true}, SHIFT(305), SHIFT_EXTRA(),
  [893] = {.count = 1, .reusable = true}, SHIFT(307),
  [895] = {.count = 1, .reusable = true}, SHIFT(308),
  [897] = {.count = 2, .reusable = true}, SHIFT(309), SHIFT_EXTRA(),
  [900] = {.count = 1, .reusable = true}, REDUCE(sym__seq, 3),
  [902] = {.count = 2, .reusable = true}, SHIFT(311), SHIFT_EXTRA(),
  [905] = {.count = 2, .reusable = true}, SHIFT(313), SHIFT_EXTRA(),
  [908] = {.count = 1, .reusable = true}, SHIFT(314),
  [910] = {.count = 2, .reusable = true}, SHIFT(316), SHIFT_EXTRA(),
  [913] = {.count = 1, .reusable = true}, REDUCE(sym_elementdecl, 7),
  [915] = {.count = 2, .reusable = true}, SHIFT(318), SHIFT_EXTRA(),
  [918] = {.count = 1, .reusable = true}, SHIFT(319),
  [920] = {.count = 1, .reusable = true}, REDUCE(sym_TokenizedType, 1),
  [922] = {.count = 2, .reusable = true}, SHIFT(320), SHIFT_EXTRA(),
  [925] = {.count = 2, .reusable = true}, SHIFT(321), SHIFT_EXTRA(),
  [928] = {.count = 1, .reusable = true}, SHIFT(322),
  [930] = {.count = 1, .reusable = true}, REDUCE(sym__EntityValue, 3),
  [932] = {.count = 1, .reusable = true}, REDUCE(aux_sym__EntityValue_repeat1, 2),
  [934] = {.count = 2, .reusable = false}, REDUCE(aux_sym__EntityValue_repeat1, 2), SHIFT_REPEAT(289),
  [937] = {.count = 2, .reusable = true}, REDUCE(aux_sym__EntityValue_repeat1, 2), SHIFT_REPEAT(289),
  [940] = {.count = 2, .reusable = false}, REDUCE(aux_sym__EntityValue_repeat1, 2), SHIFT_REPEAT(255),
  [943] = {.count = 2, .reusable = true}, REDUCE(aux_sym__EntityValue_repeat1, 2), SHIFT_REPEAT(256),
  [946] = {.count = 1, .reusable = true}, REDUCE(sym_GEDecl, 7),
  [948] = {.count = 2, .reusable = true}, SHIFT(323), SHIFT_EXTRA(),
  [951] = {.count = 2, .reusable = true}, SHIFT(324), SHIFT_EXTRA(),
  [954] = {.count = 1, .reusable = true}, SHIFT(325),
  [956] = {.count = 1, .reusable = true}, REDUCE(sym_PublicID, 3),
  [958] = {.count = 1, .reusable = true}, REDUCE(sym_NotationDecl, 7),
  [960] = {.count = 1, .reusable = false}, SHIFT(326),
  [962] = {.count = 1, .reusable = true}, SHIFT(326),
  [964] = {.count = 1, .reusable = true}, REDUCE(sym_Mixed, 4),
  [966] = {.count = 2, .reusable = true}, SHIFT(327), SHIFT_EXTRA(),
  [969] = {.count = 1, .reusable = true}, SHIFT(328),
  [971] = {.count = 1, .reusable = true}, REDUCE(sym__seq, 4),
  [973] = {.count = 2, .reusable = true}, SHIFT(329), SHIFT_EXTRA(),
  [976] = {.count = 1, .reusable = true}, SHIFT(330),
  [978] = {.count = 2, .reusable = true}, SHIFT(331), SHIFT_EXTRA(),
  [981] = {.count = 2, .reusable = true}, SHIFT(332), SHIFT_EXTRA(),
  [984] = {.count = 1, .reusable = true}, SHIFT(333),
  [986] = {.count = 1, .reusable = true}, REDUCE(aux_sym_Mixed_repeat1, 2),
  [988] = {.count = 3, .reusable = true}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(334), SHIFT_EXTRA(),
  [992] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(272),
  [995] = {.count = 2, .reusable = true}, SHIFT(335), SHIFT_EXTRA(),
  [998] = {.count = 2, .reusable = true}, SHIFT(337), SHIFT_EXTRA(),
  [1001] = {.count = 1, .reusable = true}, REDUCE(aux_sym__choice_repeat1, 2),
  [1003] = {.count = 1, .reusable = true}, REDUCE(aux_sym__seq_repeat1, 2),
  [1005] = {.count = 1, .reusable = true}, REDUCE(sym__choice, 4),
  [1007] = {.count = 3, .reusable = true}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(339), SHIFT_EXTRA(),
  [1011] = {.count = 2, .reusable = true}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(276),
  [1014] = {.count = 3, .reusable = true}, REDUCE(aux_sym__seq_repeat1, 2), SHIFT_REPEAT(340), SHIFT_EXTRA(),
  [1018] = {.count = 2, .reusable = true}, REDUCE(aux_sym__seq_repeat1, 2), SHIFT_REPEAT(278),
  [1021] = {.count = 1, .reusable = true}, SHIFT(341),
  [1023] = {.count = 2, .reusable = true}, SHIFT(342), SHIFT_EXTRA(),
  [1026] = {.count = 1, .reusable = true}, SHIFT(343),
  [1028] = {.count = 1, .reusable = true}, SHIFT(344),
  [1030] = {.count = 1, .reusable = true}, SHIFT(346),
  [1032] = {.count = 1, .reusable = true}, SHIFT(347),
  [1034] = {.count = 1, .reusable = true}, SHIFT(348),
  [1036] = {.count = 1, .reusable = false}, REDUCE(sym_PEReference, 3),
  [1038] = {.count = 1, .reusable = true}, SHIFT(350),
  [1040] = {.count = 1, .reusable = true}, SHIFT(351),
  [1042] = {.count = 1, .reusable = true}, REDUCE(sym_PEDecl, 8),
  [1044] = {.count = 1, .reusable = true}, REDUCE(sym_Mixed, 5),
  [1046] = {.count = 1, .reusable = true}, SHIFT(352),
  [1048] = {.count = 1, .reusable = true}, REDUCE(sym__seq, 5),
  [1050] = {.count = 1, .reusable = true}, SHIFT(353),
  [1052] = {.count = 1, .reusable = true}, REDUCE(sym__choice, 5),
  [1054] = {.count = 1, .reusable = true}, SHIFT(354),
  [1056] = {.count = 1, .reusable = true}, SHIFT(355),
  [1058] = {.count = 1, .reusable = true}, REDUCE(aux_sym_Mixed_repeat1, 3),
  [1060] = {.count = 1, .reusable = true}, REDUCE(aux_sym__choice_repeat1, 3),
  [1062] = {.count = 1, .reusable = true}, REDUCE(aux_sym__seq_repeat1, 3),
  [1064] = {.count = 2, .reusable = true}, SHIFT(358), SHIFT_EXTRA(),
  [1067] = {.count = 1, .reusable = true}, SHIFT(359),
  [1069] = {.count = 1, .reusable = true}, SHIFT(361),
  [1071] = {.count = 2, .reusable = true}, SHIFT(362), SHIFT_EXTRA(),
  [1074] = {.count = 1, .reusable = true}, SHIFT(363),
  [1076] = {.count = 1, .reusable = true}, REDUCE(sym_Enumeration, 3),
  [1078] = {.count = 2, .reusable = true}, SHIFT(365), SHIFT_EXTRA(),
  [1081] = {.count = 1, .reusable = true}, SHIFT(366),
  [1083] = {.count = 1, .reusable = true}, REDUCE(sym_DefaultDecl, 1),
  [1085] = {.count = 2, .reusable = true}, SHIFT(367), SHIFT_EXTRA(),
  [1088] = {.count = 1, .reusable = true}, REDUCE(sym__AttDef, 6),
  [1090] = {.count = 1, .reusable = true}, REDUCE(sym_NDataDecl, 4),
  [1092] = {.count = 1, .reusable = true}, REDUCE(sym_PEDecl, 9),
  [1094] = {.count = 1, .reusable = true}, REDUCE(sym_Mixed, 6),
  [1096] = {.count = 1, .reusable = true}, REDUCE(sym__choice, 6),
  [1098] = {.count = 1, .reusable = true}, REDUCE(sym__seq, 6),
  [1100] = {.count = 1, .reusable = true}, REDUCE(aux_sym_Mixed_repeat1, 4),
  [1102] = {.count = 1, .reusable = true}, REDUCE(aux_sym__choice_repeat1, 4),
  [1104] = {.count = 1, .reusable = true}, REDUCE(aux_sym__seq_repeat1, 4),
  [1106] = {.count = 1, .reusable = true}, SHIFT(368),
  [1108] = {.count = 1, .reusable = true}, REDUCE(sym_Enumeration, 4),
  [1110] = {.count = 2, .reusable = true}, SHIFT(369), SHIFT_EXTRA(),
  [1113] = {.count = 2, .reusable = true}, SHIFT(370), SHIFT_EXTRA(),
  [1116] = {.count = 1, .reusable = true}, SHIFT(371),
  [1118] = {.count = 1, .reusable = true}, REDUCE(aux_sym_Enumeration_repeat1, 2),
  [1120] = {.count = 3, .reusable = true}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(372), SHIFT_EXTRA(),
  [1124] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(343),
  [1127] = {.count = 1, .reusable = true}, SHIFT(373),
  [1129] = {.count = 2, .reusable = true}, SHIFT(374), SHIFT_EXTRA(),
  [1132] = {.count = 1, .reusable = true}, SHIFT(375),
  [1134] = {.count = 1, .reusable = true}, SHIFT(376),
  [1136] = {.count = 1, .reusable = true}, REDUCE(sym_Enumeration, 5),
  [1138] = {.count = 1, .reusable = true}, SHIFT(379),
  [1140] = {.count = 1, .reusable = true}, SHIFT(380),
  [1142] = {.count = 1, .reusable = true}, REDUCE(aux_sym_Enumeration_repeat1, 3),
  [1144] = {.count = 2, .reusable = true}, SHIFT(381), SHIFT_EXTRA(),
  [1147] = {.count = 1, .reusable = true}, SHIFT(382),
  [1149] = {.count = 1, .reusable = true}, SHIFT(384),
  [1151] = {.count = 2, .reusable = true}, SHIFT(385), SHIFT_EXTRA(),
  [1154] = {.count = 1, .reusable = true}, SHIFT(386),
  [1156] = {.count = 1, .reusable = true}, REDUCE(sym_NotationType, 5),
  [1158] = {.count = 1, .reusable = true}, REDUCE(sym_DefaultDecl, 3),
  [1160] = {.count = 1, .reusable = true}, REDUCE(sym_Enumeration, 6),
  [1162] = {.count = 1, .reusable = true}, REDUCE(aux_sym_Enumeration_repeat1, 4),
  [1164] = {.count = 1, .reusable = true}, SHIFT(388),
  [1166] = {.count = 1, .reusable = true}, REDUCE(sym_NotationType, 6),
  [1168] = {.count = 2, .reusable = true}, SHIFT(389), SHIFT_EXTRA(),
  [1171] = {.count = 2, .reusable = true}, SHIFT(390), SHIFT_EXTRA(),
  [1174] = {.count = 1, .reusable = true}, SHIFT(391),
  [1176] = {.count = 3, .reusable = true}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(392), SHIFT_EXTRA(),
  [1180] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(375),
  [1183] = {.count = 1, .reusable = true}, REDUCE(sym_NotationType, 7),
  [1185] = {.count = 1, .reusable = true}, SHIFT(393),
  [1187] = {.count = 1, .reusable = true}, SHIFT(394),
  [1189] = {.count = 1, .reusable = true}, REDUCE(sym_NotationType, 8),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_xml() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
