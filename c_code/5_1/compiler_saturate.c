/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
N_NIMCALL(NI64, HEX7CHEX2BHEX7C_255019)(NI64 a, NI64 b);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NI64, HEX7CHEX2DHEX7C_255030)(NI64 a, NI64 b);
N_NIMCALL(NI64, HEX7CabsHEX7C_255041)(NI64 a);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NI64, HEX7CdivHEX7C_255051)(NI64 a, NI64 b);
static N_INLINE(NI64, divInt64)(NI64 a, NI64 b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NIMCALL(NI64, HEX7CmodHEX7C_255062)(NI64 a, NI64 b);
static N_INLINE(NI64, modInt64)(NI64 a, NI64 b);
N_NIMCALL(NI64, HEX7CHEX2AHEX7C_255073)(NI64 a, NI64 b);
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

N_NIMCALL(NI64, HEX7CHEX2BHEX7C_255019)(NI64 a, NI64 b) {
	NI64 result;
	nimfr("|+|", "saturate.nim")
{	result = 0;
	nimln(14, "saturate.nim");
	result = (NI64)((NU64)(a) + (NU64)(b));
	nimln(15, "saturate.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (IL64(0) <= (NI64)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (IL64(0) <= (NI64)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(16, "saturate.nim");
		goto BeforeRet;
	}
	LA5: ;
	nimln(17, "saturate.nim");
	{
		NIM_BOOL LOC9;
		LOC9 = 0;
		LOC9 = (a < IL64(0));
		if (LOC9) goto LA10;
		LOC9 = (b < IL64(0));
		LA10: ;
		if (!LOC9) goto LA11;
		nimln(18, "saturate.nim");
		result = (IL64(-9223372036854775807) - IL64(1));
	}
	goto LA7;
	LA11: ;
	{
		nimln(20, "saturate.nim");
		result = IL64(9223372036854775807);
	}
	LA7: ;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NI64, HEX7CHEX2DHEX7C_255030)(NI64 a, NI64 b) {
	NI64 result;
	nimfr("|-|", "saturate.nim")
{	result = 0;
	nimln(23, "saturate.nim");
	result = (NI64)((NU64)(a) - (NU64)(b));
	nimln(24, "saturate.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (IL64(0) <= (NI64)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (IL64(0) <= (NI64)(result ^ (NI64)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(25, "saturate.nim");
		goto BeforeRet;
	}
	LA5: ;
	nimln(26, "saturate.nim");
	{
		if (!(IL64(0) < b)) goto LA9;
		nimln(27, "saturate.nim");
		result = (IL64(-9223372036854775807) - IL64(1));
	}
	goto LA7;
	LA9: ;
	{
		nimln(29, "saturate.nim");
		result = IL64(9223372036854775807);
	}
	LA7: ;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NI64, HEX7CabsHEX7C_255041)(NI64 a) {
	NI64 result;
	nimfr("|abs|", "saturate.nim")
	result = 0;
	nimln(32, "saturate.nim");
	{
		if (!!((a == (IL64(-9223372036854775807) - IL64(1))))) goto LA3;
		nimln(33, "saturate.nim");
		{
			if (!(IL64(0) <= a)) goto LA7;
			result = a;
		}
		goto LA5;
		LA7: ;
		{
			nimln(34, "saturate.nim");
			if (a == (IL64(-9223372036854775807) - IL64(1))) raiseOverflow();
			result = -(a);
		}
		LA5: ;
	}
	goto LA1;
	LA3: ;
	{
		nimln(36, "saturate.nim");
		result = (IL64(-9223372036854775807) - IL64(1));
	}
	LA1: ;
	popFrame();
	return result;
}

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

N_NIMCALL(NI64, HEX7CdivHEX7C_255051)(NI64 a, NI64 b) {
	NI64 result;
	nimfr("|div|", "saturate.nim")
	result = 0;
	nimln(40, "saturate.nim");
	{
		if (!(b == IL64(0))) goto LA3;
		nimln(42, "saturate.nim");
		result = a;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(43, "saturate.nim");
		LOC6 = 0;
		LOC6 = (a == (IL64(-9223372036854775807) - IL64(1)));
		if (!(LOC6)) goto LA7;
		LOC6 = (b == IL64(-1));
		LA7: ;
		if (!LOC6) goto LA8;
		nimln(44, "saturate.nim");
		result = IL64(9223372036854775807);
	}
	goto LA1;
	LA8: ;
	{
		NI64 TMP4434;
		nimln(46, "saturate.nim");
		TMP4434 = divInt64(a, b);
		result = (NI64)(TMP4434);
	}
	LA1: ;
	popFrame();
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

N_NIMCALL(NI64, HEX7CmodHEX7C_255062)(NI64 a, NI64 b) {
	NI64 result;
	nimfr("|mod|", "saturate.nim")
	result = 0;
	nimln(49, "saturate.nim");
	{
		if (!(b == IL64(0))) goto LA3;
		nimln(50, "saturate.nim");
		result = a;
	}
	goto LA1;
	LA3: ;
	{
		NI64 TMP4435;
		nimln(52, "saturate.nim");
		TMP4435 = modInt64(a, b);
		result = (NI64)(TMP4435);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NI64, HEX7CHEX2AHEX7C_255073)(NI64 a, NI64 b) {
	NI64 result;
	NF resasfloat;
	NF floatprod;
	nimfr("|*|", "saturate.nim")
{	result = 0;
	resasfloat = 0;
	floatprod = 0;
	nimln(57, "saturate.nim");
	result = (NI64)((NU64)(a) * (NU64)(b));
	nimln(58, "saturate.nim");
	floatprod = ((double) (a));
	nimln(59, "saturate.nim");
	floatprod = ((NF)(floatprod) * (NF)(((double) (b))));
	nimln(60, "saturate.nim");
	resasfloat = ((double) (result));
	nimln(64, "saturate.nim");
	{
		if (!(resasfloat == floatprod)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	nimln(73, "saturate.nim");
	{
		if (!(((NF)(3.2000000000000000e+01) * (NF)((((NF)(resasfloat) - (NF)(floatprod)) > 0? (((NF)(resasfloat) - (NF)(floatprod))) : -(((NF)(resasfloat) - (NF)(floatprod)))))) <= (floatprod > 0? (floatprod) : -(floatprod)))) goto LA7;
		nimln(74, "saturate.nim");
		goto BeforeRet;
	}
	LA7: ;
	nimln(76, "saturate.nim");
	{
		if (!(0.0 <= floatprod)) goto LA11;
		nimln(77, "saturate.nim");
		result = IL64(9223372036854775807);
	}
	goto LA9;
	LA11: ;
	{
		nimln(79, "saturate.nim");
		result = (IL64(-9223372036854775807) - IL64(1));
	}
	LA9: ;
	}BeforeRet: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_saturateInit)(void) {
	nimfr("saturate", "saturate.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_saturateDatInit)(void) {
}

