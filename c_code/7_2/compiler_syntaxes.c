/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode189813 Tnode189813;
typedef struct Tparsers217035 Tparsers217035;
typedef struct Tparser205205 Tparser205205;
typedef struct Tlexer179185 Tlexer179185;
typedef struct Tbaselexer177024 Tbaselexer177024;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tllstream176204 Tllstream176204;
typedef struct Tlineinfo161338 Tlineinfo161338;
typedef struct Ttoken179181 Ttoken179181;
typedef struct Tident165021 Tident165021;
typedef struct Tidobj165015 Tidobj165015;
typedef struct Ttype189849 Ttype189849;
typedef struct Tsym189843 Tsym189843;
typedef struct Tnodeseq189807 Tnodeseq189807;
typedef struct Ttypeseq189845 Ttypeseq189845;
typedef struct Tloc189827 Tloc189827;
typedef struct Ropeobj159009 Ropeobj159009;
typedef struct Tscope189837 Tscope189837;
typedef struct TY189944 TY189944;
typedef struct Tstrtable189817 Tstrtable189817;
typedef struct Tsymseq189815 Tsymseq189815;
typedef struct Tlib189831 Tlib189831;
typedef struct Tinstantiation189833 Tinstantiation189833;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct TY189933 TY189933;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY217020[4];
typedef NimStringDesc* TY217026[4];
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
struct  Tbaselexer177024  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Tllstream176204* stream;
NI linenumber;
NI sentinel;
NI linestart;
};
struct  Tlineinfo161338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Tlineinfo161338 info, NU16 msg, NimStringDesc* arg, void* ClEnv);
void* ClEnv;
} Terrorhandler179183;
struct  Tlexer179185  {
  Tbaselexer177024 Sup;
NI32 fileidx;
NI indentahead;
NI currlineindent;
NIM_BOOL strongspaces;
Terrorhandler179183 errorhandler;
};
struct  Ttoken179181  {
NU8 toktype;
NI indent;
Tident165021* ident;
NI64 inumber;
NF fnumber;
NU8 base;
NI8 strongspacea;
NI8 strongspaceb;
NimStringDesc* literal;
NI line;
NI col;
};
struct  Tparser205205  {
NI currind;
NIM_BOOL firsttok;
NIM_BOOL strongspaces;
Tlexer179185 lex;
Ttoken179181 tok;
NI inpragma;
NI insemistmtlist;
};
struct  Tparsers217035  {
NU8 skin;
Tparser205205 parser;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tidobj165015  {
  TNimObject Sup;
NI id;
};
struct  Tident165021  {
  Tidobj165015 Sup;
NimStringDesc* s;
Tident165021* next;
NI h;
};
struct  Tnode189813  {
Ttype189849* typ;
Tlineinfo161338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym189843* sym;
} S4;
struct {Tident165021* ident;
} S5;
struct {Tnodeseq189807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef NU8 TY190031[20];
typedef NimStringDesc* TY142637[1];
struct  Tllstream176204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
struct  Tloc189827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype189849* t;
Ropeobj159009* r;
Ropeobj159009* heaproot;
};
struct  Ttype189849  {
  Tidobj165015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq189845* sons;
Tnode189813* n;
Tsym189843* owner;
Tsym189843* sym;
Tsym189843* destructor;
Tsym189843* deepcopy;
Tsym189843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc189827 loc;
};
struct  Tstrtable189817  {
NI counter;
Tsymseq189815* data;
};
struct  Tsym189843  {
  Tidobj165015 Sup;
NU8 kind;
union{
struct {Ttypeseq189845* typeinstcache;
Tscope189837* typscope;
} S1;
struct {TY189944* procinstcache;
Tsym189843* gcunsafetyreason;
} S2;
struct {TY189944* usedgenerics;
Tstrtable189817 tab;
} S3;
struct {Tsym189843* guard;
} S4;
} kindU;
NU16 magic;
Ttype189849* typ;
Tident165021* name;
Tlineinfo161338 info;
Tsym189843* owner;
NU32 flags;
Tnode189813* ast;
NU32 options;
NI position;
NI offset;
Tloc189827 loc;
Tlib189831* annex;
Tnode189813* constraint;
};
struct  Ropeobj159009  {
  TNimObject Sup;
Ropeobj159009* left;
Ropeobj159009* right;
NI length;
NimStringDesc* data;
};
struct  Tscope189837  {
NI depthlevel;
Tstrtable189817 symbols;
Tnodeseq189807* usingsyms;
Tscope189837* parent;
};
struct  Tlistentry129022  {
  TNimObject Sup;
Tlistentry129022* prev;
Tlistentry129022* next;
};
struct  Tlib189831  {
  Tlistentry129022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj159009* name;
Tnode189813* path;
};
struct  Tinstantiation189833  {
Tsym189843* sym;
Ttypeseq189845* concretetypes;
TY189933* usedby;
};
struct Tnodeseq189807 {
  TGenericSeq Sup;
  Tnode189813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq189845 {
  TGenericSeq Sup;
  Ttype189849* data[SEQ_DECL_SIZE];
};
struct TY189944 {
  TGenericSeq Sup;
  Tinstantiation189833* data[SEQ_DECL_SIZE];
};
struct Tsymseq189815 {
  TGenericSeq Sup;
  Tsym189843* data[SEQ_DECL_SIZE];
};
struct TY189933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tnode189813*, parsefile_217041)(NI32 fileidx);
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(NimStringDesc*, tofullpathconsiderdirty_162407)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, open_13203)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(void, rawmessage_162960)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tllstream176204*, llstreamopen_176238)(FILE* f);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(Tnode189813*, parseall_217063)(Tparsers217035* p);
N_NIMCALL(Tnode189813*, parseall_205216)(Tparser205205* p);
N_NIMCALL(Tnode189813*, parseall_210009)(Tparser205205* p);
N_NIMCALL(void, internalerror_163218)(NimStringDesc* errmsg);
N_NIMCALL(Tnode189813*, parsetoplevelstmt_217070)(Tparsers217035* p);
N_NIMCALL(Tnode189813*, parsetoplevelstmt_205230)(Tparser205205* p);
N_NIMCALL(Tnode189813*, parsetoplevelstmt_210020)(Tparser205205* p);
N_NIMCALL(NI, utf8bom_217122)(NimStringDesc* s);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, containsshebang_217132)(NimStringDesc* s, NI i);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(Tnode189813*, parsepipe_217170)(NimStringDesc* filename, Tllstream176204* inputstream);
N_NIMCALL(Tllstream176204*, llstreamopen_176256)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_176610)(Tllstream176204* s, NimStringDesc** line);
N_NIMCALL(void, openparser_205417)(Tparser205205* p, NimStringDesc* filename, Tllstream176204* inputstream, NIM_BOOL strongspaces);
N_NIMCALL(Tllstream176204*, llstreamopen_176220)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(void, closeparser_205223)(Tparser205205* p);
N_NIMCALL(void, llstreamclose_176310)(Tllstream176204* s);
N_NIMCALL(NU8, getfilter_217239)(Tident165021* ident);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NIM_BOOL, identeq_165484)(Tident165021* id, NimStringDesc* name);
N_NIMCALL(NU8, getparser_217447)(Tident165021* ident);
N_NIMCALL(Tident165021*, getcallee_217647)(Tnode189813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, rendertree_211058)(Tnode189813* n, NU8 renderflags);
N_NIMCALL(Tllstream176204*, applyfilter_217689)(Tparsers217035* p, Tnode189813* n, NimStringDesc* filename, Tllstream176204* stdin_217695);
N_NIMCALL(Tllstream176204*, filtertmpl_216009)(Tllstream176204* stdin_216011, NimStringDesc* filename, Tnode189813* call);
N_NIMCALL(Tllstream176204*, filterstrip_215012)(Tllstream176204* stdin_215014, NimStringDesc* filename, Tnode189813* call);
N_NIMCALL(Tllstream176204*, filterreplace_215004)(Tllstream176204* stdin_215006, NimStringDesc* filename, Tnode189813* call);
N_NIMCALL(void, rawmessage_162888)(NU16 msg, NimStringDesc** args, NI argsLen0);
N_NIMCALL(void, msgwriteln_162536)(NimStringDesc* s);
N_NIMCALL(Tllstream176204*, evalpipe_217722)(Tparsers217035* p, Tnode189813* n, NimStringDesc* filename, Tllstream176204* start);
N_NIMCALL(void, openparsers_217047)(Tparsers217035* p, NI32 fileidx, Tllstream176204* inputstream);
N_NIMCALL(void, openparser_205402)(Tparser205205* p, NI32 fileidx, Tllstream176204* inputstream, NIM_BOOL strongspaces);
N_NIMCALL(void, closeparsers_217056)(Tparsers217035* p);
STRING_LITERAL(TMP3400, "standard", 8);
STRING_LITERAL(TMP3401, "strongspaces", 12);
STRING_LITERAL(TMP3402, "braces", 6);
STRING_LITERAL(TMP3403, "endx", 4);
NIM_CONST TY217020 parsernames_217019 = {((NimStringDesc*) &TMP3400),
((NimStringDesc*) &TMP3401),
((NimStringDesc*) &TMP3402),
((NimStringDesc*) &TMP3403)}
;
STRING_LITERAL(TMP3404, "none", 4);
STRING_LITERAL(TMP3405, "stdtmpl", 7);
STRING_LITERAL(TMP3406, "replace", 7);
STRING_LITERAL(TMP3407, "strip", 5);
NIM_CONST TY217026 filternames_217025 = {((NimStringDesc*) &TMP3404),
((NimStringDesc*) &TMP3405),
((NimStringDesc*) &TMP3406),
((NimStringDesc*) &TMP3407)}
;
STRING_LITERAL(TMP3412, "parser to implement", 19);
static NIM_CONST TY190031 TMP3421 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3422, "sons", 4);
static NIM_CONST TY190031 TMP3423 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3424, "ident", 5);
STRING_LITERAL(TMP3425, "|", 1);
TNimType NTI217035; /* TParsers */
TNimType NTI217007; /* TParserKind */
extern TNimType NTI205205; /* TParser */
extern TFrame* frameptr_17042;
extern Tnode189813* emptynode_190807;
extern NI gverbosity_152137;

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

N_NIMCALL(Tnode189813*, parsefile_217041)(NI32 fileidx) {
	Tnode189813* result;
	Tparsers217035 p;
	FILE* f;
	NimStringDesc* filename;
	Tllstream176204* LOC6;
	nimfr("parseFile", "syntaxes.nim")
{	result = 0;
	memset((void*)(&p), 0, sizeof(p));
	objectInit((&p), (&NTI217035));
	f = 0;
	nimln(48, "syntaxes.nim");
	filename = tofullpathconsiderdirty_162407(fileidx);
	nimln(49, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_13203(&f, filename, ((NU8) 0), ((NI) -1));
		if (!!(LOC3)) goto LA4;
		nimln(50, "syntaxes.nim");
		rawmessage_162960(((NU16) 3), filename);
		nimln(51, "syntaxes.nim");
		goto BeforeRet;
	}
	LA4: ;
	nimln(52, "syntaxes.nim");
	LOC6 = 0;
	LOC6 = llstreamopen_176238(f);
	openparsers_217047((&p), fileidx, LOC6);
	nimln(53, "syntaxes.nim");
	result = parseall_217063((&p));
	nimln(54, "syntaxes.nim");
	closeparsers_217056((&p));
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(Tnode189813*, parseall_217063)(Tparsers217035* p) {
	Tnode189813* result;
	nimfr("parseAll", "syntaxes.nim")
	result = 0;
	nimln(57, "syntaxes.nim");
	switch ((*p).skin) {
	case ((NU8) 0):
	case ((NU8) 1):
	{
		nimln(59, "syntaxes.nim");
		result = parseall_205216((&(*p).parser));
	}
	break;
	case ((NU8) 2):
	{
		nimln(61, "syntaxes.nim");
		result = parseall_210009((&(*p).parser));
	}
	break;
	case ((NU8) 3):
	{
		nimln(63, "syntaxes.nim");
		internalerror_163218(((NimStringDesc*) &TMP3412));
		nimln(64, "syntaxes.nim");
		result = emptynode_190807;
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(Tnode189813*, parsetoplevelstmt_217070)(Tparsers217035* p) {
	Tnode189813* result;
	nimfr("parseTopLevelStmt", "syntaxes.nim")
	result = 0;
	nimln(67, "syntaxes.nim");
	switch ((*p).skin) {
	case ((NU8) 0):
	case ((NU8) 1):
	{
		nimln(69, "syntaxes.nim");
		result = parsetoplevelstmt_205230((&(*p).parser));
	}
	break;
	case ((NU8) 2):
	{
		nimln(71, "syntaxes.nim");
		result = parsetoplevelstmt_210020((&(*p).parser));
	}
	break;
	case ((NU8) 3):
	{
		nimln(73, "syntaxes.nim");
		internalerror_163218(((NimStringDesc*) &TMP3412));
		nimln(74, "syntaxes.nim");
		result = emptynode_190807;
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(NI, utf8bom_217122)(NimStringDesc* s) {
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
	result = (NI)((NU64)(a) + (NU64)(b));
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

N_NIMCALL(NIM_BOOL, containsshebang_217132)(NimStringDesc* s, NI i) {
	NIM_BOOL result;
	nimfr("containsShebang", "syntaxes.nim")
	result = 0;
	nimln(83, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		NI TMP3413;
		NI j;
		NI TMP3414;
		LOC3 = 0;
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		LOC3 = ((NU8)(s->data[i]) == (NU8)(35));
		if (!(LOC3)) goto LA4;
		TMP3413 = addInt(i, ((NI) 1));
		if ((NU)((NI)(TMP3413)) > (NU)(s->Sup.len)) raiseIndexError();
		LOC3 = ((NU8)(s->data[(NI)(TMP3413)]) == (NU8)(33));
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(84, "syntaxes.nim");
		TMP3414 = addInt(i, ((NI) 2));
		j = (NI)(TMP3414);
		{
			nimln(85, "syntaxes.nim");
			while (1) {
				NI TMP3415;
				if ((NU)(j) > (NU)(s->Sup.len)) raiseIndexError();
				if (!(((NU8)(s->data[j])) == ((NU8)(32)) || ((NU8)(s->data[j])) == ((NU8)(9)) || ((NU8)(s->data[j])) == ((NU8)(11)) || ((NU8)(s->data[j])) == ((NU8)(13)) || ((NU8)(s->data[j])) == ((NU8)(10)) || ((NU8)(s->data[j])) == ((NU8)(12)))) goto LA8;
				TMP3415 = addInt(j, ((NI) 1));
				j = (NI)(TMP3415);
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

N_NIMCALL(Tnode189813*, parsepipe_217170)(NimStringDesc* filename, Tllstream176204* inputstream) {
	Tnode189813* result;
	Tllstream176204* s;
	nimfr("parsePipe", "syntaxes.nim")
	result = 0;
	nimln(89, "syntaxes.nim");
	result = emptynode_190807;
	nimln(90, "syntaxes.nim");
	s = llstreamopen_176256(filename, ((NU8) 0));
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
		LOC5 = llstreamreadline_176610(s, (&line));
		nimln(94, "syntaxes.nim");
		i = utf8bom_217122(line);
		nimln(95, "syntaxes.nim");
		{
			NIM_BOOL LOC8;
			NIM_BOOL LOC11;
			LOC8 = 0;
			LOC8 = containsshebang_217132(line, i);
			if (!LOC8) goto LA9;
			nimln(96, "syntaxes.nim");
			LOC11 = 0;
			LOC11 = llstreamreadline_176610(s, (&line));
			nimln(97, "syntaxes.nim");
			i = ((NI) 0);
		}
		LA9: ;
		nimln(98, "syntaxes.nim");
		{
			NIM_BOOL LOC14;
			NI TMP3416;
			NI TMP3417;
			Tparser205205 q;
			NimStringDesc* LOC20;
			Tllstream176204* LOC21;
			LOC14 = 0;
			if ((NU)(i) > (NU)(line->Sup.len)) raiseIndexError();
			LOC14 = ((NU8)(line->data[i]) == (NU8)(35));
			if (!(LOC14)) goto LA15;
			TMP3416 = addInt(i, ((NI) 1));
			if ((NU)((NI)(TMP3416)) > (NU)(line->Sup.len)) raiseIndexError();
			LOC14 = ((NU8)(line->data[(NI)(TMP3416)]) == (NU8)(33));
			LA15: ;
			if (!LOC14) goto LA16;
			nimln(99, "syntaxes.nim");
			TMP3417 = addInt(i, ((NI) 2));
			i = (NI)(TMP3417);
			{
				nimln(100, "syntaxes.nim");
				while (1) {
					NI TMP3418;
					if ((NU)(i) > (NU)(line->Sup.len)) raiseIndexError();
					if (!(((NU8)(line->data[i])) == ((NU8)(32)) || ((NU8)(line->data[i])) == ((NU8)(9)) || ((NU8)(line->data[i])) == ((NU8)(11)) || ((NU8)(line->data[i])) == ((NU8)(13)) || ((NU8)(line->data[i])) == ((NU8)(10)) || ((NU8)(line->data[i])) == ((NU8)(12)))) goto LA19;
					TMP3418 = addInt(i, ((NI) 1));
					i = (NI)(TMP3418);
				} LA19: ;
			}
			memset((void*)(&q), 0, sizeof(q));
			objectInit((&q), (&NTI205205));
			nimln(102, "syntaxes.nim");
			LOC20 = 0;
			LOC20 = copyStr(line, i);
			LOC21 = 0;
			LOC21 = llstreamopen_176220(LOC20);
			openparser_205417((&q), filename, LOC21, NIM_FALSE);
			nimln(103, "syntaxes.nim");
			result = parseall_205216((&q));
			nimln(104, "syntaxes.nim");
			closeparser_205223((&q));
		}
		LA16: ;
		nimln(105, "syntaxes.nim");
		llstreamclose_176310(s);
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

N_NIMCALL(NU8, getfilter_217239)(Tident165021* ident) {
	NU8 result;
	nimfr("getFilter", "syntaxes.nim")
{	result = 0;
	{
		NU8 i_217423;
		NI res_217429;
		i_217423 = 0;
		nimln(1598, "system.nim");
		res_217429 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP3419;
				if (!(res_217429 <= ((NI) 3))) goto LA3;
				nimln(1600, "system.nim");
				i_217423 = ((NU8)chckRange(res_217429, ((NU8) 0), ((NU8) 3)));
				nimln(109, "syntaxes.nim");
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = identeq_165484(ident, filternames_217025[(i_217423)- 0]);
					if (!LOC6) goto LA7;
					nimln(110, "syntaxes.nim");
					result = i_217423;
					goto BeforeRet;
				}
				LA7: ;
				nimln(1614, "system.nim");
				TMP3419 = addInt(res_217429, ((NI) 1));
				res_217429 = (NI)(TMP3419);
			} LA3: ;
		}
	}
	nimln(111, "syntaxes.nim");
	result = ((NU8) 0);
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NU8, getparser_217447)(Tident165021* ident) {
	NU8 result;
	nimfr("getParser", "syntaxes.nim")
{	result = 0;
	{
		NU8 i_217623;
		NI res_217629;
		i_217623 = 0;
		nimln(1598, "system.nim");
		res_217629 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP3420;
				if (!(res_217629 <= ((NI) 3))) goto LA3;
				nimln(1600, "system.nim");
				i_217623 = ((NU8)chckRange(res_217629, ((NU8) 0), ((NU8) 3)));
				nimln(115, "syntaxes.nim");
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = identeq_165484(ident, parsernames_217019[(i_217623)- 0]);
					if (!LOC6) goto LA7;
					nimln(116, "syntaxes.nim");
					result = i_217623;
					goto BeforeRet;
				}
				LA7: ;
				nimln(1614, "system.nim");
				TMP3420 = addInt(res_217629, ((NI) 1));
				res_217629 = (NI)(TMP3420);
			} LA3: ;
		}
	}
	nimln(117, "syntaxes.nim");
	rawmessage_162960(((NU16) 30), (*ident).s);
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(Tident165021*, getcallee_217647)(Tnode189813* n) {
	Tident165021* result;
	nimfr("getCallee", "syntaxes.nim")
	result = 0;
	nimln(120, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((*n).kind == ((NU8) 27) || (*n).kind == ((NU8) 29) || (*n).kind == ((NU8) 30) || (*n).kind == ((NU8) 31) || (*n).kind == ((NU8) 26) || (*n).kind == ((NU8) 28) || (*n).kind == ((NU8) 32));
		if (!(LOC3)) goto LA4;
		if (((TMP3421[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3422));
		if ((NU)(((NI) 0)) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
		LOC3 = ((*(*n).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 2));
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(121, "syntaxes.nim");
		if (((TMP3421[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3422));
		if ((NU)(((NI) 0)) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
		if (!(((TMP3423[(*(*n).kindU.S6.sons->data[((NI) 0)]).kind/8] &(1<<((*(*n).kindU.S6.sons->data[((NI) 0)]).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3424));
		result = (*(*n).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident;
	}
	goto LA1;
	LA5: ;
	{
		nimln(122, "syntaxes.nim");
		if (!((*n).kind == ((NU8) 2))) goto LA8;
		nimln(123, "syntaxes.nim");
		if (!(((TMP3423[(*n).kind/8] &(1<<((*n).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3424));
		result = (*n).kindU.S5.ident;
	}
	goto LA1;
	LA8: ;
	{
		NimStringDesc* LOC11;
		nimln(125, "syntaxes.nim");
		LOC11 = 0;
		LOC11 = rendertree_211058(n, 0);
		rawmessage_162960(((NU16) 163), LOC11);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(Tllstream176204*, applyfilter_217689)(Tparsers217035* p, Tnode189813* n, NimStringDesc* filename, Tllstream176204* stdin_217695) {
	Tllstream176204* result;
	Tident165021* ident;
	NU8 f;
	nimfr("applyFilter", "syntaxes.nim")
	result = 0;
	nimln(129, "syntaxes.nim");
	ident = getcallee_217647(n);
	nimln(130, "syntaxes.nim");
	f = getfilter_217239(ident);
	nimln(131, "syntaxes.nim");
	switch (f) {
	case ((NU8) 0):
	{
		nimln(133, "syntaxes.nim");
		(*p).skin = getparser_217447(ident);
		nimln(134, "syntaxes.nim");
		result = stdin_217695;
	}
	break;
	case ((NU8) 1):
	{
		nimln(136, "syntaxes.nim");
		result = filtertmpl_216009(stdin_217695, filename, n);
	}
	break;
	case ((NU8) 3):
	{
		nimln(138, "syntaxes.nim");
		result = filterstrip_215012(stdin_217695, filename, n);
	}
	break;
	case ((NU8) 2):
	{
		nimln(140, "syntaxes.nim");
		result = filterreplace_215004(stdin_217695, filename, n);
	}
	break;
	}
	nimln(141, "syntaxes.nim");
	{
		if (!!((f == ((NU8) 0)))) goto LA7;
		nimln(142, "syntaxes.nim");
		{
			TY142637 LOC13;
			TY142637 LOC14;
			if (!(((NI) 2) <= gverbosity_152137)) goto LA11;
			nimln(143, "syntaxes.nim");
			memset((void*)LOC13, 0, sizeof(LOC13));
			rawmessage_162888(((NU16) 270), LOC13, 0);
			nimln(144, "syntaxes.nim");
			msgwriteln_162536((*result).s);
			nimln(145, "syntaxes.nim");
			memset((void*)LOC14, 0, sizeof(LOC14));
			rawmessage_162888(((NU16) 271), LOC14, 0);
		}
		LA11: ;
	}
	LA7: ;
	popFrame();
	return result;
}

N_NIMCALL(Tllstream176204*, evalpipe_217722)(Tparsers217035* p, Tnode189813* n, NimStringDesc* filename, Tllstream176204* start) {
	Tllstream176204* result;
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
		if (((TMP3421[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3422));
		if ((NU)(((NI) 0)) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
		LOC8 = ((*(*n).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 2));
		LA9: ;
		LOC7 = LOC8;
		if (!(LOC7)) goto LA10;
		nimln(152, "syntaxes.nim");
		if (((TMP3421[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3422));
		if ((NU)(((NI) 0)) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
		if (!(((TMP3423[(*(*n).kindU.S6.sons->data[((NI) 0)]).kind/8] &(1<<((*(*n).kindU.S6.sons->data[((NI) 0)]).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3424));
		LOC7 = identeq_165484((*(*n).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident, ((NimStringDesc*) &TMP3425));
		LA10: ;
		if (!LOC7) goto LA11;
		{
			NI i_217772;
			NI res_217798;
			i_217772 = 0;
			nimln(1598, "system.nim");
			res_217798 = ((NI) 1);
			{
				nimln(1599, "system.nim");
				while (1) {
					NI TMP3426;
					if (!(res_217798 <= ((NI) 2))) goto LA15;
					nimln(1600, "system.nim");
					i_217772 = res_217798;
					nimln(154, "syntaxes.nim");
					{
						if (((TMP3421[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3422));
						if ((NU)(i_217772) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (!((*(*n).kindU.S6.sons->data[i_217772]).kind == ((NU8) 29))) goto LA18;
						nimln(155, "syntaxes.nim");
						if (((TMP3421[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3422));
						if ((NU)(i_217772) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
						result = evalpipe_217722(p, (*n).kindU.S6.sons->data[i_217772], filename, result);
					}
					goto LA16;
					LA18: ;
					{
						nimln(157, "syntaxes.nim");
						if (((TMP3421[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3422));
						if ((NU)(i_217772) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
						result = applyfilter_217689(p, (*n).kindU.S6.sons->data[i_217772], filename, result);
					}
					LA16: ;
					nimln(1614, "system.nim");
					TMP3426 = addInt(res_217798, ((NI) 1));
					res_217798 = (NI)(TMP3426);
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
		if (((TMP3421[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3422));
		if ((NU)(((NI) 0)) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
		result = evalpipe_217722(p, (*n).kindU.S6.sons->data[((NI) 0)], filename, result);
	}
	goto LA5;
	LA22: ;
	{
		nimln(161, "syntaxes.nim");
		result = applyfilter_217689(p, n, filename, result);
	}
	LA5: ;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, openparsers_217047)(Tparsers217035* p, NI32 fileidx, Tllstream176204* inputstream) {
	Tllstream176204* s;
	NimStringDesc* filename;
	Tnode189813* pipe;
	nimfr("openParsers", "syntaxes.nim")
	s = 0;
	nimln(165, "syntaxes.nim");
	(*p).skin = ((NU8) 0);
	nimln(166, "syntaxes.nim");
	filename = tofullpathconsiderdirty_162407(fileidx);
	nimln(167, "syntaxes.nim");
	pipe = parsepipe_217170(filename, inputstream);
	nimln(168, "syntaxes.nim");
	{
		if (!!((pipe == NIM_NIL))) goto LA3;
		s = evalpipe_217722(p, pipe, filename, inputstream);
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
		openparser_205402((&(*p).parser), fileidx, s, NIM_FALSE);
	}
	break;
	case ((NU8) 1):
	{
		nimln(174, "syntaxes.nim");
		openparser_205402((&(*p).parser), fileidx, s, NIM_TRUE);
	}
	break;
	}
	popFrame();
}

N_NIMCALL(void, closeparsers_217056)(Tparsers217035* p) {
	nimfr("closeParsers", "syntaxes.nim")
	nimln(177, "syntaxes.nim");
	closeparser_205223((&(*p).parser));
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, compiler_syntaxesInit)(void) {
	nimfr("syntaxes", "syntaxes.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_syntaxesDatInit)(void) {
static TNimNode* TMP3408[2];
static TNimNode* TMP3409[4];
NI TMP3411;
static char* NIM_CONST TMP3410[4] = {
"skinStandard", 
"skinStrongSpaces", 
"skinBraces", 
"skinEndX"};
static TNimNode TMP2929[8];
NTI217035.size = sizeof(Tparsers217035);
NTI217035.kind = 18;
NTI217035.base = 0;
TMP3408[0] = &TMP2929[1];
NTI217007.size = sizeof(NU8);
NTI217007.kind = 14;
NTI217007.base = 0;
NTI217007.flags = 3;
for (TMP3411 = 0; TMP3411 < 4; TMP3411++) {
TMP2929[TMP3411+2].kind = 1;
TMP2929[TMP3411+2].offset = TMP3411;
TMP2929[TMP3411+2].name = TMP3410[TMP3411];
TMP3409[TMP3411] = &TMP2929[TMP3411+2];
}
TMP2929[6].len = 4; TMP2929[6].kind = 2; TMP2929[6].sons = &TMP3409[0];
NTI217007.node = &TMP2929[6];
TMP2929[1].kind = 1;
TMP2929[1].offset = offsetof(Tparsers217035, skin);
TMP2929[1].typ = (&NTI217007);
TMP2929[1].name = "skin";
TMP3408[1] = &TMP2929[7];
TMP2929[7].kind = 1;
TMP2929[7].offset = offsetof(Tparsers217035, parser);
TMP2929[7].typ = (&NTI205205);
TMP2929[7].name = "parser";
TMP2929[0].len = 2; TMP2929[0].kind = 2; TMP2929[0].sons = &TMP3408[0];
NTI217035.node = &TMP2929[0];
}

