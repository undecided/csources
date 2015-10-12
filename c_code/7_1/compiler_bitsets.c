/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct Tbitset238012 Tbitset238012;
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
struct Tbitset238012 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, bitsetin_238077)(Tbitset238012* x, NI64 e);
static N_INLINE(NI64, divInt64)(NI64 a, NI64 b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI64, modInt64)(NI64 a, NI64 b);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, bitsetincl_238061)(Tbitset238012** x, NI64 elem);
N_NIMCALL(void, failedassertimpl_87017)(NimStringDesc* msg);
N_NIMCALL(void, bitsetexcl_238069)(Tbitset238012** x, NI64 elem);
N_NIMCALL(void, bitsetinit_238021)(Tbitset238012** b, NI length);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(void, TMP4074)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(void, bitsetunion_238029)(Tbitset238012** x, Tbitset238012* y);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, bitsetdiff_238037)(Tbitset238012** x, Tbitset238012* y);
N_NIMCALL(void, bitsetsymdiff_238045)(Tbitset238012** x, Tbitset238012* y);
N_NIMCALL(void, bitsetintersect_238053)(Tbitset238012** x, Tbitset238012* y);
N_NIMCALL(NIM_BOOL, bitsetequals_238084)(Tbitset238012* x, Tbitset238012* y);
N_NIMCALL(NIM_BOOL, bitsetcontains_238091)(Tbitset238012* x, Tbitset238012* y);
STRING_LITERAL(TMP4067, "0 <= elem ", 10);
extern TFrame* frameptr_17042;
extern TNimType NTI110; /* int8 */
TNimType NTI238012; /* TBitSet */

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

N_NIMCALL(NIM_BOOL, bitsetin_238077)(Tbitset238012* x, NI64 e) {
	NIM_BOOL result;
	NI64 TMP4065;
	NI64 TMP4066;
	nimfr("bitSetIn", "bitsets.nim")
	result = 0;
	nimln(34, "bitsets.nim");
	TMP4065 = divInt64(e, IL64(8));
	if ((NU)((NI64)(TMP4065)) >= (NU)(x->Sup.len)) raiseIndexError();
	TMP4066 = modInt64(e, IL64(8));
	result = !(((NI8)(x->data[(NI64)(TMP4065)] & ((NI8)(NU8)(NU)((NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI64)(TMP4066)))))))) == ((NI8) 0)));
	popFrame();
	return result;
}

N_NIMCALL(void, bitsetincl_238061)(Tbitset238012** x, NI64 elem) {
	NI64 TMP4068;
	NI64 TMP4069;
	NI64 TMP4070;
	nimfr("bitSetIncl", "bitsets.nim")
	nimln(38, "bitsets.nim");
	{
		if (!!((IL64(0) <= elem))) goto LA3;
		failedassertimpl_87017(((NimStringDesc*) &TMP4067));
	}
	LA3: ;
	nimln(39, "bitsets.nim");
	TMP4068 = divInt64(elem, IL64(8));
	if ((NU)((NI64)(TMP4068)) >= (NU)((*x)->Sup.len)) raiseIndexError();
	TMP4069 = divInt64(elem, IL64(8));
	if ((NU)((NI64)(TMP4069)) >= (NU)((*x)->Sup.len)) raiseIndexError();
	nimln(40, "bitsets.nim");
	TMP4070 = modInt64(elem, IL64(8));
	(*x)->data[(NI64)(TMP4068)] = (NI8)((*x)->data[(NI64)(TMP4069)] | ((NI8)(NU8)(NU)((NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI64)(TMP4070))))))));
	popFrame();
}

N_NIMCALL(void, bitsetexcl_238069)(Tbitset238012** x, NI64 elem) {
	NI64 TMP4071;
	NI64 TMP4072;
	NI64 TMP4073;
	nimfr("bitSetExcl", "bitsets.nim")
	nimln(43, "bitsets.nim");
	TMP4071 = divInt64(elem, IL64(8));
	if ((NU)((NI64)(TMP4071)) >= (NU)((*x)->Sup.len)) raiseIndexError();
	TMP4072 = divInt64(elem, IL64(8));
	if ((NU)((NI64)(TMP4072)) >= (NU)((*x)->Sup.len)) raiseIndexError();
	nimln(44, "bitsets.nim");
	TMP4073 = modInt64(elem, IL64(8));
	(*x)->data[(NI64)(TMP4071)] = (NI8)((*x)->data[(NI64)(TMP4072)] & (NI8)((NU8) ~(((NI8)(NU8)(NU)((NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI64)(TMP4073))))))))));
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
N_NIMCALL(void, TMP4074)(void* p, NI op) {
	Tbitset238012* a;
	NI LOC1;
	a = (Tbitset238012*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

N_NIMCALL(void, bitsetinit_238021)(Tbitset238012** b, NI length) {
	nimfr("bitSetInit", "bitsets.nim")
	nimln(47, "bitsets.nim");
	unsureAsgnRef((void**) (&(*b)), (Tbitset238012*) newSeq((&NTI238012), ((NI)chckRange(length, ((NI) 0), ((NI) 2147483647)))));
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

N_NIMCALL(void, bitsetunion_238029)(Tbitset238012** x, Tbitset238012* y) {
	nimfr("bitSetUnion", "bitsets.nim")
	{
		NI i_238260;
		NI HEX3Atmp_238262;
		NI res_238265;
		i_238260 = 0;
		HEX3Atmp_238262 = 0;
		nimln(50, "bitsets.nim");
		HEX3Atmp_238262 = ((*x) ? ((*x)->Sup.len-1) : -1);
		nimln(1598, "system.nim");
		res_238265 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4075;
				if (!(res_238265 <= HEX3Atmp_238262)) goto LA3;
				nimln(1600, "system.nim");
				i_238260 = res_238265;
				nimln(50, "bitsets.nim");
				if ((NU)(i_238260) >= (NU)((*x)->Sup.len)) raiseIndexError();
				if ((NU)(i_238260) >= (NU)((*x)->Sup.len)) raiseIndexError();
				if ((NU)(i_238260) >= (NU)(y->Sup.len)) raiseIndexError();
				(*x)->data[i_238260] = (NI8)((*x)->data[i_238260] | y->data[i_238260]);
				nimln(1614, "system.nim");
				TMP4075 = addInt(res_238265, ((NI) 1));
				res_238265 = (NI)(TMP4075);
			} LA3: ;
		}
	}
	popFrame();
}

N_NIMCALL(void, bitsetdiff_238037)(Tbitset238012** x, Tbitset238012* y) {
	nimfr("bitSetDiff", "bitsets.nim")
	{
		NI i_238301;
		NI HEX3Atmp_238303;
		NI res_238306;
		i_238301 = 0;
		HEX3Atmp_238303 = 0;
		nimln(53, "bitsets.nim");
		HEX3Atmp_238303 = ((*x) ? ((*x)->Sup.len-1) : -1);
		nimln(1598, "system.nim");
		res_238306 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4076;
				if (!(res_238306 <= HEX3Atmp_238303)) goto LA3;
				nimln(1600, "system.nim");
				i_238301 = res_238306;
				nimln(53, "bitsets.nim");
				if ((NU)(i_238301) >= (NU)((*x)->Sup.len)) raiseIndexError();
				if ((NU)(i_238301) >= (NU)((*x)->Sup.len)) raiseIndexError();
				if ((NU)(i_238301) >= (NU)(y->Sup.len)) raiseIndexError();
				(*x)->data[i_238301] = (NI8)((*x)->data[i_238301] & (NI8)((NU8) ~(y->data[i_238301])));
				nimln(1614, "system.nim");
				TMP4076 = addInt(res_238306, ((NI) 1));
				res_238306 = (NI)(TMP4076);
			} LA3: ;
		}
	}
	popFrame();
}

N_NIMCALL(void, bitsetsymdiff_238045)(Tbitset238012** x, Tbitset238012* y) {
	nimfr("bitSetSymDiff", "bitsets.nim")
	{
		NI i_238342;
		NI HEX3Atmp_238344;
		NI res_238347;
		i_238342 = 0;
		HEX3Atmp_238344 = 0;
		nimln(56, "bitsets.nim");
		HEX3Atmp_238344 = ((*x) ? ((*x)->Sup.len-1) : -1);
		nimln(1598, "system.nim");
		res_238347 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4077;
				if (!(res_238347 <= HEX3Atmp_238344)) goto LA3;
				nimln(1600, "system.nim");
				i_238342 = res_238347;
				nimln(56, "bitsets.nim");
				if ((NU)(i_238342) >= (NU)((*x)->Sup.len)) raiseIndexError();
				if ((NU)(i_238342) >= (NU)((*x)->Sup.len)) raiseIndexError();
				if ((NU)(i_238342) >= (NU)(y->Sup.len)) raiseIndexError();
				(*x)->data[i_238342] = (NI8)((*x)->data[i_238342] ^ y->data[i_238342]);
				nimln(1614, "system.nim");
				TMP4077 = addInt(res_238347, ((NI) 1));
				res_238347 = (NI)(TMP4077);
			} LA3: ;
		}
	}
	popFrame();
}

N_NIMCALL(void, bitsetintersect_238053)(Tbitset238012** x, Tbitset238012* y) {
	nimfr("bitSetIntersect", "bitsets.nim")
	{
		NI i_238383;
		NI HEX3Atmp_238385;
		NI res_238388;
		i_238383 = 0;
		HEX3Atmp_238385 = 0;
		nimln(59, "bitsets.nim");
		HEX3Atmp_238385 = ((*x) ? ((*x)->Sup.len-1) : -1);
		nimln(1598, "system.nim");
		res_238388 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4078;
				if (!(res_238388 <= HEX3Atmp_238385)) goto LA3;
				nimln(1600, "system.nim");
				i_238383 = res_238388;
				nimln(59, "bitsets.nim");
				if ((NU)(i_238383) >= (NU)((*x)->Sup.len)) raiseIndexError();
				if ((NU)(i_238383) >= (NU)((*x)->Sup.len)) raiseIndexError();
				if ((NU)(i_238383) >= (NU)(y->Sup.len)) raiseIndexError();
				(*x)->data[i_238383] = (NI8)((*x)->data[i_238383] & y->data[i_238383]);
				nimln(1614, "system.nim");
				TMP4078 = addInt(res_238388, ((NI) 1));
				res_238388 = (NI)(TMP4078);
			} LA3: ;
		}
	}
	popFrame();
}

N_NIMCALL(NIM_BOOL, bitsetequals_238084)(Tbitset238012* x, Tbitset238012* y) {
	NIM_BOOL result;
	nimfr("bitSetEquals", "bitsets.nim")
{	result = 0;
	{
		NI i_238424;
		NI HEX3Atmp_238426;
		NI res_238429;
		i_238424 = 0;
		HEX3Atmp_238426 = 0;
		nimln(62, "bitsets.nim");
		HEX3Atmp_238426 = (x ? (x->Sup.len-1) : -1);
		nimln(1598, "system.nim");
		res_238429 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4079;
				if (!(res_238429 <= HEX3Atmp_238426)) goto LA3;
				nimln(1600, "system.nim");
				i_238424 = res_238429;
				nimln(63, "bitsets.nim");
				{
					if ((NU)(i_238424) >= (NU)(x->Sup.len)) raiseIndexError();
					if ((NU)(i_238424) >= (NU)(y->Sup.len)) raiseIndexError();
					if (!!((x->data[i_238424] == y->data[i_238424]))) goto LA6;
					nimln(64, "bitsets.nim");
					result = NIM_FALSE;
					goto BeforeRet;
				}
				LA6: ;
				nimln(1614, "system.nim");
				TMP4079 = addInt(res_238429, ((NI) 1));
				res_238429 = (NI)(TMP4079);
			} LA3: ;
		}
	}
	nimln(65, "bitsets.nim");
	result = NIM_TRUE;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, bitsetcontains_238091)(Tbitset238012* x, Tbitset238012* y) {
	NIM_BOOL result;
	nimfr("bitSetContains", "bitsets.nim")
{	result = 0;
	{
		NI i_238465;
		NI HEX3Atmp_238467;
		NI res_238470;
		i_238465 = 0;
		HEX3Atmp_238467 = 0;
		nimln(68, "bitsets.nim");
		HEX3Atmp_238467 = (x ? (x->Sup.len-1) : -1);
		nimln(1598, "system.nim");
		res_238470 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4080;
				if (!(res_238470 <= HEX3Atmp_238467)) goto LA3;
				nimln(1600, "system.nim");
				i_238465 = res_238470;
				nimln(69, "bitsets.nim");
				{
					if ((NU)(i_238465) >= (NU)(x->Sup.len)) raiseIndexError();
					if ((NU)(i_238465) >= (NU)(y->Sup.len)) raiseIndexError();
					if (!!(((NI8)(x->data[i_238465] & (NI8)((NU8) ~(y->data[i_238465]))) == ((NI8) 0)))) goto LA6;
					nimln(70, "bitsets.nim");
					result = NIM_FALSE;
					goto BeforeRet;
				}
				LA6: ;
				nimln(1614, "system.nim");
				TMP4080 = addInt(res_238470, ((NI) 1));
				res_238470 = (NI)(TMP4080);
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
NTI238012.size = sizeof(Tbitset238012*);
NTI238012.kind = 24;
NTI238012.base = (&NTI110);
NTI238012.flags = 2;
NTI238012.marker = TMP4074;
}

