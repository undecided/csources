/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Tctx243048 Tctx243048;
typedef struct Tsym190843 Tsym190843;
typedef struct Tpasscontext241005 Tpasscontext241005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY243253 TY243253;
typedef struct TY163033 TY163033;
typedef struct Tnode190813 Tnode190813;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct PprocHEX3Aobjecttype243232 PprocHEX3Aobjecttype243232;
typedef struct Tlineinfo162338 Tlineinfo162338;
typedef struct TY243272 TY243272;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY243233 TY243233;
typedef struct TY243239 TY243239;
typedef struct Tblock243030 Tblock243030;
typedef struct TY243213 TY243213;
typedef struct TY243273 TY243273;
typedef struct Vmargs243042 Vmargs243042;
typedef struct TY185578 TY185578;
typedef struct TY185581 TY185581;
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
typedef struct Ttype190849 Ttype190849;
typedef struct Tidobj166015 Tidobj166015;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Tident166021 Tident166021;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj160009 Ropeobj160009;
typedef struct Tlib190831 Tlib190831;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tbasechunk28038 Tbasechunk28038;
typedef struct Tfreecell28030 Tfreecell28030;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TY190933 TY190933;
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
struct  Tpasscontext241005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tlineinfo162338  {
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
struct  Tctx243048  {
  Tpasscontext241005 Sup;
TY243253* code;
TY163033* debug;
Tnode190813* globals;
Tnode190813* constants;
Ttypeseq190845* types;
Tnode190813* currentexceptiona;
Tnode190813* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype243232* prc;
Tsym190843* module;
Tnode190813* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo162338 comesfromheuristic;
TY243272* callbacks;
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
struct TY243239 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY243239 TY243236[256];
struct  PprocHEX3Aobjecttype243232  {
TY243233* blocks;
Tsym190843* sym;
TY243236 slots;
NI maxslots;
};
struct  Tblock243030  {
Tsym190843* label;
TY243213* fixups;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs243042* args, void* ClEnv);
void* ClEnv;
} Vmcallback243044;
struct TY243273 {
NimStringDesc* Field0;
Vmcallback243044 Field1;
};
struct TY185578 {
void* Field0;
TY185581* Field1;
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
typedef NU8 TY243428[20];
struct  Tidobj166015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable190817  {
NI counter;
Tsymseq190815* data;
};
struct  Tloc190827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype190849* t;
Ropeobj160009* r;
Ropeobj160009* heaproot;
};
struct  Tsym190843  {
  Tidobj166015 Sup;
NU8 kind;
union{
struct {Ttypeseq190845* typeinstcache;
Tscope190837* typscope;
} S1;
struct {TY190944* procinstcache;
Tsym190843* gcunsafetyreason;
} S2;
struct {TY190944* usedgenerics;
Tstrtable190817 tab;
} S3;
struct {Tsym190843* guard;
} S4;
} kindU;
NU16 magic;
Ttype190849* typ;
Tident166021* name;
Tlineinfo162338 info;
Tsym190843* owner;
NU32 flags;
Tnode190813* ast;
NU32 options;
NI position;
NI offset;
Tloc190827 loc;
Tlib190831* annex;
Tnode190813* constraint;
};
struct  Tnode190813  {
Ttype190849* typ;
Tlineinfo162338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym190843* sym;
} S4;
struct {Tident166021* ident;
} S5;
struct {Tnodeseq190807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Vmargs243042  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode190813* currentexception;
};
struct TY185581 {
char dummy;
};
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
struct  Ttype190849  {
  Tidobj166015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq190845* sons;
Tnode190813* n;
Tsym190843* owner;
Tsym190843* sym;
Tsym190843* destructor;
Tsym190843* deepcopy;
Tsym190843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc190827 loc;
};
struct  Tscope190837  {
NI depthlevel;
Tstrtable190817 symbols;
Tnodeseq190807* usingsyms;
Tscope190837* parent;
};
struct  Tident166021  {
  Tidobj166015 Sup;
NimStringDesc* s;
Tident166021* next;
NI h;
};
struct  Ropeobj160009  {
  TNimObject Sup;
Ropeobj160009* left;
Ropeobj160009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tlib190831  {
  Tlistentry130022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj160009* name;
Tnode190813* path;
};
struct  Tfreecell28030  {
Tfreecell28030* next;
NI zerofield;
};
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct TY243253 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY243213 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY243233 {
  TGenericSeq Sup;
  Tblock243030 data[SEQ_DECL_SIZE];
};
struct TY243272 {
  TGenericSeq Sup;
  TY243273 data[SEQ_DECL_SIZE];
};
struct TY163033 {
  TGenericSeq Sup;
  Tlineinfo162338 data[SEQ_DECL_SIZE];
};
struct Ttypeseq190845 {
  TGenericSeq Sup;
  Ttype190849* data[SEQ_DECL_SIZE];
};
struct TY190944 {
  TGenericSeq Sup;
  Tinstantiation190833* data[SEQ_DECL_SIZE];
};
struct Tsymseq190815 {
  TGenericSeq Sup;
  Tsym190843* data[SEQ_DECL_SIZE];
};
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
};
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tctx243048*, newctx_243281)(Tsym190843* module);
N_NIMCALL(void, TMP4164)(void* p, NI op);
N_NIMCALL(void, TMP4167)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4168)(void* p, NI op);
N_NIMCALL(void, TMP4173)(void* p, NI op);
N_NIMCALL(void, TMP4182)(void* p, NI op);
N_NIMCALL(void, TMP4183)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46947*, usrtocell_50446)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20201)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_52004)(Tcell46947* c);
N_NOINLINE(void, addzct_50417)(Tcellseq46963* s, Tcell46947* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(Tnode190813*, newnode_191401)(NU8 kind);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(Tlineinfo162338, unknownlineinfo_163024)(void);
static N_INLINE(void, nimGCunref)(void* p);
static N_INLINE(void, decref_52404)(Tcell46947* c);
static N_INLINE(NIM_BOOL, canbecycleroot_50467)(Tcell46947* c);
static N_INLINE(void, rtladdcycleroot_51223)(Tcell46947* c);
N_NOINLINE(void, incl_47665)(Tcellset46959* s, Tcell46947* cell);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(void, refresh_243377)(Tctx243048* c, Tsym190843* module);
N_NIMCALL(void, registercallback_243404)(Tctx243048* c, NimStringDesc* name, Vmcallback243044 callback);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52822)(Tcell46947* c);
STRING_LITERAL(TMP4184, "", 0);
NIM_CONST TY243428 largeinstrs_243427 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x35, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x01, 0x18}
;
NIM_CONST TY243428 relativejumps_243430 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xC0, 0x03, 0x00, 0x00}
;
extern TNimType NTI241005; /* TPassContext */
TNimType NTI243048; /* TCtx */
extern TNimType NTI124; /* uint32 */
TNimType NTI243253; /* seq[TInstr] */
extern TNimType NTI163033; /* seq[TLineInfo] */
extern TNimType NTI190805; /* PNode */
extern TNimType NTI190845; /* TTypeSeq */
extern TNimType NTI108; /* int */
TNimType NTI243232; /* PProc:ObjectType */
TNimType NTI243030; /* TBlock */
extern TNimType NTI190811; /* PSym */
TNimType NTI243213; /* seq[TPosition] */
TNimType NTI243233; /* seq[TBlock] */
TNimType NTI243239; /* tuple[inUse: bool, kind: TSlotKind] */
extern TNimType NTI138; /* bool */
TNimType NTI243038; /* TSlotKind */
TNimType NTI243236; /* array[0..255, tuple[inUse: bool, kind: TSlotKind]] */
TNimType NTI243040; /* PProc */
TNimType NTI243032; /* TEvalMode */
TNimType NTI243034; /* TSandboxFlag */
TNimType NTI243036; /* TSandboxFlags */
extern TNimType NTI162338; /* TLineInfo */
TNimType NTI243273; /* tuple[key: string, value: VmCallback] */
extern TNimType NTI149; /* string */
TNimType NTI243044; /* (pointer, ref tuple[]) */
extern TNimType NTI153; /* pointer */
extern TNimType NTI185580; /* ref tuple[] */
TNimType NTI243272; /* seq[tuple[key: string, value: VmCallback]] */
TNimType NTI243046; /* PCtx */
extern TFrame* frameptr_17242;
extern Tgcheap48816 gch_48844;
TNimType NTI243028; /* TOpcode */
N_NIMCALL(void, TMP4164)(void* p, NI op) {
	TY243253* a;
	NI LOC1;
	a = (TY243253*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP4167)(void* p, NI op) {
	TY243213* a;
	NI LOC1;
	a = (TY243213*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP4168)(void* p, NI op) {
	TY243233* a;
	NI LOC1;
	a = (TY243233*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].label, op);
	nimGCvisit((void*)a->data[LOC1].fixups, op);
	}
}
N_NIMCALL(void, TMP4173)(void* p, NI op) {
	PprocHEX3Aobjecttype243232* a;
	NI LOC1;
	a = (PprocHEX3Aobjecttype243232*)p;
	nimGCvisit((void*)(*a).blocks, op);
	nimGCvisit((void*)(*a).sym, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 256; LOC1++) {
	}
}
N_NIMCALL(void, TMP4182)(void* p, NI op) {
	TY243272* a;
	NI LOC1;
	a = (TY243272*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1.ClEnv, op);
	}
}
N_NIMCALL(void, TMP4183)(void* p, NI op) {
	Tctx243048* a;
	a = (Tctx243048*)p;
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

static N_INLINE(NIM_BOOL, canbecycleroot_50467)(Tcell46947* c) {
	NIM_BOOL result;
	nimfr("canBeCycleRoot", "gc.nim")
	result = 0;
	nimln(121, "gc.nim");
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdcycleroot_51223)(Tcell46947* c) {
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

static N_INLINE(void, decref_52404)(Tcell46947* c) {
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

static N_INLINE(void, nimGCunref)(void* p) {
	Tcell46947* LOC1;
	nimfr("nimGCunref", "gc.nim")
	nimln(223, "gc.nim");
	LOC1 = 0;
	LOC1 = usrtocell_50446(p);
	decref_52404(LOC1);
	popFrame();
}

N_NIMCALL(Tctx243048*, newctx_243281)(Tsym190843* module) {
	Tctx243048* result;
	Tctx243048* LOC1;
	PprocHEX3Aobjecttype243232* LOC2;
	NimStringDesc* LOC3;
	nimfr("newCtx", "vmdef.nim")
	result = 0;
	nimln(210, "vmdef.nim");
	LOC1 = 0;
	LOC1 = (Tctx243048*) newObj((&NTI243046), sizeof(Tctx243048));
	(*LOC1).Sup.Sup.m_type = (&NTI243048);
	if ((*LOC1).code) nimGCunrefNoCycle((*LOC1).code);
	(*LOC1).code = (TY243253*) newSeqRC1((&NTI243253), 0);
	if ((*LOC1).debug) nimGCunrefNoCycle((*LOC1).debug);
	(*LOC1).debug = (TY163033*) newSeqRC1((&NTI163033), 0);
	nimln(211, "vmdef.nim");
	asgnRefNoCycle((void**) (&(*LOC1).globals), newnode_191401(((NU8) 126)));
	asgnRefNoCycle((void**) (&(*LOC1).constants), newnode_191401(((NU8) 115)));
	if ((*LOC1).types) nimGCunrefNoCycle((*LOC1).types);
	(*LOC1).types = (Ttypeseq190845*) newSeqRC1((&NTI190845), 0);
	LOC2 = 0;
	LOC2 = (PprocHEX3Aobjecttype243232*) newObj((&NTI243040), sizeof(PprocHEX3Aobjecttype243232));
	if ((*LOC2).blocks) nimGCunrefNoCycle((*LOC2).blocks);
	(*LOC2).blocks = (TY243233*) newSeqRC1((&NTI243233), 0);
	asgnRefNoCycle((void**) (&(*LOC1).prc), LOC2);
	asgnRefNoCycle((void**) (&(*LOC1).module), module);
	(*LOC1).loopiterations = ((NI) 1500000);
	nimln(213, "vmdef.nim");
	(*LOC1).comesfromheuristic = unknownlineinfo_163024();
	if ((*LOC1).callbacks) nimGCunref((*LOC1).callbacks);
	(*LOC1).callbacks = (TY243272*) newSeqRC1((&NTI243272), 0);
	LOC3 = 0;
	LOC3 = (*LOC1).errorflag; (*LOC1).errorflag = copyStringRC1(((NimStringDesc*) &TMP4184));
	if (LOC3) nimGCunrefNoCycle(LOC3);
	result = LOC1;
	popFrame();
	return result;
}

N_NIMCALL(void, refresh_243377)(Tctx243048* c, Tsym190843* module) {
	PprocHEX3Aobjecttype243232* LOC1;
	nimfr("refresh", "vmdef.nim")
	nimln(216, "vmdef.nim");
	asgnRefNoCycle((void**) (&(*c).module), module);
	nimln(217, "vmdef.nim");
	LOC1 = 0;
	LOC1 = (PprocHEX3Aobjecttype243232*) newObj((&NTI243040), sizeof(PprocHEX3Aobjecttype243232));
	if ((*LOC1).blocks) nimGCunrefNoCycle((*LOC1).blocks);
	(*LOC1).blocks = (TY243233*) newSeqRC1((&NTI243233), 0);
	asgnRefNoCycle((void**) (&(*c).prc), LOC1);
	nimln(218, "vmdef.nim");
	(*c).loopiterations = ((NI) 1500000);
	popFrame();
}

static N_INLINE(void, incref_52822)(Tcell46947* c) {
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

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr("asgnRef", "gc.nim")
	nimln(244, "gc.nim");
	{
		Tcell46947* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_50446(src);
		incref_52822(LOC5);
	}
	LA3: ;
	nimln(245, "gc.nim");
	{
		Tcell46947* LOC10;
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

N_NIMCALL(void, registercallback_243404)(Tctx243048* c, NimStringDesc* name, Vmcallback243044 callback) {
	TY243273 LOC1;
	NimStringDesc* LOC2;
	nimfr("registerCallback", "vmdef.nim")
	nimln(221, "vmdef.nim");
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Field0 = copyString(name);
	LOC1.Field1.ClEnv = callback.ClEnv;
	LOC1.Field1.ClPrc = callback.ClPrc;
	(*c).callbacks = (TY243272*) incrSeq(&((*c).callbacks)->Sup, sizeof(TY243273));
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
static TNimNode* TMP4163[18];
static TNimNode* TMP4165[4];
static TNimNode* TMP4166[2];
static TNimNode* TMP4169[2];
static TNimNode* TMP4170[9];
NI TMP4172;
static char* NIM_CONST TMP4171[9] = {
"slotEmpty", 
"slotFixedVar", 
"slotFixedLet", 
"slotTempUnknown", 
"slotTempInt", 
"slotTempFloat", 
"slotTempStr", 
"slotTempComplex", 
"slotTempPerm"};
static TNimNode* TMP4174[5];
NI TMP4176;
static char* NIM_CONST TMP4175[5] = {
"emRepl", 
"emConst", 
"emOptimize", 
"emStaticExpr", 
"emStaticStmt"};
static TNimNode* TMP4177[3];
NI TMP4179;
static char* NIM_CONST TMP4178[3] = {
"allowCast", 
"allowFFI", 
"allowInfiniteLoops"};
static TNimNode* TMP4180[2];
static TNimNode* TMP4181[2];
static TNimNode* TMP7272[157];
NI TMP7274;
static char* NIM_CONST TMP7273[157] = {
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
static TNimNode TMP4161[215];
NTI243048.size = sizeof(Tctx243048);
NTI243048.kind = 17;
NTI243048.base = (&NTI241005);
TMP4163[0] = &TMP4161[1];
NTI243253.size = sizeof(TY243253*);
NTI243253.kind = 24;
NTI243253.base = (&NTI124);
NTI243253.flags = 2;
NTI243253.marker = TMP4164;
TMP4161[1].kind = 1;
TMP4161[1].offset = offsetof(Tctx243048, code);
TMP4161[1].typ = (&NTI243253);
TMP4161[1].name = "code";
TMP4163[1] = &TMP4161[2];
TMP4161[2].kind = 1;
TMP4161[2].offset = offsetof(Tctx243048, debug);
TMP4161[2].typ = (&NTI163033);
TMP4161[2].name = "debug";
TMP4163[2] = &TMP4161[3];
TMP4161[3].kind = 1;
TMP4161[3].offset = offsetof(Tctx243048, globals);
TMP4161[3].typ = (&NTI190805);
TMP4161[3].name = "globals";
TMP4163[3] = &TMP4161[4];
TMP4161[4].kind = 1;
TMP4161[4].offset = offsetof(Tctx243048, constants);
TMP4161[4].typ = (&NTI190805);
TMP4161[4].name = "constants";
TMP4163[4] = &TMP4161[5];
TMP4161[5].kind = 1;
TMP4161[5].offset = offsetof(Tctx243048, types);
TMP4161[5].typ = (&NTI190845);
TMP4161[5].name = "types";
TMP4163[5] = &TMP4161[6];
TMP4161[6].kind = 1;
TMP4161[6].offset = offsetof(Tctx243048, currentexceptiona);
TMP4161[6].typ = (&NTI190805);
TMP4161[6].name = "currentExceptionA";
TMP4163[6] = &TMP4161[7];
TMP4161[7].kind = 1;
TMP4161[7].offset = offsetof(Tctx243048, currentexceptionb);
TMP4161[7].typ = (&NTI190805);
TMP4161[7].name = "currentExceptionB";
TMP4163[7] = &TMP4161[8];
TMP4161[8].kind = 1;
TMP4161[8].offset = offsetof(Tctx243048, exceptioninstr);
TMP4161[8].typ = (&NTI108);
TMP4161[8].name = "exceptionInstr";
TMP4163[8] = &TMP4161[9];
NTI243232.size = sizeof(PprocHEX3Aobjecttype243232);
NTI243232.kind = 18;
NTI243232.base = 0;
NTI243232.flags = 2;
TMP4165[0] = &TMP4161[11];
NTI243030.size = sizeof(Tblock243030);
NTI243030.kind = 18;
NTI243030.base = 0;
NTI243030.flags = 2;
TMP4166[0] = &TMP4161[13];
TMP4161[13].kind = 1;
TMP4161[13].offset = offsetof(Tblock243030, label);
TMP4161[13].typ = (&NTI190811);
TMP4161[13].name = "label";
TMP4166[1] = &TMP4161[14];
NTI243213.size = sizeof(TY243213*);
NTI243213.kind = 24;
NTI243213.base = (&NTI108);
NTI243213.flags = 2;
NTI243213.marker = TMP4167;
TMP4161[14].kind = 1;
TMP4161[14].offset = offsetof(Tblock243030, fixups);
TMP4161[14].typ = (&NTI243213);
TMP4161[14].name = "fixups";
TMP4161[12].len = 2; TMP4161[12].kind = 2; TMP4161[12].sons = &TMP4166[0];
NTI243030.node = &TMP4161[12];
NTI243233.size = sizeof(TY243233*);
NTI243233.kind = 24;
NTI243233.base = (&NTI243030);
NTI243233.flags = 2;
NTI243233.marker = TMP4168;
TMP4161[11].kind = 1;
TMP4161[11].offset = offsetof(PprocHEX3Aobjecttype243232, blocks);
TMP4161[11].typ = (&NTI243233);
TMP4161[11].name = "blocks";
TMP4165[1] = &TMP4161[15];
TMP4161[15].kind = 1;
TMP4161[15].offset = offsetof(PprocHEX3Aobjecttype243232, sym);
TMP4161[15].typ = (&NTI190811);
TMP4161[15].name = "sym";
TMP4165[2] = &TMP4161[16];
NTI243239.size = sizeof(TY243239);
NTI243239.kind = 18;
NTI243239.base = 0;
NTI243239.flags = 3;
TMP4169[0] = &TMP4161[18];
TMP4161[18].kind = 1;
TMP4161[18].offset = offsetof(TY243239, Field0);
TMP4161[18].typ = (&NTI138);
TMP4161[18].name = "Field0";
TMP4169[1] = &TMP4161[19];
NTI243038.size = sizeof(NU8);
NTI243038.kind = 14;
NTI243038.base = 0;
NTI243038.flags = 3;
for (TMP4172 = 0; TMP4172 < 9; TMP4172++) {
TMP4161[TMP4172+20].kind = 1;
TMP4161[TMP4172+20].offset = TMP4172;
TMP4161[TMP4172+20].name = TMP4171[TMP4172];
TMP4170[TMP4172] = &TMP4161[TMP4172+20];
}
TMP4161[29].len = 9; TMP4161[29].kind = 2; TMP4161[29].sons = &TMP4170[0];
NTI243038.node = &TMP4161[29];
TMP4161[19].kind = 1;
TMP4161[19].offset = offsetof(TY243239, Field1);
TMP4161[19].typ = (&NTI243038);
TMP4161[19].name = "Field1";
TMP4161[17].len = 2; TMP4161[17].kind = 2; TMP4161[17].sons = &TMP4169[0];
NTI243239.node = &TMP4161[17];
NTI243236.size = sizeof(TY243236);
NTI243236.kind = 16;
NTI243236.base = (&NTI243239);
NTI243236.flags = 3;
TMP4161[16].kind = 1;
TMP4161[16].offset = offsetof(PprocHEX3Aobjecttype243232, slots);
TMP4161[16].typ = (&NTI243236);
TMP4161[16].name = "slots";
TMP4165[3] = &TMP4161[30];
TMP4161[30].kind = 1;
TMP4161[30].offset = offsetof(PprocHEX3Aobjecttype243232, maxslots);
TMP4161[30].typ = (&NTI108);
TMP4161[30].name = "maxSlots";
TMP4161[10].len = 4; TMP4161[10].kind = 2; TMP4161[10].sons = &TMP4165[0];
NTI243232.node = &TMP4161[10];
NTI243040.size = sizeof(PprocHEX3Aobjecttype243232*);
NTI243040.kind = 22;
NTI243040.base = (&NTI243232);
NTI243040.flags = 2;
NTI243040.marker = TMP4173;
TMP4161[9].kind = 1;
TMP4161[9].offset = offsetof(Tctx243048, prc);
TMP4161[9].typ = (&NTI243040);
TMP4161[9].name = "prc";
TMP4163[9] = &TMP4161[31];
TMP4161[31].kind = 1;
TMP4161[31].offset = offsetof(Tctx243048, module);
TMP4161[31].typ = (&NTI190811);
TMP4161[31].name = "module";
TMP4163[10] = &TMP4161[32];
TMP4161[32].kind = 1;
TMP4161[32].offset = offsetof(Tctx243048, callsite);
TMP4161[32].typ = (&NTI190805);
TMP4161[32].name = "callsite";
TMP4163[11] = &TMP4161[33];
NTI243032.size = sizeof(NU8);
NTI243032.kind = 14;
NTI243032.base = 0;
NTI243032.flags = 3;
for (TMP4176 = 0; TMP4176 < 5; TMP4176++) {
TMP4161[TMP4176+34].kind = 1;
TMP4161[TMP4176+34].offset = TMP4176;
TMP4161[TMP4176+34].name = TMP4175[TMP4176];
TMP4174[TMP4176] = &TMP4161[TMP4176+34];
}
TMP4161[39].len = 5; TMP4161[39].kind = 2; TMP4161[39].sons = &TMP4174[0];
NTI243032.node = &TMP4161[39];
TMP4161[33].kind = 1;
TMP4161[33].offset = offsetof(Tctx243048, mode);
TMP4161[33].typ = (&NTI243032);
TMP4161[33].name = "mode";
TMP4163[12] = &TMP4161[40];
NTI243034.size = sizeof(NU8);
NTI243034.kind = 14;
NTI243034.base = 0;
NTI243034.flags = 3;
for (TMP4179 = 0; TMP4179 < 3; TMP4179++) {
TMP4161[TMP4179+41].kind = 1;
TMP4161[TMP4179+41].offset = TMP4179;
TMP4161[TMP4179+41].name = TMP4178[TMP4179];
TMP4177[TMP4179] = &TMP4161[TMP4179+41];
}
TMP4161[44].len = 3; TMP4161[44].kind = 2; TMP4161[44].sons = &TMP4177[0];
NTI243034.node = &TMP4161[44];
NTI243036.size = sizeof(NU8);
NTI243036.kind = 19;
NTI243036.base = (&NTI243034);
NTI243036.flags = 3;
TMP4161[45].len = 0; TMP4161[45].kind = 0;
NTI243036.node = &TMP4161[45];
TMP4161[40].kind = 1;
TMP4161[40].offset = offsetof(Tctx243048, features);
TMP4161[40].typ = (&NTI243036);
TMP4161[40].name = "features";
TMP4163[13] = &TMP4161[46];
TMP4161[46].kind = 1;
TMP4161[46].offset = offsetof(Tctx243048, traceactive);
TMP4161[46].typ = (&NTI138);
TMP4161[46].name = "traceActive";
TMP4163[14] = &TMP4161[47];
TMP4161[47].kind = 1;
TMP4161[47].offset = offsetof(Tctx243048, loopiterations);
TMP4161[47].typ = (&NTI108);
TMP4161[47].name = "loopIterations";
TMP4163[15] = &TMP4161[48];
TMP4161[48].kind = 1;
TMP4161[48].offset = offsetof(Tctx243048, comesfromheuristic);
TMP4161[48].typ = (&NTI162338);
TMP4161[48].name = "comesFromHeuristic";
TMP4163[16] = &TMP4161[49];
NTI243273.size = sizeof(TY243273);
NTI243273.kind = 18;
NTI243273.base = 0;
TMP4180[0] = &TMP4161[51];
TMP4161[51].kind = 1;
TMP4161[51].offset = offsetof(TY243273, Field0);
TMP4161[51].typ = (&NTI149);
TMP4161[51].name = "Field0";
TMP4180[1] = &TMP4161[52];
NTI243044.size = sizeof(TY185578);
NTI243044.kind = 18;
NTI243044.base = 0;
NTI243044.flags = 2;
TMP4181[0] = &TMP4161[54];
TMP4161[54].kind = 1;
TMP4161[54].offset = offsetof(TY185578, Field0);
TMP4161[54].typ = (&NTI153);
TMP4161[54].name = "Field0";
TMP4181[1] = &TMP4161[55];
TMP4161[55].kind = 1;
TMP4161[55].offset = offsetof(TY185578, Field1);
TMP4161[55].typ = (&NTI185580);
TMP4161[55].name = "Field1";
TMP4161[53].len = 2; TMP4161[53].kind = 2; TMP4161[53].sons = &TMP4181[0];
NTI243044.node = &TMP4161[53];
TMP4161[52].kind = 1;
TMP4161[52].offset = offsetof(TY243273, Field1);
TMP4161[52].typ = (&NTI243044);
TMP4161[52].name = "Field1";
TMP4161[50].len = 2; TMP4161[50].kind = 2; TMP4161[50].sons = &TMP4180[0];
NTI243273.node = &TMP4161[50];
NTI243272.size = sizeof(TY243272*);
NTI243272.kind = 24;
NTI243272.base = (&NTI243273);
NTI243272.marker = TMP4182;
TMP4161[49].kind = 1;
TMP4161[49].offset = offsetof(Tctx243048, callbacks);
TMP4161[49].typ = (&NTI243272);
TMP4161[49].name = "callbacks";
TMP4163[17] = &TMP4161[56];
TMP4161[56].kind = 1;
TMP4161[56].offset = offsetof(Tctx243048, errorflag);
TMP4161[56].typ = (&NTI149);
TMP4161[56].name = "errorFlag";
TMP4161[0].len = 18; TMP4161[0].kind = 2; TMP4161[0].sons = &TMP4163[0];
NTI243048.node = &TMP4161[0];
NTI243046.size = sizeof(Tctx243048*);
NTI243046.kind = 22;
NTI243046.base = (&NTI243048);
NTI243046.marker = TMP4183;
NTI243028.size = sizeof(NU8);
NTI243028.kind = 14;
NTI243028.base = 0;
NTI243028.flags = 3;
for (TMP7274 = 0; TMP7274 < 157; TMP7274++) {
TMP4161[TMP7274+57].kind = 1;
TMP4161[TMP7274+57].offset = TMP7274;
TMP4161[TMP7274+57].name = TMP7273[TMP7274];
TMP7272[TMP7274] = &TMP4161[TMP7274+57];
}
TMP4161[214].len = 157; TMP4161[214].kind = 2; TMP4161[214].sons = &TMP7272[0];
NTI243028.node = &TMP4161[214];
}

