/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <stdio.h>
typedef struct Tnode190813 Tnode190813;
typedef struct Tlineinfo162338 Tlineinfo162338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype190849 Ttype190849;
typedef struct Tsym190843 Tsym190843;
typedef struct Tident166021 Tident166021;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tllstream177204 Tllstream177204;
typedef struct Tidobj166015 Tidobj166015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
struct  Tlineinfo162338  {
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
struct  Tidobj166015  {
  TNimObject Sup;
NI id;
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
struct  Tident166021  {
  Tidobj166015 Sup;
NimStringDesc* s;
Tident166021* next;
NI h;
};
struct  Tllstream177204  {
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
N_NIMCALL(void, invalidpragma_216047)(Tnode190813* n);
N_NIMCALL(void, localerror_164155)(Tlineinfo162338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, rendertree_212058)(Tnode190813* n, NU8 renderflags);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(Tnode190813*, getarg_216057)(Tnode190813* n, NimStringDesc* name, NI pos);
N_NIMCALL(NI, sonslen_193403)(Tnode190813* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, identeq_166484)(Tident166021* id, NimStringDesc* name);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NIM_CHAR, chararg_216020)(Tnode190813* n, NimStringDesc* name, NI pos, NIM_CHAR default_216025);
N_NIMCALL(NI64, chckRange64)(NI64 i, NI64 a, NI64 b);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NimStringDesc*, strarg_216029)(Tnode190813* n, NimStringDesc* name, NI pos, NimStringDesc* default_216034);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, boolarg_216038)(Tnode190813* n, NimStringDesc* name, NI pos, NIM_BOOL default_216043);
N_NIMCALL(Tllstream177204*, filterstrip_216012)(Tllstream177204* stdin_216014, NimStringDesc* filename, Tnode190813* call);
N_NIMCALL(Tllstream177204*, llstreamopen_177220)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_177610)(Tllstream177204* s, NimStringDesc** line);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(void, llstreamwriteln_177686)(Tllstream177204* s, NimStringDesc* data);
N_NIMCALL(void, llstreamclose_177310)(Tllstream177204* s);
N_NIMCALL(Tllstream177204*, filterreplace_216004)(Tllstream177204* stdin_216006, NimStringDesc* filename, Tnode190813* call);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
static NIM_CONST TY191031 TMP3328 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3329, "sons", 4);
static NIM_CONST TY191031 TMP3330 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3331, "ident", 5);
static NIM_CONST TY191031 TMP3333 = {
0xE0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3334, "intVal", 6);
static NIM_CONST TY191031 TMP3335 = {
0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3336, "strVal", 6);
STRING_LITERAL(TMP3337, "true", 4);
STRING_LITERAL(TMP3338, "false", 5);
STRING_LITERAL(TMP3339, "startswith", 10);
STRING_LITERAL(TMP3340, "", 0);
STRING_LITERAL(TMP3341, "leading", 7);
STRING_LITERAL(TMP3342, "trailing", 8);
STRING_LITERAL(TMP3343, "sub", 3);
STRING_LITERAL(TMP3344, "by", 2);
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

N_NIMCALL(void, invalidpragma_216047)(Tnode190813* n) {
	NimStringDesc* LOC1;
	nimfr("invalidPragma", "filters.nim")
	nimln(25, "filters.nim");
	LOC1 = 0;
	LOC1 = rendertree_212058(n, 4);
	localerror_164155((*n).info, ((NU16) 163), LOC1);
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

N_NIMCALL(Tnode190813*, getarg_216057)(Tnode190813* n, NimStringDesc* name, NI pos) {
	Tnode190813* result;
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
		NI i_216086;
		NI HEX3Atmp_216115;
		NI LOC6;
		NI TMP3327;
		NI res_216118;
		i_216086 = 0;
		HEX3Atmp_216115 = 0;
		nimln(30, "filters.nim");
		LOC6 = 0;
		LOC6 = sonslen_193403(n);
		TMP3327 = subInt(LOC6, ((NI) 1));
		HEX3Atmp_216115 = (NI)(TMP3327);
		nimln(1598, "system.nim");
		res_216118 = ((NI) 1);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP3332;
				if (!(res_216118 <= HEX3Atmp_216115)) goto LA8;
				nimln(1600, "system.nim");
				i_216086 = res_216118;
				nimln(31, "filters.nim");
				{
					if (((TMP3328[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3329));
					if ((NU)(i_216086) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (!((*(*n).kindU.S6.sons->data[i_216086]).kind == ((NU8) 33))) goto LA11;
					nimln(32, "filters.nim");
					{
						if (((TMP3328[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3329));
						if ((NU)(i_216086) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP3328[(*(*n).kindU.S6.sons->data[i_216086]).kind/8] &(1<<((*(*n).kindU.S6.sons->data[i_216086]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3329));
						if ((NU)(((NI) 0)) >= (NU)((*(*n).kindU.S6.sons->data[i_216086]).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (!!(((*(*(*n).kindU.S6.sons->data[i_216086]).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 2)))) goto LA15;
						invalidpragma_216047(n);
					}
					LA15: ;
					nimln(33, "filters.nim");
					{
						NIM_BOOL LOC19;
						if (((TMP3328[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3329));
						if ((NU)(i_216086) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP3328[(*(*n).kindU.S6.sons->data[i_216086]).kind/8] &(1<<((*(*n).kindU.S6.sons->data[i_216086]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3329));
						if ((NU)(((NI) 0)) >= (NU)((*(*n).kindU.S6.sons->data[i_216086]).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (!(((TMP3330[(*(*(*n).kindU.S6.sons->data[i_216086]).kindU.S6.sons->data[((NI) 0)]).kind/8] &(1<<((*(*(*n).kindU.S6.sons->data[i_216086]).kindU.S6.sons->data[((NI) 0)]).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3331));
						LOC19 = 0;
						LOC19 = identeq_166484((*(*(*n).kindU.S6.sons->data[i_216086]).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident, name);
						if (!LOC19) goto LA20;
						nimln(34, "filters.nim");
						if (((TMP3328[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3329));
						if ((NU)(i_216086) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP3328[(*(*n).kindU.S6.sons->data[i_216086]).kind/8] &(1<<((*(*n).kindU.S6.sons->data[i_216086]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3329));
						if ((NU)(((NI) 1)) >= (NU)((*(*n).kindU.S6.sons->data[i_216086]).kindU.S6.sons->Sup.len)) raiseIndexError();
						result = (*(*n).kindU.S6.sons->data[i_216086]).kindU.S6.sons->data[((NI) 1)];
						goto BeforeRet;
					}
					LA20: ;
				}
				goto LA9;
				LA11: ;
				{
					nimln(35, "filters.nim");
					if (!(i_216086 == pos)) goto LA23;
					nimln(36, "filters.nim");
					if (((TMP3328[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3329));
					if ((NU)(i_216086) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
					result = (*n).kindU.S6.sons->data[i_216086];
					goto BeforeRet;
				}
				goto LA9;
				LA23: ;
				LA9: ;
				nimln(1614, "system.nim");
				TMP3332 = addInt(res_216118, ((NI) 1));
				res_216118 = (NI)(TMP3332);
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

N_NIMCALL(NIM_CHAR, chararg_216020)(Tnode190813* n, NimStringDesc* name, NI pos, NIM_CHAR default_216025) {
	NIM_CHAR result;
	Tnode190813* x;
	nimfr("charArg", "filters.nim")
	result = 0;
	nimln(39, "filters.nim");
	x = getarg_216057(n, name, pos);
	nimln(40, "filters.nim");
	{
		if (!(x == NIM_NIL)) goto LA3;
		result = default_216025;
	}
	goto LA1;
	LA3: ;
	{
		nimln(41, "filters.nim");
		if (!((*x).kind == ((NU8) 5))) goto LA6;
		if (!(((TMP3333[(*x).kind/8] &(1<<((*x).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3334));
		result = ((NIM_CHAR) (((NI)chckRange(((NI)chckRange64((*x).kindU.S1.intval, ((NI) (-2147483647 -1)), ((NI) 2147483647))), ((NI) 0), ((NI) 255)))));
	}
	goto LA1;
	LA6: ;
	{
		nimln(42, "filters.nim");
		invalidpragma_216047(n);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, strarg_216029)(Tnode190813* n, NimStringDesc* name, NI pos, NimStringDesc* default_216034) {
	NimStringDesc* result;
	Tnode190813* x;
	nimfr("strArg", "filters.nim")
	result = 0;
	nimln(45, "filters.nim");
	x = getarg_216057(n, name, pos);
	nimln(46, "filters.nim");
	{
		if (!(x == NIM_NIL)) goto LA3;
		result = copyString(default_216034);
	}
	goto LA1;
	LA3: ;
	{
		nimln(47, "filters.nim");
		if (!((*x).kind >= ((NU8) 20) && (*x).kind <= ((NU8) 22))) goto LA6;
		if (!(((TMP3335[(*x).kind/8] &(1<<((*x).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3336));
		result = copyString((*x).kindU.S3.strval);
	}
	goto LA1;
	LA6: ;
	{
		nimln(48, "filters.nim");
		invalidpragma_216047(n);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, boolarg_216038)(Tnode190813* n, NimStringDesc* name, NI pos, NIM_BOOL default_216043) {
	NIM_BOOL result;
	Tnode190813* x;
	nimfr("boolArg", "filters.nim")
	result = 0;
	nimln(51, "filters.nim");
	x = getarg_216057(n, name, pos);
	nimln(52, "filters.nim");
	{
		if (!(x == NIM_NIL)) goto LA3;
		result = default_216043;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(53, "filters.nim");
		LOC6 = 0;
		LOC6 = ((*x).kind == ((NU8) 2));
		if (!(LOC6)) goto LA7;
		if (!(((TMP3330[(*x).kind/8] &(1<<((*x).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3331));
		LOC6 = identeq_166484((*x).kindU.S5.ident, ((NimStringDesc*) &TMP3337));
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
		if (!(((TMP3330[(*x).kind/8] &(1<<((*x).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3331));
		LOC11 = identeq_166484((*x).kindU.S5.ident, ((NimStringDesc*) &TMP3338));
		LA12: ;
		if (!LOC11) goto LA13;
		result = NIM_FALSE;
	}
	goto LA1;
	LA13: ;
	{
		nimln(55, "filters.nim");
		invalidpragma_216047(n);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(Tllstream177204*, filterstrip_216012)(Tllstream177204* stdin_216014, NimStringDesc* filename, Tnode190813* call) {
	Tllstream177204* result;
	NimStringDesc* pattern;
	NIM_BOOL leading;
	NIM_BOOL trailing;
	NimStringDesc* line;
	nimfr("filterStrip", "filters.nim")
	result = 0;
	nimln(58, "filters.nim");
	pattern = strarg_216029(call, ((NimStringDesc*) &TMP3339), ((NI) 1), ((NimStringDesc*) &TMP3340));
	nimln(59, "filters.nim");
	leading = boolarg_216038(call, ((NimStringDesc*) &TMP3341), ((NI) 2), NIM_TRUE);
	nimln(60, "filters.nim");
	trailing = boolarg_216038(call, ((NimStringDesc*) &TMP3342), ((NI) 3), NIM_TRUE);
	nimln(61, "filters.nim");
	result = llstreamopen_177220(((NimStringDesc*) &TMP3340));
	nimln(62, "filters.nim");
	line = rawNewString(((NI) 80));
	{
		nimln(63, "filters.nim");
		while (1) {
			NIM_BOOL LOC3;
			NimStringDesc* stripped;
			LOC3 = 0;
			LOC3 = llstreamreadline_177610(stdin_216014, (&line));
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
				llstreamwriteln_177686(result, stripped);
			}
			goto LA4;
			LA8: ;
			{
				nimln(68, "filters.nim");
				llstreamwriteln_177686(result, line);
			}
			LA4: ;
		} LA2: ;
	}
	nimln(69, "filters.nim");
	llstreamclose_177310(stdin_216014);
	popFrame();
	return result;
}

N_NIMCALL(Tllstream177204*, filterreplace_216004)(Tllstream177204* stdin_216006, NimStringDesc* filename, Tnode190813* call) {
	Tllstream177204* result;
	NimStringDesc* sub;
	NimStringDesc* by;
	NimStringDesc* line;
	nimfr("filterReplace", "filters.nim")
	result = 0;
	nimln(72, "filters.nim");
	sub = strarg_216029(call, ((NimStringDesc*) &TMP3343), ((NI) 1), ((NimStringDesc*) &TMP3340));
	nimln(73, "filters.nim");
	{
		if (!((sub ? sub->Sup.len : 0) == ((NI) 0))) goto LA3;
		invalidpragma_216047(call);
	}
	LA3: ;
	nimln(74, "filters.nim");
	by = strarg_216029(call, ((NimStringDesc*) &TMP3344), ((NI) 2), ((NimStringDesc*) &TMP3340));
	nimln(75, "filters.nim");
	result = llstreamopen_177220(((NimStringDesc*) &TMP3340));
	nimln(76, "filters.nim");
	line = rawNewString(((NI) 80));
	{
		nimln(77, "filters.nim");
		while (1) {
			NIM_BOOL LOC7;
			NimStringDesc* LOC8;
			LOC7 = 0;
			LOC7 = llstreamreadline_177610(stdin_216006, (&line));
			if (!LOC7) goto LA6;
			nimln(78, "filters.nim");
			LOC8 = 0;
			LOC8 = nsuReplaceStr(line, sub, by);
			llstreamwriteln_177686(result, LOC8);
		} LA6: ;
	}
	nimln(79, "filters.nim");
	llstreamclose_177310(stdin_216006);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_filtersInit)(void) {
	nimfr("filters", "filters.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_filtersDatInit)(void) {
}

