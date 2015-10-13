/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode191813 Tnode191813;
typedef struct Tparsers219035 Tparsers219035;
typedef struct Tparser207205 Tparser207205;
typedef struct Tlexer181185 Tlexer181185;
typedef struct Tbaselexer179024 Tbaselexer179024;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tllstream178204 Tllstream178204;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct Ttoken181181 Ttoken181181;
typedef struct Tident167021 Tident167021;
typedef struct Tidobj167015 Tidobj167015;
typedef struct Ttype191849 Ttype191849;
typedef struct Tsym191843 Tsym191843;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Tlib191831 Tlib191831;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TY191933 TY191933;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY219020[4];
typedef NimStringDesc* TY219026[4];
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
struct  Tbaselexer179024  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Tllstream178204* stream;
NI linenumber;
NI sentinel;
NI linestart;
};
struct  Tlineinfo163338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Tlineinfo163338 info, NU16 msg, NimStringDesc* arg, void* ClEnv);
void* ClEnv;
} Terrorhandler181183;
struct  Tlexer181185  {
  Tbaselexer179024 Sup;
NI32 fileidx;
NI indentahead;
NI currlineindent;
NIM_BOOL strongspaces;
Terrorhandler181183 errorhandler;
};
struct  Ttoken181181  {
NU8 toktype;
NI indent;
Tident167021* ident;
NI64 inumber;
NF fnumber;
NU8 base;
NI8 strongspacea;
NI8 strongspaceb;
NimStringDesc* literal;
NI line;
NI col;
};
struct  Tparser207205  {
NI currind;
NIM_BOOL firsttok;
NIM_BOOL strongspaces;
Tlexer181185 lex;
Ttoken181181 tok;
NI inpragma;
NI insemistmtlist;
};
struct  Tparsers219035  {
NU8 skin;
Tparser207205 parser;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
};
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
};
struct  Tnode191813  {
Ttype191849* typ;
Tlineinfo163338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym191843* sym;
} S4;
struct {Tident167021* ident;
} S5;
struct {Tnodeseq191807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef NU8 TY192031[20];
typedef NimStringDesc* TY144651[1];
struct  Tllstream178204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
struct  Tloc191827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype191849* t;
Ropeobj161009* r;
Ropeobj161009* heaproot;
};
struct  Ttype191849  {
  Tidobj167015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq191845* sons;
Tnode191813* n;
Tsym191843* owner;
Tsym191843* sym;
Tsym191843* destructor;
Tsym191843* deepcopy;
Tsym191843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc191827 loc;
};
struct  Tstrtable191817  {
NI counter;
Tsymseq191815* data;
};
struct  Tsym191843  {
  Tidobj167015 Sup;
NU8 kind;
union{
struct {Ttypeseq191845* typeinstcache;
Tscope191837* typscope;
} S1;
struct {TY191944* procinstcache;
Tsym191843* gcunsafetyreason;
} S2;
struct {TY191944* usedgenerics;
Tstrtable191817 tab;
} S3;
struct {Tsym191843* guard;
} S4;
} kindU;
NU16 magic;
Ttype191849* typ;
Tident167021* name;
Tlineinfo163338 info;
Tsym191843* owner;
NU32 flags;
Tnode191813* ast;
NU32 options;
NI position;
NI offset;
Tloc191827 loc;
Tlib191831* annex;
Tnode191813* constraint;
};
struct  Ropeobj161009  {
  TNimObject Sup;
Ropeobj161009* left;
Ropeobj161009* right;
NI length;
NimStringDesc* data;
};
struct  Tscope191837  {
NI depthlevel;
Tstrtable191817 symbols;
Tnodeseq191807* usingsyms;
Tscope191837* parent;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tlib191831  {
  Tlistentry130022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj161009* name;
Tnode191813* path;
};
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
};
struct Tnodeseq191807 {
  TGenericSeq Sup;
  Tnode191813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq191845 {
  TGenericSeq Sup;
  Ttype191849* data[SEQ_DECL_SIZE];
};
struct TY191944 {
  TGenericSeq Sup;
  Tinstantiation191833* data[SEQ_DECL_SIZE];
};
struct Tsymseq191815 {
  TGenericSeq Sup;
  Tsym191843* data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tnode191813*, parsefile_219041)(NI32 fileidx);
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(NimStringDesc*, tofullpathconsiderdirty_164407)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, open_13203)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(void, rawmessage_164960)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tllstream178204*, llstreamopen_178238)(FILE* f);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(Tnode191813*, parseall_219063)(Tparsers219035* p);
N_NIMCALL(Tnode191813*, parseall_207216)(Tparser207205* p);
N_NIMCALL(Tnode191813*, parseall_212009)(Tparser207205* p);
N_NIMCALL(void, internalerror_165218)(NimStringDesc* errmsg);
N_NIMCALL(Tnode191813*, parsetoplevelstmt_219070)(Tparsers219035* p);
N_NIMCALL(Tnode191813*, parsetoplevelstmt_207230)(Tparser207205* p);
N_NIMCALL(Tnode191813*, parsetoplevelstmt_212020)(Tparser207205* p);
N_NIMCALL(NI, utf8bom_219122)(NimStringDesc* s);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, containsshebang_219132)(NimStringDesc* s, NI i);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(Tnode191813*, parsepipe_219170)(NimStringDesc* filename, Tllstream178204* inputstream);
N_NIMCALL(Tllstream178204*, llstreamopen_178256)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_178610)(Tllstream178204* s, NimStringDesc** line);
N_NIMCALL(void, openparser_207417)(Tparser207205* p, NimStringDesc* filename, Tllstream178204* inputstream, NIM_BOOL strongspaces);
N_NIMCALL(Tllstream178204*, llstreamopen_178220)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(void, closeparser_207223)(Tparser207205* p);
N_NIMCALL(void, llstreamclose_178310)(Tllstream178204* s);
N_NIMCALL(NU8, getfilter_219239)(Tident167021* ident);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NIM_BOOL, identeq_167484)(Tident167021* id, NimStringDesc* name);
N_NIMCALL(NU8, getparser_219447)(Tident167021* ident);
N_NIMCALL(Tident167021*, getcallee_219647)(Tnode191813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, rendertree_213058)(Tnode191813* n, NU8 renderflags);
N_NIMCALL(Tllstream178204*, applyfilter_219689)(Tparsers219035* p, Tnode191813* n, NimStringDesc* filename, Tllstream178204* stdin_219695);
N_NIMCALL(Tllstream178204*, filtertmpl_218009)(Tllstream178204* stdin_218011, NimStringDesc* filename, Tnode191813* call);
N_NIMCALL(Tllstream178204*, filterstrip_217012)(Tllstream178204* stdin_217014, NimStringDesc* filename, Tnode191813* call);
N_NIMCALL(Tllstream178204*, filterreplace_217004)(Tllstream178204* stdin_217006, NimStringDesc* filename, Tnode191813* call);
N_NIMCALL(void, rawmessage_164888)(NU16 msg, NimStringDesc** args, NI argsLen0);
N_NIMCALL(void, msgwriteln_164536)(NimStringDesc* s);
N_NIMCALL(Tllstream178204*, evalpipe_219722)(Tparsers219035* p, Tnode191813* n, NimStringDesc* filename, Tllstream178204* start);
N_NIMCALL(void, openparsers_219047)(Tparsers219035* p, NI32 fileidx, Tllstream178204* inputstream);
N_NIMCALL(void, openparser_207402)(Tparser207205* p, NI32 fileidx, Tllstream178204* inputstream, NIM_BOOL strongspaces);
N_NIMCALL(void, closeparsers_219056)(Tparsers219035* p);
STRING_LITERAL(TMP3404, "standard", 8);
STRING_LITERAL(TMP3405, "strongspaces", 12);
STRING_LITERAL(TMP3406, "braces", 6);
STRING_LITERAL(TMP3407, "endx", 4);
NIM_CONST TY219020 parsernames_219019 = {((NimStringDesc*) &TMP3404),
((NimStringDesc*) &TMP3405),
((NimStringDesc*) &TMP3406),
((NimStringDesc*) &TMP3407)}
;
STRING_LITERAL(TMP3408, "none", 4);
STRING_LITERAL(TMP3409, "stdtmpl", 7);
STRING_LITERAL(TMP3410, "replace", 7);
STRING_LITERAL(TMP3411, "strip", 5);
NIM_CONST TY219026 filternames_219025 = {((NimStringDesc*) &TMP3408),
((NimStringDesc*) &TMP3409),
((NimStringDesc*) &TMP3410),
((NimStringDesc*) &TMP3411)}
;
STRING_LITERAL(TMP3416, "parser to implement", 19);
static NIM_CONST TY192031 TMP3425 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3426, "sons", 4);
static NIM_CONST TY192031 TMP3427 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3428, "ident", 5);
STRING_LITERAL(TMP3429, "|", 1);
TNimType NTI219035; /* TParsers */
TNimType NTI219007; /* TParserKind */
extern TNimType NTI207205; /* TParser */
extern TFrame* frameptr_17042;
extern Tnode191813* emptynode_192807;
extern NI gverbosity_154137;

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

N_NIMCALL(Tnode191813*, parsefile_219041)(NI32 fileidx) {
	Tnode191813* result;
	Tparsers219035 p;
	FILE* f;
	NimStringDesc* filename;
	Tllstream178204* LOC6;
	nimfr("parseFile", "syntaxes.nim")
{	result = 0;
	memset((void*)(&p), 0, sizeof(p));
	objectInit((&p), (&NTI219035));
	f = 0;
	nimln(48, "syntaxes.nim");
	filename = tofullpathconsiderdirty_164407(fileidx);
	nimln(49, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_13203(&f, filename, ((NU8) 0), ((NI) -1));
		if (!!(LOC3)) goto LA4;
		nimln(50, "syntaxes.nim");
		rawmessage_164960(((NU16) 3), filename);
		nimln(51, "syntaxes.nim");
		goto BeforeRet;
	}
	LA4: ;
	nimln(52, "syntaxes.nim");
	LOC6 = 0;
	LOC6 = llstreamopen_178238(f);
	openparsers_219047((&p), fileidx, LOC6);
	nimln(53, "syntaxes.nim");
	result = parseall_219063((&p));
	nimln(54, "syntaxes.nim");
	closeparsers_219056((&p));
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(Tnode191813*, parseall_219063)(Tparsers219035* p) {
	Tnode191813* result;
	nimfr("parseAll", "syntaxes.nim")
	result = 0;
	nimln(57, "syntaxes.nim");
	switch ((*p).skin) {
	case ((NU8) 0):
	case ((NU8) 1):
	{
		nimln(59, "syntaxes.nim");
		result = parseall_207216((&(*p).parser));
	}
	break;
	case ((NU8) 2):
	{
		nimln(61, "syntaxes.nim");
		result = parseall_212009((&(*p).parser));
	}
	break;
	case ((NU8) 3):
	{
		nimln(63, "syntaxes.nim");
		internalerror_165218(((NimStringDesc*) &TMP3416));
		nimln(64, "syntaxes.nim");
		result = emptynode_192807;
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(Tnode191813*, parsetoplevelstmt_219070)(Tparsers219035* p) {
	Tnode191813* result;
	nimfr("parseTopLevelStmt", "syntaxes.nim")
	result = 0;
	nimln(67, "syntaxes.nim");
	switch ((*p).skin) {
	case ((NU8) 0):
	case ((NU8) 1):
	{
		nimln(69, "syntaxes.nim");
		result = parsetoplevelstmt_207230((&(*p).parser));
	}
	break;
	case ((NU8) 2):
	{
		nimln(71, "syntaxes.nim");
		result = parsetoplevelstmt_212020((&(*p).parser));
	}
	break;
	case ((NU8) 3):
	{
		nimln(73, "syntaxes.nim");
		internalerror_165218(((NimStringDesc*) &TMP3416));
		nimln(74, "syntaxes.nim");
		result = emptynode_192807;
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(NI, utf8bom_219122)(NimStringDesc* s) {
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

N_NIMCALL(NIM_BOOL, containsshebang_219132)(NimStringDesc* s, NI i) {
	NIM_BOOL result;
	nimfr("containsShebang", "syntaxes.nim")
	result = 0;
	nimln(83, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		NI TMP3417;
		NI j;
		NI TMP3418;
		LOC3 = 0;
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		LOC3 = ((NU8)(s->data[i]) == (NU8)(35));
		if (!(LOC3)) goto LA4;
		TMP3417 = addInt(i, ((NI) 1));
		if ((NU)((NI)(TMP3417)) > (NU)(s->Sup.len)) raiseIndexError();
		LOC3 = ((NU8)(s->data[(NI)(TMP3417)]) == (NU8)(33));
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(84, "syntaxes.nim");
		TMP3418 = addInt(i, ((NI) 2));
		j = (NI)(TMP3418);
		{
			nimln(85, "syntaxes.nim");
			while (1) {
				NI TMP3419;
				if ((NU)(j) > (NU)(s->Sup.len)) raiseIndexError();
				if (!(((NU8)(s->data[j])) == ((NU8)(32)) || ((NU8)(s->data[j])) == ((NU8)(9)) || ((NU8)(s->data[j])) == ((NU8)(11)) || ((NU8)(s->data[j])) == ((NU8)(13)) || ((NU8)(s->data[j])) == ((NU8)(10)) || ((NU8)(s->data[j])) == ((NU8)(12)))) goto LA8;
				TMP3419 = addInt(j, ((NI) 1));
				j = (NI)(TMP3419);
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

N_NIMCALL(Tnode191813*, parsepipe_219170)(NimStringDesc* filename, Tllstream178204* inputstream) {
	Tnode191813* result;
	Tllstream178204* s;
	nimfr("parsePipe", "syntaxes.nim")
	result = 0;
	nimln(89, "syntaxes.nim");
	result = emptynode_192807;
	nimln(90, "syntaxes.nim");
	s = llstreamopen_178256(filename, ((NU8) 0));
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
		LOC5 = llstreamreadline_178610(s, (&line));
		nimln(94, "syntaxes.nim");
		i = utf8bom_219122(line);
		nimln(95, "syntaxes.nim");
		{
			NIM_BOOL LOC8;
			NIM_BOOL LOC11;
			LOC8 = 0;
			LOC8 = containsshebang_219132(line, i);
			if (!LOC8) goto LA9;
			nimln(96, "syntaxes.nim");
			LOC11 = 0;
			LOC11 = llstreamreadline_178610(s, (&line));
			nimln(97, "syntaxes.nim");
			i = ((NI) 0);
		}
		LA9: ;
		nimln(98, "syntaxes.nim");
		{
			NIM_BOOL LOC14;
			NI TMP3420;
			NI TMP3421;
			Tparser207205 q;
			NimStringDesc* LOC20;
			Tllstream178204* LOC21;
			LOC14 = 0;
			if ((NU)(i) > (NU)(line->Sup.len)) raiseIndexError();
			LOC14 = ((NU8)(line->data[i]) == (NU8)(35));
			if (!(LOC14)) goto LA15;
			TMP3420 = addInt(i, ((NI) 1));
			if ((NU)((NI)(TMP3420)) > (NU)(line->Sup.len)) raiseIndexError();
			LOC14 = ((NU8)(line->data[(NI)(TMP3420)]) == (NU8)(33));
			LA15: ;
			if (!LOC14) goto LA16;
			nimln(99, "syntaxes.nim");
			TMP3421 = addInt(i, ((NI) 2));
			i = (NI)(TMP3421);
			{
				nimln(100, "syntaxes.nim");
				while (1) {
					NI TMP3422;
					if ((NU)(i) > (NU)(line->Sup.len)) raiseIndexError();
					if (!(((NU8)(line->data[i])) == ((NU8)(32)) || ((NU8)(line->data[i])) == ((NU8)(9)) || ((NU8)(line->data[i])) == ((NU8)(11)) || ((NU8)(line->data[i])) == ((NU8)(13)) || ((NU8)(line->data[i])) == ((NU8)(10)) || ((NU8)(line->data[i])) == ((NU8)(12)))) goto LA19;
					TMP3422 = addInt(i, ((NI) 1));
					i = (NI)(TMP3422);
				} LA19: ;
			}
			memset((void*)(&q), 0, sizeof(q));
			objectInit((&q), (&NTI207205));
			nimln(102, "syntaxes.nim");
			LOC20 = 0;
			LOC20 = copyStr(line, i);
			LOC21 = 0;
			LOC21 = llstreamopen_178220(LOC20);
			openparser_207417((&q), filename, LOC21, NIM_FALSE);
			nimln(103, "syntaxes.nim");
			result = parseall_207216((&q));
			nimln(104, "syntaxes.nim");
			closeparser_207223((&q));
		}
		LA16: ;
		nimln(105, "syntaxes.nim");
		llstreamclose_178310(s);
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

N_NIMCALL(NU8, getfilter_219239)(Tident167021* ident) {
	NU8 result;
	nimfr("getFilter", "syntaxes.nim")
{	result = 0;
	{
		NU8 i_219423;
		NI res_219429;
		i_219423 = 0;
		nimln(1598, "system.nim");
		res_219429 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP3423;
				if (!(res_219429 <= ((NI) 3))) goto LA3;
				nimln(1600, "system.nim");
				i_219423 = ((NU8)chckRange(res_219429, ((NU8) 0), ((NU8) 3)));
				nimln(109, "syntaxes.nim");
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = identeq_167484(ident, filternames_219025[(i_219423)- 0]);
					if (!LOC6) goto LA7;
					nimln(110, "syntaxes.nim");
					result = i_219423;
					goto BeforeRet;
				}
				LA7: ;
				nimln(1614, "system.nim");
				TMP3423 = addInt(res_219429, ((NI) 1));
				res_219429 = (NI)(TMP3423);
			} LA3: ;
		}
	}
	nimln(111, "syntaxes.nim");
	result = ((NU8) 0);
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NU8, getparser_219447)(Tident167021* ident) {
	NU8 result;
	nimfr("getParser", "syntaxes.nim")
{	result = 0;
	{
		NU8 i_219623;
		NI res_219629;
		i_219623 = 0;
		nimln(1598, "system.nim");
		res_219629 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP3424;
				if (!(res_219629 <= ((NI) 3))) goto LA3;
				nimln(1600, "system.nim");
				i_219623 = ((NU8)chckRange(res_219629, ((NU8) 0), ((NU8) 3)));
				nimln(115, "syntaxes.nim");
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = identeq_167484(ident, parsernames_219019[(i_219623)- 0]);
					if (!LOC6) goto LA7;
					nimln(116, "syntaxes.nim");
					result = i_219623;
					goto BeforeRet;
				}
				LA7: ;
				nimln(1614, "system.nim");
				TMP3424 = addInt(res_219629, ((NI) 1));
				res_219629 = (NI)(TMP3424);
			} LA3: ;
		}
	}
	nimln(117, "syntaxes.nim");
	rawmessage_164960(((NU16) 30), (*ident).s);
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(Tident167021*, getcallee_219647)(Tnode191813* n) {
	Tident167021* result;
	nimfr("getCallee", "syntaxes.nim")
	result = 0;
	nimln(120, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((*n).kind == ((NU8) 27) || (*n).kind == ((NU8) 29) || (*n).kind == ((NU8) 30) || (*n).kind == ((NU8) 31) || (*n).kind == ((NU8) 26) || (*n).kind == ((NU8) 28) || (*n).kind == ((NU8) 32));
		if (!(LOC3)) goto LA4;
		if (((TMP3425[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3426));
		if ((NU)(((NI) 0)) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
		LOC3 = ((*(*n).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 2));
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(121, "syntaxes.nim");
		if (((TMP3425[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3426));
		if ((NU)(((NI) 0)) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
		if (!(((TMP3427[(*(*n).kindU.S6.sons->data[((NI) 0)]).kind/8] &(1<<((*(*n).kindU.S6.sons->data[((NI) 0)]).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3428));
		result = (*(*n).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident;
	}
	goto LA1;
	LA5: ;
	{
		nimln(122, "syntaxes.nim");
		if (!((*n).kind == ((NU8) 2))) goto LA8;
		nimln(123, "syntaxes.nim");
		if (!(((TMP3427[(*n).kind/8] &(1<<((*n).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3428));
		result = (*n).kindU.S5.ident;
	}
	goto LA1;
	LA8: ;
	{
		NimStringDesc* LOC11;
		nimln(125, "syntaxes.nim");
		LOC11 = 0;
		LOC11 = rendertree_213058(n, 0);
		rawmessage_164960(((NU16) 163), LOC11);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(Tllstream178204*, applyfilter_219689)(Tparsers219035* p, Tnode191813* n, NimStringDesc* filename, Tllstream178204* stdin_219695) {
	Tllstream178204* result;
	Tident167021* ident;
	NU8 f;
	nimfr("applyFilter", "syntaxes.nim")
	result = 0;
	nimln(129, "syntaxes.nim");
	ident = getcallee_219647(n);
	nimln(130, "syntaxes.nim");
	f = getfilter_219239(ident);
	nimln(131, "syntaxes.nim");
	switch (f) {
	case ((NU8) 0):
	{
		nimln(133, "syntaxes.nim");
		(*p).skin = getparser_219447(ident);
		nimln(134, "syntaxes.nim");
		result = stdin_219695;
	}
	break;
	case ((NU8) 1):
	{
		nimln(136, "syntaxes.nim");
		result = filtertmpl_218009(stdin_219695, filename, n);
	}
	break;
	case ((NU8) 3):
	{
		nimln(138, "syntaxes.nim");
		result = filterstrip_217012(stdin_219695, filename, n);
	}
	break;
	case ((NU8) 2):
	{
		nimln(140, "syntaxes.nim");
		result = filterreplace_217004(stdin_219695, filename, n);
	}
	break;
	}
	nimln(141, "syntaxes.nim");
	{
		if (!!((f == ((NU8) 0)))) goto LA7;
		nimln(142, "syntaxes.nim");
		{
			TY144651 LOC13;
			TY144651 LOC14;
			if (!(((NI) 2) <= gverbosity_154137)) goto LA11;
			nimln(143, "syntaxes.nim");
			memset((void*)LOC13, 0, sizeof(LOC13));
			rawmessage_164888(((NU16) 270), LOC13, 0);
			nimln(144, "syntaxes.nim");
			msgwriteln_164536((*result).s);
			nimln(145, "syntaxes.nim");
			memset((void*)LOC14, 0, sizeof(LOC14));
			rawmessage_164888(((NU16) 271), LOC14, 0);
		}
		LA11: ;
	}
	LA7: ;
	popFrame();
	return result;
}

N_NIMCALL(Tllstream178204*, evalpipe_219722)(Tparsers219035* p, Tnode191813* n, NimStringDesc* filename, Tllstream178204* start) {
	Tllstream178204* result;
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
		if (((TMP3425[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3426));
		if ((NU)(((NI) 0)) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
		LOC8 = ((*(*n).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 2));
		LA9: ;
		LOC7 = LOC8;
		if (!(LOC7)) goto LA10;
		nimln(152, "syntaxes.nim");
		if (((TMP3425[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3426));
		if ((NU)(((NI) 0)) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
		if (!(((TMP3427[(*(*n).kindU.S6.sons->data[((NI) 0)]).kind/8] &(1<<((*(*n).kindU.S6.sons->data[((NI) 0)]).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3428));
		LOC7 = identeq_167484((*(*n).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident, ((NimStringDesc*) &TMP3429));
		LA10: ;
		if (!LOC7) goto LA11;
		{
			NI i_219772;
			NI res_219798;
			i_219772 = 0;
			nimln(1598, "system.nim");
			res_219798 = ((NI) 1);
			{
				nimln(1599, "system.nim");
				while (1) {
					NI TMP3430;
					if (!(res_219798 <= ((NI) 2))) goto LA15;
					nimln(1600, "system.nim");
					i_219772 = res_219798;
					nimln(154, "syntaxes.nim");
					{
						if (((TMP3425[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3426));
						if ((NU)(i_219772) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (!((*(*n).kindU.S6.sons->data[i_219772]).kind == ((NU8) 29))) goto LA18;
						nimln(155, "syntaxes.nim");
						if (((TMP3425[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3426));
						if ((NU)(i_219772) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
						result = evalpipe_219722(p, (*n).kindU.S6.sons->data[i_219772], filename, result);
					}
					goto LA16;
					LA18: ;
					{
						nimln(157, "syntaxes.nim");
						if (((TMP3425[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3426));
						if ((NU)(i_219772) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
						result = applyfilter_219689(p, (*n).kindU.S6.sons->data[i_219772], filename, result);
					}
					LA16: ;
					nimln(1614, "system.nim");
					TMP3430 = addInt(res_219798, ((NI) 1));
					res_219798 = (NI)(TMP3430);
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
		if (((TMP3425[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3426));
		if ((NU)(((NI) 0)) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
		result = evalpipe_219722(p, (*n).kindU.S6.sons->data[((NI) 0)], filename, result);
	}
	goto LA5;
	LA22: ;
	{
		nimln(161, "syntaxes.nim");
		result = applyfilter_219689(p, n, filename, result);
	}
	LA5: ;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, openparsers_219047)(Tparsers219035* p, NI32 fileidx, Tllstream178204* inputstream) {
	Tllstream178204* s;
	NimStringDesc* filename;
	Tnode191813* pipe;
	nimfr("openParsers", "syntaxes.nim")
	s = 0;
	nimln(165, "syntaxes.nim");
	(*p).skin = ((NU8) 0);
	nimln(166, "syntaxes.nim");
	filename = tofullpathconsiderdirty_164407(fileidx);
	nimln(167, "syntaxes.nim");
	pipe = parsepipe_219170(filename, inputstream);
	nimln(168, "syntaxes.nim");
	{
		if (!!((pipe == NIM_NIL))) goto LA3;
		s = evalpipe_219722(p, pipe, filename, inputstream);
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
		openparser_207402((&(*p).parser), fileidx, s, NIM_FALSE);
	}
	break;
	case ((NU8) 1):
	{
		nimln(174, "syntaxes.nim");
		openparser_207402((&(*p).parser), fileidx, s, NIM_TRUE);
	}
	break;
	}
	popFrame();
}

N_NIMCALL(void, closeparsers_219056)(Tparsers219035* p) {
	nimfr("closeParsers", "syntaxes.nim")
	nimln(177, "syntaxes.nim");
	closeparser_207223((&(*p).parser));
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, compiler_syntaxesInit)(void) {
	nimfr("syntaxes", "syntaxes.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_syntaxesDatInit)(void) {
static TNimNode* TMP3412[2];
static TNimNode* TMP3413[4];
NI TMP3415;
static char* NIM_CONST TMP3414[4] = {
"skinStandard", 
"skinStrongSpaces", 
"skinBraces", 
"skinEndX"};
static TNimNode TMP2933[8];
NTI219035.size = sizeof(Tparsers219035);
NTI219035.kind = 18;
NTI219035.base = 0;
TMP3412[0] = &TMP2933[1];
NTI219007.size = sizeof(NU8);
NTI219007.kind = 14;
NTI219007.base = 0;
NTI219007.flags = 3;
for (TMP3415 = 0; TMP3415 < 4; TMP3415++) {
TMP2933[TMP3415+2].kind = 1;
TMP2933[TMP3415+2].offset = TMP3415;
TMP2933[TMP3415+2].name = TMP3414[TMP3415];
TMP3413[TMP3415] = &TMP2933[TMP3415+2];
}
TMP2933[6].len = 4; TMP2933[6].kind = 2; TMP2933[6].sons = &TMP3413[0];
NTI219007.node = &TMP2933[6];
TMP2933[1].kind = 1;
TMP2933[1].offset = offsetof(Tparsers219035, skin);
TMP2933[1].typ = (&NTI219007);
TMP2933[1].name = "skin";
TMP3412[1] = &TMP2933[7];
TMP2933[7].kind = 1;
TMP2933[7].offset = offsetof(Tparsers219035, parser);
TMP2933[7].typ = (&NTI207205);
TMP2933[7].name = "parser";
TMP2933[0].len = 2; TMP2933[0].kind = 2; TMP2933[0].sons = &TMP3412[0];
NTI219035.node = &TMP2933[0];
}

