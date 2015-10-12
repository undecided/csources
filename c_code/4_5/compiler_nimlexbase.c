/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct Tbaselexer178024 Tbaselexer178024;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tllstream177204 Tllstream177204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NU8 TY77859[32];
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
struct  Tbaselexer178024  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Tllstream177204* stream;
NI linenumber;
NI sentinel;
NI linestart;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
N_NIMCALL(void, closebaselexer_178045)(Tbaselexer178024* L);
N_NOCONV(void, dealloc_6048)(void* p);
N_NIMCALL(void, llstreamclose_177310)(Tllstream177204* s);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, fillbuffer_178097)(Tbaselexer178024* L);
N_NIMCALL(void, failedassertimpl_87217)(NimStringDesc* msg);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NI, llstreamread_177584)(Tllstream177204* s, void* buf, NI buflen);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOCONV(void*, realloc_6033)(void* p, NI newsize);
N_NIMCALL(NI, fillbaselexer_178827)(Tbaselexer178024* L, NI pos);
N_NIMCALL(NI, handlecr_178066)(Tbaselexer178024* L, NI pos);
N_NIMCALL(NI, handlelf_178074)(Tbaselexer178024* L, NI pos);
N_NIMCALL(void, skiputf8bom_179416)(Tbaselexer178024* L);
N_NIMCALL(void, openbaselexer_178035)(Tbaselexer178024* L, Tllstream177204* inputstream, NI buflen);
N_NOCONV(void*, alloc_6001)(NI size);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, getcolnumber_178059)(Tbaselexer178024* L, NI pos);
N_NIMCALL(NimStringDesc*, getcurrentline_178052)(Tbaselexer178024* L, NIM_BOOL marker);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c, NI count);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
NIM_CONST TY77859 Newlines_178018 = {
0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2117, "L.sentinel < L.bufLen ", 22);
STRING_LITERAL(TMP2120, "0 <= toCopy ", 12);
STRING_LITERAL(TMP2129, "s < L.bufLen ", 13);
STRING_LITERAL(TMP2134, "L.bufLen - oldBufLen == oldBufLen ", 34);
STRING_LITERAL(TMP2140, "pos <= L.sentinel ", 18);
STRING_LITERAL(TMP2142, "L.buf[pos] == \'\\x0D\' ", 21);
STRING_LITERAL(TMP2144, "L.buf[pos] == \'\\x0A\' ", 21);
STRING_LITERAL(TMP2148, "0 < bufLen ", 11);
STRING_LITERAL(TMP2152, "", 0);
STRING_LITERAL(TMP2154, "\012", 1);
STRING_LITERAL(TMP2155, "^\012", 2);
extern TFrame* frameptr_17042;
extern TNimType NTI3411; /* RootObj */
TNimType NTI178024; /* TBaseLexer */
extern TNimType NTI108; /* int */
extern TNimType NTI151; /* cstring */
extern TNimType NTI177206; /* PLLStream */

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

N_NIMCALL(void, closebaselexer_178045)(Tbaselexer178024* L) {
	nimfr("closeBaseLexer", "nimlexbase.nim")
	nimln(71, "nimlexbase.nim");
	dealloc_6048(((void*) ((*L).buf)));
	nimln(72, "nimlexbase.nim");
	llstreamclose_177310((*L).stream);
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

N_NIMCALL(void, fillbuffer_178097)(Tbaselexer178024* L) {
	NI charsread;
	NI tocopy;
	NI s;
	NI oldbuflen;
	NI TMP2118;
	NI TMP2119;
	NI TMP2123;
	NI TMP2124;
	NI LOC13;
	NI TMP2125;
	NI TMP2126;
	nimfr("fillBuffer", "nimlexbase.nim")
	charsread = 0;
	tocopy = 0;
	s = 0;
	oldbuflen = 0;
	nimln(82, "nimlexbase.nim");
	{
		if (!!(((*L).sentinel < (*L).buflen))) goto LA3;
		failedassertimpl_87217(((NimStringDesc*) &TMP2117));
	}
	LA3: ;
	nimln(83, "nimlexbase.nim");
	TMP2118 = subInt((*L).buflen, (*L).sentinel);
	TMP2119 = subInt((NI)(TMP2118), ((NI) 1));
	tocopy = (NI)(TMP2119);
	nimln(84, "nimlexbase.nim");
	{
		if (!!((((NI) 0) <= tocopy))) goto LA7;
		failedassertimpl_87217(((NimStringDesc*) &TMP2120));
	}
	LA7: ;
	nimln(85, "nimlexbase.nim");
	{
		NI TMP2121;
		NI TMP2122;
		if (!(((NI) 0) < tocopy)) goto LA11;
		nimln(86, "nimlexbase.nim");
		TMP2121 = addInt((*L).sentinel, ((NI) 1));
		TMP2122 = mulInt(tocopy, ((NI) 1));
		memmove(((void*) ((*L).buf)), ((void*) ((&(*L).buf[(NI)(TMP2121)]))), ((NI)chckRange((NI)(TMP2122), ((NI) 0), ((NI) 2147483647))));
	}
	LA11: ;
	nimln(88, "nimlexbase.nim");
	nimln(89, "nimlexbase.nim");
	nimln(88, "nimlexbase.nim");
	nimln(89, "nimlexbase.nim");
	TMP2123 = addInt((*L).sentinel, ((NI) 1));
	TMP2124 = mulInt((NI)(TMP2123), ((NI) 1));
	LOC13 = 0;
	LOC13 = llstreamread_177584((*L).stream, ((void*) ((&(*L).buf[tocopy]))), (NI)(TMP2124));
	TMP2125 = divInt(LOC13, ((NI) 1));
	charsread = (NI)(TMP2125);
	nimln(90, "nimlexbase.nim");
	TMP2126 = addInt(tocopy, charsread);
	s = (NI)(TMP2126);
	nimln(91, "nimlexbase.nim");
	{
		NI TMP2127;
		TMP2127 = addInt((*L).sentinel, ((NI) 1));
		if (!(charsread < (NI)(TMP2127))) goto LA16;
		nimln(92, "nimlexbase.nim");
		(*L).buf[s] = 0;
		nimln(93, "nimlexbase.nim");
		(*L).sentinel = s;
	}
	goto LA14;
	LA16: ;
	{
		NI TMP2128;
		nimln(96, "nimlexbase.nim");
		TMP2128 = subInt(s, ((NI) 1));
		s = (NI)(TMP2128);
		{
			nimln(97, "nimlexbase.nim");
			while (1) {
				nimln(98, "nimlexbase.nim");
				{
					if (!!((s < (*L).buflen))) goto LA23;
					failedassertimpl_87217(((NimStringDesc*) &TMP2129));
				}
				LA23: ;
				{
					nimln(99, "nimlexbase.nim");
					while (1) {
						NIM_BOOL LOC27;
						NI TMP2130;
						LOC27 = 0;
						LOC27 = (((NI) 0) <= s);
						if (!(LOC27)) goto LA28;
						LOC27 = !((((NU8)((*L).buf[s])) == ((NU8)(13)) || ((NU8)((*L).buf[s])) == ((NU8)(10))));
						LA28: ;
						if (!LOC27) goto LA26;
						TMP2130 = subInt(s, ((NI) 1));
						s = (NI)(TMP2130);
					} LA26: ;
				}
				nimln(100, "nimlexbase.nim");
				{
					if (!(((NI) 0) <= s)) goto LA31;
					nimln(102, "nimlexbase.nim");
					(*L).sentinel = s;
					nimln(103, "nimlexbase.nim");
					goto LA19;
				}
				goto LA29;
				LA31: ;
				{
					NI TMP2131;
					NI TMP2132;
					void* LOC34;
					NI TMP2135;
					NI LOC39;
					NI TMP2136;
					NI TMP2139;
					nimln(107, "nimlexbase.nim");
					oldbuflen = (*L).buflen;
					nimln(108, "nimlexbase.nim");
					TMP2131 = mulInt((*L).buflen, ((NI) 2));
					(*L).buflen = (NI)(TMP2131);
					nimln(109, "nimlexbase.nim");
					TMP2132 = mulInt((*L).buflen, ((NI) 1));
					LOC34 = 0;
					LOC34 = realloc_6033(((void*) ((*L).buf)), ((NI)chckRange((NI)(TMP2132), ((NI) 0), ((NI) 2147483647))));
					(*L).buf = ((NCSTRING) (LOC34));
					nimln(110, "nimlexbase.nim");
					{
						NI TMP2133;
						TMP2133 = subInt((*L).buflen, oldbuflen);
						if (!!(((NI)(TMP2133) == oldbuflen))) goto LA37;
						failedassertimpl_87217(((NimStringDesc*) &TMP2134));
					}
					LA37: ;
					nimln(111, "nimlexbase.nim");
					nimln(112, "nimlexbase.nim");
					nimln(111, "nimlexbase.nim");
					nimln(112, "nimlexbase.nim");
					TMP2135 = mulInt(oldbuflen, ((NI) 1));
					LOC39 = 0;
					LOC39 = llstreamread_177584((*L).stream, ((void*) ((&(*L).buf[oldbuflen]))), (NI)(TMP2135));
					TMP2136 = divInt(LOC39, ((NI) 1));
					charsread = (NI)(TMP2136);
					nimln(113, "nimlexbase.nim");
					{
						NI TMP2137;
						NI TMP2138;
						if (!(charsread < oldbuflen)) goto LA42;
						nimln(114, "nimlexbase.nim");
						TMP2137 = addInt(oldbuflen, charsread);
						(*L).buf[(NI)(TMP2137)] = 0;
						nimln(115, "nimlexbase.nim");
						TMP2138 = addInt(oldbuflen, charsread);
						(*L).sentinel = (NI)(TMP2138);
						nimln(116, "nimlexbase.nim");
						goto LA19;
					}
					LA42: ;
					nimln(117, "nimlexbase.nim");
					TMP2139 = subInt((*L).buflen, ((NI) 1));
					s = (NI)(TMP2139);
				}
				LA29: ;
			}
		} LA19: ;
	}
	LA14: ;
	popFrame();
}

N_NIMCALL(NI, fillbaselexer_178827)(Tbaselexer178024* L, NI pos) {
	NI result;
	nimfr("fillBaseLexer", "nimlexbase.nim")
	result = 0;
	nimln(120, "nimlexbase.nim");
	{
		if (!!((pos <= (*L).sentinel))) goto LA3;
		failedassertimpl_87217(((NimStringDesc*) &TMP2140));
	}
	LA3: ;
	nimln(121, "nimlexbase.nim");
	{
		NI TMP2141;
		if (!(pos < (*L).sentinel)) goto LA7;
		nimln(122, "nimlexbase.nim");
		TMP2141 = addInt(pos, ((NI) 1));
		result = (NI)(TMP2141);
	}
	goto LA5;
	LA7: ;
	{
		nimln(124, "nimlexbase.nim");
		fillbuffer_178097(L);
		nimln(125, "nimlexbase.nim");
		(*L).bufpos = ((NI) 0);
		nimln(126, "nimlexbase.nim");
		result = ((NI) 0);
	}
	LA5: ;
	nimln(127, "nimlexbase.nim");
	(*L).linestart = result;
	popFrame();
	return result;
}

N_NIMCALL(NI, handlecr_178066)(Tbaselexer178024* L, NI pos) {
	NI result;
	NI TMP2143;
	nimfr("handleCR", "nimlexbase.nim")
	result = 0;
	nimln(130, "nimlexbase.nim");
	{
		if (!!(((NU8)((*L).buf[pos]) == (NU8)(13)))) goto LA3;
		failedassertimpl_87217(((NimStringDesc*) &TMP2142));
	}
	LA3: ;
	nimln(131, "nimlexbase.nim");
	TMP2143 = addInt((*L).linenumber, ((NI) 1));
	(*L).linenumber = (NI)(TMP2143);
	nimln(132, "nimlexbase.nim");
	result = fillbaselexer_178827(L, pos);
	nimln(133, "nimlexbase.nim");
	{
		if (!((NU8)((*L).buf[result]) == (NU8)(10))) goto LA7;
		nimln(134, "nimlexbase.nim");
		result = fillbaselexer_178827(L, result);
	}
	LA7: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, handlelf_178074)(Tbaselexer178024* L, NI pos) {
	NI result;
	NI TMP2145;
	nimfr("handleLF", "nimlexbase.nim")
	result = 0;
	nimln(137, "nimlexbase.nim");
	{
		if (!!(((NU8)((*L).buf[pos]) == (NU8)(10)))) goto LA3;
		failedassertimpl_87217(((NimStringDesc*) &TMP2144));
	}
	LA3: ;
	nimln(138, "nimlexbase.nim");
	TMP2145 = addInt((*L).linenumber, ((NI) 1));
	(*L).linenumber = (NI)(TMP2145);
	nimln(139, "nimlexbase.nim");
	result = fillbaselexer_178827(L, pos);
	popFrame();
	return result;
}

N_NIMCALL(void, skiputf8bom_179416)(Tbaselexer178024* L) {
	nimfr("skipUTF8BOM", "nimlexbase.nim")
	nimln(142, "nimlexbase.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NI TMP2146;
		NI TMP2147;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = ((NU8)((*L).buf[((NI) 0)]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		LOC4 = ((NU8)((*L).buf[((NI) 1)]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		LOC3 = ((NU8)((*L).buf[((NI) 2)]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		nimln(143, "nimlexbase.nim");
		TMP2146 = addInt((*L).bufpos, ((NI) 3));
		(*L).bufpos = (NI)(TMP2146);
		nimln(144, "nimlexbase.nim");
		TMP2147 = addInt((*L).linestart, ((NI) 3));
		(*L).linestart = (NI)(TMP2147);
	}
	LA7: ;
	popFrame();
}

N_NIMCALL(void, openbaselexer_178035)(Tbaselexer178024* L, Tllstream177204* inputstream, NI buflen) {
	NI TMP2149;
	void* LOC5;
	NI TMP2150;
	nimfr("openBaseLexer", "nimlexbase.nim")
	nimln(147, "nimlexbase.nim");
	{
		if (!!((((NI) 0) < buflen))) goto LA3;
		failedassertimpl_87217(((NimStringDesc*) &TMP2148));
	}
	LA3: ;
	nimln(148, "nimlexbase.nim");
	(*L).bufpos = ((NI) 0);
	nimln(149, "nimlexbase.nim");
	(*L).buflen = buflen;
	nimln(150, "nimlexbase.nim");
	TMP2149 = mulInt(buflen, ((NI) 1));
	LOC5 = 0;
	LOC5 = alloc_6001(((NI)chckRange((NI)(TMP2149), ((NI) 0), ((NI) 2147483647))));
	(*L).buf = ((NCSTRING) (LOC5));
	nimln(151, "nimlexbase.nim");
	TMP2150 = subInt(buflen, ((NI) 1));
	(*L).sentinel = (NI)(TMP2150);
	nimln(152, "nimlexbase.nim");
	(*L).linestart = ((NI) 0);
	nimln(153, "nimlexbase.nim");
	(*L).linenumber = ((NI) 1);
	nimln(154, "nimlexbase.nim");
	unsureAsgnRef((void**) (&(*L).stream), inputstream);
	nimln(155, "nimlexbase.nim");
	fillbuffer_178097(L);
	nimln(156, "nimlexbase.nim");
	skiputf8bom_179416(L);
	popFrame();
}

N_NIMCALL(NI, getcolnumber_178059)(Tbaselexer178024* L, NI pos) {
	NI result;
	NI TMP2151;
	nimfr("getColNumber", "nimlexbase.nim")
	result = 0;
	nimln(159, "nimlexbase.nim");
	TMP2151 = subInt(pos, (*L).linestart);
	if ((NI)(TMP2151) == (-2147483647 -1)) raiseOverflow();
	result = ((NI)(TMP2151) > 0? ((NI)(TMP2151)) : -((NI)(TMP2151)));
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, getcurrentline_178052)(Tbaselexer178024* L, NIM_BOOL marker) {
	NimStringDesc* result;
	NI i;
	nimfr("getCurrentLine", "nimlexbase.nim")
	result = 0;
	nimln(162, "nimlexbase.nim");
	result = copyString(((NimStringDesc*) &TMP2152));
	nimln(163, "nimlexbase.nim");
	i = (*L).linestart;
	{
		nimln(164, "nimlexbase.nim");
		while (1) {
			NI TMP2153;
			if (!!((((NU8)((*L).buf[i])) == ((NU8)(13)) || ((NU8)((*L).buf[i])) == ((NU8)(10)) || ((NU8)((*L).buf[i])) == ((NU8)(0))))) goto LA2;
			nimln(165, "nimlexbase.nim");
			result = addChar(result, (*L).buf[i]);
			nimln(166, "nimlexbase.nim");
			TMP2153 = addInt(i, ((NI) 1));
			i = (NI)(TMP2153);
		} LA2: ;
	}
	nimln(167, "nimlexbase.nim");
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP2154));
	nimln(168, "nimlexbase.nim");
	{
		NimStringDesc* LOC7;
		NI LOC8;
		NimStringDesc* LOC9;
		if (!marker) goto LA5;
		nimln(169, "nimlexbase.nim");
		LOC7 = 0;
		LOC8 = 0;
		LOC8 = getcolnumber_178059(L, (*L).bufpos);
		LOC9 = 0;
		LOC9 = nsuRepeatChar(32, ((NI)chckRange(LOC8, ((NI) 0), ((NI) 2147483647))));
		LOC7 = rawNewString(LOC9->Sup.len + 2);
appendString(LOC7, LOC9);
appendString(LOC7, ((NimStringDesc*) &TMP2155));
		result = resizeString(result, LOC7->Sup.len + 0);
appendString(result, LOC7);
	}
	LA5: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimlexbaseInit)(void) {
	nimfr("nimlexbase", "nimlexbase.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimlexbaseDatInit)(void) {
static TNimNode* TMP2490[7];
static TNimNode TMP2076[8];
NTI178024.size = sizeof(Tbaselexer178024);
NTI178024.kind = 17;
NTI178024.base = (&NTI3411);
TMP2490[0] = &TMP2076[1];
TMP2076[1].kind = 1;
TMP2076[1].offset = offsetof(Tbaselexer178024, bufpos);
TMP2076[1].typ = (&NTI108);
TMP2076[1].name = "bufpos";
TMP2490[1] = &TMP2076[2];
TMP2076[2].kind = 1;
TMP2076[2].offset = offsetof(Tbaselexer178024, buf);
TMP2076[2].typ = (&NTI151);
TMP2076[2].name = "buf";
TMP2490[2] = &TMP2076[3];
TMP2076[3].kind = 1;
TMP2076[3].offset = offsetof(Tbaselexer178024, buflen);
TMP2076[3].typ = (&NTI108);
TMP2076[3].name = "bufLen";
TMP2490[3] = &TMP2076[4];
TMP2076[4].kind = 1;
TMP2076[4].offset = offsetof(Tbaselexer178024, stream);
TMP2076[4].typ = (&NTI177206);
TMP2076[4].name = "stream";
TMP2490[4] = &TMP2076[5];
TMP2076[5].kind = 1;
TMP2076[5].offset = offsetof(Tbaselexer178024, linenumber);
TMP2076[5].typ = (&NTI108);
TMP2076[5].name = "lineNumber";
TMP2490[5] = &TMP2076[6];
TMP2076[6].kind = 1;
TMP2076[6].offset = offsetof(Tbaselexer178024, sentinel);
TMP2076[6].typ = (&NTI108);
TMP2076[6].name = "sentinel";
TMP2490[6] = &TMP2076[7];
TMP2076[7].kind = 1;
TMP2076[7].offset = offsetof(Tbaselexer178024, linestart);
TMP2076[7].typ = (&NTI108);
TMP2076[7].name = "lineStart";
TMP2076[0].len = 7; TMP2076[0].kind = 2; TMP2076[0].sons = &TMP2490[0];
NTI178024.node = &TMP2076[0];
}

