/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <stdio.h>
typedef struct Tnode193813 Tnode193813;
typedef struct Tlineinfo165338 Tlineinfo165338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype193849 Ttype193849;
typedef struct Tsym193843 Tsym193843;
typedef struct Tident169021 Tident169021;
typedef struct Tnodeseq193807 Tnodeseq193807;
typedef struct Tllstream180204 Tllstream180204;
typedef struct Tidobj169015 Tidobj169015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq193845 Ttypeseq193845;
typedef struct Tloc193827 Tloc193827;
typedef struct Ropeobj163009 Ropeobj163009;
typedef struct Tscope193837 Tscope193837;
typedef struct TY193944 TY193944;
typedef struct Tstrtable193817 Tstrtable193817;
typedef struct Tsymseq193815 Tsymseq193815;
typedef struct Tlib193831 Tlib193831;
typedef struct Tinstantiation193833 Tinstantiation193833;
typedef struct Tlistentry133022 Tlistentry133022;
typedef struct TY193933 TY193933;
struct  Tlineinfo165338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode193813  {
Ttype193849* typ;
Tlineinfo165338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym193843* sym;
} S4;
struct {Tident169021* ident;
} S5;
struct {Tnodeseq193807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef NU8 TY194031[20];
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
struct  Tidobj169015  {
  TNimObject Sup;
NI id;
};
struct  Tloc193827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype193849* t;
Ropeobj163009* r;
Ropeobj163009* heaproot;
};
struct  Ttype193849  {
  Tidobj169015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq193845* sons;
Tnode193813* n;
Tsym193843* owner;
Tsym193843* sym;
Tsym193843* destructor;
Tsym193843* deepcopy;
Tsym193843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc193827 loc;
};
struct  Tstrtable193817  {
NI counter;
Tsymseq193815* data;
};
struct  Tsym193843  {
  Tidobj169015 Sup;
NU8 kind;
union{
struct {Ttypeseq193845* typeinstcache;
Tscope193837* typscope;
} S1;
struct {TY193944* procinstcache;
Tsym193843* gcunsafetyreason;
} S2;
struct {TY193944* usedgenerics;
Tstrtable193817 tab;
} S3;
struct {Tsym193843* guard;
} S4;
} kindU;
NU16 magic;
Ttype193849* typ;
Tident169021* name;
Tlineinfo165338 info;
Tsym193843* owner;
NU32 flags;
Tnode193813* ast;
NU32 options;
NI position;
NI offset;
Tloc193827 loc;
Tlib193831* annex;
Tnode193813* constraint;
};
struct  Tident169021  {
  Tidobj169015 Sup;
NimStringDesc* s;
Tident169021* next;
NI h;
};
struct  Tllstream180204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Ropeobj163009  {
  TNimObject Sup;
Ropeobj163009* left;
Ropeobj163009* right;
NI length;
NimStringDesc* data;
};
struct  Tscope193837  {
NI depthlevel;
Tstrtable193817 symbols;
Tnodeseq193807* usingsyms;
Tscope193837* parent;
};
struct  Tlistentry133022  {
  TNimObject Sup;
Tlistentry133022* prev;
Tlistentry133022* next;
};
struct  Tlib193831  {
  Tlistentry133022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj163009* name;
Tnode193813* path;
};
struct  Tinstantiation193833  {
Tsym193843* sym;
Ttypeseq193845* concretetypes;
TY193933* usedby;
};
struct Tnodeseq193807 {
  TGenericSeq Sup;
  Tnode193813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq193845 {
  TGenericSeq Sup;
  Ttype193849* data[SEQ_DECL_SIZE];
};
struct TY193944 {
  TGenericSeq Sup;
  Tinstantiation193833* data[SEQ_DECL_SIZE];
};
struct Tsymseq193815 {
  TGenericSeq Sup;
  Tsym193843* data[SEQ_DECL_SIZE];
};
struct TY193933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, invalidpragma_219047)(Tnode193813* n);
N_NIMCALL(void, localerror_167155)(Tlineinfo165338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, rendertree_215058)(Tnode193813* n, NU8 renderflags);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(Tnode193813*, getarg_219057)(Tnode193813* n, NimStringDesc* name, NI pos);
N_NIMCALL(NI, sonslen_196403)(Tnode193813* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, identeq_169484)(Tident169021* id, NimStringDesc* name);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NIM_CHAR, chararg_219020)(Tnode193813* n, NimStringDesc* name, NI pos, NIM_CHAR default_219025);
N_NIMCALL(NI64, chckRange64)(NI64 i, NI64 a, NI64 b);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NimStringDesc*, strarg_219029)(Tnode193813* n, NimStringDesc* name, NI pos, NimStringDesc* default_219034);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, boolarg_219038)(Tnode193813* n, NimStringDesc* name, NI pos, NIM_BOOL default_219043);
N_NIMCALL(Tllstream180204*, filterstrip_219012)(Tllstream180204* stdin_219014, NimStringDesc* filename, Tnode193813* call);
N_NIMCALL(Tllstream180204*, llstreamopen_180220)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_180610)(Tllstream180204* s, NimStringDesc** line);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(void, llstreamwriteln_180686)(Tllstream180204* s, NimStringDesc* data);
N_NIMCALL(void, llstreamclose_180310)(Tllstream180204* s);
N_NIMCALL(Tllstream180204*, filterreplace_219004)(Tllstream180204* stdin_219006, NimStringDesc* filename, Tnode193813* call);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
static NIM_CONST TY194031 TMP3312 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3313, "sons", 4);
static NIM_CONST TY194031 TMP3314 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3315, "ident", 5);
static NIM_CONST TY194031 TMP3317 = {
0xE0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3318, "intVal", 6);
static NIM_CONST TY194031 TMP3319 = {
0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3320, "strVal", 6);
STRING_LITERAL(TMP3321, "true", 4);
STRING_LITERAL(TMP3322, "false", 5);
STRING_LITERAL(TMP3323, "startswith", 10);
STRING_LITERAL(TMP3324, "", 0);
STRING_LITERAL(TMP3325, "leading", 7);
STRING_LITERAL(TMP3326, "trailing", 8);
STRING_LITERAL(TMP3327, "sub", 3);
STRING_LITERAL(TMP3328, "by", 2);
extern TFrame* frameptr_17042;

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

N_NIMCALL(void, invalidpragma_219047)(Tnode193813* n) {
	NimStringDesc* LOC1;
	nimfr("invalidPragma", "filters.nim")
	nimln(25, "filters.nim");
	LOC1 = 0;
	LOC1 = rendertree_215058(n, 4);
	localerror_167155((*n).info, ((NU16) 163), LOC1);
	popFrame();
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = 0;
	result = (NI)((NU32)(a) - (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI) 0) <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (((NI) 0) <= (NI)(result ^ (NI)((NU32) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
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

N_NIMCALL(Tnode193813*, getarg_219057)(Tnode193813* n, NimStringDesc* name, NI pos) {
	Tnode193813* result;
	nimfr("getArg", "filters.nim")
{	result = 0;
	nimln(28, "filters.nim");
	result = NIM_NIL;
	nimln(29, "filters.nim");
	{
		if (!((*n).kind >= ((NU8) 1) && (*n).kind <= ((NU8) 23))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_219086;
		NI HEX3Atmp_219115;
		NI LOC6;
		NI TMP3311;
		NI res_219118;
		i_219086 = 0;
		HEX3Atmp_219115 = 0;
		nimln(30, "filters.nim");
		LOC6 = 0;
		LOC6 = sonslen_196403(n);
		TMP3311 = subInt(LOC6, ((NI) 1));
		HEX3Atmp_219115 = (NI)(TMP3311);
		nimln(1598, "system.nim");
		res_219118 = ((NI) 1);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP3316;
				if (!(res_219118 <= HEX3Atmp_219115)) goto LA8;
				nimln(1600, "system.nim");
				i_219086 = res_219118;
				nimln(31, "filters.nim");
				{
					if (((TMP3312[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3313));
					if ((NU)(i_219086) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (!((*(*n).kindU.S6.sons->data[i_219086]).kind == ((NU8) 33))) goto LA11;
					nimln(32, "filters.nim");
					{
						if (((TMP3312[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3313));
						if ((NU)(i_219086) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP3312[(*(*n).kindU.S6.sons->data[i_219086]).kind/8] &(1<<((*(*n).kindU.S6.sons->data[i_219086]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3313));
						if ((NU)(((NI) 0)) >= (NU)((*(*n).kindU.S6.sons->data[i_219086]).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (!!(((*(*(*n).kindU.S6.sons->data[i_219086]).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 2)))) goto LA15;
						invalidpragma_219047(n);
					}
					LA15: ;
					nimln(33, "filters.nim");
					{
						NIM_BOOL LOC19;
						if (((TMP3312[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3313));
						if ((NU)(i_219086) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP3312[(*(*n).kindU.S6.sons->data[i_219086]).kind/8] &(1<<((*(*n).kindU.S6.sons->data[i_219086]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3313));
						if ((NU)(((NI) 0)) >= (NU)((*(*n).kindU.S6.sons->data[i_219086]).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (!(((TMP3314[(*(*(*n).kindU.S6.sons->data[i_219086]).kindU.S6.sons->data[((NI) 0)]).kind/8] &(1<<((*(*(*n).kindU.S6.sons->data[i_219086]).kindU.S6.sons->data[((NI) 0)]).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3315));
						LOC19 = 0;
						LOC19 = identeq_169484((*(*(*n).kindU.S6.sons->data[i_219086]).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident, name);
						if (!LOC19) goto LA20;
						nimln(34, "filters.nim");
						if (((TMP3312[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3313));
						if ((NU)(i_219086) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP3312[(*(*n).kindU.S6.sons->data[i_219086]).kind/8] &(1<<((*(*n).kindU.S6.sons->data[i_219086]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3313));
						if ((NU)(((NI) 1)) >= (NU)((*(*n).kindU.S6.sons->data[i_219086]).kindU.S6.sons->Sup.len)) raiseIndexError();
						result = (*(*n).kindU.S6.sons->data[i_219086]).kindU.S6.sons->data[((NI) 1)];
						goto BeforeRet;
					}
					LA20: ;
				}
				goto LA9;
				LA11: ;
				{
					nimln(35, "filters.nim");
					if (!(i_219086 == pos)) goto LA23;
					nimln(36, "filters.nim");
					if (((TMP3312[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3313));
					if ((NU)(i_219086) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
					result = (*n).kindU.S6.sons->data[i_219086];
					goto BeforeRet;
				}
				goto LA9;
				LA23: ;
				LA9: ;
				nimln(1614, "system.nim");
				TMP3316 = addInt(res_219118, ((NI) 1));
				res_219118 = (NI)(TMP3316);
			} LA8: ;
		}
	}
	}BeforeRet: ;
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

N_NIMCALL(NIM_CHAR, chararg_219020)(Tnode193813* n, NimStringDesc* name, NI pos, NIM_CHAR default_219025) {
	NIM_CHAR result;
	Tnode193813* x;
	nimfr("charArg", "filters.nim")
	result = 0;
	nimln(39, "filters.nim");
	x = getarg_219057(n, name, pos);
	nimln(40, "filters.nim");
	{
		if (!(x == NIM_NIL)) goto LA3;
		result = default_219025;
	}
	goto LA1;
	LA3: ;
	{
		nimln(41, "filters.nim");
		if (!((*x).kind == ((NU8) 5))) goto LA6;
		if (!(((TMP3317[(*x).kind/8] &(1<<((*x).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3318));
		result = ((NIM_CHAR) (((NI)chckRange(((NI)chckRange64((*x).kindU.S1.intval, ((NI) (-2147483647 -1)), ((NI) 2147483647))), ((NI) 0), ((NI) 255)))));
	}
	goto LA1;
	LA6: ;
	{
		nimln(42, "filters.nim");
		invalidpragma_219047(n);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, strarg_219029)(Tnode193813* n, NimStringDesc* name, NI pos, NimStringDesc* default_219034) {
	NimStringDesc* result;
	Tnode193813* x;
	nimfr("strArg", "filters.nim")
	result = 0;
	nimln(45, "filters.nim");
	x = getarg_219057(n, name, pos);
	nimln(46, "filters.nim");
	{
		if (!(x == NIM_NIL)) goto LA3;
		result = copyString(default_219034);
	}
	goto LA1;
	LA3: ;
	{
		nimln(47, "filters.nim");
		if (!((*x).kind >= ((NU8) 20) && (*x).kind <= ((NU8) 22))) goto LA6;
		if (!(((TMP3319[(*x).kind/8] &(1<<((*x).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3320));
		result = copyString((*x).kindU.S3.strval);
	}
	goto LA1;
	LA6: ;
	{
		nimln(48, "filters.nim");
		invalidpragma_219047(n);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, boolarg_219038)(Tnode193813* n, NimStringDesc* name, NI pos, NIM_BOOL default_219043) {
	NIM_BOOL result;
	Tnode193813* x;
	nimfr("boolArg", "filters.nim")
	result = 0;
	nimln(51, "filters.nim");
	x = getarg_219057(n, name, pos);
	nimln(52, "filters.nim");
	{
		if (!(x == NIM_NIL)) goto LA3;
		result = default_219043;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(53, "filters.nim");
		LOC6 = 0;
		LOC6 = ((*x).kind == ((NU8) 2));
		if (!(LOC6)) goto LA7;
		if (!(((TMP3314[(*x).kind/8] &(1<<((*x).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3315));
		LOC6 = identeq_169484((*x).kindU.S5.ident, ((NimStringDesc*) &TMP3321));
		LA7: ;
		if (!LOC6) goto LA8;
		result = NIM_TRUE;
	}
	goto LA1;
	LA8: ;
	{
		NIM_BOOL LOC11;
		nimln(54, "filters.nim");
		LOC11 = 0;
		LOC11 = ((*x).kind == ((NU8) 2));
		if (!(LOC11)) goto LA12;
		if (!(((TMP3314[(*x).kind/8] &(1<<((*x).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3315));
		LOC11 = identeq_169484((*x).kindU.S5.ident, ((NimStringDesc*) &TMP3322));
		LA12: ;
		if (!LOC11) goto LA13;
		result = NIM_FALSE;
	}
	goto LA1;
	LA13: ;
	{
		nimln(55, "filters.nim");
		invalidpragma_219047(n);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(Tllstream180204*, filterstrip_219012)(Tllstream180204* stdin_219014, NimStringDesc* filename, Tnode193813* call) {
	Tllstream180204* result;
	NimStringDesc* pattern;
	NIM_BOOL leading;
	NIM_BOOL trailing;
	NimStringDesc* line;
	nimfr("filterStrip", "filters.nim")
	result = 0;
	nimln(58, "filters.nim");
	pattern = strarg_219029(call, ((NimStringDesc*) &TMP3323), ((NI) 1), ((NimStringDesc*) &TMP3324));
	nimln(59, "filters.nim");
	leading = boolarg_219038(call, ((NimStringDesc*) &TMP3325), ((NI) 2), NIM_TRUE);
	nimln(60, "filters.nim");
	trailing = boolarg_219038(call, ((NimStringDesc*) &TMP3326), ((NI) 3), NIM_TRUE);
	nimln(61, "filters.nim");
	result = llstreamopen_180220(((NimStringDesc*) &TMP3324));
	nimln(62, "filters.nim");
	line = rawNewString(((NI) 80));
	{
		nimln(63, "filters.nim");
		while (1) {
			NIM_BOOL LOC3;
			NimStringDesc* stripped;
			LOC3 = 0;
			LOC3 = llstreamreadline_180610(stdin_219014, (&line));
			if (!LOC3) goto LA2;
			nimln(64, "filters.nim");
			stripped = nsuStrip(line, leading, trailing);
			nimln(65, "filters.nim");
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = ((pattern ? pattern->Sup.len : 0) == ((NI) 0));
				if (LOC6) goto LA7;
				LOC6 = nsuStartsWith(stripped, pattern);
				LA7: ;
				if (!LOC6) goto LA8;
				nimln(66, "filters.nim");
				llstreamwriteln_180686(result, stripped);
			}
			goto LA4;
			LA8: ;
			{
				nimln(68, "filters.nim");
				llstreamwriteln_180686(result, line);
			}
			LA4: ;
		} LA2: ;
	}
	nimln(69, "filters.nim");
	llstreamclose_180310(stdin_219014);
	popFrame();
	return result;
}

N_NIMCALL(Tllstream180204*, filterreplace_219004)(Tllstream180204* stdin_219006, NimStringDesc* filename, Tnode193813* call) {
	Tllstream180204* result;
	NimStringDesc* sub;
	NimStringDesc* by;
	NimStringDesc* line;
	nimfr("filterReplace", "filters.nim")
	result = 0;
	nimln(72, "filters.nim");
	sub = strarg_219029(call, ((NimStringDesc*) &TMP3327), ((NI) 1), ((NimStringDesc*) &TMP3324));
	nimln(73, "filters.nim");
	{
		if (!((sub ? sub->Sup.len : 0) == ((NI) 0))) goto LA3;
		invalidpragma_219047(call);
	}
	LA3: ;
	nimln(74, "filters.nim");
	by = strarg_219029(call, ((NimStringDesc*) &TMP3328), ((NI) 2), ((NimStringDesc*) &TMP3324));
	nimln(75, "filters.nim");
	result = llstreamopen_180220(((NimStringDesc*) &TMP3324));
	nimln(76, "filters.nim");
	line = rawNewString(((NI) 80));
	{
		nimln(77, "filters.nim");
		while (1) {
			NIM_BOOL LOC7;
			NimStringDesc* LOC8;
			LOC7 = 0;
			LOC7 = llstreamreadline_180610(stdin_219006, (&line));
			if (!LOC7) goto LA6;
			nimln(78, "filters.nim");
			LOC8 = 0;
			LOC8 = nsuReplaceStr(line, sub, by);
			llstreamwriteln_180686(result, LOC8);
		} LA6: ;
	}
	nimln(79, "filters.nim");
	llstreamclose_180310(stdin_219006);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_filtersInit)(void) {
	nimfr("filters", "filters.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_filtersDatInit)(void) {
}

