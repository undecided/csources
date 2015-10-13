/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode190813 Tnode190813;
typedef struct Tparsers218035 Tparsers218035;
typedef struct Tparser206205 Tparser206205;
typedef struct Tlexer180185 Tlexer180185;
typedef struct Tbaselexer178024 Tbaselexer178024;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tllstream177204 Tllstream177204;
typedef struct Tlineinfo162338 Tlineinfo162338;
typedef struct Ttoken180181 Ttoken180181;
typedef struct Tident166021 Tident166021;
typedef struct Tidobj166015 Tidobj166015;
typedef struct Ttype190849 Ttype190849;
typedef struct Tsym190843 Tsym190843;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj160009 Ropeobj160009;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Tlib190831 Tlib190831;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TY190933 TY190933;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY218020[4];
typedef NimStringDesc* TY218026[4];
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tbaselexer178024  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Tllstream177204* stream;
NI linenumber;
NI sentinel;
NI linestart;
};
struct  Tlineinfo162338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Tlineinfo162338 info, NU16 msg, NimStringDesc* arg, void* ClEnv);
void* ClEnv;
} Terrorhandler180183;
struct  Tlexer180185  {
  Tbaselexer178024 Sup;
NI32 fileidx;
NI indentahead;
NI currlineindent;
NIM_BOOL strongspaces;
Terrorhandler180183 errorhandler;
};
struct  Ttoken180181  {
NU8 toktype;
NI indent;
Tident166021* ident;
NI64 inumber;
NF fnumber;
NU8 base;
NI8 strongspacea;
NI8 strongspaceb;
NimStringDesc* literal;
NI line;
NI col;
};
struct  Tparser206205  {
NI currind;
NIM_BOOL firsttok;
NIM_BOOL strongspaces;
Tlexer180185 lex;
Ttoken180181 tok;
NI inpragma;
NI insemistmtlist;
};
struct  Tparsers218035  {
NU8 skin;
Tparser206205 parser;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tidobj166015  {
  TNimObject Sup;
NI id;
};
struct  Tident166021  {
  Tidobj166015 Sup;
NimStringDesc* s;
Tident166021* next;
NI h;
};
struct  Tnode190813  {
Ttype190849* typ;
Tlineinfo162338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym190843* sym;
} S4;
struct {Tident166021* ident;
} S5;
struct {Tnodeseq190807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef NU8 TY191031[20];
typedef NimStringDesc* TY143651[1];
struct  Tllstream177204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
struct  Tloc190827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype190849* t;
Ropeobj160009* r;
Ropeobj160009* heaproot;
};
struct  Ttype190849  {
  Tidobj166015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq190845* sons;
Tnode190813* n;
Tsym190843* owner;
Tsym190843* sym;
Tsym190843* destructor;
Tsym190843* deepcopy;
Tsym190843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc190827 loc;
};
struct  Tstrtable190817  {
NI counter;
Tsymseq190815* data;
};
struct  Tsym190843  {
  Tidobj166015 Sup;
NU8 kind;
union{
struct {Ttypeseq190845* typeinstcache;
Tscope190837* typscope;
} S1;
struct {TY190944* procinstcache;
Tsym190843* gcunsafetyreason;
} S2;
struct {TY190944* usedgenerics;
Tstrtable190817 tab;
} S3;
struct {Tsym190843* guard;
} S4;
} kindU;
NU16 magic;
Ttype190849* typ;
Tident166021* name;
Tlineinfo162338 info;
Tsym190843* owner;
NU32 flags;
Tnode190813* ast;
NU32 options;
NI position;
NI offset;
Tloc190827 loc;
Tlib190831* annex;
Tnode190813* constraint;
};
struct  Ropeobj160009  {
  TNimObject Sup;
Ropeobj160009* left;
Ropeobj160009* right;
NI length;
NimStringDesc* data;
};
struct  Tscope190837  {
NI depthlevel;
Tstrtable190817 symbols;
Tnodeseq190807* usingsyms;
Tscope190837* parent;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tlib190831  {
  Tlistentry130022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj160009* name;
Tnode190813* path;
};
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq190845 {
  TGenericSeq Sup;
  Ttype190849* data[SEQ_DECL_SIZE];
};
struct TY190944 {
  TGenericSeq Sup;
  Tinstantiation190833* data[SEQ_DECL_SIZE];
};
struct Tsymseq190815 {
  TGenericSeq Sup;
  Tsym190843* data[SEQ_DECL_SIZE];
};
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tnode190813*, parsefile_218041)(NI32 fileidx);
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(NimStringDesc*, tofullpathconsiderdirty_163407)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, open_13203)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(void, rawmessage_163960)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tllstream177204*, llstreamopen_177238)(FILE* f);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(Tnode190813*, parseall_218063)(Tparsers218035* p);
N_NIMCALL(Tnode190813*, parseall_206216)(Tparser206205* p);
N_NIMCALL(Tnode190813*, parseall_211009)(Tparser206205* p);
N_NIMCALL(void, internalerror_164218)(NimStringDesc* errmsg);
N_NIMCALL(Tnode190813*, parsetoplevelstmt_218070)(Tparsers218035* p);
N_NIMCALL(Tnode190813*, parsetoplevelstmt_206230)(Tparser206205* p);
N_NIMCALL(Tnode190813*, parsetoplevelstmt_211020)(Tparser206205* p);
N_NIMCALL(NI, utf8bom_218122)(NimStringDesc* s);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, containsshebang_218132)(NimStringDesc* s, NI i);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(Tnode190813*, parsepipe_218170)(NimStringDesc* filename, Tllstream177204* inputstream);
N_NIMCALL(Tllstream177204*, llstreamopen_177256)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_177610)(Tllstream177204* s, NimStringDesc** line);
N_NIMCALL(void, openparser_206417)(Tparser206205* p, NimStringDesc* filename, Tllstream177204* inputstream, NIM_BOOL strongspaces);
N_NIMCALL(Tllstream177204*, llstreamopen_177220)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(void, closeparser_206223)(Tparser206205* p);
N_NIMCALL(void, llstreamclose_177310)(Tllstream177204* s);
N_NIMCALL(NU8, getfilter_218239)(Tident166021* ident);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NIM_BOOL, identeq_166484)(Tident166021* id, NimStringDesc* name);
N_NIMCALL(NU8, getparser_218447)(Tident166021* ident);
N_NIMCALL(Tident166021*, getcallee_218647)(Tnode190813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, rendertree_212058)(Tnode190813* n, NU8 renderflags);
N_NIMCALL(Tllstream177204*, applyfilter_218689)(Tparsers218035* p, Tnode190813* n, NimStringDesc* filename, Tllstream177204* stdin_218695);
N_NIMCALL(Tllstream177204*, filtertmpl_217009)(Tllstream177204* stdin_217011, NimStringDesc* filename, Tnode190813* call);
N_NIMCALL(Tllstream177204*, filterstrip_216012)(Tllstream177204* stdin_216014, NimStringDesc* filename, Tnode190813* call);
N_NIMCALL(Tllstream177204*, filterreplace_216004)(Tllstream177204* stdin_216006, NimStringDesc* filename, Tnode190813* call);
N_NIMCALL(void, rawmessage_163888)(NU16 msg, NimStringDesc** args, NI argsLen0);
N_NIMCALL(void, msgwriteln_163536)(NimStringDesc* s);
N_NIMCALL(Tllstream177204*, evalpipe_218722)(Tparsers218035* p, Tnode190813* n, NimStringDesc* filename, Tllstream177204* start);
N_NIMCALL(void, openparsers_218047)(Tparsers218035* p, NI32 fileidx, Tllstream177204* inputstream);
N_NIMCALL(void, openparser_206402)(Tparser206205* p, NI32 fileidx, Tllstream177204* inputstream, NIM_BOOL strongspaces);
N_NIMCALL(void, closeparsers_218056)(Tparsers218035* p);
STRING_LITERAL(TMP3402, "standard", 8);
STRING_LITERAL(TMP3403, "strongspaces", 12);
STRING_LITERAL(TMP3404, "braces", 6);
STRING_LITERAL(TMP3405, "endx", 4);
NIM_CONST TY218020 parsernames_218019 = {((NimStringDesc*) &TMP3402),
((NimStringDesc*) &TMP3403),
((NimStringDesc*) &TMP3404),
((NimStringDesc*) &TMP3405)}
;
STRING_LITERAL(TMP3406, "none", 4);
STRING_LITERAL(TMP3407, "stdtmpl", 7);
STRING_LITERAL(TMP3408, "replace", 7);
STRING_LITERAL(TMP3409, "strip", 5);
NIM_CONST TY218026 filternames_218025 = {((NimStringDesc*) &TMP3406),
((NimStringDesc*) &TMP3407),
((NimStringDesc*) &TMP3408),
((NimStringDesc*) &TMP3409)}
;
STRING_LITERAL(TMP3414, "parser to implement", 19);
static NIM_CONST TY191031 TMP3423 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3424, "sons", 4);
static NIM_CONST TY191031 TMP3425 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3426, "ident", 5);
STRING_LITERAL(TMP3427, "|", 1);
TNimType NTI218035; /* TParsers */
TNimType NTI218007; /* TParserKind */
extern TNimType NTI206205; /* TParser */
extern TFrame* frameptr_17042;
extern Tnode190813* emptynode_191807;
extern NI gverbosity_153137;

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI LOC1;
	LOC1 = 0;
	{
		if (!(frameptr_17042 == NIM_NIL)) goto LA4;
		LOC1 = ((NI) 0);
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = ((NI) ((NI16)((*frameptr_17042).calldepth + ((NI16) 1))));
	}
	LA2: ;
	(*s).calldepth = ((NI16) (LOC1));
	(*s).prev = frameptr_17042;
	frameptr_17042 = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9;
		stackoverflow_20001();
	}
	LA9: ;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_17042 = (*frameptr_17042).prev;
}

N_NIMCALL(Tnode190813*, parsefile_218041)(NI32 fileidx) {
	Tnode190813* result;
	Tparsers218035 p;
	FILE* f;
	NimStringDesc* filename;
	Tllstream177204* LOC6;
	nimfr("parseFile", "syntaxes.nim")
{	result = 0;
	memset((void*)(&p), 0, sizeof(p));
	objectInit((&p), (&NTI218035));
	f = 0;
	nimln(48, "syntaxes.nim");
	filename = tofullpathconsiderdirty_163407(fileidx);
	nimln(49, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_13203(&f, filename, ((NU8) 0), ((NI) -1));
		if (!!(LOC3)) goto LA4;
		nimln(50, "syntaxes.nim");
		rawmessage_163960(((NU16) 3), filename);
		nimln(51, "syntaxes.nim");
		goto BeforeRet;
	}
	LA4: ;
	nimln(52, "syntaxes.nim");
	LOC6 = 0;
	LOC6 = llstreamopen_177238(f);
	openparsers_218047((&p), fileidx, LOC6);
	nimln(53, "syntaxes.nim");
	result = parseall_218063((&p));
	nimln(54, "syntaxes.nim");
	closeparsers_218056((&p));
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(Tnode190813*, parseall_218063)(Tparsers218035* p) {
	Tnode190813* result;
	nimfr("parseAll", "syntaxes.nim")
	result = 0;
	nimln(57, "syntaxes.nim");
	switch ((*p).skin) {
	case ((NU8) 0):
	case ((NU8) 1):
	{
		nimln(59, "syntaxes.nim");
		result = parseall_206216((&(*p).parser));
	}
	break;
	case ((NU8) 2):
	{
		nimln(61, "syntaxes.nim");
		result = parseall_211009((&(*p).parser));
	}
	break;
	case ((NU8) 3):
	{
		nimln(63, "syntaxes.nim");
		internalerror_164218(((NimStringDesc*) &TMP3414));
		nimln(64, "syntaxes.nim");
		result = emptynode_191807;
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(Tnode190813*, parsetoplevelstmt_218070)(Tparsers218035* p) {
	Tnode190813* result;
	nimfr("parseTopLevelStmt", "syntaxes.nim")
	result = 0;
	nimln(67, "syntaxes.nim");
	switch ((*p).skin) {
	case ((NU8) 0):
	case ((NU8) 1):
	{
		nimln(69, "syntaxes.nim");
		result = parsetoplevelstmt_206230((&(*p).parser));
	}
	break;
	case ((NU8) 2):
	{
		nimln(71, "syntaxes.nim");
		result = parsetoplevelstmt_211020((&(*p).parser));
	}
	break;
	case ((NU8) 3):
	{
		nimln(73, "syntaxes.nim");
		internalerror_164218(((NimStringDesc*) &TMP3414));
		nimln(74, "syntaxes.nim");
		result = emptynode_191807;
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(NI, utf8bom_218122)(NimStringDesc* s) {
	NI result;
	nimfr("utf8Bom", "syntaxes.nim")
	result = 0;
	nimln(77, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		LOC3 = 0;
		LOC4 = 0;
		if ((NU)(((NI) 0)) > (NU)(s->Sup.len)) raiseIndexError();
		LOC4 = ((NU8)(s->data[((NI) 0)]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		if ((NU)(((NI) 1)) > (NU)(s->Sup.len)) raiseIndexError();
		LOC4 = ((NU8)(s->data[((NI) 1)]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		if ((NU)(((NI) 2)) > (NU)(s->Sup.len)) raiseIndexError();
		LOC3 = ((NU8)(s->data[((NI) 2)]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		nimln(78, "syntaxes.nim");
		result = ((NI) 3);
	}
	goto LA1;
	LA7: ;
	{
		nimln(80, "syntaxes.nim");
		result = ((NI) 0);
	}
	LA1: ;
	popFrame();
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = 0;
	result = (NI)((NU32)(a) + (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI) 0) <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (((NI) 0) <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, containsshebang_218132)(NimStringDesc* s, NI i) {
	NIM_BOOL result;
	nimfr("containsShebang", "syntaxes.nim")
	result = 0;
	nimln(83, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		NI TMP3415;
		NI j;
		NI TMP3416;
		LOC3 = 0;
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		LOC3 = ((NU8)(s->data[i]) == (NU8)(35));
		if (!(LOC3)) goto LA4;
		TMP3415 = addInt(i, ((NI) 1));
		if ((NU)((NI)(TMP3415)) > (NU)(s->Sup.len)) raiseIndexError();
		LOC3 = ((NU8)(s->data[(NI)(TMP3415)]) == (NU8)(33));
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(84, "syntaxes.nim");
		TMP3416 = addInt(i, ((NI) 2));
		j = (NI)(TMP3416);
		{
			nimln(85, "syntaxes.nim");
			while (1) {
				NI TMP3417;
				if ((NU)(j) > (NU)(s->Sup.len)) raiseIndexError();
				if (!(((NU8)(s->data[j])) == ((NU8)(32)) || ((NU8)(s->data[j])) == ((NU8)(9)) || ((NU8)(s->data[j])) == ((NU8)(11)) || ((NU8)(s->data[j])) == ((NU8)(13)) || ((NU8)(s->data[j])) == ((NU8)(10)) || ((NU8)(s->data[j])) == ((NU8)(12)))) goto LA8;
				TMP3417 = addInt(j, ((NI) 1));
				j = (NI)(TMP3417);
			} LA8: ;
		}
		nimln(86, "syntaxes.nim");
		if ((NU)(j) > (NU)(s->Sup.len)) raiseIndexError();
		result = ((NU8)(s->data[j]) == (NU8)(47));
	}
	LA5: ;
	popFrame();
	return result;
}

N_NIMCALL(Tnode190813*, parsepipe_218170)(NimStringDesc* filename, Tllstream177204* inputstream) {
	Tnode190813* result;
	Tllstream177204* s;
	nimfr("parsePipe", "syntaxes.nim")
	result = 0;
	nimln(89, "syntaxes.nim");
	result = emptynode_191807;
	nimln(90, "syntaxes.nim");
	s = llstreamopen_177256(filename, ((NU8) 0));
	nimln(91, "syntaxes.nim");
	{
		NimStringDesc* line;
		NIM_BOOL LOC5;
		NI i;
		if (!!((s == NIM_NIL))) goto LA3;
		nimln(92, "syntaxes.nim");
		line = rawNewString(((NI) 80));
		nimln(93, "syntaxes.nim");
		LOC5 = 0;
		LOC5 = llstreamreadline_177610(s, (&line));
		nimln(94, "syntaxes.nim");
		i = utf8bom_218122(line);
		nimln(95, "syntaxes.nim");
		{
			NIM_BOOL LOC8;
			NIM_BOOL LOC11;
			LOC8 = 0;
			LOC8 = containsshebang_218132(line, i);
			if (!LOC8) goto LA9;
			nimln(96, "syntaxes.nim");
			LOC11 = 0;
			LOC11 = llstreamreadline_177610(s, (&line));
			nimln(97, "syntaxes.nim");
			i = ((NI) 0);
		}
		LA9: ;
		nimln(98, "syntaxes.nim");
		{
			NIM_BOOL LOC14;
			NI TMP3418;
			NI TMP3419;
			Tparser206205 q;
			NimStringDesc* LOC20;
			Tllstream177204* LOC21;
			LOC14 = 0;
			if ((NU)(i) > (NU)(line->Sup.len)) raiseIndexError();
			LOC14 = ((NU8)(line->data[i]) == (NU8)(35));
			if (!(LOC14)) goto LA15;
			TMP3418 = addInt(i, ((NI) 1));
			if ((NU)((NI)(TMP3418)) > (NU)(line->Sup.len)) raiseIndexError();
			LOC14 = ((NU8)(line->data[(NI)(TMP3418)]) == (NU8)(33));
			LA15: ;
			if (!LOC14) goto LA16;
			nimln(99, "syntaxes.nim");
			TMP3419 = addInt(i, ((NI) 2));
			i = (NI)(TMP3419);
			{
				nimln(100, "syntaxes.nim");
				while (1) {
					NI TMP3420;
					if ((NU)(i) > (NU)(line->Sup.len)) raiseIndexError();
					if (!(((NU8)(line->data[i])) == ((NU8)(32)) || ((NU8)(line->data[i])) == ((NU8)(9)) || ((NU8)(line->data[i])) == ((NU8)(11)) || ((NU8)(line->data[i])) == ((NU8)(13)) || ((NU8)(line->data[i])) == ((NU8)(10)) || ((NU8)(line->data[i])) == ((NU8)(12)))) goto LA19;
					TMP3420 = addInt(i, ((NI) 1));
					i = (NI)(TMP3420);
				} LA19: ;
			}
			memset((void*)(&q), 0, sizeof(q));
			objectInit((&q), (&NTI206205));
			nimln(102, "syntaxes.nim");
			LOC20 = 0;
			LOC20 = copyStr(line, i);
			LOC21 = 0;
			LOC21 = llstreamopen_177220(LOC20);
			openparser_206417((&q), filename, LOC21, NIM_FALSE);
			nimln(103, "syntaxes.nim");
			result = parseall_206216((&q));
			nimln(104, "syntaxes.nim");
			closeparser_206223((&q));
		}
		LA16: ;
		nimln(105, "syntaxes.nim");
		llstreamclose_177310(s);
	}
	LA3: ;
	popFrame();
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (a <= i);
		if (!(LOC3)) goto LA4;
		LOC3 = (i <= b);
		LA4: ;
		if (!LOC3) goto LA5;
		result = i;
		goto BeforeRet;
	}
	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, getfilter_218239)(Tident166021* ident) {
	NU8 result;
	nimfr("getFilter", "syntaxes.nim")
{	result = 0;
	{
		NU8 i_218423;
		NI res_218429;
		i_218423 = 0;
		nimln(1598, "system.nim");
		res_218429 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP3421;
				if (!(res_218429 <= ((NI) 3))) goto LA3;
				nimln(1600, "system.nim");
				i_218423 = ((NU8)chckRange(res_218429, ((NU8) 0), ((NU8) 3)));
				nimln(109, "syntaxes.nim");
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = identeq_166484(ident, filternames_218025[(i_218423)- 0]);
					if (!LOC6) goto LA7;
					nimln(110, "syntaxes.nim");
					result = i_218423;
					goto BeforeRet;
				}
				LA7: ;
				nimln(1614, "system.nim");
				TMP3421 = addInt(res_218429, ((NI) 1));
				res_218429 = (NI)(TMP3421);
			} LA3: ;
		}
	}
	nimln(111, "syntaxes.nim");
	result = ((NU8) 0);
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NU8, getparser_218447)(Tident166021* ident) {
	NU8 result;
	nimfr("getParser", "syntaxes.nim")
{	result = 0;
	{
		NU8 i_218623;
		NI res_218629;
		i_218623 = 0;
		nimln(1598, "system.nim");
		res_218629 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP3422;
				if (!(res_218629 <= ((NI) 3))) goto LA3;
				nimln(1600, "system.nim");
				i_218623 = ((NU8)chckRange(res_218629, ((NU8) 0), ((NU8) 3)));
				nimln(115, "syntaxes.nim");
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = identeq_166484(ident, parsernames_218019[(i_218623)- 0]);
					if (!LOC6) goto LA7;
					nimln(116, "syntaxes.nim");
					result = i_218623;
					goto BeforeRet;
				}
				LA7: ;
				nimln(1614, "system.nim");
				TMP3422 = addInt(res_218629, ((NI) 1));
				res_218629 = (NI)(TMP3422);
			} LA3: ;
		}
	}
	nimln(117, "syntaxes.nim");
	rawmessage_163960(((NU16) 30), (*ident).s);
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(Tident166021*, getcallee_218647)(Tnode190813* n) {
	Tident166021* result;
	nimfr("getCallee", "syntaxes.nim")
	result = 0;
	nimln(120, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((*n).kind == ((NU8) 27) || (*n).kind == ((NU8) 29) || (*n).kind == ((NU8) 30) || (*n).kind == ((NU8) 31) || (*n).kind == ((NU8) 26) || (*n).kind == ((NU8) 28) || (*n).kind == ((NU8) 32));
		if (!(LOC3)) goto LA4;
		if (((TMP3423[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3424));
		if ((NU)(((NI) 0)) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
		LOC3 = ((*(*n).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 2));
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(121, "syntaxes.nim");
		if (((TMP3423[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3424));
		if ((NU)(((NI) 0)) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
		if (!(((TMP3425[(*(*n).kindU.S6.sons->data[((NI) 0)]).kind/8] &(1<<((*(*n).kindU.S6.sons->data[((NI) 0)]).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3426));
		result = (*(*n).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident;
	}
	goto LA1;
	LA5: ;
	{
		nimln(122, "syntaxes.nim");
		if (!((*n).kind == ((NU8) 2))) goto LA8;
		nimln(123, "syntaxes.nim");
		if (!(((TMP3425[(*n).kind/8] &(1<<((*n).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3426));
		result = (*n).kindU.S5.ident;
	}
	goto LA1;
	LA8: ;
	{
		NimStringDesc* LOC11;
		nimln(125, "syntaxes.nim");
		LOC11 = 0;
		LOC11 = rendertree_212058(n, 0);
		rawmessage_163960(((NU16) 163), LOC11);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(Tllstream177204*, applyfilter_218689)(Tparsers218035* p, Tnode190813* n, NimStringDesc* filename, Tllstream177204* stdin_218695) {
	Tllstream177204* result;
	Tident166021* ident;
	NU8 f;
	nimfr("applyFilter", "syntaxes.nim")
	result = 0;
	nimln(129, "syntaxes.nim");
	ident = getcallee_218647(n);
	nimln(130, "syntaxes.nim");
	f = getfilter_218239(ident);
	nimln(131, "syntaxes.nim");
	switch (f) {
	case ((NU8) 0):
	{
		nimln(133, "syntaxes.nim");
		(*p).skin = getparser_218447(ident);
		nimln(134, "syntaxes.nim");
		result = stdin_218695;
	}
	break;
	case ((NU8) 1):
	{
		nimln(136, "syntaxes.nim");
		result = filtertmpl_217009(stdin_218695, filename, n);
	}
	break;
	case ((NU8) 3):
	{
		nimln(138, "syntaxes.nim");
		result = filterstrip_216012(stdin_218695, filename, n);
	}
	break;
	case ((NU8) 2):
	{
		nimln(140, "syntaxes.nim");
		result = filterreplace_216004(stdin_218695, filename, n);
	}
	break;
	}
	nimln(141, "syntaxes.nim");
	{
		if (!!((f == ((NU8) 0)))) goto LA7;
		nimln(142, "syntaxes.nim");
		{
			TY143651 LOC13;
			TY143651 LOC14;
			if (!(((NI) 2) <= gverbosity_153137)) goto LA11;
			nimln(143, "syntaxes.nim");
			memset((void*)LOC13, 0, sizeof(LOC13));
			rawmessage_163888(((NU16) 270), LOC13, 0);
			nimln(144, "syntaxes.nim");
			msgwriteln_163536((*result).s);
			nimln(145, "syntaxes.nim");
			memset((void*)LOC14, 0, sizeof(LOC14));
			rawmessage_163888(((NU16) 271), LOC14, 0);
		}
		LA11: ;
	}
	LA7: ;
	popFrame();
	return result;
}

N_NIMCALL(Tllstream177204*, evalpipe_218722)(Tparsers218035* p, Tnode190813* n, NimStringDesc* filename, Tllstream177204* start) {
	Tllstream177204* result;
	nimfr("evalPipe", "syntaxes.nim")
{	result = 0;
	nimln(149, "syntaxes.nim");
	result = start;
	nimln(150, "syntaxes.nim");
	{
		if (!((*n).kind == ((NU8) 1))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	nimln(151, "syntaxes.nim");
	{
		NIM_BOOL LOC7;
		NIM_BOOL LOC8;
		LOC7 = 0;
		LOC8 = 0;
		LOC8 = ((*n).kind == ((NU8) 29));
		if (!(LOC8)) goto LA9;
		if (((TMP3423[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3424));
		if ((NU)(((NI) 0)) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
		LOC8 = ((*(*n).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 2));
		LA9: ;
		LOC7 = LOC8;
		if (!(LOC7)) goto LA10;
		nimln(152, "syntaxes.nim");
		if (((TMP3423[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3424));
		if ((NU)(((NI) 0)) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
		if (!(((TMP3425[(*(*n).kindU.S6.sons->data[((NI) 0)]).kind/8] &(1<<((*(*n).kindU.S6.sons->data[((NI) 0)]).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3426));
		LOC7 = identeq_166484((*(*n).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident, ((NimStringDesc*) &TMP3427));
		LA10: ;
		if (!LOC7) goto LA11;
		{
			NI i_218772;
			NI res_218798;
			i_218772 = 0;
			nimln(1598, "system.nim");
			res_218798 = ((NI) 1);
			{
				nimln(1599, "system.nim");
				while (1) {
					NI TMP3428;
					if (!(res_218798 <= ((NI) 2))) goto LA15;
					nimln(1600, "system.nim");
					i_218772 = res_218798;
					nimln(154, "syntaxes.nim");
					{
						if (((TMP3423[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3424));
						if ((NU)(i_218772) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (!((*(*n).kindU.S6.sons->data[i_218772]).kind == ((NU8) 29))) goto LA18;
						nimln(155, "syntaxes.nim");
						if (((TMP3423[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3424));
						if ((NU)(i_218772) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
						result = evalpipe_218722(p, (*n).kindU.S6.sons->data[i_218772], filename, result);
					}
					goto LA16;
					LA18: ;
					{
						nimln(157, "syntaxes.nim");
						if (((TMP3423[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3424));
						if ((NU)(i_218772) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
						result = applyfilter_218689(p, (*n).kindU.S6.sons->data[i_218772], filename, result);
					}
					LA16: ;
					nimln(1614, "system.nim");
					TMP3428 = addInt(res_218798, ((NI) 1));
					res_218798 = (NI)(TMP3428);
				} LA15: ;
			}
		}
	}
	goto LA5;
	LA11: ;
	{
		nimln(158, "syntaxes.nim");
		if (!((*n).kind == ((NU8) 115))) goto LA22;
		nimln(159, "syntaxes.nim");
		if (((TMP3423[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3424));
		if ((NU)(((NI) 0)) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
		result = evalpipe_218722(p, (*n).kindU.S6.sons->data[((NI) 0)], filename, result);
	}
	goto LA5;
	LA22: ;
	{
		nimln(161, "syntaxes.nim");
		result = applyfilter_218689(p, n, filename, result);
	}
	LA5: ;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, openparsers_218047)(Tparsers218035* p, NI32 fileidx, Tllstream177204* inputstream) {
	Tllstream177204* s;
	NimStringDesc* filename;
	Tnode190813* pipe;
	nimfr("openParsers", "syntaxes.nim")
	s = 0;
	nimln(165, "syntaxes.nim");
	(*p).skin = ((NU8) 0);
	nimln(166, "syntaxes.nim");
	filename = tofullpathconsiderdirty_163407(fileidx);
	nimln(167, "syntaxes.nim");
	pipe = parsepipe_218170(filename, inputstream);
	nimln(168, "syntaxes.nim");
	{
		if (!!((pipe == NIM_NIL))) goto LA3;
		s = evalpipe_218722(p, pipe, filename, inputstream);
	}
	goto LA1;
	LA3: ;
	{
		nimln(169, "syntaxes.nim");
		s = inputstream;
	}
	LA1: ;
	nimln(170, "syntaxes.nim");
	switch ((*p).skin) {
	case ((NU8) 0):
	case ((NU8) 2):
	case ((NU8) 3):
	{
		nimln(172, "syntaxes.nim");
		openparser_206402((&(*p).parser), fileidx, s, NIM_FALSE);
	}
	break;
	case ((NU8) 1):
	{
		nimln(174, "syntaxes.nim");
		openparser_206402((&(*p).parser), fileidx, s, NIM_TRUE);
	}
	break;
	}
	popFrame();
}

N_NIMCALL(void, closeparsers_218056)(Tparsers218035* p) {
	nimfr("closeParsers", "syntaxes.nim")
	nimln(177, "syntaxes.nim");
	closeparser_206223((&(*p).parser));
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, compiler_syntaxesInit)(void) {
	nimfr("syntaxes", "syntaxes.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_syntaxesDatInit)(void) {
static TNimNode* TMP3410[2];
static TNimNode* TMP3411[4];
NI TMP3413;
static char* NIM_CONST TMP3412[4] = {
"skinStandard", 
"skinStrongSpaces", 
"skinBraces", 
"skinEndX"};
static TNimNode TMP2931[8];
NTI218035.size = sizeof(Tparsers218035);
NTI218035.kind = 18;
NTI218035.base = 0;
TMP3410[0] = &TMP2931[1];
NTI218007.size = sizeof(NU8);
NTI218007.kind = 14;
NTI218007.base = 0;
NTI218007.flags = 3;
for (TMP3413 = 0; TMP3413 < 4; TMP3413++) {
TMP2931[TMP3413+2].kind = 1;
TMP2931[TMP3413+2].offset = TMP3413;
TMP2931[TMP3413+2].name = TMP3412[TMP3413];
TMP3411[TMP3413] = &TMP2931[TMP3413+2];
}
TMP2931[6].len = 4; TMP2931[6].kind = 2; TMP2931[6].sons = &TMP3411[0];
NTI218007.node = &TMP2931[6];
TMP2931[1].kind = 1;
TMP2931[1].offset = offsetof(Tparsers218035, skin);
TMP2931[1].typ = (&NTI218007);
TMP2931[1].name = "skin";
TMP3410[1] = &TMP2931[7];
TMP2931[7].kind = 1;
TMP2931[7].offset = offsetof(Tparsers218035, parser);
TMP2931[7].typ = (&NTI206205);
TMP2931[7].name = "parser";
TMP2931[0].len = 2; TMP2931[0].kind = 2; TMP2931[0].sons = &TMP3410[0];
NTI218035.node = &TMP2931[0];
}

