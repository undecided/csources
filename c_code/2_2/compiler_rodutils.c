/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
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
typedef NIM_CHAR TY198031[81];
N_NIMCALL(NimStringDesc*, tostrmaxprecision_198024)(NF f);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, encodestr_198042)(NimStringDesc* s, NimStringDesc** result);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, hexchar_198091)(NIM_CHAR c, NI* xi);
N_NIMCALL(NimStringDesc*, decodestr_198157)(NCSTRING s, NI* pos);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(void, encodevbiggestintaux_198230)(NI64 x, NimStringDesc** result);
static N_INLINE(NI64, modInt64)(NI64 a, NI64 b);
N_NOINLINE(void, raiseDivByZero)(void);
static N_INLINE(NI64, divInt64)(NI64 a, NI64 b);
N_NIMCALL(void, encodevbiggestint_198258)(NI64 x, NimStringDesc** result);
N_NIMCALL(void, encodevintaux_198269)(NI x, NimStringDesc** result);
static N_INLINE(NI, modInt)(NI a, NI b);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NIMCALL(void, encodevint_198296)(NI x, NimStringDesc** result);
N_NIMCALL(NI, decodevint_198351)(NCSTRING s, NI* pos);
N_NIMCALL(void, failedassertimpl_87017)(NimStringDesc* msg);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NI64, decodevbiggestint_198512)(NCSTRING s, NI* pos);
N_NIMCALL(NI64, mulInt64)(NI64 a, NI64 b);
static N_INLINE(NI64, subInt64)(NI64 a, NI64 b);
STRING_LITERAL(TMP2702, "NAN", 3);
STRING_LITERAL(TMP2703, "0.0", 3);
STRING_LITERAL(TMP2704, "INF", 3);
STRING_LITERAL(TMP2705, "-INF", 4);
STRING_LITERAL(TMP2713, "", 0);
STRING_LITERAL(TMP2721, "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 62);
STRING_LITERAL(TMP2729, "contains({\'a\'..\'z\', \'A\'..\'Z\', \'0\'..\'9\', \'-\', \'\\x80\'..\'\\xFF\'}, s"
"[i]) ", 68);
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

N_NIMCALL(NimStringDesc*, tostrmaxprecision_198024)(NF f) {
	NimStringDesc* result;
	nimfr("toStrMaxPrecision", "rodutils.nim")
	result = 0;
	nimln(16, "rodutils.nim");
	{
		if (!!((f == f))) goto LA3;
		nimln(17, "rodutils.nim");
		result = copyString(((NimStringDesc*) &TMP2702));
	}
	goto LA1;
	LA3: ;
	{
		nimln(18, "rodutils.nim");
		if (!(f == 0.0)) goto LA6;
		nimln(19, "rodutils.nim");
		result = copyString(((NimStringDesc*) &TMP2703));
	}
	goto LA1;
	LA6: ;
	{
		nimln(20, "rodutils.nim");
		if (!(f == ((NF)(5.0000000000000000e-01) * (NF)(f)))) goto LA9;
		nimln(21, "rodutils.nim");
		{
			if (!(0.0 < f)) goto LA13;
			result = copyString(((NimStringDesc*) &TMP2704));
		}
		goto LA11;
		LA13: ;
		{
			nimln(22, "rodutils.nim");
			result = copyString(((NimStringDesc*) &TMP2705));
		}
		LA11: ;
	}
	goto LA1;
	LA9: ;
	{
		TY198031 buf;
		memset((void*)buf, 0, sizeof(buf));
		nimln(25, "rodutils.nim");
		sprintf(((NCSTRING) (buf)), "%#.16e", f);
		nimln(26, "rodutils.nim");
		result = cstrToNimstr(((NCSTRING) (buf)));
	}
	LA1: ;
	popFrame();
	return result;
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

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
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

N_NIMCALL(void, encodestr_198042)(NimStringDesc* s, NimStringDesc** result) {
	nimfr("encodeStr", "rodutils.nim")
	{
		NI i_198059;
		NI HEX3Atmp_198069;
		NI TMP2706;
		NI res_198072;
		i_198059 = 0;
		HEX3Atmp_198069 = 0;
		nimln(29, "rodutils.nim");
		TMP2706 = subInt((s ? s->Sup.len : 0), ((NI) 1));
		HEX3Atmp_198069 = (NI)(TMP2706);
		nimln(1598, "system.nim");
		res_198072 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP2707;
				if (!(res_198072 <= HEX3Atmp_198069)) goto LA3;
				nimln(1600, "system.nim");
				i_198059 = res_198072;
				nimln(30, "rodutils.nim");
				if ((NU)(i_198059) > (NU)(s->Sup.len)) raiseIndexError();
				switch (((NU8)(s->data[i_198059]))) {
				case 97 ... 122:
				case 65 ... 90:
				case 48 ... 57:
				case 95:
				{
					nimln(31, "rodutils.nim");
					if ((NU)(i_198059) > (NU)(s->Sup.len)) raiseIndexError();
					(*result) = addChar((*result), s->data[i_198059]);
				}
				break;
				default:
				{
					NimStringDesc* LOC6;
					NimStringDesc* LOC7;
					nimln(32, "rodutils.nim");
					LOC6 = 0;
					if ((NU)(i_198059) > (NU)(s->Sup.len)) raiseIndexError();
					LOC7 = 0;
					LOC7 = nsuToHex(((NI64) (((NU8)(s->data[i_198059])))), ((NI) 2));
					LOC6 = rawNewString(LOC7->Sup.len + 1);
appendChar(LOC6, 92);
appendString(LOC6, LOC7);
					(*result) = resizeString((*result), LOC6->Sup.len + 0);
appendString((*result), LOC6);
				}
				break;
				}
				nimln(1614, "system.nim");
				TMP2707 = addInt(res_198072, ((NI) 1));
				res_198072 = (NI)(TMP2707);
			} LA3: ;
		}
	}
	popFrame();
}

N_NIMCALL(void, hexchar_198091)(NIM_CHAR c, NI* xi) {
	nimfr("hexChar", "rodutils.nim")
	nimln(35, "rodutils.nim");
	switch (((NU8)(c))) {
	case 48 ... 57:
	{
		NI TMP2708;
		nimln(36, "rodutils.nim");
		TMP2708 = subInt(((NI) (((NU8)(c)))), ((NI) 48));
		(*xi) = (NI)((NI)((NU64)((*xi)) << (NU64)(((NI) 4))) | ((NI) ((NI)(TMP2708))));
	}
	break;
	case 97 ... 102:
	{
		NI TMP2709;
		NI TMP2710;
		nimln(37, "rodutils.nim");
		TMP2709 = subInt(((NI) (((NU8)(c)))), ((NI) 97));
		TMP2710 = addInt(((NI) ((NI)(TMP2709))), ((NI) 10));
		(*xi) = (NI)((NI)((NU64)((*xi)) << (NU64)(((NI) 4))) | ((NI) ((NI)(TMP2710))));
	}
	break;
	case 65 ... 70:
	{
		NI TMP2711;
		NI TMP2712;
		nimln(38, "rodutils.nim");
		TMP2711 = subInt(((NI) (((NU8)(c)))), ((NI) 65));
		TMP2712 = addInt(((NI) ((NI)(TMP2711))), ((NI) 10));
		(*xi) = (NI)((NI)((NU64)((*xi)) << (NU64)(((NI) 4))) | ((NI) ((NI)(TMP2712))));
	}
	break;
	default:
	{
	}
	break;
	}
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

N_NIMCALL(NimStringDesc*, decodestr_198157)(NCSTRING s, NI* pos) {
	NimStringDesc* result;
	NI i;
	nimfr("decodeStr", "rodutils.nim")
	result = 0;
	nimln(42, "rodutils.nim");
	i = (*pos);
	nimln(43, "rodutils.nim");
	result = copyString(((NimStringDesc*) &TMP2713));
	{
		nimln(44, "rodutils.nim");
		while (1) {
			nimln(45, "rodutils.nim");
			switch (((NU8)(s[i]))) {
			case 92:
			{
				NI TMP2714;
				NI xi;
				NI TMP2715;
				NI TMP2716;
				nimln(47, "rodutils.nim");
				TMP2714 = addInt(i, ((NI) 3));
				i = (NI)(TMP2714);
				nimln(48, "rodutils.nim");
				xi = ((NI) 0);
				nimln(49, "rodutils.nim");
				TMP2715 = subInt(i, ((NI) 2));
				hexchar_198091(s[(NI)(TMP2715)], (&xi));
				nimln(50, "rodutils.nim");
				TMP2716 = subInt(i, ((NI) 1));
				hexchar_198091(s[(NI)(TMP2716)], (&xi));
				nimln(51, "rodutils.nim");
				result = addChar(result, ((NIM_CHAR) (((NI)chckRange(xi, ((NI) 0), ((NI) 255))))));
			}
			break;
			case 97 ... 122:
			case 65 ... 90:
			case 48 ... 57:
			case 95:
			{
				NI TMP2717;
				nimln(53, "rodutils.nim");
				result = addChar(result, s[i]);
				nimln(54, "rodutils.nim");
				TMP2717 = addInt(i, ((NI) 1));
				i = (NI)(TMP2717);
			}
			break;
			default:
			{
				nimln(55, "rodutils.nim");
				goto LA1;
			}
			break;
			}
		}
	} LA1: ;
	nimln(56, "rodutils.nim");
	(*pos) = i;
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

N_NIMCALL(void, encodevbiggestintaux_198230)(NI64 x, NimStringDesc** result) {
	NIM_CHAR d_198236;
	NI64 v_198238;
	NI64 rem_198240;
	NI64 TMP2718;
	NI idx_198242;
	nimfr("encodeVBiggestIntAux", "rodutils.nim")
	d_198236 = 0;
	nimln(69, "rodutils.nim");
	v_198238 = x;
	nimln(70, "rodutils.nim");
	TMP2718 = modInt64(v_198238, IL64(190));
	rem_198240 = (NI64)(TMP2718);
	nimln(71, "rodutils.nim");
	{
		NI64 TMP2719;
		if (!(((NI) (rem_198240)) < ((NI) 0))) goto LA3;
		nimln(72, "rodutils.nim");
		(*result) = addChar((*result), 45);
		nimln(73, "rodutils.nim");
		TMP2719 = divInt64(v_198238, IL64(190));
		if ((NI64)(TMP2719) == (IL64(-9223372036854775807) - IL64(1))) raiseOverflow();
		v_198238 = -((NI64)(TMP2719));
		nimln(74, "rodutils.nim");
		if (((NI64) (rem_198240)) == (IL64(-9223372036854775807) - IL64(1))) raiseOverflow();
		rem_198240 = -(((NI64) (rem_198240)));
	}
	goto LA1;
	LA3: ;
	{
		NI64 TMP2720;
		nimln(76, "rodutils.nim");
		TMP2720 = divInt64(v_198238, IL64(190));
		v_198238 = (NI64)(TMP2720);
	}
	LA1: ;
	nimln(77, "rodutils.nim");
	idx_198242 = ((NI) (rem_198240));
	nimln(78, "rodutils.nim");
	{
		if (!(idx_198242 < ((NI) 62))) goto LA8;
		if ((NU)(idx_198242) > (NU)(((NimStringDesc*) &TMP2721)->Sup.len)) raiseIndexError();
		d_198236 = ((NimStringDesc*) &TMP2721)->data[idx_198242];
	}
	goto LA6;
	LA8: ;
	{
		NI TMP2722;
		NI TMP2723;
		nimln(79, "rodutils.nim");
		TMP2722 = subInt(idx_198242, ((NI) 62));
		TMP2723 = addInt((NI)(TMP2722), ((NI) 128));
		d_198236 = ((NIM_CHAR) (((NI)chckRange((NI)(TMP2723), ((NI) 0), ((NI) 255)))));
	}
	LA6: ;
	nimln(80, "rodutils.nim");
	{
		if (!!((v_198238 == IL64(0)))) goto LA13;
		encodevbiggestintaux_198230(v_198238, result);
	}
	LA13: ;
	nimln(81, "rodutils.nim");
	(*result) = addChar((*result), d_198236);
	popFrame();
}

N_NIMCALL(void, encodevbiggestint_198258)(NI64 x, NimStringDesc** result) {
	nimfr("encodeVBiggestInt", "rodutils.nim")
	nimln(89, "rodutils.nim");
	encodevbiggestintaux_198230((NI64)((NU64)(x) + (NU64)(IL64(5))), result);
	popFrame();
}

static N_INLINE(NI, modInt)(NI a, NI b) {
	NI result;
{	result = 0;
	{
		if (!(b == ((NI) 0))) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	result = (NI)(a % b);
	goto BeforeRet;
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
		LOC7 = (a == ((NI) (IL64(-9223372036854775807) - IL64(1))));
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

N_NIMCALL(void, encodevintaux_198269)(NI x, NimStringDesc** result) {
	NIM_CHAR d_198275;
	NI v_198277;
	NI rem_198279;
	NI TMP2724;
	NI idx_198281;
	nimfr("encodeVIntAux", "rodutils.nim")
	d_198275 = 0;
	nimln(69, "rodutils.nim");
	v_198277 = x;
	nimln(70, "rodutils.nim");
	TMP2724 = modInt(v_198277, ((NI) 190));
	rem_198279 = (NI)(TMP2724);
	nimln(71, "rodutils.nim");
	{
		NI TMP2725;
		if (!(((NI) (rem_198279)) < ((NI) 0))) goto LA3;
		nimln(72, "rodutils.nim");
		(*result) = addChar((*result), 45);
		nimln(73, "rodutils.nim");
		TMP2725 = divInt(v_198277, ((NI) 190));
		if ((NI)(TMP2725) == (IL64(-9223372036854775807) - IL64(1))) raiseOverflow();
		v_198277 = ((NI64)-((NI)(TMP2725)));
		nimln(74, "rodutils.nim");
		if (((NI) (rem_198279)) == (IL64(-9223372036854775807) - IL64(1))) raiseOverflow();
		rem_198279 = ((NI64)-(((NI) (rem_198279))));
	}
	goto LA1;
	LA3: ;
	{
		NI TMP2726;
		nimln(76, "rodutils.nim");
		TMP2726 = divInt(v_198277, ((NI) 190));
		v_198277 = (NI)(TMP2726);
	}
	LA1: ;
	nimln(77, "rodutils.nim");
	idx_198281 = ((NI) (rem_198279));
	nimln(78, "rodutils.nim");
	{
		if (!(idx_198281 < ((NI) 62))) goto LA8;
		if ((NU)(idx_198281) > (NU)(((NimStringDesc*) &TMP2721)->Sup.len)) raiseIndexError();
		d_198275 = ((NimStringDesc*) &TMP2721)->data[idx_198281];
	}
	goto LA6;
	LA8: ;
	{
		NI TMP2727;
		NI TMP2728;
		nimln(79, "rodutils.nim");
		TMP2727 = subInt(idx_198281, ((NI) 62));
		TMP2728 = addInt((NI)(TMP2727), ((NI) 128));
		d_198275 = ((NIM_CHAR) (((NI)chckRange((NI)(TMP2728), ((NI) 0), ((NI) 255)))));
	}
	LA6: ;
	nimln(80, "rodutils.nim");
	{
		if (!!((v_198277 == ((NI) 0)))) goto LA13;
		encodevintaux_198269(v_198277, result);
	}
	LA13: ;
	nimln(81, "rodutils.nim");
	(*result) = addChar((*result), d_198275);
	popFrame();
}

N_NIMCALL(void, encodevint_198296)(NI x, NimStringDesc** result) {
	nimfr("encodeVInt", "rodutils.nim")
	nimln(98, "rodutils.nim");
	encodevintaux_198269((NI)((NU64)(x) + (NU64)(((NI) 5))), result);
	popFrame();
}

N_NIMCALL(NI, decodevint_198351)(NCSTRING s, NI* pos) {
	NI result;
	NI i_198358;
	NI sign_198360;
	NI TMP2747;
	nimfr("decodeVInt", "rodutils.nim")
	result = 0;
	nimln(101, "rodutils.nim");
	i_198358 = (*pos);
	nimln(102, "rodutils.nim");
	sign_198360 = ((NI) -1);
	nimln(103, "rodutils.nim");
	{
		if (!!((((NU8)(s[i_198358])) >= ((NU8)(97)) && ((NU8)(s[i_198358])) <= ((NU8)(122)) || ((NU8)(s[i_198358])) >= ((NU8)(65)) && ((NU8)(s[i_198358])) <= ((NU8)(90)) || ((NU8)(s[i_198358])) >= ((NU8)(48)) && ((NU8)(s[i_198358])) <= ((NU8)(57)) || ((NU8)(s[i_198358])) == ((NU8)(45)) || ((NU8)(s[i_198358])) >= ((NU8)(128)) && ((NU8)(s[i_198358])) <= ((NU8)(255))))) goto LA3;
		failedassertimpl_87017(((NimStringDesc*) &TMP2729));
	}
	LA3: ;
	nimln(104, "rodutils.nim");
	{
		NI TMP2730;
		if (!((NU8)(s[i_198358]) == (NU8)(45))) goto LA7;
		nimln(105, "rodutils.nim");
		TMP2730 = addInt(i_198358, ((NI) 1));
		i_198358 = (NI)(TMP2730);
		nimln(106, "rodutils.nim");
		sign_198360 = ((NI) 1);
	}
	LA7: ;
	nimln(107, "rodutils.nim");
	result = ((NI) 0);
	{
		nimln(108, "rodutils.nim");
		while (1) {
			NI TMP2746;
			nimln(109, "rodutils.nim");
			switch (((NU8)(s[i_198358]))) {
			case 48 ... 57:
			{
				NI TMP2731;
				NI TMP2732;
				NI TMP2733;
				nimln(110, "rodutils.nim");
				TMP2731 = mulInt(result, ((NI) 190));
				TMP2732 = subInt(((NI) (((NU8)(s[i_198358])))), ((NI) 48));
				TMP2733 = subInt((NI)(TMP2731), ((NI) ((NI)(TMP2732))));
				result = (NI)(TMP2733);
			}
			break;
			case 97 ... 122:
			{
				NI TMP2734;
				NI TMP2735;
				NI TMP2736;
				NI TMP2737;
				nimln(111, "rodutils.nim");
				TMP2734 = mulInt(result, ((NI) 190));
				TMP2735 = subInt(((NI) (((NU8)(s[i_198358])))), ((NI) 97));
				TMP2736 = addInt(((NI) ((NI)(TMP2735))), ((NI) 10));
				TMP2737 = subInt((NI)(TMP2734), ((NI) ((NI)(TMP2736))));
				result = (NI)(TMP2737);
			}
			break;
			case 65 ... 90:
			{
				NI TMP2738;
				NI TMP2739;
				NI TMP2740;
				NI TMP2741;
				nimln(112, "rodutils.nim");
				TMP2738 = mulInt(result, ((NI) 190));
				TMP2739 = subInt(((NI) (((NU8)(s[i_198358])))), ((NI) 65));
				TMP2740 = addInt(((NI) ((NI)(TMP2739))), ((NI) 36));
				TMP2741 = subInt((NI)(TMP2738), ((NI) ((NI)(TMP2740))));
				result = (NI)(TMP2741);
			}
			break;
			case 128 ... 255:
			{
				NI TMP2742;
				NI TMP2743;
				NI TMP2744;
				NI TMP2745;
				nimln(113, "rodutils.nim");
				TMP2742 = mulInt(result, ((NI) 190));
				TMP2743 = subInt(((NI) (((NU8)(s[i_198358])))), ((NI) 128));
				TMP2744 = addInt(((NI) ((NI)(TMP2743))), ((NI) 62));
				TMP2745 = subInt((NI)(TMP2742), ((NI) ((NI)(TMP2744))));
				result = (NI)(TMP2745);
			}
			break;
			default:
			{
				nimln(114, "rodutils.nim");
				goto LA9;
			}
			break;
			}
			nimln(115, "rodutils.nim");
			TMP2746 = addInt(i_198358, ((NI) 1));
			i_198358 = (NI)(TMP2746);
		}
	} LA9: ;
	nimln(116, "rodutils.nim");
	TMP2747 = mulInt(result, sign_198360);
	result = (NI)((NU64)((NI)(TMP2747)) - (NU64)(((NI) 5)));
	nimln(117, "rodutils.nim");
	(*pos) = i_198358;
	popFrame();
	return result;
}

static N_INLINE(NI64, subInt64)(NI64 a, NI64 b) {
	NI64 result;
{	result = 0;
	result = (NI64)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (IL64(0) <= (NI64)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (IL64(0) <= (NI64)(result ^ (NI64)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI64, decodevbiggestint_198512)(NCSTRING s, NI* pos) {
	NI64 result;
	NI i_198519;
	NI sign_198521;
	NI64 TMP2765;
	nimfr("decodeVBiggestInt", "rodutils.nim")
	result = 0;
	nimln(101, "rodutils.nim");
	i_198519 = (*pos);
	nimln(102, "rodutils.nim");
	sign_198521 = ((NI) -1);
	nimln(103, "rodutils.nim");
	{
		if (!!((((NU8)(s[i_198519])) >= ((NU8)(97)) && ((NU8)(s[i_198519])) <= ((NU8)(122)) || ((NU8)(s[i_198519])) >= ((NU8)(65)) && ((NU8)(s[i_198519])) <= ((NU8)(90)) || ((NU8)(s[i_198519])) >= ((NU8)(48)) && ((NU8)(s[i_198519])) <= ((NU8)(57)) || ((NU8)(s[i_198519])) == ((NU8)(45)) || ((NU8)(s[i_198519])) >= ((NU8)(128)) && ((NU8)(s[i_198519])) <= ((NU8)(255))))) goto LA3;
		failedassertimpl_87017(((NimStringDesc*) &TMP2729));
	}
	LA3: ;
	nimln(104, "rodutils.nim");
	{
		NI TMP2748;
		if (!((NU8)(s[i_198519]) == (NU8)(45))) goto LA7;
		nimln(105, "rodutils.nim");
		TMP2748 = addInt(i_198519, ((NI) 1));
		i_198519 = (NI)(TMP2748);
		nimln(106, "rodutils.nim");
		sign_198521 = ((NI) 1);
	}
	LA7: ;
	nimln(107, "rodutils.nim");
	result = IL64(0);
	{
		nimln(108, "rodutils.nim");
		while (1) {
			NI TMP2764;
			nimln(109, "rodutils.nim");
			switch (((NU8)(s[i_198519]))) {
			case 48 ... 57:
			{
				NI64 TMP2749;
				NI TMP2750;
				NI64 TMP2751;
				nimln(110, "rodutils.nim");
				TMP2749 = mulInt64(result, IL64(190));
				TMP2750 = subInt(((NI) (((NU8)(s[i_198519])))), ((NI) 48));
				TMP2751 = subInt64((NI64)(TMP2749), ((NI64) ((NI)(TMP2750))));
				result = (NI64)(TMP2751);
			}
			break;
			case 97 ... 122:
			{
				NI64 TMP2752;
				NI TMP2753;
				NI TMP2754;
				NI64 TMP2755;
				nimln(111, "rodutils.nim");
				TMP2752 = mulInt64(result, IL64(190));
				TMP2753 = subInt(((NI) (((NU8)(s[i_198519])))), ((NI) 97));
				TMP2754 = addInt(((NI) ((NI)(TMP2753))), ((NI) 10));
				TMP2755 = subInt64((NI64)(TMP2752), ((NI64) ((NI)(TMP2754))));
				result = (NI64)(TMP2755);
			}
			break;
			case 65 ... 90:
			{
				NI64 TMP2756;
				NI TMP2757;
				NI TMP2758;
				NI64 TMP2759;
				nimln(112, "rodutils.nim");
				TMP2756 = mulInt64(result, IL64(190));
				TMP2757 = subInt(((NI) (((NU8)(s[i_198519])))), ((NI) 65));
				TMP2758 = addInt(((NI) ((NI)(TMP2757))), ((NI) 36));
				TMP2759 = subInt64((NI64)(TMP2756), ((NI64) ((NI)(TMP2758))));
				result = (NI64)(TMP2759);
			}
			break;
			case 128 ... 255:
			{
				NI64 TMP2760;
				NI TMP2761;
				NI TMP2762;
				NI64 TMP2763;
				nimln(113, "rodutils.nim");
				TMP2760 = mulInt64(result, IL64(190));
				TMP2761 = subInt(((NI) (((NU8)(s[i_198519])))), ((NI) 128));
				TMP2762 = addInt(((NI) ((NI)(TMP2761))), ((NI) 62));
				TMP2763 = subInt64((NI64)(TMP2760), ((NI64) ((NI)(TMP2762))));
				result = (NI64)(TMP2763);
			}
			break;
			default:
			{
				nimln(114, "rodutils.nim");
				goto LA9;
			}
			break;
			}
			nimln(115, "rodutils.nim");
			TMP2764 = addInt(i_198519, ((NI) 1));
			i_198519 = (NI)(TMP2764);
		}
	} LA9: ;
	nimln(116, "rodutils.nim");
	TMP2765 = mulInt64(result, ((NI64) (sign_198521)));
	result = (NI64)((NU64)((NI64)(TMP2765)) - (NU64)(IL64(5)));
	nimln(117, "rodutils.nim");
	(*pos) = i_198519;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_rodutilsInit)(void) {
	nimfr("rodutils", "rodutils.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_rodutilsDatInit)(void) {
}

