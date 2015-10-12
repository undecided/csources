/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Baselexer246024 Baselexer246024;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Streamobj138027 Streamobj138027;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NU8 TY77659[32];
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
struct  Baselexer246024  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Streamobj138027* input;
NI linenumber;
NI sentinel;
NI linestart;
NIM_BOOL fileopened;
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
typedef N_NIMCALL_PTR(void, TY138028) (Streamobj138027* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY138032) (Streamobj138027* s);
typedef N_NIMCALL_PTR(void, TY138036) (Streamobj138027* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY138041) (Streamobj138027* s);
typedef N_NIMCALL_PTR(NI, TY138045) (Streamobj138027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY138051) (Streamobj138027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY138057) (Streamobj138027* s);
struct  Streamobj138027  {
  TNimObject Sup;
TY138028 closeimpl;
TY138032 atendimpl;
TY138036 setpositionimpl;
TY138041 getpositionimpl;
TY138045 readdataimpl;
TY138051 writedataimpl;
TY138057 flushimpl;
};
N_NIMCALL(void, close_246050)(Baselexer246024* L);
N_NOCONV(void, dealloc_6048)(void* p);
N_NIMCALL(void, close_138085)(Streamobj138027* s);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, fillbuffer_246102)(Baselexer246024* L);
N_NIMCALL(void, failedassertimpl_87017)(NimStringDesc* msg);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NI, readdata_138174)(Streamobj138027* s, void* buffer, NI buflen);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOCONV(void*, realloc_6033)(void* p, NI newsize);
N_NIMCALL(NI, fillbaselexer_246827)(Baselexer246024* L, NI pos);
N_NIMCALL(NI, handlecr_246071)(Baselexer246024* L, NI pos);
N_NIMCALL(NI, handlelf_246079)(Baselexer246024* L, NI pos);
N_NIMCALL(void, skiputf8bom_247416)(Baselexer246024* L);
N_NIMCALL(void, open_246040)(Baselexer246024* L, Streamobj138027* input, NI buflen);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NOCONV(void*, alloc_6001)(NI size);
N_NIMCALL(NI, getcolnumber_246064)(Baselexer246024* L, NI pos);
N_NIMCALL(NimStringDesc*, getcurrentline_246057)(Baselexer246024* L, NIM_BOOL marker);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c, NI count);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
NIM_CONST TY77659 Newlines_246018 = {
0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4228, "L.sentinel < L.bufLen ", 22);
STRING_LITERAL(TMP4231, "0 <= toCopy ", 12);
STRING_LITERAL(TMP4240, "s < L.bufLen ", 13);
STRING_LITERAL(TMP4245, "L.bufLen - oldBufLen == oldBufLen ", 34);
STRING_LITERAL(TMP4251, "pos <= L.sentinel ", 18);
STRING_LITERAL(TMP4253, "L.buf[pos] == \'\\x0D\' ", 21);
STRING_LITERAL(TMP4255, "L.buf[pos] == \'\\x0A\' ", 21);
STRING_LITERAL(TMP4259, "0 < bufLen ", 11);
STRING_LITERAL(TMP4260, "not (input == nil) ", 19);
STRING_LITERAL(TMP4264, "", 0);
STRING_LITERAL(TMP4266, "\012", 1);
STRING_LITERAL(TMP4267, "^\012", 2);
extern TFrame* frameptr_17042;
extern TNimType NTI3411; /* RootObj */
TNimType NTI246024; /* BaseLexer */
extern TNimType NTI108; /* int */
extern TNimType NTI151; /* cstring */
extern TNimType NTI138025; /* Stream */
extern TNimType NTI138; /* bool */

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

N_NIMCALL(void, close_246050)(Baselexer246024* L) {
	nimfr("close", "lexbase.nim")
	nimln(68, "lexbase.nim");
	dealloc_6048(((void*) ((*L).buf)));
	nimln(69, "lexbase.nim");
	close_138085((*L).input);
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

N_NIMCALL(void, fillbuffer_246102)(Baselexer246024* L) {
	NI charsread;
	NI tocopy;
	NI s;
	NI oldbuflen;
	NI TMP4229;
	NI TMP4230;
	NI TMP4234;
	NI TMP4235;
	NI LOC13;
	NI TMP4236;
	NI TMP4237;
	nimfr("fillBuffer", "lexbase.nim")
	charsread = 0;
	tocopy = 0;
	s = 0;
	oldbuflen = 0;
	nimln(79, "lexbase.nim");
	{
		if (!!(((*L).sentinel < (*L).buflen))) goto LA3;
		failedassertimpl_87017(((NimStringDesc*) &TMP4228));
	}
	LA3: ;
	nimln(80, "lexbase.nim");
	TMP4229 = subInt((*L).buflen, (*L).sentinel);
	TMP4230 = subInt((NI)(TMP4229), ((NI) 1));
	tocopy = (NI)(TMP4230);
	nimln(81, "lexbase.nim");
	{
		if (!!((((NI) 0) <= tocopy))) goto LA7;
		failedassertimpl_87017(((NimStringDesc*) &TMP4231));
	}
	LA7: ;
	nimln(82, "lexbase.nim");
	{
		NI TMP4232;
		NI TMP4233;
		if (!(((NI) 0) < tocopy)) goto LA11;
		nimln(83, "lexbase.nim");
		TMP4232 = addInt((*L).sentinel, ((NI) 1));
		TMP4233 = mulInt(tocopy, ((NI) 1));
		memmove(((void*) ((*L).buf)), ((void*) ((&(*L).buf[(NI)(TMP4232)]))), ((NI)chckRange((NI)(TMP4233), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	}
	LA11: ;
	nimln(85, "lexbase.nim");
	nimln(86, "lexbase.nim");
	nimln(85, "lexbase.nim");
	nimln(86, "lexbase.nim");
	TMP4234 = addInt((*L).sentinel, ((NI) 1));
	TMP4235 = mulInt((NI)(TMP4234), ((NI) 1));
	LOC13 = 0;
	LOC13 = readdata_138174((*L).input, ((void*) ((&(*L).buf[tocopy]))), (NI)(TMP4235));
	TMP4236 = divInt(LOC13, ((NI) 1));
	charsread = (NI)(TMP4236);
	nimln(87, "lexbase.nim");
	TMP4237 = addInt(tocopy, charsread);
	s = (NI)(TMP4237);
	nimln(88, "lexbase.nim");
	{
		NI TMP4238;
		TMP4238 = addInt((*L).sentinel, ((NI) 1));
		if (!(charsread < (NI)(TMP4238))) goto LA16;
		nimln(89, "lexbase.nim");
		(*L).buf[s] = 0;
		nimln(90, "lexbase.nim");
		(*L).sentinel = s;
	}
	goto LA14;
	LA16: ;
	{
		NI TMP4239;
		nimln(93, "lexbase.nim");
		TMP4239 = subInt(s, ((NI) 1));
		s = (NI)(TMP4239);
		{
			nimln(94, "lexbase.nim");
			while (1) {
				nimln(95, "lexbase.nim");
				{
					if (!!((s < (*L).buflen))) goto LA23;
					failedassertimpl_87017(((NimStringDesc*) &TMP4240));
				}
				LA23: ;
				{
					nimln(96, "lexbase.nim");
					while (1) {
						NIM_BOOL LOC27;
						NI TMP4241;
						LOC27 = 0;
						LOC27 = (((NI) 0) <= s);
						if (!(LOC27)) goto LA28;
						LOC27 = !((((NU8)((*L).buf[s])) == ((NU8)(13)) || ((NU8)((*L).buf[s])) == ((NU8)(10))));
						LA28: ;
						if (!LOC27) goto LA26;
						TMP4241 = subInt(s, ((NI) 1));
						s = (NI)(TMP4241);
					} LA26: ;
				}
				nimln(97, "lexbase.nim");
				{
					if (!(((NI) 0) <= s)) goto LA31;
					nimln(99, "lexbase.nim");
					(*L).sentinel = s;
					nimln(100, "lexbase.nim");
					goto LA19;
				}
				goto LA29;
				LA31: ;
				{
					NI TMP4242;
					NI TMP4243;
					void* LOC34;
					NI TMP4246;
					NI LOC39;
					NI TMP4247;
					NI TMP4250;
					nimln(104, "lexbase.nim");
					oldbuflen = (*L).buflen;
					nimln(105, "lexbase.nim");
					TMP4242 = mulInt((*L).buflen, ((NI) 2));
					(*L).buflen = (NI)(TMP4242);
					nimln(106, "lexbase.nim");
					TMP4243 = mulInt((*L).buflen, ((NI) 1));
					LOC34 = 0;
					LOC34 = realloc_6033(((void*) ((*L).buf)), ((NI)chckRange((NI)(TMP4243), ((NI) 0), ((NI) IL64(9223372036854775807)))));
					(*L).buf = ((NCSTRING) (LOC34));
					nimln(107, "lexbase.nim");
					{
						NI TMP4244;
						TMP4244 = subInt((*L).buflen, oldbuflen);
						if (!!(((NI)(TMP4244) == oldbuflen))) goto LA37;
						failedassertimpl_87017(((NimStringDesc*) &TMP4245));
					}
					LA37: ;
					nimln(108, "lexbase.nim");
					nimln(109, "lexbase.nim");
					nimln(108, "lexbase.nim");
					nimln(109, "lexbase.nim");
					TMP4246 = mulInt(oldbuflen, ((NI) 1));
					LOC39 = 0;
					LOC39 = readdata_138174((*L).input, ((void*) ((&(*L).buf[oldbuflen]))), (NI)(TMP4246));
					TMP4247 = divInt(LOC39, ((NI) 1));
					charsread = (NI)(TMP4247);
					nimln(110, "lexbase.nim");
					{
						NI TMP4248;
						NI TMP4249;
						if (!(charsread < oldbuflen)) goto LA42;
						nimln(111, "lexbase.nim");
						TMP4248 = addInt(oldbuflen, charsread);
						(*L).buf[(NI)(TMP4248)] = 0;
						nimln(112, "lexbase.nim");
						TMP4249 = addInt(oldbuflen, charsread);
						(*L).sentinel = (NI)(TMP4249);
						nimln(113, "lexbase.nim");
						goto LA19;
					}
					LA42: ;
					nimln(114, "lexbase.nim");
					TMP4250 = subInt((*L).buflen, ((NI) 1));
					s = (NI)(TMP4250);
				}
				LA29: ;
			}
		} LA19: ;
	}
	LA14: ;
	popFrame();
}

N_NIMCALL(NI, fillbaselexer_246827)(Baselexer246024* L, NI pos) {
	NI result;
	nimfr("fillBaseLexer", "lexbase.nim")
	result = 0;
	nimln(117, "lexbase.nim");
	{
		if (!!((pos <= (*L).sentinel))) goto LA3;
		failedassertimpl_87017(((NimStringDesc*) &TMP4251));
	}
	LA3: ;
	nimln(118, "lexbase.nim");
	{
		NI TMP4252;
		if (!(pos < (*L).sentinel)) goto LA7;
		nimln(119, "lexbase.nim");
		TMP4252 = addInt(pos, ((NI) 1));
		result = (NI)(TMP4252);
	}
	goto LA5;
	LA7: ;
	{
		nimln(121, "lexbase.nim");
		fillbuffer_246102(L);
		nimln(122, "lexbase.nim");
		(*L).bufpos = ((NI) 0);
		nimln(123, "lexbase.nim");
		result = ((NI) 0);
	}
	LA5: ;
	nimln(124, "lexbase.nim");
	(*L).linestart = result;
	popFrame();
	return result;
}

N_NIMCALL(NI, handlecr_246071)(Baselexer246024* L, NI pos) {
	NI result;
	NI TMP4254;
	nimfr("handleCR", "lexbase.nim")
	result = 0;
	nimln(127, "lexbase.nim");
	{
		if (!!(((NU8)((*L).buf[pos]) == (NU8)(13)))) goto LA3;
		failedassertimpl_87017(((NimStringDesc*) &TMP4253));
	}
	LA3: ;
	nimln(128, "lexbase.nim");
	TMP4254 = addInt((*L).linenumber, ((NI) 1));
	(*L).linenumber = (NI)(TMP4254);
	nimln(129, "lexbase.nim");
	result = fillbaselexer_246827(L, pos);
	nimln(130, "lexbase.nim");
	{
		if (!((NU8)((*L).buf[result]) == (NU8)(10))) goto LA7;
		nimln(131, "lexbase.nim");
		result = fillbaselexer_246827(L, result);
	}
	LA7: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, handlelf_246079)(Baselexer246024* L, NI pos) {
	NI result;
	NI TMP4256;
	nimfr("handleLF", "lexbase.nim")
	result = 0;
	nimln(134, "lexbase.nim");
	{
		if (!!(((NU8)((*L).buf[pos]) == (NU8)(10)))) goto LA3;
		failedassertimpl_87017(((NimStringDesc*) &TMP4255));
	}
	LA3: ;
	nimln(135, "lexbase.nim");
	TMP4256 = addInt((*L).linenumber, ((NI) 1));
	(*L).linenumber = (NI)(TMP4256);
	nimln(136, "lexbase.nim");
	result = fillbaselexer_246827(L, pos);
	popFrame();
	return result;
}

N_NIMCALL(void, skiputf8bom_247416)(Baselexer246024* L) {
	nimfr("skipUtf8Bom", "lexbase.nim")
	nimln(139, "lexbase.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NI TMP4257;
		NI TMP4258;
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
		nimln(140, "lexbase.nim");
		TMP4257 = addInt((*L).bufpos, ((NI) 3));
		(*L).bufpos = (NI)(TMP4257);
		nimln(141, "lexbase.nim");
		TMP4258 = addInt((*L).linestart, ((NI) 3));
		(*L).linestart = (NI)(TMP4258);
	}
	LA7: ;
	popFrame();
}

N_NIMCALL(void, open_246040)(Baselexer246024* L, Streamobj138027* input, NI buflen) {
	NI TMP4261;
	void* LOC9;
	NI TMP4262;
	nimfr("open", "lexbase.nim")
	nimln(144, "lexbase.nim");
	{
		if (!!((((NI) 0) < buflen))) goto LA3;
		failedassertimpl_87017(((NimStringDesc*) &TMP4259));
	}
	LA3: ;
	nimln(145, "lexbase.nim");
	{
		if (!!(!((input == NIM_NIL)))) goto LA7;
		failedassertimpl_87017(((NimStringDesc*) &TMP4260));
	}
	LA7: ;
	nimln(146, "lexbase.nim");
	unsureAsgnRef((void**) (&(*L).input), input);
	nimln(147, "lexbase.nim");
	(*L).bufpos = ((NI) 0);
	nimln(148, "lexbase.nim");
	(*L).buflen = buflen;
	nimln(149, "lexbase.nim");
	TMP4261 = mulInt(buflen, ((NI) 1));
	LOC9 = 0;
	LOC9 = alloc_6001(((NI)chckRange((NI)(TMP4261), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	(*L).buf = ((NCSTRING) (LOC9));
	nimln(150, "lexbase.nim");
	TMP4262 = subInt(buflen, ((NI) 1));
	(*L).sentinel = (NI)(TMP4262);
	nimln(151, "lexbase.nim");
	(*L).linestart = ((NI) 0);
	nimln(152, "lexbase.nim");
	(*L).linenumber = ((NI) 1);
	nimln(153, "lexbase.nim");
	fillbuffer_246102(L);
	nimln(154, "lexbase.nim");
	skiputf8bom_247416(L);
	popFrame();
}

N_NIMCALL(NI, getcolnumber_246064)(Baselexer246024* L, NI pos) {
	NI result;
	NI TMP4263;
	nimfr("getColNumber", "lexbase.nim")
	result = 0;
	nimln(157, "lexbase.nim");
	TMP4263 = subInt(pos, (*L).linestart);
	if ((NI)(TMP4263) == (IL64(-9223372036854775807) - IL64(1))) raiseOverflow();
	result = ((NI)(TMP4263) > 0? ((NI)(TMP4263)) : -((NI)(TMP4263)));
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, getcurrentline_246057)(Baselexer246024* L, NIM_BOOL marker) {
	NimStringDesc* result;
	NI i;
	nimfr("getCurrentLine", "lexbase.nim")
	result = 0;
	i = 0;
	nimln(161, "lexbase.nim");
	result = copyString(((NimStringDesc*) &TMP4264));
	nimln(162, "lexbase.nim");
	i = (*L).linestart;
	{
		nimln(163, "lexbase.nim");
		while (1) {
			NI TMP4265;
			if (!!((((NU8)((*L).buf[i])) == ((NU8)(13)) || ((NU8)((*L).buf[i])) == ((NU8)(10)) || ((NU8)((*L).buf[i])) == ((NU8)(0))))) goto LA2;
			nimln(164, "lexbase.nim");
			result = addChar(result, (*L).buf[i]);
			nimln(165, "lexbase.nim");
			TMP4265 = addInt(i, ((NI) 1));
			i = (NI)(TMP4265);
		} LA2: ;
	}
	nimln(166, "lexbase.nim");
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP4266));
	nimln(167, "lexbase.nim");
	{
		NimStringDesc* LOC7;
		NI LOC8;
		NimStringDesc* LOC9;
		if (!marker) goto LA5;
		nimln(168, "lexbase.nim");
		LOC7 = 0;
		LOC8 = 0;
		LOC8 = getcolnumber_246064(L, (*L).bufpos);
		LOC9 = 0;
		LOC9 = nsuRepeatChar(32, ((NI)chckRange(LOC8, ((NI) 0), ((NI) IL64(9223372036854775807)))));
		LOC7 = rawNewString(LOC9->Sup.len + 2);
appendString(LOC7, LOC9);
appendString(LOC7, ((NimStringDesc*) &TMP4267));
		result = resizeString(result, LOC7->Sup.len + 0);
appendString(result, LOC7);
	}
	LA5: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseInit)(void) {
	nimfr("lexbase", "lexbase.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseDatInit)(void) {
static TNimNode* TMP4272[8];
static TNimNode TMP4226[9];
NTI246024.size = sizeof(Baselexer246024);
NTI246024.kind = 17;
NTI246024.base = (&NTI3411);
TMP4272[0] = &TMP4226[1];
TMP4226[1].kind = 1;
TMP4226[1].offset = offsetof(Baselexer246024, bufpos);
TMP4226[1].typ = (&NTI108);
TMP4226[1].name = "bufpos";
TMP4272[1] = &TMP4226[2];
TMP4226[2].kind = 1;
TMP4226[2].offset = offsetof(Baselexer246024, buf);
TMP4226[2].typ = (&NTI151);
TMP4226[2].name = "buf";
TMP4272[2] = &TMP4226[3];
TMP4226[3].kind = 1;
TMP4226[3].offset = offsetof(Baselexer246024, buflen);
TMP4226[3].typ = (&NTI108);
TMP4226[3].name = "bufLen";
TMP4272[3] = &TMP4226[4];
TMP4226[4].kind = 1;
TMP4226[4].offset = offsetof(Baselexer246024, input);
TMP4226[4].typ = (&NTI138025);
TMP4226[4].name = "input";
TMP4272[4] = &TMP4226[5];
TMP4226[5].kind = 1;
TMP4226[5].offset = offsetof(Baselexer246024, linenumber);
TMP4226[5].typ = (&NTI108);
TMP4226[5].name = "lineNumber";
TMP4272[5] = &TMP4226[6];
TMP4226[6].kind = 1;
TMP4226[6].offset = offsetof(Baselexer246024, sentinel);
TMP4226[6].typ = (&NTI108);
TMP4226[6].name = "sentinel";
TMP4272[6] = &TMP4226[7];
TMP4226[7].kind = 1;
TMP4226[7].offset = offsetof(Baselexer246024, linestart);
TMP4226[7].typ = (&NTI108);
TMP4226[7].name = "lineStart";
TMP4272[7] = &TMP4226[8];
TMP4226[8].kind = 1;
TMP4226[8].offset = offsetof(Baselexer246024, fileopened);
TMP4226[8].typ = (&NTI138);
TMP4226[8].name = "fileOpened";
TMP4226[0].len = 8; TMP4226[0].kind = 2; TMP4226[0].sons = &TMP4272[0];
NTI246024.node = &TMP4226[0];
}

