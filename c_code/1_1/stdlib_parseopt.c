/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Optparser177011 Optparser177011;
typedef struct TNimObject TNimObject;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Optparser177011  {
  TNimObject Sup;
NimStringDesc* cmd;
NI pos;
NIM_BOOL inshortstate;
NU8 kind;
NimStringDesc* key;
NimStringDesc* val;
};
typedef NU8 TY77659[32];
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(void, initoptparser_177030)(NimStringDesc* cmdline, Optparser177011* Result);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NI, nosparamCount)(void);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, quoteifcontainswhite_101340)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, nosparamStr)(NI i);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NI, parseword_177204)(NimStringDesc* s, NI i, NimStringDesc** w, TY77659 delim);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, handleshortoption_177291)(Optparser177011* p);
N_NIMCALL(void, nponext)(Optparser177011* p);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NimStringDesc*, npocmdLineRest)(Optparser177011* p);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76643, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(NI, subInt)(NI a, NI b);
STRING_LITERAL(TMP1799, "", 0);
STRING_LITERAL(TMP1816, "", 0);
static NIM_CONST TY77659 TMP1825 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST TY77659 TMP1829 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
extern TFrame* frameptr_17042;
extern TNimType NTI3411; /* RootObj */
TNimType NTI177011; /* OptParser */
extern TNimType NTI149; /* string */
extern TNimType NTI108; /* int */
extern TNimType NTI138; /* bool */
TNimType NTI177009; /* CmdLineKind */

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
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

N_NIMCALL(void, initoptparser_177030)(NimStringDesc* cmdline, Optparser177011* Result) {
	nimfr("initOptParser", "parseopt.nim")
	nimln(52, "parseopt.nim");
	(*Result).pos = ((NI) 0);
	nimln(53, "parseopt.nim");
	(*Result).inshortstate = NIM_FALSE;
	nimln(54, "parseopt.nim");
	{
		if (!!(((cmdline) && (cmdline)->Sup.len == 0))) goto LA3;
		nimln(55, "parseopt.nim");
		unsureAsgnRef((void**) (&(*Result).cmd), copyString(cmdline));
	}
	goto LA1;
	LA3: ;
	{
		nimln(57, "parseopt.nim");
		unsureAsgnRef((void**) (&(*Result).cmd), copyString(((NimStringDesc*) &TMP1799)));
		{
			NI i_177046;
			NI HEX3Atmp_177049;
			NI res_177052;
			i_177046 = 0;
			HEX3Atmp_177049 = 0;
			nimln(58, "parseopt.nim");
			HEX3Atmp_177049 = nosparamCount();
			nimln(1598, "system.nim");
			res_177052 = ((NI) 1);
			{
				nimln(1599, "system.nim");
				while (1) {
					NimStringDesc* LOC9;
					NimStringDesc* LOC10;
					NimStringDesc* LOC11;
					NI TMP1815;
					if (!(res_177052 <= HEX3Atmp_177049)) goto LA8;
					nimln(1600, "system.nim");
					i_177046 = res_177052;
					nimln(59, "parseopt.nim");
					LOC9 = 0;
					LOC10 = 0;
					LOC10 = nosparamStr(i_177046);
					LOC11 = 0;
					LOC11 = quoteifcontainswhite_101340(LOC10);
					LOC9 = rawNewString((*Result).cmd->Sup.len + LOC11->Sup.len + 1);
appendString(LOC9, (*Result).cmd);
appendString(LOC9, LOC11);
appendChar(LOC9, 32);
					unsureAsgnRef((void**) (&(*Result).cmd), LOC9);
					nimln(1614, "system.nim");
					TMP1815 = addInt(res_177052, ((NI) 1));
					res_177052 = (NI)(TMP1815);
				} LA8: ;
			}
		}
	}
	LA1: ;
	nimln(60, "parseopt.nim");
	(*Result).kind = ((NU8) 0);
	nimln(61, "parseopt.nim");
	unsureAsgnRef((void**) (&(*Result).key), copyString(((NimStringDesc*) &TMP1816)));
	nimln(62, "parseopt.nim");
	unsureAsgnRef((void**) (&(*Result).val), copyString(((NimStringDesc*) &TMP1816)));
	popFrame();
}

N_NIMCALL(NI, parseword_177204)(NimStringDesc* s, NI i, NimStringDesc** w, TY77659 delim) {
	NI result;
	nimfr("parseWord", "parseopt.nim")
	result = 0;
	nimln(66, "parseopt.nim");
	result = i;
	nimln(67, "parseopt.nim");
	{
		NI TMP1817;
		if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
		if (!((NU8)(s->data[result]) == (NU8)(34))) goto LA3;
		nimln(68, "parseopt.nim");
		TMP1817 = addInt(result, ((NI) 1));
		result = (NI)(TMP1817);
		{
			nimln(69, "parseopt.nim");
			while (1) {
				NI TMP1818;
				if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
				if (!!((((NU8)(s->data[result])) == ((NU8)(0)) || ((NU8)(s->data[result])) == ((NU8)(34))))) goto LA6;
				nimln(70, "parseopt.nim");
				if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
				(*w) = addChar((*w), s->data[result]);
				nimln(71, "parseopt.nim");
				TMP1818 = addInt(result, ((NI) 1));
				result = (NI)(TMP1818);
			} LA6: ;
		}
		nimln(72, "parseopt.nim");
		{
			NI TMP1819;
			if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
			if (!((NU8)(s->data[result]) == (NU8)(34))) goto LA9;
			TMP1819 = addInt(result, ((NI) 1));
			result = (NI)(TMP1819);
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		{
			nimln(74, "parseopt.nim");
			while (1) {
				NI TMP1820;
				if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
				if (!!(((delim[((NU8)(s->data[result]))/8] &(1<<(((NU8)(s->data[result]))%8)))!=0))) goto LA13;
				nimln(75, "parseopt.nim");
				if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
				(*w) = addChar((*w), s->data[result]);
				nimln(76, "parseopt.nim");
				TMP1820 = addInt(result, ((NI) 1));
				result = (NI)(TMP1820);
			} LA13: ;
		}
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, handleshortoption_177291)(Optparser177011* p) {
	NI i;
	NI TMP1821;
	nimfr("handleShortOption", "parseopt.nim")
	nimln(79, "parseopt.nim");
	i = (*p).pos;
	nimln(80, "parseopt.nim");
	(*p).kind = ((NU8) 3);
	nimln(81, "parseopt.nim");
	if ((NU)(i) > (NU)((*p).cmd->Sup.len)) raiseIndexError();
	(*p).key = addChar((*p).key, (*p).cmd->data[i]);
	nimln(82, "parseopt.nim");
	TMP1821 = addInt(i, ((NI) 1));
	i = (NI)(TMP1821);
	nimln(83, "parseopt.nim");
	(*p).inshortstate = NIM_TRUE;
	{
		nimln(84, "parseopt.nim");
		while (1) {
			NI TMP1822;
			if ((NU)(i) > (NU)((*p).cmd->Sup.len)) raiseIndexError();
			if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(32)))) goto LA2;
			nimln(85, "parseopt.nim");
			TMP1822 = addInt(i, ((NI) 1));
			i = (NI)(TMP1822);
			nimln(86, "parseopt.nim");
			(*p).inshortstate = NIM_FALSE;
		} LA2: ;
	}
	nimln(87, "parseopt.nim");
	{
		NI TMP1823;
		if ((NU)(i) > (NU)((*p).cmd->Sup.len)) raiseIndexError();
		if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(58)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(61)))) goto LA5;
		nimln(88, "parseopt.nim");
		TMP1823 = addInt(i, ((NI) 1));
		i = (NI)(TMP1823);
		nimln(89, "parseopt.nim");
		(*p).inshortstate = NIM_FALSE;
		{
			nimln(90, "parseopt.nim");
			while (1) {
				NI TMP1824;
				if ((NU)(i) > (NU)((*p).cmd->Sup.len)) raiseIndexError();
				if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(32)))) goto LA8;
				TMP1824 = addInt(i, ((NI) 1));
				i = (NI)(TMP1824);
			} LA8: ;
		}
		nimln(91, "parseopt.nim");
		i = parseword_177204((*p).cmd, i, (&(*p).val), TMP1825);
	}
	LA5: ;
	nimln(92, "parseopt.nim");
	{
		if ((NU)(i) > (NU)((*p).cmd->Sup.len)) raiseIndexError();
		if (!((NU8)((*p).cmd->data[i]) == (NU8)(0))) goto LA11;
		(*p).inshortstate = NIM_FALSE;
	}
	LA11: ;
	nimln(93, "parseopt.nim");
	(*p).pos = i;
	popFrame();
}

N_NIMCALL(void, nponext)(Optparser177011* p) {
	NI i;
	nimfr("next", "parseopt.nim")
{	nimln(98, "parseopt.nim");
	i = (*p).pos;
	{
		nimln(99, "parseopt.nim");
		while (1) {
			NI TMP1826;
			if ((NU)(i) > (NU)((*p).cmd->Sup.len)) raiseIndexError();
			if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(32)))) goto LA2;
			TMP1826 = addInt(i, ((NI) 1));
			i = (NI)(TMP1826);
		} LA2: ;
	}
	nimln(100, "parseopt.nim");
	(*p).pos = i;
	nimln(101, "parseopt.nim");
	(*p).key = setLengthStr((*p).key, ((NI) 0));
	nimln(102, "parseopt.nim");
	(*p).val = setLengthStr((*p).val, ((NI) 0));
	nimln(103, "parseopt.nim");
	{
		if (!(*p).inshortstate) goto LA5;
		nimln(104, "parseopt.nim");
		handleshortoption_177291(p);
		nimln(105, "parseopt.nim");
		goto BeforeRet;
	}
	LA5: ;
	nimln(106, "parseopt.nim");
	if ((NU)(i) > (NU)((*p).cmd->Sup.len)) raiseIndexError();
	switch (((NU8)((*p).cmd->data[i]))) {
	case 0:
	{
		nimln(108, "parseopt.nim");
		(*p).kind = ((NU8) 0);
	}
	break;
	case 45:
	{
		NI TMP1827;
		nimln(110, "parseopt.nim");
		TMP1827 = addInt(i, ((NI) 1));
		i = (NI)(TMP1827);
		nimln(111, "parseopt.nim");
		{
			NI TMP1828;
			if ((NU)(i) > (NU)((*p).cmd->Sup.len)) raiseIndexError();
			if (!((NU8)((*p).cmd->data[i]) == (NU8)(45))) goto LA11;
			nimln(112, "parseopt.nim");
			(*p).kind = ((NU8) 2);
			nimln(113, "parseopt.nim");
			TMP1828 = addInt(i, ((NI) 1));
			i = (NI)(TMP1828);
			nimln(114, "parseopt.nim");
			i = parseword_177204((*p).cmd, i, (&(*p).key), TMP1829);
			{
				nimln(115, "parseopt.nim");
				while (1) {
					NI TMP1830;
					if ((NU)(i) > (NU)((*p).cmd->Sup.len)) raiseIndexError();
					if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(32)))) goto LA14;
					TMP1830 = addInt(i, ((NI) 1));
					i = (NI)(TMP1830);
				} LA14: ;
			}
			nimln(116, "parseopt.nim");
			{
				NI TMP1831;
				if ((NU)(i) > (NU)((*p).cmd->Sup.len)) raiseIndexError();
				if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(58)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(61)))) goto LA17;
				nimln(117, "parseopt.nim");
				TMP1831 = addInt(i, ((NI) 1));
				i = (NI)(TMP1831);
				{
					nimln(118, "parseopt.nim");
					while (1) {
						NI TMP1832;
						if ((NU)(i) > (NU)((*p).cmd->Sup.len)) raiseIndexError();
						if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(32)))) goto LA20;
						TMP1832 = addInt(i, ((NI) 1));
						i = (NI)(TMP1832);
					} LA20: ;
				}
				nimln(119, "parseopt.nim");
				(*p).pos = parseword_177204((*p).cmd, i, (&(*p).val), TMP1825);
			}
			goto LA15;
			LA17: ;
			{
				nimln(121, "parseopt.nim");
				(*p).pos = i;
			}
			LA15: ;
		}
		goto LA9;
		LA11: ;
		{
			nimln(123, "parseopt.nim");
			(*p).pos = i;
			nimln(124, "parseopt.nim");
			handleshortoption_177291(p);
		}
		LA9: ;
	}
	break;
	default:
	{
		nimln(126, "parseopt.nim");
		(*p).kind = ((NU8) 1);
		nimln(127, "parseopt.nim");
		(*p).pos = parseword_177204((*p).cmd, i, (&(*p).key), TMP1825);
	}
	break;
	}
	}BeforeRet: ;
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

N_NIMCALL(NimStringDesc*, npocmdLineRest)(Optparser177011* p) {
	NimStringDesc* result;
	NI TMP1836;
	NimStringDesc* LOC1;
	nimfr("cmdLineRest", "parseopt.nim")
	result = 0;
	nimln(131, "parseopt.nim");
	TMP1836 = subInt(((*p).cmd ? (*p).cmd->Sup.len : 0), ((NI) 1));
	LOC1 = 0;
	LOC1 = copyStrLast((*p).cmd, (*p).pos, (NI)(TMP1836));
	result = nsuStrip(LOC1, NIM_TRUE, NIM_TRUE);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_parseoptInit)(void) {
	nimfr("parseopt", "parseopt.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_parseoptDatInit)(void) {
static TNimNode* TMP10614[6];
static TNimNode* TMP10615[4];
NI TMP10617;
static char* NIM_CONST TMP10616[4] = {
"cmdEnd", 
"cmdArgument", 
"cmdLongOption", 
"cmdShortOption"};
static TNimNode TMP1797[12];
NTI177011.size = sizeof(Optparser177011);
NTI177011.kind = 17;
NTI177011.base = (&NTI3411);
TMP10614[0] = &TMP1797[1];
TMP1797[1].kind = 1;
TMP1797[1].offset = offsetof(Optparser177011, cmd);
TMP1797[1].typ = (&NTI149);
TMP1797[1].name = "cmd";
TMP10614[1] = &TMP1797[2];
TMP1797[2].kind = 1;
TMP1797[2].offset = offsetof(Optparser177011, pos);
TMP1797[2].typ = (&NTI108);
TMP1797[2].name = "pos";
TMP10614[2] = &TMP1797[3];
TMP1797[3].kind = 1;
TMP1797[3].offset = offsetof(Optparser177011, inshortstate);
TMP1797[3].typ = (&NTI138);
TMP1797[3].name = "inShortState";
TMP10614[3] = &TMP1797[4];
NTI177009.size = sizeof(NU8);
NTI177009.kind = 14;
NTI177009.base = 0;
NTI177009.flags = 3;
for (TMP10617 = 0; TMP10617 < 4; TMP10617++) {
TMP1797[TMP10617+5].kind = 1;
TMP1797[TMP10617+5].offset = TMP10617;
TMP1797[TMP10617+5].name = TMP10616[TMP10617];
TMP10615[TMP10617] = &TMP1797[TMP10617+5];
}
TMP1797[9].len = 4; TMP1797[9].kind = 2; TMP1797[9].sons = &TMP10615[0];
NTI177009.node = &TMP1797[9];
TMP1797[4].kind = 1;
TMP1797[4].offset = offsetof(Optparser177011, kind);
TMP1797[4].typ = (&NTI177009);
TMP1797[4].name = "kind";
TMP10614[4] = &TMP1797[10];
TMP1797[10].kind = 1;
TMP1797[10].offset = offsetof(Optparser177011, key);
TMP1797[10].typ = (&NTI149);
TMP1797[10].name = "key";
TMP10614[5] = &TMP1797[11];
TMP1797[11].kind = 1;
TMP1797[11].offset = offsetof(Optparser177011, val);
TMP1797[11].typ = (&NTI149);
TMP1797[11].name = "val";
TMP1797[0].len = 6; TMP1797[0].kind = 2; TMP1797[0].sons = &TMP10614[0];
NTI177011.node = &TMP1797[0];
}

