/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct Tident166021 Tident166021;
typedef struct Tidobj166015 Tidobj166015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tcell46947 Tcell46947;
typedef struct Tcellseq46963 Tcellseq46963;
typedef struct Tgcheap48816 Tgcheap48816;
typedef struct Tcellset46959 Tcellset46959;
typedef struct Tpagedesc46955 Tpagedesc46955;
typedef struct Tmemregion28810 Tmemregion28810;
typedef struct Tsmallchunk28040 Tsmallchunk28040;
typedef struct Tllchunk28804 Tllchunk28804;
typedef struct Tbigchunk28042 Tbigchunk28042;
typedef struct Tintset28017 Tintset28017;
typedef struct Ttrunk28013 Ttrunk28013;
typedef struct Tavlnode28808 Tavlnode28808;
typedef struct Tgcstat48814 Tgcstat48814;
typedef struct Tbasechunk28038 Tbasechunk28038;
typedef struct Tfreecell28030 Tfreecell28030;
typedef Tident166021* TY166034[8192];
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
struct  Tidobj166015  {
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
struct  Tident166021  {
  Tidobj166015 Sup;
NimStringDesc* s;
Tident166021* next;
NI h;
};
struct  Tcell46947  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46963  {
NI len;
NI cap;
Tcell46947** d;
};
struct  Tcellset46959  {
NI counter;
NI max;
Tpagedesc46955* head;
Tpagedesc46955** data;
};
typedef Tsmallchunk28040* TY28822[512];
typedef Ttrunk28013* Ttrunkbuckets28015[256];
struct  Tintset28017  {
Ttrunkbuckets28015 data;
};
struct  Tmemregion28810  {
NI minlargeobj;
NI maxlargeobj;
TY28822 freesmallchunks;
Tllchunk28804* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk28042* freechunkslist;
Tintset28017 chunkstarts;
Tavlnode28808* root;
Tavlnode28808* deleted;
Tavlnode28808* last;
Tavlnode28808* freeavlnodes;
};
struct  Tgcstat48814  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48816  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46963 zct;
Tcellseq46963 decstack;
Tcellset46959 cycleroots;
Tcellseq46963 tempstack;
NI recgclock;
Tmemregion28810 region;
Tgcstat48814 stat;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NI TY28020[16];
struct  Tpagedesc46955  {
Tpagedesc46955* next;
NI key;
TY28020 bits;
};
struct  Tbasechunk28038  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk28040  {
  Tbasechunk28038 Sup;
Tsmallchunk28040* next;
Tsmallchunk28040* prev;
Tfreecell28030* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28804  {
NI size;
NI acc;
Tllchunk28804* next;
};
struct  Tbigchunk28042  {
  Tbasechunk28038 Sup;
Tbigchunk28042* next;
Tbigchunk28042* prev;
NI align;
NF data;
};
struct  Ttrunk28013  {
Ttrunk28013* next;
NI key;
TY28020 bits;
};
typedef Tavlnode28808* TY28814[2];
struct  Tavlnode28808  {
TY28814 link;
NI key;
NI upperbound;
NI level;
};
struct  Tfreecell28030  {
Tfreecell28030* next;
NI zerofield;
};
N_NIMCALL(NI, cmpignorestyle_166044)(NCSTRING a, NCSTRING b, NI blen);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_INLINE(NI, subInt)(NI a, NI b);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20201)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NI, cmpexact_166187)(NCSTRING a, NCSTRING b, NI blen);
N_NIMCALL(Tident166021*, getident_166248)(NCSTRING identifier, NI length, NI h);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46947*, usrtocell_50446)(void* usr);
static N_INLINE(void, rtladdzct_52004)(Tcell46947* c);
N_NOINLINE(void, addzct_50417)(Tcellseq46963* s, Tcell46947* c);
N_NIMCALL(void, failedassertimpl_87217)(NimStringDesc* msg);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1302)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(Tident166021*, getident_166463)(NimStringDesc* identifier);
N_NIMCALL(NI, hashignorestyle_131887)(NimStringDesc* x);
N_NIMCALL(Tident166021*, getident_166473)(NimStringDesc* identifier, NI h);
N_NIMCALL(NIM_BOOL, identeq_166484)(Tident166021* id, NimStringDesc* name);
N_NIMCALL(void, TMP2630)(void* p, NI op);
STRING_LITERAL(TMP1300, "id == 0 or id == result.id ", 27);
STRING_LITERAL(TMP1306, ":anonymous", 10);
STRING_LITERAL(TMP1307, ":delegator", 10);
NIM_BOOL firstchariscs_166029;
TY166034 buckets_166039;
extern TFrame* frameptr_17242;
NI wordcounter_166244;
extern Tgcheap48816 gch_48844;
extern TNimType NTI3411; /* RootObj */
TNimType NTI166015; /* TIdObj */
extern TNimType NTI108; /* int */
TNimType NTI166021; /* TIdent */
extern TNimType NTI149; /* string */
extern TNimType NTI131021; /* THash */
TNimType NTI166019; /* PIdent */
Tident166021* idanon_166495;
Tident166021* iddelegator_166550;
TNimType NTI166017; /* PIdObj */

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
		if (!(frameptr_17242 == NIM_NIL)) goto LA4;
		LOC1 = ((NI) 0);
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = ((NI) ((NI16)((*frameptr_17242).calldepth + ((NI16) 1))));
	}
	LA2: ;
	(*s).calldepth = ((NI16) (LOC1));
	(*s).prev = frameptr_17242;
	frameptr_17242 = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9;
		stackoverflow_20201();
	}
	LA9: ;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_17242 = (*frameptr_17242).prev;
}

N_NIMCALL(NI, cmpignorestyle_166044)(NCSTRING a, NCSTRING b, NI blen) {
	NI result;
	NI i;
	NI j;
	nimfr("cmpIgnoreStyle", "idents.nim")
{	result = 0;
	nimln(32, "idents.nim");
	{
		if (!firstchariscs_166029) goto LA3;
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
			NI TMP1294;
			NI TMP1295;
			NI TMP1296;
			if (!(j < blen)) goto LA10;
			{
				nimln(38, "idents.nim");
				while (1) {
					NI TMP1290;
					if (!((NU8)(a[i]) == (NU8)(95))) goto LA12;
					TMP1290 = addInt(i, ((NI) 1));
					i = (NI)(TMP1290);
				} LA12: ;
			}
			{
				nimln(39, "idents.nim");
				while (1) {
					NI TMP1291;
					if (!((NU8)(b[j]) == (NU8)(95))) goto LA14;
					TMP1291 = addInt(j, ((NI) 1));
					j = (NI)(TMP1291);
				} LA14: ;
			}
			nimln(41, "idents.nim");
			aa = a[i];
			nimln(42, "idents.nim");
			bb = b[j];
			nimln(43, "idents.nim");
			{
				NIM_BOOL LOC17;
				NI TMP1292;
				LOC17 = 0;
				LOC17 = ((NU8)(65) <= (NU8)(aa));
				if (!(LOC17)) goto LA18;
				LOC17 = ((NU8)(aa) <= (NU8)(90));
				LA18: ;
				if (!LOC17) goto LA19;
				TMP1292 = addInt(((NI) (((NU8)(aa)))), ((NI) 32));
				aa = ((NIM_CHAR) (((NI)chckRange((NI)(TMP1292), ((NI) 0), ((NI) 255)))));
			}
			LA19: ;
			nimln(44, "idents.nim");
			{
				NIM_BOOL LOC23;
				NI TMP1293;
				LOC23 = 0;
				LOC23 = ((NU8)(65) <= (NU8)(bb));
				if (!(LOC23)) goto LA24;
				LOC23 = ((NU8)(bb) <= (NU8)(90));
				LA24: ;
				if (!LOC23) goto LA25;
				TMP1293 = addInt(((NI) (((NU8)(bb)))), ((NI) 32));
				bb = ((NIM_CHAR) (((NI)chckRange((NI)(TMP1293), ((NI) 0), ((NI) 255)))));
			}
			LA25: ;
			nimln(45, "idents.nim");
			TMP1294 = subInt(((NI) (((NU8)(aa)))), ((NI) (((NU8)(bb)))));
			result = (NI)(TMP1294);
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
			TMP1295 = addInt(i, ((NI) 1));
			i = (NI)(TMP1295);
			nimln(48, "idents.nim");
			TMP1296 = addInt(j, ((NI) 1));
			j = (NI)(TMP1296);
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

N_NIMCALL(NI, cmpexact_166187)(NCSTRING a, NCSTRING b, NI blen) {
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
			NI TMP1297;
			NI TMP1298;
			NI TMP1299;
			if (!(j < blen)) goto LA2;
			nimln(57, "idents.nim");
			aa = a[i];
			nimln(58, "idents.nim");
			bb = b[j];
			nimln(59, "idents.nim");
			TMP1297 = subInt(((NI) (((NU8)(aa)))), ((NI) (((NU8)(bb)))));
			result = (NI)(TMP1297);
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
			TMP1298 = addInt(i, ((NI) 1));
			i = (NI)(TMP1298);
			nimln(62, "idents.nim");
			TMP1299 = addInt(j, ((NI) 1));
			j = (NI)(TMP1299);
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

static N_INLINE(Tcell46947*, usrtocell_50446)(void* usr) {
	Tcell46947* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	result = ((Tcell46947*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46947))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_52004)(Tcell46947* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_50417((&gch_48844.zct), c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		Tcell46947* c;
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(252, "gc.nim");
		c = usrtocell_50446(src);
		nimln(169, "gc.nim");
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	nimln(254, "gc.nim");
	{
		Tcell46947* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(255, "gc.nim");
		c = usrtocell_50446((*dest));
		nimln(256, "gc.nim");
		{
			nimln(167, "gc.nim");
			(*c).refcount -= ((NI) 8);
			nimln(168, "gc.nim");
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			nimln(257, "gc.nim");
			rtladdzct_52004(c);
		}
		LA11: ;
	}
	LA7: ;
	nimln(258, "gc.nim");
	(*dest) = src;
	popFrame();
}
N_NIMCALL(void, TMP1302)(void* p, NI op) {
	Tident166021* a;
	a = (Tident166021*)p;
	nimGCvisit((void*)(*a).s, op);
	nimGCvisit((void*)(*a).next, op);
}

N_NIMCALL(Tident166021*, getident_166248)(NCSTRING identifier, NI length, NI h) {
	Tident166021* result;
	NI idx;
	Tident166021* last;
	NI id;
	nimfr("getIdent", "idents.nim")
{	result = 0;
	nimln(69, "idents.nim");
	idx = (NI)(h & ((NI) 8191));
	nimln(70, "idents.nim");
	result = buckets_166039[(idx)- 0];
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
				LOC5 = cmpexact_166187((*result).s->data, identifier, length);
				if (!(LOC5 == ((NI) 0))) goto LA6;
				nimln(75, "idents.nim");
				{
					if (!!((last == NIM_NIL))) goto LA10;
					nimln(77, "idents.nim");
					asgnRefNoCycle((void**) (&(*last).next), (*result).next);
					nimln(78, "idents.nim");
					asgnRefNoCycle((void**) (&(*result).next), buckets_166039[(idx)- 0]);
					nimln(79, "idents.nim");
					asgnRefNoCycle((void**) (&buckets_166039[(idx)- 0]), result);
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
				LOC13 = cmpignorestyle_166044((*result).s->data, identifier, length);
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
					failedassertimpl_87217(((NimStringDesc*) &TMP1300));
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
	result = (Tident166021*) newObj((&NTI166019), sizeof(Tident166021));
	(*result).Sup.Sup.m_type = (&NTI166021);
	nimln(87, "idents.nim");
	(*result).h = h;
	nimln(88, "idents.nim");
	asgnRefNoCycle((void**) (&(*result).s), mnewString(((NI)chckRange(length, ((NI) 0), ((NI) 2147483647)))));
	{
		NI i_166421;
		NI HEX3Atmp_166435;
		NI TMP1303;
		NI res_166438;
		i_166421 = 0;
		HEX3Atmp_166435 = 0;
		nimln(89, "idents.nim");
		TMP1303 = subInt(length, ((NI) 1));
		HEX3Atmp_166435 = (NI)(TMP1303);
		nimln(1598, "system.nim");
		res_166438 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP1304;
				if (!(res_166438 <= HEX3Atmp_166435)) goto LA24;
				nimln(1600, "system.nim");
				i_166421 = res_166438;
				nimln(89, "idents.nim");
				if ((NU)(i_166421) > (NU)((*result).s->Sup.len)) raiseIndexError();
				(*result).s->data[i_166421] = identifier[i_166421];
				nimln(1614, "system.nim");
				TMP1304 = addInt(res_166438, ((NI) 1));
				res_166438 = (NI)(TMP1304);
			} LA24: ;
		}
	}
	nimln(90, "idents.nim");
	asgnRefNoCycle((void**) (&(*result).next), buckets_166039[(idx)- 0]);
	nimln(91, "idents.nim");
	asgnRefNoCycle((void**) (&buckets_166039[(idx)- 0]), result);
	nimln(92, "idents.nim");
	{
		NI TMP1305;
		if (!(id == ((NI) 0))) goto LA27;
		nimln(93, "idents.nim");
		TMP1305 = addInt(wordcounter_166244, ((NI) 1));
		wordcounter_166244 = (NI)(TMP1305);
		nimln(94, "idents.nim");
		if (wordcounter_166244 == (-2147483647 -1)) raiseOverflow();
		(*result).Sup.id = ((NI32)-(wordcounter_166244));
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

N_NIMCALL(Tident166021*, getident_166463)(NimStringDesc* identifier) {
	Tident166021* result;
	NI LOC1;
	nimfr("getIdent", "idents.nim")
	result = 0;
	nimln(99, "idents.nim");
	nimln(100, "idents.nim");
	LOC1 = 0;
	LOC1 = hashignorestyle_131887(identifier);
	result = getident_166248(identifier->data, (identifier ? identifier->Sup.len : 0), LOC1);
	popFrame();
	return result;
}

N_NIMCALL(Tident166021*, getident_166473)(NimStringDesc* identifier, NI h) {
	Tident166021* result;
	nimfr("getIdent", "idents.nim")
	result = 0;
	nimln(103, "idents.nim");
	result = getident_166248(identifier->data, (identifier ? identifier->Sup.len : 0), h);
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, identeq_166484)(Tident166021* id, NimStringDesc* name) {
	NIM_BOOL result;
	Tident166021* LOC1;
	nimfr("identEq", "idents.nim")
	result = 0;
	nimln(106, "idents.nim");
	LOC1 = 0;
	LOC1 = getident_166463(name);
	result = ((*id).Sup.id == (*LOC1).Sup.id);
	popFrame();
	return result;
}
N_NIMCALL(void, TMP2630)(void* p, NI op) {
	Tidobj166015* a;
	a = (Tidobj166015*)p;
}
NIM_EXTERNC N_NOINLINE(void, compiler_identsInit)(void) {
	nimfr("idents", "idents.nim")
	nimln(28, "idents.nim");
	firstchariscs_166029 = NIM_TRUE;
	nimln(66, "idents.nim");
	wordcounter_166244 = ((NI) 1);
	nimln(108, "idents.nim");
	asgnRefNoCycle((void**) (&idanon_166495), getident_166463(((NimStringDesc*) &TMP1306)));
	nimln(109, "idents.nim");
	asgnRefNoCycle((void**) (&iddelegator_166550), getident_166463(((NimStringDesc*) &TMP1307)));
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_identsDatInit)(void) {
static TNimNode* TMP1301[3];
static TNimNode TMP1288[5];
NTI166015.size = sizeof(Tidobj166015);
NTI166015.kind = 17;
NTI166015.base = (&NTI3411);
NTI166015.flags = 1;
TMP1288[0].kind = 1;
TMP1288[0].offset = offsetof(Tidobj166015, id);
TMP1288[0].typ = (&NTI108);
TMP1288[0].name = "id";
NTI166015.node = &TMP1288[0];
NTI166021.size = sizeof(Tident166021);
NTI166021.kind = 17;
NTI166021.base = (&NTI166015);
NTI166021.flags = 2;
TMP1301[0] = &TMP1288[2];
TMP1288[2].kind = 1;
TMP1288[2].offset = offsetof(Tident166021, s);
TMP1288[2].typ = (&NTI149);
TMP1288[2].name = "s";
TMP1301[1] = &TMP1288[3];
TMP1288[3].kind = 1;
TMP1288[3].offset = offsetof(Tident166021, next);
TMP1288[3].typ = (&NTI166019);
TMP1288[3].name = "next";
TMP1301[2] = &TMP1288[4];
TMP1288[4].kind = 1;
TMP1288[4].offset = offsetof(Tident166021, h);
TMP1288[4].typ = (&NTI131021);
TMP1288[4].name = "h";
TMP1288[1].len = 3; TMP1288[1].kind = 2; TMP1288[1].sons = &TMP1301[0];
NTI166021.node = &TMP1288[1];
NTI166019.size = sizeof(Tident166021*);
NTI166019.kind = 22;
NTI166019.base = (&NTI166021);
NTI166019.flags = 2;
NTI166019.marker = TMP1302;
NTI166017.size = sizeof(Tidobj166015*);
NTI166017.kind = 22;
NTI166017.base = (&NTI166015);
NTI166017.marker = TMP2630;
}

