/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Tlinkedlist130028 Tlinkedlist130028;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tcell46946 Tcell46946;
typedef struct Tcellset46958 Tcellset46958;
typedef struct Tgcheap48816 Tgcheap48816;
typedef struct Tcellseq46962 Tcellseq46962;
typedef struct Tpagedesc46954 Tpagedesc46954;
typedef struct Tmemregion28810 Tmemregion28810;
typedef struct Tsmallchunk28040 Tsmallchunk28040;
typedef struct Tllchunk28804 Tllchunk28804;
typedef struct Tbigchunk28042 Tbigchunk28042;
typedef struct Tintset28017 Tintset28017;
typedef struct Ttrunk28013 Ttrunk28013;
typedef struct Tavlnode28808 Tavlnode28808;
typedef struct Tgcstat48814 Tgcstat48814;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tstrentry130024 Tstrentry130024;
typedef struct Tbasechunk28038 Tbasechunk28038;
typedef struct Tfreecell28030 Tfreecell28030;
struct  Tlinkedlist130028  {
Tlistentry130022* head;
Tlistentry130022* tail;
NI counter;
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
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tcell46946  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46962  {
NI len;
NI cap;
Tcell46946** d;
};
struct  Tcellset46958  {
NI counter;
NI max;
Tpagedesc46954* head;
Tpagedesc46954** data;
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
Tcellseq46962 zct;
Tcellseq46962 decstack;
Tcellset46958 cycleroots;
Tcellseq46962 tempstack;
NI recgclock;
Tmemregion28810 region;
Tgcstat48814 stat;
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
struct  Tstrentry130024  {
  Tlistentry130022 Sup;
NimStringDesc* data;
};
typedef N_NIMCALL_PTR(NIM_BOOL, Tcompareproc130030) (Tlistentry130022* entry, void* closure);
typedef NI TY28020[8];
struct  Tpagedesc46954  {
Tpagedesc46954* next;
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
N_NIMCALL(void, initlinkedlist_130043)(Tlinkedlist130028* list);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20201)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, append_130053)(Tlinkedlist130028* list, Tlistentry130022* entry);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52822)(Tcell46946* c);
static N_INLINE(NIM_BOOL, canbecycleroot_50467)(Tcell46946* c);
static N_INLINE(void, rtladdcycleroot_51223)(Tcell46946* c);
N_NOINLINE(void, incl_47665)(Tcellset46958* s, Tcell46946* cell);
static N_INLINE(Tcell46946*, usrtocell_50446)(void* usr);
static N_INLINE(void, decref_52404)(Tcell46946* c);
static N_INLINE(void, rtladdzct_52004)(Tcell46946* c);
N_NOINLINE(void, addzct_50417)(Tcellseq46962* s, Tcell46946* c);
N_NIMCALL(void, failedassertimpl_87217)(NimStringDesc* msg);
N_NIMCALL(NIM_BOOL, contains_130219)(Tlinkedlist130028* list, NimStringDesc* data);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP467)(void* p, NI op);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(Tstrentry130024*, newstrentry_130250)(NimStringDesc* data);
N_NIMCALL(void, TMP468)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(void, appendstr_130268)(Tlinkedlist130028* list, NimStringDesc* data);
N_NIMCALL(NIM_BOOL, includestr_130279)(Tlinkedlist130028* list, NimStringDesc* data);
N_NIMCALL(void, prepend_130291)(Tlinkedlist130028* list, Tlistentry130022* entry);
N_NIMCALL(void, prependstr_130419)(Tlinkedlist130028* list, NimStringDesc* data);
N_NIMCALL(void, insertbefore_130430)(Tlinkedlist130028* list, Tlistentry130022* pos, Tlistentry130022* entry);
N_NIMCALL(void, remove_130639)(Tlinkedlist130028* list, Tlistentry130022* entry);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(void, bringtofront_130705)(Tlinkedlist130028* list, Tlistentry130022* entry);
N_NIMCALL(void, excludepath_130807)(Tlinkedlist130028* list, NimStringDesc* data);
N_NIMCALL(NI, noscmpPaths)(NimStringDesc* patha, NimStringDesc* pathb);
N_NIMCALL(Tlistentry130022*, find_130839)(Tlinkedlist130028* list, Tcompareproc130030 fn, void* closure);
STRING_LITERAL(TMP465, "list.tail.next == nil ", 22);
STRING_LITERAL(TMP470, "list.head.prev == nil ", 22);
STRING_LITERAL(TMP471, "not (pos == nil) ", 17);
extern TFrame* frameptr_17242;
extern Tgcheap48816 gch_48844;
extern TNimType NTI3411; /* RootObj */
TNimType NTI130022; /* TListEntry */
TNimType NTI130020; /* PListEntry */
TNimType NTI130024; /* TStrEntry */
extern TNimType NTI149; /* string */
TNimType NTI130026; /* PStrEntry */
TNimType NTI130028; /* TLinkedList */
extern TNimType NTI108; /* int */

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

N_NIMCALL(void, initlinkedlist_130043)(Tlinkedlist130028* list) {
	nimfr("initLinkedList", "lists.nim")
	nimln(29, "lists.nim");
	(*list).counter = ((NI) 0);
	nimln(30, "lists.nim");
	unsureAsgnRef((void**) (&(*list).head), NIM_NIL);
	nimln(31, "lists.nim");
	unsureAsgnRef((void**) (&(*list).tail), NIM_NIL);
	popFrame();
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

static N_INLINE(NIM_BOOL, canbecycleroot_50467)(Tcell46946* c) {
	NIM_BOOL result;
	nimfr("canBeCycleRoot", "gc.nim")
	result = 0;
	nimln(121, "gc.nim");
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdcycleroot_51223)(Tcell46946* c) {
	nimfr("rtlAddCycleRoot", "gc.nim")
	nimln(189, "gc.nim");
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		nimln(139, "gc.nim");
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		nimln(191, "gc.nim");
		incl_47665((&gch_48844.cycleroots), c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(void, incref_52822)(Tcell46946* c) {
	nimfr("incRef", "gc.nim")
	nimln(216, "gc.nim");
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	nimln(219, "gc.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_50467(c);
		if (!LOC3) goto LA4;
		nimln(220, "gc.nim");
		rtladdcycleroot_51223(c);
	}
	LA4: ;
	popFrame();
}

static N_INLINE(Tcell46946*, usrtocell_50446)(void* usr) {
	Tcell46946* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	result = ((Tcell46946*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46946))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_52004)(Tcell46946* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_50417((&gch_48844.zct), c);
	popFrame();
}

static N_INLINE(void, decref_52404)(Tcell46946* c) {
	nimfr("decRef", "gc.nim")
	nimln(206, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).refcount -= ((NI) 8);
		nimln(168, "gc.nim");
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		nimln(207, "gc.nim");
		rtladdzct_52004(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(208, "gc.nim");
		LOC6 = 0;
		LOC6 = canbecycleroot_50467(c);
		if (!LOC6) goto LA7;
		nimln(211, "gc.nim");
		rtladdcycleroot_51223(c);
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
		Tcell46946* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_50446(src);
		incref_52822(LOC5);
	}
	LA3: ;
	nimln(245, "gc.nim");
	{
		Tcell46946* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_50446((*dest));
		decref_52404(LOC10);
	}
	LA8: ;
	nimln(246, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(void, append_130053)(Tlinkedlist130028* list, Tlistentry130022* entry) {
	NI TMP464;
	nimfr("append", "lists.nim")
	nimln(34, "lists.nim");
	TMP464 = addInt((*list).counter, ((NI) 1));
	(*list).counter = (NI)(TMP464);
	nimln(35, "lists.nim");
	asgnRef((void**) (&(*entry).next), NIM_NIL);
	nimln(36, "lists.nim");
	asgnRef((void**) (&(*entry).prev), (*list).tail);
	nimln(37, "lists.nim");
	{
		if (!!(((*list).tail == NIM_NIL))) goto LA3;
		nimln(38, "lists.nim");
		{
			if (!!(((*(*list).tail).next == NIM_NIL))) goto LA7;
			failedassertimpl_87217(((NimStringDesc*) &TMP465));
		}
		LA7: ;
		nimln(39, "lists.nim");
		asgnRef((void**) (&(*(*list).tail).next), entry);
	}
	LA3: ;
	nimln(40, "lists.nim");
	unsureAsgnRef((void**) (&(*list).tail), entry);
	nimln(41, "lists.nim");
	{
		if (!((*list).head == NIM_NIL)) goto LA11;
		unsureAsgnRef((void**) (&(*list).head), entry);
	}
	LA11: ;
	popFrame();
}
N_NIMCALL(void, TMP467)(void* p, NI op) {
	Tlistentry130022* a;
	a = (Tlistentry130022*)p;
	nimGCvisit((void*)(*a).prev, op);
	nimGCvisit((void*)(*a).next, op);
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

N_NIMCALL(NIM_BOOL, contains_130219)(Tlinkedlist130028* list, NimStringDesc* data) {
	NIM_BOOL result;
	Tlistentry130022* it;
	nimfr("contains", "lists.nim")
{	result = 0;
	nimln(44, "lists.nim");
	it = (*list).head;
	{
		nimln(45, "lists.nim");
		while (1) {
			if (!!((it == NIM_NIL))) goto LA2;
			nimln(46, "lists.nim");
			{
				if (it) chckObj((*it).Sup.m_type, (&NTI130024));
				if (!eqStrings((*((Tstrentry130024*) (it))).data, data)) goto LA5;
				nimln(47, "lists.nim");
				result = NIM_TRUE;
				goto BeforeRet;
			}
			LA5: ;
			nimln(48, "lists.nim");
			it = (*it).next;
		} LA2: ;
	}
	}BeforeRet: ;
	popFrame();
	return result;
}
N_NIMCALL(void, TMP468)(void* p, NI op) {
	Tstrentry130024* a;
	a = (Tstrentry130024*)p;
	nimGCvisit((void*)(*a).Sup.prev, op);
	nimGCvisit((void*)(*a).Sup.next, op);
	nimGCvisit((void*)(*a).data, op);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46946* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_50446(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).refcount -= ((NI) 8);
		nimln(168, "gc.nim");
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_52004(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(Tstrentry130024*, newstrentry_130250)(NimStringDesc* data) {
	Tstrentry130024* result;
	NimStringDesc* LOC1;
	nimfr("newStrEntry", "lists.nim")
	result = 0;
	nimln(51, "lists.nim");
	result = (Tstrentry130024*) newObj((&NTI130026), sizeof(Tstrentry130024));
	(*result).Sup.Sup.m_type = (&NTI130024);
	nimln(52, "lists.nim");
	LOC1 = 0;
	LOC1 = (*result).data; (*result).data = copyStringRC1(data);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	popFrame();
	return result;
}

N_NIMCALL(void, appendstr_130268)(Tlinkedlist130028* list, NimStringDesc* data) {
	Tstrentry130024* LOC1;
	Tlistentry130022* LOC2;
	nimfr("appendStr", "lists.nim")
	nimln(55, "lists.nim");
	LOC1 = 0;
	LOC1 = newstrentry_130250(data);
	LOC2 = 0;
	LOC2 = &LOC1->Sup;
	append_130053(list, LOC2);
	popFrame();
}

N_NIMCALL(NIM_BOOL, includestr_130279)(Tlinkedlist130028* list, NimStringDesc* data) {
	NIM_BOOL result;
	nimfr("includeStr", "lists.nim")
{	result = 0;
	nimln(58, "lists.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_130219((&(*list)), data);
		if (!LOC3) goto LA4;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA4: ;
	nimln(59, "lists.nim");
	appendstr_130268(list, data);
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, prepend_130291)(Tlinkedlist130028* list, Tlistentry130022* entry) {
	NI TMP469;
	nimfr("prepend", "lists.nim")
	nimln(62, "lists.nim");
	TMP469 = addInt((*list).counter, ((NI) 1));
	(*list).counter = (NI)(TMP469);
	nimln(63, "lists.nim");
	asgnRef((void**) (&(*entry).prev), NIM_NIL);
	nimln(64, "lists.nim");
	asgnRef((void**) (&(*entry).next), (*list).head);
	nimln(65, "lists.nim");
	{
		if (!!(((*list).head == NIM_NIL))) goto LA3;
		nimln(66, "lists.nim");
		{
			if (!!(((*(*list).head).prev == NIM_NIL))) goto LA7;
			failedassertimpl_87217(((NimStringDesc*) &TMP470));
		}
		LA7: ;
		nimln(67, "lists.nim");
		asgnRef((void**) (&(*(*list).head).prev), entry);
	}
	LA3: ;
	nimln(68, "lists.nim");
	unsureAsgnRef((void**) (&(*list).head), entry);
	nimln(69, "lists.nim");
	{
		if (!((*list).tail == NIM_NIL)) goto LA11;
		unsureAsgnRef((void**) (&(*list).tail), entry);
	}
	LA11: ;
	popFrame();
}

N_NIMCALL(void, prependstr_130419)(Tlinkedlist130028* list, NimStringDesc* data) {
	Tstrentry130024* LOC1;
	Tlistentry130022* LOC2;
	nimfr("prependStr", "lists.nim")
	nimln(72, "lists.nim");
	LOC1 = 0;
	LOC1 = newstrentry_130250(data);
	LOC2 = 0;
	LOC2 = &LOC1->Sup;
	prepend_130291(list, LOC2);
	popFrame();
}

N_NIMCALL(void, insertbefore_130430)(Tlinkedlist130028* list, Tlistentry130022* pos, Tlistentry130022* entry) {
	nimfr("insertBefore", "lists.nim")
	nimln(75, "lists.nim");
	{
		if (!!(!((pos == NIM_NIL)))) goto LA3;
		failedassertimpl_87217(((NimStringDesc*) &TMP471));
	}
	LA3: ;
	nimln(76, "lists.nim");
	{
		if (!(pos == (*list).head)) goto LA7;
		nimln(77, "lists.nim");
		prepend_130291(list, entry);
	}
	goto LA5;
	LA7: ;
	{
		NI TMP472;
		nimln(79, "lists.nim");
		TMP472 = addInt((*list).counter, ((NI) 1));
		(*list).counter = (NI)(TMP472);
		nimln(80, "lists.nim");
		asgnRef((void**) (&(*entry).next), pos);
		nimln(81, "lists.nim");
		asgnRef((void**) (&(*entry).prev), (*pos).prev);
		nimln(82, "lists.nim");
		{
			if (!!(((*pos).prev == NIM_NIL))) goto LA12;
			asgnRef((void**) (&(*(*pos).prev).next), entry);
		}
		LA12: ;
		nimln(83, "lists.nim");
		asgnRef((void**) (&(*pos).prev), entry);
	}
	LA5: ;
	popFrame();
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

N_NIMCALL(void, remove_130639)(Tlinkedlist130028* list, Tlistentry130022* entry) {
	NI TMP473;
	nimfr("remove", "lists.nim")
	nimln(86, "lists.nim");
	TMP473 = subInt((*list).counter, ((NI) 1));
	(*list).counter = (NI)(TMP473);
	nimln(87, "lists.nim");
	{
		if (!(entry == (*list).tail)) goto LA3;
		nimln(88, "lists.nim");
		unsureAsgnRef((void**) (&(*list).tail), (*entry).prev);
	}
	LA3: ;
	nimln(89, "lists.nim");
	{
		if (!(entry == (*list).head)) goto LA7;
		nimln(90, "lists.nim");
		unsureAsgnRef((void**) (&(*list).head), (*entry).next);
	}
	LA7: ;
	nimln(91, "lists.nim");
	{
		if (!!(((*entry).next == NIM_NIL))) goto LA11;
		asgnRef((void**) (&(*(*entry).next).prev), (*entry).prev);
	}
	LA11: ;
	nimln(92, "lists.nim");
	{
		if (!!(((*entry).prev == NIM_NIL))) goto LA15;
		asgnRef((void**) (&(*(*entry).prev).next), (*entry).next);
	}
	LA15: ;
	popFrame();
}

N_NIMCALL(void, bringtofront_130705)(Tlinkedlist130028* list, Tlistentry130022* entry) {
	nimfr("bringToFront", "lists.nim")
	nimln(96, "lists.nim");
	remove_130639(list, entry);
	nimln(97, "lists.nim");
	prepend_130291(list, entry);
	popFrame();
}

N_NIMCALL(void, excludepath_130807)(Tlinkedlist130028* list, NimStringDesc* data) {
	Tlistentry130022* it;
	nimfr("excludePath", "lists.nim")
	nimln(108, "lists.nim");
	it = (*list).head;
	{
		nimln(109, "lists.nim");
		while (1) {
			Tlistentry130022* nxt;
			if (!!((it == NIM_NIL))) goto LA2;
			nimln(110, "lists.nim");
			nxt = (*it).next;
			nimln(111, "lists.nim");
			{
				NI LOC5;
				if (it) chckObj((*it).Sup.m_type, (&NTI130024));
				LOC5 = 0;
				LOC5 = noscmpPaths((*((Tstrentry130024*) (it))).data, data);
				if (!(LOC5 == ((NI) 0))) goto LA6;
				nimln(112, "lists.nim");
				remove_130639(list, it);
			}
			LA6: ;
			nimln(113, "lists.nim");
			it = nxt;
		} LA2: ;
	}
	popFrame();
}

N_NIMCALL(Tlistentry130022*, find_130839)(Tlinkedlist130028* list, Tcompareproc130030 fn, void* closure) {
	Tlistentry130022* result;
	nimfr("find", "lists.nim")
{	result = 0;
	nimln(116, "lists.nim");
	result = (*list).head;
	{
		nimln(117, "lists.nim");
		while (1) {
			if (!!((result == NIM_NIL))) goto LA2;
			nimln(118, "lists.nim");
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = fn(result, closure);
				if (!LOC5) goto LA6;
				goto BeforeRet;
			}
			LA6: ;
			nimln(119, "lists.nim");
			result = (*result).next;
		} LA2: ;
	}
	}BeforeRet: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_listsInit)(void) {
	nimfr("lists", "lists.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_listsDatInit)(void) {
static TNimNode* TMP466[2];
static TNimNode* TMP4197[3];
static TNimNode TMP462[8];
NTI130022.size = sizeof(Tlistentry130022);
NTI130022.kind = 17;
NTI130022.base = (&NTI3411);
TMP466[0] = &TMP462[1];
NTI130020.size = sizeof(Tlistentry130022*);
NTI130020.kind = 22;
NTI130020.base = (&NTI130022);
NTI130020.marker = TMP467;
TMP462[1].kind = 1;
TMP462[1].offset = offsetof(Tlistentry130022, prev);
TMP462[1].typ = (&NTI130020);
TMP462[1].name = "prev";
TMP466[1] = &TMP462[2];
TMP462[2].kind = 1;
TMP462[2].offset = offsetof(Tlistentry130022, next);
TMP462[2].typ = (&NTI130020);
TMP462[2].name = "next";
TMP462[0].len = 2; TMP462[0].kind = 2; TMP462[0].sons = &TMP466[0];
NTI130022.node = &TMP462[0];
NTI130024.size = sizeof(Tstrentry130024);
NTI130024.kind = 17;
NTI130024.base = (&NTI130022);
TMP462[3].kind = 1;
TMP462[3].offset = offsetof(Tstrentry130024, data);
TMP462[3].typ = (&NTI149);
TMP462[3].name = "data";
NTI130024.node = &TMP462[3];
NTI130026.size = sizeof(Tstrentry130024*);
NTI130026.kind = 22;
NTI130026.base = (&NTI130024);
NTI130026.marker = TMP468;
NTI130028.size = sizeof(Tlinkedlist130028);
NTI130028.kind = 18;
NTI130028.base = 0;
TMP4197[0] = &TMP462[5];
TMP462[5].kind = 1;
TMP462[5].offset = offsetof(Tlinkedlist130028, head);
TMP462[5].typ = (&NTI130020);
TMP462[5].name = "head";
TMP4197[1] = &TMP462[6];
TMP462[6].kind = 1;
TMP462[6].offset = offsetof(Tlinkedlist130028, tail);
TMP462[6].typ = (&NTI130020);
TMP462[6].name = "tail";
TMP4197[2] = &TMP462[7];
TMP462[7].kind = 1;
TMP462[7].offset = offsetof(Tlinkedlist130028, counter);
TMP462[7].typ = (&NTI108);
TMP462[7].name = "counter";
TMP462[4].len = 3; TMP462[4].kind = 2; TMP462[4].sons = &TMP4197[0];
NTI130028.node = &TMP462[4];
}

