/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Trstnode297011 Trstnode297011;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Trstnodeseq297009 Trstnodeseq297009;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct Trendercontext297208 Trendercontext297208;
typedef struct TY290746 TY290746;
typedef struct Jsonnodeobj290726 Jsonnodeobj290726;
typedef struct TY290742 TY290742;
typedef struct Tbasechunk28038 Tbasechunk28038;
typedef struct Tfreecell28030 Tfreecell28030;
typedef struct TY290741 TY290741;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Trstnode297011  {
NU8 kind;
NimStringDesc* text;
NI level;
Trstnodeseq297009* sons;
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
typedef NIM_CHAR TY297275[9];
struct  Trendercontext297208  {
NI indent;
NI verbatim;
};
struct TY290742 {
NimStringDesc* Field0;
Jsonnodeobj290726* Field1;
};
typedef TY290742 TY297487[2];
typedef NI TY28020[8];
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
struct  Jsonnodeobj290726  {
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
struct {TY290741* fields;
} S6;
struct {TY290746* elems;
} S7;
} kindU;
};
struct  Tfreecell28030  {
Tfreecell28030* next;
NI zerofield;
};
struct Trstnodeseq297009 {
  TGenericSeq Sup;
  Trstnode297011* data[SEQ_DECL_SIZE];
};
struct TY290746 {
  TGenericSeq Sup;
  Jsonnodeobj290726* data[SEQ_DECL_SIZE];
};
struct TY290741 {
  TGenericSeq Sup;
  TY290742 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, len_297084)(Trstnode297011* n);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20201)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(Trstnode297011*, newrstnode_297102)(NU8 kind);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP5003)(void* p, NI op);
N_NIMCALL(void, TMP5004)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46947*, usrtocell_50446)(void* usr);
static N_INLINE(void, rtladdzct_52004)(Tcell46947* c);
N_NOINLINE(void, addzct_50417)(Tcellseq46963* s, Tcell46947* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(Trstnode297011*, newrstnode_297136)(NU8 kind, NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(Trstnode297011*, lastson_297147)(Trstnode297011* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, add_297165)(Trstnode297011* father, Trstnode297011* son);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, addifnotnil_297185)(Trstnode297011* father, Trstnode297011* son);
N_NIMCALL(void, renderrstsons_297224)(Trendercontext297208* d, Trstnode297011* n, NimStringDesc** result);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, renderrsttorst_297214)(Trendercontext297208* d, Trstnode297011* n, NimStringDesc** result);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c, NI count);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_83129, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, renderrsttorst_297469)(Trstnode297011* n, NimStringDesc** result);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_297505)(Trstnodeseq297009* x, Trstnodeseq297009* y);
static N_INLINE(void*, seqtoptr_297516)(Trstnodeseq297009* x);
N_NIMCALL(TY290746*, newseq_297627)(NI len);
N_NIMCALL(Jsonnodeobj290726*, renderrsttojsonnode_297483)(Trstnode297011* node);
N_NIMCALL(Jsonnodeobj290726*, HEX25_291206)(TY290742* keyvals, NI keyvalsLen0);
N_NIMCALL(Jsonnodeobj290726*, HEX25_291130)(NimStringDesc* s);
N_NIMCALL(Jsonnodeobj290726*, HEX25_291149)(NI64 n);
N_NIMCALL(void, add_293418)(Jsonnodeobj290726* obj, NimStringDesc* key, Jsonnodeobj290726* val);
N_NIMCALL(Jsonnodeobj290726*, HEX25_291303)(Jsonnodeobj290726** elements, NI elementsLen0);
N_NIMCALL(NimStringDesc*, renderrsttojson_297741)(Trstnode297011* node);
N_NIMCALL(NimStringDesc*, pretty_294446)(Jsonnodeobj290726* node, NI indent);
NIM_CONST TY297275 lvltochar_297274 = {33,
61,
45,
126,
96,
60,
42,
124,
43}
;
STRING_LITERAL(TMP5008, "\012", 1);
STRING_LITERAL(TMP5010, "", 0);
STRING_LITERAL(TMP5012, "\012\012", 2);
STRING_LITERAL(TMP5015, "* ", 2);
STRING_LITERAL(TMP5018, "(#) ", 4);
STRING_LITERAL(TMP5021, "  ", 2);
STRING_LITERAL(TMP5028, "| ", 2);
STRING_LITERAL(TMP5031, "`", 1);
STRING_LITERAL(TMP5032, "`_", 2);
STRING_LITERAL(TMP5033, " <", 2);
STRING_LITERAL(TMP5034, ">`_", 3);
STRING_LITERAL(TMP5035, "`:", 2);
STRING_LITERAL(TMP5036, "`:sub:", 6);
STRING_LITERAL(TMP5037, "`:sup:", 6);
STRING_LITERAL(TMP5038, "`:idx:", 6);
STRING_LITERAL(TMP5039, "*", 1);
STRING_LITERAL(TMP5040, "**", 2);
STRING_LITERAL(TMP5041, "***", 3);
STRING_LITERAL(TMP5043, "``", 2);
STRING_LITERAL(TMP5045, "\\", 1);
STRING_LITERAL(TMP5046, "\\\\", 2);
STRING_LITERAL(TMP5047, ".. index::\012", 11);
STRING_LITERAL(TMP5050, ".. contents::", 13);
STRING_LITERAL(TMP5051, "Error: cannot render: ", 22);
STRING_LITERAL(TMP5054, "kind", 4);
STRING_LITERAL(TMP5055, "level", 5);
STRING_LITERAL(TMP5056, "text", 4);
STRING_LITERAL(TMP5058, "sons", 4);
extern TFrame* frameptr_17242;
TNimType NTI297011; /* TRstNode */
TNimType NTI297005; /* TRstNodeKind */
extern TNimType NTI149; /* string */
extern TNimType NTI108; /* int */
TNimType NTI297009; /* TRstNodeSeq */
TNimType NTI297007; /* PRstNode */
extern Tgcheap48816 gch_48844;

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

N_NIMCALL(NI, len_297084)(Trstnode297011* n) {
	NI result;
	nimfr("len", "rstast.nim")
	result = 0;
	nimln(75, "rstast.nim");
	result = ((*n).sons ? (*n).sons->Sup.len : 0);
	popFrame();
	return result;
}
N_NIMCALL(void, TMP5003)(void* p, NI op) {
	Trstnodeseq297009* a;
	NI LOC1;
	a = (Trstnodeseq297009*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}
N_NIMCALL(void, TMP5004)(void* p, NI op) {
	Trstnode297011* a;
	a = (Trstnode297011*)p;
	nimGCvisit((void*)(*a).text, op);
	nimGCvisit((void*)(*a).sons, op);
}

static N_INLINE(Tcell46947*, usrtocell_50446)(void* usr) {
	Tcell46947* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	result = ((Tcell46947*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46947))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_52004)(Tcell46947* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_50417((&gch_48844.zct), c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46947* c;
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

N_NIMCALL(Trstnode297011*, newrstnode_297102)(NU8 kind) {
	Trstnode297011* result;
	nimfr("newRstNode", "rstast.nim")
	result = 0;
	nimln(78, "rstast.nim");
	result = (Trstnode297011*) newObj((&NTI297007), sizeof(Trstnode297011));
	nimln(79, "rstast.nim");
	if ((*result).sons) nimGCunrefNoCycle((*result).sons);
	(*result).sons = (Trstnodeseq297009*) newSeqRC1((&NTI297009), 0);
	nimln(80, "rstast.nim");
	(*result).kind = kind;
	popFrame();
	return result;
}

N_NIMCALL(Trstnode297011*, newrstnode_297136)(NU8 kind, NimStringDesc* s) {
	Trstnode297011* result;
	NimStringDesc* LOC1;
	nimfr("newRstNode", "rstast.nim")
	result = 0;
	nimln(83, "rstast.nim");
	result = newrstnode_297102(kind);
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

N_NIMCALL(Trstnode297011*, lastson_297147)(Trstnode297011* n) {
	Trstnode297011* result;
	NI TMP5005;
	nimfr("lastSon", "rstast.nim")
	result = 0;
	nimln(87, "rstast.nim");
	TMP5005 = subInt(((*n).sons ? (*n).sons->Sup.len : 0), ((NI) 1));
	if ((NU)((NI)(TMP5005)) >= (NU)((*n).sons->Sup.len)) raiseIndexError();
	result = (*n).sons->data[(NI)(TMP5005)];
	popFrame();
	return result;
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
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
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

N_NIMCALL(void, add_297165)(Trstnode297011* father, Trstnode297011* son) {
	nimfr("add", "rstast.nim")
	nimln(90, "rstast.nim");
	(*father).sons = (Trstnodeseq297009*) incrSeq(&((*father).sons)->Sup, sizeof(Trstnode297011*));
	asgnRefNoCycle((void**) (&(*father).sons->data[(*father).sons->Sup.len-1]), son);
	popFrame();
}

N_NIMCALL(void, addifnotnil_297185)(Trstnode297011* father, Trstnode297011* son) {
	nimfr("addIfNotNil", "rstast.nim")
	nimln(93, "rstast.nim");
	{
		if (!!((son == NIM_NIL))) goto LA3;
		add_297165(father, son);
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

N_NIMCALL(void, renderrstsons_297224)(Trendercontext297208* d, Trstnode297011* n, NimStringDesc** result) {
	nimfr("renderRstSons", "rstast.nim")
	{
		NI i_297243;
		NI HEX3Atmp_297245;
		NI LOC2;
		NI TMP5006;
		NI res_297248;
		i_297243 = 0;
		HEX3Atmp_297245 = 0;
		nimln(105, "rstast.nim");
		LOC2 = 0;
		LOC2 = len_297084(n);
		TMP5006 = subInt(LOC2, ((NI) 1));
		HEX3Atmp_297245 = (NI)(TMP5006);
		nimln(1598, "system.nim");
		res_297248 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP5007;
				if (!(res_297248 <= HEX3Atmp_297245)) goto LA4;
				nimln(1600, "system.nim");
				i_297243 = res_297248;
				nimln(106, "rstast.nim");
				if ((NU)(i_297243) >= (NU)((*n).sons->Sup.len)) raiseIndexError();
				renderrsttorst_297214(d, (*n).sons->data[i_297243], result);
				nimln(1614, "system.nim");
				TMP5007 = addInt(res_297248, ((NI) 1));
				res_297248 = (NI)(TMP5007);
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

N_NIMCALL(void, renderrsttorst_297214)(Trendercontext297208* d, Trstnode297011* n, NimStringDesc** result) {
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
		renderrstsons_297224(d, n, result);
	}
	break;
	case ((NU8) 1):
	{
		NI oldlen;
		NI headlinelen;
		NI TMP5009;
		NimStringDesc* LOC7;
		nimln(119, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP5008));
		nimln(120, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(122, "rstast.nim");
		oldlen = ((*result) ? (*result)->Sup.len : 0);
		nimln(123, "rstast.nim");
		renderrstsons_297224(d, n, result);
		nimln(124, "rstast.nim");
		TMP5009 = subInt(((*result) ? (*result)->Sup.len : 0), oldlen);
		headlinelen = (NI)(TMP5009);
		nimln(126, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP5008));
		nimln(127, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(128, "rstast.nim");
		if ((NU)((*n).level) > (NU)(8)) raiseIndexError();
		LOC7 = 0;
		LOC7 = nsuRepeatChar(lvltochar_297274[((*n).level)- 0], ((NI)chckRange(headlinelen, ((NI) 0), ((NI) IL64(9223372036854775807)))));
		(*result) = resizeString((*result), LOC7->Sup.len + 0);
appendString((*result), LOC7);
	}
	break;
	case ((NU8) 2):
	{
		NimStringDesc* headline;
		NimStringDesc* lvl;
		NI TMP5011;
		nimln(130, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP5008));
		nimln(131, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(133, "rstast.nim");
		headline = copyString(((NimStringDesc*) &TMP5010));
		nimln(134, "rstast.nim");
		renderrstsons_297224(d, n, (&headline));
		nimln(136, "rstast.nim");
		if ((NU)((*n).level) > (NU)(8)) raiseIndexError();
		TMP5011 = subInt((headline ? headline->Sup.len : 0), (*d).indent);
		lvl = nsuRepeatChar(lvltochar_297274[((*n).level)- 0], ((NI)chckRange((NI)(TMP5011), ((NI) 0), ((NI) IL64(9223372036854775807)))));
		nimln(137, "rstast.nim");
		(*result) = resizeString((*result), lvl->Sup.len + 0);
appendString((*result), lvl);
		nimln(138, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP5008));
		nimln(139, "rstast.nim");
		(*result) = resizeString((*result), headline->Sup.len + 0);
appendString((*result), headline);
		nimln(141, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP5008));
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
		NI TMP5013;
		NimStringDesc* LOC10;
		nimln(145, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5012));
		nimln(146, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(147, "rstast.nim");
		TMP5013 = subInt(((NI) 78), (*d).indent);
		LOC10 = 0;
		LOC10 = nsuRepeatChar(45, ((NI)chckRange((NI)(TMP5013), ((NI) 0), ((NI) IL64(9223372036854775807)))));
		(*result) = resizeString((*result), LOC10->Sup.len + 0);
appendString((*result), LOC10);
		nimln(148, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5012));
	}
	break;
	case ((NU8) 4):
	{
		nimln(150, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5012));
		nimln(151, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(152, "rstast.nim");
		renderrstsons_297224(d, n, result);
	}
	break;
	case ((NU8) 6):
	{
		NI TMP5014;
		NimStringDesc* tmp;
		NI TMP5016;
		nimln(154, "rstast.nim");
		TMP5014 = addInt((*d).indent, ((NI) 2));
		(*d).indent = (NI)(TMP5014);
		nimln(155, "rstast.nim");
		tmp = copyString(((NimStringDesc*) &TMP5010));
		nimln(156, "rstast.nim");
		renderrstsons_297224(d, n, (&tmp));
		nimln(157, "rstast.nim");
		{
			if (!(((NI) 0) < (tmp ? tmp->Sup.len : 0))) goto LA15;
			nimln(158, "rstast.nim");
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP5008));
			nimln(159, "rstast.nim");
			(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
			nimln(160, "rstast.nim");
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5015));
			nimln(161, "rstast.nim");
			(*result) = resizeString((*result), tmp->Sup.len + 0);
appendString((*result), tmp);
		}
		LA15: ;
		nimln(162, "rstast.nim");
		TMP5016 = subInt((*d).indent, ((NI) 2));
		(*d).indent = (NI)(TMP5016);
	}
	break;
	case ((NU8) 8):
	{
		NI TMP5017;
		NimStringDesc* tmp;
		NI TMP5019;
		nimln(164, "rstast.nim");
		TMP5017 = addInt((*d).indent, ((NI) 4));
		(*d).indent = (NI)(TMP5017);
		nimln(165, "rstast.nim");
		tmp = copyString(((NimStringDesc*) &TMP5010));
		nimln(166, "rstast.nim");
		renderrstsons_297224(d, n, (&tmp));
		nimln(167, "rstast.nim");
		{
			if (!(((NI) 0) < (tmp ? tmp->Sup.len : 0))) goto LA20;
			nimln(168, "rstast.nim");
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP5008));
			nimln(169, "rstast.nim");
			(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
			nimln(170, "rstast.nim");
			(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TMP5018));
			nimln(171, "rstast.nim");
			(*result) = resizeString((*result), tmp->Sup.len + 0);
appendString((*result), tmp);
		}
		LA20: ;
		nimln(172, "rstast.nim");
		TMP5019 = subInt((*d).indent, ((NI) 4));
		(*d).indent = (NI)(TMP5019);
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
		renderrstsons_297224(d, n, result);
	}
	break;
	case ((NU8) 11):
	{
		nimln(177, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5012));
		nimln(178, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(179, "rstast.nim");
		renderrstsons_297224(d, n, result);
	}
	break;
	case ((NU8) 12):
	{
		NI TMP5020;
		NI TMP5022;
		nimln(181, "rstast.nim");
		TMP5020 = addInt((*d).indent, ((NI) 2));
		(*d).indent = (NI)(TMP5020);
		nimln(182, "rstast.nim");
		{
			if ((NU)(((NI) 0)) >= (NU)((*n).sons->Sup.len)) raiseIndexError();
			if (!!(((*(*n).sons->data[((NI) 0)]).kind == ((NU8) 5)))) goto LA27;
			nimln(183, "rstast.nim");
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP5008));
			nimln(184, "rstast.nim");
			(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
			nimln(185, "rstast.nim");
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5021));
		}
		LA27: ;
		nimln(186, "rstast.nim");
		renderrstsons_297224(d, n, result);
		nimln(187, "rstast.nim");
		TMP5022 = subInt((*d).indent, ((NI) 2));
		(*d).indent = (NI)(TMP5022);
	}
	break;
	case ((NU8) 14):
	{
		NimStringDesc* tmp;
		NI L;
		NI TMP5023;
		NI TMP5024;
		NI TMP5025;
		NI TMP5026;
		NimStringDesc* LOC30;
		NI TMP5027;
		nimln(189, "rstast.nim");
		tmp = copyString(((NimStringDesc*) &TMP5010));
		nimln(190, "rstast.nim");
		if ((NU)(((NI) 0)) >= (NU)((*n).sons->Sup.len)) raiseIndexError();
		renderrsttorst_297214(d, (*n).sons->data[((NI) 0)], (&tmp));
		nimln(192, "rstast.nim");
		TMP5023 = addInt((tmp ? tmp->Sup.len : 0), ((NI) 3));
		L = (((NI)(TMP5023) >= ((NI) 30)) ? (NI)(TMP5023) : ((NI) 30));
		nimln(193, "rstast.nim");
		TMP5024 = addInt((*d).indent, L);
		(*d).indent = (NI)(TMP5024);
		nimln(195, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP5008));
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
		TMP5025 = subInt(L, (tmp ? tmp->Sup.len : 0));
		TMP5026 = subInt((NI)(TMP5025), ((NI) 2));
		LOC30 = 0;
		LOC30 = nsuRepeatChar(32, ((NI)chckRange((NI)(TMP5026), ((NI) 0), ((NI) IL64(9223372036854775807)))));
		(*result) = resizeString((*result), LOC30->Sup.len + 0);
appendString((*result), LOC30);
		nimln(201, "rstast.nim");
		if ((NU)(((NI) 1)) >= (NU)((*n).sons->Sup.len)) raiseIndexError();
		renderrsttorst_297214(d, (*n).sons->data[((NI) 1)], result);
		nimln(203, "rstast.nim");
		TMP5027 = subInt((*d).indent, L);
		(*d).indent = (NI)(TMP5027);
	}
	break;
	case ((NU8) 27):
	{
		nimln(205, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP5008));
		nimln(206, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(207, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5028));
		nimln(208, "rstast.nim");
		renderrstsons_297224(d, n, result);
	}
	break;
	case ((NU8) 28):
	{
		NI TMP5029;
		NI TMP5030;
		nimln(210, "rstast.nim");
		TMP5029 = addInt((*d).indent, ((NI) 2));
		(*d).indent = (NI)(TMP5029);
		nimln(211, "rstast.nim");
		renderrstsons_297224(d, n, result);
		nimln(212, "rstast.nim");
		TMP5030 = subInt((*d).indent, ((NI) 2));
		(*d).indent = (NI)(TMP5030);
	}
	break;
	case ((NU8) 39):
	{
		nimln(214, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP5031));
		nimln(215, "rstast.nim");
		renderrstsons_297224(d, n, result);
		nimln(216, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5032));
	}
	break;
	case ((NU8) 38):
	{
		nimln(218, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(219, "rstast.nim");
		if ((NU)(((NI) 0)) >= (NU)((*n).sons->Sup.len)) raiseIndexError();
		renderrsttorst_297214(d, (*n).sons->data[((NI) 0)], result);
		nimln(220, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5033));
		nimln(221, "rstast.nim");
		if ((NU)(((NI) 1)) >= (NU)((*n).sons->Sup.len)) raiseIndexError();
		renderrsttorst_297214(d, (*n).sons->data[((NI) 1)], result);
		nimln(222, "rstast.nim");
		(*result) = resizeString((*result), 3);
appendString((*result), ((NimStringDesc*) &TMP5034));
	}
	break;
	case ((NU8) 53):
	{
		nimln(224, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(225, "rstast.nim");
		if ((NU)(((NI) 0)) >= (NU)((*n).sons->Sup.len)) raiseIndexError();
		renderrsttorst_297214(d, (*n).sons->data[((NI) 0)], result);
		nimln(226, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5035));
		nimln(227, "rstast.nim");
		if ((NU)(((NI) 1)) >= (NU)((*n).sons->Sup.len)) raiseIndexError();
		renderrsttorst_297214(d, (*n).sons->data[((NI) 1)], result);
		nimln(228, "rstast.nim");
		(*result) = addChar((*result), 58);
	}
	break;
	case ((NU8) 54):
	{
		nimln(230, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(231, "rstast.nim");
		renderrstsons_297224(d, n, result);
		nimln(232, "rstast.nim");
		(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP5036));
	}
	break;
	case ((NU8) 55):
	{
		nimln(234, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(235, "rstast.nim");
		renderrstsons_297224(d, n, result);
		nimln(236, "rstast.nim");
		(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP5037));
	}
	break;
	case ((NU8) 56):
	{
		nimln(238, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(239, "rstast.nim");
		renderrstsons_297224(d, n, result);
		nimln(240, "rstast.nim");
		(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP5038));
	}
	break;
	case ((NU8) 57):
	{
		nimln(242, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP5039));
		nimln(243, "rstast.nim");
		renderrstsons_297224(d, n, result);
		nimln(244, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP5039));
	}
	break;
	case ((NU8) 58):
	{
		nimln(246, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5040));
		nimln(247, "rstast.nim");
		renderrstsons_297224(d, n, result);
		nimln(248, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5040));
	}
	break;
	case ((NU8) 59):
	{
		nimln(250, "rstast.nim");
		(*result) = resizeString((*result), 3);
appendString((*result), ((NimStringDesc*) &TMP5041));
		nimln(251, "rstast.nim");
		renderrstsons_297224(d, n, result);
		nimln(252, "rstast.nim");
		(*result) = resizeString((*result), 3);
appendString((*result), ((NimStringDesc*) &TMP5041));
	}
	break;
	case ((NU8) 60):
	{
		nimln(254, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(255, "rstast.nim");
		renderrstsons_297224(d, n, result);
		nimln(256, "rstast.nim");
		(*result) = addChar((*result), 96);
	}
	break;
	case ((NU8) 61):
	{
		NI TMP5042;
		NI TMP5044;
		nimln(258, "rstast.nim");
		TMP5042 = addInt((*d).verbatim, ((NI) 1));
		(*d).verbatim = (NI)(TMP5042);
		nimln(259, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5043));
		nimln(260, "rstast.nim");
		renderrstsons_297224(d, n, result);
		nimln(261, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5043));
		nimln(262, "rstast.nim");
		TMP5044 = subInt((*d).verbatim, ((NI) 1));
		(*d).verbatim = (NI)(TMP5044);
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
			LOC48 = eqStrings((*n).text, ((NimStringDesc*) &TMP5045));
			LA49: ;
			if (!LOC48) goto LA50;
			nimln(267, "rstast.nim");
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5046));
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
		NI TMP5048;
		NI TMP5049;
		nimln(271, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5012));
		nimln(272, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(273, "rstast.nim");
		(*result) = resizeString((*result), 11);
appendString((*result), ((NimStringDesc*) &TMP5047));
		nimln(275, "rstast.nim");
		TMP5048 = addInt((*d).indent, ((NI) 3));
		(*d).indent = (NI)(TMP5048);
		nimln(276, "rstast.nim");
		{
			if ((NU)(((NI) 2)) >= (NU)((*n).sons->Sup.len)) raiseIndexError();
			if (!!(((*n).sons->data[((NI) 2)] == NIM_NIL))) goto LA56;
			if ((NU)(((NI) 2)) >= (NU)((*n).sons->Sup.len)) raiseIndexError();
			renderrstsons_297224(d, (*n).sons->data[((NI) 2)], result);
		}
		LA56: ;
		nimln(277, "rstast.nim");
		TMP5049 = subInt((*d).indent, ((NI) 3));
		(*d).indent = (NI)(TMP5049);
	}
	break;
	case ((NU8) 44):
	{
		nimln(279, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP5012));
		nimln(280, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(281, "rstast.nim");
		(*result) = resizeString((*result), 13);
appendString((*result), ((NimStringDesc*) &TMP5050));
	}
	break;
	default:
	{
		NimStringDesc* LOC60;
		nimln(283, "rstast.nim");
		LOC60 = 0;
		LOC60 = rawNewString(reprEnum((*n).kind, (&NTI297005))->Sup.len + 22);
appendString(LOC60, ((NimStringDesc*) &TMP5051));
appendString(LOC60, reprEnum((*n).kind, (&NTI297005)));
		(*result) = resizeString((*result), LOC60->Sup.len + 0);
appendString((*result), LOC60);
	}
	break;
	}
	}BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, renderrsttorst_297469)(Trstnode297011* n, NimStringDesc** result) {
	Trendercontext297208 d;
	nimfr("renderRstToRst", "rstast.nim")
	memset((void*)(&d), 0, sizeof(d));
	nimln(288, "rstast.nim");
	renderrsttorst_297214((&d), n, result);
	popFrame();
}

static N_INLINE(void*, seqtoptr_297516)(Trstnodeseq297009* x) {
	void* result;
	nimfr("seqToPtr", "system.nim")
	result = 0;
	nimln(1893, "system.nim");
	result = ((void*) (x));
	popFrame();
	return result;
}

N_NIMCALL(Jsonnodeobj290726*, renderrsttojsonnode_297483)(Trstnode297011* node) {
	Jsonnodeobj290726* result;
	TY297487 LOC1;
	nimfr("renderRstToJsonNode", "rstast.nim")
	result = 0;
	nimln(291, "rstast.nim");
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0].Field0 = copyString(((NimStringDesc*) &TMP5054));
	nimln(293, "rstast.nim");
	LOC1[0].Field1 = HEX25_291130(reprEnum((*node).kind, (&NTI297005)));
	LOC1[1].Field0 = copyString(((NimStringDesc*) &TMP5055));
	nimln(294, "rstast.nim");
	LOC1[1].Field1 = HEX25_291149(((NI64) ((*node).level)));
	result = HEX25_291206(LOC1, 2);
	nimln(296, "rstast.nim");
	{
		Jsonnodeobj290726* LOC6;
		if (!!(((*node).text == NIM_NIL))) goto LA4;
		nimln(297, "rstast.nim");
		LOC6 = 0;
		LOC6 = HEX25_291130((*node).text);
		add_293418(result, ((NimStringDesc*) &TMP5056), LOC6);
	}
	LA4: ;
	nimln(298, "rstast.nim");
	{
		NIM_BOOL LOC9;
		NIM_BOOL LOC10;
		TY290746* accm;
		Jsonnodeobj290726* LOC17;
		LOC9 = 0;
		LOC10 = 0;
		LOC10 = HEX3DHEX3D_297505((*node).sons, NIM_NIL);
		LOC9 = !(LOC10);
		if (!(LOC9)) goto LA11;
		LOC9 = (((NI) 0) < ((*node).sons ? (*node).sons->Sup.len : 0));
		LA11: ;
		if (!LOC9) goto LA12;
		nimln(299, "rstast.nim");
		accm = newseq_297627(((NI)chckRange(((*node).sons ? (*node).sons->Sup.len : 0), ((NI) 0), ((NI) IL64(9223372036854775807)))));
		{
			NI i_297717;
			Trstnode297011* son_297718;
			Trstnodeseq297009* HEX3Atmp_297722;
			NI i_297725;
			i_297717 = 0;
			son_297718 = 0;
			HEX3Atmp_297722 = 0;
			nimln(300, "rstast.nim");
			HEX3Atmp_297722 = (*node).sons;
			nimln(1789, "system.nim");
			i_297725 = ((NI) 0);
			{
				nimln(1790, "system.nim");
				while (1) {
					NI TMP5057;
					if (!(i_297725 < (HEX3Atmp_297722 ? HEX3Atmp_297722->Sup.len : 0))) goto LA16;
					nimln(1789, "system.nim");
					i_297717 = i_297725;
					nimln(1791, "system.nim");
					if ((NU)(i_297725) >= (NU)(HEX3Atmp_297722->Sup.len)) raiseIndexError();
					son_297718 = HEX3Atmp_297722->data[i_297725];
					nimln(301, "rstast.nim");
					if ((NU)(i_297717) >= (NU)(accm->Sup.len)) raiseIndexError();
					asgnRefNoCycle((void**) (&accm->data[i_297717]), renderrsttojsonnode_297483(son_297718));
					nimln(1792, "system.nim");
					TMP5057 = addInt(i_297725, ((NI) 1));
					i_297725 = (NI)(TMP5057);
				} LA16: ;
			}
		}
		nimln(302, "rstast.nim");
		LOC17 = 0;
		LOC17 = HEX25_291303(accm->data, accm->Sup.len);
		add_293418(result, ((NimStringDesc*) &TMP5058), LOC17);
	}
	LA12: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, renderrsttojson_297741)(Trstnode297011* node) {
	NimStringDesc* result;
	Jsonnodeobj290726* LOC1;
	nimfr("renderRstToJson", "rstast.nim")
	result = 0;
	nimln(305, "rstast.nim");
	nimln(313, "rstast.nim");
	LOC1 = 0;
	LOC1 = renderrsttojsonnode_297483(node);
	result = pretty_294446(LOC1, ((NI) 2));
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, docutils_rstastInit)(void) {
	nimfr("rstast", "rstast.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, docutils_rstastDatInit)(void) {
static TNimNode* TMP4999[4];
static TNimNode* TMP5000[65];
NI TMP5002;
static char* NIM_CONST TMP5001[65] = {
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
static TNimNode TMP4798[71];
NTI297011.size = sizeof(Trstnode297011);
NTI297011.kind = 18;
NTI297011.base = 0;
NTI297011.flags = 2;
TMP4999[0] = &TMP4798[1];
NTI297005.size = sizeof(NU8);
NTI297005.kind = 14;
NTI297005.base = 0;
NTI297005.flags = 3;
for (TMP5002 = 0; TMP5002 < 65; TMP5002++) {
TMP4798[TMP5002+2].kind = 1;
TMP4798[TMP5002+2].offset = TMP5002;
TMP4798[TMP5002+2].name = TMP5001[TMP5002];
TMP5000[TMP5002] = &TMP4798[TMP5002+2];
}
TMP4798[67].len = 65; TMP4798[67].kind = 2; TMP4798[67].sons = &TMP5000[0];
NTI297005.node = &TMP4798[67];
TMP4798[1].kind = 1;
TMP4798[1].offset = offsetof(Trstnode297011, kind);
TMP4798[1].typ = (&NTI297005);
TMP4798[1].name = "kind";
TMP4999[1] = &TMP4798[68];
TMP4798[68].kind = 1;
TMP4798[68].offset = offsetof(Trstnode297011, text);
TMP4798[68].typ = (&NTI149);
TMP4798[68].name = "text";
TMP4999[2] = &TMP4798[69];
TMP4798[69].kind = 1;
TMP4798[69].offset = offsetof(Trstnode297011, level);
TMP4798[69].typ = (&NTI108);
TMP4798[69].name = "level";
TMP4999[3] = &TMP4798[70];
NTI297009.size = sizeof(Trstnodeseq297009*);
NTI297009.kind = 24;
NTI297009.base = (&NTI297007);
NTI297009.flags = 2;
NTI297009.marker = TMP5003;
TMP4798[70].kind = 1;
TMP4798[70].offset = offsetof(Trstnode297011, sons);
TMP4798[70].typ = (&NTI297009);
TMP4798[70].name = "sons";
TMP4798[0].len = 4; TMP4798[0].kind = 2; TMP4798[0].sons = &TMP4999[0];
NTI297011.node = &TMP4798[0];
NTI297007.size = sizeof(Trstnode297011*);
NTI297007.kind = 22;
NTI297007.base = (&NTI297011);
NTI297007.flags = 2;
NTI297007.marker = TMP5004;
}

