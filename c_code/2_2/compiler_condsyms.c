/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Stringtableobj134012 Stringtableobj134012;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tinfocpu160479 Tinfocpu160479;
typedef struct Tinfoos160049 Tinfoos160049;
typedef struct Tident168021 Tident168021;
typedef struct Tidobj168015 Tidobj168015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Keyvaluepairseq134010 Keyvaluepairseq134010;
typedef struct TY103553 TY103553;
typedef struct Tcell46747 Tcell46747;
typedef struct Tcellset46759 Tcellset46759;
typedef struct Tgcheap48616 Tgcheap48616;
typedef struct Tcellseq46763 Tcellseq46763;
typedef struct Tpagedesc46755 Tpagedesc46755;
typedef struct Tmemregion28610 Tmemregion28610;
typedef struct Tsmallchunk27840 Tsmallchunk27840;
typedef struct Tllchunk28604 Tllchunk28604;
typedef struct Tbigchunk27842 Tbigchunk27842;
typedef struct Tintset27817 Tintset27817;
typedef struct Ttrunk27813 Ttrunk27813;
typedef struct Tavlnode28608 Tavlnode28608;
typedef struct Tgcstat48614 Tgcstat48614;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct Tinfocpu160479 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef Tinfocpu160479 TY160497[14];
struct Tinfoos160049 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
NimStringDesc* Field3;
NimStringDesc* Field4;
NimStringDesc* Field5;
NimStringDesc* Field6;
NimStringDesc* Field7;
NimStringDesc* Field8;
NimStringDesc* Field9;
NimStringDesc* Field10;
NimStringDesc* Field11;
NU8 Field12;
};
typedef Tinfoos160049 TY160071[24];
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
struct  Tidobj168015  {
  TNimObject Sup;
NI id;
};
struct  Tident168021  {
  Tidobj168015 Sup;
NimStringDesc* s;
Tident168021* next;
NI h;
};
struct  Stringtableobj134012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq134010* data;
NU8 mode;
};
struct TY103553 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Tcell46747  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46763  {
NI len;
NI cap;
Tcell46747** d;
};
struct  Tcellset46759  {
NI counter;
NI max;
Tpagedesc46755* head;
Tpagedesc46755** data;
};
typedef Tsmallchunk27840* TY28622[512];
typedef Ttrunk27813* Ttrunkbuckets27815[256];
struct  Tintset27817  {
Ttrunkbuckets27815 data;
};
struct  Tmemregion28610  {
NI minlargeobj;
NI maxlargeobj;
TY28622 freesmallchunks;
Tllchunk28604* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27842* freechunkslist;
Tintset27817 chunkstarts;
Tavlnode28608* root;
Tavlnode28608* deleted;
Tavlnode28608* last;
Tavlnode28608* freeavlnodes;
};
struct  Tgcstat48614  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48616  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46763 zct;
Tcellseq46763 decstack;
Tcellset46759 cycleroots;
Tcellseq46763 tempstack;
NI recgclock;
Tmemregion28610 region;
Tgcstat48614 stat;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NI TY27820[8];
struct  Tpagedesc46755  {
Tpagedesc46755* next;
NI key;
TY27820 bits;
};
struct  Tbasechunk27838  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27840  {
  Tbasechunk27838 Sup;
Tsmallchunk27840* next;
Tsmallchunk27840* prev;
Tfreecell27830* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28604  {
NI size;
NI acc;
Tllchunk28604* next;
};
struct  Tbigchunk27842  {
  Tbasechunk27838 Sup;
Tbigchunk27842* next;
Tbigchunk27842* prev;
NI align;
NF data;
};
struct  Ttrunk27813  {
Ttrunk27813* next;
NI key;
TY27820 bits;
};
typedef Tavlnode28608* TY28614[2];
struct  Tavlnode28608  {
TY28614 link;
NI key;
NI upperbound;
NI level;
};
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
struct Keyvaluepairseq134010 {
  TGenericSeq Sup;
  TY103553 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, definesymbol_169013)(NimStringDesc* symbol);
N_NIMCALL(void, nstPut)(Stringtableobj134012* t, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, undefsymbol_169022)(NimStringDesc* symbol);
N_NIMCALL(NIM_BOOL, isdefined_169031)(NimStringDesc* symbol);
N_NIMCALL(NIM_BOOL, nsthasKey)(Stringtableobj134012* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, nstGet)(Stringtableobj134012* t, NimStringDesc* key);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(NI, hashString)(NimStringDesc* s);
N_NIMCALL(NIM_BOOL, isdefined_169167)(Tident168021* symbol);
N_NIMCALL(NI, countdefinedsymbols_169211)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, initdefines_169254)(void);
N_NIMCALL(Stringtableobj134012*, nstnewStringTable)(NU8 mode);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52622)(Tcell46747* c);
static N_INLINE(NIM_BOOL, canbecycleroot_50267)(Tcell46747* c);
static N_INLINE(void, rtladdcycleroot_51023)(Tcell46747* c);
N_NOINLINE(void, incl_47465)(Tcellset46759* s, Tcell46747* cell);
static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr);
static N_INLINE(void, decref_52204)(Tcell46747* c);
static N_INLINE(void, rtladdzct_51804)(Tcell46747* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46763* s, Tcell46747* c);
STRING_LITERAL(TMP1321, "true", 4);
STRING_LITERAL(TMP1322, "false", 5);
extern NIM_CONST TY160497 Cpu_160496;
extern NIM_CONST TY160071 Os_160070;
STRING_LITERAL(TMP1328, "x86", 3);
STRING_LITERAL(TMP1329, "itanium", 7);
STRING_LITERAL(TMP1330, "x8664", 5);
STRING_LITERAL(TMP1331, "posix", 5);
STRING_LITERAL(TMP1332, "unix", 4);
STRING_LITERAL(TMP1333, "bsd", 3);
STRING_LITERAL(TMP1334, "emulatedthreadvars", 18);
STRING_LITERAL(TMP1335, "msdos", 5);
STRING_LITERAL(TMP1336, "mswindows", 9);
STRING_LITERAL(TMP1337, "win32", 5);
STRING_LITERAL(TMP1338, "macintosh", 9);
STRING_LITERAL(TMP1339, "sunos", 5);
STRING_LITERAL(TMP1340, "littleendian", 12);
STRING_LITERAL(TMP1341, "bigendian", 9);
STRING_LITERAL(TMP1342, "cpu8", 4);
STRING_LITERAL(TMP1343, "cpu16", 5);
STRING_LITERAL(TMP1344, "cpu32", 5);
STRING_LITERAL(TMP1345, "cpu64", 5);
STRING_LITERAL(TMP1346, "nimrawsetjmp", 12);
STRING_LITERAL(TMP1349, "nimrod", 6);
STRING_LITERAL(TMP1350, "nimhygiene", 10);
STRING_LITERAL(TMP1351, "niminheritable", 14);
STRING_LITERAL(TMP1352, "nimmixin", 8);
STRING_LITERAL(TMP1353, "nimeffects", 10);
STRING_LITERAL(TMP1354, "nimbabel", 8);
STRING_LITERAL(TMP1355, "nimcomputedgoto", 15);
STRING_LITERAL(TMP1356, "nimunion", 8);
STRING_LITERAL(TMP1357, "nimnewshared", 12);
STRING_LITERAL(TMP1358, "nimrequiresnimframe", 19);
STRING_LITERAL(TMP1359, "nimparsebiggestfloatmagic", 25);
STRING_LITERAL(TMP1360, "nimalias", 8);
STRING_LITERAL(TMP1361, "nimlocks", 8);
STRING_LITERAL(TMP1362, "nimnode", 7);
Stringtableobj134012* gsymbols_169004;
extern TFrame* frameptr_17042;
extern NU8 targetcpu_160600;
extern NU8 targetos_160602;
extern Tgcheap48616 gch_48644;

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

N_NIMCALL(void, definesymbol_169013)(NimStringDesc* symbol) {
	nimfr("defineSymbol", "condsyms.nim")
	nimln(23, "condsyms.nim");
	nstPut(gsymbols_169004, symbol, ((NimStringDesc*) &TMP1321));
	popFrame();
}

N_NIMCALL(void, undefsymbol_169022)(NimStringDesc* symbol) {
	nimfr("undefSymbol", "condsyms.nim")
	nimln(26, "condsyms.nim");
	nstPut(gsymbols_169004, symbol, ((NimStringDesc*) &TMP1322));
	popFrame();
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
{	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (*a).Sup.len);
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, isdefined_169031)(NimStringDesc* symbol) {
	NIM_BOOL result;
	nimfr("isDefined", "condsyms.nim")
	result = 0;
	nimln(29, "condsyms.nim");
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC6;
		LOC3 = 0;
		LOC3 = nsthasKey(gsymbols_169004, symbol);
		if (!LOC3) goto LA4;
		nimln(30, "condsyms.nim");
		LOC6 = 0;
		LOC6 = nstGet(gsymbols_169004, symbol);
		result = !(eqStrings(LOC6, ((NimStringDesc*) &TMP1322)));
	}
	goto LA1;
	LA4: ;
	{
		NI LOC8;
		nimln(31, "condsyms.nim");
		if (targetcpu_160600 < 1 || targetcpu_160600 > 14) raiseIndexError();
		LOC8 = 0;
		LOC8 = nsuCmpIgnoreStyle(symbol, Cpu_160496[(targetcpu_160600)- 1].Field0);
		if (!(LOC8 == ((NI) 0))) goto LA9;
		nimln(32, "condsyms.nim");
		result = NIM_TRUE;
	}
	goto LA1;
	LA9: ;
	{
		NI LOC12;
		nimln(33, "condsyms.nim");
		if (targetos_160602 < 1 || targetos_160602 > 24) raiseIndexError();
		LOC12 = 0;
		LOC12 = nsuCmpIgnoreStyle(symbol, Os_160070[(targetos_160602)- 1].Field0);
		if (!(LOC12 == ((NI) 0))) goto LA13;
		nimln(34, "condsyms.nim");
		result = NIM_TRUE;
	}
	goto LA1;
	LA13: ;
	{
		NimStringDesc* LOC16;
		nimln(36, "condsyms.nim");
		LOC16 = 0;
		LOC16 = nsuNormalize(symbol);
		switch (hashString(LOC16) & 31) {
		case 0: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1337))) goto LA24;
break;
		case 1: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1336))) goto LA24;
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1346))) goto LA33;
break;
		case 2: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1344))) goto LA31;
break;
		case 3: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1335))) goto LA23;
break;
		case 6: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1333))) goto LA21;
break;
		case 13: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1339))) goto LA26;
break;
		case 15: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1328))) goto LA17;
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1329))) goto LA18;
break;
		case 19: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1332))) goto LA20;
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1334))) goto LA22;
break;
		case 20: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1341))) goto LA28;
break;
		case 22: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1342))) goto LA29;
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1343))) goto LA30;
break;
		case 23: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1330))) goto LA19;
break;
		case 25: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1345))) goto LA32;
break;
		case 27: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1340))) goto LA27;
break;
		case 30: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1331))) goto LA20;
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1338))) goto LA25;
break;
		}
		goto LA34;
		LA17: ;
		{
			nimln(37, "condsyms.nim");
			result = (targetcpu_160600 == ((NU8) 1));
		}
		goto LA35;
		LA18: ;
		{
			nimln(38, "condsyms.nim");
			result = (targetcpu_160600 == ((NU8) 8));
		}
		goto LA35;
		LA19: ;
		{
			nimln(39, "condsyms.nim");
			result = (targetcpu_160600 == ((NU8) 9));
		}
		goto LA35;
		LA20: ;
		{
			nimln(41, "condsyms.nim");
			result = ((3768304 &(1<<((targetos_160602)&31)))!=0);
		}
		goto LA35;
		LA21: ;
		{
			nimln(46, "condsyms.nim");
			result = ((3584 &(1<<((targetos_160602)&31)))!=0);
		}
		goto LA35;
		LA22: ;
		{
			nimln(48, "condsyms.nim");
			if (targetos_160602 < 1 || targetos_160602 > 24) raiseIndexError();
			result = ((Os_160070[(targetos_160602)- 1].Field12 &(1<<((((NU8) 3))&7)))!=0);
		}
		goto LA35;
		LA23: ;
		{
			nimln(49, "condsyms.nim");
			result = (targetos_160602 == ((NU8) 1));
		}
		goto LA35;
		LA24: ;
		{
			nimln(50, "condsyms.nim");
			result = (targetos_160602 == ((NU8) 2));
		}
		goto LA35;
		LA25: ;
		{
			nimln(51, "condsyms.nim");
			result = ((786432 &(1<<((targetos_160602)&31)))!=0);
		}
		goto LA35;
		LA26: ;
		{
			nimln(52, "condsyms.nim");
			result = (targetos_160602 == ((NU8) 7));
		}
		goto LA35;
		LA27: ;
		{
			nimln(53, "condsyms.nim");
			if (targetcpu_160600 < 1 || targetcpu_160600 > 14) raiseIndexError();
			result = (Cpu_160496[(targetcpu_160600)- 1].Field2 == ((NU8) 0));
		}
		goto LA35;
		LA28: ;
		{
			nimln(54, "condsyms.nim");
			if (targetcpu_160600 < 1 || targetcpu_160600 > 14) raiseIndexError();
			result = (Cpu_160496[(targetcpu_160600)- 1].Field2 == ((NU8) 1));
		}
		goto LA35;
		LA29: ;
		{
			nimln(55, "condsyms.nim");
			if (targetcpu_160600 < 1 || targetcpu_160600 > 14) raiseIndexError();
			result = (Cpu_160496[(targetcpu_160600)- 1].Field4 == ((NI) 8));
		}
		goto LA35;
		LA30: ;
		{
			nimln(56, "condsyms.nim");
			if (targetcpu_160600 < 1 || targetcpu_160600 > 14) raiseIndexError();
			result = (Cpu_160496[(targetcpu_160600)- 1].Field4 == ((NI) 16));
		}
		goto LA35;
		LA31: ;
		{
			nimln(57, "condsyms.nim");
			if (targetcpu_160600 < 1 || targetcpu_160600 > 14) raiseIndexError();
			result = (Cpu_160496[(targetcpu_160600)- 1].Field4 == ((NI) 32));
		}
		goto LA35;
		LA32: ;
		{
			nimln(58, "condsyms.nim");
			if (targetcpu_160600 < 1 || targetcpu_160600 > 14) raiseIndexError();
			result = (Cpu_160496[(targetcpu_160600)- 1].Field4 == ((NI) 64));
		}
		goto LA35;
		LA33: ;
		{
			nimln(60, "condsyms.nim");
			result = ((528000 &(1<<((targetos_160602)&31)))!=0);
		}
		goto LA35;
		LA34: ;
		{
		}
		LA35: ;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, isdefined_169167)(Tident168021* symbol) {
	NIM_BOOL result;
	nimfr("isDefined", "condsyms.nim")
	result = 0;
	nimln(63, "condsyms.nim");
	result = isdefined_169031((*symbol).s);
	popFrame();
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

N_NIMCALL(NI, countdefinedsymbols_169211)(void) {
	NI result;
	nimfr("countDefinedSymbols", "condsyms.nim")
	result = 0;
	nimln(70, "condsyms.nim");
	result = ((NI) 0);
	{
		NimStringDesc* key_169214;
		NimStringDesc* val_169215;
		key_169214 = 0;
		val_169215 = 0;
		{
			NI h_169229;
			NI HEX3Atmp_169231;
			NI res_169233;
			h_169229 = 0;
			HEX3Atmp_169231 = 0;
			nimln(43, "strtabs.nim");
			HEX3Atmp_169231 = ((*gsymbols_169004).data ? ((*gsymbols_169004).data->Sup.len-1) : -1);
			nimln(1598, "system.nim");
			res_169233 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					NI TMP1348;
					if (!(res_169233 <= HEX3Atmp_169231)) goto LA4;
					nimln(1600, "system.nim");
					h_169229 = res_169233;
					nimln(44, "strtabs.nim");
					{
						if ((NU)(h_169229) >= (NU)((*gsymbols_169004).data->Sup.len)) raiseIndexError();
						if (!!((*gsymbols_169004).data->data[h_169229].Field0 == 0)) goto LA7;
						nimln(45, "strtabs.nim");
						if ((NU)(h_169229) >= (NU)((*gsymbols_169004).data->Sup.len)) raiseIndexError();
						key_169214 = (*gsymbols_169004).data->data[h_169229].Field0;
						if ((NU)(h_169229) >= (NU)((*gsymbols_169004).data->Sup.len)) raiseIndexError();
						val_169215 = (*gsymbols_169004).data->data[h_169229].Field1;
						nimln(72, "condsyms.nim");
						{
							NI TMP1347;
							if (!!(eqStrings(val_169215, ((NimStringDesc*) &TMP1322)))) goto LA11;
							TMP1347 = addInt(result, ((NI) 1));
							result = (NI)(TMP1347);
						}
						LA11: ;
					}
					LA7: ;
					nimln(1619, "system.nim");
					TMP1348 = addInt(res_169233, ((NI) 1));
					res_169233 = (NI)(TMP1348);
				} LA4: ;
			}
		}
	}
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_50267)(Tcell46747* c) {
	NIM_BOOL result;
	nimfr("canBeCycleRoot", "gc.nim")
	result = 0;
	nimln(121, "gc.nim");
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdcycleroot_51023)(Tcell46747* c) {
	nimfr("rtlAddCycleRoot", "gc.nim")
	nimln(189, "gc.nim");
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		nimln(139, "gc.nim");
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		nimln(191, "gc.nim");
		incl_47465((&gch_48644.cycleroots), c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(void, incref_52622)(Tcell46747* c) {
	nimfr("incRef", "gc.nim")
	nimln(216, "gc.nim");
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	nimln(219, "gc.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_50267(c);
		if (!LOC3) goto LA4;
		nimln(220, "gc.nim");
		rtladdcycleroot_51023(c);
	}
	LA4: ;
	popFrame();
}

static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr) {
	Tcell46747* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	result = ((Tcell46747*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46747))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_51804)(Tcell46747* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_50217((&gch_48644.zct), c);
	popFrame();
}

static N_INLINE(void, decref_52204)(Tcell46747* c) {
	nimfr("decRef", "gc.nim")
	nimln(206, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).refcount -= ((NI) 8);
		nimln(168, "gc.nim");
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		nimln(207, "gc.nim");
		rtladdzct_51804(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(208, "gc.nim");
		LOC6 = 0;
		LOC6 = canbecycleroot_50267(c);
		if (!LOC6) goto LA7;
		nimln(211, "gc.nim");
		rtladdcycleroot_51023(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
	popFrame();
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr("asgnRef", "gc.nim")
	nimln(244, "gc.nim");
	{
		Tcell46747* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_50246(src);
		incref_52622(LOC5);
	}
	LA3: ;
	nimln(245, "gc.nim");
	{
		Tcell46747* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_50246((*dest));
		decref_52204(LOC10);
	}
	LA8: ;
	nimln(246, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(void, initdefines_169254)(void) {
	nimfr("initDefines", "condsyms.nim")
	nimln(75, "condsyms.nim");
	asgnRef((void**) (&gsymbols_169004), nstnewStringTable(((NU8) 2)));
	nimln(76, "condsyms.nim");
	definesymbol_169013(((NimStringDesc*) &TMP1349));
	nimln(78, "condsyms.nim");
	definesymbol_169013(((NimStringDesc*) &TMP1350));
	nimln(79, "condsyms.nim");
	definesymbol_169013(((NimStringDesc*) &TMP1351));
	nimln(80, "condsyms.nim");
	definesymbol_169013(((NimStringDesc*) &TMP1352));
	nimln(81, "condsyms.nim");
	definesymbol_169013(((NimStringDesc*) &TMP1353));
	nimln(82, "condsyms.nim");
	definesymbol_169013(((NimStringDesc*) &TMP1354));
	nimln(83, "condsyms.nim");
	definesymbol_169013(((NimStringDesc*) &TMP1355));
	nimln(84, "condsyms.nim");
	definesymbol_169013(((NimStringDesc*) &TMP1356));
	nimln(85, "condsyms.nim");
	definesymbol_169013(((NimStringDesc*) &TMP1357));
	nimln(86, "condsyms.nim");
	definesymbol_169013(((NimStringDesc*) &TMP1358));
	nimln(87, "condsyms.nim");
	definesymbol_169013(((NimStringDesc*) &TMP1359));
	nimln(88, "condsyms.nim");
	definesymbol_169013(((NimStringDesc*) &TMP1360));
	nimln(89, "condsyms.nim");
	definesymbol_169013(((NimStringDesc*) &TMP1361));
	nimln(90, "condsyms.nim");
	definesymbol_169013(((NimStringDesc*) &TMP1362));
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, compiler_condsymsInit)(void) {
	nimfr("condsyms", "condsyms.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_condsymsDatInit)(void) {
}

