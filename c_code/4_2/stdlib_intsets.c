/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttrunk187052 Ttrunk187052;
typedef struct Intset187056 Intset187056;
typedef struct Ttrunkseq187054 Ttrunkseq187054;
typedef struct Tcell46747 Tcell46747;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
struct  Intset187056  {
NI counter;
NI max;
Ttrunk187052* head;
Ttrunkseq187054* data;
};
typedef NI TY27820[8];
struct  Ttrunk187052  {
Ttrunk187052* next;
NI key;
TY27820 bits;
};
struct  Tcell46747  {
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
struct Ttrunkseq187054 {
  TGenericSeq Sup;
  Ttrunk187052* data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, mustrehash_187073)(NI length, NI counter);
N_NIMCALL(void, failedassertimpl_87017)(NimStringDesc* msg);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, nexttry_187207)(NI h, NI maxhash);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(Ttrunk187052*, intsetget_187218)(Intset187056* t, NI key);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, intsetrawinsert_187249)(Intset187056* t, Ttrunkseq187054** data, Ttrunk187052* desc);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52622)(Tcell46747* c);
static N_INLINE(NIM_BOOL, canbecycleroot_50267)(Tcell46747* c);
static N_INLINE(void, rtladdcycleroot_51023)(Tcell46747* c);
N_NOINLINE(void, incl_47465)(Tcellset46759* s, Tcell46747* cell);
static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr);
static N_INLINE(void, decref_52204)(Tcell46747* c);
static N_INLINE(void, rtladdzct_51804)(Tcell46747* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46763* s, Tcell46747* c);
N_NIMCALL(void, intsetenlarge_187614)(Intset187056* t);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP2529)(void* p, NI op);
N_NIMCALL(void, TMP2530)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(Ttrunk187052*, intsetput_187689)(Intset187056* t, NI key);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NIM_BOOL, contains_187829)(Intset187056* s, NI key);
N_NIMCALL(void, incl_187856)(Intset187056* s, NI key);
N_NIMCALL(void, excl_187871)(Intset187056* s, NI key);
N_NIMCALL(NIM_BOOL, containsorincl_187898)(Intset187056* s, NI key);
N_NIMCALL(void, initintset_187927)(Intset187056* Result);
N_NIMCALL(void, assign_187946)(Intset187056* dest, Intset187056* src);
N_NIMCALL(NimStringDesc*, HEX24_188318)(Intset187056* s);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
static N_INLINE(NIM_BOOL, empty_188363)(Intset187056* s);
STRING_LITERAL(TMP2516, "counter < length ", 17);
STRING_LITERAL(TMP2522, "not (data[h] == desc) ", 22);
STRING_LITERAL(TMP2523, "data[h] == nil ", 15);
STRING_LITERAL(TMP2534, "t.data[h] == nil ", 17);
STRING_LITERAL(TMP2535, "dest.data[h] == nil ", 20);
STRING_LITERAL(TMP2536, "{", 1);
STRING_LITERAL(TMP2537, ", ", 2);
STRING_LITERAL(TMP2540, "}", 1);
extern TFrame* frameptr_17042;
extern Tgcheap48616 gch_48644;
TNimType NTI187052; /* TTrunk */
extern TNimType NTI108; /* int */
extern TNimType NTI27820; /* array[0..7, int] */
TNimType NTI187050; /* PTrunk */
TNimType NTI187054; /* TTrunkSeq */
TNimType NTI187056; /* IntSet */

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

static N_INLINE(NIM_BOOL, mustrehash_187073)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC5;
	NI TMP2517;
	NI TMP2518;
	NI TMP2519;
	nimfr("mustRehash", "intsets.nim")
	result = 0;
	nimln(48, "intsets.nim");
	{
		if (!!((counter < length))) goto LA3;
		failedassertimpl_87017(((NimStringDesc*) &TMP2516));
	}
	LA3: ;
	nimln(49, "intsets.nim");
	LOC5 = 0;
	TMP2517 = mulInt(length, ((NI) 2));
	TMP2518 = mulInt(counter, ((NI) 3));
	LOC5 = ((NI)(TMP2517) < (NI)(TMP2518));
	if (LOC5) goto LA6;
	TMP2519 = subInt(length, counter);
	LOC5 = ((NI)(TMP2519) < ((NI) 4));
	LA6: ;
	result = LOC5;
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

static N_INLINE(NI, nexttry_187207)(NI h, NI maxhash) {
	NI result;
	NI TMP2520;
	NI TMP2521;
	nimfr("nextTry", "intsets.nim")
	result = 0;
	nimln(52, "intsets.nim");
	TMP2520 = mulInt(((NI) 5), h);
	TMP2521 = addInt((NI)(TMP2520), ((NI) 1));
	result = (NI)((NI)(TMP2521) & maxhash);
	popFrame();
	return result;
}

N_NIMCALL(Ttrunk187052*, intsetget_187218)(Intset187056* t, NI key) {
	Ttrunk187052* result;
	NI h;
	nimfr("intSetGet", "intsets.nim")
{	result = 0;
	nimln(55, "intsets.nim");
	h = (NI)(key & (*t).max);
	{
		nimln(56, "intsets.nim");
		while (1) {
			if ((NU)(h) >= (NU)((*t).data->Sup.len)) raiseIndexError();
			if (!!(((*t).data->data[h] == NIM_NIL))) goto LA2;
			nimln(57, "intsets.nim");
			{
				if ((NU)(h) >= (NU)((*t).data->Sup.len)) raiseIndexError();
				if (!((*(*t).data->data[h]).key == key)) goto LA5;
				nimln(58, "intsets.nim");
				if ((NU)(h) >= (NU)((*t).data->Sup.len)) raiseIndexError();
				result = (*t).data->data[h];
				goto BeforeRet;
			}
			LA5: ;
			nimln(59, "intsets.nim");
			h = nexttry_187207(h, (*t).max);
		} LA2: ;
	}
	nimln(60, "intsets.nim");
	result = NIM_NIL;
	}BeforeRet: ;
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

N_NIMCALL(void, intsetrawinsert_187249)(Intset187056* t, Ttrunkseq187054** data, Ttrunk187052* desc) {
	NI h;
	nimfr("intSetRawInsert", "intsets.nim")
	nimln(63, "intsets.nim");
	h = (NI)((*desc).key & (*t).max);
	{
		nimln(64, "intsets.nim");
		while (1) {
			if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
			if (!!(((*data)->data[h] == NIM_NIL))) goto LA2;
			nimln(65, "intsets.nim");
			{
				if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
				if (!!(!(((*data)->data[h] == desc)))) goto LA5;
				failedassertimpl_87017(((NimStringDesc*) &TMP2522));
			}
			LA5: ;
			nimln(66, "intsets.nim");
			h = nexttry_187207(h, (*t).max);
		} LA2: ;
	}
	nimln(67, "intsets.nim");
	{
		if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
		if (!!(((*data)->data[h] == NIM_NIL))) goto LA9;
		failedassertimpl_87017(((NimStringDesc*) &TMP2523));
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
N_NIMCALL(void, TMP2529)(void* p, NI op) {
	Ttrunk187052* a;
	NI LOC1;
	a = (Ttrunk187052*)p;
	nimGCvisit((void*)(*a).next, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 8; LOC1++) {
	}
}
N_NIMCALL(void, TMP2530)(void* p, NI op) {
	Ttrunkseq187054* a;
	NI LOC1;
	a = (Ttrunkseq187054*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

N_NIMCALL(void, intsetenlarge_187614)(Intset187056* t) {
	Ttrunkseq187054* n;
	NI oldmax;
	NI TMP2524;
	NI TMP2525;
	NI TMP2526;
	NI TMP2527;
	Ttrunkseq187054* LOC8;
	nimfr("intSetEnlarge", "intsets.nim")
	n = 0;
	nimln(72, "intsets.nim");
	oldmax = (*t).max;
	nimln(73, "intsets.nim");
	TMP2524 = addInt((*t).max, ((NI) 1));
	TMP2525 = mulInt((NI)(TMP2524), ((NI) 2));
	TMP2526 = subInt((NI)(TMP2525), ((NI) 1));
	(*t).max = (NI)(TMP2526);
	nimln(74, "intsets.nim");
	TMP2527 = addInt((*t).max, ((NI) 1));
	n = (Ttrunkseq187054*) newSeq((&NTI187054), ((NI)chckRange((NI)(TMP2527), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	{
		NI i_187642;
		NI res_187670;
		i_187642 = 0;
		nimln(1598, "system.nim");
		res_187670 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP2531;
				if (!(res_187670 <= oldmax)) goto LA3;
				nimln(1600, "system.nim");
				i_187642 = res_187670;
				nimln(76, "intsets.nim");
				{
					if ((NU)(i_187642) >= (NU)((*t).data->Sup.len)) raiseIndexError();
					if (!!(((*t).data->data[i_187642] == NIM_NIL))) goto LA6;
					if ((NU)(i_187642) >= (NU)((*t).data->Sup.len)) raiseIndexError();
					intsetrawinsert_187249((&(*t)), (&n), (*t).data->data[i_187642]);
				}
				LA6: ;
				nimln(1614, "system.nim");
				TMP2531 = addInt(res_187670, ((NI) 1));
				res_187670 = (NI)(TMP2531);
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

N_NIMCALL(Ttrunk187052*, intsetput_187689)(Intset187056* t, NI key) {
	Ttrunk187052* result;
	NI h;
	NI TMP2533;
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
			h = nexttry_187207(h, (*t).max);
		} LA2: ;
	}
	nimln(85, "intsets.nim");
	{
		NI TMP2532;
		NIM_BOOL LOC9;
		TMP2532 = addInt((*t).max, ((NI) 1));
		LOC9 = 0;
		LOC9 = mustrehash_187073((NI)(TMP2532), (*t).counter);
		if (!LOC9) goto LA10;
		intsetenlarge_187614(t);
	}
	LA10: ;
	nimln(86, "intsets.nim");
	TMP2533 = addInt((*t).counter, ((NI) 1));
	(*t).counter = (NI)(TMP2533);
	nimln(87, "intsets.nim");
	h = (NI)(key & (*t).max);
	{
		nimln(88, "intsets.nim");
		while (1) {
			if ((NU)(h) >= (NU)((*t).data->Sup.len)) raiseIndexError();
			if (!!(((*t).data->data[h] == NIM_NIL))) goto LA13;
			h = nexttry_187207(h, (*t).max);
		} LA13: ;
	}
	nimln(89, "intsets.nim");
	{
		if ((NU)(h) >= (NU)((*t).data->Sup.len)) raiseIndexError();
		if (!!(((*t).data->data[h] == NIM_NIL))) goto LA16;
		failedassertimpl_87017(((NimStringDesc*) &TMP2534));
	}
	LA16: ;
	nimln(90, "intsets.nim");
	result = (Ttrunk187052*) newObj((&NTI187050), sizeof(Ttrunk187052));
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

N_NIMCALL(NIM_BOOL, contains_187829)(Intset187056* s, NI key) {
	NIM_BOOL result;
	Ttrunk187052* t;
	nimfr("contains", "intsets.nim")
	result = 0;
	nimln(98, "intsets.nim");
	t = intsetget_187218(s, (NI)((NU64)(key) >> (NU64)(((NI) 9))));
	nimln(99, "intsets.nim");
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3;
		nimln(100, "intsets.nim");
		u = (NI)(key & ((NI) 511));
		nimln(101, "intsets.nim");
		if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6)))) > (NU)(7)) raiseIndexError();
		result = !(((NI)((*t).bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] & (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u)) & ((NI) 63))))))) == ((NI) 0)));
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

N_NIMCALL(void, incl_187856)(Intset187056* s, NI key) {
	Ttrunk187052* t;
	NI u;
	nimfr("incl", "intsets.nim")
	nimln(107, "intsets.nim");
	t = intsetput_187689(s, (NI)((NU64)(key) >> (NU64)(((NI) 9))));
	nimln(108, "intsets.nim");
	u = (NI)(key & ((NI) 511));
	nimln(109, "intsets.nim");
	if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6)))) > (NU)(7)) raiseIndexError();
	if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6)))) > (NU)(7)) raiseIndexError();
	nimln(110, "intsets.nim");
	(*t).bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] = (NI)((*t).bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] | (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u)) & ((NI) 63)))))));
	popFrame();
}

N_NIMCALL(void, excl_187871)(Intset187056* s, NI key) {
	Ttrunk187052* t;
	nimfr("excl", "intsets.nim")
	nimln(114, "intsets.nim");
	t = intsetget_187218((&(*s)), (NI)((NU64)(key) >> (NU64)(((NI) 9))));
	nimln(115, "intsets.nim");
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3;
		nimln(116, "intsets.nim");
		u = (NI)(key & ((NI) 511));
		nimln(117, "intsets.nim");
		if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6)))) > (NU)(7)) raiseIndexError();
		if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6)))) > (NU)(7)) raiseIndexError();
		nimln(118, "intsets.nim");
		(*t).bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] = (NI)((*t).bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] & (NI)((NU64) ~((NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u)) & ((NI) 63)))))))));
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(NIM_BOOL, containsorincl_187898)(Intset187056* s, NI key) {
	NIM_BOOL result;
	Ttrunk187052* t;
	nimfr("containsOrIncl", "intsets.nim")
	result = 0;
	nimln(123, "intsets.nim");
	t = intsetget_187218((&(*s)), (NI)((NU64)(key) >> (NU64)(((NI) 9))));
	nimln(124, "intsets.nim");
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3;
		nimln(125, "intsets.nim");
		u = (NI)(key & ((NI) 511));
		nimln(126, "intsets.nim");
		if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6)))) > (NU)(7)) raiseIndexError();
		result = !(((NI)((*t).bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] & (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u)) & ((NI) 63))))))) == ((NI) 0)));
		nimln(127, "intsets.nim");
		{
			if (!!(result)) goto LA7;
			nimln(128, "intsets.nim");
			if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6)))) > (NU)(7)) raiseIndexError();
			if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6)))) > (NU)(7)) raiseIndexError();
			nimln(129, "intsets.nim");
			(*t).bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] = (NI)((*t).bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] | (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u)) & ((NI) 63)))))));
		}
		LA7: ;
	}
	goto LA1;
	LA3: ;
	{
		nimln(131, "intsets.nim");
		incl_187856(s, key);
		nimln(132, "intsets.nim");
		result = NIM_FALSE;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, initintset_187927)(Intset187056* Result) {
	nimfr("initIntSet", "intsets.nim")
	nimln(136, "intsets.nim");
	unsureAsgnRef((void**) (&(*Result).data), (Ttrunkseq187054*) newSeq((&NTI187054), ((NI) 8)));
	nimln(137, "intsets.nim");
	(*Result).max = ((NI) 7);
	nimln(138, "intsets.nim");
	(*Result).counter = ((NI) 0);
	nimln(139, "intsets.nim");
	unsureAsgnRef((void**) (&(*Result).head), NIM_NIL);
	popFrame();
}

N_NIMCALL(void, assign_187946)(Intset187056* dest, Intset187056* src) {
	Ttrunk187052* it;
	nimfr("assign", "intsets.nim")
	nimln(144, "intsets.nim");
	(*dest).counter = (*src).counter;
	nimln(145, "intsets.nim");
	(*dest).max = (*src).max;
	nimln(146, "intsets.nim");
	unsureAsgnRef((void**) (&(*dest).data), (Ttrunkseq187054*) newSeq((&NTI187054), ((NI)chckRange(((*src).data ? (*src).data->Sup.len : 0), ((NI) 0), ((NI) IL64(9223372036854775807))))));
	nimln(148, "intsets.nim");
	it = (*src).head;
	{
		nimln(149, "intsets.nim");
		while (1) {
			NI h;
			Ttrunk187052* n;
			if (!!((it == NIM_NIL))) goto LA2;
			nimln(151, "intsets.nim");
			h = (NI)((*it).key & (*dest).max);
			{
				nimln(152, "intsets.nim");
				while (1) {
					if ((NU)(h) >= (NU)((*dest).data->Sup.len)) raiseIndexError();
					if (!!(((*dest).data->data[h] == NIM_NIL))) goto LA4;
					h = nexttry_187207(h, (*dest).max);
				} LA4: ;
			}
			nimln(153, "intsets.nim");
			{
				if ((NU)(h) >= (NU)((*dest).data->Sup.len)) raiseIndexError();
				if (!!(((*dest).data->data[h] == NIM_NIL))) goto LA7;
				failedassertimpl_87017(((NimStringDesc*) &TMP2535));
			}
			LA7: ;
			n = 0;
			nimln(156, "intsets.nim");
			n = (Ttrunk187052*) newObj((&NTI187050), sizeof(Ttrunk187052));
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

N_NIMCALL(NimStringDesc*, HEX24_188318)(Intset187056* s) {
	NimStringDesc* result;
	nimfr("$", "intsets.nim")
	result = 0;
	nimln(184, "intsets.nim");
	result = copyString(((NimStringDesc*) &TMP2536));
	{
		NI key_188323;
		Ttrunk187052* r_188329;
		key_188323 = 0;
		nimln(167, "intsets.nim");
		r_188329 = (*s).head;
		{
			nimln(168, "intsets.nim");
			while (1) {
				NI i_188331;
				if (!!((r_188329 == NIM_NIL))) goto LA3;
				nimln(169, "intsets.nim");
				i_188331 = ((NI) 0);
				{
					nimln(170, "intsets.nim");
					while (1) {
						NI w_188333;
						NI j_188335;
						NI TMP2539;
						if (!(i_188331 <= ((NI) 7))) goto LA5;
						nimln(171, "intsets.nim");
						if ((NU)(i_188331) > (NU)(7)) raiseIndexError();
						w_188333 = (*r_188329).bits[(i_188331)- 0];
						nimln(174, "intsets.nim");
						j_188335 = ((NI) 0);
						{
							nimln(175, "intsets.nim");
							while (1) {
								NI TMP2538;
								if (!!((w_188333 == ((NI) 0)))) goto LA7;
								nimln(176, "intsets.nim");
								{
									NimStringDesc* LOC16;
									if (!!((((NI) ((NI)(w_188333 & ((NI) 1)))) == ((NI) 0)))) goto LA10;
									nimln(177, "intsets.nim");
									key_188323 = (NI)((NI)((NU64)((*r_188329).key) << (NU64)(((NI) 9))) | (NI)((NU64)((NI)((NU64)(i_188331) << (NU64)(((NI) 6)))) + (NU64)(j_188335)));
									nimln(186, "intsets.nim");
									{
										if (!(((NI) 1) < (result ? result->Sup.len : 0))) goto LA14;
										result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TMP2537));
									}
									LA14: ;
									nimln(187, "intsets.nim");
									LOC16 = 0;
									LOC16 = nimIntToStr(key_188323);
									result = resizeString(result, LOC16->Sup.len + 0);
appendString(result, LOC16);
								}
								LA10: ;
								nimln(178, "intsets.nim");
								TMP2538 = addInt(j_188335, ((NI) 1));
								j_188335 = (NI)(TMP2538);
								nimln(179, "intsets.nim");
								w_188333 = (NI)((NU64)(w_188333) >> (NU64)(((NI) 1)));
							} LA7: ;
						}
						nimln(180, "intsets.nim");
						TMP2539 = addInt(i_188331, ((NI) 1));
						i_188331 = (NI)(TMP2539);
					} LA5: ;
				}
				nimln(181, "intsets.nim");
				r_188329 = (*r_188329).next;
			} LA3: ;
		}
	}
	nimln(188, "intsets.nim");
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP2540));
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, empty_188363)(Intset187056* s) {
	NIM_BOOL result;
	nimfr("empty", "intsets.nim")
	result = 0;
	nimln(198, "intsets.nim");
	result = ((*s).counter == ((NI) 0));
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsInit)(void) {
	nimfr("intsets", "intsets.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsDatInit)(void) {
static TNimNode* TMP2528[3];
static TNimNode* TMP4203[4];
static TNimNode TMP2514[9];
NTI187052.size = sizeof(Ttrunk187052);
NTI187052.kind = 18;
NTI187052.base = 0;
TMP2528[0] = &TMP2514[1];
TMP2514[1].kind = 1;
TMP2514[1].offset = offsetof(Ttrunk187052, next);
TMP2514[1].typ = (&NTI187050);
TMP2514[1].name = "next";
TMP2528[1] = &TMP2514[2];
TMP2514[2].kind = 1;
TMP2514[2].offset = offsetof(Ttrunk187052, key);
TMP2514[2].typ = (&NTI108);
TMP2514[2].name = "key";
TMP2528[2] = &TMP2514[3];
TMP2514[3].kind = 1;
TMP2514[3].offset = offsetof(Ttrunk187052, bits);
TMP2514[3].typ = (&NTI27820);
TMP2514[3].name = "bits";
TMP2514[0].len = 3; TMP2514[0].kind = 2; TMP2514[0].sons = &TMP2528[0];
NTI187052.node = &TMP2514[0];
NTI187050.size = sizeof(Ttrunk187052*);
NTI187050.kind = 22;
NTI187050.base = (&NTI187052);
NTI187050.marker = TMP2529;
NTI187054.size = sizeof(Ttrunkseq187054*);
NTI187054.kind = 24;
NTI187054.base = (&NTI187050);
NTI187054.flags = 2;
NTI187054.marker = TMP2530;
NTI187056.size = sizeof(Intset187056);
NTI187056.kind = 18;
NTI187056.base = 0;
NTI187056.flags = 2;
TMP4203[0] = &TMP2514[5];
TMP2514[5].kind = 1;
TMP2514[5].offset = offsetof(Intset187056, counter);
TMP2514[5].typ = (&NTI108);
TMP2514[5].name = "counter";
TMP4203[1] = &TMP2514[6];
TMP2514[6].kind = 1;
TMP2514[6].offset = offsetof(Intset187056, max);
TMP2514[6].typ = (&NTI108);
TMP2514[6].name = "max";
TMP4203[2] = &TMP2514[7];
TMP2514[7].kind = 1;
TMP2514[7].offset = offsetof(Intset187056, head);
TMP2514[7].typ = (&NTI187050);
TMP2514[7].name = "head";
TMP4203[3] = &TMP2514[8];
TMP2514[8].kind = 1;
TMP2514[8].offset = offsetof(Intset187056, data);
TMP2514[8].typ = (&NTI187054);
TMP2514[8].name = "data";
TMP2514[4].len = 4; TMP2514[4].kind = 2; TMP2514[4].sons = &TMP4203[0];
NTI187056.node = &TMP2514[4];
}

