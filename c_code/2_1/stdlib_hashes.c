/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Jsonnodeobj290726 Jsonnodeobj290726;
typedef struct TY290742 TY290742;
typedef struct TY290741 TY290741;
typedef struct TY290746 TY290746;
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
struct TY290742 {
NimStringDesc* Field0;
Jsonnodeobj290726* Field1;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Jsonnodeobj290726  {
NU8 kind;
union{
struct {NimStringDesc* str;
} S1;
struct {NI64 num;
} S2;
struct {NF fnum;
} S3;
struct {NIM_BOOL bval;
} S4;
struct {TY290741* fields;
} S6;
struct {TY290746* elems;
} S7;
} kindU;
};
struct TY290741 {
  TGenericSeq Sup;
  TY290742 data[SEQ_DECL_SIZE];
};
struct TY290746 {
  TGenericSeq Sup;
  Jsonnodeobj290726* data[SEQ_DECL_SIZE];
};
static N_INLINE(NI, HEX21HEX26_131025)(NI h, NI val);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, HEX21HEX24_131054)(NI h);
N_NIMCALL(NI, hashdata_131082)(void* data, NI size);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
static N_INLINE(NI, hash_131401)(void* x);
static N_INLINE(NI, hash_131801)(NI x);
static N_INLINE(NI, hash_131811)(NI64 x);
static N_INLINE(NI, hash_131821)(NIM_CHAR x);
N_NIMCALL(NI, hash_131839)(NimStringDesc* x);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NI, hashignorestyle_131887)(NimStringDesc* x);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NI, hashignorecase_131978)(NimStringDesc* x);
static N_INLINE(NI, hash_132079)(NF x);
N_NIMCALL(NI, hash_291945)(Jsonnodeobj290726* n);
N_NIMCALL(NI, hash_292058)(TY290742 x);
extern TFrame* frameptr_17042;
TNimType NTI131021; /* THash */

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

static N_INLINE(NI, HEX21HEX26_131025)(NI h, NI val) {
	NI result;
	nimfr("!&", "hashes.nim")
	result = 0;
	nimln(51, "hashes.nim");
	result = (NI)((NU32)(h) + (NU32)(val));
	nimln(52, "hashes.nim");
	result = (NI)((NU32)(result) + (NU32)((NI)((NU32)(result) << (NU32)(((NI) 10)))));
	nimln(53, "hashes.nim");
	result = (NI)(result ^ (NI)((NU32)(result) >> (NU32)(((NI) 6))));
	popFrame();
	return result;
}

static N_INLINE(NI, HEX21HEX24_131054)(NI h) {
	NI result;
	nimfr("!$", "hashes.nim")
	result = 0;
	nimln(58, "hashes.nim");
	result = (NI)((NU32)(h) + (NU32)((NI)((NU32)(h) << (NU32)(((NI) 3)))));
	nimln(59, "hashes.nim");
	result = (NI)(result ^ (NI)((NU32)(result) >> (NU32)(((NI) 11))));
	nimln(60, "hashes.nim");
	result = (NI)((NU32)(result) + (NU32)((NI)((NU32)(result) << (NU32)(((NI) 15)))));
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

N_NIMCALL(NI, hashdata_131082)(void* data, NI size) {
	NI result;
	NI h;
	NCSTRING p;
	NI i;
	NI s;
	nimfr("hashData", "hashes.nim")
	result = 0;
	nimln(64, "hashes.nim");
	h = ((NI) 0);
	nimln(69, "hashes.nim");
	p = ((NCSTRING) (data));
	nimln(70, "hashes.nim");
	i = ((NI) 0);
	nimln(71, "hashes.nim");
	s = size;
	{
		nimln(72, "hashes.nim");
		while (1) {
			NI TMP480;
			NI TMP481;
			if (!(((NI) 0) < s)) goto LA2;
			nimln(73, "hashes.nim");
			h = HEX21HEX26_131025(h, ((NI) (((NU8)(p[i])))));
			nimln(74, "hashes.nim");
			TMP480 = addInt(i, ((NI) 1));
			i = (NI)(TMP480);
			nimln(75, "hashes.nim");
			TMP481 = subInt(s, ((NI) 1));
			s = (NI)(TMP481);
		} LA2: ;
	}
	nimln(76, "hashes.nim");
	result = HEX21HEX24_131054(h);
	popFrame();
	return result;
}

static N_INLINE(NI, hash_131401)(void* x) {
	NI result;
	nimfr("hash", "hashes.nim")
	result = 0;
	nimln(95, "hashes.nim");
	result = (NI)((NU32)(((NI) (x))) >> (NU32)(((NI) 3)));
	popFrame();
	return result;
}

static N_INLINE(NI, hash_131801)(NI x) {
	NI result;
	nimfr("hash", "hashes.nim")
	result = 0;
	nimln(107, "hashes.nim");
	result = x;
	popFrame();
	return result;
}

static N_INLINE(NI, hash_131811)(NI64 x) {
	NI result;
	nimfr("hash", "hashes.nim")
	result = 0;
	nimln(111, "hashes.nim");
	result = ((NI) (((NI32)(NU32)(NU64)(x))));
	popFrame();
	return result;
}

static N_INLINE(NI, hash_131821)(NIM_CHAR x) {
	NI result;
	nimfr("hash", "hashes.nim")
	result = 0;
	nimln(115, "hashes.nim");
	result = ((NI) (((NU8)(x))));
	popFrame();
	return result;
}

N_NIMCALL(NI, hash_131839)(NimStringDesc* x) {
	NI result;
	NI h;
	nimfr("hash", "hashes.nim")
	result = 0;
	nimln(119, "hashes.nim");
	h = ((NI) 0);
	{
		NI i_131854;
		NI HEX3Atmp_131865;
		NI TMP482;
		NI res_131868;
		i_131854 = 0;
		HEX3Atmp_131865 = 0;
		nimln(120, "hashes.nim");
		TMP482 = subInt((x ? x->Sup.len : 0), ((NI) 1));
		HEX3Atmp_131865 = (NI)(TMP482);
		nimln(1598, "system.nim");
		res_131868 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP483;
				if (!(res_131868 <= HEX3Atmp_131865)) goto LA3;
				nimln(1600, "system.nim");
				i_131854 = res_131868;
				nimln(121, "hashes.nim");
				if ((NU)(i_131854) > (NU)(x->Sup.len)) raiseIndexError();
				h = HEX21HEX26_131025(h, ((NI) (((NU8)(x->data[i_131854])))));
				nimln(1619, "system.nim");
				TMP483 = addInt(res_131868, ((NI) 1));
				res_131868 = (NI)(TMP483);
			} LA3: ;
		}
	}
	nimln(122, "hashes.nim");
	result = HEX21HEX24_131054(h);
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

N_NIMCALL(NI, hashignorestyle_131887)(NimStringDesc* x) {
	NI result;
	NI h;
	nimfr("hashIgnoreStyle", "hashes.nim")
	result = 0;
	nimln(126, "hashes.nim");
	h = ((NI) 0);
	{
		NI i_131902;
		NI HEX3Atmp_131953;
		NI TMP484;
		NI res_131956;
		i_131902 = 0;
		HEX3Atmp_131953 = 0;
		nimln(127, "hashes.nim");
		TMP484 = subInt((x ? x->Sup.len : 0), ((NI) 1));
		HEX3Atmp_131953 = (NI)(TMP484);
		nimln(1598, "system.nim");
		res_131956 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP486;
				if (!(res_131956 <= HEX3Atmp_131953)) goto LA3;
				nimln(1600, "system.nim");
				i_131902 = res_131956;
				{
					NIM_CHAR c;
					nimln(128, "hashes.nim");
					if ((NU)(i_131902) > (NU)(x->Sup.len)) raiseIndexError();
					c = x->data[i_131902];
					nimln(129, "hashes.nim");
					{
						if (!((NU8)(c) == (NU8)(95))) goto LA7;
						nimln(130, "hashes.nim");
						goto LA4;
					}
					LA7: ;
					nimln(131, "hashes.nim");
					{
						NI TMP485;
						if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA11;
						nimln(132, "hashes.nim");
						TMP485 = addInt(((NI) (((NU8)(c)))), ((NI) 32));
						c = ((NIM_CHAR) (((NI)chckRange((NI)(TMP485), ((NI) 0), ((NI) 255)))));
					}
					LA11: ;
					nimln(133, "hashes.nim");
					h = HEX21HEX26_131025(h, ((NI) (((NU8)(c)))));
				} LA4: ;
				nimln(1619, "system.nim");
				TMP486 = addInt(res_131956, ((NI) 1));
				res_131956 = (NI)(TMP486);
			} LA3: ;
		}
	}
	nimln(134, "hashes.nim");
	result = HEX21HEX24_131054(h);
	popFrame();
	return result;
}

N_NIMCALL(NI, hashignorecase_131978)(NimStringDesc* x) {
	NI result;
	NI h;
	nimfr("hashIgnoreCase", "hashes.nim")
	result = 0;
	nimln(138, "hashes.nim");
	h = ((NI) 0);
	{
		NI i_131993;
		NI HEX3Atmp_132043;
		NI TMP487;
		NI res_132046;
		i_131993 = 0;
		HEX3Atmp_132043 = 0;
		nimln(139, "hashes.nim");
		TMP487 = subInt((x ? x->Sup.len : 0), ((NI) 1));
		HEX3Atmp_132043 = (NI)(TMP487);
		nimln(1598, "system.nim");
		res_132046 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NIM_CHAR c;
				NI TMP489;
				if (!(res_132046 <= HEX3Atmp_132043)) goto LA3;
				nimln(1600, "system.nim");
				i_131993 = res_132046;
				nimln(140, "hashes.nim");
				if ((NU)(i_131993) > (NU)(x->Sup.len)) raiseIndexError();
				c = x->data[i_131993];
				nimln(141, "hashes.nim");
				{
					NI TMP488;
					if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA6;
					nimln(142, "hashes.nim");
					TMP488 = addInt(((NI) (((NU8)(c)))), ((NI) 32));
					c = ((NIM_CHAR) (((NI)chckRange((NI)(TMP488), ((NI) 0), ((NI) 255)))));
				}
				LA6: ;
				nimln(143, "hashes.nim");
				h = HEX21HEX26_131025(h, ((NI) (((NU8)(c)))));
				nimln(1619, "system.nim");
				TMP489 = addInt(res_132046, ((NI) 1));
				res_132046 = (NI)(TMP489);
			} LA3: ;
		}
	}
	nimln(144, "hashes.nim");
	result = HEX21HEX24_131054(h);
	popFrame();
	return result;
}

static N_INLINE(NI, hash_132079)(NF x) {
	NI result;
	NF y;
	nimfr("hash", "hashes.nim")
	result = 0;
	nimln(153, "hashes.nim");
	y = ((NF)(x) + (NF)(1.0000000000000000e+00));
	nimln(154, "hashes.nim");
	result = (*((NI*) ((&y))));
	popFrame();
	return result;
}

N_NIMCALL(NI, hash_292058)(TY290742 x) {
	NI result;
	NI LOC1;
	NI LOC2;
	nimfr("hash", "hashes.nim")
	result = 0;
	nimln(149, "hashes.nim");
	LOC1 = 0;
	LOC1 = hash_131839(x.Field0);
	result = HEX21HEX26_131025(result, LOC1);
	LOC2 = 0;
	LOC2 = hash_291945(x.Field1);
	result = HEX21HEX26_131025(result, LOC2);
	nimln(150, "hashes.nim");
	result = HEX21HEX24_131054(result);
	popFrame();
	return result;
}

N_NIMCALL(NI, hash_292014)(TY290742* x, NI xLen0) {
	NI result;
	nimfr("hash", "hashes.nim")
	result = 0;
	{
		TY290742 it_292056;
		NI i_292076;
		memset((void*)(&it_292056), 0, sizeof(it_292056));
		nimln(1689, "system.nim");
		i_292076 = ((NI) 0);
		{
			nimln(1690, "system.nim");
			while (1) {
				NI LOC4;
				NI TMP4937;
				if (!(i_292076 < xLen0)) goto LA3;
				nimln(1691, "system.nim");
				if ((NU)(i_292076) >= (NU)(xLen0)) raiseIndexError();
				it_292056.Field0 = x[i_292076].Field0;
				it_292056.Field1 = x[i_292076].Field1;
				nimln(157, "hashes.nim");
				LOC4 = 0;
				LOC4 = hash_292058(it_292056);
				result = HEX21HEX26_131025(result, LOC4);
				nimln(1692, "system.nim");
				TMP4937 = addInt(i_292076, ((NI) 1));
				i_292076 = (NI)(TMP4937);
			} LA3: ;
		}
	}
	nimln(158, "hashes.nim");
	result = HEX21HEX24_131054(result);
	popFrame();
	return result;
}

N_NIMCALL(NI, hash_291952)(Jsonnodeobj290726** x, NI xLen0) {
	NI result;
	nimfr("hash", "hashes.nim")
	result = 0;
	{
		Jsonnodeobj290726* it_291994;
		NI i_291998;
		it_291994 = 0;
		nimln(1689, "system.nim");
		i_291998 = ((NI) 0);
		{
			nimln(1690, "system.nim");
			while (1) {
				NI LOC4;
				NI TMP4938;
				if (!(i_291998 < xLen0)) goto LA3;
				nimln(1691, "system.nim");
				if ((NU)(i_291998) >= (NU)(xLen0)) raiseIndexError();
				it_291994 = x[i_291998];
				nimln(157, "hashes.nim");
				LOC4 = 0;
				LOC4 = hash_291945(it_291994);
				result = HEX21HEX26_131025(result, LOC4);
				nimln(1692, "system.nim");
				TMP4938 = addInt(i_291998, ((NI) 1));
				i_291998 = (NI)(TMP4938);
			} LA3: ;
		}
	}
	nimln(158, "hashes.nim");
	result = HEX21HEX24_131054(result);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesInit)(void) {
	nimfr("hashes", "hashes.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_hashesDatInit)(void) {
NTI131021.size = sizeof(NI);
NTI131021.kind = 31;
NTI131021.base = 0;
NTI131021.flags = 3;
}

