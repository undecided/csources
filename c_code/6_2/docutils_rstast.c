/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Trstnode296011 Trstnode296011;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Trstnodeseq296009 Trstnodeseq296009;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct Trendercontext296208 Trendercontext296208;
typedef struct TY289746 TY289746;
typedef struct Jsonnodeobj289726 Jsonnodeobj289726;
typedef struct TY289742 TY289742;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct TY289741 TY289741;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Trstnode296011  {
NU8 kind;
NimStringDesc* text;
NI level;
Trstnodeseq296009* sons;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
typedef NIM_CHAR TY296275[9];
struct  Trendercontext296208  {
NI indent;
NI verbatim;
};
struct TY289742 {
NimStringDesc* Field0;
Jsonnodeobj289726* Field1;
};
typedef TY289742 TY296487[2];
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
struct  Jsonnodeobj289726  {
NU8 kind;
union{
struct {NimStringDesc* str;
} S1;
struct {NI64 num;
} S2;
struct {NF fnum;
} S3;
struct {NIM_BOOL bval;
} S4;
struct {TY289741* fields;
} S6;
struct {TY289746* elems;
} S7;
} kindU;
};
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
struct Trstnodeseq296009 {
  TGenericSeq Sup;
  Trstnode296011* data[SEQ_DECL_SIZE];
};
struct TY289746 {
  TGenericSeq Sup;
  Jsonnodeobj289726* data[SEQ_DECL_SIZE];
};
struct TY289741 {
  TGenericSeq Sup;
  TY289742 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, len_296084)(Trstnode296011* n);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(Trstnode296011*, newrstnode_296102)(NU8 kind);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP5012)(void* p, NI op);
N_NIMCALL(void, TMP5013)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr);
static N_INLINE(void, rtladdzct_51804)(Tcell46747* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46763* s, Tcell46747* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(Trstnode296011*, newrstnode_296136)(NU8 kind, NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(Trstnode296011*, lastson_296147)(Trstnode296011* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, add_296165)(Trstnode296011* father, Trstnode296011* son);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, addifnotnil_296185)(Trstnode296011* father, Trstnode296011* son);
N_NIMCALL(void, renderrstsons_296224)(Trendercontext296208* d, Trstnode296011* n, NimStringDesc** result);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, renderrsttorst_296214)(Trendercontext296208* d, Trstnode296011* n, NimStringDesc** result);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c, NI count);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_82929, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, renderrsttorst_296469)(Trstnode296011* n, NimStringDesc** result);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_296505)(Trstnodeseq296009* x, Trstnodeseq296009* y);
static N_INLINE(void*, seqtoptr_296516)(Trstnodeseq296009* x);
N_NIMCALL(TY289746*, newseq_296627)(NI len);
N_NIMCALL(Jsonnodeobj289726*, renderrsttojsonnode_296483)(Trstnode296011* node);
N_NIMCALL(Jsonnodeobj289726*, HEX25_290206)(TY289742* keyvals, NI keyvalsLen0);
N_NIMCALL(Jsonnodeobj289726*, HEX25_290130)(NimStringDesc* s);
N_NIMCALL(Jsonnodeobj289726*, HEX25_290149)(NI64 n);
N_NIMCALL(void, add_292418)(Jsonnodeobj289726* obj, NimStringDesc* key, Jsonnodeobj289726* val);
N_NIMCALL(Jsonnodeobj289726*, HEX25_290303)(Jsonnodeobj289726** elements, NI elementsLen0);
N_NIMCALL(NimStringDesc*, renderrsttojson_296741)(Trstnode296011* node);
N_NIMCALL(NimStringDesc*, pretty_293446)(Jsonnodeobj289726* node, NI indent);
NIM_CONST TY296275 lvltochar_296274 = {33,
61,
45,
126,
96,
60,
42,
124,
43}
;
STRING_LITERAL(TMP5017, "\012", 1);
STRING_LITERAL(TMP5019, "", 0);
STRING_LITERAL(TMP5021, "\012\012", 2);
STRING_LITERAL(TMP5024, "* ", 2);
STRING_LITERAL(TMP5027, "(#) ", 4);
STRING_LITERAL(TMP5030, "  ", 2);
STRING_LITERAL(TMP5037, "| ", 2);
STRING_LITERAL(TMP5040, "`", 1);
STRING_LITERAL(TMP5041, "`_", 2);
STRING_LITERAL(TMP5042, " <", 2);
STRING_LITERAL(TMP5043, ">`_", 3);
STRING_LITERAL(TMP5044, "`:", 2);
STRING_LITERAL(TMP5045, "`:sub:", 6);
STRING_LITERAL(TMP5046, "`:sup:", 6);
STRING_LITERAL(TMP5047, "`:idx:", 6);
STRING_LITERAL(TMP5048, "*", 1);
STRING_LITERAL(TMP5049, "**", 2);
STRING_LITERAL(TMP5050, "***", 3);
STRING_LITERAL(TMP5052, "``", 2);
STRING_LITERAL(TMP5054, "\\", 1);
STRING_LITERAL(TMP5055, "\\\\", 2);
STRING_LITERAL(TMP5056, ".. index::\012", 11);
STRING_LITERAL(TMP5059, ".. contents::", 13);
STRING_LITERAL(TMP5060, "Error: cannot render: ", 22);
STRING_LITERAL(TMP5063, "kind", 4);
STRING_LITERAL(TMP5064, "level", 5);
STRING_LITERAL(TMP5065, "text", 4);
STRING_LITERAL(TMP5067, "sons", 4);
extern TFrame* frameptr_17042;
TNimType NTI296011; /* TRstNode */
TNimType NTI296005; /* TRstNodeKind */
extern TNimType NTI149; /* string */
extern TNimType NTI108; /* int */
TNimType NTI296009; /* TRstNodeSeq */
TNimType NTI296007; /* PRstNode */
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

N_NIMCALL(NI, len_296084)(Trstnode296011* n) {
	NI result;
	nimfr("len", "rstast.nim")
	result = 0;
	nimln(75, "rstast.nim");
	result = ((*n).sons ? (*n).sons->Sup.len : 0);
	popFrame();
	return result;
}
N_NIMCALL(void, TMP5012)(void* p, NI op) {
	Trstnodeseq296009* a;
	NI LOC1;
	a = (Trstnodeseq296009*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}
N_NIMCALL(void, TMP5013)(void* p, NI op) {
	Trstnode296011* a;
	a = (Trstnode296011*)p;
	nimGCvisit((void*)(*a).text, op);
	nimGCvisit((void*)(*a).sons, op);
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46747* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_50246(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).refcount -= ((NI) 8);
		nimln(168, "gc.nim");
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_51804(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(Trstnode296011*, newrstnode_296102)(NU8 kind) {
	Trstnode296011* result;
	nimfr("newRstNode", "rstast.nim")
	result = 0;
	nimln(78, "rstast.nim");
	result = (Trstnode296011*) newObj((&NTI296007), sizeof(Trstnode296011));
	nimln(79, "rstast.nim");
	if ((*result).sons) nimGCunrefNoCycle((*result).sons);
	(*result).sons = (Trstnodeseq296009*) newSeqRC1((&NTI296009), 0);
	nimln(80, "rstast.nim");
	(*result).kind = kind;
	popFrame();
	return result;
}

N_NIMCALL(Trstnode296011*, newrstnode_296136)(NU8 kind, NimStringDesc* s) {
	Trstnode296011* result;
	NimStringDesc* LOC1;
	nimfr("newRstNode", "rstast.nim")
	result = 0;
	nimln(83, "rstast.nim");
	result = newrstnode_296102(kind);
	nimln(84, "rstast.nim");
	LOC1 = 0;
	LOC1 = (*result).text; (*result).text = copyStringRC1(s);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	popFrame();
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

N_NIMCALL(Trstnode296011*, lastson_296147)(Trstnode296011* n) {
	Trstnode296011* result;
	NI TMP5014;
	nimfr("lastSon", "rstast.nim")
	result = 0;
	nimln(87, "rstast.nim");
	TMP5014 = subInt(((*n).sons ? (*n).sons->Sup.len : 0), ((NI) 1));
	if ((NU)((NI)(TMP5014)) >= (NU)((*n).sons->Sup.len)) raiseIndexError();
	result = (*n).sons->data[(NI)(TMP5014)];
	popFrame();
	return result;
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

N_NIMCALL(void, add_296165)(Trstnode296011* father, Trstnode296011* son) {
	nimfr("add", "rstast.nim")
	nimln(90, "rstast.nim");
	(*father).sons = (Trstnodeseq296009*) incrSeq(&((*father).sons)->Sup, sizeof(Trstnode296011*));
	asgnRefNoCycle((void**) (&(*father).sons->data[(*father).sons->Sup.len-1]), son);
	popFrame();
}

N_NIMCALL(void, addifnotnil_296185)(Trstnode296011* father, Trstnode296011* son) {
	nimfr("addIfNotNil", "rstast.nim")
	nimln(93, "rstast.nim");
	{
		if (!!((son == NIM_NIL))) goto LA3;
		add_296165(father, son);
	}
	LA3: ;
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

N_NIMCALL(void, renderrstsons_296224)(Trendercontext296208* d, Trstnode296011* n, NimStringDesc** result) {
	nimfr("renderRstSons", "rstast.nim")
	{
		NI i_296243;
		NI HEX3Atmp_296245;
		NI LOC2;
		NI TMP5015;
		NI res_296248;
		i_296243 = 0;
		HEX3Atmp_296245 = 0;
		nimln(105, "rstast.nim");
		LOC2 = 0;
		LOC2 = len_296084(n);
		TMP5015 = subInt(LOC2, ((NI) 1));
		HEX3Atmp_296245 = (NI)(TMP5015);
		nimln(1598, "system.nim");
		res_296248 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP5016;
				if (!(res_296248 <= HEX3Atmp_296245)) goto LA4;
				nimln(1600, "system.nim");
				i_296243 = res_296248;
				nimln(106, "rstast.nim");
				if ((NU)(i_296243) >= (NU)((*n).sons->Sup.len)) raiseIndexError();
				renderrsttorst_296214(d, (*n).sons->data[i_296243], result);
				nimln(1614, "system.nim");
				TMP5016 = addInt(res_296248, ((NI) 1));
				res_296248 = (NI)(TMP5016);
			} LA4: ;
		}
	}
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

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
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

N_NIMCALL(void, renderrsttorst_296214)(Trendercontext296208* d, Trstnode296011* n, NimStringDesc** result) {
	NimStringDesc* ind;
	nimfr("renderRstToRst", "rstast.nim")
{	nimln(113, "rstast.nim");
	{
		if (!(n == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	nimln(114, "rstast.nim");
	ind = nsuRepeatChar(32, ((NI)chckRange((*d).indent, ((NI) 0), ((NI) IL64(9223372036854775807)))));
	nimln(115, "rstast.nim");
	switch ((*n).kind) {
	case ((NU8) 0):
	{
		nimln(117, "rstast.nim");
		renderrstsons_296224(d, n, result);
	}
	break;
	case ((NU8) 1):
	{
		NI oldlen;
		NI headlinelen;
		NI TMP5018;
		NimStringDesc* LOC7;
		nimln(119, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP5017));
		nimln(120, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(122, "rstast.nim");
		oldlen = ((*result) ? (*result)->Sup.len : 0);
		nimln(123, "rstast.nim");
		renderrstsons_296224(d, n, result);
		nimln(124, "rstast.nim");
		TMP5018 = subInt(((*result) ? (*result)->Sup.len : 0), oldlen);
		headlinelen = (NI)(TMP5018);
		nimln(126, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP5017));
		nimln(127, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(128, "rstast.nim");
		if ((NU)((*n).level) > (NU)(8)) raiseIndexError();
		LOC7 = 0;
		LOC7 = nsuRepeatChar(lvltochar_296274[((*n).level)- 0], ((NI)chckRange(headlinelen, ((NI) 0), ((NI) IL64(9223372036854775807)))));
		(*result) = resizeString((*result), LOC7->Sup.len + 0);
appendString((*result), LOC7);
	}
	break;
	case ((NU8) 2):
	{
		NimStringDesc* headline;
		NimStringDesc* lvl;
		NI TMP5020;
		nimln(130, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP5017));
		nimln(131, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(133, "rstast.nim");
		headline = copyString(((NimStringDesc*) &TMP5019));
		nimln(134, "rstast.nim");
		renderrstsons_296224(d, n, (&headline));
		nimln(136, "rstast.nim");
		if ((NU)((*n).level) > (NU)(8)) raiseIndexError();
		TMP5020 = subInt((headline ? headline->Sup.len : 0), (*d).indent);
		lvl = nsuRepeatChar(lvltochar_296274[((*n).level)- 0], ((NI)chckRange((NI)(TMP5020), ((NI) 0), ((NI) IL64(9223372036854775807)))));
		nimln(137, "rstast.nim");
		(*result) = resizeString((*result), lvl->Sup.len + 0);
appendString((*result), lvl);
		nimln(138, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP5017));
		nimln(139, "rstast.nim");
		(*result) = resizeString((*result), headline->Sup.len + 0);
appendString((*result), headline);
		nimln(141, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP5017));
		nimln(142, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(143, "rstast.nim");
		(*result) = resizeString((*result), lvl->Sup.len + 0);
appendString((*result), lvl);
	}
	break;
	case ((NU8) 3):
	{
		NI TMP5022;
		NimStringDesc* LOC10;
		nimln(145, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5021));
		nimln(146, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(147, "rstast.nim");
		TMP5022 = subInt(((NI) 78), (*d).indent);
		LOC10 = 0;
		LOC10 = nsuRepeatChar(45, ((NI)chckRange((NI)(TMP5022), ((NI) 0), ((NI) IL64(9223372036854775807)))));
		(*result) = resizeString((*result), LOC10->Sup.len + 0);
appendString((*result), LOC10);
		nimln(148, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5021));
	}
	break;
	case ((NU8) 4):
	{
		nimln(150, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5021));
		nimln(151, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(152, "rstast.nim");
		renderrstsons_296224(d, n, result);
	}
	break;
	case ((NU8) 6):
	{
		NI TMP5023;
		NimStringDesc* tmp;
		NI TMP5025;
		nimln(154, "rstast.nim");
		TMP5023 = addInt((*d).indent, ((NI) 2));
		(*d).indent = (NI)(TMP5023);
		nimln(155, "rstast.nim");
		tmp = copyString(((NimStringDesc*) &TMP5019));
		nimln(156, "rstast.nim");
		renderrstsons_296224(d, n, (&tmp));
		nimln(157, "rstast.nim");
		{
			if (!(((NI) 0) < (tmp ? tmp->Sup.len : 0))) goto LA15;
			nimln(158, "rstast.nim");
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP5017));
			nimln(159, "rstast.nim");
			(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
			nimln(160, "rstast.nim");
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5024));
			nimln(161, "rstast.nim");
			(*result) = resizeString((*result), tmp->Sup.len + 0);
appendString((*result), tmp);
		}
		LA15: ;
		nimln(162, "rstast.nim");
		TMP5025 = subInt((*d).indent, ((NI) 2));
		(*d).indent = (NI)(TMP5025);
	}
	break;
	case ((NU8) 8):
	{
		NI TMP5026;
		NimStringDesc* tmp;
		NI TMP5028;
		nimln(164, "rstast.nim");
		TMP5026 = addInt((*d).indent, ((NI) 4));
		(*d).indent = (NI)(TMP5026);
		nimln(165, "rstast.nim");
		tmp = copyString(((NimStringDesc*) &TMP5019));
		nimln(166, "rstast.nim");
		renderrstsons_296224(d, n, (&tmp));
		nimln(167, "rstast.nim");
		{
			if (!(((NI) 0) < (tmp ? tmp->Sup.len : 0))) goto LA20;
			nimln(168, "rstast.nim");
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP5017));
			nimln(169, "rstast.nim");
			(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
			nimln(170, "rstast.nim");
			(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TMP5027));
			nimln(171, "rstast.nim");
			(*result) = resizeString((*result), tmp->Sup.len + 0);
appendString((*result), tmp);
		}
		LA20: ;
		nimln(172, "rstast.nim");
		TMP5028 = subInt((*d).indent, ((NI) 4));
		(*d).indent = (NI)(TMP5028);
	}
	break;
	case ((NU8) 17):
	case ((NU8) 13):
	case ((NU8) 9):
	case ((NU8) 10):
	case ((NU8) 26):
	case ((NU8) 15):
	case ((NU8) 16):
	case ((NU8) 37):
	case ((NU8) 5):
	case ((NU8) 7):
	{
		nimln(175, "rstast.nim");
		renderrstsons_296224(d, n, result);
	}
	break;
	case ((NU8) 11):
	{
		nimln(177, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5021));
		nimln(178, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(179, "rstast.nim");
		renderrstsons_296224(d, n, result);
	}
	break;
	case ((NU8) 12):
	{
		NI TMP5029;
		NI TMP5031;
		nimln(181, "rstast.nim");
		TMP5029 = addInt((*d).indent, ((NI) 2));
		(*d).indent = (NI)(TMP5029);
		nimln(182, "rstast.nim");
		{
			if ((NU)(((NI) 0)) >= (NU)((*n).sons->Sup.len)) raiseIndexError();
			if (!!(((*(*n).sons->data[((NI) 0)]).kind == ((NU8) 5)))) goto LA27;
			nimln(183, "rstast.nim");
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP5017));
			nimln(184, "rstast.nim");
			(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
			nimln(185, "rstast.nim");
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5030));
		}
		LA27: ;
		nimln(186, "rstast.nim");
		renderrstsons_296224(d, n, result);
		nimln(187, "rstast.nim");
		TMP5031 = subInt((*d).indent, ((NI) 2));
		(*d).indent = (NI)(TMP5031);
	}
	break;
	case ((NU8) 14):
	{
		NimStringDesc* tmp;
		NI L;
		NI TMP5032;
		NI TMP5033;
		NI TMP5034;
		NI TMP5035;
		NimStringDesc* LOC30;
		NI TMP5036;
		nimln(189, "rstast.nim");
		tmp = copyString(((NimStringDesc*) &TMP5019));
		nimln(190, "rstast.nim");
		if ((NU)(((NI) 0)) >= (NU)((*n).sons->Sup.len)) raiseIndexError();
		renderrsttorst_296214(d, (*n).sons->data[((NI) 0)], (&tmp));
		nimln(192, "rstast.nim");
		TMP5032 = addInt((tmp ? tmp->Sup.len : 0), ((NI) 3));
		L = (((NI)(TMP5032) >= ((NI) 30)) ? (NI)(TMP5032) : ((NI) 30));
		nimln(193, "rstast.nim");
		TMP5033 = addInt((*d).indent, L);
		(*d).indent = (NI)(TMP5033);
		nimln(195, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP5017));
		nimln(196, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(197, "rstast.nim");
		(*result) = addChar((*result), 58);
		nimln(198, "rstast.nim");
		(*result) = resizeString((*result), tmp->Sup.len + 0);
appendString((*result), tmp);
		nimln(199, "rstast.nim");
		(*result) = addChar((*result), 58);
		nimln(200, "rstast.nim");
		TMP5034 = subInt(L, (tmp ? tmp->Sup.len : 0));
		TMP5035 = subInt((NI)(TMP5034), ((NI) 2));
		LOC30 = 0;
		LOC30 = nsuRepeatChar(32, ((NI)chckRange((NI)(TMP5035), ((NI) 0), ((NI) IL64(9223372036854775807)))));
		(*result) = resizeString((*result), LOC30->Sup.len + 0);
appendString((*result), LOC30);
		nimln(201, "rstast.nim");
		if ((NU)(((NI) 1)) >= (NU)((*n).sons->Sup.len)) raiseIndexError();
		renderrsttorst_296214(d, (*n).sons->data[((NI) 1)], result);
		nimln(203, "rstast.nim");
		TMP5036 = subInt((*d).indent, L);
		(*d).indent = (NI)(TMP5036);
	}
	break;
	case ((NU8) 27):
	{
		nimln(205, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP5017));
		nimln(206, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(207, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5037));
		nimln(208, "rstast.nim");
		renderrstsons_296224(d, n, result);
	}
	break;
	case ((NU8) 28):
	{
		NI TMP5038;
		NI TMP5039;
		nimln(210, "rstast.nim");
		TMP5038 = addInt((*d).indent, ((NI) 2));
		(*d).indent = (NI)(TMP5038);
		nimln(211, "rstast.nim");
		renderrstsons_296224(d, n, result);
		nimln(212, "rstast.nim");
		TMP5039 = subInt((*d).indent, ((NI) 2));
		(*d).indent = (NI)(TMP5039);
	}
	break;
	case ((NU8) 39):
	{
		nimln(214, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP5040));
		nimln(215, "rstast.nim");
		renderrstsons_296224(d, n, result);
		nimln(216, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5041));
	}
	break;
	case ((NU8) 38):
	{
		nimln(218, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(219, "rstast.nim");
		if ((NU)(((NI) 0)) >= (NU)((*n).sons->Sup.len)) raiseIndexError();
		renderrsttorst_296214(d, (*n).sons->data[((NI) 0)], result);
		nimln(220, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5042));
		nimln(221, "rstast.nim");
		if ((NU)(((NI) 1)) >= (NU)((*n).sons->Sup.len)) raiseIndexError();
		renderrsttorst_296214(d, (*n).sons->data[((NI) 1)], result);
		nimln(222, "rstast.nim");
		(*result) = resizeString((*result), 3);
appendString((*result), ((NimStringDesc*) &TMP5043));
	}
	break;
	case ((NU8) 53):
	{
		nimln(224, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(225, "rstast.nim");
		if ((NU)(((NI) 0)) >= (NU)((*n).sons->Sup.len)) raiseIndexError();
		renderrsttorst_296214(d, (*n).sons->data[((NI) 0)], result);
		nimln(226, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5044));
		nimln(227, "rstast.nim");
		if ((NU)(((NI) 1)) >= (NU)((*n).sons->Sup.len)) raiseIndexError();
		renderrsttorst_296214(d, (*n).sons->data[((NI) 1)], result);
		nimln(228, "rstast.nim");
		(*result) = addChar((*result), 58);
	}
	break;
	case ((NU8) 54):
	{
		nimln(230, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(231, "rstast.nim");
		renderrstsons_296224(d, n, result);
		nimln(232, "rstast.nim");
		(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP5045));
	}
	break;
	case ((NU8) 55):
	{
		nimln(234, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(235, "rstast.nim");
		renderrstsons_296224(d, n, result);
		nimln(236, "rstast.nim");
		(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP5046));
	}
	break;
	case ((NU8) 56):
	{
		nimln(238, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(239, "rstast.nim");
		renderrstsons_296224(d, n, result);
		nimln(240, "rstast.nim");
		(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP5047));
	}
	break;
	case ((NU8) 57):
	{
		nimln(242, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP5048));
		nimln(243, "rstast.nim");
		renderrstsons_296224(d, n, result);
		nimln(244, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP5048));
	}
	break;
	case ((NU8) 58):
	{
		nimln(246, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5049));
		nimln(247, "rstast.nim");
		renderrstsons_296224(d, n, result);
		nimln(248, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5049));
	}
	break;
	case ((NU8) 59):
	{
		nimln(250, "rstast.nim");
		(*result) = resizeString((*result), 3);
appendString((*result), ((NimStringDesc*) &TMP5050));
		nimln(251, "rstast.nim");
		renderrstsons_296224(d, n, result);
		nimln(252, "rstast.nim");
		(*result) = resizeString((*result), 3);
appendString((*result), ((NimStringDesc*) &TMP5050));
	}
	break;
	case ((NU8) 60):
	{
		nimln(254, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(255, "rstast.nim");
		renderrstsons_296224(d, n, result);
		nimln(256, "rstast.nim");
		(*result) = addChar((*result), 96);
	}
	break;
	case ((NU8) 61):
	{
		NI TMP5051;
		NI TMP5053;
		nimln(258, "rstast.nim");
		TMP5051 = addInt((*d).verbatim, ((NI) 1));
		(*d).verbatim = (NI)(TMP5051);
		nimln(259, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5052));
		nimln(260, "rstast.nim");
		renderrstsons_296224(d, n, result);
		nimln(261, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5052));
		nimln(262, "rstast.nim");
		TMP5053 = subInt((*d).verbatim, ((NI) 1));
		(*d).verbatim = (NI)(TMP5053);
	}
	break;
	case ((NU8) 63):
	{
		nimln(264, "rstast.nim");
		(*result) = resizeString((*result), (*n).text->Sup.len + 0);
appendString((*result), (*n).text);
	}
	break;
	case ((NU8) 64):
	{
		nimln(266, "rstast.nim");
		{
			NIM_BOOL LOC48;
			LOC48 = 0;
			LOC48 = ((*d).verbatim == ((NI) 0));
			if (!(LOC48)) goto LA49;
			LOC48 = eqStrings((*n).text, ((NimStringDesc*) &TMP5054));
			LA49: ;
			if (!LOC48) goto LA50;
			nimln(267, "rstast.nim");
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5055));
		}
		goto LA46;
		LA50: ;
		{
			nimln(269, "rstast.nim");
			(*result) = resizeString((*result), (*n).text->Sup.len + 0);
appendString((*result), (*n).text);
		}
		LA46: ;
	}
	break;
	case ((NU8) 51):
	{
		NI TMP5057;
		NI TMP5058;
		nimln(271, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5021));
		nimln(272, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(273, "rstast.nim");
		(*result) = resizeString((*result), 11);
appendString((*result), ((NimStringDesc*) &TMP5056));
		nimln(275, "rstast.nim");
		TMP5057 = addInt((*d).indent, ((NI) 3));
		(*d).indent = (NI)(TMP5057);
		nimln(276, "rstast.nim");
		{
			if ((NU)(((NI) 2)) >= (NU)((*n).sons->Sup.len)) raiseIndexError();
			if (!!(((*n).sons->data[((NI) 2)] == NIM_NIL))) goto LA56;
			if ((NU)(((NI) 2)) >= (NU)((*n).sons->Sup.len)) raiseIndexError();
			renderrstsons_296224(d, (*n).sons->data[((NI) 2)], result);
		}
		LA56: ;
		nimln(277, "rstast.nim");
		TMP5058 = subInt((*d).indent, ((NI) 3));
		(*d).indent = (NI)(TMP5058);
	}
	break;
	case ((NU8) 44):
	{
		nimln(279, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5021));
		nimln(280, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(281, "rstast.nim");
		(*result) = resizeString((*result), 13);
appendString((*result), ((NimStringDesc*) &TMP5059));
	}
	break;
	default:
	{
		NimStringDesc* LOC60;
		nimln(283, "rstast.nim");
		LOC60 = 0;
		LOC60 = rawNewString(reprEnum((*n).kind, (&NTI296005))->Sup.len + 22);
appendString(LOC60, ((NimStringDesc*) &TMP5060));
appendString(LOC60, reprEnum((*n).kind, (&NTI296005)));
		(*result) = resizeString((*result), LOC60->Sup.len + 0);
appendString((*result), LOC60);
	}
	break;
	}
	}BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, renderrsttorst_296469)(Trstnode296011* n, NimStringDesc** result) {
	Trendercontext296208 d;
	nimfr("renderRstToRst", "rstast.nim")
	memset((void*)(&d), 0, sizeof(d));
	nimln(288, "rstast.nim");
	renderrsttorst_296214((&d), n, result);
	popFrame();
}

static N_INLINE(void*, seqtoptr_296516)(Trstnodeseq296009* x) {
	void* result;
	nimfr("seqToPtr", "system.nim")
	result = 0;
	nimln(1893, "system.nim");
	result = ((void*) (x));
	popFrame();
	return result;
}

N_NIMCALL(Jsonnodeobj289726*, renderrsttojsonnode_296483)(Trstnode296011* node) {
	Jsonnodeobj289726* result;
	TY296487 LOC1;
	nimfr("renderRstToJsonNode", "rstast.nim")
	result = 0;
	nimln(291, "rstast.nim");
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0].Field0 = copyString(((NimStringDesc*) &TMP5063));
	nimln(293, "rstast.nim");
	LOC1[0].Field1 = HEX25_290130(reprEnum((*node).kind, (&NTI296005)));
	LOC1[1].Field0 = copyString(((NimStringDesc*) &TMP5064));
	nimln(294, "rstast.nim");
	LOC1[1].Field1 = HEX25_290149(((NI64) ((*node).level)));
	result = HEX25_290206(LOC1, 2);
	nimln(296, "rstast.nim");
	{
		Jsonnodeobj289726* LOC6;
		if (!!(((*node).text == NIM_NIL))) goto LA4;
		nimln(297, "rstast.nim");
		LOC6 = 0;
		LOC6 = HEX25_290130((*node).text);
		add_292418(result, ((NimStringDesc*) &TMP5065), LOC6);
	}
	LA4: ;
	nimln(298, "rstast.nim");
	{
		NIM_BOOL LOC9;
		NIM_BOOL LOC10;
		TY289746* accm;
		Jsonnodeobj289726* LOC17;
		LOC9 = 0;
		LOC10 = 0;
		LOC10 = HEX3DHEX3D_296505((*node).sons, NIM_NIL);
		LOC9 = !(LOC10);
		if (!(LOC9)) goto LA11;
		LOC9 = (((NI) 0) < ((*node).sons ? (*node).sons->Sup.len : 0));
		LA11: ;
		if (!LOC9) goto LA12;
		nimln(299, "rstast.nim");
		accm = newseq_296627(((NI)chckRange(((*node).sons ? (*node).sons->Sup.len : 0), ((NI) 0), ((NI) IL64(9223372036854775807)))));
		{
			NI i_296717;
			Trstnode296011* son_296718;
			Trstnodeseq296009* HEX3Atmp_296722;
			NI i_296725;
			i_296717 = 0;
			son_296718 = 0;
			HEX3Atmp_296722 = 0;
			nimln(300, "rstast.nim");
			HEX3Atmp_296722 = (*node).sons;
			nimln(1789, "system.nim");
			i_296725 = ((NI) 0);
			{
				nimln(1790, "system.nim");
				while (1) {
					NI TMP5066;
					if (!(i_296725 < (HEX3Atmp_296722 ? HEX3Atmp_296722->Sup.len : 0))) goto LA16;
					nimln(1789, "system.nim");
					i_296717 = i_296725;
					nimln(1791, "system.nim");
					if ((NU)(i_296725) >= (NU)(HEX3Atmp_296722->Sup.len)) raiseIndexError();
					son_296718 = HEX3Atmp_296722->data[i_296725];
					nimln(301, "rstast.nim");
					if ((NU)(i_296717) >= (NU)(accm->Sup.len)) raiseIndexError();
					asgnRefNoCycle((void**) (&accm->data[i_296717]), renderrsttojsonnode_296483(son_296718));
					nimln(1792, "system.nim");
					TMP5066 = addInt(i_296725, ((NI) 1));
					i_296725 = (NI)(TMP5066);
				} LA16: ;
			}
		}
		nimln(302, "rstast.nim");
		LOC17 = 0;
		LOC17 = HEX25_290303(accm->data, accm->Sup.len);
		add_292418(result, ((NimStringDesc*) &TMP5067), LOC17);
	}
	LA12: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, renderrsttojson_296741)(Trstnode296011* node) {
	NimStringDesc* result;
	Jsonnodeobj289726* LOC1;
	nimfr("renderRstToJson", "rstast.nim")
	result = 0;
	nimln(305, "rstast.nim");
	nimln(313, "rstast.nim");
	LOC1 = 0;
	LOC1 = renderrsttojsonnode_296483(node);
	result = pretty_293446(LOC1, ((NI) 2));
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, docutils_rstastInit)(void) {
	nimfr("rstast", "rstast.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, docutils_rstastDatInit)(void) {
static TNimNode* TMP5008[4];
static TNimNode* TMP5009[65];
NI TMP5011;
static char* NIM_CONST TMP5010[65] = {
"rnInner", 
"rnHeadline", 
"rnOverline", 
"rnTransition", 
"rnParagraph", 
"rnBulletList", 
"rnBulletItem", 
"rnEnumList", 
"rnEnumItem", 
"rnDefList", 
"rnDefItem", 
"rnDefName", 
"rnDefBody", 
"rnFieldList", 
"rnField", 
"rnFieldName", 
"rnFieldBody", 
"rnOptionList", 
"rnOptionListItem", 
"rnOptionGroup", 
"rnOption", 
"rnOptionString", 
"rnOptionArgument", 
"rnDescription", 
"rnLiteralBlock", 
"rnQuotedLiteralBlock", 
"rnLineBlock", 
"rnLineBlockItem", 
"rnBlockQuote", 
"rnTable", 
"rnGridTable", 
"rnTableRow", 
"rnTableHeaderCell", 
"rnTableDataCell", 
"rnLabel", 
"rnFootnote", 
"rnCitation", 
"rnStandaloneHyperlink", 
"rnHyperlink", 
"rnRef", 
"rnDirective", 
"rnDirArg", 
"rnRaw", 
"rnTitle", 
"rnContents", 
"rnImage", 
"rnFigure", 
"rnCodeBlock", 
"rnRawHtml", 
"rnRawLatex", 
"rnContainer", 
"rnIndex", 
"rnSubstitutionDef", 
"rnGeneralRole", 
"rnSub", 
"rnSup", 
"rnIdx", 
"rnEmphasis", 
"rnStrongEmphasis", 
"rnTripleEmphasis", 
"rnInterpretedText", 
"rnInlineLiteral", 
"rnSubstitutionReferences", 
"rnSmiley", 
"rnLeaf"};
static TNimNode TMP4807[71];
NTI296011.size = sizeof(Trstnode296011);
NTI296011.kind = 18;
NTI296011.base = 0;
NTI296011.flags = 2;
TMP5008[0] = &TMP4807[1];
NTI296005.size = sizeof(NU8);
NTI296005.kind = 14;
NTI296005.base = 0;
NTI296005.flags = 3;
for (TMP5011 = 0; TMP5011 < 65; TMP5011++) {
TMP4807[TMP5011+2].kind = 1;
TMP4807[TMP5011+2].offset = TMP5011;
TMP4807[TMP5011+2].name = TMP5010[TMP5011];
TMP5009[TMP5011] = &TMP4807[TMP5011+2];
}
TMP4807[67].len = 65; TMP4807[67].kind = 2; TMP4807[67].sons = &TMP5009[0];
NTI296005.node = &TMP4807[67];
TMP4807[1].kind = 1;
TMP4807[1].offset = offsetof(Trstnode296011, kind);
TMP4807[1].typ = (&NTI296005);
TMP4807[1].name = "kind";
TMP5008[1] = &TMP4807[68];
TMP4807[68].kind = 1;
TMP4807[68].offset = offsetof(Trstnode296011, text);
TMP4807[68].typ = (&NTI149);
TMP4807[68].name = "text";
TMP5008[2] = &TMP4807[69];
TMP4807[69].kind = 1;
TMP4807[69].offset = offsetof(Trstnode296011, level);
TMP4807[69].typ = (&NTI108);
TMP4807[69].name = "level";
TMP5008[3] = &TMP4807[70];
NTI296009.size = sizeof(Trstnodeseq296009*);
NTI296009.kind = 24;
NTI296009.base = (&NTI296007);
NTI296009.flags = 2;
NTI296009.marker = TMP5012;
TMP4807[70].kind = 1;
TMP4807[70].offset = offsetof(Trstnode296011, sons);
TMP4807[70].typ = (&NTI296009);
TMP4807[70].name = "sons";
TMP4807[0].len = 4; TMP4807[0].kind = 2; TMP4807[0].sons = &TMP5008[0];
NTI296011.node = &TMP4807[0];
NTI296007.size = sizeof(Trstnode296011*);
NTI296007.kind = 22;
NTI296007.base = (&NTI296011);
NTI296007.flags = 2;
NTI296007.marker = TMP5013;
}

