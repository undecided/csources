/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
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
typedef NIM_CHAR TY196031[81];
N_NIMCALL(NimStringDesc*, tostrmaxprecision_196024)(NF f);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, encodestr_196042)(NimStringDesc* s, NimStringDesc** result);
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
N_NIMCALL(void, hexchar_196091)(NIM_CHAR c, NI* xi);
N_NIMCALL(NimStringDesc*, decodestr_196157)(NCSTRING s, NI* pos);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(void, encodevbiggestintaux_196230)(NI64 x, NimStringDesc** result);
static N_INLINE(NI64, modInt64)(NI64 a, NI64 b);
N_NOINLINE(void, raiseDivByZero)(void);
static N_INLINE(NI64, divInt64)(NI64 a, NI64 b);
N_NIMCALL(void, encodevbiggestint_196258)(NI64 x, NimStringDesc** result);
N_NIMCALL(void, encodevintaux_196269)(NI x, NimStringDesc** result);
static N_INLINE(NI, modInt)(NI a, NI b);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NIMCALL(void, encodevint_196296)(NI x, NimStringDesc** result);
N_NIMCALL(NI, decodevint_196351)(NCSTRING s, NI* pos);
N_NIMCALL(void, failedassertimpl_87017)(NimStringDesc* msg);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NI64, decodevbiggestint_196512)(NCSTRING s, NI* pos);
N_NIMCALL(NI64, mulInt64)(NI64 a, NI64 b);
static N_INLINE(NI64, subInt64)(NI64 a, NI64 b);
STRING_LITERAL(TMP2693, "NAN", 3);
STRING_LITERAL(TMP2694, "0.0", 3);
STRING_LITERAL(TMP2695, "INF", 3);
STRING_LITERAL(TMP2696, "-INF", 4);
STRING_LITERAL(TMP2704, "", 0);
STRING_LITERAL(TMP2712, "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 62);
STRING_LITERAL(TMP2720, "contains({\'a\'..\'z\', \'A\'..\'Z\', \'0\'..\'9\', \'-\', \'\\x80\'..\'\\xFF\'}, s"
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

N_NIMCALL(NimStringDesc*, tostrmaxprecision_196024)(NF f) {
	NimStringDesc* result;
	nimfr("toStrMaxPrecision", "rodutils.nim")
	result = 0;
	nimln(16, "rodutils.nim");
	{
		if (!!((f == f))) goto LA3;
		nimln(17, "rodutils.nim");
		result = copyString(((NimStringDesc*) &TMP2693));
	}
	goto LA1;
	LA3: ;
	{
		nimln(18, "rodutils.nim");
		if (!(f == 0.0)) goto LA6;
		nimln(19, "rodutils.nim");
		result = copyString(((NimStringDesc*) &TMP2694));
	}
	goto LA1;
	LA6: ;
	{
		nimln(20, "rodutils.nim");
		if (!(f == ((NF)(5.0000000000000000e-01) * (NF)(f)))) goto LA9;
		nimln(21, "rodutils.nim");
		{
			if (!(0.0 < f)) goto LA13;
			result = copyString(((NimStringDesc*) &TMP2695));
		}
		goto LA11;
		LA13: ;
		{
			nimln(22, "rodutils.nim");
			result = copyString(((NimStringDesc*) &TMP2696));
		}
		LA11: ;
	}
	goto LA1;
	LA9: ;
	{
		TY196031 buf;
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

N_NIMCALL(void, encodestr_196042)(NimStringDesc* s, NimStringDesc** result) {
	nimfr("encodeStr", "rodutils.nim")
	{
		NI i_196059;
		NI HEX3Atmp_196069;
		NI TMP2697;
		NI res_196072;
		i_196059 = 0;
		HEX3Atmp_196069 = 0;
		nimln(29, "rodutils.nim");
		TMP2697 = subInt((s ? s->Sup.len : 0), ((NI) 1));
		HEX3Atmp_196069 = (NI)(TMP2697);
		nimln(1598, "system.nim");
		res_196072 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP2698;
				if (!(res_196072 <= HEX3Atmp_196069)) goto LA3;
				nimln(1600, "system.nim");
				i_196059 = res_196072;
				nimln(30, "rodutils.nim");
				if ((NU)(i_196059) > (NU)(s->Sup.len)) raiseIndexError();
				switch (((NU8)(s->data[i_196059]))) {
				case 97 ... 122:
				case 65 ... 90:
				case 48 ... 57:
				case 95:
				{
					nimln(31, "rodutils.nim");
					if ((NU)(i_196059) > (NU)(s->Sup.len)) raiseIndexError();
					(*result) = addChar((*result), s->data[i_196059]);
				}
				break;
				default:
				{
					NimStringDesc* LOC6;
					NimStringDesc* LOC7;
					nimln(32, "rodutils.nim");
					LOC6 = 0;
					if ((NU)(i_196059) > (NU)(s->Sup.len)) raiseIndexError();
					LOC7 = 0;
					LOC7 = nsuToHex(((NI64) (((NU8)(s->data[i_196059])))), ((NI) 2));
					LOC6 = rawNewString(LOC7->Sup.len + 1);
appendChar(LOC6, 92);
appendString(LOC6, LOC7);
					(*result) = resizeString((*result), LOC6->Sup.len + 0);
appendString((*result), LOC6);
				}
				break;
				}
				nimln(1614, "system.nim");
				TMP2698 = addInt(res_196072, ((NI) 1));
				res_196072 = (NI)(TMP2698);
			} LA3: ;
		}
	}
	popFrame();
}

N_NIMCALL(void, hexchar_196091)(NIM_CHAR c, NI* xi) {
	nimfr("hexChar", "rodutils.nim")
	nimln(35, "rodutils.nim");
	switch (((NU8)(c))) {
	case 48 ... 57:
	{
		NI TMP2699;
		nimln(36, "rodutils.nim");
		TMP2699 = subInt(((NI) (((NU8)(c)))), ((NI) 48));
		(*xi) = (NI)((NI)((NU32)((*xi)) << (NU32)(((NI) 4))) | ((NI) ((NI)(TMP2699))));
	}
	break;
	case 97 ... 102:
	{
		NI TMP2700;
		NI TMP2701;
		nimln(37, "rodutils.nim");
		TMP2700 = subInt(((NI) (((NU8)(c)))), ((NI) 97));
		TMP2701 = addInt(((NI) ((NI)(TMP2700))), ((NI) 10));
		(*xi) = (NI)((NI)((NU32)((*xi)) << (NU32)(((NI) 4))) | ((NI) ((NI)(TMP2701))));
	}
	break;
	case 65 ... 70:
	{
		NI TMP2702;
		NI TMP2703;
		nimln(38, "rodutils.nim");
		TMP2702 = subInt(((NI) (((NU8)(c)))), ((NI) 65));
		TMP2703 = addInt(((NI) ((NI)(TMP2702))), ((NI) 10));
		(*xi) = (NI)((NI)((NU32)((*xi)) << (NU32)(((NI) 4))) | ((NI) ((NI)(TMP2703))));
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

N_NIMCALL(NimStringDesc*, decodestr_196157)(NCSTRING s, NI* pos) {
	NimStringDesc* result;
	NI i;
	nimfr("decodeStr", "rodutils.nim")
	result = 0;
	nimln(42, "rodutils.nim");
	i = (*pos);
	nimln(43, "rodutils.nim");
	result = copyString(((NimStringDesc*) &TMP2704));
	{
		nimln(44, "rodutils.nim");
		while (1) {
			nimln(45, "rodutils.nim");
			switch (((NU8)(s[i]))) {
			case 92:
			{
				NI TMP2705;
				NI xi;
				NI TMP2706;
				NI TMP2707;
				nimln(47, "rodutils.nim");
				TMP2705 = addInt(i, ((NI) 3));
				i = (NI)(TMP2705);
				nimln(48, "rodutils.nim");
				xi = ((NI) 0);
				nimln(49, "rodutils.nim");
				TMP2706 = subInt(i, ((NI) 2));
				hexchar_196091(s[(NI)(TMP2706)], (&xi));
				nimln(50, "rodutils.nim");
				TMP2707 = subInt(i, ((NI) 1));
				hexchar_196091(s[(NI)(TMP2707)], (&xi));
				nimln(51, "rodutils.nim");
				result = addChar(result, ((NIM_CHAR) (((NI)chckRange(xi, ((NI) 0), ((NI) 255))))));
			}
			break;
			case 97 ... 122:
			case 65 ... 90:
			case 48 ... 57:
			case 95:
			{
				NI TMP2708;
				nimln(53, "rodutils.nim");
				result = addChar(result, s[i]);
				nimln(54, "rodutils.nim");
				TMP2708 = addInt(i, ((NI) 1));
				i = (NI)(TMP2708);
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

N_NIMCALL(void, encodevbiggestintaux_196230)(NI64 x, NimStringDesc** result) {
	NIM_CHAR d_196236;
	NI64 v_196238;
	NI64 rem_196240;
	NI64 TMP2709;
	NI idx_196242;
	nimfr("encodeVBiggestIntAux", "rodutils.nim")
	d_196236 = 0;
	nimln(69, "rodutils.nim");
	v_196238 = x;
	nimln(70, "rodutils.nim");
	TMP2709 = modInt64(v_196238, IL64(190));
	rem_196240 = (NI64)(TMP2709);
	nimln(71, "rodutils.nim");
	{
		NI64 TMP2710;
		if (!(((NI) (rem_196240)) < ((NI) 0))) goto LA3;
		nimln(72, "rodutils.nim");
		(*result) = addChar((*result), 45);
		nimln(73, "rodutils.nim");
		TMP2710 = divInt64(v_196238, IL64(190));
		if ((NI64)(TMP2710) == (IL64(-9223372036854775807) - IL64(1))) raiseOverflow();
		v_196238 = -((NI64)(TMP2710));
		nimln(74, "rodutils.nim");
		if (((NI64) (rem_196240)) == (IL64(-9223372036854775807) - IL64(1))) raiseOverflow();
		rem_196240 = -(((NI64) (rem_196240)));
	}
	goto LA1;
	LA3: ;
	{
		NI64 TMP2711;
		nimln(76, "rodutils.nim");
		TMP2711 = divInt64(v_196238, IL64(190));
		v_196238 = (NI64)(TMP2711);
	}
	LA1: ;
	nimln(77, "rodutils.nim");
	idx_196242 = ((NI) (rem_196240));
	nimln(78, "rodutils.nim");
	{
		if (!(idx_196242 < ((NI) 62))) goto LA8;
		if ((NU)(idx_196242) > (NU)(((NimStringDesc*) &TMP2712)->Sup.len)) raiseIndexError();
		d_196236 = ((NimStringDesc*) &TMP2712)->data[idx_196242];
	}
	goto LA6;
	LA8: ;
	{
		NI TMP2713;
		NI TMP2714;
		nimln(79, "rodutils.nim");
		TMP2713 = subInt(idx_196242, ((NI) 62));
		TMP2714 = addInt((NI)(TMP2713), ((NI) 128));
		d_196236 = ((NIM_CHAR) (((NI)chckRange((NI)(TMP2714), ((NI) 0), ((NI) 255)))));
	}
	LA6: ;
	nimln(80, "rodutils.nim");
	{
		if (!!((v_196238 == IL64(0)))) goto LA13;
		encodevbiggestintaux_196230(v_196238, result);
	}
	LA13: ;
	nimln(81, "rodutils.nim");
	(*result) = addChar((*result), d_196236);
	popFrame();
}

N_NIMCALL(void, encodevbiggestint_196258)(NI64 x, NimStringDesc** result) {
	nimfr("encodeVBiggestInt", "rodutils.nim")
	nimln(89, "rodutils.nim");
	encodevbiggestintaux_196230((NI64)((NU64)(x) + (NU64)(IL64(5))), result);
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

N_NIMCALL(void, encodevintaux_196269)(NI x, NimStringDesc** result) {
	NIM_CHAR d_196275;
	NI v_196277;
	NI rem_196279;
	NI TMP2715;
	NI idx_196281;
	nimfr("encodeVIntAux", "rodutils.nim")
	d_196275 = 0;
	nimln(69, "rodutils.nim");
	v_196277 = x;
	nimln(70, "rodutils.nim");
	TMP2715 = modInt(v_196277, ((NI) 190));
	rem_196279 = (NI)(TMP2715);
	nimln(71, "rodutils.nim");
	{
		NI TMP2716;
		if (!(((NI) (rem_196279)) < ((NI) 0))) goto LA3;
		nimln(72, "rodutils.nim");
		(*result) = addChar((*result), 45);
		nimln(73, "rodutils.nim");
		TMP2716 = divInt(v_196277, ((NI) 190));
		if ((NI)(TMP2716) == (-2147483647 -1)) raiseOverflow();
		v_196277 = ((NI32)-((NI)(TMP2716)));
		nimln(74, "rodutils.nim");
		if (((NI) (rem_196279)) == (-2147483647 -1)) raiseOverflow();
		rem_196279 = ((NI32)-(((NI) (rem_196279))));
	}
	goto LA1;
	LA3: ;
	{
		NI TMP2717;
		nimln(76, "rodutils.nim");
		TMP2717 = divInt(v_196277, ((NI) 190));
		v_196277 = (NI)(TMP2717);
	}
	LA1: ;
	nimln(77, "rodutils.nim");
	idx_196281 = ((NI) (rem_196279));
	nimln(78, "rodutils.nim");
	{
		if (!(idx_196281 < ((NI) 62))) goto LA8;
		if ((NU)(idx_196281) > (NU)(((NimStringDesc*) &TMP2712)->Sup.len)) raiseIndexError();
		d_196275 = ((NimStringDesc*) &TMP2712)->data[idx_196281];
	}
	goto LA6;
	LA8: ;
	{
		NI TMP2718;
		NI TMP2719;
		nimln(79, "rodutils.nim");
		TMP2718 = subInt(idx_196281, ((NI) 62));
		TMP2719 = addInt((NI)(TMP2718), ((NI) 128));
		d_196275 = ((NIM_CHAR) (((NI)chckRange((NI)(TMP2719), ((NI) 0), ((NI) 255)))));
	}
	LA6: ;
	nimln(80, "rodutils.nim");
	{
		if (!!((v_196277 == ((NI) 0)))) goto LA13;
		encodevintaux_196269(v_196277, result);
	}
	LA13: ;
	nimln(81, "rodutils.nim");
	(*result) = addChar((*result), d_196275);
	popFrame();
}

N_NIMCALL(void, encodevint_196296)(NI x, NimStringDesc** result) {
	nimfr("encodeVInt", "rodutils.nim")
	nimln(98, "rodutils.nim");
	encodevintaux_196269((NI)((NU32)(x) + (NU32)(((NI) 5))), result);
	popFrame();
}

N_NIMCALL(NI, decodevint_196351)(NCSTRING s, NI* pos) {
	NI result;
	NI i_196358;
	NI sign_196360;
	NI TMP2738;
	nimfr("decodeVInt", "rodutils.nim")
	result = 0;
	nimln(101, "rodutils.nim");
	i_196358 = (*pos);
	nimln(102, "rodutils.nim");
	sign_196360 = ((NI) -1);
	nimln(103, "rodutils.nim");
	{
		if (!!((((NU8)(s[i_196358])) >= ((NU8)(97)) && ((NU8)(s[i_196358])) <= ((NU8)(122)) || ((NU8)(s[i_196358])) >= ((NU8)(65)) && ((NU8)(s[i_196358])) <= ((NU8)(90)) || ((NU8)(s[i_196358])) >= ((NU8)(48)) && ((NU8)(s[i_196358])) <= ((NU8)(57)) || ((NU8)(s[i_196358])) == ((NU8)(45)) || ((NU8)(s[i_196358])) >= ((NU8)(128)) && ((NU8)(s[i_196358])) <= ((NU8)(255))))) goto LA3;
		failedassertimpl_87017(((NimStringDesc*) &TMP2720));
	}
	LA3: ;
	nimln(104, "rodutils.nim");
	{
		NI TMP2721;
		if (!((NU8)(s[i_196358]) == (NU8)(45))) goto LA7;
		nimln(105, "rodutils.nim");
		TMP2721 = addInt(i_196358, ((NI) 1));
		i_196358 = (NI)(TMP2721);
		nimln(106, "rodutils.nim");
		sign_196360 = ((NI) 1);
	}
	LA7: ;
	nimln(107, "rodutils.nim");
	result = ((NI) 0);
	{
		nimln(108, "rodutils.nim");
		while (1) {
			NI TMP2737;
			nimln(109, "rodutils.nim");
			switch (((NU8)(s[i_196358]))) {
			case 48 ... 57:
			{
				NI TMP2722;
				NI TMP2723;
				NI TMP2724;
				nimln(110, "rodutils.nim");
				TMP2722 = mulInt(result, ((NI) 190));
				TMP2723 = subInt(((NI) (((NU8)(s[i_196358])))), ((NI) 48));
				TMP2724 = subInt((NI)(TMP2722), ((NI) ((NI)(TMP2723))));
				result = (NI)(TMP2724);
			}
			break;
			case 97 ... 122:
			{
				NI TMP2725;
				NI TMP2726;
				NI TMP2727;
				NI TMP2728;
				nimln(111, "rodutils.nim");
				TMP2725 = mulInt(result, ((NI) 190));
				TMP2726 = subInt(((NI) (((NU8)(s[i_196358])))), ((NI) 97));
				TMP2727 = addInt(((NI) ((NI)(TMP2726))), ((NI) 10));
				TMP2728 = subInt((NI)(TMP2725), ((NI) ((NI)(TMP2727))));
				result = (NI)(TMP2728);
			}
			break;
			case 65 ... 90:
			{
				NI TMP2729;
				NI TMP2730;
				NI TMP2731;
				NI TMP2732;
				nimln(112, "rodutils.nim");
				TMP2729 = mulInt(result, ((NI) 190));
				TMP2730 = subInt(((NI) (((NU8)(s[i_196358])))), ((NI) 65));
				TMP2731 = addInt(((NI) ((NI)(TMP2730))), ((NI) 36));
				TMP2732 = subInt((NI)(TMP2729), ((NI) ((NI)(TMP2731))));
				result = (NI)(TMP2732);
			}
			break;
			case 128 ... 255:
			{
				NI TMP2733;
				NI TMP2734;
				NI TMP2735;
				NI TMP2736;
				nimln(113, "rodutils.nim");
				TMP2733 = mulInt(result, ((NI) 190));
				TMP2734 = subInt(((NI) (((NU8)(s[i_196358])))), ((NI) 128));
				TMP2735 = addInt(((NI) ((NI)(TMP2734))), ((NI) 62));
				TMP2736 = subInt((NI)(TMP2733), ((NI) ((NI)(TMP2735))));
				result = (NI)(TMP2736);
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
			TMP2737 = addInt(i_196358, ((NI) 1));
			i_196358 = (NI)(TMP2737);
		}
	} LA9: ;
	nimln(116, "rodutils.nim");
	TMP2738 = mulInt(result, sign_196360);
	result = (NI)((NU32)((NI)(TMP2738)) - (NU32)(((NI) 5)));
	nimln(117, "rodutils.nim");
	(*pos) = i_196358;
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

N_NIMCALL(NI64, decodevbiggestint_196512)(NCSTRING s, NI* pos) {
	NI64 result;
	NI i_196519;
	NI sign_196521;
	NI64 TMP2756;
	nimfr("decodeVBiggestInt", "rodutils.nim")
	result = 0;
	nimln(101, "rodutils.nim");
	i_196519 = (*pos);
	nimln(102, "rodutils.nim");
	sign_196521 = ((NI) -1);
	nimln(103, "rodutils.nim");
	{
		if (!!((((NU8)(s[i_196519])) >= ((NU8)(97)) && ((NU8)(s[i_196519])) <= ((NU8)(122)) || ((NU8)(s[i_196519])) >= ((NU8)(65)) && ((NU8)(s[i_196519])) <= ((NU8)(90)) || ((NU8)(s[i_196519])) >= ((NU8)(48)) && ((NU8)(s[i_196519])) <= ((NU8)(57)) || ((NU8)(s[i_196519])) == ((NU8)(45)) || ((NU8)(s[i_196519])) >= ((NU8)(128)) && ((NU8)(s[i_196519])) <= ((NU8)(255))))) goto LA3;
		failedassertimpl_87017(((NimStringDesc*) &TMP2720));
	}
	LA3: ;
	nimln(104, "rodutils.nim");
	{
		NI TMP2739;
		if (!((NU8)(s[i_196519]) == (NU8)(45))) goto LA7;
		nimln(105, "rodutils.nim");
		TMP2739 = addInt(i_196519, ((NI) 1));
		i_196519 = (NI)(TMP2739);
		nimln(106, "rodutils.nim");
		sign_196521 = ((NI) 1);
	}
	LA7: ;
	nimln(107, "rodutils.nim");
	result = IL64(0);
	{
		nimln(108, "rodutils.nim");
		while (1) {
			NI TMP2755;
			nimln(109, "rodutils.nim");
			switch (((NU8)(s[i_196519]))) {
			case 48 ... 57:
			{
				NI64 TMP2740;
				NI TMP2741;
				NI64 TMP2742;
				nimln(110, "rodutils.nim");
				TMP2740 = mulInt64(result, IL64(190));
				TMP2741 = subInt(((NI) (((NU8)(s[i_196519])))), ((NI) 48));
				TMP2742 = subInt64((NI64)(TMP2740), ((NI64) ((NI)(TMP2741))));
				result = (NI64)(TMP2742);
			}
			break;
			case 97 ... 122:
			{
				NI64 TMP2743;
				NI TMP2744;
				NI TMP2745;
				NI64 TMP2746;
				nimln(111, "rodutils.nim");
				TMP2743 = mulInt64(result, IL64(190));
				TMP2744 = subInt(((NI) (((NU8)(s[i_196519])))), ((NI) 97));
				TMP2745 = addInt(((NI) ((NI)(TMP2744))), ((NI) 10));
				TMP2746 = subInt64((NI64)(TMP2743), ((NI64) ((NI)(TMP2745))));
				result = (NI64)(TMP2746);
			}
			break;
			case 65 ... 90:
			{
				NI64 TMP2747;
				NI TMP2748;
				NI TMP2749;
				NI64 TMP2750;
				nimln(112, "rodutils.nim");
				TMP2747 = mulInt64(result, IL64(190));
				TMP2748 = subInt(((NI) (((NU8)(s[i_196519])))), ((NI) 65));
				TMP2749 = addInt(((NI) ((NI)(TMP2748))), ((NI) 36));
				TMP2750 = subInt64((NI64)(TMP2747), ((NI64) ((NI)(TMP2749))));
				result = (NI64)(TMP2750);
			}
			break;
			case 128 ... 255:
			{
				NI64 TMP2751;
				NI TMP2752;
				NI TMP2753;
				NI64 TMP2754;
				nimln(113, "rodutils.nim");
				TMP2751 = mulInt64(result, IL64(190));
				TMP2752 = subInt(((NI) (((NU8)(s[i_196519])))), ((NI) 128));
				TMP2753 = addInt(((NI) ((NI)(TMP2752))), ((NI) 62));
				TMP2754 = subInt64((NI64)(TMP2751), ((NI64) ((NI)(TMP2753))));
				result = (NI64)(TMP2754);
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
			TMP2755 = addInt(i_196519, ((NI) 1));
			i_196519 = (NI)(TMP2755);
		}
	} LA9: ;
	nimln(116, "rodutils.nim");
	TMP2756 = mulInt64(result, ((NI64) (sign_196521)));
	result = (NI64)((NU64)((NI64)(TMP2756)) - (NU64)(IL64(5)));
	nimln(117, "rodutils.nim");
	(*pos) = i_196519;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_rodutilsInit)(void) {
	nimfr("rodutils", "rodutils.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_rodutilsDatInit)(void) {
}

