/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Tctx245048 Tctx245048;
typedef struct Tsym192843 Tsym192843;
typedef struct Tpasscontext243005 Tpasscontext243005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY245253 TY245253;
typedef struct TY165036 TY165036;
typedef struct Tnode192813 Tnode192813;
typedef struct Ttypeseq192845 Ttypeseq192845;
typedef struct PprocHEX3Aobjecttype245232 PprocHEX3Aobjecttype245232;
typedef struct Tlineinfo164338 Tlineinfo164338;
typedef struct TY245272 TY245272;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY245233 TY245233;
typedef struct TY245239 TY245239;
typedef struct Tblock245030 Tblock245030;
typedef struct TY245213 TY245213;
typedef struct TY245273 TY245273;
typedef struct Vmargs245042 Vmargs245042;
typedef struct TY187578 TY187578;
typedef struct TY187581 TY187581;
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
typedef struct Ttype192849 Ttype192849;
typedef struct Tidobj168015 Tidobj168015;
typedef struct Tscope192837 Tscope192837;
typedef struct TY192944 TY192944;
typedef struct Tstrtable192817 Tstrtable192817;
typedef struct Tsymseq192815 Tsymseq192815;
typedef struct Tident168021 Tident168021;
typedef struct Tloc192827 Tloc192827;
typedef struct Ropeobj162009 Ropeobj162009;
typedef struct Tlib192831 Tlib192831;
typedef struct Tnodeseq192807 Tnodeseq192807;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct Tinstantiation192833 Tinstantiation192833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TY192933 TY192933;
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
struct  Tpasscontext243005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tlineinfo164338  {
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
struct  Tctx245048  {
  Tpasscontext243005 Sup;
TY245253* code;
TY165036* debug;
Tnode192813* globals;
Tnode192813* constants;
Ttypeseq192845* types;
Tnode192813* currentexceptiona;
Tnode192813* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype245232* prc;
Tsym192843* module;
Tnode192813* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo164338 comesfromheuristic;
TY245272* callbacks;
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
struct TY245239 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY245239 TY245236[256];
struct  PprocHEX3Aobjecttype245232  {
TY245233* blocks;
Tsym192843* sym;
TY245236 slots;
NI maxslots;
};
struct  Tblock245030  {
Tsym192843* label;
TY245213* fixups;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs245042* args, void* ClEnv);
void* ClEnv;
} Vmcallback245044;
struct TY245273 {
NimStringDesc* Field0;
Vmcallback245044 Field1;
};
struct TY187578 {
void* Field0;
TY187581* Field1;
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
typedef NU8 TY245428[20];
struct  Tidobj168015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable192817  {
NI counter;
Tsymseq192815* data;
};
struct  Tloc192827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype192849* t;
Ropeobj162009* r;
Ropeobj162009* heaproot;
};
struct  Tsym192843  {
  Tidobj168015 Sup;
NU8 kind;
union{
struct {Ttypeseq192845* typeinstcache;
Tscope192837* typscope;
} S1;
struct {TY192944* procinstcache;
Tsym192843* gcunsafetyreason;
} S2;
struct {TY192944* usedgenerics;
Tstrtable192817 tab;
} S3;
struct {Tsym192843* guard;
} S4;
} kindU;
NU16 magic;
Ttype192849* typ;
Tident168021* name;
Tlineinfo164338 info;
Tsym192843* owner;
NU32 flags;
Tnode192813* ast;
NU32 options;
NI position;
NI offset;
Tloc192827 loc;
Tlib192831* annex;
Tnode192813* constraint;
};
struct  Tnode192813  {
Ttype192849* typ;
Tlineinfo164338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym192843* sym;
} S4;
struct {Tident168021* ident;
} S5;
struct {Tnodeseq192807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Vmargs245042  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode192813* currentexception;
};
struct TY187581 {
char dummy;
};
typedef NI TY27820[16];
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
struct  Ttype192849  {
  Tidobj168015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq192845* sons;
Tnode192813* n;
Tsym192843* owner;
Tsym192843* sym;
Tsym192843* destructor;
Tsym192843* deepcopy;
Tsym192843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc192827 loc;
};
struct  Tscope192837  {
NI depthlevel;
Tstrtable192817 symbols;
Tnodeseq192807* usingsyms;
Tscope192837* parent;
};
struct  Tident168021  {
  Tidobj168015 Sup;
NimStringDesc* s;
Tident168021* next;
NI h;
};
struct  Ropeobj162009  {
  TNimObject Sup;
Ropeobj162009* left;
Ropeobj162009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tlib192831  {
  Tlistentry130022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj162009* name;
Tnode192813* path;
};
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
struct  Tinstantiation192833  {
Tsym192843* sym;
Ttypeseq192845* concretetypes;
TY192933* usedby;
};
struct TY245253 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY245213 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY245233 {
  TGenericSeq Sup;
  Tblock245030 data[SEQ_DECL_SIZE];
};
struct TY245272 {
  TGenericSeq Sup;
  TY245273 data[SEQ_DECL_SIZE];
};
struct TY165036 {
  TGenericSeq Sup;
  Tlineinfo164338 data[SEQ_DECL_SIZE];
};
struct Ttypeseq192845 {
  TGenericSeq Sup;
  Ttype192849* data[SEQ_DECL_SIZE];
};
struct TY192944 {
  TGenericSeq Sup;
  Tinstantiation192833* data[SEQ_DECL_SIZE];
};
struct Tsymseq192815 {
  TGenericSeq Sup;
  Tsym192843* data[SEQ_DECL_SIZE];
};
struct Tnodeseq192807 {
  TGenericSeq Sup;
  Tnode192813* data[SEQ_DECL_SIZE];
};
struct TY192933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tctx245048*, newctx_245281)(Tsym192843* module);
N_NIMCALL(void, TMP4175)(void* p, NI op);
N_NIMCALL(void, TMP4178)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4179)(void* p, NI op);
N_NIMCALL(void, TMP4184)(void* p, NI op);
N_NIMCALL(void, TMP4193)(void* p, NI op);
N_NIMCALL(void, TMP4194)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_51804)(Tcell46747* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46763* s, Tcell46747* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(Tnode192813*, newnode_193401)(NU8 kind);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(Tlineinfo164338, unknownlineinfo_165027)(void);
static N_INLINE(void, nimGCunref)(void* p);
static N_INLINE(void, decref_52204)(Tcell46747* c);
static N_INLINE(NIM_BOOL, canbecycleroot_50267)(Tcell46747* c);
static N_INLINE(void, rtladdcycleroot_51023)(Tcell46747* c);
N_NOINLINE(void, incl_47465)(Tcellset46759* s, Tcell46747* cell);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(void, refresh_245377)(Tctx245048* c, Tsym192843* module);
N_NIMCALL(void, registercallback_245404)(Tctx245048* c, NimStringDesc* name, Vmcallback245044 callback);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52622)(Tcell46747* c);
STRING_LITERAL(TMP4195, "", 0);
NIM_CONST TY245428 largeinstrs_245427 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x35, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x01, 0x18}
;
NIM_CONST TY245428 relativejumps_245430 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xC0, 0x03, 0x00, 0x00}
;
extern TNimType NTI243005; /* TPassContext */
TNimType NTI245048; /* TCtx */
extern TNimType NTI124; /* uint32 */
TNimType NTI245253; /* seq[TInstr] */
extern TNimType NTI165036; /* seq[TLineInfo] */
extern TNimType NTI192805; /* PNode */
extern TNimType NTI192845; /* TTypeSeq */
extern TNimType NTI108; /* int */
TNimType NTI245232; /* PProc:ObjectType */
TNimType NTI245030; /* TBlock */
extern TNimType NTI192811; /* PSym */
TNimType NTI245213; /* seq[TPosition] */
TNimType NTI245233; /* seq[TBlock] */
TNimType NTI245239; /* tuple[inUse: bool, kind: TSlotKind] */
extern TNimType NTI138; /* bool */
TNimType NTI245038; /* TSlotKind */
TNimType NTI245236; /* array[0..255, tuple[inUse: bool, kind: TSlotKind]] */
TNimType NTI245040; /* PProc */
TNimType NTI245032; /* TEvalMode */
TNimType NTI245034; /* TSandboxFlag */
TNimType NTI245036; /* TSandboxFlags */
extern TNimType NTI164338; /* TLineInfo */
TNimType NTI245273; /* tuple[key: string, value: VmCallback] */
extern TNimType NTI149; /* string */
TNimType NTI245044; /* (pointer, ref tuple[]) */
extern TNimType NTI153; /* pointer */
extern TNimType NTI187580; /* ref tuple[] */
TNimType NTI245272; /* seq[tuple[key: string, value: VmCallback]] */
TNimType NTI245046; /* PCtx */
extern TFrame* frameptr_17042;
extern Tgcheap48616 gch_48644;
TNimType NTI245028; /* TOpcode */
N_NIMCALL(void, TMP4175)(void* p, NI op) {
	TY245253* a;
	NI LOC1;
	a = (TY245253*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP4178)(void* p, NI op) {
	TY245213* a;
	NI LOC1;
	a = (TY245213*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP4179)(void* p, NI op) {
	TY245233* a;
	NI LOC1;
	a = (TY245233*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].label, op);
	nimGCvisit((void*)a->data[LOC1].fixups, op);
	}
}
N_NIMCALL(void, TMP4184)(void* p, NI op) {
	PprocHEX3Aobjecttype245232* a;
	NI LOC1;
	a = (PprocHEX3Aobjecttype245232*)p;
	nimGCvisit((void*)(*a).blocks, op);
	nimGCvisit((void*)(*a).sym, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 256; LOC1++) {
	}
}
N_NIMCALL(void, TMP4193)(void* p, NI op) {
	TY245272* a;
	NI LOC1;
	a = (TY245272*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1.ClEnv, op);
	}
}
N_NIMCALL(void, TMP4194)(void* p, NI op) {
	Tctx245048* a;
	a = (Tctx245048*)p;
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

static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr) {
	Tcell46747* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	result = ((Tcell46747*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46747))))));
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

static N_INLINE(void, decref_52204)(Tcell46747* c) {
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
	Tcell46747* LOC1;
	nimfr("nimGCunref", "gc.nim")
	nimln(223, "gc.nim");
	LOC1 = 0;
	LOC1 = usrtocell_50246(p);
	decref_52204(LOC1);
	popFrame();
}

N_NIMCALL(Tctx245048*, newctx_245281)(Tsym192843* module) {
	Tctx245048* result;
	Tctx245048* LOC1;
	PprocHEX3Aobjecttype245232* LOC2;
	NimStringDesc* LOC3;
	nimfr("newCtx", "vmdef.nim")
	result = 0;
	nimln(210, "vmdef.nim");
	LOC1 = 0;
	LOC1 = (Tctx245048*) newObj((&NTI245046), sizeof(Tctx245048));
	(*LOC1).Sup.Sup.m_type = (&NTI245048);
	if ((*LOC1).code) nimGCunrefNoCycle((*LOC1).code);
	(*LOC1).code = (TY245253*) newSeqRC1((&NTI245253), 0);
	if ((*LOC1).debug) nimGCunrefNoCycle((*LOC1).debug);
	(*LOC1).debug = (TY165036*) newSeqRC1((&NTI165036), 0);
	nimln(211, "vmdef.nim");
	asgnRefNoCycle((void**) (&(*LOC1).globals), newnode_193401(((NU8) 126)));
	asgnRefNoCycle((void**) (&(*LOC1).constants), newnode_193401(((NU8) 115)));
	if ((*LOC1).types) nimGCunrefNoCycle((*LOC1).types);
	(*LOC1).types = (Ttypeseq192845*) newSeqRC1((&NTI192845), 0);
	LOC2 = 0;
	LOC2 = (PprocHEX3Aobjecttype245232*) newObj((&NTI245040), sizeof(PprocHEX3Aobjecttype245232));
	if ((*LOC2).blocks) nimGCunrefNoCycle((*LOC2).blocks);
	(*LOC2).blocks = (TY245233*) newSeqRC1((&NTI245233), 0);
	asgnRefNoCycle((void**) (&(*LOC1).prc), LOC2);
	asgnRefNoCycle((void**) (&(*LOC1).module), module);
	(*LOC1).loopiterations = ((NI) 1500000);
	nimln(213, "vmdef.nim");
	(*LOC1).comesfromheuristic = unknownlineinfo_165027();
	if ((*LOC1).callbacks) nimGCunref((*LOC1).callbacks);
	(*LOC1).callbacks = (TY245272*) newSeqRC1((&NTI245272), 0);
	LOC3 = 0;
	LOC3 = (*LOC1).errorflag; (*LOC1).errorflag = copyStringRC1(((NimStringDesc*) &TMP4195));
	if (LOC3) nimGCunrefNoCycle(LOC3);
	result = LOC1;
	popFrame();
	return result;
}

N_NIMCALL(void, refresh_245377)(Tctx245048* c, Tsym192843* module) {
	PprocHEX3Aobjecttype245232* LOC1;
	nimfr("refresh", "vmdef.nim")
	nimln(216, "vmdef.nim");
	asgnRefNoCycle((void**) (&(*c).module), module);
	nimln(217, "vmdef.nim");
	LOC1 = 0;
	LOC1 = (PprocHEX3Aobjecttype245232*) newObj((&NTI245040), sizeof(PprocHEX3Aobjecttype245232));
	if ((*LOC1).blocks) nimGCunrefNoCycle((*LOC1).blocks);
	(*LOC1).blocks = (TY245233*) newSeqRC1((&NTI245233), 0);
	asgnRefNoCycle((void**) (&(*c).prc), LOC1);
	nimln(218, "vmdef.nim");
	(*c).loopiterations = ((NI) 1500000);
	popFrame();
}

static N_INLINE(void, incref_52622)(Tcell46747* c) {
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

N_NIMCALL(void, registercallback_245404)(Tctx245048* c, NimStringDesc* name, Vmcallback245044 callback) {
	TY245273 LOC1;
	NimStringDesc* LOC2;
	nimfr("registerCallback", "vmdef.nim")
	nimln(221, "vmdef.nim");
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Field0 = copyString(name);
	LOC1.Field1.ClEnv = callback.ClEnv;
	LOC1.Field1.ClPrc = callback.ClPrc;
	(*c).callbacks = (TY245272*) incrSeq(&((*c).callbacks)->Sup, sizeof(TY245273));
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
static TNimNode* TMP4174[18];
static TNimNode* TMP4176[4];
static TNimNode* TMP4177[2];
static TNimNode* TMP4180[2];
static TNimNode* TMP4181[9];
NI TMP4183;
static char* NIM_CONST TMP4182[9] = {
"slotEmpty", 
"slotFixedVar", 
"slotFixedLet", 
"slotTempUnknown", 
"slotTempInt", 
"slotTempFloat", 
"slotTempStr", 
"slotTempComplex", 
"slotTempPerm"};
static TNimNode* TMP4185[5];
NI TMP4187;
static char* NIM_CONST TMP4186[5] = {
"emRepl", 
"emConst", 
"emOptimize", 
"emStaticExpr", 
"emStaticStmt"};
static TNimNode* TMP4188[3];
NI TMP4190;
static char* NIM_CONST TMP4189[3] = {
"allowCast", 
"allowFFI", 
"allowInfiniteLoops"};
static TNimNode* TMP4191[2];
static TNimNode* TMP4192[2];
static TNimNode* TMP7283[157];
NI TMP7285;
static char* NIM_CONST TMP7284[157] = {
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
static TNimNode TMP4172[215];
NTI245048.size = sizeof(Tctx245048);
NTI245048.kind = 17;
NTI245048.base = (&NTI243005);
TMP4174[0] = &TMP4172[1];
NTI245253.size = sizeof(TY245253*);
NTI245253.kind = 24;
NTI245253.base = (&NTI124);
NTI245253.flags = 2;
NTI245253.marker = TMP4175;
TMP4172[1].kind = 1;
TMP4172[1].offset = offsetof(Tctx245048, code);
TMP4172[1].typ = (&NTI245253);
TMP4172[1].name = "code";
TMP4174[1] = &TMP4172[2];
TMP4172[2].kind = 1;
TMP4172[2].offset = offsetof(Tctx245048, debug);
TMP4172[2].typ = (&NTI165036);
TMP4172[2].name = "debug";
TMP4174[2] = &TMP4172[3];
TMP4172[3].kind = 1;
TMP4172[3].offset = offsetof(Tctx245048, globals);
TMP4172[3].typ = (&NTI192805);
TMP4172[3].name = "globals";
TMP4174[3] = &TMP4172[4];
TMP4172[4].kind = 1;
TMP4172[4].offset = offsetof(Tctx245048, constants);
TMP4172[4].typ = (&NTI192805);
TMP4172[4].name = "constants";
TMP4174[4] = &TMP4172[5];
TMP4172[5].kind = 1;
TMP4172[5].offset = offsetof(Tctx245048, types);
TMP4172[5].typ = (&NTI192845);
TMP4172[5].name = "types";
TMP4174[5] = &TMP4172[6];
TMP4172[6].kind = 1;
TMP4172[6].offset = offsetof(Tctx245048, currentexceptiona);
TMP4172[6].typ = (&NTI192805);
TMP4172[6].name = "currentExceptionA";
TMP4174[6] = &TMP4172[7];
TMP4172[7].kind = 1;
TMP4172[7].offset = offsetof(Tctx245048, currentexceptionb);
TMP4172[7].typ = (&NTI192805);
TMP4172[7].name = "currentExceptionB";
TMP4174[7] = &TMP4172[8];
TMP4172[8].kind = 1;
TMP4172[8].offset = offsetof(Tctx245048, exceptioninstr);
TMP4172[8].typ = (&NTI108);
TMP4172[8].name = "exceptionInstr";
TMP4174[8] = &TMP4172[9];
NTI245232.size = sizeof(PprocHEX3Aobjecttype245232);
NTI245232.kind = 18;
NTI245232.base = 0;
NTI245232.flags = 2;
TMP4176[0] = &TMP4172[11];
NTI245030.size = sizeof(Tblock245030);
NTI245030.kind = 18;
NTI245030.base = 0;
NTI245030.flags = 2;
TMP4177[0] = &TMP4172[13];
TMP4172[13].kind = 1;
TMP4172[13].offset = offsetof(Tblock245030, label);
TMP4172[13].typ = (&NTI192811);
TMP4172[13].name = "label";
TMP4177[1] = &TMP4172[14];
NTI245213.size = sizeof(TY245213*);
NTI245213.kind = 24;
NTI245213.base = (&NTI108);
NTI245213.flags = 2;
NTI245213.marker = TMP4178;
TMP4172[14].kind = 1;
TMP4172[14].offset = offsetof(Tblock245030, fixups);
TMP4172[14].typ = (&NTI245213);
TMP4172[14].name = "fixups";
TMP4172[12].len = 2; TMP4172[12].kind = 2; TMP4172[12].sons = &TMP4177[0];
NTI245030.node = &TMP4172[12];
NTI245233.size = sizeof(TY245233*);
NTI245233.kind = 24;
NTI245233.base = (&NTI245030);
NTI245233.flags = 2;
NTI245233.marker = TMP4179;
TMP4172[11].kind = 1;
TMP4172[11].offset = offsetof(PprocHEX3Aobjecttype245232, blocks);
TMP4172[11].typ = (&NTI245233);
TMP4172[11].name = "blocks";
TMP4176[1] = &TMP4172[15];
TMP4172[15].kind = 1;
TMP4172[15].offset = offsetof(PprocHEX3Aobjecttype245232, sym);
TMP4172[15].typ = (&NTI192811);
TMP4172[15].name = "sym";
TMP4176[2] = &TMP4172[16];
NTI245239.size = sizeof(TY245239);
NTI245239.kind = 18;
NTI245239.base = 0;
NTI245239.flags = 3;
TMP4180[0] = &TMP4172[18];
TMP4172[18].kind = 1;
TMP4172[18].offset = offsetof(TY245239, Field0);
TMP4172[18].typ = (&NTI138);
TMP4172[18].name = "Field0";
TMP4180[1] = &TMP4172[19];
NTI245038.size = sizeof(NU8);
NTI245038.kind = 14;
NTI245038.base = 0;
NTI245038.flags = 3;
for (TMP4183 = 0; TMP4183 < 9; TMP4183++) {
TMP4172[TMP4183+20].kind = 1;
TMP4172[TMP4183+20].offset = TMP4183;
TMP4172[TMP4183+20].name = TMP4182[TMP4183];
TMP4181[TMP4183] = &TMP4172[TMP4183+20];
}
TMP4172[29].len = 9; TMP4172[29].kind = 2; TMP4172[29].sons = &TMP4181[0];
NTI245038.node = &TMP4172[29];
TMP4172[19].kind = 1;
TMP4172[19].offset = offsetof(TY245239, Field1);
TMP4172[19].typ = (&NTI245038);
TMP4172[19].name = "Field1";
TMP4172[17].len = 2; TMP4172[17].kind = 2; TMP4172[17].sons = &TMP4180[0];
NTI245239.node = &TMP4172[17];
NTI245236.size = sizeof(TY245236);
NTI245236.kind = 16;
NTI245236.base = (&NTI245239);
NTI245236.flags = 3;
TMP4172[16].kind = 1;
TMP4172[16].offset = offsetof(PprocHEX3Aobjecttype245232, slots);
TMP4172[16].typ = (&NTI245236);
TMP4172[16].name = "slots";
TMP4176[3] = &TMP4172[30];
TMP4172[30].kind = 1;
TMP4172[30].offset = offsetof(PprocHEX3Aobjecttype245232, maxslots);
TMP4172[30].typ = (&NTI108);
TMP4172[30].name = "maxSlots";
TMP4172[10].len = 4; TMP4172[10].kind = 2; TMP4172[10].sons = &TMP4176[0];
NTI245232.node = &TMP4172[10];
NTI245040.size = sizeof(PprocHEX3Aobjecttype245232*);
NTI245040.kind = 22;
NTI245040.base = (&NTI245232);
NTI245040.flags = 2;
NTI245040.marker = TMP4184;
TMP4172[9].kind = 1;
TMP4172[9].offset = offsetof(Tctx245048, prc);
TMP4172[9].typ = (&NTI245040);
TMP4172[9].name = "prc";
TMP4174[9] = &TMP4172[31];
TMP4172[31].kind = 1;
TMP4172[31].offset = offsetof(Tctx245048, module);
TMP4172[31].typ = (&NTI192811);
TMP4172[31].name = "module";
TMP4174[10] = &TMP4172[32];
TMP4172[32].kind = 1;
TMP4172[32].offset = offsetof(Tctx245048, callsite);
TMP4172[32].typ = (&NTI192805);
TMP4172[32].name = "callsite";
TMP4174[11] = &TMP4172[33];
NTI245032.size = sizeof(NU8);
NTI245032.kind = 14;
NTI245032.base = 0;
NTI245032.flags = 3;
for (TMP4187 = 0; TMP4187 < 5; TMP4187++) {
TMP4172[TMP4187+34].kind = 1;
TMP4172[TMP4187+34].offset = TMP4187;
TMP4172[TMP4187+34].name = TMP4186[TMP4187];
TMP4185[TMP4187] = &TMP4172[TMP4187+34];
}
TMP4172[39].len = 5; TMP4172[39].kind = 2; TMP4172[39].sons = &TMP4185[0];
NTI245032.node = &TMP4172[39];
TMP4172[33].kind = 1;
TMP4172[33].offset = offsetof(Tctx245048, mode);
TMP4172[33].typ = (&NTI245032);
TMP4172[33].name = "mode";
TMP4174[12] = &TMP4172[40];
NTI245034.size = sizeof(NU8);
NTI245034.kind = 14;
NTI245034.base = 0;
NTI245034.flags = 3;
for (TMP4190 = 0; TMP4190 < 3; TMP4190++) {
TMP4172[TMP4190+41].kind = 1;
TMP4172[TMP4190+41].offset = TMP4190;
TMP4172[TMP4190+41].name = TMP4189[TMP4190];
TMP4188[TMP4190] = &TMP4172[TMP4190+41];
}
TMP4172[44].len = 3; TMP4172[44].kind = 2; TMP4172[44].sons = &TMP4188[0];
NTI245034.node = &TMP4172[44];
NTI245036.size = sizeof(NU8);
NTI245036.kind = 19;
NTI245036.base = (&NTI245034);
NTI245036.flags = 3;
TMP4172[45].len = 0; TMP4172[45].kind = 0;
NTI245036.node = &TMP4172[45];
TMP4172[40].kind = 1;
TMP4172[40].offset = offsetof(Tctx245048, features);
TMP4172[40].typ = (&NTI245036);
TMP4172[40].name = "features";
TMP4174[13] = &TMP4172[46];
TMP4172[46].kind = 1;
TMP4172[46].offset = offsetof(Tctx245048, traceactive);
TMP4172[46].typ = (&NTI138);
TMP4172[46].name = "traceActive";
TMP4174[14] = &TMP4172[47];
TMP4172[47].kind = 1;
TMP4172[47].offset = offsetof(Tctx245048, loopiterations);
TMP4172[47].typ = (&NTI108);
TMP4172[47].name = "loopIterations";
TMP4174[15] = &TMP4172[48];
TMP4172[48].kind = 1;
TMP4172[48].offset = offsetof(Tctx245048, comesfromheuristic);
TMP4172[48].typ = (&NTI164338);
TMP4172[48].name = "comesFromHeuristic";
TMP4174[16] = &TMP4172[49];
NTI245273.size = sizeof(TY245273);
NTI245273.kind = 18;
NTI245273.base = 0;
TMP4191[0] = &TMP4172[51];
TMP4172[51].kind = 1;
TMP4172[51].offset = offsetof(TY245273, Field0);
TMP4172[51].typ = (&NTI149);
TMP4172[51].name = "Field0";
TMP4191[1] = &TMP4172[52];
NTI245044.size = sizeof(TY187578);
NTI245044.kind = 18;
NTI245044.base = 0;
NTI245044.flags = 2;
TMP4192[0] = &TMP4172[54];
TMP4172[54].kind = 1;
TMP4172[54].offset = offsetof(TY187578, Field0);
TMP4172[54].typ = (&NTI153);
TMP4172[54].name = "Field0";
TMP4192[1] = &TMP4172[55];
TMP4172[55].kind = 1;
TMP4172[55].offset = offsetof(TY187578, Field1);
TMP4172[55].typ = (&NTI187580);
TMP4172[55].name = "Field1";
TMP4172[53].len = 2; TMP4172[53].kind = 2; TMP4172[53].sons = &TMP4192[0];
NTI245044.node = &TMP4172[53];
TMP4172[52].kind = 1;
TMP4172[52].offset = offsetof(TY245273, Field1);
TMP4172[52].typ = (&NTI245044);
TMP4172[52].name = "Field1";
TMP4172[50].len = 2; TMP4172[50].kind = 2; TMP4172[50].sons = &TMP4191[0];
NTI245273.node = &TMP4172[50];
NTI245272.size = sizeof(TY245272*);
NTI245272.kind = 24;
NTI245272.base = (&NTI245273);
NTI245272.marker = TMP4193;
TMP4172[49].kind = 1;
TMP4172[49].offset = offsetof(Tctx245048, callbacks);
TMP4172[49].typ = (&NTI245272);
TMP4172[49].name = "callbacks";
TMP4174[17] = &TMP4172[56];
TMP4172[56].kind = 1;
TMP4172[56].offset = offsetof(Tctx245048, errorflag);
TMP4172[56].typ = (&NTI149);
TMP4172[56].name = "errorFlag";
TMP4172[0].len = 18; TMP4172[0].kind = 2; TMP4172[0].sons = &TMP4174[0];
NTI245048.node = &TMP4172[0];
NTI245046.size = sizeof(Tctx245048*);
NTI245046.kind = 22;
NTI245046.base = (&NTI245048);
NTI245046.marker = TMP4194;
NTI245028.size = sizeof(NU8);
NTI245028.kind = 14;
NTI245028.base = 0;
NTI245028.flags = 3;
for (TMP7285 = 0; TMP7285 < 157; TMP7285++) {
TMP4172[TMP7285+57].kind = 1;
TMP4172[TMP7285+57].offset = TMP7285;
TMP4172[TMP7285+57].name = TMP7284[TMP7285];
TMP7283[TMP7285] = &TMP4172[TMP7285+57];
}
TMP4172[214].len = 157; TMP4172[214].kind = 2; TMP4172[214].sons = &TMP7283[0];
NTI245028.node = &TMP4172[214];
}

