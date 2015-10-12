/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Stringtableobj134012 Stringtableobj134012;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Keyvaluepairseq134010 Keyvaluepairseq134010;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY103552 TY103552;
typedef struct Keyerror3451 Keyerror3451;
typedef struct Valueerror3449 Valueerror3449;
typedef struct Exception Exception;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct TY103552 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  Valueerror3449  {
  Exception Sup;
};
struct  Keyerror3451  {
  Valueerror3449 Sup;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
typedef NU8 TY77659[32];
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
struct Keyvaluepairseq134010 {
  TGenericSeq Sup;
  TY103552 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, nstlen)(Stringtableobj134012* t);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NI, myhash_134177)(Stringtableobj134012* t, NimStringDesc* key);
N_NIMCALL(NI, hash_131839)(NimStringDesc* x);
N_NIMCALL(NI, hashignorecase_131978)(NimStringDesc* x);
N_NIMCALL(NI, hashignorestyle_131887)(NimStringDesc* x);
N_NIMCALL(NIM_BOOL, mycmp_134188)(Stringtableobj134012* t, NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, cmp_4717)(NimStringDesc* x, NimStringDesc* y);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, mustrehash_134200)(NI length, NI counter);
N_NIMCALL(void, failedassertimpl_87017)(NimStringDesc* msg);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, nexttry_134407)(NI h, NI maxhash);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NI, rawget_134418)(Stringtableobj134012* t, NimStringDesc* key);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NimStringDesc*, nstGet)(Stringtableobj134012* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc**, nstTake)(Stringtableobj134012* t, NimStringDesc* key);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46746*, usrtocell_50246)(void* usr);
static N_INLINE(void, rtladdzct_51804)(Tcell46746* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46762* s, Tcell46746* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(NIM_BOOL, nsthasKey)(Stringtableobj134012* t, NimStringDesc* key);
N_NIMCALL(void, rawinsert_134488)(Stringtableobj134012* t, Keyvaluepairseq134010** data, NimStringDesc* key, NimStringDesc* val);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(void, enlarge_134510)(Stringtableobj134012* t);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP501)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, nstPut)(Stringtableobj134012* t, NimStringDesc* key, NimStringDesc* val);
N_NIMCALL(void, raiseformatexception_134610)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, getvalue_134630)(Stringtableobj134012* t, NU8 flags, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, getenv_122644)(NimStringDesc* key);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(Stringtableobj134012*, nstnewStringTable)(NU8 mode);
N_NIMCALL(void, TMP516)(void* p, NI op);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, clear_134702)(Stringtableobj134012* s, NU8 mode);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(Stringtableobj134012*, nstnewStringTableWithPairs)(NimStringDesc** keyvaluepairs, NI keyvaluepairsLen0, NU8 mode);
N_NIMCALL(Stringtableobj134012*, nstnewStringTableWithTableConstr)(TY103552* keyvaluepairs, NI keyvaluepairsLen0, NU8 mode);
N_NIMCALL(NimStringDesc*, nstFormat)(NimStringDesc* f, Stringtableobj134012* t, NU8 flags);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76643, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nstDollar)(Stringtableobj134012* t);
STRING_LITERAL(TMP490, "counter < length ", 17);
STRING_LITERAL(TMP496, "", 0);
STRING_LITERAL(TMP498, "key does not exist: ", 20);
STRING_LITERAL(TMP504, "format string: key not found: ", 30);
NIM_CONST TY77659 Patternchars_134825 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x03,
0xFE, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}
;
STRING_LITERAL(TMP533, "{:}", 3);
STRING_LITERAL(TMP534, "{", 1);
STRING_LITERAL(TMP535, ", ", 2);
STRING_LITERAL(TMP536, ": ", 2);
STRING_LITERAL(TMP538, "}", 1);
extern TFrame* frameptr_17042;
extern TNimType NTI134461; /* ref KeyError */
extern TNimType NTI3451; /* KeyError */
extern Tgcheap48616 gch_48644;
extern TNimType NTI103552; /* tuple[nonDST: string, DST: string] */
TNimType NTI134010; /* KeyValuePairSeq */
extern TNimType NTI22801; /* ref ValueError */
extern TNimType NTI3449; /* ValueError */
extern TNimType NTI3411; /* RootObj */
TNimType NTI134012; /* StringTableObj */
extern TNimType NTI108; /* int */
TNimType NTI134006; /* StringTableMode */
TNimType NTI134014; /* StringTableRef */

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

N_NIMCALL(NI, nstlen)(Stringtableobj134012* t) {
	NI result;
	nimfr("len", "strtabs.nim")
	result = 0;
	nimln(39, "strtabs.nim");
	result = (*t).counter;
	popFrame();
	return result;
}

N_NIMCALL(NI, myhash_134177)(Stringtableobj134012* t, NimStringDesc* key) {
	NI result;
	nimfr("myhash", "strtabs.nim")
	result = 0;
	nimln(78, "strtabs.nim");
	switch ((*t).mode) {
	case ((NU8) 0):
	{
		nimln(79, "strtabs.nim");
		result = hash_131839(key);
	}
	break;
	case ((NU8) 1):
	{
		nimln(80, "strtabs.nim");
		result = hashignorecase_131978(key);
	}
	break;
	case ((NU8) 2):
	{
		nimln(81, "strtabs.nim");
		result = hashignorestyle_131887(key);
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, mycmp_134188)(Stringtableobj134012* t, NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	nimfr("myCmp", "strtabs.nim")
	result = 0;
	nimln(84, "strtabs.nim");
	switch ((*t).mode) {
	case ((NU8) 0):
	{
		NI LOC2;
		nimln(85, "strtabs.nim");
		LOC2 = 0;
		LOC2 = cmp_4717(a, b);
		result = (LOC2 == ((NI) 0));
	}
	break;
	case ((NU8) 1):
	{
		NI LOC4;
		nimln(86, "strtabs.nim");
		LOC4 = 0;
		LOC4 = nsuCmpIgnoreCase(a, b);
		result = (LOC4 == ((NI) 0));
	}
	break;
	case ((NU8) 2):
	{
		NI LOC6;
		nimln(87, "strtabs.nim");
		LOC6 = 0;
		LOC6 = nsuCmpIgnoreStyle(a, b);
		result = (LOC6 == ((NI) 0));
	}
	break;
	}
	popFrame();
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

N_NIMCALL(NIM_BOOL, mustrehash_134200)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC5;
	NI TMP491;
	NI TMP492;
	NI TMP493;
	nimfr("mustRehash", "strtabs.nim")
	result = 0;
	nimln(90, "strtabs.nim");
	{
		if (!!((counter < length))) goto LA3;
		failedassertimpl_87017(((NimStringDesc*) &TMP490));
	}
	LA3: ;
	nimln(91, "strtabs.nim");
	LOC5 = 0;
	TMP491 = mulInt(length, ((NI) 2));
	TMP492 = mulInt(counter, ((NI) 3));
	LOC5 = ((NI)(TMP491) < (NI)(TMP492));
	if (LOC5) goto LA6;
	TMP493 = subInt(length, counter);
	LOC5 = ((NI)(TMP493) < ((NI) 4));
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

static N_INLINE(NI, nexttry_134407)(NI h, NI maxhash) {
	NI result;
	NI TMP494;
	NI TMP495;
	nimfr("nextTry", "strtabs.nim")
	result = 0;
	nimln(94, "strtabs.nim");
	TMP494 = mulInt(((NI) 5), h);
	TMP495 = addInt((NI)(TMP494), ((NI) 1));
	result = (NI)((NI)(TMP495) & maxhash);
	popFrame();
	return result;
}

N_NIMCALL(NI, rawget_134418)(Stringtableobj134012* t, NimStringDesc* key) {
	NI result;
	NI h;
	NI LOC1;
	nimfr("rawGet", "strtabs.nim")
{	result = 0;
	nimln(97, "strtabs.nim");
	LOC1 = 0;
	LOC1 = myhash_134177(t, key);
	h = (NI)(LOC1 & ((*t).data ? ((*t).data->Sup.len-1) : -1));
	{
		nimln(98, "strtabs.nim");
		while (1) {
			if ((NU)(h) >= (NU)((*t).data->Sup.len)) raiseIndexError();
			if (!!((*t).data->data[h].Field0 == 0)) goto LA3;
			nimln(99, "strtabs.nim");
			{
				NIM_BOOL LOC6;
				if ((NU)(h) >= (NU)((*t).data->Sup.len)) raiseIndexError();
				LOC6 = 0;
				LOC6 = mycmp_134188(t, (*t).data->data[h].Field0, key);
				if (!LOC6) goto LA7;
				nimln(100, "strtabs.nim");
				result = h;
				goto BeforeRet;
			}
			LA7: ;
			nimln(101, "strtabs.nim");
			h = nexttry_134407(h, ((*t).data ? ((*t).data->Sup.len-1) : -1));
		} LA3: ;
	}
	nimln(102, "strtabs.nim");
	result = ((NI) -1);
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, nstGet)(Stringtableobj134012* t, NimStringDesc* key) {
	NimStringDesc* result;
	NI index;
	nimfr("[]", "strtabs.nim")
	result = 0;
	nimln(108, "strtabs.nim");
	index = rawget_134418(t, key);
	nimln(109, "strtabs.nim");
	{
		if (!(((NI) 0) <= index)) goto LA3;
		if ((NU)(index) >= (NU)((*t).data->Sup.len)) raiseIndexError();
		result = copyString((*t).data->data[index].Field1);
	}
	goto LA1;
	LA3: ;
	{
		nimln(110, "strtabs.nim");
		result = copyString(((NimStringDesc*) &TMP496));
	}
	LA1: ;
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
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

N_NIMCALL(NimStringDesc**, nstTake)(Stringtableobj134012* t, NimStringDesc* key) {
	NimStringDesc** result;
	NI index;
	nimfr("mget", "strtabs.nim")
	result = 0;
	nimln(116, "strtabs.nim");
	index = rawget_134418(t, key);
	nimln(117, "strtabs.nim");
	{
		if (!(((NI) 0) <= index)) goto LA3;
		if ((NU)(index) >= (NU)((*t).data->Sup.len)) raiseIndexError();
		result = (&(*t).data->data[index].Field1);
	}
	goto LA1;
	LA3: ;
	{
		Keyerror3451* e_134460;
		NimStringDesc* LOC6;
		e_134460 = 0;
		nimln(2265, "system.nim");
		e_134460 = (Keyerror3451*) newObj((&NTI134461), sizeof(Keyerror3451));
		(*e_134460).Sup.Sup.Sup.m_type = (&NTI3451);
		nimln(2266, "system.nim");
		nimln(118, "strtabs.nim");
		LOC6 = 0;
		LOC6 = rawNewString(key->Sup.len + 20);
appendString(LOC6, ((NimStringDesc*) &TMP498));
appendString(LOC6, key);
		asgnRefNoCycle((void**) (&(*e_134460).Sup.Sup.message), LOC6);
		raiseException((Exception*)e_134460, "KeyError");
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, nsthasKey)(Stringtableobj134012* t, NimStringDesc* key) {
	NIM_BOOL result;
	NI LOC1;
	nimfr("hasKey", "strtabs.nim")
	result = 0;
	nimln(122, "strtabs.nim");
	LOC1 = 0;
	LOC1 = rawget_134418(t, key);
	result = (((NI) 0) <= LOC1);
	popFrame();
	return result;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46746* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_50246(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).refcount -= ((NI) 8);
		nimln(168, "gc.nim");
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_51804(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, rawinsert_134488)(Stringtableobj134012* t, Keyvaluepairseq134010** data, NimStringDesc* key, NimStringDesc* val) {
	NI h;
	NI LOC1;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	nimfr("rawInsert", "strtabs.nim")
	nimln(125, "strtabs.nim");
	LOC1 = 0;
	LOC1 = myhash_134177(t, key);
	h = (NI)(LOC1 & ((*data) ? ((*data)->Sup.len-1) : -1));
	{
		nimln(126, "strtabs.nim");
		while (1) {
			if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
			if (!!((*data)->data[h].Field0 == 0)) goto LA3;
			nimln(127, "strtabs.nim");
			h = nexttry_134407(h, ((*data) ? ((*data)->Sup.len-1) : -1));
		} LA3: ;
	}
	nimln(128, "strtabs.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	LOC4 = 0;
	LOC4 = (*data)->data[h].Field0; (*data)->data[h].Field0 = copyStringRC1(key);
	if (LOC4) nimGCunrefNoCycle(LOC4);
	nimln(129, "strtabs.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	LOC5 = 0;
	LOC5 = (*data)->data[h].Field1; (*data)->data[h].Field1 = copyStringRC1(val);
	if (LOC5) nimGCunrefNoCycle(LOC5);
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
N_NIMCALL(void, TMP501)(void* p, NI op) {
	Keyvaluepairseq134010* a;
	NI LOC1;
	a = (Keyvaluepairseq134010*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}

N_NIMCALL(void, enlarge_134510)(Stringtableobj134012* t) {
	Keyvaluepairseq134010* n;
	NI TMP499;
	Keyvaluepairseq134010* LOC8;
	nimfr("enlarge", "strtabs.nim")
	n = 0;
	nimln(133, "strtabs.nim");
	TMP499 = mulInt(((*t).data ? (*t).data->Sup.len : 0), ((NI) 2));
	n = (Keyvaluepairseq134010*) newSeq((&NTI134010), ((NI)chckRange((NI)(TMP499), ((NI) 0), ((NI) 2147483647))));
	{
		NI i_134544;
		NI HEX3Atmp_134558;
		NI res_134561;
		i_134544 = 0;
		HEX3Atmp_134558 = 0;
		nimln(134, "strtabs.nim");
		HEX3Atmp_134558 = ((*t).data ? ((*t).data->Sup.len-1) : -1);
		nimln(1598, "system.nim");
		res_134561 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP502;
				if (!(res_134561 <= HEX3Atmp_134558)) goto LA3;
				nimln(1600, "system.nim");
				i_134544 = res_134561;
				nimln(135, "strtabs.nim");
				{
					if ((NU)(i_134544) >= (NU)((*t).data->Sup.len)) raiseIndexError();
					if (!!((*t).data->data[i_134544].Field0 == 0)) goto LA6;
					if ((NU)(i_134544) >= (NU)((*t).data->Sup.len)) raiseIndexError();
					if ((NU)(i_134544) >= (NU)((*t).data->Sup.len)) raiseIndexError();
					rawinsert_134488(t, (&n), (*t).data->data[i_134544].Field0, (*t).data->data[i_134544].Field1);
				}
				LA6: ;
				nimln(1614, "system.nim");
				TMP502 = addInt(res_134561, ((NI) 1));
				res_134561 = (NI)(TMP502);
			} LA3: ;
		}
	}
	nimln(136, "strtabs.nim");
	LOC8 = 0;
	LOC8 = (*t).data;
	asgnRefNoCycle((void**) (&(*t).data), n);
	n = LOC8;
	popFrame();
}

N_NIMCALL(void, nstPut)(Stringtableobj134012* t, NimStringDesc* key, NimStringDesc* val) {
	NI index;
	nimfr("[]=", "strtabs.nim")
	nimln(140, "strtabs.nim");
	index = rawget_134418(t, key);
	nimln(141, "strtabs.nim");
	{
		NimStringDesc* LOC5;
		if (!(((NI) 0) <= index)) goto LA3;
		nimln(142, "strtabs.nim");
		if ((NU)(index) >= (NU)((*t).data->Sup.len)) raiseIndexError();
		LOC5 = 0;
		LOC5 = (*t).data->data[index].Field1; (*t).data->data[index].Field1 = copyStringRC1(val);
		if (LOC5) nimGCunrefNoCycle(LOC5);
	}
	goto LA1;
	LA3: ;
	{
		NI TMP503;
		nimln(144, "strtabs.nim");
		{
			NIM_BOOL LOC9;
			LOC9 = 0;
			LOC9 = mustrehash_134200(((*t).data ? (*t).data->Sup.len : 0), (*t).counter);
			if (!LOC9) goto LA10;
			enlarge_134510(t);
		}
		LA10: ;
		nimln(145, "strtabs.nim");
		rawinsert_134488(t, (&(*t).data), key, val);
		nimln(146, "strtabs.nim");
		TMP503 = addInt((*t).counter, ((NI) 1));
		(*t).counter = (NI)(TMP503);
	}
	LA1: ;
	popFrame();
}

N_NIMCALL(void, raiseformatexception_134610)(NimStringDesc* s) {
	Valueerror3449* e;
	NimStringDesc* LOC1;
	nimfr("raiseFormatException", "strtabs.nim")
	e = 0;
	nimln(150, "strtabs.nim");
	e = (Valueerror3449*) newObj((&NTI22801), sizeof(Valueerror3449));
	(*e).Sup.Sup.m_type = (&NTI3449);
	nimln(151, "strtabs.nim");
	LOC1 = 0;
	LOC1 = rawNewString(s->Sup.len + 30);
appendString(LOC1, ((NimStringDesc*) &TMP504));
appendString(LOC1, s);
	asgnRefNoCycle((void**) (&(*e).Sup.message), LOC1);
	nimln(152, "strtabs.nim");
	raiseException((Exception*)e, "ValueError");
	popFrame();
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(NimStringDesc*, getvalue_134630)(Stringtableobj134012* t, NU8 flags, NimStringDesc* key) {
	NimStringDesc* result;
	nimfr("getValue", "strtabs.nim")
{	result = 0;
	nimln(155, "strtabs.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = nsthasKey(t, key);
		if (!LOC3) goto LA4;
		result = nstGet(t, key);
		goto BeforeRet;
	}
	LA4: ;
	nimln(157, "strtabs.nim");
	{
		if (!((flags &(1<<((((NU8) 0))&7)))!=0)) goto LA8;
		result = getenv_122644(key);
	}
	goto LA6;
	LA8: ;
	{
		nimln(158, "strtabs.nim");
		result = copyString(((NimStringDesc*) &TMP496));
	}
	LA6: ;
	nimln(159, "strtabs.nim");
	{
		if (!((result ? result->Sup.len : 0) == ((NI) 0))) goto LA13;
		nimln(160, "strtabs.nim");
		{
			NimStringDesc* LOC19;
			if (!((flags &(1<<((((NU8) 2))&7)))!=0)) goto LA17;
			LOC19 = 0;
			LOC19 = rawNewString(key->Sup.len + 1);
appendChar(LOC19, 36);
appendString(LOC19, key);
			result = LOC19;
		}
		goto LA15;
		LA17: ;
		{
			nimln(161, "strtabs.nim");
			if (!!(((flags &(1<<((((NU8) 1))&7)))!=0))) goto LA21;
			raiseformatexception_134610(key);
		}
		goto LA15;
		LA21: ;
		LA15: ;
	}
	LA13: ;
	}BeforeRet: ;
	popFrame();
	return result;
}
N_NIMCALL(void, TMP516)(void* p, NI op) {
	Stringtableobj134012* a;
	a = (Stringtableobj134012*)p;
	nimGCvisit((void*)(*a).data, op);
}

N_NIMCALL(Stringtableobj134012*, nstnewStringTable)(NU8 mode) {
	Stringtableobj134012* result;
	nimfr("newStringTable", "strtabs.nim")
	result = 0;
	nimln(166, "strtabs.nim");
	result = (Stringtableobj134012*) newObj((&NTI134014), sizeof(Stringtableobj134012));
	(*result).Sup.m_type = (&NTI134012);
	nimln(167, "strtabs.nim");
	(*result).mode = mode;
	nimln(168, "strtabs.nim");
	(*result).counter = ((NI) 0);
	nimln(169, "strtabs.nim");
	if ((*result).data) nimGCunrefNoCycle((*result).data);
	(*result).data = (Keyvaluepairseq134010*) newSeqRC1((&NTI134010), ((NI) 64));
	popFrame();
	return result;
}

N_NIMCALL(void, clear_134702)(Stringtableobj134012* s, NU8 mode) {
	nimfr("clear", "strtabs.nim")
	nimln(173, "strtabs.nim");
	(*s).mode = mode;
	nimln(174, "strtabs.nim");
	(*s).counter = ((NI) 0);
	nimln(175, "strtabs.nim");
	(*s).data = (Keyvaluepairseq134010*) setLengthSeq(&((*s).data)->Sup, sizeof(TY103552), ((NI) 64));
	popFrame();
}

N_NIMCALL(Stringtableobj134012*, nstnewStringTableWithPairs)(NimStringDesc** keyvaluepairs, NI keyvaluepairsLen0, NU8 mode) {
	Stringtableobj134012* result;
	NI i;
	nimfr("newStringTable", "strtabs.nim")
	result = 0;
	nimln(184, "strtabs.nim");
	result = nstnewStringTable(mode);
	nimln(185, "strtabs.nim");
	i = ((NI) 0);
	{
		nimln(186, "strtabs.nim");
		while (1) {
			NI TMP517;
			NI TMP518;
			if (!(i < (keyvaluepairsLen0-1))) goto LA2;
			nimln(187, "strtabs.nim");
			if ((NU)(i) >= (NU)(keyvaluepairsLen0)) raiseIndexError();
			TMP517 = addInt(i, ((NI) 1));
			if ((NU)((NI)(TMP517)) >= (NU)(keyvaluepairsLen0)) raiseIndexError();
			nstPut(result, keyvaluepairs[i], keyvaluepairs[(NI)(TMP517)]);
			nimln(188, "strtabs.nim");
			TMP518 = addInt(i, ((NI) 2));
			i = (NI)(TMP518);
		} LA2: ;
	}
	popFrame();
	return result;
}

N_NIMCALL(Stringtableobj134012*, nstnewStringTableWithTableConstr)(TY103552* keyvaluepairs, NI keyvaluepairsLen0, NU8 mode) {
	Stringtableobj134012* result;
	nimfr("newStringTable", "strtabs.nim")
	result = 0;
	nimln(197, "strtabs.nim");
	result = nstnewStringTable(mode);
	{
		NimStringDesc* key_134795;
		NimStringDesc* val_134796;
		NI i_134800;
		key_134795 = 0;
		val_134796 = 0;
		nimln(1689, "system.nim");
		i_134800 = ((NI) 0);
		{
			nimln(1690, "system.nim");
			while (1) {
				NI TMP519;
				if (!(i_134800 < keyvaluepairsLen0)) goto LA3;
				nimln(1691, "system.nim");
				if ((NU)(i_134800) >= (NU)(keyvaluepairsLen0)) raiseIndexError();
				key_134795 = keyvaluepairs[i_134800].Field0;
				if ((NU)(i_134800) >= (NU)(keyvaluepairsLen0)) raiseIndexError();
				val_134796 = keyvaluepairs[i_134800].Field1;
				nimln(198, "strtabs.nim");
				nstPut(result, key_134795, val_134796);
				nimln(1692, "system.nim");
				TMP519 = addInt(i_134800, ((NI) 1));
				i_134800 = (NI)(TMP519);
			} LA3: ;
		}
	}
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, nstFormat)(NimStringDesc* f, Stringtableobj134012* t, NU8 flags) {
	NimStringDesc* result;
	NI i;
	nimfr("%", "strtabs.nim")
	result = 0;
	nimln(205, "strtabs.nim");
	result = copyString(((NimStringDesc*) &TMP496));
	nimln(206, "strtabs.nim");
	i = ((NI) 0);
	{
		nimln(207, "strtabs.nim");
		while (1) {
			if (!(i < (f ? f->Sup.len : 0))) goto LA2;
			nimln(208, "strtabs.nim");
			{
				NI TMP520;
				if ((NU)(i) > (NU)(f->Sup.len)) raiseIndexError();
				if (!((NU8)(f->data[i]) == (NU8)(36))) goto LA5;
				nimln(209, "strtabs.nim");
				TMP520 = addInt(i, ((NI) 1));
				if ((NU)((NI)(TMP520)) > (NU)(f->Sup.len)) raiseIndexError();
				switch (((NU8)(f->data[(NI)(TMP520)]))) {
				case 36:
				{
					NI TMP521;
					nimln(211, "strtabs.nim");
					result = addChar(result, 36);
					nimln(212, "strtabs.nim");
					TMP521 = addInt(i, ((NI) 2));
					i = (NI)(TMP521);
				}
				break;
				case 123:
				{
					NI j;
					NI TMP522;
					NI TMP524;
					NI TMP525;
					NimStringDesc* LOC13;
					NimStringDesc* LOC14;
					NI TMP526;
					nimln(214, "strtabs.nim");
					TMP522 = addInt(i, ((NI) 1));
					j = (NI)(TMP522);
					{
						nimln(215, "strtabs.nim");
						while (1) {
							NIM_BOOL LOC11;
							NI TMP523;
							LOC11 = 0;
							LOC11 = (j < (f ? f->Sup.len : 0));
							if (!(LOC11)) goto LA12;
							if ((NU)(j) > (NU)(f->Sup.len)) raiseIndexError();
							LOC11 = !(((NU8)(f->data[j]) == (NU8)(125)));
							LA12: ;
							if (!LOC11) goto LA10;
							TMP523 = addInt(j, ((NI) 1));
							j = (NI)(TMP523);
						} LA10: ;
					}
					nimln(216, "strtabs.nim");
					TMP524 = addInt(i, ((NI) 2));
					TMP525 = subInt(j, ((NI) 1));
					LOC13 = 0;
					LOC13 = copyStrLast(f, (NI)(TMP524), (NI)(TMP525));
					LOC14 = 0;
					LOC14 = getvalue_134630(t, flags, LOC13);
					result = resizeString(result, LOC14->Sup.len + 0);
appendString(result, LOC14);
					nimln(217, "strtabs.nim");
					TMP526 = addInt(j, ((NI) 1));
					i = (NI)(TMP526);
				}
				break;
				case 97 ... 122:
				case 65 ... 90:
				case 128 ... 255:
				case 95:
				{
					NI j;
					NI TMP527;
					NI TMP529;
					NI TMP530;
					NimStringDesc* LOC20;
					NimStringDesc* LOC21;
					nimln(219, "strtabs.nim");
					TMP527 = addInt(i, ((NI) 1));
					j = (NI)(TMP527);
					{
						nimln(220, "strtabs.nim");
						while (1) {
							NIM_BOOL LOC18;
							NI TMP528;
							LOC18 = 0;
							LOC18 = (j < (f ? f->Sup.len : 0));
							if (!(LOC18)) goto LA19;
							if ((NU)(j) > (NU)(f->Sup.len)) raiseIndexError();
							LOC18 = (((NU8)(f->data[j])) >= ((NU8)(97)) && ((NU8)(f->data[j])) <= ((NU8)(122)) || ((NU8)(f->data[j])) >= ((NU8)(65)) && ((NU8)(f->data[j])) <= ((NU8)(90)) || ((NU8)(f->data[j])) >= ((NU8)(48)) && ((NU8)(f->data[j])) <= ((NU8)(57)) || ((NU8)(f->data[j])) == ((NU8)(95)) || ((NU8)(f->data[j])) >= ((NU8)(128)) && ((NU8)(f->data[j])) <= ((NU8)(255)));
							LA19: ;
							if (!LOC18) goto LA17;
							TMP528 = addInt(j, ((NI) 1));
							j = (NI)(TMP528);
						} LA17: ;
					}
					nimln(221, "strtabs.nim");
					TMP529 = addInt(i, ((NI) 1));
					TMP530 = subInt(j, ((NI) 1));
					LOC20 = 0;
					LOC20 = copyStrLast(f, (NI)(TMP529), (NI)(TMP530));
					LOC21 = 0;
					LOC21 = getvalue_134630(t, flags, LOC20);
					result = resizeString(result, LOC21->Sup.len + 0);
appendString(result, LOC21);
					nimln(222, "strtabs.nim");
					i = j;
				}
				break;
				default:
				{
					NI TMP531;
					nimln(224, "strtabs.nim");
					if ((NU)(i) > (NU)(f->Sup.len)) raiseIndexError();
					result = addChar(result, f->data[i]);
					nimln(225, "strtabs.nim");
					TMP531 = addInt(i, ((NI) 1));
					i = (NI)(TMP531);
				}
				break;
				}
			}
			goto LA3;
			LA5: ;
			{
				NI TMP532;
				nimln(227, "strtabs.nim");
				if ((NU)(i) > (NU)(f->Sup.len)) raiseIndexError();
				result = addChar(result, f->data[i]);
				nimln(228, "strtabs.nim");
				TMP532 = addInt(i, ((NI) 1));
				i = (NI)(TMP532);
			}
			LA3: ;
		} LA2: ;
	}
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, nstDollar)(Stringtableobj134012* t) {
	NimStringDesc* result;
	nimfr("$", "strtabs.nim")
	result = 0;
	nimln(232, "strtabs.nim");
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = nstlen(t);
		if (!(LOC3 == ((NI) 0))) goto LA4;
		nimln(233, "strtabs.nim");
		result = copyString(((NimStringDesc*) &TMP533));
	}
	goto LA1;
	LA4: ;
	{
		nimln(235, "strtabs.nim");
		result = copyString(((NimStringDesc*) &TMP534));
		{
			NimStringDesc* key_134916;
			NimStringDesc* val_134917;
			key_134916 = 0;
			val_134917 = 0;
			{
				NI h_134922;
				NI HEX3Atmp_134924;
				NI res_134926;
				h_134922 = 0;
				HEX3Atmp_134924 = 0;
				nimln(43, "strtabs.nim");
				HEX3Atmp_134924 = ((*t).data ? ((*t).data->Sup.len-1) : -1);
				nimln(1598, "system.nim");
				res_134926 = ((NI) 0);
				{
					nimln(1599, "system.nim");
					while (1) {
						NI TMP537;
						if (!(res_134926 <= HEX3Atmp_134924)) goto LA10;
						nimln(1600, "system.nim");
						h_134922 = res_134926;
						nimln(44, "strtabs.nim");
						{
							if ((NU)(h_134922) >= (NU)((*t).data->Sup.len)) raiseIndexError();
							if (!!((*t).data->data[h_134922].Field0 == 0)) goto LA13;
							nimln(45, "strtabs.nim");
							if ((NU)(h_134922) >= (NU)((*t).data->Sup.len)) raiseIndexError();
							key_134916 = (*t).data->data[h_134922].Field0;
							if ((NU)(h_134922) >= (NU)((*t).data->Sup.len)) raiseIndexError();
							val_134917 = (*t).data->data[h_134922].Field1;
							nimln(237, "strtabs.nim");
							{
								if (!(((NI) 1) < (result ? result->Sup.len : 0))) goto LA17;
								result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TMP535));
							}
							LA17: ;
							nimln(238, "strtabs.nim");
							result = resizeString(result, key_134916->Sup.len + 0);
appendString(result, key_134916);
							nimln(239, "strtabs.nim");
							result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TMP536));
							nimln(240, "strtabs.nim");
							result = resizeString(result, val_134917->Sup.len + 0);
appendString(result, val_134917);
						}
						LA13: ;
						nimln(1619, "system.nim");
						TMP537 = addInt(res_134926, ((NI) 1));
						res_134926 = (NI)(TMP537);
					} LA10: ;
				}
			}
		}
		nimln(241, "strtabs.nim");
		result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP538));
	}
	LA1: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsInit)(void) {
	nimfr("strtabs", "strtabs.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsDatInit)(void) {
static TNimNode* TMP512[3];
static TNimNode* TMP513[3];
NI TMP515;
static char* NIM_CONST TMP514[3] = {
"modeCaseSensitive", 
"modeCaseInsensitive", 
"modeStyleInsensitive"};
static TNimNode TMP476[8];
NTI134010.size = sizeof(Keyvaluepairseq134010*);
NTI134010.kind = 24;
NTI134010.base = (&NTI103552);
NTI134010.flags = 2;
NTI134010.marker = TMP501;
NTI134012.size = sizeof(Stringtableobj134012);
NTI134012.kind = 17;
NTI134012.base = (&NTI3411);
TMP512[0] = &TMP476[1];
TMP476[1].kind = 1;
TMP476[1].offset = offsetof(Stringtableobj134012, counter);
TMP476[1].typ = (&NTI108);
TMP476[1].name = "counter";
TMP512[1] = &TMP476[2];
TMP476[2].kind = 1;
TMP476[2].offset = offsetof(Stringtableobj134012, data);
TMP476[2].typ = (&NTI134010);
TMP476[2].name = "data";
TMP512[2] = &TMP476[3];
NTI134006.size = sizeof(NU8);
NTI134006.kind = 14;
NTI134006.base = 0;
NTI134006.flags = 3;
for (TMP515 = 0; TMP515 < 3; TMP515++) {
TMP476[TMP515+4].kind = 1;
TMP476[TMP515+4].offset = TMP515;
TMP476[TMP515+4].name = TMP514[TMP515];
TMP513[TMP515] = &TMP476[TMP515+4];
}
TMP476[7].len = 3; TMP476[7].kind = 2; TMP476[7].sons = &TMP513[0];
NTI134006.node = &TMP476[7];
TMP476[3].kind = 1;
TMP476[3].offset = offsetof(Stringtableobj134012, mode);
TMP476[3].typ = (&NTI134006);
TMP476[3].name = "mode";
TMP476[0].len = 3; TMP476[0].kind = 2; TMP476[0].sons = &TMP512[0];
NTI134012.node = &TMP476[0];
NTI134014.size = sizeof(Stringtableobj134012*);
NTI134014.kind = 22;
NTI134014.base = (&NTI134012);
NTI134014.marker = TMP516;
}

