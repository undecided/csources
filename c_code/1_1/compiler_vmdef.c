/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Tctx246048 Tctx246048;
typedef struct Tsym193843 Tsym193843;
typedef struct Tpasscontext244005 Tpasscontext244005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY246253 TY246253;
typedef struct TY166036 TY166036;
typedef struct Tnode193813 Tnode193813;
typedef struct Ttypeseq193845 Ttypeseq193845;
typedef struct PprocHEX3Aobjecttype246232 PprocHEX3Aobjecttype246232;
typedef struct Tlineinfo165338 Tlineinfo165338;
typedef struct TY246272 TY246272;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY246233 TY246233;
typedef struct TY246239 TY246239;
typedef struct Tblock246030 Tblock246030;
typedef struct TY246213 TY246213;
typedef struct TY246273 TY246273;
typedef struct Vmargs246042 Vmargs246042;
typedef struct TY188578 TY188578;
typedef struct TY188581 TY188581;
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
typedef struct Ttype193849 Ttype193849;
typedef struct Tidobj169015 Tidobj169015;
typedef struct Tscope193837 Tscope193837;
typedef struct TY193944 TY193944;
typedef struct Tstrtable193817 Tstrtable193817;
typedef struct Tsymseq193815 Tsymseq193815;
typedef struct Tident169021 Tident169021;
typedef struct Tloc193827 Tloc193827;
typedef struct Ropeobj163009 Ropeobj163009;
typedef struct Tlib193831 Tlib193831;
typedef struct Tnodeseq193807 Tnodeseq193807;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct Tinstantiation193833 Tinstantiation193833;
typedef struct Tlistentry133022 Tlistentry133022;
typedef struct TY193933 TY193933;
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
struct  Tpasscontext244005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tlineinfo165338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tctx246048  {
  Tpasscontext244005 Sup;
TY246253* code;
TY166036* debug;
Tnode193813* globals;
Tnode193813* constants;
Ttypeseq193845* types;
Tnode193813* currentexceptiona;
Tnode193813* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype246232* prc;
Tsym193843* module;
Tnode193813* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo165338 comesfromheuristic;
TY246272* callbacks;
NimStringDesc* errorflag;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY246239 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY246239 TY246236[256];
struct  PprocHEX3Aobjecttype246232  {
TY246233* blocks;
Tsym193843* sym;
TY246236 slots;
NI maxslots;
};
struct  Tblock246030  {
Tsym193843* label;
TY246213* fixups;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs246042* args, void* ClEnv);
void* ClEnv;
} Vmcallback246044;
struct TY246273 {
NimStringDesc* Field0;
Vmcallback246044 Field1;
};
struct TY188578 {
void* Field0;
TY188581* Field1;
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
typedef NU8 TY246428[20];
struct  Tidobj169015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable193817  {
NI counter;
Tsymseq193815* data;
};
struct  Tloc193827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype193849* t;
Ropeobj163009* r;
Ropeobj163009* heaproot;
};
struct  Tsym193843  {
  Tidobj169015 Sup;
NU8 kind;
union{
struct {Ttypeseq193845* typeinstcache;
Tscope193837* typscope;
} S1;
struct {TY193944* procinstcache;
Tsym193843* gcunsafetyreason;
} S2;
struct {TY193944* usedgenerics;
Tstrtable193817 tab;
} S3;
struct {Tsym193843* guard;
} S4;
} kindU;
NU16 magic;
Ttype193849* typ;
Tident169021* name;
Tlineinfo165338 info;
Tsym193843* owner;
NU32 flags;
Tnode193813* ast;
NU32 options;
NI position;
NI offset;
Tloc193827 loc;
Tlib193831* annex;
Tnode193813* constraint;
};
struct  Tnode193813  {
Ttype193849* typ;
Tlineinfo165338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym193843* sym;
} S4;
struct {Tident169021* ident;
} S5;
struct {Tnodeseq193807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Vmargs246042  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode193813* currentexception;
};
struct TY188581 {
char dummy;
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
struct  Ttype193849  {
  Tidobj169015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq193845* sons;
Tnode193813* n;
Tsym193843* owner;
Tsym193843* sym;
Tsym193843* destructor;
Tsym193843* deepcopy;
Tsym193843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc193827 loc;
};
struct  Tscope193837  {
NI depthlevel;
Tstrtable193817 symbols;
Tnodeseq193807* usingsyms;
Tscope193837* parent;
};
struct  Tident169021  {
  Tidobj169015 Sup;
NimStringDesc* s;
Tident169021* next;
NI h;
};
struct  Ropeobj163009  {
  TNimObject Sup;
Ropeobj163009* left;
Ropeobj163009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry133022  {
  TNimObject Sup;
Tlistentry133022* prev;
Tlistentry133022* next;
};
struct  Tlib193831  {
  Tlistentry133022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj163009* name;
Tnode193813* path;
};
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
struct  Tinstantiation193833  {
Tsym193843* sym;
Ttypeseq193845* concretetypes;
TY193933* usedby;
};
struct TY246253 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY246213 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY246233 {
  TGenericSeq Sup;
  Tblock246030 data[SEQ_DECL_SIZE];
};
struct TY246272 {
  TGenericSeq Sup;
  TY246273 data[SEQ_DECL_SIZE];
};
struct TY166036 {
  TGenericSeq Sup;
  Tlineinfo165338 data[SEQ_DECL_SIZE];
};
struct Ttypeseq193845 {
  TGenericSeq Sup;
  Ttype193849* data[SEQ_DECL_SIZE];
};
struct TY193944 {
  TGenericSeq Sup;
  Tinstantiation193833* data[SEQ_DECL_SIZE];
};
struct Tsymseq193815 {
  TGenericSeq Sup;
  Tsym193843* data[SEQ_DECL_SIZE];
};
struct Tnodeseq193807 {
  TGenericSeq Sup;
  Tnode193813* data[SEQ_DECL_SIZE];
};
struct TY193933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tctx246048*, newctx_246281)(Tsym193843* module);
N_NIMCALL(void, TMP4155)(void* p, NI op);
N_NIMCALL(void, TMP4158)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4159)(void* p, NI op);
N_NIMCALL(void, TMP4164)(void* p, NI op);
N_NIMCALL(void, TMP4173)(void* p, NI op);
N_NIMCALL(void, TMP4174)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46746*, usrtocell_50246)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_51804)(Tcell46746* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46762* s, Tcell46746* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(Tnode193813*, newnode_194401)(NU8 kind);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(Tlineinfo165338, unknownlineinfo_166027)(void);
static N_INLINE(void, nimGCunref)(void* p);
static N_INLINE(void, decref_52204)(Tcell46746* c);
static N_INLINE(NIM_BOOL, canbecycleroot_50267)(Tcell46746* c);
static N_INLINE(void, rtladdcycleroot_51023)(Tcell46746* c);
N_NOINLINE(void, incl_47465)(Tcellset46758* s, Tcell46746* cell);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(void, refresh_246377)(Tctx246048* c, Tsym193843* module);
N_NIMCALL(void, registercallback_246404)(Tctx246048* c, NimStringDesc* name, Vmcallback246044 callback);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52622)(Tcell46746* c);
STRING_LITERAL(TMP4175, "", 0);
NIM_CONST TY246428 largeinstrs_246427 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x35, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x01, 0x18}
;
NIM_CONST TY246428 relativejumps_246430 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xC0, 0x03, 0x00, 0x00}
;
extern TNimType NTI244005; /* TPassContext */
TNimType NTI246048; /* TCtx */
extern TNimType NTI124; /* uint32 */
TNimType NTI246253; /* seq[TInstr] */
extern TNimType NTI166036; /* seq[TLineInfo] */
extern TNimType NTI193805; /* PNode */
extern TNimType NTI193845; /* TTypeSeq */
extern TNimType NTI108; /* int */
TNimType NTI246232; /* PProc:ObjectType */
TNimType NTI246030; /* TBlock */
extern TNimType NTI193811; /* PSym */
TNimType NTI246213; /* seq[TPosition] */
TNimType NTI246233; /* seq[TBlock] */
TNimType NTI246239; /* tuple[inUse: bool, kind: TSlotKind] */
extern TNimType NTI138; /* bool */
TNimType NTI246038; /* TSlotKind */
TNimType NTI246236; /* array[0..255, tuple[inUse: bool, kind: TSlotKind]] */
TNimType NTI246040; /* PProc */
TNimType NTI246032; /* TEvalMode */
TNimType NTI246034; /* TSandboxFlag */
TNimType NTI246036; /* TSandboxFlags */
extern TNimType NTI165338; /* TLineInfo */
TNimType NTI246273; /* tuple[key: string, value: VmCallback] */
extern TNimType NTI149; /* string */
TNimType NTI246044; /* (pointer, ref tuple[]) */
extern TNimType NTI153; /* pointer */
extern TNimType NTI188580; /* ref tuple[] */
TNimType NTI246272; /* seq[tuple[key: string, value: VmCallback]] */
TNimType NTI246046; /* PCtx */
extern TFrame* frameptr_17042;
extern Tgcheap48616 gch_48644;
TNimType NTI246028; /* TOpcode */
N_NIMCALL(void, TMP4155)(void* p, NI op) {
	TY246253* a;
	NI LOC1;
	a = (TY246253*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP4158)(void* p, NI op) {
	TY246213* a;
	NI LOC1;
	a = (TY246213*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP4159)(void* p, NI op) {
	TY246233* a;
	NI LOC1;
	a = (TY246233*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].label, op);
	nimGCvisit((void*)a->data[LOC1].fixups, op);
	}
}
N_NIMCALL(void, TMP4164)(void* p, NI op) {
	PprocHEX3Aobjecttype246232* a;
	NI LOC1;
	a = (PprocHEX3Aobjecttype246232*)p;
	nimGCvisit((void*)(*a).blocks, op);
	nimGCvisit((void*)(*a).sym, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 256; LOC1++) {
	}
}
N_NIMCALL(void, TMP4173)(void* p, NI op) {
	TY246272* a;
	NI LOC1;
	a = (TY246272*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1.ClEnv, op);
	}
}
N_NIMCALL(void, TMP4174)(void* p, NI op) {
	Tctx246048* a;
	a = (Tctx246048*)p;
	nimGCvisit((void*)(*a).code, op);
	nimGCvisit((void*)(*a).debug, op);
	nimGCvisit((void*)(*a).globals, op);
	nimGCvisit((void*)(*a).constants, op);
	nimGCvisit((void*)(*a).types, op);
	nimGCvisit((void*)(*a).currentexceptiona, op);
	nimGCvisit((void*)(*a).currentexceptionb, op);
	nimGCvisit((void*)(*a).prc, op);
	nimGCvisit((void*)(*a).module, op);
	nimGCvisit((void*)(*a).callsite, op);
	nimGCvisit((void*)(*a).callbacks, op);
	nimGCvisit((void*)(*a).errorflag, op);
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

static N_INLINE(void, nimGCunref)(void* p) {
	Tcell46746* LOC1;
	nimfr("nimGCunref", "gc.nim")
	nimln(223, "gc.nim");
	LOC1 = 0;
	LOC1 = usrtocell_50246(p);
	decref_52204(LOC1);
	popFrame();
}

N_NIMCALL(Tctx246048*, newctx_246281)(Tsym193843* module) {
	Tctx246048* result;
	Tctx246048* LOC1;
	PprocHEX3Aobjecttype246232* LOC2;
	NimStringDesc* LOC3;
	nimfr("newCtx", "vmdef.nim")
	result = 0;
	nimln(210, "vmdef.nim");
	LOC1 = 0;
	LOC1 = (Tctx246048*) newObj((&NTI246046), sizeof(Tctx246048));
	(*LOC1).Sup.Sup.m_type = (&NTI246048);
	if ((*LOC1).code) nimGCunrefNoCycle((*LOC1).code);
	(*LOC1).code = (TY246253*) newSeqRC1((&NTI246253), 0);
	if ((*LOC1).debug) nimGCunrefNoCycle((*LOC1).debug);
	(*LOC1).debug = (TY166036*) newSeqRC1((&NTI166036), 0);
	nimln(211, "vmdef.nim");
	asgnRefNoCycle((void**) (&(*LOC1).globals), newnode_194401(((NU8) 126)));
	asgnRefNoCycle((void**) (&(*LOC1).constants), newnode_194401(((NU8) 115)));
	if ((*LOC1).types) nimGCunrefNoCycle((*LOC1).types);
	(*LOC1).types = (Ttypeseq193845*) newSeqRC1((&NTI193845), 0);
	LOC2 = 0;
	LOC2 = (PprocHEX3Aobjecttype246232*) newObj((&NTI246040), sizeof(PprocHEX3Aobjecttype246232));
	if ((*LOC2).blocks) nimGCunrefNoCycle((*LOC2).blocks);
	(*LOC2).blocks = (TY246233*) newSeqRC1((&NTI246233), 0);
	asgnRefNoCycle((void**) (&(*LOC1).prc), LOC2);
	asgnRefNoCycle((void**) (&(*LOC1).module), module);
	(*LOC1).loopiterations = ((NI) 1500000);
	nimln(213, "vmdef.nim");
	(*LOC1).comesfromheuristic = unknownlineinfo_166027();
	if ((*LOC1).callbacks) nimGCunref((*LOC1).callbacks);
	(*LOC1).callbacks = (TY246272*) newSeqRC1((&NTI246272), 0);
	LOC3 = 0;
	LOC3 = (*LOC1).errorflag; (*LOC1).errorflag = copyStringRC1(((NimStringDesc*) &TMP4175));
	if (LOC3) nimGCunrefNoCycle(LOC3);
	result = LOC1;
	popFrame();
	return result;
}

N_NIMCALL(void, refresh_246377)(Tctx246048* c, Tsym193843* module) {
	PprocHEX3Aobjecttype246232* LOC1;
	nimfr("refresh", "vmdef.nim")
	nimln(216, "vmdef.nim");
	asgnRefNoCycle((void**) (&(*c).module), module);
	nimln(217, "vmdef.nim");
	LOC1 = 0;
	LOC1 = (PprocHEX3Aobjecttype246232*) newObj((&NTI246040), sizeof(PprocHEX3Aobjecttype246232));
	if ((*LOC1).blocks) nimGCunrefNoCycle((*LOC1).blocks);
	(*LOC1).blocks = (TY246233*) newSeqRC1((&NTI246233), 0);
	asgnRefNoCycle((void**) (&(*c).prc), LOC1);
	nimln(218, "vmdef.nim");
	(*c).loopiterations = ((NI) 1500000);
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

N_NIMCALL(void, registercallback_246404)(Tctx246048* c, NimStringDesc* name, Vmcallback246044 callback) {
	TY246273 LOC1;
	NimStringDesc* LOC2;
	nimfr("registerCallback", "vmdef.nim")
	nimln(221, "vmdef.nim");
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Field0 = copyString(name);
	LOC1.Field1.ClEnv = callback.ClEnv;
	LOC1.Field1.ClPrc = callback.ClPrc;
	(*c).callbacks = (TY246272*) incrSeq(&((*c).callbacks)->Sup, sizeof(TY246273));
	LOC2 = 0;
	LOC2 = (*c).callbacks->data[(*c).callbacks->Sup.len-1].Field0; (*c).callbacks->data[(*c).callbacks->Sup.len-1].Field0 = copyStringRC1(LOC1.Field0);
	if (LOC2) nimGCunrefNoCycle(LOC2);
	asgnRef((void**) (&(*c).callbacks->data[(*c).callbacks->Sup.len-1].Field1.ClEnv), LOC1.Field1.ClEnv);
	(*c).callbacks->data[(*c).callbacks->Sup.len-1].Field1.ClPrc = LOC1.Field1.ClPrc;
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, compiler_vmdefInit)(void) {
	nimfr("vmdef", "vmdef.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_vmdefDatInit)(void) {
static TNimNode* TMP4154[18];
static TNimNode* TMP4156[4];
static TNimNode* TMP4157[2];
static TNimNode* TMP4160[2];
static TNimNode* TMP4161[9];
NI TMP4163;
static char* NIM_CONST TMP4162[9] = {
"slotEmpty", 
"slotFixedVar", 
"slotFixedLet", 
"slotTempUnknown", 
"slotTempInt", 
"slotTempFloat", 
"slotTempStr", 
"slotTempComplex", 
"slotTempPerm"};
static TNimNode* TMP4165[5];
NI TMP4167;
static char* NIM_CONST TMP4166[5] = {
"emRepl", 
"emConst", 
"emOptimize", 
"emStaticExpr", 
"emStaticStmt"};
static TNimNode* TMP4168[3];
NI TMP4170;
static char* NIM_CONST TMP4169[3] = {
"allowCast", 
"allowFFI", 
"allowInfiniteLoops"};
static TNimNode* TMP4171[2];
static TNimNode* TMP4172[2];
static TNimNode* TMP7260[157];
NI TMP7262;
static char* NIM_CONST TMP7261[157] = {
"opcEof", 
"opcRet", 
"opcYldYoid", 
"opcYldVal", 
"opcAsgnInt", 
"opcAsgnStr", 
"opcAsgnFloat", 
"opcAsgnRef", 
"opcAsgnComplex", 
"opcRegToNode", 
"opcNodeToReg", 
"opcLdArr", 
"opcWrArr", 
"opcLdObj", 
"opcWrObj", 
"opcAddrReg", 
"opcAddrNode", 
"opcLdDeref", 
"opcWrDeref", 
"opcWrStrIdx", 
"opcLdStrIdx", 
"opcAddInt", 
"opcAddImmInt", 
"opcSubInt", 
"opcSubImmInt", 
"opcLenSeq", 
"opcLenStr", 
"opcIncl", 
"opcInclRange", 
"opcExcl", 
"opcCard", 
"opcMulInt", 
"opcDivInt", 
"opcModInt", 
"opcAddFloat", 
"opcSubFloat", 
"opcMulFloat", 
"opcDivFloat", 
"opcShrInt", 
"opcShlInt", 
"opcBitandInt", 
"opcBitorInt", 
"opcBitxorInt", 
"opcAddu", 
"opcSubu", 
"opcMulu", 
"opcDivu", 
"opcModu", 
"opcEqInt", 
"opcLeInt", 
"opcLtInt", 
"opcEqFloat", 
"opcLeFloat", 
"opcLtFloat", 
"opcLeu", 
"opcLtu", 
"opcEqRef", 
"opcEqNimrodNode", 
"opcXor", 
"opcNot", 
"opcUnaryMinusInt", 
"opcUnaryMinusFloat", 
"opcBitnotInt", 
"opcEqStr", 
"opcLeStr", 
"opcLtStr", 
"opcEqSet", 
"opcLeSet", 
"opcLtSet", 
"opcMulSet", 
"opcPlusSet", 
"opcMinusSet", 
"opcSymdiffSet", 
"opcConcatStr", 
"opcContainsSet", 
"opcRepr", 
"opcSetLenStr", 
"opcSetLenSeq", 
"opcSwap", 
"opcIsNil", 
"opcOf", 
"opcIs", 
"opcSubStr", 
"opcParseFloat", 
"opcConv", 
"opcCast", 
"opcQuit", 
"opcReset", 
"opcNarrowS", 
"opcNarrowU", 
"opcAddStrCh", 
"opcAddStrStr", 
"opcAddSeqElem", 
"opcRangeChck", 
"opcNAdd", 
"opcNAddMultiple", 
"opcNKind", 
"opcNIntVal", 
"opcNFloatVal", 
"opcNSymbol", 
"opcNIdent", 
"opcNGetType", 
"opcNStrVal", 
"opcNSetIntVal", 
"opcNSetFloatVal", 
"opcNSetSymbol", 
"opcNSetIdent", 
"opcNSetType", 
"opcNSetStrVal", 
"opcNNewNimNode", 
"opcNCopyNimNode", 
"opcNCopyNimTree", 
"opcNDel", 
"opcGenSym", 
"opcSlurp", 
"opcGorge", 
"opcParseExprToAst", 
"opcParseStmtToAst", 
"opcQueryErrorFlag", 
"opcNError", 
"opcNWarning", 
"opcNHint", 
"opcNLineInfo", 
"opcEqIdent", 
"opcStrToIdent", 
"opcIdentToStr", 
"opcEcho", 
"opcIndCall", 
"opcIndCallAsgn", 
"opcRaise", 
"opcNChild", 
"opcNSetChild", 
"opcCallSite", 
"opcNewStr", 
"opcTJmp", 
"opcFJmp", 
"opcJmp", 
"opcJmpBack", 
"opcBranch", 
"opcTry", 
"opcExcept", 
"opcFinally", 
"opcFinallyEnd", 
"opcNew", 
"opcNewSeq", 
"opcLdNull", 
"opcLdNullReg", 
"opcLdConst", 
"opcAsgnConst", 
"opcLdGlobal", 
"opcLdGlobalAddr", 
"opcLdImmInt", 
"opcNBindSym", 
"opcSetType", 
"opcTypeTrait", 
"opcMarshalLoad", 
"opcMarshalStore"};
static TNimNode TMP4152[215];
NTI246048.size = sizeof(Tctx246048);
NTI246048.kind = 17;
NTI246048.base = (&NTI244005);
TMP4154[0] = &TMP4152[1];
NTI246253.size = sizeof(TY246253*);
NTI246253.kind = 24;
NTI246253.base = (&NTI124);
NTI246253.flags = 2;
NTI246253.marker = TMP4155;
TMP4152[1].kind = 1;
TMP4152[1].offset = offsetof(Tctx246048, code);
TMP4152[1].typ = (&NTI246253);
TMP4152[1].name = "code";
TMP4154[1] = &TMP4152[2];
TMP4152[2].kind = 1;
TMP4152[2].offset = offsetof(Tctx246048, debug);
TMP4152[2].typ = (&NTI166036);
TMP4152[2].name = "debug";
TMP4154[2] = &TMP4152[3];
TMP4152[3].kind = 1;
TMP4152[3].offset = offsetof(Tctx246048, globals);
TMP4152[3].typ = (&NTI193805);
TMP4152[3].name = "globals";
TMP4154[3] = &TMP4152[4];
TMP4152[4].kind = 1;
TMP4152[4].offset = offsetof(Tctx246048, constants);
TMP4152[4].typ = (&NTI193805);
TMP4152[4].name = "constants";
TMP4154[4] = &TMP4152[5];
TMP4152[5].kind = 1;
TMP4152[5].offset = offsetof(Tctx246048, types);
TMP4152[5].typ = (&NTI193845);
TMP4152[5].name = "types";
TMP4154[5] = &TMP4152[6];
TMP4152[6].kind = 1;
TMP4152[6].offset = offsetof(Tctx246048, currentexceptiona);
TMP4152[6].typ = (&NTI193805);
TMP4152[6].name = "currentExceptionA";
TMP4154[6] = &TMP4152[7];
TMP4152[7].kind = 1;
TMP4152[7].offset = offsetof(Tctx246048, currentexceptionb);
TMP4152[7].typ = (&NTI193805);
TMP4152[7].name = "currentExceptionB";
TMP4154[7] = &TMP4152[8];
TMP4152[8].kind = 1;
TMP4152[8].offset = offsetof(Tctx246048, exceptioninstr);
TMP4152[8].typ = (&NTI108);
TMP4152[8].name = "exceptionInstr";
TMP4154[8] = &TMP4152[9];
NTI246232.size = sizeof(PprocHEX3Aobjecttype246232);
NTI246232.kind = 18;
NTI246232.base = 0;
NTI246232.flags = 2;
TMP4156[0] = &TMP4152[11];
NTI246030.size = sizeof(Tblock246030);
NTI246030.kind = 18;
NTI246030.base = 0;
NTI246030.flags = 2;
TMP4157[0] = &TMP4152[13];
TMP4152[13].kind = 1;
TMP4152[13].offset = offsetof(Tblock246030, label);
TMP4152[13].typ = (&NTI193811);
TMP4152[13].name = "label";
TMP4157[1] = &TMP4152[14];
NTI246213.size = sizeof(TY246213*);
NTI246213.kind = 24;
NTI246213.base = (&NTI108);
NTI246213.flags = 2;
NTI246213.marker = TMP4158;
TMP4152[14].kind = 1;
TMP4152[14].offset = offsetof(Tblock246030, fixups);
TMP4152[14].typ = (&NTI246213);
TMP4152[14].name = "fixups";
TMP4152[12].len = 2; TMP4152[12].kind = 2; TMP4152[12].sons = &TMP4157[0];
NTI246030.node = &TMP4152[12];
NTI246233.size = sizeof(TY246233*);
NTI246233.kind = 24;
NTI246233.base = (&NTI246030);
NTI246233.flags = 2;
NTI246233.marker = TMP4159;
TMP4152[11].kind = 1;
TMP4152[11].offset = offsetof(PprocHEX3Aobjecttype246232, blocks);
TMP4152[11].typ = (&NTI246233);
TMP4152[11].name = "blocks";
TMP4156[1] = &TMP4152[15];
TMP4152[15].kind = 1;
TMP4152[15].offset = offsetof(PprocHEX3Aobjecttype246232, sym);
TMP4152[15].typ = (&NTI193811);
TMP4152[15].name = "sym";
TMP4156[2] = &TMP4152[16];
NTI246239.size = sizeof(TY246239);
NTI246239.kind = 18;
NTI246239.base = 0;
NTI246239.flags = 3;
TMP4160[0] = &TMP4152[18];
TMP4152[18].kind = 1;
TMP4152[18].offset = offsetof(TY246239, Field0);
TMP4152[18].typ = (&NTI138);
TMP4152[18].name = "Field0";
TMP4160[1] = &TMP4152[19];
NTI246038.size = sizeof(NU8);
NTI246038.kind = 14;
NTI246038.base = 0;
NTI246038.flags = 3;
for (TMP4163 = 0; TMP4163 < 9; TMP4163++) {
TMP4152[TMP4163+20].kind = 1;
TMP4152[TMP4163+20].offset = TMP4163;
TMP4152[TMP4163+20].name = TMP4162[TMP4163];
TMP4161[TMP4163] = &TMP4152[TMP4163+20];
}
TMP4152[29].len = 9; TMP4152[29].kind = 2; TMP4152[29].sons = &TMP4161[0];
NTI246038.node = &TMP4152[29];
TMP4152[19].kind = 1;
TMP4152[19].offset = offsetof(TY246239, Field1);
TMP4152[19].typ = (&NTI246038);
TMP4152[19].name = "Field1";
TMP4152[17].len = 2; TMP4152[17].kind = 2; TMP4152[17].sons = &TMP4160[0];
NTI246239.node = &TMP4152[17];
NTI246236.size = sizeof(TY246236);
NTI246236.kind = 16;
NTI246236.base = (&NTI246239);
NTI246236.flags = 3;
TMP4152[16].kind = 1;
TMP4152[16].offset = offsetof(PprocHEX3Aobjecttype246232, slots);
TMP4152[16].typ = (&NTI246236);
TMP4152[16].name = "slots";
TMP4156[3] = &TMP4152[30];
TMP4152[30].kind = 1;
TMP4152[30].offset = offsetof(PprocHEX3Aobjecttype246232, maxslots);
TMP4152[30].typ = (&NTI108);
TMP4152[30].name = "maxSlots";
TMP4152[10].len = 4; TMP4152[10].kind = 2; TMP4152[10].sons = &TMP4156[0];
NTI246232.node = &TMP4152[10];
NTI246040.size = sizeof(PprocHEX3Aobjecttype246232*);
NTI246040.kind = 22;
NTI246040.base = (&NTI246232);
NTI246040.flags = 2;
NTI246040.marker = TMP4164;
TMP4152[9].kind = 1;
TMP4152[9].offset = offsetof(Tctx246048, prc);
TMP4152[9].typ = (&NTI246040);
TMP4152[9].name = "prc";
TMP4154[9] = &TMP4152[31];
TMP4152[31].kind = 1;
TMP4152[31].offset = offsetof(Tctx246048, module);
TMP4152[31].typ = (&NTI193811);
TMP4152[31].name = "module";
TMP4154[10] = &TMP4152[32];
TMP4152[32].kind = 1;
TMP4152[32].offset = offsetof(Tctx246048, callsite);
TMP4152[32].typ = (&NTI193805);
TMP4152[32].name = "callsite";
TMP4154[11] = &TMP4152[33];
NTI246032.size = sizeof(NU8);
NTI246032.kind = 14;
NTI246032.base = 0;
NTI246032.flags = 3;
for (TMP4167 = 0; TMP4167 < 5; TMP4167++) {
TMP4152[TMP4167+34].kind = 1;
TMP4152[TMP4167+34].offset = TMP4167;
TMP4152[TMP4167+34].name = TMP4166[TMP4167];
TMP4165[TMP4167] = &TMP4152[TMP4167+34];
}
TMP4152[39].len = 5; TMP4152[39].kind = 2; TMP4152[39].sons = &TMP4165[0];
NTI246032.node = &TMP4152[39];
TMP4152[33].kind = 1;
TMP4152[33].offset = offsetof(Tctx246048, mode);
TMP4152[33].typ = (&NTI246032);
TMP4152[33].name = "mode";
TMP4154[12] = &TMP4152[40];
NTI246034.size = sizeof(NU8);
NTI246034.kind = 14;
NTI246034.base = 0;
NTI246034.flags = 3;
for (TMP4170 = 0; TMP4170 < 3; TMP4170++) {
TMP4152[TMP4170+41].kind = 1;
TMP4152[TMP4170+41].offset = TMP4170;
TMP4152[TMP4170+41].name = TMP4169[TMP4170];
TMP4168[TMP4170] = &TMP4152[TMP4170+41];
}
TMP4152[44].len = 3; TMP4152[44].kind = 2; TMP4152[44].sons = &TMP4168[0];
NTI246034.node = &TMP4152[44];
NTI246036.size = sizeof(NU8);
NTI246036.kind = 19;
NTI246036.base = (&NTI246034);
NTI246036.flags = 3;
TMP4152[45].len = 0; TMP4152[45].kind = 0;
NTI246036.node = &TMP4152[45];
TMP4152[40].kind = 1;
TMP4152[40].offset = offsetof(Tctx246048, features);
TMP4152[40].typ = (&NTI246036);
TMP4152[40].name = "features";
TMP4154[13] = &TMP4152[46];
TMP4152[46].kind = 1;
TMP4152[46].offset = offsetof(Tctx246048, traceactive);
TMP4152[46].typ = (&NTI138);
TMP4152[46].name = "traceActive";
TMP4154[14] = &TMP4152[47];
TMP4152[47].kind = 1;
TMP4152[47].offset = offsetof(Tctx246048, loopiterations);
TMP4152[47].typ = (&NTI108);
TMP4152[47].name = "loopIterations";
TMP4154[15] = &TMP4152[48];
TMP4152[48].kind = 1;
TMP4152[48].offset = offsetof(Tctx246048, comesfromheuristic);
TMP4152[48].typ = (&NTI165338);
TMP4152[48].name = "comesFromHeuristic";
TMP4154[16] = &TMP4152[49];
NTI246273.size = sizeof(TY246273);
NTI246273.kind = 18;
NTI246273.base = 0;
TMP4171[0] = &TMP4152[51];
TMP4152[51].kind = 1;
TMP4152[51].offset = offsetof(TY246273, Field0);
TMP4152[51].typ = (&NTI149);
TMP4152[51].name = "Field0";
TMP4171[1] = &TMP4152[52];
NTI246044.size = sizeof(TY188578);
NTI246044.kind = 18;
NTI246044.base = 0;
NTI246044.flags = 2;
TMP4172[0] = &TMP4152[54];
TMP4152[54].kind = 1;
TMP4152[54].offset = offsetof(TY188578, Field0);
TMP4152[54].typ = (&NTI153);
TMP4152[54].name = "Field0";
TMP4172[1] = &TMP4152[55];
TMP4152[55].kind = 1;
TMP4152[55].offset = offsetof(TY188578, Field1);
TMP4152[55].typ = (&NTI188580);
TMP4152[55].name = "Field1";
TMP4152[53].len = 2; TMP4152[53].kind = 2; TMP4152[53].sons = &TMP4172[0];
NTI246044.node = &TMP4152[53];
TMP4152[52].kind = 1;
TMP4152[52].offset = offsetof(TY246273, Field1);
TMP4152[52].typ = (&NTI246044);
TMP4152[52].name = "Field1";
TMP4152[50].len = 2; TMP4152[50].kind = 2; TMP4152[50].sons = &TMP4171[0];
NTI246273.node = &TMP4152[50];
NTI246272.size = sizeof(TY246272*);
NTI246272.kind = 24;
NTI246272.base = (&NTI246273);
NTI246272.marker = TMP4173;
TMP4152[49].kind = 1;
TMP4152[49].offset = offsetof(Tctx246048, callbacks);
TMP4152[49].typ = (&NTI246272);
TMP4152[49].name = "callbacks";
TMP4154[17] = &TMP4152[56];
TMP4152[56].kind = 1;
TMP4152[56].offset = offsetof(Tctx246048, errorflag);
TMP4152[56].typ = (&NTI149);
TMP4152[56].name = "errorFlag";
TMP4152[0].len = 18; TMP4152[0].kind = 2; TMP4152[0].sons = &TMP4154[0];
NTI246048.node = &TMP4152[0];
NTI246046.size = sizeof(Tctx246048*);
NTI246046.kind = 22;
NTI246046.base = (&NTI246048);
NTI246046.marker = TMP4174;
NTI246028.size = sizeof(NU8);
NTI246028.kind = 14;
NTI246028.base = 0;
NTI246028.flags = 3;
for (TMP7262 = 0; TMP7262 < 157; TMP7262++) {
TMP4152[TMP7262+57].kind = 1;
TMP4152[TMP7262+57].offset = TMP7262;
TMP4152[TMP7262+57].name = TMP7261[TMP7262];
TMP7260[TMP7262] = &TMP4152[TMP7262+57];
}
TMP4152[214].len = 157; TMP4152[214].kind = 2; TMP4152[214].sons = &TMP7260[0];
NTI246028.node = &TMP4152[214];
}

