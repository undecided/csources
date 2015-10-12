/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Stringtableobj134012 Stringtableobj134012;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Timeinfo103408 Timeinfo103408;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Keyvaluepairseq134010 Keyvaluepairseq134010;
typedef struct TY103553 TY103553;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Stringtableobj134012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq134010* data;
NU8 mode;
};
struct  Timeinfo103408  {
  TNimObject Sup;
NI second;
NI minute;
NI hour;
NI monthday;
NU8 month;
NI year;
NU8 weekday;
NI yearday;
NIM_BOOL isdst;
NimStringDesc* tzname;
NI timezone;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY103553 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct Keyvaluepairseq134010 {
  TGenericSeq Sup;
  TY103553 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Stringtableobj134012*, parsecookies_335020)(NimStringDesc* s);
N_NIMCALL(Stringtableobj134012*, nstnewStringTable)(NU8 mode);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(void, nstPut)(Stringtableobj134012* t, NimStringDesc* key, NimStringDesc* val);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76643, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NimStringDesc*, setcookie_335107)(NimStringDesc* key, NimStringDesc* value, NimStringDesc* domain, NimStringDesc* path, NimStringDesc* expires, NIM_BOOL noname, NIM_BOOL secure, NIM_BOOL httponly);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, setcookie_335124)(NimStringDesc* key, NimStringDesc* value, Timeinfo103408* expires, NimStringDesc* domain, NimStringDesc* path, NIM_BOOL noname, NIM_BOOL secure, NIM_BOOL httponly);
N_NIMCALL(NimStringDesc*, format_105392)(Timeinfo103408* info, NimStringDesc* f);
STRING_LITERAL(TMP6509, "", 0);
STRING_LITERAL(TMP6510, "Set-Cookie: ", 12);
STRING_LITERAL(TMP6511, "=", 1);
STRING_LITERAL(TMP6512, "; Domain=", 9);
STRING_LITERAL(TMP6513, "; Path=", 7);
STRING_LITERAL(TMP6514, "; Expires=", 10);
STRING_LITERAL(TMP6515, "; secure", 8);
STRING_LITERAL(TMP6516, "; HttpOnly", 10);
STRING_LITERAL(TMP6517, "ddd\',\' dd MMM yyyy HH:mm:ss \'UTC\'", 33);
extern TFrame* frameptr_17042;

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

N_NIMCALL(Stringtableobj134012*, parsecookies_335020)(NimStringDesc* s) {
	Stringtableobj134012* result;
	NI i;
	nimfr("parseCookies", "cookies.nim")
	result = 0;
	nimln(16, "cookies.nim");
	result = nstnewStringTable(((NU8) 1));
	nimln(17, "cookies.nim");
	i = ((NI) 0);
	{
		nimln(18, "cookies.nim");
		while (1) {
			NI keystart;
			NI keyend;
			NI TMP6504;
			NI TMP6505;
			NI valstart;
			NimStringDesc* LOC19;
			NI TMP6507;
			NimStringDesc* LOC20;
			NI TMP6508;
			{
				nimln(19, "cookies.nim");
				while (1) {
					NIM_BOOL LOC5;
					NI TMP6502;
					LOC5 = 0;
					if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
					LOC5 = ((NU8)(s->data[i]) == (NU8)(32));
					if (LOC5) goto LA6;
					if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
					LOC5 = ((NU8)(s->data[i]) == (NU8)(9));
					LA6: ;
					if (!LOC5) goto LA4;
					TMP6502 = addInt(i, ((NI) 1));
					i = (NI)(TMP6502);
				} LA4: ;
			}
			nimln(20, "cookies.nim");
			keystart = i;
			{
				nimln(21, "cookies.nim");
				while (1) {
					NIM_BOOL LOC9;
					NI TMP6503;
					LOC9 = 0;
					if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
					LOC9 = !(((NU8)(s->data[i]) == (NU8)(61)));
					if (!(LOC9)) goto LA10;
					if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
					LOC9 = !(((NU8)(s->data[i]) == (NU8)(0)));
					LA10: ;
					if (!LOC9) goto LA8;
					TMP6503 = addInt(i, ((NI) 1));
					i = (NI)(TMP6503);
				} LA8: ;
			}
			nimln(22, "cookies.nim");
			TMP6504 = subInt(i, ((NI) 1));
			keyend = (NI)(TMP6504);
			nimln(23, "cookies.nim");
			{
				if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
				if (!((NU8)(s->data[i]) == (NU8)(0))) goto LA13;
				goto LA1;
			}
			LA13: ;
			nimln(24, "cookies.nim");
			TMP6505 = addInt(i, ((NI) 1));
			i = (NI)(TMP6505);
			nimln(25, "cookies.nim");
			valstart = i;
			{
				nimln(26, "cookies.nim");
				while (1) {
					NIM_BOOL LOC17;
					NI TMP6506;
					LOC17 = 0;
					if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
					LOC17 = !(((NU8)(s->data[i]) == (NU8)(59)));
					if (!(LOC17)) goto LA18;
					if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
					LOC17 = !(((NU8)(s->data[i]) == (NU8)(0)));
					LA18: ;
					if (!LOC17) goto LA16;
					TMP6506 = addInt(i, ((NI) 1));
					i = (NI)(TMP6506);
				} LA16: ;
			}
			nimln(27, "cookies.nim");
			LOC19 = 0;
			LOC19 = copyStrLast(s, keystart, keyend);
			TMP6507 = subInt(i, ((NI) 1));
			LOC20 = 0;
			LOC20 = copyStrLast(s, valstart, (NI)(TMP6507));
			nstPut(result, LOC19, LOC20);
			nimln(28, "cookies.nim");
			{
				if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
				if (!((NU8)(s->data[i]) == (NU8)(0))) goto LA23;
				goto LA1;
			}
			LA23: ;
			nimln(29, "cookies.nim");
			TMP6508 = addInt(i, ((NI) 1));
			i = (NI)(TMP6508);
		}
	} LA1: ;
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, setcookie_335107)(NimStringDesc* key, NimStringDesc* value, NimStringDesc* domain, NimStringDesc* path, NimStringDesc* expires, NIM_BOOL noname, NIM_BOOL secure, NIM_BOOL httponly) {
	NimStringDesc* result;
	NimStringDesc* LOC5;
	nimfr("setCookie", "cookies.nim")
	result = 0;
	nimln(36, "cookies.nim");
	result = copyString(((NimStringDesc*) &TMP6509));
	nimln(37, "cookies.nim");
	{
		if (!!(noname)) goto LA3;
		result = resizeString(result, 12);
appendString(result, ((NimStringDesc*) &TMP6510));
	}
	LA3: ;
	nimln(38, "cookies.nim");
	LOC5 = 0;
	LOC5 = rawNewString(key->Sup.len + value->Sup.len + 1);
appendString(LOC5, key);
appendString(LOC5, ((NimStringDesc*) &TMP6511));
appendString(LOC5, value);
	result = resizeString(result, LOC5->Sup.len + 0);
appendString(result, LOC5);
	nimln(39, "cookies.nim");
	{
		NimStringDesc* LOC10;
		if (!!(((domain) && (domain)->Sup.len == 0))) goto LA8;
		LOC10 = 0;
		LOC10 = rawNewString(domain->Sup.len + 9);
appendString(LOC10, ((NimStringDesc*) &TMP6512));
appendString(LOC10, domain);
		result = resizeString(result, LOC10->Sup.len + 0);
appendString(result, LOC10);
	}
	LA8: ;
	nimln(40, "cookies.nim");
	{
		NimStringDesc* LOC15;
		if (!!(((path) && (path)->Sup.len == 0))) goto LA13;
		LOC15 = 0;
		LOC15 = rawNewString(path->Sup.len + 7);
appendString(LOC15, ((NimStringDesc*) &TMP6513));
appendString(LOC15, path);
		result = resizeString(result, LOC15->Sup.len + 0);
appendString(result, LOC15);
	}
	LA13: ;
	nimln(41, "cookies.nim");
	{
		NimStringDesc* LOC20;
		if (!!(((expires) && (expires)->Sup.len == 0))) goto LA18;
		LOC20 = 0;
		LOC20 = rawNewString(expires->Sup.len + 10);
appendString(LOC20, ((NimStringDesc*) &TMP6514));
appendString(LOC20, expires);
		result = resizeString(result, LOC20->Sup.len + 0);
appendString(result, LOC20);
	}
	LA18: ;
	nimln(42, "cookies.nim");
	{
		if (!secure) goto LA23;
		result = resizeString(result, 8);
appendString(result, ((NimStringDesc*) &TMP6515));
	}
	LA23: ;
	nimln(43, "cookies.nim");
	{
		if (!httponly) goto LA27;
		result = resizeString(result, 10);
appendString(result, ((NimStringDesc*) &TMP6516));
	}
	LA27: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, setcookie_335124)(NimStringDesc* key, NimStringDesc* value, Timeinfo103408* expires, NimStringDesc* domain, NimStringDesc* path, NIM_BOOL noname, NIM_BOOL secure, NIM_BOOL httponly) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	nimfr("setCookie", "cookies.nim")
{	result = 0;
	nimln(52, "cookies.nim");
	nimln(53, "cookies.nim");
	LOC1 = 0;
	LOC1 = format_105392(expires, ((NimStringDesc*) &TMP6517));
	result = setcookie_335107(key, value, domain, path, LOC1, noname, secure, httponly);
	goto BeforeRet;
	}BeforeRet: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_cookiesInit)(void) {
	nimfr("cookies", "cookies.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_cookiesDatInit)(void) {
}

