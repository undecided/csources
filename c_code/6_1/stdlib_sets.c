/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, isempty_151234)(NI hcode);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL, isfilled_151244)(NI hcode);
static N_INLINE(NIM_BOOL, mustrehash_151303)(NI length, NI counter);
N_NIMCALL(void, failedassertimpl_87017)(NimStringDesc* msg);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, rightsize_151407)(NI count);
N_NIMCALL(NI, nextpoweroftwo_148531)(NI x);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(NI, nexttry_151420)(NI h, NI maxhash);
STRING_LITERAL(TMP656, "counter < length ", 17);
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

static N_INLINE(NIM_BOOL, isempty_151234)(NI hcode) {
	NIM_BOOL result;
	nimfr("isEmpty", "sets.nim")
	result = 0;
	nimln(47, "sets.nim");
	result = (hcode == ((NI) 0));
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, isfilled_151244)(NI hcode) {
	NIM_BOOL result;
	nimfr("isFilled", "sets.nim")
	result = 0;
	nimln(50, "sets.nim");
	result = !((hcode == ((NI) 0)));
	popFrame();
	return result;
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

static N_INLINE(NIM_BOOL, mustrehash_151303)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC5;
	NI TMP657;
	NI TMP658;
	NI TMP659;
	nimfr("mustRehash", "sets.nim")
	result = 0;
	nimln(114, "sets.nim");
	{
		if (!!((counter < length))) goto LA3;
		failedassertimpl_87017(((NimStringDesc*) &TMP656));
	}
	LA3: ;
	nimln(115, "sets.nim");
	LOC5 = 0;
	TMP657 = mulInt(length, ((NI) 2));
	TMP658 = mulInt(counter, ((NI) 3));
	LOC5 = ((NI)(TMP657) < (NI)(TMP658));
	if (LOC5) goto LA6;
	TMP659 = subInt(length, counter);
	LOC5 = ((NI)(TMP659) < ((NI) 4));
	LA6: ;
	result = LOC5;
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

static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
{	result = 0;
	{
		if (!(b == ((NI) 0))) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == ((NI) (-2147483647 -1)));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == ((NI) -1));
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();
	}
	LA9: ;
	result = (NI)(a / b);
	goto BeforeRet;
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

static N_INLINE(NI, rightsize_151407)(NI count) {
	NI result;
	NI TMP660;
	NI TMP661;
	NI TMP662;
	nimfr("rightSize", "sets.nim")
	result = 0;
	nimln(124, "sets.nim");
	TMP660 = mulInt(((NI) (count)), ((NI) 3));
	TMP661 = divInt(((NI)chckRange((NI)(TMP660), ((NI) (-2147483647 -1)), ((NI) 2147483647))), ((NI) 2));
	TMP662 = addInt(((NI)chckRange((NI)(TMP661), ((NI) (-2147483647 -1)), ((NI) 2147483647))), ((NI) 4));
	result = nextpoweroftwo_148531(((NI)chckRange((NI)(TMP662), ((NI) (-2147483647 -1)), ((NI) 2147483647))));
	popFrame();
	return result;
}

static N_INLINE(NI, nexttry_151420)(NI h, NI maxhash) {
	NI result;
	NI TMP663;
	nimfr("nextTry", "sets.nim")
	result = 0;
	nimln(127, "sets.nim");
	TMP663 = addInt(h, ((NI) 1));
	result = (NI)((NI)(TMP663) & maxhash);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_setsInit)(void) {
	nimfr("sets", "sets.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_setsDatInit)(void) {
}

