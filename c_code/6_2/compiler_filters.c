/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <stdio.h>
typedef struct Tnode191813 Tnode191813;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype191849 Ttype191849;
typedef struct Tsym191843 Tsym191843;
typedef struct Tident167021 Tident167021;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Tllstream178204 Tllstream178204;
typedef struct Tidobj167015 Tidobj167015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
struct  Tlineinfo163338  {
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
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
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
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
};
struct  Tllstream178204  {
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
N_NIMCALL(void, invalidpragma_217047)(Tnode191813* n);
N_NIMCALL(void, localerror_165155)(Tlineinfo163338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, rendertree_213058)(Tnode191813* n, NU8 renderflags);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(Tnode191813*, getarg_217057)(Tnode191813* n, NimStringDesc* name, NI pos);
N_NIMCALL(NI, sonslen_194403)(Tnode191813* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, identeq_167484)(Tident167021* id, NimStringDesc* name);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NIM_CHAR, chararg_217020)(Tnode191813* n, NimStringDesc* name, NI pos, NIM_CHAR default_217025);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NimStringDesc*, strarg_217029)(Tnode191813* n, NimStringDesc* name, NI pos, NimStringDesc* default_217034);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, boolarg_217038)(Tnode191813* n, NimStringDesc* name, NI pos, NIM_BOOL default_217043);
N_NIMCALL(Tllstream178204*, filterstrip_217012)(Tllstream178204* stdin_217014, NimStringDesc* filename, Tnode191813* call);
N_NIMCALL(Tllstream178204*, llstreamopen_178220)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_178610)(Tllstream178204* s, NimStringDesc** line);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(void, llstreamwriteln_178686)(Tllstream178204* s, NimStringDesc* data);
N_NIMCALL(void, llstreamclose_178310)(Tllstream178204* s);
N_NIMCALL(Tllstream178204*, filterreplace_217004)(Tllstream178204* stdin_217006, NimStringDesc* filename, Tnode191813* call);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
static NIM_CONST TY192031 TMP3327 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3328, "sons", 4);
static NIM_CONST TY192031 TMP3329 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3330, "ident", 5);
static NIM_CONST TY192031 TMP3332 = {
0xE0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3333, "intVal", 6);
static NIM_CONST TY192031 TMP3334 = {
0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3335, "strVal", 6);
STRING_LITERAL(TMP3336, "true", 4);
STRING_LITERAL(TMP3337, "false", 5);
STRING_LITERAL(TMP3338, "startswith", 10);
STRING_LITERAL(TMP3339, "", 0);
STRING_LITERAL(TMP3340, "leading", 7);
STRING_LITERAL(TMP3341, "trailing", 8);
STRING_LITERAL(TMP3342, "sub", 3);
STRING_LITERAL(TMP3343, "by", 2);
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

N_NIMCALL(void, invalidpragma_217047)(Tnode191813* n) {
	NimStringDesc* LOC1;
	nimfr("invalidPragma", "filters.nim")
	nimln(25, "filters.nim");
	LOC1 = 0;
	LOC1 = rendertree_213058(n, 4);
	localerror_165155((*n).info, ((NU16) 163), LOC1);
	popFrame();
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = 0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI) 0) <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
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

N_NIMCALL(Tnode191813*, getarg_217057)(Tnode191813* n, NimStringDesc* name, NI pos) {
	Tnode191813* result;
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
		NI i_217086;
		NI HEX3Atmp_217115;
		NI LOC6;
		NI TMP3326;
		NI res_217118;
		i_217086 = 0;
		HEX3Atmp_217115 = 0;
		nimln(30, "filters.nim");
		LOC6 = 0;
		LOC6 = sonslen_194403(n);
		TMP3326 = subInt(LOC6, ((NI) 1));
		HEX3Atmp_217115 = (NI)(TMP3326);
		nimln(1598, "system.nim");
		res_217118 = ((NI) 1);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP3331;
				if (!(res_217118 <= HEX3Atmp_217115)) goto LA8;
				nimln(1600, "system.nim");
				i_217086 = res_217118;
				nimln(31, "filters.nim");
				{
					if (((TMP3327[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3328));
					if ((NU)(i_217086) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (!((*(*n).kindU.S6.sons->data[i_217086]).kind == ((NU8) 33))) goto LA11;
					nimln(32, "filters.nim");
					{
						if (((TMP3327[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3328));
						if ((NU)(i_217086) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP3327[(*(*n).kindU.S6.sons->data[i_217086]).kind/8] &(1<<((*(*n).kindU.S6.sons->data[i_217086]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3328));
						if ((NU)(((NI) 0)) >= (NU)((*(*n).kindU.S6.sons->data[i_217086]).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (!!(((*(*(*n).kindU.S6.sons->data[i_217086]).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 2)))) goto LA15;
						invalidpragma_217047(n);
					}
					LA15: ;
					nimln(33, "filters.nim");
					{
						NIM_BOOL LOC19;
						if (((TMP3327[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3328));
						if ((NU)(i_217086) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP3327[(*(*n).kindU.S6.sons->data[i_217086]).kind/8] &(1<<((*(*n).kindU.S6.sons->data[i_217086]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3328));
						if ((NU)(((NI) 0)) >= (NU)((*(*n).kindU.S6.sons->data[i_217086]).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (!(((TMP3329[(*(*(*n).kindU.S6.sons->data[i_217086]).kindU.S6.sons->data[((NI) 0)]).kind/8] &(1<<((*(*(*n).kindU.S6.sons->data[i_217086]).kindU.S6.sons->data[((NI) 0)]).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3330));
						LOC19 = 0;
						LOC19 = identeq_167484((*(*(*n).kindU.S6.sons->data[i_217086]).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident, name);
						if (!LOC19) goto LA20;
						nimln(34, "filters.nim");
						if (((TMP3327[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3328));
						if ((NU)(i_217086) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP3327[(*(*n).kindU.S6.sons->data[i_217086]).kind/8] &(1<<((*(*n).kindU.S6.sons->data[i_217086]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3328));
						if ((NU)(((NI) 1)) >= (NU)((*(*n).kindU.S6.sons->data[i_217086]).kindU.S6.sons->Sup.len)) raiseIndexError();
						result = (*(*n).kindU.S6.sons->data[i_217086]).kindU.S6.sons->data[((NI) 1)];
						goto BeforeRet;
					}
					LA20: ;
				}
				goto LA9;
				LA11: ;
				{
					nimln(35, "filters.nim");
					if (!(i_217086 == pos)) goto LA23;
					nimln(36, "filters.nim");
					if (((TMP3327[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3328));
					if ((NU)(i_217086) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
					result = (*n).kindU.S6.sons->data[i_217086];
					goto BeforeRet;
				}
				goto LA9;
				LA23: ;
				LA9: ;
				nimln(1614, "system.nim");
				TMP3331 = addInt(res_217118, ((NI) 1));
				res_217118 = (NI)(TMP3331);
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

N_NIMCALL(NIM_CHAR, chararg_217020)(Tnode191813* n, NimStringDesc* name, NI pos, NIM_CHAR default_217025) {
	NIM_CHAR result;
	Tnode191813* x;
	nimfr("charArg", "filters.nim")
	result = 0;
	nimln(39, "filters.nim");
	x = getarg_217057(n, name, pos);
	nimln(40, "filters.nim");
	{
		if (!(x == NIM_NIL)) goto LA3;
		result = default_217025;
	}
	goto LA1;
	LA3: ;
	{
		nimln(41, "filters.nim");
		if (!((*x).kind == ((NU8) 5))) goto LA6;
		if (!(((TMP3332[(*x).kind/8] &(1<<((*x).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3333));
		result = ((NIM_CHAR) (((NI)chckRange(((NI) ((*x).kindU.S1.intval)), ((NI) 0), ((NI) 255)))));
	}
	goto LA1;
	LA6: ;
	{
		nimln(42, "filters.nim");
		invalidpragma_217047(n);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, strarg_217029)(Tnode191813* n, NimStringDesc* name, NI pos, NimStringDesc* default_217034) {
	NimStringDesc* result;
	Tnode191813* x;
	nimfr("strArg", "filters.nim")
	result = 0;
	nimln(45, "filters.nim");
	x = getarg_217057(n, name, pos);
	nimln(46, "filters.nim");
	{
		if (!(x == NIM_NIL)) goto LA3;
		result = copyString(default_217034);
	}
	goto LA1;
	LA3: ;
	{
		nimln(47, "filters.nim");
		if (!((*x).kind >= ((NU8) 20) && (*x).kind <= ((NU8) 22))) goto LA6;
		if (!(((TMP3334[(*x).kind/8] &(1<<((*x).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3335));
		result = copyString((*x).kindU.S3.strval);
	}
	goto LA1;
	LA6: ;
	{
		nimln(48, "filters.nim");
		invalidpragma_217047(n);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, boolarg_217038)(Tnode191813* n, NimStringDesc* name, NI pos, NIM_BOOL default_217043) {
	NIM_BOOL result;
	Tnode191813* x;
	nimfr("boolArg", "filters.nim")
	result = 0;
	nimln(51, "filters.nim");
	x = getarg_217057(n, name, pos);
	nimln(52, "filters.nim");
	{
		if (!(x == NIM_NIL)) goto LA3;
		result = default_217043;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(53, "filters.nim");
		LOC6 = 0;
		LOC6 = ((*x).kind == ((NU8) 2));
		if (!(LOC6)) goto LA7;
		if (!(((TMP3329[(*x).kind/8] &(1<<((*x).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3330));
		LOC6 = identeq_167484((*x).kindU.S5.ident, ((NimStringDesc*) &TMP3336));
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
		if (!(((TMP3329[(*x).kind/8] &(1<<((*x).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3330));
		LOC11 = identeq_167484((*x).kindU.S5.ident, ((NimStringDesc*) &TMP3337));
		LA12: ;
		if (!LOC11) goto LA13;
		result = NIM_FALSE;
	}
	goto LA1;
	LA13: ;
	{
		nimln(55, "filters.nim");
		invalidpragma_217047(n);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(Tllstream178204*, filterstrip_217012)(Tllstream178204* stdin_217014, NimStringDesc* filename, Tnode191813* call) {
	Tllstream178204* result;
	NimStringDesc* pattern;
	NIM_BOOL leading;
	NIM_BOOL trailing;
	NimStringDesc* line;
	nimfr("filterStrip", "filters.nim")
	result = 0;
	nimln(58, "filters.nim");
	pattern = strarg_217029(call, ((NimStringDesc*) &TMP3338), ((NI) 1), ((NimStringDesc*) &TMP3339));
	nimln(59, "filters.nim");
	leading = boolarg_217038(call, ((NimStringDesc*) &TMP3340), ((NI) 2), NIM_TRUE);
	nimln(60, "filters.nim");
	trailing = boolarg_217038(call, ((NimStringDesc*) &TMP3341), ((NI) 3), NIM_TRUE);
	nimln(61, "filters.nim");
	result = llstreamopen_178220(((NimStringDesc*) &TMP3339));
	nimln(62, "filters.nim");
	line = rawNewString(((NI) 80));
	{
		nimln(63, "filters.nim");
		while (1) {
			NIM_BOOL LOC3;
			NimStringDesc* stripped;
			LOC3 = 0;
			LOC3 = llstreamreadline_178610(stdin_217014, (&line));
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
				llstreamwriteln_178686(result, stripped);
			}
			goto LA4;
			LA8: ;
			{
				nimln(68, "filters.nim");
				llstreamwriteln_178686(result, line);
			}
			LA4: ;
		} LA2: ;
	}
	nimln(69, "filters.nim");
	llstreamclose_178310(stdin_217014);
	popFrame();
	return result;
}

N_NIMCALL(Tllstream178204*, filterreplace_217004)(Tllstream178204* stdin_217006, NimStringDesc* filename, Tnode191813* call) {
	Tllstream178204* result;
	NimStringDesc* sub;
	NimStringDesc* by;
	NimStringDesc* line;
	nimfr("filterReplace", "filters.nim")
	result = 0;
	nimln(72, "filters.nim");
	sub = strarg_217029(call, ((NimStringDesc*) &TMP3342), ((NI) 1), ((NimStringDesc*) &TMP3339));
	nimln(73, "filters.nim");
	{
		if (!((sub ? sub->Sup.len : 0) == ((NI) 0))) goto LA3;
		invalidpragma_217047(call);
	}
	LA3: ;
	nimln(74, "filters.nim");
	by = strarg_217029(call, ((NimStringDesc*) &TMP3343), ((NI) 2), ((NimStringDesc*) &TMP3339));
	nimln(75, "filters.nim");
	result = llstreamopen_178220(((NimStringDesc*) &TMP3339));
	nimln(76, "filters.nim");
	line = rawNewString(((NI) 80));
	{
		nimln(77, "filters.nim");
		while (1) {
			NIM_BOOL LOC7;
			NimStringDesc* LOC8;
			LOC7 = 0;
			LOC7 = llstreamreadline_178610(stdin_217006, (&line));
			if (!LOC7) goto LA6;
			nimln(78, "filters.nim");
			LOC8 = 0;
			LOC8 = nsuReplaceStr(line, sub, by);
			llstreamwriteln_178686(result, LOC8);
		} LA6: ;
	}
	nimln(79, "filters.nim");
	llstreamclose_178310(stdin_217006);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_filtersInit)(void) {
	nimfr("filters", "filters.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_filtersDatInit)(void) {
}

