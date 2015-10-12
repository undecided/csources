/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Optparser175011 Optparser175011;
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
struct  Optparser175011  {
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
N_NIMCALL(void, initoptparser_175030)(NimStringDesc* cmdline, Optparser175011* Result);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NI, paramcount_125830)(void);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, quoteifcontainswhite_99340)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, paramstr_125809)(NI i);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NI, parseword_175204)(NimStringDesc* s, NI i, NimStringDesc** w, TY77659 delim);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, handleshortoption_175291)(Optparser175011* p);
N_NIMCALL(void, nponext)(Optparser175011* p);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NimStringDesc*, npocmdLineRest)(Optparser175011* p);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76643, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(NI, subInt)(NI a, NI b);
STRING_LITERAL(TMP1829, "", 0);
STRING_LITERAL(TMP1833, "", 0);
static NIM_CONST TY77659 TMP1842 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST TY77659 TMP1846 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
extern TFrame* frameptr_17042;
extern TNimType NTI3411; /* RootObj */
TNimType NTI175011; /* OptParser */
extern TNimType NTI149; /* string */
extern TNimType NTI108; /* int */
extern TNimType NTI138; /* bool */
TNimType NTI175009; /* CmdLineKind */

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

N_NIMCALL(void, initoptparser_175030)(NimStringDesc* cmdline, Optparser175011* Result) {
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
		unsureAsgnRef((void**) (&(*Result).cmd), copyString(((NimStringDesc*) &TMP1829)));
		{
			NI i_175046;
			NI HEX3Atmp_175049;
			NI res_175052;
			i_175046 = 0;
			HEX3Atmp_175049 = 0;
			nimln(58, "parseopt.nim");
			HEX3Atmp_175049 = paramcount_125830();
			nimln(1598, "system.nim");
			res_175052 = ((NI) 1);
			{
				nimln(1599, "system.nim");
				while (1) {
					NimStringDesc* LOC9;
					NimStringDesc* LOC10;
					NimStringDesc* LOC11;
					NI TMP1832;
					if (!(res_175052 <= HEX3Atmp_175049)) goto LA8;
					nimln(1600, "system.nim");
					i_175046 = res_175052;
					nimln(59, "parseopt.nim");
					LOC9 = 0;
					LOC10 = 0;
					LOC10 = paramstr_125809(i_175046);
					LOC11 = 0;
					LOC11 = quoteifcontainswhite_99340(LOC10);
					LOC9 = rawNewString((*Result).cmd->Sup.len + LOC11->Sup.len + 1);
appendString(LOC9, (*Result).cmd);
appendString(LOC9, LOC11);
appendChar(LOC9, 32);
					unsureAsgnRef((void**) (&(*Result).cmd), LOC9);
					nimln(1614, "system.nim");
					TMP1832 = addInt(res_175052, ((NI) 1));
					res_175052 = (NI)(TMP1832);
				} LA8: ;
			}
		}
	}
	LA1: ;
	nimln(60, "parseopt.nim");
	(*Result).kind = ((NU8) 0);
	nimln(61, "parseopt.nim");
	unsureAsgnRef((void**) (&(*Result).key), copyString(((NimStringDesc*) &TMP1833)));
	nimln(62, "parseopt.nim");
	unsureAsgnRef((void**) (&(*Result).val), copyString(((NimStringDesc*) &TMP1833)));
	popFrame();
}

N_NIMCALL(NI, parseword_175204)(NimStringDesc* s, NI i, NimStringDesc** w, TY77659 delim) {
	NI result;
	nimfr("parseWord", "parseopt.nim")
	result = 0;
	nimln(66, "parseopt.nim");
	result = i;
	nimln(67, "parseopt.nim");
	{
		NI TMP1834;
		if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
		if (!((NU8)(s->data[result]) == (NU8)(34))) goto LA3;
		nimln(68, "parseopt.nim");
		TMP1834 = addInt(result, ((NI) 1));
		result = (NI)(TMP1834);
		{
			nimln(69, "parseopt.nim");
			while (1) {
				NI TMP1835;
				if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
				if (!!((((NU8)(s->data[result])) == ((NU8)(0)) || ((NU8)(s->data[result])) == ((NU8)(34))))) goto LA6;
				nimln(70, "parseopt.nim");
				if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
				(*w) = addChar((*w), s->data[result]);
				nimln(71, "parseopt.nim");
				TMP1835 = addInt(result, ((NI) 1));
				result = (NI)(TMP1835);
			} LA6: ;
		}
		nimln(72, "parseopt.nim");
		{
			NI TMP1836;
			if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
			if (!((NU8)(s->data[result]) == (NU8)(34))) goto LA9;
			TMP1836 = addInt(result, ((NI) 1));
			result = (NI)(TMP1836);
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		{
			nimln(74, "parseopt.nim");
			while (1) {
				NI TMP1837;
				if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
				if (!!(((delim[((NU8)(s->data[result]))/8] &(1<<(((NU8)(s->data[result]))%8)))!=0))) goto LA13;
				nimln(75, "parseopt.nim");
				if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
				(*w) = addChar((*w), s->data[result]);
				nimln(76, "parseopt.nim");
				TMP1837 = addInt(result, ((NI) 1));
				result = (NI)(TMP1837);
			} LA13: ;
		}
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, handleshortoption_175291)(Optparser175011* p) {
	NI i;
	NI TMP1838;
	nimfr("handleShortOption", "parseopt.nim")
	nimln(79, "parseopt.nim");
	i = (*p).pos;
	nimln(80, "parseopt.nim");
	(*p).kind = ((NU8) 3);
	nimln(81, "parseopt.nim");
	if ((NU)(i) > (NU)((*p).cmd->Sup.len)) raiseIndexError();
	(*p).key = addChar((*p).key, (*p).cmd->data[i]);
	nimln(82, "parseopt.nim");
	TMP1838 = addInt(i, ((NI) 1));
	i = (NI)(TMP1838);
	nimln(83, "parseopt.nim");
	(*p).inshortstate = NIM_TRUE;
	{
		nimln(84, "parseopt.nim");
		while (1) {
			NI TMP1839;
			if ((NU)(i) > (NU)((*p).cmd->Sup.len)) raiseIndexError();
			if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(32)))) goto LA2;
			nimln(85, "parseopt.nim");
			TMP1839 = addInt(i, ((NI) 1));
			i = (NI)(TMP1839);
			nimln(86, "parseopt.nim");
			(*p).inshortstate = NIM_FALSE;
		} LA2: ;
	}
	nimln(87, "parseopt.nim");
	{
		NI TMP1840;
		if ((NU)(i) > (NU)((*p).cmd->Sup.len)) raiseIndexError();
		if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(58)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(61)))) goto LA5;
		nimln(88, "parseopt.nim");
		TMP1840 = addInt(i, ((NI) 1));
		i = (NI)(TMP1840);
		nimln(89, "parseopt.nim");
		(*p).inshortstate = NIM_FALSE;
		{
			nimln(90, "parseopt.nim");
			while (1) {
				NI TMP1841;
				if ((NU)(i) > (NU)((*p).cmd->Sup.len)) raiseIndexError();
				if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(32)))) goto LA8;
				TMP1841 = addInt(i, ((NI) 1));
				i = (NI)(TMP1841);
			} LA8: ;
		}
		nimln(91, "parseopt.nim");
		i = parseword_175204((*p).cmd, i, (&(*p).val), TMP1842);
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

N_NIMCALL(void, nponext)(Optparser175011* p) {
	NI i;
	nimfr("next", "parseopt.nim")
{	nimln(98, "parseopt.nim");
	i = (*p).pos;
	{
		nimln(99, "parseopt.nim");
		while (1) {
			NI TMP1843;
			if ((NU)(i) > (NU)((*p).cmd->Sup.len)) raiseIndexError();
			if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(32)))) goto LA2;
			TMP1843 = addInt(i, ((NI) 1));
			i = (NI)(TMP1843);
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
		handleshortoption_175291(p);
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
		NI TMP1844;
		nimln(110, "parseopt.nim");
		TMP1844 = addInt(i, ((NI) 1));
		i = (NI)(TMP1844);
		nimln(111, "parseopt.nim");
		{
			NI TMP1845;
			if ((NU)(i) > (NU)((*p).cmd->Sup.len)) raiseIndexError();
			if (!((NU8)((*p).cmd->data[i]) == (NU8)(45))) goto LA11;
			nimln(112, "parseopt.nim");
			(*p).kind = ((NU8) 2);
			nimln(113, "parseopt.nim");
			TMP1845 = addInt(i, ((NI) 1));
			i = (NI)(TMP1845);
			nimln(114, "parseopt.nim");
			i = parseword_175204((*p).cmd, i, (&(*p).key), TMP1846);
			{
				nimln(115, "parseopt.nim");
				while (1) {
					NI TMP1847;
					if ((NU)(i) > (NU)((*p).cmd->Sup.len)) raiseIndexError();
					if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(32)))) goto LA14;
					TMP1847 = addInt(i, ((NI) 1));
					i = (NI)(TMP1847);
				} LA14: ;
			}
			nimln(116, "parseopt.nim");
			{
				NI TMP1848;
				if ((NU)(i) > (NU)((*p).cmd->Sup.len)) raiseIndexError();
				if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(58)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(61)))) goto LA17;
				nimln(117, "parseopt.nim");
				TMP1848 = addInt(i, ((NI) 1));
				i = (NI)(TMP1848);
				{
					nimln(118, "parseopt.nim");
					while (1) {
						NI TMP1849;
						if ((NU)(i) > (NU)((*p).cmd->Sup.len)) raiseIndexError();
						if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(32)))) goto LA20;
						TMP1849 = addInt(i, ((NI) 1));
						i = (NI)(TMP1849);
					} LA20: ;
				}
				nimln(119, "parseopt.nim");
				(*p).pos = parseword_175204((*p).cmd, i, (&(*p).val), TMP1842);
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
			handleshortoption_175291(p);
		}
		LA9: ;
	}
	break;
	default:
	{
		nimln(126, "parseopt.nim");
		(*p).kind = ((NU8) 1);
		nimln(127, "parseopt.nim");
		(*p).pos = parseword_175204((*p).cmd, i, (&(*p).key), TMP1842);
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

N_NIMCALL(NimStringDesc*, npocmdLineRest)(Optparser175011* p) {
	NimStringDesc* result;
	NI TMP1853;
	NimStringDesc* LOC1;
	nimfr("cmdLineRest", "parseopt.nim")
	result = 0;
	nimln(131, "parseopt.nim");
	TMP1853 = subInt(((*p).cmd ? (*p).cmd->Sup.len : 0), ((NI) 1));
	LOC1 = 0;
	LOC1 = copyStrLast((*p).cmd, (*p).pos, (NI)(TMP1853));
	result = nsuStrip(LOC1, NIM_TRUE, NIM_TRUE);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_parseoptInit)(void) {
	nimfr("parseopt", "parseopt.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_parseoptDatInit)(void) {
static TNimNode* TMP10619[6];
static TNimNode* TMP10620[4];
NI TMP10622;
static char* NIM_CONST TMP10621[4] = {
"cmdEnd", 
"cmdArgument", 
"cmdLongOption", 
"cmdShortOption"};
static TNimNode TMP1827[12];
NTI175011.size = sizeof(Optparser175011);
NTI175011.kind = 17;
NTI175011.base = (&NTI3411);
TMP10619[0] = &TMP1827[1];
TMP1827[1].kind = 1;
TMP1827[1].offset = offsetof(Optparser175011, cmd);
TMP1827[1].typ = (&NTI149);
TMP1827[1].name = "cmd";
TMP10619[1] = &TMP1827[2];
TMP1827[2].kind = 1;
TMP1827[2].offset = offsetof(Optparser175011, pos);
TMP1827[2].typ = (&NTI108);
TMP1827[2].name = "pos";
TMP10619[2] = &TMP1827[3];
TMP1827[3].kind = 1;
TMP1827[3].offset = offsetof(Optparser175011, inshortstate);
TMP1827[3].typ = (&NTI138);
TMP1827[3].name = "inShortState";
TMP10619[3] = &TMP1827[4];
NTI175009.size = sizeof(NU8);
NTI175009.kind = 14;
NTI175009.base = 0;
NTI175009.flags = 3;
for (TMP10622 = 0; TMP10622 < 4; TMP10622++) {
TMP1827[TMP10622+5].kind = 1;
TMP1827[TMP10622+5].offset = TMP10622;
TMP1827[TMP10622+5].name = TMP10621[TMP10622];
TMP10620[TMP10622] = &TMP1827[TMP10622+5];
}
TMP1827[9].len = 4; TMP1827[9].kind = 2; TMP1827[9].sons = &TMP10620[0];
NTI175009.node = &TMP1827[9];
TMP1827[4].kind = 1;
TMP1827[4].offset = offsetof(Optparser175011, kind);
TMP1827[4].typ = (&NTI175009);
TMP1827[4].name = "kind";
TMP10619[4] = &TMP1827[10];
TMP1827[10].kind = 1;
TMP1827[10].offset = offsetof(Optparser175011, key);
TMP1827[10].typ = (&NTI149);
TMP1827[10].name = "key";
TMP10619[5] = &TMP1827[11];
TMP1827[11].kind = 1;
TMP1827[11].offset = offsetof(Optparser175011, val);
TMP1827[11].typ = (&NTI149);
TMP1827[11].name = "val";
TMP1827[0].len = 6; TMP1827[0].kind = 2; TMP1827[0].sons = &TMP10619[0];
NTI175011.node = &TMP1827[0];
}

