/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct Tident165021 Tident165021;
typedef struct Tidobj165015 Tidobj165015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tcell46747 Tcell46747;
typedef struct Tcellseq46763 Tcellseq46763;
typedef struct Tgcheap48616 Tgcheap48616;
typedef struct Tcellset46759 Tcellset46759;
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
typedef Tident165021* TY165034[8192];
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
struct  Tidobj165015  {
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
struct  Tident165021  {
  Tidobj165015 Sup;
NimStringDesc* s;
Tident165021* next;
NI h;
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
N_NIMCALL(NI, cmpignorestyle_165044)(NCSTRING a, NCSTRING b, NI blen);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_INLINE(NI, subInt)(NI a, NI b);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NI, cmpexact_165187)(NCSTRING a, NCSTRING b, NI blen);
N_NIMCALL(Tident165021*, getident_165248)(NCSTRING identifier, NI length, NI h);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr);
static N_INLINE(void, rtladdzct_51804)(Tcell46747* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46763* s, Tcell46747* c);
N_NIMCALL(void, failedassertimpl_87017)(NimStringDesc* msg);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1311)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(Tident165021*, getident_165463)(NimStringDesc* identifier);
N_NIMCALL(NI, hashignorestyle_130887)(NimStringDesc* x);
N_NIMCALL(Tident165021*, getident_165473)(NimStringDesc* identifier, NI h);
N_NIMCALL(NIM_BOOL, identeq_165484)(Tident165021* id, NimStringDesc* name);
N_NIMCALL(void, TMP2638)(void* p, NI op);
STRING_LITERAL(TMP1309, "id == 0 or id == result.id ", 27);
STRING_LITERAL(TMP1315, ":anonymous", 10);
STRING_LITERAL(TMP1316, ":delegator", 10);
NIM_BOOL firstchariscs_165029;
TY165034 buckets_165039;
extern TFrame* frameptr_17042;
NI wordcounter_165244;
extern Tgcheap48616 gch_48644;
extern TNimType NTI3411; /* RootObj */
TNimType NTI165015; /* TIdObj */
extern TNimType NTI108; /* int */
TNimType NTI165021; /* TIdent */
extern TNimType NTI149; /* string */
extern TNimType NTI130021; /* THash */
TNimType NTI165019; /* PIdent */
Tident165021* idanon_165495;
Tident165021* iddelegator_165550;
TNimType NTI165017; /* PIdObj */

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

N_NIMCALL(NI, cmpignorestyle_165044)(NCSTRING a, NCSTRING b, NI blen) {
	NI result;
	NI i;
	NI j;
	nimfr("cmpIgnoreStyle", "idents.nim")
{	result = 0;
	nimln(32, "idents.nim");
	{
		if (!firstchariscs_165029) goto LA3;
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
			NI TMP1303;
			NI TMP1304;
			NI TMP1305;
			if (!(j < blen)) goto LA10;
			{
				nimln(38, "idents.nim");
				while (1) {
					NI TMP1299;
					if (!((NU8)(a[i]) == (NU8)(95))) goto LA12;
					TMP1299 = addInt(i, ((NI) 1));
					i = (NI)(TMP1299);
				} LA12: ;
			}
			{
				nimln(39, "idents.nim");
				while (1) {
					NI TMP1300;
					if (!((NU8)(b[j]) == (NU8)(95))) goto LA14;
					TMP1300 = addInt(j, ((NI) 1));
					j = (NI)(TMP1300);
				} LA14: ;
			}
			nimln(41, "idents.nim");
			aa = a[i];
			nimln(42, "idents.nim");
			bb = b[j];
			nimln(43, "idents.nim");
			{
				NIM_BOOL LOC17;
				NI TMP1301;
				LOC17 = 0;
				LOC17 = ((NU8)(65) <= (NU8)(aa));
				if (!(LOC17)) goto LA18;
				LOC17 = ((NU8)(aa) <= (NU8)(90));
				LA18: ;
				if (!LOC17) goto LA19;
				TMP1301 = addInt(((NI) (((NU8)(aa)))), ((NI) 32));
				aa = ((NIM_CHAR) (((NI)chckRange((NI)(TMP1301), ((NI) 0), ((NI) 255)))));
			}
			LA19: ;
			nimln(44, "idents.nim");
			{
				NIM_BOOL LOC23;
				NI TMP1302;
				LOC23 = 0;
				LOC23 = ((NU8)(65) <= (NU8)(bb));
				if (!(LOC23)) goto LA24;
				LOC23 = ((NU8)(bb) <= (NU8)(90));
				LA24: ;
				if (!LOC23) goto LA25;
				TMP1302 = addInt(((NI) (((NU8)(bb)))), ((NI) 32));
				bb = ((NIM_CHAR) (((NI)chckRange((NI)(TMP1302), ((NI) 0), ((NI) 255)))));
			}
			LA25: ;
			nimln(45, "idents.nim");
			TMP1303 = subInt(((NI) (((NU8)(aa)))), ((NI) (((NU8)(bb)))));
			result = (NI)(TMP1303);
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
			TMP1304 = addInt(i, ((NI) 1));
			i = (NI)(TMP1304);
			nimln(48, "idents.nim");
			TMP1305 = addInt(j, ((NI) 1));
			j = (NI)(TMP1305);
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

N_NIMCALL(NI, cmpexact_165187)(NCSTRING a, NCSTRING b, NI blen) {
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
			NI TMP1306;
			NI TMP1307;
			NI TMP1308;
			if (!(j < blen)) goto LA2;
			nimln(57, "idents.nim");
			aa = a[i];
			nimln(58, "idents.nim");
			bb = b[j];
			nimln(59, "idents.nim");
			TMP1306 = subInt(((NI) (((NU8)(aa)))), ((NI) (((NU8)(bb)))));
			result = (NI)(TMP1306);
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
			TMP1307 = addInt(i, ((NI) 1));
			i = (NI)(TMP1307);
			nimln(62, "idents.nim");
			TMP1308 = addInt(j, ((NI) 1));
			j = (NI)(TMP1308);
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

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		Tcell46747* c;
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(252, "gc.nim");
		c = usrtocell_50246(src);
		nimln(169, "gc.nim");
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	nimln(254, "gc.nim");
	{
		Tcell46747* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(255, "gc.nim");
		c = usrtocell_50246((*dest));
		nimln(256, "gc.nim");
		{
			nimln(167, "gc.nim");
			(*c).refcount -= ((NI) 8);
			nimln(168, "gc.nim");
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
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
N_NIMCALL(void, TMP1311)(void* p, NI op) {
	Tident165021* a;
	a = (Tident165021*)p;
	nimGCvisit((void*)(*a).s, op);
	nimGCvisit((void*)(*a).next, op);
}

N_NIMCALL(Tident165021*, getident_165248)(NCSTRING identifier, NI length, NI h) {
	Tident165021* result;
	NI idx;
	Tident165021* last;
	NI id;
	nimfr("getIdent", "idents.nim")
{	result = 0;
	nimln(69, "idents.nim");
	idx = (NI)(h & ((NI) 8191));
	nimln(70, "idents.nim");
	result = buckets_165039[(idx)- 0];
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
				LOC5 = cmpexact_165187((*result).s->data, identifier, length);
				if (!(LOC5 == ((NI) 0))) goto LA6;
				nimln(75, "idents.nim");
				{
					if (!!((last == NIM_NIL))) goto LA10;
					nimln(77, "idents.nim");
					asgnRefNoCycle((void**) (&(*last).next), (*result).next);
					nimln(78, "idents.nim");
					asgnRefNoCycle((void**) (&(*result).next), buckets_165039[(idx)- 0]);
					nimln(79, "idents.nim");
					asgnRefNoCycle((void**) (&buckets_165039[(idx)- 0]), result);
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
				LOC13 = cmpignorestyle_165044((*result).s->data, identifier, length);
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
					failedassertimpl_87017(((NimStringDesc*) &TMP1309));
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
	result = (Tident165021*) newObj((&NTI165019), sizeof(Tident165021));
	(*result).Sup.Sup.m_type = (&NTI165021);
	nimln(87, "idents.nim");
	(*result).h = h;
	nimln(88, "idents.nim");
	asgnRefNoCycle((void**) (&(*result).s), mnewString(((NI)chckRange(length, ((NI) 0), ((NI) IL64(9223372036854775807))))));
	{
		NI i_165421;
		NI HEX3Atmp_165435;
		NI TMP1312;
		NI res_165438;
		i_165421 = 0;
		HEX3Atmp_165435 = 0;
		nimln(89, "idents.nim");
		TMP1312 = subInt(length, ((NI) 1));
		HEX3Atmp_165435 = (NI)(TMP1312);
		nimln(1598, "system.nim");
		res_165438 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP1313;
				if (!(res_165438 <= HEX3Atmp_165435)) goto LA24;
				nimln(1600, "system.nim");
				i_165421 = res_165438;
				nimln(89, "idents.nim");
				if ((NU)(i_165421) > (NU)((*result).s->Sup.len)) raiseIndexError();
				(*result).s->data[i_165421] = identifier[i_165421];
				nimln(1614, "system.nim");
				TMP1313 = addInt(res_165438, ((NI) 1));
				res_165438 = (NI)(TMP1313);
			} LA24: ;
		}
	}
	nimln(90, "idents.nim");
	asgnRefNoCycle((void**) (&(*result).next), buckets_165039[(idx)- 0]);
	nimln(91, "idents.nim");
	asgnRefNoCycle((void**) (&buckets_165039[(idx)- 0]), result);
	nimln(92, "idents.nim");
	{
		NI TMP1314;
		if (!(id == ((NI) 0))) goto LA27;
		nimln(93, "idents.nim");
		TMP1314 = addInt(wordcounter_165244, ((NI) 1));
		wordcounter_165244 = (NI)(TMP1314);
		nimln(94, "idents.nim");
		if (wordcounter_165244 == (IL64(-9223372036854775807) - IL64(1))) raiseOverflow();
		(*result).Sup.id = ((NI64)-(wordcounter_165244));
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

N_NIMCALL(Tident165021*, getident_165463)(NimStringDesc* identifier) {
	Tident165021* result;
	NI LOC1;
	nimfr("getIdent", "idents.nim")
	result = 0;
	nimln(99, "idents.nim");
	nimln(100, "idents.nim");
	LOC1 = 0;
	LOC1 = hashignorestyle_130887(identifier);
	result = getident_165248(identifier->data, (identifier ? identifier->Sup.len : 0), LOC1);
	popFrame();
	return result;
}

N_NIMCALL(Tident165021*, getident_165473)(NimStringDesc* identifier, NI h) {
	Tident165021* result;
	nimfr("getIdent", "idents.nim")
	result = 0;
	nimln(103, "idents.nim");
	result = getident_165248(identifier->data, (identifier ? identifier->Sup.len : 0), h);
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, identeq_165484)(Tident165021* id, NimStringDesc* name) {
	NIM_BOOL result;
	Tident165021* LOC1;
	nimfr("identEq", "idents.nim")
	result = 0;
	nimln(106, "idents.nim");
	LOC1 = 0;
	LOC1 = getident_165463(name);
	result = ((*id).Sup.id == (*LOC1).Sup.id);
	popFrame();
	return result;
}
N_NIMCALL(void, TMP2638)(void* p, NI op) {
	Tidobj165015* a;
	a = (Tidobj165015*)p;
}
NIM_EXTERNC N_NOINLINE(void, compiler_identsInit)(void) {
	nimfr("idents", "idents.nim")
	nimln(28, "idents.nim");
	firstchariscs_165029 = NIM_TRUE;
	nimln(66, "idents.nim");
	wordcounter_165244 = ((NI) 1);
	nimln(108, "idents.nim");
	asgnRefNoCycle((void**) (&idanon_165495), getident_165463(((NimStringDesc*) &TMP1315)));
	nimln(109, "idents.nim");
	asgnRefNoCycle((void**) (&iddelegator_165550), getident_165463(((NimStringDesc*) &TMP1316)));
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_identsDatInit)(void) {
static TNimNode* TMP1310[3];
static TNimNode TMP1297[5];
NTI165015.size = sizeof(Tidobj165015);
NTI165015.kind = 17;
NTI165015.base = (&NTI3411);
NTI165015.flags = 1;
TMP1297[0].kind = 1;
TMP1297[0].offset = offsetof(Tidobj165015, id);
TMP1297[0].typ = (&NTI108);
TMP1297[0].name = "id";
NTI165015.node = &TMP1297[0];
NTI165021.size = sizeof(Tident165021);
NTI165021.kind = 17;
NTI165021.base = (&NTI165015);
NTI165021.flags = 2;
TMP1310[0] = &TMP1297[2];
TMP1297[2].kind = 1;
TMP1297[2].offset = offsetof(Tident165021, s);
TMP1297[2].typ = (&NTI149);
TMP1297[2].name = "s";
TMP1310[1] = &TMP1297[3];
TMP1297[3].kind = 1;
TMP1297[3].offset = offsetof(Tident165021, next);
TMP1297[3].typ = (&NTI165019);
TMP1297[3].name = "next";
TMP1310[2] = &TMP1297[4];
TMP1297[4].kind = 1;
TMP1297[4].offset = offsetof(Tident165021, h);
TMP1297[4].typ = (&NTI130021);
TMP1297[4].name = "h";
TMP1297[1].len = 3; TMP1297[1].kind = 2; TMP1297[1].sons = &TMP1310[0];
NTI165021.node = &TMP1297[1];
NTI165019.size = sizeof(Tident165021*);
NTI165019.kind = 22;
NTI165019.base = (&NTI165021);
NTI165019.flags = 2;
NTI165019.marker = TMP1311;
NTI165017.size = sizeof(Tidobj165015*);
NTI165017.kind = 22;
NTI165017.base = (&NTI165015);
NTI165017.marker = TMP2638;
}

