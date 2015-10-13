/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct Tident167021 Tident167021;
typedef struct Tidobj167015 Tidobj167015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tcell46746 Tcell46746;
typedef struct Tcellseq46762 Tcellseq46762;
typedef struct Tgcheap48616 Tgcheap48616;
typedef struct Tcellset46758 Tcellset46758;
typedef struct Tpagedesc46754 Tpagedesc46754;
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
typedef Tident167021* TY167034[8192];
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
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
};
struct  Tcell46746  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46762  {
NI len;
NI cap;
Tcell46746** d;
};
struct  Tcellset46758  {
NI counter;
NI max;
Tpagedesc46754* head;
Tpagedesc46754** data;
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
Tcellseq46762 zct;
Tcellseq46762 decstack;
Tcellset46758 cycleroots;
Tcellseq46762 tempstack;
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
typedef NI TY27820[16];
struct  Tpagedesc46754  {
Tpagedesc46754* next;
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
N_NIMCALL(NI, cmpignorestyle_167044)(NCSTRING a, NCSTRING b, NI blen);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_INLINE(NI, subInt)(NI a, NI b);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NI, cmpexact_167187)(NCSTRING a, NCSTRING b, NI blen);
N_NIMCALL(Tident167021*, getident_167248)(NCSTRING identifier, NI length, NI h);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46746*, usrtocell_50246)(void* usr);
static N_INLINE(void, rtladdzct_51804)(Tcell46746* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46762* s, Tcell46746* c);
N_NIMCALL(void, failedassertimpl_87217)(NimStringDesc* msg);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1316)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(Tident167021*, getident_167463)(NimStringDesc* identifier);
N_NIMCALL(NI, hashignorestyle_131887)(NimStringDesc* x);
N_NIMCALL(Tident167021*, getident_167473)(NimStringDesc* identifier, NI h);
N_NIMCALL(NIM_BOOL, identeq_167484)(Tident167021* id, NimStringDesc* name);
N_NIMCALL(void, TMP2642)(void* p, NI op);
STRING_LITERAL(TMP1314, "id == 0 or id == result.id ", 27);
STRING_LITERAL(TMP1320, ":anonymous", 10);
STRING_LITERAL(TMP1321, ":delegator", 10);
NIM_BOOL firstchariscs_167029;
TY167034 buckets_167039;
extern TFrame* frameptr_17042;
NI wordcounter_167244;
extern Tgcheap48616 gch_48644;
extern TNimType NTI3411; /* RootObj */
TNimType NTI167015; /* TIdObj */
extern TNimType NTI108; /* int */
TNimType NTI167021; /* TIdent */
extern TNimType NTI149; /* string */
extern TNimType NTI131021; /* THash */
TNimType NTI167019; /* PIdent */
Tident167021* idanon_167495;
Tident167021* iddelegator_167550;
TNimType NTI167017; /* PIdObj */

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

N_NIMCALL(NI, cmpignorestyle_167044)(NCSTRING a, NCSTRING b, NI blen) {
	NI result;
	NI i;
	NI j;
	nimfr("cmpIgnoreStyle", "idents.nim")
{	result = 0;
	nimln(32, "idents.nim");
	{
		if (!firstchariscs_167029) goto LA3;
		nimln(33, "idents.nim");
		{
			if (!!(((NU8)(a[((NI) 0)]) == (NU8)(b[((NI) 0)])))) goto LA7;
			result = ((NI) 1);
			goto BeforeRet;
		}
		LA7: ;
	}
	LA3: ;
	nimln(34, "idents.nim");
	i = ((NI) 0);
	nimln(35, "idents.nim");
	j = ((NI) 0);
	nimln(36, "idents.nim");
	result = ((NI) 1);
	{
		nimln(37, "idents.nim");
		while (1) {
			NIM_CHAR aa;
			NIM_CHAR bb;
			NI TMP1308;
			NI TMP1309;
			NI TMP1310;
			if (!(j < blen)) goto LA10;
			{
				nimln(38, "idents.nim");
				while (1) {
					NI TMP1304;
					if (!((NU8)(a[i]) == (NU8)(95))) goto LA12;
					TMP1304 = addInt(i, ((NI) 1));
					i = (NI)(TMP1304);
				} LA12: ;
			}
			{
				nimln(39, "idents.nim");
				while (1) {
					NI TMP1305;
					if (!((NU8)(b[j]) == (NU8)(95))) goto LA14;
					TMP1305 = addInt(j, ((NI) 1));
					j = (NI)(TMP1305);
				} LA14: ;
			}
			nimln(41, "idents.nim");
			aa = a[i];
			nimln(42, "idents.nim");
			bb = b[j];
			nimln(43, "idents.nim");
			{
				NIM_BOOL LOC17;
				NI TMP1306;
				LOC17 = 0;
				LOC17 = ((NU8)(65) <= (NU8)(aa));
				if (!(LOC17)) goto LA18;
				LOC17 = ((NU8)(aa) <= (NU8)(90));
				LA18: ;
				if (!LOC17) goto LA19;
				TMP1306 = addInt(((NI) (((NU8)(aa)))), ((NI) 32));
				aa = ((NIM_CHAR) (((NI)chckRange((NI)(TMP1306), ((NI) 0), ((NI) 255)))));
			}
			LA19: ;
			nimln(44, "idents.nim");
			{
				NIM_BOOL LOC23;
				NI TMP1307;
				LOC23 = 0;
				LOC23 = ((NU8)(65) <= (NU8)(bb));
				if (!(LOC23)) goto LA24;
				LOC23 = ((NU8)(bb) <= (NU8)(90));
				LA24: ;
				if (!LOC23) goto LA25;
				TMP1307 = addInt(((NI) (((NU8)(bb)))), ((NI) 32));
				bb = ((NIM_CHAR) (((NI)chckRange((NI)(TMP1307), ((NI) 0), ((NI) 255)))));
			}
			LA25: ;
			nimln(45, "idents.nim");
			TMP1308 = subInt(((NI) (((NU8)(aa)))), ((NI) (((NU8)(bb)))));
			result = (NI)(TMP1308);
			nimln(46, "idents.nim");
			{
				NIM_BOOL LOC29;
				LOC29 = 0;
				LOC29 = !((result == ((NI) 0)));
				if (LOC29) goto LA30;
				LOC29 = ((NU8)(aa) == (NU8)(0));
				LA30: ;
				if (!LOC29) goto LA31;
				goto LA9;
			}
			LA31: ;
			nimln(47, "idents.nim");
			TMP1309 = addInt(i, ((NI) 1));
			i = (NI)(TMP1309);
			nimln(48, "idents.nim");
			TMP1310 = addInt(j, ((NI) 1));
			j = (NI)(TMP1310);
		} LA10: ;
	} LA9: ;
	nimln(49, "idents.nim");
	{
		if (!(result == ((NI) 0))) goto LA35;
		nimln(50, "idents.nim");
		{
			if (!!(((NU8)(a[i]) == (NU8)(0)))) goto LA39;
			result = ((NI) 1);
		}
		LA39: ;
	}
	LA35: ;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, cmpexact_167187)(NCSTRING a, NCSTRING b, NI blen) {
	NI result;
	NI i;
	NI j;
	nimfr("cmpExact", "idents.nim")
	result = 0;
	nimln(53, "idents.nim");
	i = ((NI) 0);
	nimln(54, "idents.nim");
	j = ((NI) 0);
	nimln(55, "idents.nim");
	result = ((NI) 1);
	{
		nimln(56, "idents.nim");
		while (1) {
			NIM_CHAR aa;
			NIM_CHAR bb;
			NI TMP1311;
			NI TMP1312;
			NI TMP1313;
			if (!(j < blen)) goto LA2;
			nimln(57, "idents.nim");
			aa = a[i];
			nimln(58, "idents.nim");
			bb = b[j];
			nimln(59, "idents.nim");
			TMP1311 = subInt(((NI) (((NU8)(aa)))), ((NI) (((NU8)(bb)))));
			result = (NI)(TMP1311);
			nimln(60, "idents.nim");
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = !((result == ((NI) 0)));
				if (LOC5) goto LA6;
				LOC5 = ((NU8)(aa) == (NU8)(0));
				LA6: ;
				if (!LOC5) goto LA7;
				goto LA1;
			}
			LA7: ;
			nimln(61, "idents.nim");
			TMP1312 = addInt(i, ((NI) 1));
			i = (NI)(TMP1312);
			nimln(62, "idents.nim");
			TMP1313 = addInt(j, ((NI) 1));
			j = (NI)(TMP1313);
		} LA2: ;
	} LA1: ;
	nimln(63, "idents.nim");
	{
		if (!(result == ((NI) 0))) goto LA11;
		nimln(64, "idents.nim");
		{
			if (!!(((NU8)(a[i]) == (NU8)(0)))) goto LA15;
			result = ((NI) 1);
		}
		LA15: ;
	}
	LA11: ;
	popFrame();
	return result;
}

static N_INLINE(Tcell46746*, usrtocell_50246)(void* usr) {
	Tcell46746* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	result = ((Tcell46746*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46746))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_51804)(Tcell46746* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_50217((&gch_48644.zct), c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		Tcell46746* c;
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(252, "gc.nim");
		c = usrtocell_50246(src);
		nimln(169, "gc.nim");
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	nimln(254, "gc.nim");
	{
		Tcell46746* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(255, "gc.nim");
		c = usrtocell_50246((*dest));
		nimln(256, "gc.nim");
		{
			nimln(167, "gc.nim");
			(*c).refcount -= ((NI) 8);
			nimln(168, "gc.nim");
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			nimln(257, "gc.nim");
			rtladdzct_51804(c);
		}
		LA11: ;
	}
	LA7: ;
	nimln(258, "gc.nim");
	(*dest) = src;
	popFrame();
}
N_NIMCALL(void, TMP1316)(void* p, NI op) {
	Tident167021* a;
	a = (Tident167021*)p;
	nimGCvisit((void*)(*a).s, op);
	nimGCvisit((void*)(*a).next, op);
}

N_NIMCALL(Tident167021*, getident_167248)(NCSTRING identifier, NI length, NI h) {
	Tident167021* result;
	NI idx;
	Tident167021* last;
	NI id;
	nimfr("getIdent", "idents.nim")
{	result = 0;
	nimln(69, "idents.nim");
	idx = (NI)(h & ((NI) 8191));
	nimln(70, "idents.nim");
	result = buckets_167039[(idx)- 0];
	nimln(71, "idents.nim");
	last = NIM_NIL;
	nimln(72, "idents.nim");
	id = ((NI) 0);
	{
		nimln(73, "idents.nim");
		while (1) {
			if (!!((result == NIM_NIL))) goto LA2;
			nimln(74, "idents.nim");
			{
				NI LOC5;
				LOC5 = 0;
				LOC5 = cmpexact_167187((*result).s->data, identifier, length);
				if (!(LOC5 == ((NI) 0))) goto LA6;
				nimln(75, "idents.nim");
				{
					if (!!((last == NIM_NIL))) goto LA10;
					nimln(77, "idents.nim");
					asgnRefNoCycle((void**) (&(*last).next), (*result).next);
					nimln(78, "idents.nim");
					asgnRefNoCycle((void**) (&(*result).next), buckets_167039[(idx)- 0]);
					nimln(79, "idents.nim");
					asgnRefNoCycle((void**) (&buckets_167039[(idx)- 0]), result);
				}
				LA10: ;
				nimln(80, "idents.nim");
				goto BeforeRet;
			}
			goto LA3;
			LA6: ;
			{
				NI LOC13;
				nimln(81, "idents.nim");
				LOC13 = 0;
				LOC13 = cmpignorestyle_167044((*result).s->data, identifier, length);
				if (!(LOC13 == ((NI) 0))) goto LA14;
				nimln(82, "idents.nim");
				{
					NIM_BOOL LOC18;
					LOC18 = 0;
					LOC18 = (id == ((NI) 0));
					if (LOC18) goto LA19;
					LOC18 = (id == (*result).Sup.id);
					LA19: ;
					if (!!(LOC18)) goto LA20;
					failedassertimpl_87217(((NimStringDesc*) &TMP1314));
				}
				LA20: ;
				nimln(83, "idents.nim");
				id = (*result).Sup.id;
			}
			goto LA3;
			LA14: ;
			LA3: ;
			nimln(84, "idents.nim");
			last = result;
			nimln(85, "idents.nim");
			result = (*result).next;
		} LA2: ;
	}
	nimln(86, "idents.nim");
	result = (Tident167021*) newObj((&NTI167019), sizeof(Tident167021));
	(*result).Sup.Sup.m_type = (&NTI167021);
	nimln(87, "idents.nim");
	(*result).h = h;
	nimln(88, "idents.nim");
	asgnRefNoCycle((void**) (&(*result).s), mnewString(((NI)chckRange(length, ((NI) 0), ((NI) 2147483647)))));
	{
		NI i_167421;
		NI HEX3Atmp_167435;
		NI TMP1317;
		NI res_167438;
		i_167421 = 0;
		HEX3Atmp_167435 = 0;
		nimln(89, "idents.nim");
		TMP1317 = subInt(length, ((NI) 1));
		HEX3Atmp_167435 = (NI)(TMP1317);
		nimln(1598, "system.nim");
		res_167438 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP1318;
				if (!(res_167438 <= HEX3Atmp_167435)) goto LA24;
				nimln(1600, "system.nim");
				i_167421 = res_167438;
				nimln(89, "idents.nim");
				if ((NU)(i_167421) > (NU)((*result).s->Sup.len)) raiseIndexError();
				(*result).s->data[i_167421] = identifier[i_167421];
				nimln(1614, "system.nim");
				TMP1318 = addInt(res_167438, ((NI) 1));
				res_167438 = (NI)(TMP1318);
			} LA24: ;
		}
	}
	nimln(90, "idents.nim");
	asgnRefNoCycle((void**) (&(*result).next), buckets_167039[(idx)- 0]);
	nimln(91, "idents.nim");
	asgnRefNoCycle((void**) (&buckets_167039[(idx)- 0]), result);
	nimln(92, "idents.nim");
	{
		NI TMP1319;
		if (!(id == ((NI) 0))) goto LA27;
		nimln(93, "idents.nim");
		TMP1319 = addInt(wordcounter_167244, ((NI) 1));
		wordcounter_167244 = (NI)(TMP1319);
		nimln(94, "idents.nim");
		if (wordcounter_167244 == (-2147483647 -1)) raiseOverflow();
		(*result).Sup.id = ((NI32)-(wordcounter_167244));
	}
	goto LA25;
	LA27: ;
	{
		nimln(96, "idents.nim");
		(*result).Sup.id = id;
	}
	LA25: ;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(Tident167021*, getident_167463)(NimStringDesc* identifier) {
	Tident167021* result;
	NI LOC1;
	nimfr("getIdent", "idents.nim")
	result = 0;
	nimln(99, "idents.nim");
	nimln(100, "idents.nim");
	LOC1 = 0;
	LOC1 = hashignorestyle_131887(identifier);
	result = getident_167248(identifier->data, (identifier ? identifier->Sup.len : 0), LOC1);
	popFrame();
	return result;
}

N_NIMCALL(Tident167021*, getident_167473)(NimStringDesc* identifier, NI h) {
	Tident167021* result;
	nimfr("getIdent", "idents.nim")
	result = 0;
	nimln(103, "idents.nim");
	result = getident_167248(identifier->data, (identifier ? identifier->Sup.len : 0), h);
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, identeq_167484)(Tident167021* id, NimStringDesc* name) {
	NIM_BOOL result;
	Tident167021* LOC1;
	nimfr("identEq", "idents.nim")
	result = 0;
	nimln(106, "idents.nim");
	LOC1 = 0;
	LOC1 = getident_167463(name);
	result = ((*id).Sup.id == (*LOC1).Sup.id);
	popFrame();
	return result;
}
N_NIMCALL(void, TMP2642)(void* p, NI op) {
	Tidobj167015* a;
	a = (Tidobj167015*)p;
}
NIM_EXTERNC N_NOINLINE(void, compiler_identsInit)(void) {
	nimfr("idents", "idents.nim")
	nimln(28, "idents.nim");
	firstchariscs_167029 = NIM_TRUE;
	nimln(66, "idents.nim");
	wordcounter_167244 = ((NI) 1);
	nimln(108, "idents.nim");
	asgnRefNoCycle((void**) (&idanon_167495), getident_167463(((NimStringDesc*) &TMP1320)));
	nimln(109, "idents.nim");
	asgnRefNoCycle((void**) (&iddelegator_167550), getident_167463(((NimStringDesc*) &TMP1321)));
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_identsDatInit)(void) {
static TNimNode* TMP1315[3];
static TNimNode TMP1302[5];
NTI167015.size = sizeof(Tidobj167015);
NTI167015.kind = 17;
NTI167015.base = (&NTI3411);
NTI167015.flags = 1;
TMP1302[0].kind = 1;
TMP1302[0].offset = offsetof(Tidobj167015, id);
TMP1302[0].typ = (&NTI108);
TMP1302[0].name = "id";
NTI167015.node = &TMP1302[0];
NTI167021.size = sizeof(Tident167021);
NTI167021.kind = 17;
NTI167021.base = (&NTI167015);
NTI167021.flags = 2;
TMP1315[0] = &TMP1302[2];
TMP1302[2].kind = 1;
TMP1302[2].offset = offsetof(Tident167021, s);
TMP1302[2].typ = (&NTI149);
TMP1302[2].name = "s";
TMP1315[1] = &TMP1302[3];
TMP1302[3].kind = 1;
TMP1302[3].offset = offsetof(Tident167021, next);
TMP1302[3].typ = (&NTI167019);
TMP1302[3].name = "next";
TMP1315[2] = &TMP1302[4];
TMP1302[4].kind = 1;
TMP1302[4].offset = offsetof(Tident167021, h);
TMP1302[4].typ = (&NTI131021);
TMP1302[4].name = "h";
TMP1302[1].len = 3; TMP1302[1].kind = 2; TMP1302[1].sons = &TMP1315[0];
NTI167021.node = &TMP1302[1];
NTI167019.size = sizeof(Tident167021*);
NTI167019.kind = 22;
NTI167019.base = (&NTI167021);
NTI167019.flags = 2;
NTI167019.marker = TMP1316;
NTI167017.size = sizeof(Tidobj167015*);
NTI167017.kind = 22;
NTI167017.base = (&NTI167015);
NTI167017.marker = TMP2642;
}

