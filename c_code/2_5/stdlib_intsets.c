/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttrunk188052 Ttrunk188052;
typedef struct Intset188056 Intset188056;
typedef struct Ttrunkseq188054 Ttrunkseq188054;
typedef struct Tcell46746 Tcell46746;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tcellset46758 Tcellset46758;
typedef struct Tgcheap48616 Tgcheap48616;
typedef struct Tcellseq46762 Tcellseq46762;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Intset188056  {
NI counter;
NI max;
Ttrunk188052* head;
Ttrunkseq188054* data;
};
typedef NI TY27820[16];
struct  Ttrunk188052  {
Ttrunk188052* next;
NI key;
TY27820 bits;
};
struct  Tcell46746  {
NI refcount;
TNimType* typ;
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
struct Ttrunkseq188054 {
  TGenericSeq Sup;
  Ttrunk188052* data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, mustrehash_188073)(NI length, NI counter);
N_NIMCALL(void, failedassertimpl_87217)(NimStringDesc* msg);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, nexttry_188207)(NI h, NI maxhash);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(Ttrunk188052*, intsetget_188218)(Intset188056 t, NI key);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, intsetrawinsert_188249)(Intset188056 t, Ttrunkseq188054** data, Ttrunk188052* desc);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52622)(Tcell46746* c);
static N_INLINE(NIM_BOOL, canbecycleroot_50267)(Tcell46746* c);
static N_INLINE(void, rtladdcycleroot_51023)(Tcell46746* c);
N_NOINLINE(void, incl_47465)(Tcellset46758* s, Tcell46746* cell);
static N_INLINE(Tcell46746*, usrtocell_50246)(void* usr);
static N_INLINE(void, decref_52204)(Tcell46746* c);
static N_INLINE(void, rtladdzct_51804)(Tcell46746* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46762* s, Tcell46746* c);
N_NIMCALL(void, intsetenlarge_188614)(Intset188056* t);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP2534)(void* p, NI op);
N_NIMCALL(void, TMP2535)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(Ttrunk188052*, intsetput_188689)(Intset188056* t, NI key);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NIM_BOOL, contains_188829)(Intset188056 s, NI key);
N_NIMCALL(void, incl_188856)(Intset188056* s, NI key);
N_NIMCALL(void, excl_188871)(Intset188056* s, NI key);
N_NIMCALL(NIM_BOOL, containsorincl_188898)(Intset188056* s, NI key);
N_NIMCALL(void, initintset_188927)(Intset188056* Result);
N_NIMCALL(void, assign_188946)(Intset188056* dest, Intset188056 src);
N_NIMCALL(NimStringDesc*, HEX24_189318)(Intset188056 s);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
static N_INLINE(NIM_BOOL, empty_189363)(Intset188056 s);
STRING_LITERAL(TMP2521, "counter < length ", 17);
STRING_LITERAL(TMP2527, "not (data[h] == desc) ", 22);
STRING_LITERAL(TMP2528, "data[h] == nil ", 15);
STRING_LITERAL(TMP2539, "t.data[h] == nil ", 17);
STRING_LITERAL(TMP2540, "dest.data[h] == nil ", 20);
STRING_LITERAL(TMP2541, "{", 1);
STRING_LITERAL(TMP2542, ", ", 2);
STRING_LITERAL(TMP2545, "}", 1);
extern TFrame* frameptr_17042;
extern Tgcheap48616 gch_48644;
TNimType NTI188052; /* TTrunk */
extern TNimType NTI108; /* int */
extern TNimType NTI27820; /* array[0..15, int] */
TNimType NTI188050; /* PTrunk */
TNimType NTI188054; /* TTrunkSeq */
TNimType NTI188056; /* IntSet */

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

static N_INLINE(NIM_BOOL, mustrehash_188073)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC5;
	NI TMP2522;
	NI TMP2523;
	NI TMP2524;
	nimfr("mustRehash", "intsets.nim")
	result = 0;
	nimln(48, "intsets.nim");
	{
		if (!!((counter < length))) goto LA3;
		failedassertimpl_87217(((NimStringDesc*) &TMP2521));
	}
	LA3: ;
	nimln(49, "intsets.nim");
	LOC5 = 0;
	TMP2522 = mulInt(length, ((NI) 2));
	TMP2523 = mulInt(counter, ((NI) 3));
	LOC5 = ((NI)(TMP2522) < (NI)(TMP2523));
	if (LOC5) goto LA6;
	TMP2524 = subInt(length, counter);
	LOC5 = ((NI)(TMP2524) < ((NI) 4));
	LA6: ;
	result = LOC5;
	popFrame();
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

static N_INLINE(NI, nexttry_188207)(NI h, NI maxhash) {
	NI result;
	NI TMP2525;
	NI TMP2526;
	nimfr("nextTry", "intsets.nim")
	result = 0;
	nimln(52, "intsets.nim");
	TMP2525 = mulInt(((NI) 5), h);
	TMP2526 = addInt((NI)(TMP2525), ((NI) 1));
	result = (NI)((NI)(TMP2526) & maxhash);
	popFrame();
	return result;
}

N_NIMCALL(Ttrunk188052*, intsetget_188218)(Intset188056 t, NI key) {
	Ttrunk188052* result;
	NI h;
	nimfr("intSetGet", "intsets.nim")
{	result = 0;
	nimln(55, "intsets.nim");
	h = (NI)(key & t.max);
	{
		nimln(56, "intsets.nim");
		while (1) {
			if ((NU)(h) >= (NU)(t.data->Sup.len)) raiseIndexError();
			if (!!((t.data->data[h] == NIM_NIL))) goto LA2;
			nimln(57, "intsets.nim");
			{
				if ((NU)(h) >= (NU)(t.data->Sup.len)) raiseIndexError();
				if (!((*t.data->data[h]).key == key)) goto LA5;
				nimln(58, "intsets.nim");
				if ((NU)(h) >= (NU)(t.data->Sup.len)) raiseIndexError();
				result = t.data->data[h];
				goto BeforeRet;
			}
			LA5: ;
			nimln(59, "intsets.nim");
			h = nexttry_188207(h, t.max);
		} LA2: ;
	}
	nimln(60, "intsets.nim");
	result = NIM_NIL;
	}BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_50267)(Tcell46746* c) {
	NIM_BOOL result;
	nimfr("canBeCycleRoot", "gc.nim")
	result = 0;
	nimln(121, "gc.nim");
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdcycleroot_51023)(Tcell46746* c) {
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

static N_INLINE(void, incref_52622)(Tcell46746* c) {
	nimfr("incRef", "gc.nim")
	nimln(216, "gc.nim");
	(*c).refcount = (NI)((NU32)((*c).refcount) + (NU32)(((NI) 8)));
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

static N_INLINE(void, decref_52204)(Tcell46746* c) {
	nimfr("decRef", "gc.nim")
	nimln(206, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).refcount -= ((NI) 8);
		nimln(168, "gc.nim");
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
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
		Tcell46746* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_50246(src);
		incref_52622(LOC5);
	}
	LA3: ;
	nimln(245, "gc.nim");
	{
		Tcell46746* LOC10;
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

N_NIMCALL(void, intsetrawinsert_188249)(Intset188056 t, Ttrunkseq188054** data, Ttrunk188052* desc) {
	NI h;
	nimfr("intSetRawInsert", "intsets.nim")
	nimln(63, "intsets.nim");
	h = (NI)((*desc).key & t.max);
	{
		nimln(64, "intsets.nim");
		while (1) {
			if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
			if (!!(((*data)->data[h] == NIM_NIL))) goto LA2;
			nimln(65, "intsets.nim");
			{
				if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
				if (!!(!(((*data)->data[h] == desc)))) goto LA5;
				failedassertimpl_87217(((NimStringDesc*) &TMP2527));
			}
			LA5: ;
			nimln(66, "intsets.nim");
			h = nexttry_188207(h, t.max);
		} LA2: ;
	}
	nimln(67, "intsets.nim");
	{
		if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
		if (!!(((*data)->data[h] == NIM_NIL))) goto LA9;
		failedassertimpl_87217(((NimStringDesc*) &TMP2528));
	}
	LA9: ;
	nimln(68, "intsets.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	asgnRef((void**) (&(*data)->data[h]), desc);
	popFrame();
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
N_NIMCALL(void, TMP2534)(void* p, NI op) {
	Ttrunk188052* a;
	NI LOC1;
	a = (Ttrunk188052*)p;
	nimGCvisit((void*)(*a).next, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 16; LOC1++) {
	}
}
N_NIMCALL(void, TMP2535)(void* p, NI op) {
	Ttrunkseq188054* a;
	NI LOC1;
	a = (Ttrunkseq188054*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

N_NIMCALL(void, intsetenlarge_188614)(Intset188056* t) {
	Ttrunkseq188054* n;
	NI oldmax;
	NI TMP2529;
	NI TMP2530;
	NI TMP2531;
	NI TMP2532;
	Ttrunkseq188054* LOC8;
	nimfr("intSetEnlarge", "intsets.nim")
	n = 0;
	nimln(72, "intsets.nim");
	oldmax = (*t).max;
	nimln(73, "intsets.nim");
	TMP2529 = addInt((*t).max, ((NI) 1));
	TMP2530 = mulInt((NI)(TMP2529), ((NI) 2));
	TMP2531 = subInt((NI)(TMP2530), ((NI) 1));
	(*t).max = (NI)(TMP2531);
	nimln(74, "intsets.nim");
	TMP2532 = addInt((*t).max, ((NI) 1));
	n = (Ttrunkseq188054*) newSeq((&NTI188054), ((NI)chckRange((NI)(TMP2532), ((NI) 0), ((NI) 2147483647))));
	{
		NI i_188642;
		NI res_188670;
		i_188642 = 0;
		nimln(1598, "system.nim");
		res_188670 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP2536;
				if (!(res_188670 <= oldmax)) goto LA3;
				nimln(1600, "system.nim");
				i_188642 = res_188670;
				nimln(76, "intsets.nim");
				{
					if ((NU)(i_188642) >= (NU)((*t).data->Sup.len)) raiseIndexError();
					if (!!(((*t).data->data[i_188642] == NIM_NIL))) goto LA6;
					if ((NU)(i_188642) >= (NU)((*t).data->Sup.len)) raiseIndexError();
					intsetrawinsert_188249((*t), (&n), (*t).data->data[i_188642]);
				}
				LA6: ;
				nimln(1614, "system.nim");
				TMP2536 = addInt(res_188670, ((NI) 1));
				res_188670 = (NI)(TMP2536);
			} LA3: ;
		}
	}
	nimln(77, "intsets.nim");
	LOC8 = 0;
	LOC8 = (*t).data;
	unsureAsgnRef((void**) (&(*t).data), n);
	n = LOC8;
	popFrame();
}

N_NIMCALL(Ttrunk188052*, intsetput_188689)(Intset188056* t, NI key) {
	Ttrunk188052* result;
	NI h;
	NI TMP2538;
	nimfr("intSetPut", "intsets.nim")
{	result = 0;
	nimln(80, "intsets.nim");
	h = (NI)(key & (*t).max);
	{
		nimln(81, "intsets.nim");
		while (1) {
			if ((NU)(h) >= (NU)((*t).data->Sup.len)) raiseIndexError();
			if (!!(((*t).data->data[h] == NIM_NIL))) goto LA2;
			nimln(82, "intsets.nim");
			{
				if ((NU)(h) >= (NU)((*t).data->Sup.len)) raiseIndexError();
				if (!((*(*t).data->data[h]).key == key)) goto LA5;
				nimln(83, "intsets.nim");
				if ((NU)(h) >= (NU)((*t).data->Sup.len)) raiseIndexError();
				result = (*t).data->data[h];
				goto BeforeRet;
			}
			LA5: ;
			nimln(84, "intsets.nim");
			h = nexttry_188207(h, (*t).max);
		} LA2: ;
	}
	nimln(85, "intsets.nim");
	{
		NI TMP2537;
		NIM_BOOL LOC9;
		TMP2537 = addInt((*t).max, ((NI) 1));
		LOC9 = 0;
		LOC9 = mustrehash_188073((NI)(TMP2537), (*t).counter);
		if (!LOC9) goto LA10;
		intsetenlarge_188614(t);
	}
	LA10: ;
	nimln(86, "intsets.nim");
	TMP2538 = addInt((*t).counter, ((NI) 1));
	(*t).counter = (NI)(TMP2538);
	nimln(87, "intsets.nim");
	h = (NI)(key & (*t).max);
	{
		nimln(88, "intsets.nim");
		while (1) {
			if ((NU)(h) >= (NU)((*t).data->Sup.len)) raiseIndexError();
			if (!!(((*t).data->data[h] == NIM_NIL))) goto LA13;
			h = nexttry_188207(h, (*t).max);
		} LA13: ;
	}
	nimln(89, "intsets.nim");
	{
		if ((NU)(h) >= (NU)((*t).data->Sup.len)) raiseIndexError();
		if (!!(((*t).data->data[h] == NIM_NIL))) goto LA16;
		failedassertimpl_87217(((NimStringDesc*) &TMP2539));
	}
	LA16: ;
	nimln(90, "intsets.nim");
	result = (Ttrunk188052*) newObj((&NTI188050), sizeof(Ttrunk188052));
	nimln(91, "intsets.nim");
	asgnRef((void**) (&(*result).next), (*t).head);
	nimln(92, "intsets.nim");
	(*result).key = key;
	nimln(93, "intsets.nim");
	unsureAsgnRef((void**) (&(*t).head), result);
	nimln(94, "intsets.nim");
	if ((NU)(h) >= (NU)((*t).data->Sup.len)) raiseIndexError();
	asgnRef((void**) (&(*t).data->data[h]), result);
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, contains_188829)(Intset188056 s, NI key) {
	NIM_BOOL result;
	Ttrunk188052* t;
	nimfr("contains", "intsets.nim")
	result = 0;
	nimln(98, "intsets.nim");
	t = intsetget_188218(s, (NI)((NU32)(key) >> (NU32)(((NI) 9))));
	nimln(99, "intsets.nim");
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3;
		nimln(100, "intsets.nim");
		u = (NI)(key & ((NI) 511));
		nimln(101, "intsets.nim");
		if ((NU)((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5)))) > (NU)(15)) raiseIndexError();
		result = !(((NI)((*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] & (NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI)(((NI) (u)) & ((NI) 31))))))) == ((NI) 0)));
	}
	goto LA1;
	LA3: ;
	{
		nimln(103, "intsets.nim");
		result = NIM_FALSE;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, incl_188856)(Intset188056* s, NI key) {
	Ttrunk188052* t;
	NI u;
	nimfr("incl", "intsets.nim")
	nimln(107, "intsets.nim");
	t = intsetput_188689(s, (NI)((NU32)(key) >> (NU32)(((NI) 9))));
	nimln(108, "intsets.nim");
	u = (NI)(key & ((NI) 511));
	nimln(109, "intsets.nim");
	if ((NU)((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5)))) > (NU)(15)) raiseIndexError();
	if ((NU)((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5)))) > (NU)(15)) raiseIndexError();
	nimln(110, "intsets.nim");
	(*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] = (NI)((*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] | (NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI)(((NI) (u)) & ((NI) 31)))))));
	popFrame();
}

N_NIMCALL(void, excl_188871)(Intset188056* s, NI key) {
	Ttrunk188052* t;
	nimfr("excl", "intsets.nim")
	nimln(114, "intsets.nim");
	t = intsetget_188218((*s), (NI)((NU32)(key) >> (NU32)(((NI) 9))));
	nimln(115, "intsets.nim");
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3;
		nimln(116, "intsets.nim");
		u = (NI)(key & ((NI) 511));
		nimln(117, "intsets.nim");
		if ((NU)((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5)))) > (NU)(15)) raiseIndexError();
		if ((NU)((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5)))) > (NU)(15)) raiseIndexError();
		nimln(118, "intsets.nim");
		(*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] = (NI)((*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] & (NI)((NU32) ~((NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI)(((NI) (u)) & ((NI) 31)))))))));
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(NIM_BOOL, containsorincl_188898)(Intset188056* s, NI key) {
	NIM_BOOL result;
	Ttrunk188052* t;
	nimfr("containsOrIncl", "intsets.nim")
	result = 0;
	nimln(123, "intsets.nim");
	t = intsetget_188218((*s), (NI)((NU32)(key) >> (NU32)(((NI) 9))));
	nimln(124, "intsets.nim");
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3;
		nimln(125, "intsets.nim");
		u = (NI)(key & ((NI) 511));
		nimln(126, "intsets.nim");
		if ((NU)((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5)))) > (NU)(15)) raiseIndexError();
		result = !(((NI)((*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] & (NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI)(((NI) (u)) & ((NI) 31))))))) == ((NI) 0)));
		nimln(127, "intsets.nim");
		{
			if (!!(result)) goto LA7;
			nimln(128, "intsets.nim");
			if ((NU)((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5)))) > (NU)(15)) raiseIndexError();
			if ((NU)((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5)))) > (NU)(15)) raiseIndexError();
			nimln(129, "intsets.nim");
			(*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] = (NI)((*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] | (NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI)(((NI) (u)) & ((NI) 31)))))));
		}
		LA7: ;
	}
	goto LA1;
	LA3: ;
	{
		nimln(131, "intsets.nim");
		incl_188856(s, key);
		nimln(132, "intsets.nim");
		result = NIM_FALSE;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, initintset_188927)(Intset188056* Result) {
	nimfr("initIntSet", "intsets.nim")
	nimln(136, "intsets.nim");
	unsureAsgnRef((void**) (&(*Result).data), (Ttrunkseq188054*) newSeq((&NTI188054), ((NI) 8)));
	nimln(137, "intsets.nim");
	(*Result).max = ((NI) 7);
	nimln(138, "intsets.nim");
	(*Result).counter = ((NI) 0);
	nimln(139, "intsets.nim");
	unsureAsgnRef((void**) (&(*Result).head), NIM_NIL);
	popFrame();
}

N_NIMCALL(void, assign_188946)(Intset188056* dest, Intset188056 src) {
	Ttrunk188052* it;
	nimfr("assign", "intsets.nim")
	nimln(144, "intsets.nim");
	(*dest).counter = src.counter;
	nimln(145, "intsets.nim");
	(*dest).max = src.max;
	nimln(146, "intsets.nim");
	unsureAsgnRef((void**) (&(*dest).data), (Ttrunkseq188054*) newSeq((&NTI188054), ((NI)chckRange((src.data ? src.data->Sup.len : 0), ((NI) 0), ((NI) 2147483647)))));
	nimln(148, "intsets.nim");
	it = src.head;
	{
		nimln(149, "intsets.nim");
		while (1) {
			NI h;
			Ttrunk188052* n;
			if (!!((it == NIM_NIL))) goto LA2;
			nimln(151, "intsets.nim");
			h = (NI)((*it).key & (*dest).max);
			{
				nimln(152, "intsets.nim");
				while (1) {
					if ((NU)(h) >= (NU)((*dest).data->Sup.len)) raiseIndexError();
					if (!!(((*dest).data->data[h] == NIM_NIL))) goto LA4;
					h = nexttry_188207(h, (*dest).max);
				} LA4: ;
			}
			nimln(153, "intsets.nim");
			{
				if ((NU)(h) >= (NU)((*dest).data->Sup.len)) raiseIndexError();
				if (!!(((*dest).data->data[h] == NIM_NIL))) goto LA7;
				failedassertimpl_87217(((NimStringDesc*) &TMP2540));
			}
			LA7: ;
			n = 0;
			nimln(156, "intsets.nim");
			n = (Ttrunk188052*) newObj((&NTI188050), sizeof(Ttrunk188052));
			nimln(157, "intsets.nim");
			asgnRef((void**) (&(*n).next), (*dest).head);
			nimln(158, "intsets.nim");
			(*n).key = (*it).key;
			nimln(159, "intsets.nim");
			memcpy((void*)(*n).bits, (NIM_CONST void*)(*it).bits, sizeof((*n).bits));
			nimln(160, "intsets.nim");
			unsureAsgnRef((void**) (&(*dest).head), n);
			nimln(161, "intsets.nim");
			if ((NU)(h) >= (NU)((*dest).data->Sup.len)) raiseIndexError();
			asgnRef((void**) (&(*dest).data->data[h]), n);
			nimln(163, "intsets.nim");
			it = (*it).next;
		} LA2: ;
	}
	popFrame();
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, HEX24_189318)(Intset188056 s) {
	NimStringDesc* result;
	nimfr("$", "intsets.nim")
	result = 0;
	nimln(184, "intsets.nim");
	result = copyString(((NimStringDesc*) &TMP2541));
	{
		NI key_189323;
		Ttrunk188052* r_189329;
		key_189323 = 0;
		nimln(167, "intsets.nim");
		r_189329 = s.head;
		{
			nimln(168, "intsets.nim");
			while (1) {
				NI i_189331;
				if (!!((r_189329 == NIM_NIL))) goto LA3;
				nimln(169, "intsets.nim");
				i_189331 = ((NI) 0);
				{
					nimln(170, "intsets.nim");
					while (1) {
						NI w_189333;
						NI j_189335;
						NI TMP2544;
						if (!(i_189331 <= ((NI) 15))) goto LA5;
						nimln(171, "intsets.nim");
						if ((NU)(i_189331) > (NU)(15)) raiseIndexError();
						w_189333 = (*r_189329).bits[(i_189331)- 0];
						nimln(174, "intsets.nim");
						j_189335 = ((NI) 0);
						{
							nimln(175, "intsets.nim");
							while (1) {
								NI TMP2543;
								if (!!((w_189333 == ((NI) 0)))) goto LA7;
								nimln(176, "intsets.nim");
								{
									NimStringDesc* LOC16;
									if (!!((((NI) ((NI)(w_189333 & ((NI) 1)))) == ((NI) 0)))) goto LA10;
									nimln(177, "intsets.nim");
									key_189323 = (NI)((NI)((NU32)((*r_189329).key) << (NU32)(((NI) 9))) | (NI)((NU32)((NI)((NU32)(i_189331) << (NU32)(((NI) 5)))) + (NU32)(j_189335)));
									nimln(186, "intsets.nim");
									{
										if (!(((NI) 1) < (result ? result->Sup.len : 0))) goto LA14;
										result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TMP2542));
									}
									LA14: ;
									nimln(187, "intsets.nim");
									LOC16 = 0;
									LOC16 = nimIntToStr(key_189323);
									result = resizeString(result, LOC16->Sup.len + 0);
appendString(result, LOC16);
								}
								LA10: ;
								nimln(178, "intsets.nim");
								TMP2543 = addInt(j_189335, ((NI) 1));
								j_189335 = (NI)(TMP2543);
								nimln(179, "intsets.nim");
								w_189333 = (NI)((NU32)(w_189333) >> (NU32)(((NI) 1)));
							} LA7: ;
						}
						nimln(180, "intsets.nim");
						TMP2544 = addInt(i_189331, ((NI) 1));
						i_189331 = (NI)(TMP2544);
					} LA5: ;
				}
				nimln(181, "intsets.nim");
				r_189329 = (*r_189329).next;
			} LA3: ;
		}
	}
	nimln(188, "intsets.nim");
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP2545));
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, empty_189363)(Intset188056 s) {
	NIM_BOOL result;
	nimfr("empty", "intsets.nim")
	result = 0;
	nimln(198, "intsets.nim");
	result = (s.counter == ((NI) 0));
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsInit)(void) {
	nimfr("intsets", "intsets.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsDatInit)(void) {
static TNimNode* TMP2533[3];
static TNimNode* TMP4208[4];
static TNimNode TMP2519[9];
NTI188052.size = sizeof(Ttrunk188052);
NTI188052.kind = 18;
NTI188052.base = 0;
TMP2533[0] = &TMP2519[1];
TMP2519[1].kind = 1;
TMP2519[1].offset = offsetof(Ttrunk188052, next);
TMP2519[1].typ = (&NTI188050);
TMP2519[1].name = "next";
TMP2533[1] = &TMP2519[2];
TMP2519[2].kind = 1;
TMP2519[2].offset = offsetof(Ttrunk188052, key);
TMP2519[2].typ = (&NTI108);
TMP2519[2].name = "key";
TMP2533[2] = &TMP2519[3];
TMP2519[3].kind = 1;
TMP2519[3].offset = offsetof(Ttrunk188052, bits);
TMP2519[3].typ = (&NTI27820);
TMP2519[3].name = "bits";
TMP2519[0].len = 3; TMP2519[0].kind = 2; TMP2519[0].sons = &TMP2533[0];
NTI188052.node = &TMP2519[0];
NTI188050.size = sizeof(Ttrunk188052*);
NTI188050.kind = 22;
NTI188050.base = (&NTI188052);
NTI188050.marker = TMP2534;
NTI188054.size = sizeof(Ttrunkseq188054*);
NTI188054.kind = 24;
NTI188054.base = (&NTI188050);
NTI188054.flags = 2;
NTI188054.marker = TMP2535;
NTI188056.size = sizeof(Intset188056);
NTI188056.kind = 18;
NTI188056.base = 0;
NTI188056.flags = 2;
TMP4208[0] = &TMP2519[5];
TMP2519[5].kind = 1;
TMP2519[5].offset = offsetof(Intset188056, counter);
TMP2519[5].typ = (&NTI108);
TMP2519[5].name = "counter";
TMP4208[1] = &TMP2519[6];
TMP2519[6].kind = 1;
TMP2519[6].offset = offsetof(Intset188056, max);
TMP2519[6].typ = (&NTI108);
TMP2519[6].name = "max";
TMP4208[2] = &TMP2519[7];
TMP2519[7].kind = 1;
TMP2519[7].offset = offsetof(Intset188056, head);
TMP2519[7].typ = (&NTI188050);
TMP2519[7].name = "head";
TMP4208[3] = &TMP2519[8];
TMP2519[8].kind = 1;
TMP2519[8].offset = offsetof(Intset188056, data);
TMP2519[8].typ = (&NTI188054);
TMP2519[8].name = "data";
TMP2519[4].len = 4; TMP2519[4].kind = 2; TMP2519[4].sons = &TMP4208[0];
NTI188056.node = &TMP2519[4];
}

