/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Baselexer248024 Baselexer248024;
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
struct  Baselexer248024  {
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
N_NIMCALL(void, close_248050)(Baselexer248024* L);
N_NOCONV(void, dealloc_6048)(void* p);
N_NIMCALL(void, close_138085)(Streamobj138027* s);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, fillbuffer_248102)(Baselexer248024* L);
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
N_NIMCALL(NI, fillbaselexer_248827)(Baselexer248024* L, NI pos);
N_NIMCALL(NI, handlecr_248071)(Baselexer248024* L, NI pos);
N_NIMCALL(NI, handlelf_248079)(Baselexer248024* L, NI pos);
N_NIMCALL(void, skiputf8bom_249416)(Baselexer248024* L);
N_NIMCALL(void, open_248040)(Baselexer248024* L, Streamobj138027* input, NI buflen);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NOCONV(void*, alloc_6001)(NI size);
N_NIMCALL(NI, getcolnumber_248064)(Baselexer248024* L, NI pos);
N_NIMCALL(NimStringDesc*, getcurrentline_248057)(Baselexer248024* L, NIM_BOOL marker);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c, NI count);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
NIM_CONST TY77659 Newlines_248018 = {
0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4229, "L.sentinel < L.bufLen ", 22);
STRING_LITERAL(TMP4232, "0 <= toCopy ", 12);
STRING_LITERAL(TMP4241, "s < L.bufLen ", 13);
STRING_LITERAL(TMP4246, "L.bufLen - oldBufLen == oldBufLen ", 34);
STRING_LITERAL(TMP4252, "pos <= L.sentinel ", 18);
STRING_LITERAL(TMP4254, "L.buf[pos] == \'\\x0D\' ", 21);
STRING_LITERAL(TMP4256, "L.buf[pos] == \'\\x0A\' ", 21);
STRING_LITERAL(TMP4260, "0 < bufLen ", 11);
STRING_LITERAL(TMP4261, "not (input == nil) ", 19);
STRING_LITERAL(TMP4265, "", 0);
STRING_LITERAL(TMP4267, "\012", 1);
STRING_LITERAL(TMP4268, "^\012", 2);
extern TFrame* frameptr_17042;
extern TNimType NTI3411; /* RootObj */
TNimType NTI248024; /* BaseLexer */
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

N_NIMCALL(void, close_248050)(Baselexer248024* L) {
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

N_NIMCALL(void, fillbuffer_248102)(Baselexer248024* L) {
	NI charsread;
	NI tocopy;
	NI s;
	NI oldbuflen;
	NI TMP4230;
	NI TMP4231;
	NI TMP4235;
	NI TMP4236;
	NI LOC13;
	NI TMP4237;
	NI TMP4238;
	nimfr("fillBuffer", "lexbase.nim")
	charsread = 0;
	tocopy = 0;
	s = 0;
	oldbuflen = 0;
	nimln(79, "lexbase.nim");
	{
		if (!!(((*L).sentinel < (*L).buflen))) goto LA3;
		failedassertimpl_87017(((NimStringDesc*) &TMP4229));
	}
	LA3: ;
	nimln(80, "lexbase.nim");
	TMP4230 = subInt((*L).buflen, (*L).sentinel);
	TMP4231 = subInt((NI)(TMP4230), ((NI) 1));
	tocopy = (NI)(TMP4231);
	nimln(81, "lexbase.nim");
	{
		if (!!((((NI) 0) <= tocopy))) goto LA7;
		failedassertimpl_87017(((NimStringDesc*) &TMP4232));
	}
	LA7: ;
	nimln(82, "lexbase.nim");
	{
		NI TMP4233;
		NI TMP4234;
		if (!(((NI) 0) < tocopy)) goto LA11;
		nimln(83, "lexbase.nim");
		TMP4233 = addInt((*L).sentinel, ((NI) 1));
		TMP4234 = mulInt(tocopy, ((NI) 1));
		memmove(((void*) ((*L).buf)), ((void*) ((&(*L).buf[(NI)(TMP4233)]))), ((NI)chckRange((NI)(TMP4234), ((NI) 0), ((NI) 2147483647))));
	}
	LA11: ;
	nimln(85, "lexbase.nim");
	nimln(86, "lexbase.nim");
	nimln(85, "lexbase.nim");
	nimln(86, "lexbase.nim");
	TMP4235 = addInt((*L).sentinel, ((NI) 1));
	TMP4236 = mulInt((NI)(TMP4235), ((NI) 1));
	LOC13 = 0;
	LOC13 = readdata_138174((*L).input, ((void*) ((&(*L).buf[tocopy]))), (NI)(TMP4236));
	TMP4237 = divInt(LOC13, ((NI) 1));
	charsread = (NI)(TMP4237);
	nimln(87, "lexbase.nim");
	TMP4238 = addInt(tocopy, charsread);
	s = (NI)(TMP4238);
	nimln(88, "lexbase.nim");
	{
		NI TMP4239;
		TMP4239 = addInt((*L).sentinel, ((NI) 1));
		if (!(charsread < (NI)(TMP4239))) goto LA16;
		nimln(89, "lexbase.nim");
		(*L).buf[s] = 0;
		nimln(90, "lexbase.nim");
		(*L).sentinel = s;
	}
	goto LA14;
	LA16: ;
	{
		NI TMP4240;
		nimln(93, "lexbase.nim");
		TMP4240 = subInt(s, ((NI) 1));
		s = (NI)(TMP4240);
		{
			nimln(94, "lexbase.nim");
			while (1) {
				nimln(95, "lexbase.nim");
				{
					if (!!((s < (*L).buflen))) goto LA23;
					failedassertimpl_87017(((NimStringDesc*) &TMP4241));
				}
				LA23: ;
				{
					nimln(96, "lexbase.nim");
					while (1) {
						NIM_BOOL LOC27;
						NI TMP4242;
						LOC27 = 0;
						LOC27 = (((NI) 0) <= s);
						if (!(LOC27)) goto LA28;
						LOC27 = !((((NU8)((*L).buf[s])) == ((NU8)(13)) || ((NU8)((*L).buf[s])) == ((NU8)(10))));
						LA28: ;
						if (!LOC27) goto LA26;
						TMP4242 = subInt(s, ((NI) 1));
						s = (NI)(TMP4242);
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
					NI TMP4243;
					NI TMP4244;
					void* LOC34;
					NI TMP4247;
					NI LOC39;
					NI TMP4248;
					NI TMP4251;
					nimln(104, "lexbase.nim");
					oldbuflen = (*L).buflen;
					nimln(105, "lexbase.nim");
					TMP4243 = mulInt((*L).buflen, ((NI) 2));
					(*L).buflen = (NI)(TMP4243);
					nimln(106, "lexbase.nim");
					TMP4244 = mulInt((*L).buflen, ((NI) 1));
					LOC34 = 0;
					LOC34 = realloc_6033(((void*) ((*L).buf)), ((NI)chckRange((NI)(TMP4244), ((NI) 0), ((NI) 2147483647))));
					(*L).buf = ((NCSTRING) (LOC34));
					nimln(107, "lexbase.nim");
					{
						NI TMP4245;
						TMP4245 = subInt((*L).buflen, oldbuflen);
						if (!!(((NI)(TMP4245) == oldbuflen))) goto LA37;
						failedassertimpl_87017(((NimStringDesc*) &TMP4246));
					}
					LA37: ;
					nimln(108, "lexbase.nim");
					nimln(109, "lexbase.nim");
					nimln(108, "lexbase.nim");
					nimln(109, "lexbase.nim");
					TMP4247 = mulInt(oldbuflen, ((NI) 1));
					LOC39 = 0;
					LOC39 = readdata_138174((*L).input, ((void*) ((&(*L).buf[oldbuflen]))), (NI)(TMP4247));
					TMP4248 = divInt(LOC39, ((NI) 1));
					charsread = (NI)(TMP4248);
					nimln(110, "lexbase.nim");
					{
						NI TMP4249;
						NI TMP4250;
						if (!(charsread < oldbuflen)) goto LA42;
						nimln(111, "lexbase.nim");
						TMP4249 = addInt(oldbuflen, charsread);
						(*L).buf[(NI)(TMP4249)] = 0;
						nimln(112, "lexbase.nim");
						TMP4250 = addInt(oldbuflen, charsread);
						(*L).sentinel = (NI)(TMP4250);
						nimln(113, "lexbase.nim");
						goto LA19;
					}
					LA42: ;
					nimln(114, "lexbase.nim");
					TMP4251 = subInt((*L).buflen, ((NI) 1));
					s = (NI)(TMP4251);
				}
				LA29: ;
			}
		} LA19: ;
	}
	LA14: ;
	popFrame();
}

N_NIMCALL(NI, fillbaselexer_248827)(Baselexer248024* L, NI pos) {
	NI result;
	nimfr("fillBaseLexer", "lexbase.nim")
	result = 0;
	nimln(117, "lexbase.nim");
	{
		if (!!((pos <= (*L).sentinel))) goto LA3;
		failedassertimpl_87017(((NimStringDesc*) &TMP4252));
	}
	LA3: ;
	nimln(118, "lexbase.nim");
	{
		NI TMP4253;
		if (!(pos < (*L).sentinel)) goto LA7;
		nimln(119, "lexbase.nim");
		TMP4253 = addInt(pos, ((NI) 1));
		result = (NI)(TMP4253);
	}
	goto LA5;
	LA7: ;
	{
		nimln(121, "lexbase.nim");
		fillbuffer_248102(L);
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

N_NIMCALL(NI, handlecr_248071)(Baselexer248024* L, NI pos) {
	NI result;
	NI TMP4255;
	nimfr("handleCR", "lexbase.nim")
	result = 0;
	nimln(127, "lexbase.nim");
	{
		if (!!(((NU8)((*L).buf[pos]) == (NU8)(13)))) goto LA3;
		failedassertimpl_87017(((NimStringDesc*) &TMP4254));
	}
	LA3: ;
	nimln(128, "lexbase.nim");
	TMP4255 = addInt((*L).linenumber, ((NI) 1));
	(*L).linenumber = (NI)(TMP4255);
	nimln(129, "lexbase.nim");
	result = fillbaselexer_248827(L, pos);
	nimln(130, "lexbase.nim");
	{
		if (!((NU8)((*L).buf[result]) == (NU8)(10))) goto LA7;
		nimln(131, "lexbase.nim");
		result = fillbaselexer_248827(L, result);
	}
	LA7: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, handlelf_248079)(Baselexer248024* L, NI pos) {
	NI result;
	NI TMP4257;
	nimfr("handleLF", "lexbase.nim")
	result = 0;
	nimln(134, "lexbase.nim");
	{
		if (!!(((NU8)((*L).buf[pos]) == (NU8)(10)))) goto LA3;
		failedassertimpl_87017(((NimStringDesc*) &TMP4256));
	}
	LA3: ;
	nimln(135, "lexbase.nim");
	TMP4257 = addInt((*L).linenumber, ((NI) 1));
	(*L).linenumber = (NI)(TMP4257);
	nimln(136, "lexbase.nim");
	result = fillbaselexer_248827(L, pos);
	popFrame();
	return result;
}

N_NIMCALL(void, skiputf8bom_249416)(Baselexer248024* L) {
	nimfr("skipUtf8Bom", "lexbase.nim")
	nimln(139, "lexbase.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NI TMP4258;
		NI TMP4259;
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
		TMP4258 = addInt((*L).bufpos, ((NI) 3));
		(*L).bufpos = (NI)(TMP4258);
		nimln(141, "lexbase.nim");
		TMP4259 = addInt((*L).linestart, ((NI) 3));
		(*L).linestart = (NI)(TMP4259);
	}
	LA7: ;
	popFrame();
}

N_NIMCALL(void, open_248040)(Baselexer248024* L, Streamobj138027* input, NI buflen) {
	NI TMP4262;
	void* LOC9;
	NI TMP4263;
	nimfr("open", "lexbase.nim")
	nimln(144, "lexbase.nim");
	{
		if (!!((((NI) 0) < buflen))) goto LA3;
		failedassertimpl_87017(((NimStringDesc*) &TMP4260));
	}
	LA3: ;
	nimln(145, "lexbase.nim");
	{
		if (!!(!((input == NIM_NIL)))) goto LA7;
		failedassertimpl_87017(((NimStringDesc*) &TMP4261));
	}
	LA7: ;
	nimln(146, "lexbase.nim");
	unsureAsgnRef((void**) (&(*L).input), input);
	nimln(147, "lexbase.nim");
	(*L).bufpos = ((NI) 0);
	nimln(148, "lexbase.nim");
	(*L).buflen = buflen;
	nimln(149, "lexbase.nim");
	TMP4262 = mulInt(buflen, ((NI) 1));
	LOC9 = 0;
	LOC9 = alloc_6001(((NI)chckRange((NI)(TMP4262), ((NI) 0), ((NI) 2147483647))));
	(*L).buf = ((NCSTRING) (LOC9));
	nimln(150, "lexbase.nim");
	TMP4263 = subInt(buflen, ((NI) 1));
	(*L).sentinel = (NI)(TMP4263);
	nimln(151, "lexbase.nim");
	(*L).linestart = ((NI) 0);
	nimln(152, "lexbase.nim");
	(*L).linenumber = ((NI) 1);
	nimln(153, "lexbase.nim");
	fillbuffer_248102(L);
	nimln(154, "lexbase.nim");
	skiputf8bom_249416(L);
	popFrame();
}

N_NIMCALL(NI, getcolnumber_248064)(Baselexer248024* L, NI pos) {
	NI result;
	NI TMP4264;
	nimfr("getColNumber", "lexbase.nim")
	result = 0;
	nimln(157, "lexbase.nim");
	TMP4264 = subInt(pos, (*L).linestart);
	if ((NI)(TMP4264) == (-2147483647 -1)) raiseOverflow();
	result = ((NI)(TMP4264) > 0? ((NI)(TMP4264)) : -((NI)(TMP4264)));
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, getcurrentline_248057)(Baselexer248024* L, NIM_BOOL marker) {
	NimStringDesc* result;
	NI i;
	nimfr("getCurrentLine", "lexbase.nim")
	result = 0;
	i = 0;
	nimln(161, "lexbase.nim");
	result = copyString(((NimStringDesc*) &TMP4265));
	nimln(162, "lexbase.nim");
	i = (*L).linestart;
	{
		nimln(163, "lexbase.nim");
		while (1) {
			NI TMP4266;
			if (!!((((NU8)((*L).buf[i])) == ((NU8)(13)) || ((NU8)((*L).buf[i])) == ((NU8)(10)) || ((NU8)((*L).buf[i])) == ((NU8)(0))))) goto LA2;
			nimln(164, "lexbase.nim");
			result = addChar(result, (*L).buf[i]);
			nimln(165, "lexbase.nim");
			TMP4266 = addInt(i, ((NI) 1));
			i = (NI)(TMP4266);
		} LA2: ;
	}
	nimln(166, "lexbase.nim");
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP4267));
	nimln(167, "lexbase.nim");
	{
		NimStringDesc* LOC7;
		NI LOC8;
		NimStringDesc* LOC9;
		if (!marker) goto LA5;
		nimln(168, "lexbase.nim");
		LOC7 = 0;
		LOC8 = 0;
		LOC8 = getcolnumber_248064(L, (*L).bufpos);
		LOC9 = 0;
		LOC9 = nsuRepeatChar(32, ((NI)chckRange(LOC8, ((NI) 0), ((NI) 2147483647))));
		LOC7 = rawNewString(LOC9->Sup.len + 2);
appendString(LOC7, LOC9);
appendString(LOC7, ((NimStringDesc*) &TMP4268));
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
static TNimNode* TMP4273[8];
static TNimNode TMP4227[9];
NTI248024.size = sizeof(Baselexer248024);
NTI248024.kind = 17;
NTI248024.base = (&NTI3411);
TMP4273[0] = &TMP4227[1];
TMP4227[1].kind = 1;
TMP4227[1].offset = offsetof(Baselexer248024, bufpos);
TMP4227[1].typ = (&NTI108);
TMP4227[1].name = "bufpos";
TMP4273[1] = &TMP4227[2];
TMP4227[2].kind = 1;
TMP4227[2].offset = offsetof(Baselexer248024, buf);
TMP4227[2].typ = (&NTI151);
TMP4227[2].name = "buf";
TMP4273[2] = &TMP4227[3];
TMP4227[3].kind = 1;
TMP4227[3].offset = offsetof(Baselexer248024, buflen);
TMP4227[3].typ = (&NTI108);
TMP4227[3].name = "bufLen";
TMP4273[3] = &TMP4227[4];
TMP4227[4].kind = 1;
TMP4227[4].offset = offsetof(Baselexer248024, input);
TMP4227[4].typ = (&NTI138025);
TMP4227[4].name = "input";
TMP4273[4] = &TMP4227[5];
TMP4227[5].kind = 1;
TMP4227[5].offset = offsetof(Baselexer248024, linenumber);
TMP4227[5].typ = (&NTI108);
TMP4227[5].name = "lineNumber";
TMP4273[5] = &TMP4227[6];
TMP4227[6].kind = 1;
TMP4227[6].offset = offsetof(Baselexer248024, sentinel);
TMP4227[6].typ = (&NTI108);
TMP4227[6].name = "sentinel";
TMP4273[6] = &TMP4227[7];
TMP4227[7].kind = 1;
TMP4227[7].offset = offsetof(Baselexer248024, linestart);
TMP4227[7].typ = (&NTI108);
TMP4227[7].name = "lineStart";
TMP4273[7] = &TMP4227[8];
TMP4227[8].kind = 1;
TMP4227[8].offset = offsetof(Baselexer248024, fileopened);
TMP4227[8].typ = (&NTI138);
TMP4227[8].name = "fileOpened";
TMP4227[0].len = 8; TMP4227[0].kind = 2; TMP4227[0].sons = &TMP4273[0];
NTI248024.node = &TMP4227[0];
}

