/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Tctx244048 Tctx244048;
typedef struct Tsym191843 Tsym191843;
typedef struct Tpasscontext242005 Tpasscontext242005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY244253 TY244253;
typedef struct TY164036 TY164036;
typedef struct Tnode191813 Tnode191813;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct PprocHEX3Aobjecttype244232 PprocHEX3Aobjecttype244232;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct TY244272 TY244272;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY244233 TY244233;
typedef struct TY244239 TY244239;
typedef struct Tblock244030 Tblock244030;
typedef struct TY244213 TY244213;
typedef struct TY244273 TY244273;
typedef struct Vmargs244042 Vmargs244042;
typedef struct TY186578 TY186578;
typedef struct TY186581 TY186581;
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
typedef struct Ttype191849 Ttype191849;
typedef struct Tidobj167015 Tidobj167015;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Tident167021 Tident167021;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tlib191831 Tlib191831;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TY191933 TY191933;
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
struct  Tpasscontext242005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tlineinfo163338  {
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
struct  Tctx244048  {
  Tpasscontext242005 Sup;
TY244253* code;
TY164036* debug;
Tnode191813* globals;
Tnode191813* constants;
Ttypeseq191845* types;
Tnode191813* currentexceptiona;
Tnode191813* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype244232* prc;
Tsym191843* module;
Tnode191813* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo163338 comesfromheuristic;
TY244272* callbacks;
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
struct TY244239 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY244239 TY244236[256];
struct  PprocHEX3Aobjecttype244232  {
TY244233* blocks;
Tsym191843* sym;
TY244236 slots;
NI maxslots;
};
struct  Tblock244030  {
Tsym191843* label;
TY244213* fixups;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs244042* args, void* ClEnv);
void* ClEnv;
} Vmcallback244044;
struct TY244273 {
NimStringDesc* Field0;
Vmcallback244044 Field1;
};
struct TY186578 {
void* Field0;
TY186581* Field1;
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
typedef NU8 TY244428[20];
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable191817  {
NI counter;
Tsymseq191815* data;
};
struct  Tloc191827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype191849* t;
Ropeobj161009* r;
Ropeobj161009* heaproot;
};
struct  Tsym191843  {
  Tidobj167015 Sup;
NU8 kind;
union{
struct {Ttypeseq191845* typeinstcache;
Tscope191837* typscope;
} S1;
struct {TY191944* procinstcache;
Tsym191843* gcunsafetyreason;
} S2;
struct {TY191944* usedgenerics;
Tstrtable191817 tab;
} S3;
struct {Tsym191843* guard;
} S4;
} kindU;
NU16 magic;
Ttype191849* typ;
Tident167021* name;
Tlineinfo163338 info;
Tsym191843* owner;
NU32 flags;
Tnode191813* ast;
NU32 options;
NI position;
NI offset;
Tloc191827 loc;
Tlib191831* annex;
Tnode191813* constraint;
};
struct  Tnode191813  {
Ttype191849* typ;
Tlineinfo163338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym191843* sym;
} S4;
struct {Tident167021* ident;
} S5;
struct {Tnodeseq191807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Vmargs244042  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode191813* currentexception;
};
struct TY186581 {
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
struct  Ttype191849  {
  Tidobj167015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq191845* sons;
Tnode191813* n;
Tsym191843* owner;
Tsym191843* sym;
Tsym191843* destructor;
Tsym191843* deepcopy;
Tsym191843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc191827 loc;
};
struct  Tscope191837  {
NI depthlevel;
Tstrtable191817 symbols;
Tnodeseq191807* usingsyms;
Tscope191837* parent;
};
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
};
struct  Ropeobj161009  {
  TNimObject Sup;
Ropeobj161009* left;
Ropeobj161009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tlib191831  {
  Tlistentry130022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj161009* name;
Tnode191813* path;
};
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
};
struct TY244253 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY244213 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY244233 {
  TGenericSeq Sup;
  Tblock244030 data[SEQ_DECL_SIZE];
};
struct TY244272 {
  TGenericSeq Sup;
  TY244273 data[SEQ_DECL_SIZE];
};
struct TY164036 {
  TGenericSeq Sup;
  Tlineinfo163338 data[SEQ_DECL_SIZE];
};
struct Ttypeseq191845 {
  TGenericSeq Sup;
  Ttype191849* data[SEQ_DECL_SIZE];
};
struct TY191944 {
  TGenericSeq Sup;
  Tinstantiation191833* data[SEQ_DECL_SIZE];
};
struct Tsymseq191815 {
  TGenericSeq Sup;
  Tsym191843* data[SEQ_DECL_SIZE];
};
struct Tnodeseq191807 {
  TGenericSeq Sup;
  Tnode191813* data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tctx244048*, newctx_244281)(Tsym191843* module);
N_NIMCALL(void, TMP4170)(void* p, NI op);
N_NIMCALL(void, TMP4173)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4174)(void* p, NI op);
N_NIMCALL(void, TMP4179)(void* p, NI op);
N_NIMCALL(void, TMP4188)(void* p, NI op);
N_NIMCALL(void, TMP4189)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_51804)(Tcell46747* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46763* s, Tcell46747* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(Tnode191813*, newnode_192401)(NU8 kind);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(Tlineinfo163338, unknownlineinfo_164027)(void);
static N_INLINE(void, nimGCunref)(void* p);
static N_INLINE(void, decref_52204)(Tcell46747* c);
static N_INLINE(NIM_BOOL, canbecycleroot_50267)(Tcell46747* c);
static N_INLINE(void, rtladdcycleroot_51023)(Tcell46747* c);
N_NOINLINE(void, incl_47465)(Tcellset46759* s, Tcell46747* cell);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(void, refresh_244377)(Tctx244048* c, Tsym191843* module);
N_NIMCALL(void, registercallback_244404)(Tctx244048* c, NimStringDesc* name, Vmcallback244044 callback);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52622)(Tcell46747* c);
STRING_LITERAL(TMP4190, "", 0);
NIM_CONST TY244428 largeinstrs_244427 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x35, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x01, 0x18}
;
NIM_CONST TY244428 relativejumps_244430 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xC0, 0x03, 0x00, 0x00}
;
extern TNimType NTI242005; /* TPassContext */
TNimType NTI244048; /* TCtx */
extern TNimType NTI124; /* uint32 */
TNimType NTI244253; /* seq[TInstr] */
extern TNimType NTI164036; /* seq[TLineInfo] */
extern TNimType NTI191805; /* PNode */
extern TNimType NTI191845; /* TTypeSeq */
extern TNimType NTI108; /* int */
TNimType NTI244232; /* PProc:ObjectType */
TNimType NTI244030; /* TBlock */
extern TNimType NTI191811; /* PSym */
TNimType NTI244213; /* seq[TPosition] */
TNimType NTI244233; /* seq[TBlock] */
TNimType NTI244239; /* tuple[inUse: bool, kind: TSlotKind] */
extern TNimType NTI138; /* bool */
TNimType NTI244038; /* TSlotKind */
TNimType NTI244236; /* array[0..255, tuple[inUse: bool, kind: TSlotKind]] */
TNimType NTI244040; /* PProc */
TNimType NTI244032; /* TEvalMode */
TNimType NTI244034; /* TSandboxFlag */
TNimType NTI244036; /* TSandboxFlags */
extern TNimType NTI163338; /* TLineInfo */
TNimType NTI244273; /* tuple[key: string, value: VmCallback] */
extern TNimType NTI149; /* string */
TNimType NTI244044; /* (pointer, ref tuple[]) */
extern TNimType NTI153; /* pointer */
extern TNimType NTI186580; /* ref tuple[] */
TNimType NTI244272; /* seq[tuple[key: string, value: VmCallback]] */
TNimType NTI244046; /* PCtx */
extern TFrame* frameptr_17042;
extern Tgcheap48616 gch_48644;
TNimType NTI244028; /* TOpcode */
N_NIMCALL(void, TMP4170)(void* p, NI op) {
	TY244253* a;
	NI LOC1;
	a = (TY244253*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP4173)(void* p, NI op) {
	TY244213* a;
	NI LOC1;
	a = (TY244213*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP4174)(void* p, NI op) {
	TY244233* a;
	NI LOC1;
	a = (TY244233*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].label, op);
	nimGCvisit((void*)a->data[LOC1].fixups, op);
	}
}
N_NIMCALL(void, TMP4179)(void* p, NI op) {
	PprocHEX3Aobjecttype244232* a;
	NI LOC1;
	a = (PprocHEX3Aobjecttype244232*)p;
	nimGCvisit((void*)(*a).blocks, op);
	nimGCvisit((void*)(*a).sym, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 256; LOC1++) {
	}
}
N_NIMCALL(void, TMP4188)(void* p, NI op) {
	TY244272* a;
	NI LOC1;
	a = (TY244272*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1.ClEnv, op);
	}
}
N_NIMCALL(void, TMP4189)(void* p, NI op) {
	Tctx244048* a;
	a = (Tctx244048*)p;
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

N_NIMCALL(Tctx244048*, newctx_244281)(Tsym191843* module) {
	Tctx244048* result;
	Tctx244048* LOC1;
	PprocHEX3Aobjecttype244232* LOC2;
	NimStringDesc* LOC3;
	nimfr("newCtx", "vmdef.nim")
	result = 0;
	nimln(210, "vmdef.nim");
	LOC1 = 0;
	LOC1 = (Tctx244048*) newObj((&NTI244046), sizeof(Tctx244048));
	(*LOC1).Sup.Sup.m_type = (&NTI244048);
	if ((*LOC1).code) nimGCunrefNoCycle((*LOC1).code);
	(*LOC1).code = (TY244253*) newSeqRC1((&NTI244253), 0);
	if ((*LOC1).debug) nimGCunrefNoCycle((*LOC1).debug);
	(*LOC1).debug = (TY164036*) newSeqRC1((&NTI164036), 0);
	nimln(211, "vmdef.nim");
	asgnRefNoCycle((void**) (&(*LOC1).globals), newnode_192401(((NU8) 126)));
	asgnRefNoCycle((void**) (&(*LOC1).constants), newnode_192401(((NU8) 115)));
	if ((*LOC1).types) nimGCunrefNoCycle((*LOC1).types);
	(*LOC1).types = (Ttypeseq191845*) newSeqRC1((&NTI191845), 0);
	LOC2 = 0;
	LOC2 = (PprocHEX3Aobjecttype244232*) newObj((&NTI244040), sizeof(PprocHEX3Aobjecttype244232));
	if ((*LOC2).blocks) nimGCunrefNoCycle((*LOC2).blocks);
	(*LOC2).blocks = (TY244233*) newSeqRC1((&NTI244233), 0);
	asgnRefNoCycle((void**) (&(*LOC1).prc), LOC2);
	asgnRefNoCycle((void**) (&(*LOC1).module), module);
	(*LOC1).loopiterations = ((NI) 1500000);
	nimln(213, "vmdef.nim");
	(*LOC1).comesfromheuristic = unknownlineinfo_164027();
	if ((*LOC1).callbacks) nimGCunref((*LOC1).callbacks);
	(*LOC1).callbacks = (TY244272*) newSeqRC1((&NTI244272), 0);
	LOC3 = 0;
	LOC3 = (*LOC1).errorflag; (*LOC1).errorflag = copyStringRC1(((NimStringDesc*) &TMP4190));
	if (LOC3) nimGCunrefNoCycle(LOC3);
	result = LOC1;
	popFrame();
	return result;
}

N_NIMCALL(void, refresh_244377)(Tctx244048* c, Tsym191843* module) {
	PprocHEX3Aobjecttype244232* LOC1;
	nimfr("refresh", "vmdef.nim")
	nimln(216, "vmdef.nim");
	asgnRefNoCycle((void**) (&(*c).module), module);
	nimln(217, "vmdef.nim");
	LOC1 = 0;
	LOC1 = (PprocHEX3Aobjecttype244232*) newObj((&NTI244040), sizeof(PprocHEX3Aobjecttype244232));
	if ((*LOC1).blocks) nimGCunrefNoCycle((*LOC1).blocks);
	(*LOC1).blocks = (TY244233*) newSeqRC1((&NTI244233), 0);
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

N_NIMCALL(void, registercallback_244404)(Tctx244048* c, NimStringDesc* name, Vmcallback244044 callback) {
	TY244273 LOC1;
	NimStringDesc* LOC2;
	nimfr("registerCallback", "vmdef.nim")
	nimln(221, "vmdef.nim");
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Field0 = copyString(name);
	LOC1.Field1.ClEnv = callback.ClEnv;
	LOC1.Field1.ClPrc = callback.ClPrc;
	(*c).callbacks = (TY244272*) incrSeq(&((*c).callbacks)->Sup, sizeof(TY244273));
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
static TNimNode* TMP4169[18];
static TNimNode* TMP4171[4];
static TNimNode* TMP4172[2];
static TNimNode* TMP4175[2];
static TNimNode* TMP4176[9];
NI TMP4178;
static char* NIM_CONST TMP4177[9] = {
"slotEmpty", 
"slotFixedVar", 
"slotFixedLet", 
"slotTempUnknown", 
"slotTempInt", 
"slotTempFloat", 
"slotTempStr", 
"slotTempComplex", 
"slotTempPerm"};
static TNimNode* TMP4180[5];
NI TMP4182;
static char* NIM_CONST TMP4181[5] = {
"emRepl", 
"emConst", 
"emOptimize", 
"emStaticExpr", 
"emStaticStmt"};
static TNimNode* TMP4183[3];
NI TMP4185;
static char* NIM_CONST TMP4184[3] = {
"allowCast", 
"allowFFI", 
"allowInfiniteLoops"};
static TNimNode* TMP4186[2];
static TNimNode* TMP4187[2];
static TNimNode* TMP7270[157];
NI TMP7272;
static char* NIM_CONST TMP7271[157] = {
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
static TNimNode TMP4167[215];
NTI244048.size = sizeof(Tctx244048);
NTI244048.kind = 17;
NTI244048.base = (&NTI242005);
TMP4169[0] = &TMP4167[1];
NTI244253.size = sizeof(TY244253*);
NTI244253.kind = 24;
NTI244253.base = (&NTI124);
NTI244253.flags = 2;
NTI244253.marker = TMP4170;
TMP4167[1].kind = 1;
TMP4167[1].offset = offsetof(Tctx244048, code);
TMP4167[1].typ = (&NTI244253);
TMP4167[1].name = "code";
TMP4169[1] = &TMP4167[2];
TMP4167[2].kind = 1;
TMP4167[2].offset = offsetof(Tctx244048, debug);
TMP4167[2].typ = (&NTI164036);
TMP4167[2].name = "debug";
TMP4169[2] = &TMP4167[3];
TMP4167[3].kind = 1;
TMP4167[3].offset = offsetof(Tctx244048, globals);
TMP4167[3].typ = (&NTI191805);
TMP4167[3].name = "globals";
TMP4169[3] = &TMP4167[4];
TMP4167[4].kind = 1;
TMP4167[4].offset = offsetof(Tctx244048, constants);
TMP4167[4].typ = (&NTI191805);
TMP4167[4].name = "constants";
TMP4169[4] = &TMP4167[5];
TMP4167[5].kind = 1;
TMP4167[5].offset = offsetof(Tctx244048, types);
TMP4167[5].typ = (&NTI191845);
TMP4167[5].name = "types";
TMP4169[5] = &TMP4167[6];
TMP4167[6].kind = 1;
TMP4167[6].offset = offsetof(Tctx244048, currentexceptiona);
TMP4167[6].typ = (&NTI191805);
TMP4167[6].name = "currentExceptionA";
TMP4169[6] = &TMP4167[7];
TMP4167[7].kind = 1;
TMP4167[7].offset = offsetof(Tctx244048, currentexceptionb);
TMP4167[7].typ = (&NTI191805);
TMP4167[7].name = "currentExceptionB";
TMP4169[7] = &TMP4167[8];
TMP4167[8].kind = 1;
TMP4167[8].offset = offsetof(Tctx244048, exceptioninstr);
TMP4167[8].typ = (&NTI108);
TMP4167[8].name = "exceptionInstr";
TMP4169[8] = &TMP4167[9];
NTI244232.size = sizeof(PprocHEX3Aobjecttype244232);
NTI244232.kind = 18;
NTI244232.base = 0;
NTI244232.flags = 2;
TMP4171[0] = &TMP4167[11];
NTI244030.size = sizeof(Tblock244030);
NTI244030.kind = 18;
NTI244030.base = 0;
NTI244030.flags = 2;
TMP4172[0] = &TMP4167[13];
TMP4167[13].kind = 1;
TMP4167[13].offset = offsetof(Tblock244030, label);
TMP4167[13].typ = (&NTI191811);
TMP4167[13].name = "label";
TMP4172[1] = &TMP4167[14];
NTI244213.size = sizeof(TY244213*);
NTI244213.kind = 24;
NTI244213.base = (&NTI108);
NTI244213.flags = 2;
NTI244213.marker = TMP4173;
TMP4167[14].kind = 1;
TMP4167[14].offset = offsetof(Tblock244030, fixups);
TMP4167[14].typ = (&NTI244213);
TMP4167[14].name = "fixups";
TMP4167[12].len = 2; TMP4167[12].kind = 2; TMP4167[12].sons = &TMP4172[0];
NTI244030.node = &TMP4167[12];
NTI244233.size = sizeof(TY244233*);
NTI244233.kind = 24;
NTI244233.base = (&NTI244030);
NTI244233.flags = 2;
NTI244233.marker = TMP4174;
TMP4167[11].kind = 1;
TMP4167[11].offset = offsetof(PprocHEX3Aobjecttype244232, blocks);
TMP4167[11].typ = (&NTI244233);
TMP4167[11].name = "blocks";
TMP4171[1] = &TMP4167[15];
TMP4167[15].kind = 1;
TMP4167[15].offset = offsetof(PprocHEX3Aobjecttype244232, sym);
TMP4167[15].typ = (&NTI191811);
TMP4167[15].name = "sym";
TMP4171[2] = &TMP4167[16];
NTI244239.size = sizeof(TY244239);
NTI244239.kind = 18;
NTI244239.base = 0;
NTI244239.flags = 3;
TMP4175[0] = &TMP4167[18];
TMP4167[18].kind = 1;
TMP4167[18].offset = offsetof(TY244239, Field0);
TMP4167[18].typ = (&NTI138);
TMP4167[18].name = "Field0";
TMP4175[1] = &TMP4167[19];
NTI244038.size = sizeof(NU8);
NTI244038.kind = 14;
NTI244038.base = 0;
NTI244038.flags = 3;
for (TMP4178 = 0; TMP4178 < 9; TMP4178++) {
TMP4167[TMP4178+20].kind = 1;
TMP4167[TMP4178+20].offset = TMP4178;
TMP4167[TMP4178+20].name = TMP4177[TMP4178];
TMP4176[TMP4178] = &TMP4167[TMP4178+20];
}
TMP4167[29].len = 9; TMP4167[29].kind = 2; TMP4167[29].sons = &TMP4176[0];
NTI244038.node = &TMP4167[29];
TMP4167[19].kind = 1;
TMP4167[19].offset = offsetof(TY244239, Field1);
TMP4167[19].typ = (&NTI244038);
TMP4167[19].name = "Field1";
TMP4167[17].len = 2; TMP4167[17].kind = 2; TMP4167[17].sons = &TMP4175[0];
NTI244239.node = &TMP4167[17];
NTI244236.size = sizeof(TY244236);
NTI244236.kind = 16;
NTI244236.base = (&NTI244239);
NTI244236.flags = 3;
TMP4167[16].kind = 1;
TMP4167[16].offset = offsetof(PprocHEX3Aobjecttype244232, slots);
TMP4167[16].typ = (&NTI244236);
TMP4167[16].name = "slots";
TMP4171[3] = &TMP4167[30];
TMP4167[30].kind = 1;
TMP4167[30].offset = offsetof(PprocHEX3Aobjecttype244232, maxslots);
TMP4167[30].typ = (&NTI108);
TMP4167[30].name = "maxSlots";
TMP4167[10].len = 4; TMP4167[10].kind = 2; TMP4167[10].sons = &TMP4171[0];
NTI244232.node = &TMP4167[10];
NTI244040.size = sizeof(PprocHEX3Aobjecttype244232*);
NTI244040.kind = 22;
NTI244040.base = (&NTI244232);
NTI244040.flags = 2;
NTI244040.marker = TMP4179;
TMP4167[9].kind = 1;
TMP4167[9].offset = offsetof(Tctx244048, prc);
TMP4167[9].typ = (&NTI244040);
TMP4167[9].name = "prc";
TMP4169[9] = &TMP4167[31];
TMP4167[31].kind = 1;
TMP4167[31].offset = offsetof(Tctx244048, module);
TMP4167[31].typ = (&NTI191811);
TMP4167[31].name = "module";
TMP4169[10] = &TMP4167[32];
TMP4167[32].kind = 1;
TMP4167[32].offset = offsetof(Tctx244048, callsite);
TMP4167[32].typ = (&NTI191805);
TMP4167[32].name = "callsite";
TMP4169[11] = &TMP4167[33];
NTI244032.size = sizeof(NU8);
NTI244032.kind = 14;
NTI244032.base = 0;
NTI244032.flags = 3;
for (TMP4182 = 0; TMP4182 < 5; TMP4182++) {
TMP4167[TMP4182+34].kind = 1;
TMP4167[TMP4182+34].offset = TMP4182;
TMP4167[TMP4182+34].name = TMP4181[TMP4182];
TMP4180[TMP4182] = &TMP4167[TMP4182+34];
}
TMP4167[39].len = 5; TMP4167[39].kind = 2; TMP4167[39].sons = &TMP4180[0];
NTI244032.node = &TMP4167[39];
TMP4167[33].kind = 1;
TMP4167[33].offset = offsetof(Tctx244048, mode);
TMP4167[33].typ = (&NTI244032);
TMP4167[33].name = "mode";
TMP4169[12] = &TMP4167[40];
NTI244034.size = sizeof(NU8);
NTI244034.kind = 14;
NTI244034.base = 0;
NTI244034.flags = 3;
for (TMP4185 = 0; TMP4185 < 3; TMP4185++) {
TMP4167[TMP4185+41].kind = 1;
TMP4167[TMP4185+41].offset = TMP4185;
TMP4167[TMP4185+41].name = TMP4184[TMP4185];
TMP4183[TMP4185] = &TMP4167[TMP4185+41];
}
TMP4167[44].len = 3; TMP4167[44].kind = 2; TMP4167[44].sons = &TMP4183[0];
NTI244034.node = &TMP4167[44];
NTI244036.size = sizeof(NU8);
NTI244036.kind = 19;
NTI244036.base = (&NTI244034);
NTI244036.flags = 3;
TMP4167[45].len = 0; TMP4167[45].kind = 0;
NTI244036.node = &TMP4167[45];
TMP4167[40].kind = 1;
TMP4167[40].offset = offsetof(Tctx244048, features);
TMP4167[40].typ = (&NTI244036);
TMP4167[40].name = "features";
TMP4169[13] = &TMP4167[46];
TMP4167[46].kind = 1;
TMP4167[46].offset = offsetof(Tctx244048, traceactive);
TMP4167[46].typ = (&NTI138);
TMP4167[46].name = "traceActive";
TMP4169[14] = &TMP4167[47];
TMP4167[47].kind = 1;
TMP4167[47].offset = offsetof(Tctx244048, loopiterations);
TMP4167[47].typ = (&NTI108);
TMP4167[47].name = "loopIterations";
TMP4169[15] = &TMP4167[48];
TMP4167[48].kind = 1;
TMP4167[48].offset = offsetof(Tctx244048, comesfromheuristic);
TMP4167[48].typ = (&NTI163338);
TMP4167[48].name = "comesFromHeuristic";
TMP4169[16] = &TMP4167[49];
NTI244273.size = sizeof(TY244273);
NTI244273.kind = 18;
NTI244273.base = 0;
TMP4186[0] = &TMP4167[51];
TMP4167[51].kind = 1;
TMP4167[51].offset = offsetof(TY244273, Field0);
TMP4167[51].typ = (&NTI149);
TMP4167[51].name = "Field0";
TMP4186[1] = &TMP4167[52];
NTI244044.size = sizeof(TY186578);
NTI244044.kind = 18;
NTI244044.base = 0;
NTI244044.flags = 2;
TMP4187[0] = &TMP4167[54];
TMP4167[54].kind = 1;
TMP4167[54].offset = offsetof(TY186578, Field0);
TMP4167[54].typ = (&NTI153);
TMP4167[54].name = "Field0";
TMP4187[1] = &TMP4167[55];
TMP4167[55].kind = 1;
TMP4167[55].offset = offsetof(TY186578, Field1);
TMP4167[55].typ = (&NTI186580);
TMP4167[55].name = "Field1";
TMP4167[53].len = 2; TMP4167[53].kind = 2; TMP4167[53].sons = &TMP4187[0];
NTI244044.node = &TMP4167[53];
TMP4167[52].kind = 1;
TMP4167[52].offset = offsetof(TY244273, Field1);
TMP4167[52].typ = (&NTI244044);
TMP4167[52].name = "Field1";
TMP4167[50].len = 2; TMP4167[50].kind = 2; TMP4167[50].sons = &TMP4186[0];
NTI244273.node = &TMP4167[50];
NTI244272.size = sizeof(TY244272*);
NTI244272.kind = 24;
NTI244272.base = (&NTI244273);
NTI244272.marker = TMP4188;
TMP4167[49].kind = 1;
TMP4167[49].offset = offsetof(Tctx244048, callbacks);
TMP4167[49].typ = (&NTI244272);
TMP4167[49].name = "callbacks";
TMP4169[17] = &TMP4167[56];
TMP4167[56].kind = 1;
TMP4167[56].offset = offsetof(Tctx244048, errorflag);
TMP4167[56].typ = (&NTI149);
TMP4167[56].name = "errorFlag";
TMP4167[0].len = 18; TMP4167[0].kind = 2; TMP4167[0].sons = &TMP4169[0];
NTI244048.node = &TMP4167[0];
NTI244046.size = sizeof(Tctx244048*);
NTI244046.kind = 22;
NTI244046.base = (&NTI244048);
NTI244046.marker = TMP4189;
NTI244028.size = sizeof(NU8);
NTI244028.kind = 14;
NTI244028.base = 0;
NTI244028.flags = 3;
for (TMP7272 = 0; TMP7272 < 157; TMP7272++) {
TMP4167[TMP7272+57].kind = 1;
TMP4167[TMP7272+57].offset = TMP7272;
TMP4167[TMP7272+57].name = TMP7271[TMP7272];
TMP7270[TMP7272] = &TMP4167[TMP7272+57];
}
TMP4167[214].len = 157; TMP4167[214].kind = 2; TMP4167[214].sons = &TMP7270[0];
NTI244028.node = &TMP4167[214];
}

