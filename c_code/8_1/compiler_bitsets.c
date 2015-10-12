/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct Tbitset240012 Tbitset240012;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct Tbitset240012 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, bitsetin_240077)(Tbitset240012* x, NI64 e);
static N_INLINE(NI64, divInt64)(NI64 a, NI64 b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI64, modInt64)(NI64 a, NI64 b);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, bitsetincl_240061)(Tbitset240012** x, NI64 elem);
N_NIMCALL(void, failedassertimpl_87017)(NimStringDesc* msg);
N_NIMCALL(void, bitsetexcl_240069)(Tbitset240012** x, NI64 elem);
N_NIMCALL(void, bitsetinit_240021)(Tbitset240012** b, NI length);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(void, TMP4071)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(void, bitsetunion_240029)(Tbitset240012** x, Tbitset240012* y);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, bitsetdiff_240037)(Tbitset240012** x, Tbitset240012* y);
N_NIMCALL(void, bitsetsymdiff_240045)(Tbitset240012** x, Tbitset240012* y);
N_NIMCALL(void, bitsetintersect_240053)(Tbitset240012** x, Tbitset240012* y);
N_NIMCALL(NIM_BOOL, bitsetequals_240084)(Tbitset240012* x, Tbitset240012* y);
N_NIMCALL(NIM_BOOL, bitsetcontains_240091)(Tbitset240012* x, Tbitset240012* y);
STRING_LITERAL(TMP4064, "0 <= elem ", 10);
extern TFrame* frameptr_17042;
extern TNimType NTI110; /* int8 */
TNimType NTI240012; /* TBitSet */

static N_INLINE(NI64, divInt64)(NI64 a, NI64 b) {
	NI64 result;
{	result = 0;
	{
		if (!(b == IL64(0))) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == (IL64(-9223372036854775807) - IL64(1)));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == IL64(-1));
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();
	}
	LA9: ;
	result = (NI64)(a / b);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI64, modInt64)(NI64 a, NI64 b) {
	NI64 result;
{	result = 0;
	{
		if (!(b == IL64(0))) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	result = (NI64)(a % b);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

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

N_NIMCALL(NIM_BOOL, bitsetin_240077)(Tbitset240012* x, NI64 e) {
	NIM_BOOL result;
	NI64 TMP4062;
	NI64 TMP4063;
	nimfr("bitSetIn", "bitsets.nim")
	result = 0;
	nimln(34, "bitsets.nim");
	TMP4062 = divInt64(e, IL64(8));
	if ((NU)((NI64)(TMP4062)) >= (NU)(x->Sup.len)) raiseIndexError();
	TMP4063 = modInt64(e, IL64(8));
	result = !(((NI8)(x->data[(NI64)(TMP4062)] & ((NI8)(NU8)(NU)((NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI64)(TMP4063)))))))) == ((NI8) 0)));
	popFrame();
	return result;
}

N_NIMCALL(void, bitsetincl_240061)(Tbitset240012** x, NI64 elem) {
	NI64 TMP4065;
	NI64 TMP4066;
	NI64 TMP4067;
	nimfr("bitSetIncl", "bitsets.nim")
	nimln(38, "bitsets.nim");
	{
		if (!!((IL64(0) <= elem))) goto LA3;
		failedassertimpl_87017(((NimStringDesc*) &TMP4064));
	}
	LA3: ;
	nimln(39, "bitsets.nim");
	TMP4065 = divInt64(elem, IL64(8));
	if ((NU)((NI64)(TMP4065)) >= (NU)((*x)->Sup.len)) raiseIndexError();
	TMP4066 = divInt64(elem, IL64(8));
	if ((NU)((NI64)(TMP4066)) >= (NU)((*x)->Sup.len)) raiseIndexError();
	nimln(40, "bitsets.nim");
	TMP4067 = modInt64(elem, IL64(8));
	(*x)->data[(NI64)(TMP4065)] = (NI8)((*x)->data[(NI64)(TMP4066)] | ((NI8)(NU8)(NU)((NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI64)(TMP4067))))))));
	popFrame();
}

N_NIMCALL(void, bitsetexcl_240069)(Tbitset240012** x, NI64 elem) {
	NI64 TMP4068;
	NI64 TMP4069;
	NI64 TMP4070;
	nimfr("bitSetExcl", "bitsets.nim")
	nimln(43, "bitsets.nim");
	TMP4068 = divInt64(elem, IL64(8));
	if ((NU)((NI64)(TMP4068)) >= (NU)((*x)->Sup.len)) raiseIndexError();
	TMP4069 = divInt64(elem, IL64(8));
	if ((NU)((NI64)(TMP4069)) >= (NU)((*x)->Sup.len)) raiseIndexError();
	nimln(44, "bitsets.nim");
	TMP4070 = modInt64(elem, IL64(8));
	(*x)->data[(NI64)(TMP4068)] = (NI8)((*x)->data[(NI64)(TMP4069)] & (NI8)((NU8) ~(((NI8)(NU8)(NU)((NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI64)(TMP4070))))))))));
	popFrame();
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
N_NIMCALL(void, TMP4071)(void* p, NI op) {
	Tbitset240012* a;
	NI LOC1;
	a = (Tbitset240012*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

N_NIMCALL(void, bitsetinit_240021)(Tbitset240012** b, NI length) {
	nimfr("bitSetInit", "bitsets.nim")
	nimln(47, "bitsets.nim");
	unsureAsgnRef((void**) (&(*b)), (Tbitset240012*) newSeq((&NTI240012), ((NI)chckRange(length, ((NI) 0), ((NI) 2147483647)))));
	popFrame();
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

N_NIMCALL(void, bitsetunion_240029)(Tbitset240012** x, Tbitset240012* y) {
	nimfr("bitSetUnion", "bitsets.nim")
	{
		NI i_240260;
		NI HEX3Atmp_240262;
		NI res_240265;
		i_240260 = 0;
		HEX3Atmp_240262 = 0;
		nimln(50, "bitsets.nim");
		HEX3Atmp_240262 = ((*x) ? ((*x)->Sup.len-1) : -1);
		nimln(1598, "system.nim");
		res_240265 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4072;
				if (!(res_240265 <= HEX3Atmp_240262)) goto LA3;
				nimln(1600, "system.nim");
				i_240260 = res_240265;
				nimln(50, "bitsets.nim");
				if ((NU)(i_240260) >= (NU)((*x)->Sup.len)) raiseIndexError();
				if ((NU)(i_240260) >= (NU)((*x)->Sup.len)) raiseIndexError();
				if ((NU)(i_240260) >= (NU)(y->Sup.len)) raiseIndexError();
				(*x)->data[i_240260] = (NI8)((*x)->data[i_240260] | y->data[i_240260]);
				nimln(1614, "system.nim");
				TMP4072 = addInt(res_240265, ((NI) 1));
				res_240265 = (NI)(TMP4072);
			} LA3: ;
		}
	}
	popFrame();
}

N_NIMCALL(void, bitsetdiff_240037)(Tbitset240012** x, Tbitset240012* y) {
	nimfr("bitSetDiff", "bitsets.nim")
	{
		NI i_240301;
		NI HEX3Atmp_240303;
		NI res_240306;
		i_240301 = 0;
		HEX3Atmp_240303 = 0;
		nimln(53, "bitsets.nim");
		HEX3Atmp_240303 = ((*x) ? ((*x)->Sup.len-1) : -1);
		nimln(1598, "system.nim");
		res_240306 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4073;
				if (!(res_240306 <= HEX3Atmp_240303)) goto LA3;
				nimln(1600, "system.nim");
				i_240301 = res_240306;
				nimln(53, "bitsets.nim");
				if ((NU)(i_240301) >= (NU)((*x)->Sup.len)) raiseIndexError();
				if ((NU)(i_240301) >= (NU)((*x)->Sup.len)) raiseIndexError();
				if ((NU)(i_240301) >= (NU)(y->Sup.len)) raiseIndexError();
				(*x)->data[i_240301] = (NI8)((*x)->data[i_240301] & (NI8)((NU8) ~(y->data[i_240301])));
				nimln(1614, "system.nim");
				TMP4073 = addInt(res_240306, ((NI) 1));
				res_240306 = (NI)(TMP4073);
			} LA3: ;
		}
	}
	popFrame();
}

N_NIMCALL(void, bitsetsymdiff_240045)(Tbitset240012** x, Tbitset240012* y) {
	nimfr("bitSetSymDiff", "bitsets.nim")
	{
		NI i_240342;
		NI HEX3Atmp_240344;
		NI res_240347;
		i_240342 = 0;
		HEX3Atmp_240344 = 0;
		nimln(56, "bitsets.nim");
		HEX3Atmp_240344 = ((*x) ? ((*x)->Sup.len-1) : -1);
		nimln(1598, "system.nim");
		res_240347 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4074;
				if (!(res_240347 <= HEX3Atmp_240344)) goto LA3;
				nimln(1600, "system.nim");
				i_240342 = res_240347;
				nimln(56, "bitsets.nim");
				if ((NU)(i_240342) >= (NU)((*x)->Sup.len)) raiseIndexError();
				if ((NU)(i_240342) >= (NU)((*x)->Sup.len)) raiseIndexError();
				if ((NU)(i_240342) >= (NU)(y->Sup.len)) raiseIndexError();
				(*x)->data[i_240342] = (NI8)((*x)->data[i_240342] ^ y->data[i_240342]);
				nimln(1614, "system.nim");
				TMP4074 = addInt(res_240347, ((NI) 1));
				res_240347 = (NI)(TMP4074);
			} LA3: ;
		}
	}
	popFrame();
}

N_NIMCALL(void, bitsetintersect_240053)(Tbitset240012** x, Tbitset240012* y) {
	nimfr("bitSetIntersect", "bitsets.nim")
	{
		NI i_240383;
		NI HEX3Atmp_240385;
		NI res_240388;
		i_240383 = 0;
		HEX3Atmp_240385 = 0;
		nimln(59, "bitsets.nim");
		HEX3Atmp_240385 = ((*x) ? ((*x)->Sup.len-1) : -1);
		nimln(1598, "system.nim");
		res_240388 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4075;
				if (!(res_240388 <= HEX3Atmp_240385)) goto LA3;
				nimln(1600, "system.nim");
				i_240383 = res_240388;
				nimln(59, "bitsets.nim");
				if ((NU)(i_240383) >= (NU)((*x)->Sup.len)) raiseIndexError();
				if ((NU)(i_240383) >= (NU)((*x)->Sup.len)) raiseIndexError();
				if ((NU)(i_240383) >= (NU)(y->Sup.len)) raiseIndexError();
				(*x)->data[i_240383] = (NI8)((*x)->data[i_240383] & y->data[i_240383]);
				nimln(1614, "system.nim");
				TMP4075 = addInt(res_240388, ((NI) 1));
				res_240388 = (NI)(TMP4075);
			} LA3: ;
		}
	}
	popFrame();
}

N_NIMCALL(NIM_BOOL, bitsetequals_240084)(Tbitset240012* x, Tbitset240012* y) {
	NIM_BOOL result;
	nimfr("bitSetEquals", "bitsets.nim")
{	result = 0;
	{
		NI i_240424;
		NI HEX3Atmp_240426;
		NI res_240429;
		i_240424 = 0;
		HEX3Atmp_240426 = 0;
		nimln(62, "bitsets.nim");
		HEX3Atmp_240426 = (x ? (x->Sup.len-1) : -1);
		nimln(1598, "system.nim");
		res_240429 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4076;
				if (!(res_240429 <= HEX3Atmp_240426)) goto LA3;
				nimln(1600, "system.nim");
				i_240424 = res_240429;
				nimln(63, "bitsets.nim");
				{
					if ((NU)(i_240424) >= (NU)(x->Sup.len)) raiseIndexError();
					if ((NU)(i_240424) >= (NU)(y->Sup.len)) raiseIndexError();
					if (!!((x->data[i_240424] == y->data[i_240424]))) goto LA6;
					nimln(64, "bitsets.nim");
					result = NIM_FALSE;
					goto BeforeRet;
				}
				LA6: ;
				nimln(1614, "system.nim");
				TMP4076 = addInt(res_240429, ((NI) 1));
				res_240429 = (NI)(TMP4076);
			} LA3: ;
		}
	}
	nimln(65, "bitsets.nim");
	result = NIM_TRUE;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, bitsetcontains_240091)(Tbitset240012* x, Tbitset240012* y) {
	NIM_BOOL result;
	nimfr("bitSetContains", "bitsets.nim")
{	result = 0;
	{
		NI i_240465;
		NI HEX3Atmp_240467;
		NI res_240470;
		i_240465 = 0;
		HEX3Atmp_240467 = 0;
		nimln(68, "bitsets.nim");
		HEX3Atmp_240467 = (x ? (x->Sup.len-1) : -1);
		nimln(1598, "system.nim");
		res_240470 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4077;
				if (!(res_240470 <= HEX3Atmp_240467)) goto LA3;
				nimln(1600, "system.nim");
				i_240465 = res_240470;
				nimln(69, "bitsets.nim");
				{
					if ((NU)(i_240465) >= (NU)(x->Sup.len)) raiseIndexError();
					if ((NU)(i_240465) >= (NU)(y->Sup.len)) raiseIndexError();
					if (!!(((NI8)(x->data[i_240465] & (NI8)((NU8) ~(y->data[i_240465]))) == ((NI8) 0)))) goto LA6;
					nimln(70, "bitsets.nim");
					result = NIM_FALSE;
					goto BeforeRet;
				}
				LA6: ;
				nimln(1614, "system.nim");
				TMP4077 = addInt(res_240470, ((NI) 1));
				res_240470 = (NI)(TMP4077);
			} LA3: ;
		}
	}
	nimln(71, "bitsets.nim");
	result = NIM_TRUE;
	}BeforeRet: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_bitsetsInit)(void) {
	nimfr("bitsets", "bitsets.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_bitsetsDatInit)(void) {
NTI240012.size = sizeof(Tbitset240012*);
NTI240012.kind = 24;
NTI240012.base = (&NTI110);
NTI240012.flags = 2;
NTI240012.marker = TMP4071;
}

