/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Tctx242048 Tctx242048;
typedef struct Tsym189843 Tsym189843;
typedef struct Tpasscontext240005 Tpasscontext240005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY242253 TY242253;
typedef struct TY162033 TY162033;
typedef struct Tnode189813 Tnode189813;
typedef struct Ttypeseq189845 Ttypeseq189845;
typedef struct PprocHEX3Aobjecttype242232 PprocHEX3Aobjecttype242232;
typedef struct Tlineinfo161338 Tlineinfo161338;
typedef struct TY242272 TY242272;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY242233 TY242233;
typedef struct TY242239 TY242239;
typedef struct Tblock242030 Tblock242030;
typedef struct TY242213 TY242213;
typedef struct TY242273 TY242273;
typedef struct Vmargs242042 Vmargs242042;
typedef struct TY184578 TY184578;
typedef struct TY184581 TY184581;
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
typedef struct Ttype189849 Ttype189849;
typedef struct Tidobj165015 Tidobj165015;
typedef struct Tscope189837 Tscope189837;
typedef struct TY189944 TY189944;
typedef struct Tstrtable189817 Tstrtable189817;
typedef struct Tsymseq189815 Tsymseq189815;
typedef struct Tident165021 Tident165021;
typedef struct Tloc189827 Tloc189827;
typedef struct Ropeobj159009 Ropeobj159009;
typedef struct Tlib189831 Tlib189831;
typedef struct Tnodeseq189807 Tnodeseq189807;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct Tinstantiation189833 Tinstantiation189833;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct TY189933 TY189933;
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
struct  Tpasscontext240005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tlineinfo161338  {
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
struct  Tctx242048  {
  Tpasscontext240005 Sup;
TY242253* code;
TY162033* debug;
Tnode189813* globals;
Tnode189813* constants;
Ttypeseq189845* types;
Tnode189813* currentexceptiona;
Tnode189813* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype242232* prc;
Tsym189843* module;
Tnode189813* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo161338 comesfromheuristic;
TY242272* callbacks;
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
struct TY242239 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY242239 TY242236[256];
struct  PprocHEX3Aobjecttype242232  {
TY242233* blocks;
Tsym189843* sym;
TY242236 slots;
NI maxslots;
};
struct  Tblock242030  {
Tsym189843* label;
TY242213* fixups;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs242042* args, void* ClEnv);
void* ClEnv;
} Vmcallback242044;
struct TY242273 {
NimStringDesc* Field0;
Vmcallback242044 Field1;
};
struct TY184578 {
void* Field0;
TY184581* Field1;
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
typedef NU8 TY242428[20];
struct  Tidobj165015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable189817  {
NI counter;
Tsymseq189815* data;
};
struct  Tloc189827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype189849* t;
Ropeobj159009* r;
Ropeobj159009* heaproot;
};
struct  Tsym189843  {
  Tidobj165015 Sup;
NU8 kind;
union{
struct {Ttypeseq189845* typeinstcache;
Tscope189837* typscope;
} S1;
struct {TY189944* procinstcache;
Tsym189843* gcunsafetyreason;
} S2;
struct {TY189944* usedgenerics;
Tstrtable189817 tab;
} S3;
struct {Tsym189843* guard;
} S4;
} kindU;
NU16 magic;
Ttype189849* typ;
Tident165021* name;
Tlineinfo161338 info;
Tsym189843* owner;
NU32 flags;
Tnode189813* ast;
NU32 options;
NI position;
NI offset;
Tloc189827 loc;
Tlib189831* annex;
Tnode189813* constraint;
};
struct  Tnode189813  {
Ttype189849* typ;
Tlineinfo161338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym189843* sym;
} S4;
struct {Tident165021* ident;
} S5;
struct {Tnodeseq189807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Vmargs242042  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode189813* currentexception;
};
struct TY184581 {
char dummy;
};
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
struct  Ttype189849  {
  Tidobj165015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq189845* sons;
Tnode189813* n;
Tsym189843* owner;
Tsym189843* sym;
Tsym189843* destructor;
Tsym189843* deepcopy;
Tsym189843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc189827 loc;
};
struct  Tscope189837  {
NI depthlevel;
Tstrtable189817 symbols;
Tnodeseq189807* usingsyms;
Tscope189837* parent;
};
struct  Tident165021  {
  Tidobj165015 Sup;
NimStringDesc* s;
Tident165021* next;
NI h;
};
struct  Ropeobj159009  {
  TNimObject Sup;
Ropeobj159009* left;
Ropeobj159009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry129022  {
  TNimObject Sup;
Tlistentry129022* prev;
Tlistentry129022* next;
};
struct  Tlib189831  {
  Tlistentry129022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj159009* name;
Tnode189813* path;
};
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
struct  Tinstantiation189833  {
Tsym189843* sym;
Ttypeseq189845* concretetypes;
TY189933* usedby;
};
struct TY242253 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY242213 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY242233 {
  TGenericSeq Sup;
  Tblock242030 data[SEQ_DECL_SIZE];
};
struct TY242272 {
  TGenericSeq Sup;
  TY242273 data[SEQ_DECL_SIZE];
};
struct TY162033 {
  TGenericSeq Sup;
  Tlineinfo161338 data[SEQ_DECL_SIZE];
};
struct Ttypeseq189845 {
  TGenericSeq Sup;
  Ttype189849* data[SEQ_DECL_SIZE];
};
struct TY189944 {
  TGenericSeq Sup;
  Tinstantiation189833* data[SEQ_DECL_SIZE];
};
struct Tsymseq189815 {
  TGenericSeq Sup;
  Tsym189843* data[SEQ_DECL_SIZE];
};
struct Tnodeseq189807 {
  TGenericSeq Sup;
  Tnode189813* data[SEQ_DECL_SIZE];
};
struct TY189933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tctx242048*, newctx_242281)(Tsym189843* module);
N_NIMCALL(void, TMP4172)(void* p, NI op);
N_NIMCALL(void, TMP4175)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4176)(void* p, NI op);
N_NIMCALL(void, TMP4181)(void* p, NI op);
N_NIMCALL(void, TMP4190)(void* p, NI op);
N_NIMCALL(void, TMP4191)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_51804)(Tcell46747* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46763* s, Tcell46747* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(Tnode189813*, newnode_190401)(NU8 kind);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(Tlineinfo161338, unknownlineinfo_162024)(void);
static N_INLINE(void, nimGCunref)(void* p);
static N_INLINE(void, decref_52204)(Tcell46747* c);
static N_INLINE(NIM_BOOL, canbecycleroot_50267)(Tcell46747* c);
static N_INLINE(void, rtladdcycleroot_51023)(Tcell46747* c);
N_NOINLINE(void, incl_47465)(Tcellset46759* s, Tcell46747* cell);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(void, refresh_242377)(Tctx242048* c, Tsym189843* module);
N_NIMCALL(void, registercallback_242404)(Tctx242048* c, NimStringDesc* name, Vmcallback242044 callback);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52622)(Tcell46747* c);
STRING_LITERAL(TMP4192, "", 0);
NIM_CONST TY242428 largeinstrs_242427 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x35, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x01, 0x18}
;
NIM_CONST TY242428 relativejumps_242430 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xC0, 0x03, 0x00, 0x00}
;
extern TNimType NTI240005; /* TPassContext */
TNimType NTI242048; /* TCtx */
extern TNimType NTI124; /* uint32 */
TNimType NTI242253; /* seq[TInstr] */
extern TNimType NTI162033; /* seq[TLineInfo] */
extern TNimType NTI189805; /* PNode */
extern TNimType NTI189845; /* TTypeSeq */
extern TNimType NTI108; /* int */
TNimType NTI242232; /* PProc:ObjectType */
TNimType NTI242030; /* TBlock */
extern TNimType NTI189811; /* PSym */
TNimType NTI242213; /* seq[TPosition] */
TNimType NTI242233; /* seq[TBlock] */
TNimType NTI242239; /* tuple[inUse: bool, kind: TSlotKind] */
extern TNimType NTI138; /* bool */
TNimType NTI242038; /* TSlotKind */
TNimType NTI242236; /* array[0..255, tuple[inUse: bool, kind: TSlotKind]] */
TNimType NTI242040; /* PProc */
TNimType NTI242032; /* TEvalMode */
TNimType NTI242034; /* TSandboxFlag */
TNimType NTI242036; /* TSandboxFlags */
extern TNimType NTI161338; /* TLineInfo */
TNimType NTI242273; /* tuple[key: string, value: VmCallback] */
extern TNimType NTI149; /* string */
TNimType NTI242044; /* (pointer, ref tuple[]) */
extern TNimType NTI153; /* pointer */
extern TNimType NTI184580; /* ref tuple[] */
TNimType NTI242272; /* seq[tuple[key: string, value: VmCallback]] */
TNimType NTI242046; /* PCtx */
extern TFrame* frameptr_17042;
extern Tgcheap48616 gch_48644;
TNimType NTI242028; /* TOpcode */
N_NIMCALL(void, TMP4172)(void* p, NI op) {
	TY242253* a;
	NI LOC1;
	a = (TY242253*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP4175)(void* p, NI op) {
	TY242213* a;
	NI LOC1;
	a = (TY242213*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP4176)(void* p, NI op) {
	TY242233* a;
	NI LOC1;
	a = (TY242233*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].label, op);
	nimGCvisit((void*)a->data[LOC1].fixups, op);
	}
}
N_NIMCALL(void, TMP4181)(void* p, NI op) {
	PprocHEX3Aobjecttype242232* a;
	NI LOC1;
	a = (PprocHEX3Aobjecttype242232*)p;
	nimGCvisit((void*)(*a).blocks, op);
	nimGCvisit((void*)(*a).sym, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 256; LOC1++) {
	}
}
N_NIMCALL(void, TMP4190)(void* p, NI op) {
	TY242272* a;
	NI LOC1;
	a = (TY242272*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1.ClEnv, op);
	}
}
N_NIMCALL(void, TMP4191)(void* p, NI op) {
	Tctx242048* a;
	a = (Tctx242048*)p;
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

static N_INLINE(void, nimGCunref)(void* p) {
	Tcell46747* LOC1;
	nimfr("nimGCunref", "gc.nim")
	nimln(223, "gc.nim");
	LOC1 = 0;
	LOC1 = usrtocell_50246(p);
	decref_52204(LOC1);
	popFrame();
}

N_NIMCALL(Tctx242048*, newctx_242281)(Tsym189843* module) {
	Tctx242048* result;
	Tctx242048* LOC1;
	PprocHEX3Aobjecttype242232* LOC2;
	NimStringDesc* LOC3;
	nimfr("newCtx", "vmdef.nim")
	result = 0;
	nimln(210, "vmdef.nim");
	LOC1 = 0;
	LOC1 = (Tctx242048*) newObj((&NTI242046), sizeof(Tctx242048));
	(*LOC1).Sup.Sup.m_type = (&NTI242048);
	if ((*LOC1).code) nimGCunrefNoCycle((*LOC1).code);
	(*LOC1).code = (TY242253*) newSeqRC1((&NTI242253), 0);
	if ((*LOC1).debug) nimGCunrefNoCycle((*LOC1).debug);
	(*LOC1).debug = (TY162033*) newSeqRC1((&NTI162033), 0);
	nimln(211, "vmdef.nim");
	asgnRefNoCycle((void**) (&(*LOC1).globals), newnode_190401(((NU8) 126)));
	asgnRefNoCycle((void**) (&(*LOC1).constants), newnode_190401(((NU8) 115)));
	if ((*LOC1).types) nimGCunrefNoCycle((*LOC1).types);
	(*LOC1).types = (Ttypeseq189845*) newSeqRC1((&NTI189845), 0);
	LOC2 = 0;
	LOC2 = (PprocHEX3Aobjecttype242232*) newObj((&NTI242040), sizeof(PprocHEX3Aobjecttype242232));
	if ((*LOC2).blocks) nimGCunrefNoCycle((*LOC2).blocks);
	(*LOC2).blocks = (TY242233*) newSeqRC1((&NTI242233), 0);
	asgnRefNoCycle((void**) (&(*LOC1).prc), LOC2);
	asgnRefNoCycle((void**) (&(*LOC1).module), module);
	(*LOC1).loopiterations = ((NI) 1500000);
	nimln(213, "vmdef.nim");
	(*LOC1).comesfromheuristic = unknownlineinfo_162024();
	if ((*LOC1).callbacks) nimGCunref((*LOC1).callbacks);
	(*LOC1).callbacks = (TY242272*) newSeqRC1((&NTI242272), 0);
	LOC3 = 0;
	LOC3 = (*LOC1).errorflag; (*LOC1).errorflag = copyStringRC1(((NimStringDesc*) &TMP4192));
	if (LOC3) nimGCunrefNoCycle(LOC3);
	result = LOC1;
	popFrame();
	return result;
}

N_NIMCALL(void, refresh_242377)(Tctx242048* c, Tsym189843* module) {
	PprocHEX3Aobjecttype242232* LOC1;
	nimfr("refresh", "vmdef.nim")
	nimln(216, "vmdef.nim");
	asgnRefNoCycle((void**) (&(*c).module), module);
	nimln(217, "vmdef.nim");
	LOC1 = 0;
	LOC1 = (PprocHEX3Aobjecttype242232*) newObj((&NTI242040), sizeof(PprocHEX3Aobjecttype242232));
	if ((*LOC1).blocks) nimGCunrefNoCycle((*LOC1).blocks);
	(*LOC1).blocks = (TY242233*) newSeqRC1((&NTI242233), 0);
	asgnRefNoCycle((void**) (&(*c).prc), LOC1);
	nimln(218, "vmdef.nim");
	(*c).loopiterations = ((NI) 1500000);
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

N_NIMCALL(void, registercallback_242404)(Tctx242048* c, NimStringDesc* name, Vmcallback242044 callback) {
	TY242273 LOC1;
	NimStringDesc* LOC2;
	nimfr("registerCallback", "vmdef.nim")
	nimln(221, "vmdef.nim");
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Field0 = copyString(name);
	LOC1.Field1.ClEnv = callback.ClEnv;
	LOC1.Field1.ClPrc = callback.ClPrc;
	(*c).callbacks = (TY242272*) incrSeq(&((*c).callbacks)->Sup, sizeof(TY242273));
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
static TNimNode* TMP4171[18];
static TNimNode* TMP4173[4];
static TNimNode* TMP4174[2];
static TNimNode* TMP4177[2];
static TNimNode* TMP4178[9];
NI TMP4180;
static char* NIM_CONST TMP4179[9] = {
"slotEmpty", 
"slotFixedVar", 
"slotFixedLet", 
"slotTempUnknown", 
"slotTempInt", 
"slotTempFloat", 
"slotTempStr", 
"slotTempComplex", 
"slotTempPerm"};
static TNimNode* TMP4182[5];
NI TMP4184;
static char* NIM_CONST TMP4183[5] = {
"emRepl", 
"emConst", 
"emOptimize", 
"emStaticExpr", 
"emStaticStmt"};
static TNimNode* TMP4185[3];
NI TMP4187;
static char* NIM_CONST TMP4186[3] = {
"allowCast", 
"allowFFI", 
"allowInfiniteLoops"};
static TNimNode* TMP4188[2];
static TNimNode* TMP4189[2];
static TNimNode* TMP7280[157];
NI TMP7282;
static char* NIM_CONST TMP7281[157] = {
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
static TNimNode TMP4169[215];
NTI242048.size = sizeof(Tctx242048);
NTI242048.kind = 17;
NTI242048.base = (&NTI240005);
TMP4171[0] = &TMP4169[1];
NTI242253.size = sizeof(TY242253*);
NTI242253.kind = 24;
NTI242253.base = (&NTI124);
NTI242253.flags = 2;
NTI242253.marker = TMP4172;
TMP4169[1].kind = 1;
TMP4169[1].offset = offsetof(Tctx242048, code);
TMP4169[1].typ = (&NTI242253);
TMP4169[1].name = "code";
TMP4171[1] = &TMP4169[2];
TMP4169[2].kind = 1;
TMP4169[2].offset = offsetof(Tctx242048, debug);
TMP4169[2].typ = (&NTI162033);
TMP4169[2].name = "debug";
TMP4171[2] = &TMP4169[3];
TMP4169[3].kind = 1;
TMP4169[3].offset = offsetof(Tctx242048, globals);
TMP4169[3].typ = (&NTI189805);
TMP4169[3].name = "globals";
TMP4171[3] = &TMP4169[4];
TMP4169[4].kind = 1;
TMP4169[4].offset = offsetof(Tctx242048, constants);
TMP4169[4].typ = (&NTI189805);
TMP4169[4].name = "constants";
TMP4171[4] = &TMP4169[5];
TMP4169[5].kind = 1;
TMP4169[5].offset = offsetof(Tctx242048, types);
TMP4169[5].typ = (&NTI189845);
TMP4169[5].name = "types";
TMP4171[5] = &TMP4169[6];
TMP4169[6].kind = 1;
TMP4169[6].offset = offsetof(Tctx242048, currentexceptiona);
TMP4169[6].typ = (&NTI189805);
TMP4169[6].name = "currentExceptionA";
TMP4171[6] = &TMP4169[7];
TMP4169[7].kind = 1;
TMP4169[7].offset = offsetof(Tctx242048, currentexceptionb);
TMP4169[7].typ = (&NTI189805);
TMP4169[7].name = "currentExceptionB";
TMP4171[7] = &TMP4169[8];
TMP4169[8].kind = 1;
TMP4169[8].offset = offsetof(Tctx242048, exceptioninstr);
TMP4169[8].typ = (&NTI108);
TMP4169[8].name = "exceptionInstr";
TMP4171[8] = &TMP4169[9];
NTI242232.size = sizeof(PprocHEX3Aobjecttype242232);
NTI242232.kind = 18;
NTI242232.base = 0;
NTI242232.flags = 2;
TMP4173[0] = &TMP4169[11];
NTI242030.size = sizeof(Tblock242030);
NTI242030.kind = 18;
NTI242030.base = 0;
NTI242030.flags = 2;
TMP4174[0] = &TMP4169[13];
TMP4169[13].kind = 1;
TMP4169[13].offset = offsetof(Tblock242030, label);
TMP4169[13].typ = (&NTI189811);
TMP4169[13].name = "label";
TMP4174[1] = &TMP4169[14];
NTI242213.size = sizeof(TY242213*);
NTI242213.kind = 24;
NTI242213.base = (&NTI108);
NTI242213.flags = 2;
NTI242213.marker = TMP4175;
TMP4169[14].kind = 1;
TMP4169[14].offset = offsetof(Tblock242030, fixups);
TMP4169[14].typ = (&NTI242213);
TMP4169[14].name = "fixups";
TMP4169[12].len = 2; TMP4169[12].kind = 2; TMP4169[12].sons = &TMP4174[0];
NTI242030.node = &TMP4169[12];
NTI242233.size = sizeof(TY242233*);
NTI242233.kind = 24;
NTI242233.base = (&NTI242030);
NTI242233.flags = 2;
NTI242233.marker = TMP4176;
TMP4169[11].kind = 1;
TMP4169[11].offset = offsetof(PprocHEX3Aobjecttype242232, blocks);
TMP4169[11].typ = (&NTI242233);
TMP4169[11].name = "blocks";
TMP4173[1] = &TMP4169[15];
TMP4169[15].kind = 1;
TMP4169[15].offset = offsetof(PprocHEX3Aobjecttype242232, sym);
TMP4169[15].typ = (&NTI189811);
TMP4169[15].name = "sym";
TMP4173[2] = &TMP4169[16];
NTI242239.size = sizeof(TY242239);
NTI242239.kind = 18;
NTI242239.base = 0;
NTI242239.flags = 3;
TMP4177[0] = &TMP4169[18];
TMP4169[18].kind = 1;
TMP4169[18].offset = offsetof(TY242239, Field0);
TMP4169[18].typ = (&NTI138);
TMP4169[18].name = "Field0";
TMP4177[1] = &TMP4169[19];
NTI242038.size = sizeof(NU8);
NTI242038.kind = 14;
NTI242038.base = 0;
NTI242038.flags = 3;
for (TMP4180 = 0; TMP4180 < 9; TMP4180++) {
TMP4169[TMP4180+20].kind = 1;
TMP4169[TMP4180+20].offset = TMP4180;
TMP4169[TMP4180+20].name = TMP4179[TMP4180];
TMP4178[TMP4180] = &TMP4169[TMP4180+20];
}
TMP4169[29].len = 9; TMP4169[29].kind = 2; TMP4169[29].sons = &TMP4178[0];
NTI242038.node = &TMP4169[29];
TMP4169[19].kind = 1;
TMP4169[19].offset = offsetof(TY242239, Field1);
TMP4169[19].typ = (&NTI242038);
TMP4169[19].name = "Field1";
TMP4169[17].len = 2; TMP4169[17].kind = 2; TMP4169[17].sons = &TMP4177[0];
NTI242239.node = &TMP4169[17];
NTI242236.size = sizeof(TY242236);
NTI242236.kind = 16;
NTI242236.base = (&NTI242239);
NTI242236.flags = 3;
TMP4169[16].kind = 1;
TMP4169[16].offset = offsetof(PprocHEX3Aobjecttype242232, slots);
TMP4169[16].typ = (&NTI242236);
TMP4169[16].name = "slots";
TMP4173[3] = &TMP4169[30];
TMP4169[30].kind = 1;
TMP4169[30].offset = offsetof(PprocHEX3Aobjecttype242232, maxslots);
TMP4169[30].typ = (&NTI108);
TMP4169[30].name = "maxSlots";
TMP4169[10].len = 4; TMP4169[10].kind = 2; TMP4169[10].sons = &TMP4173[0];
NTI242232.node = &TMP4169[10];
NTI242040.size = sizeof(PprocHEX3Aobjecttype242232*);
NTI242040.kind = 22;
NTI242040.base = (&NTI242232);
NTI242040.flags = 2;
NTI242040.marker = TMP4181;
TMP4169[9].kind = 1;
TMP4169[9].offset = offsetof(Tctx242048, prc);
TMP4169[9].typ = (&NTI242040);
TMP4169[9].name = "prc";
TMP4171[9] = &TMP4169[31];
TMP4169[31].kind = 1;
TMP4169[31].offset = offsetof(Tctx242048, module);
TMP4169[31].typ = (&NTI189811);
TMP4169[31].name = "module";
TMP4171[10] = &TMP4169[32];
TMP4169[32].kind = 1;
TMP4169[32].offset = offsetof(Tctx242048, callsite);
TMP4169[32].typ = (&NTI189805);
TMP4169[32].name = "callsite";
TMP4171[11] = &TMP4169[33];
NTI242032.size = sizeof(NU8);
NTI242032.kind = 14;
NTI242032.base = 0;
NTI242032.flags = 3;
for (TMP4184 = 0; TMP4184 < 5; TMP4184++) {
TMP4169[TMP4184+34].kind = 1;
TMP4169[TMP4184+34].offset = TMP4184;
TMP4169[TMP4184+34].name = TMP4183[TMP4184];
TMP4182[TMP4184] = &TMP4169[TMP4184+34];
}
TMP4169[39].len = 5; TMP4169[39].kind = 2; TMP4169[39].sons = &TMP4182[0];
NTI242032.node = &TMP4169[39];
TMP4169[33].kind = 1;
TMP4169[33].offset = offsetof(Tctx242048, mode);
TMP4169[33].typ = (&NTI242032);
TMP4169[33].name = "mode";
TMP4171[12] = &TMP4169[40];
NTI242034.size = sizeof(NU8);
NTI242034.kind = 14;
NTI242034.base = 0;
NTI242034.flags = 3;
for (TMP4187 = 0; TMP4187 < 3; TMP4187++) {
TMP4169[TMP4187+41].kind = 1;
TMP4169[TMP4187+41].offset = TMP4187;
TMP4169[TMP4187+41].name = TMP4186[TMP4187];
TMP4185[TMP4187] = &TMP4169[TMP4187+41];
}
TMP4169[44].len = 3; TMP4169[44].kind = 2; TMP4169[44].sons = &TMP4185[0];
NTI242034.node = &TMP4169[44];
NTI242036.size = sizeof(NU8);
NTI242036.kind = 19;
NTI242036.base = (&NTI242034);
NTI242036.flags = 3;
TMP4169[45].len = 0; TMP4169[45].kind = 0;
NTI242036.node = &TMP4169[45];
TMP4169[40].kind = 1;
TMP4169[40].offset = offsetof(Tctx242048, features);
TMP4169[40].typ = (&NTI242036);
TMP4169[40].name = "features";
TMP4171[13] = &TMP4169[46];
TMP4169[46].kind = 1;
TMP4169[46].offset = offsetof(Tctx242048, traceactive);
TMP4169[46].typ = (&NTI138);
TMP4169[46].name = "traceActive";
TMP4171[14] = &TMP4169[47];
TMP4169[47].kind = 1;
TMP4169[47].offset = offsetof(Tctx242048, loopiterations);
TMP4169[47].typ = (&NTI108);
TMP4169[47].name = "loopIterations";
TMP4171[15] = &TMP4169[48];
TMP4169[48].kind = 1;
TMP4169[48].offset = offsetof(Tctx242048, comesfromheuristic);
TMP4169[48].typ = (&NTI161338);
TMP4169[48].name = "comesFromHeuristic";
TMP4171[16] = &TMP4169[49];
NTI242273.size = sizeof(TY242273);
NTI242273.kind = 18;
NTI242273.base = 0;
TMP4188[0] = &TMP4169[51];
TMP4169[51].kind = 1;
TMP4169[51].offset = offsetof(TY242273, Field0);
TMP4169[51].typ = (&NTI149);
TMP4169[51].name = "Field0";
TMP4188[1] = &TMP4169[52];
NTI242044.size = sizeof(TY184578);
NTI242044.kind = 18;
NTI242044.base = 0;
NTI242044.flags = 2;
TMP4189[0] = &TMP4169[54];
TMP4169[54].kind = 1;
TMP4169[54].offset = offsetof(TY184578, Field0);
TMP4169[54].typ = (&NTI153);
TMP4169[54].name = "Field0";
TMP4189[1] = &TMP4169[55];
TMP4169[55].kind = 1;
TMP4169[55].offset = offsetof(TY184578, Field1);
TMP4169[55].typ = (&NTI184580);
TMP4169[55].name = "Field1";
TMP4169[53].len = 2; TMP4169[53].kind = 2; TMP4169[53].sons = &TMP4189[0];
NTI242044.node = &TMP4169[53];
TMP4169[52].kind = 1;
TMP4169[52].offset = offsetof(TY242273, Field1);
TMP4169[52].typ = (&NTI242044);
TMP4169[52].name = "Field1";
TMP4169[50].len = 2; TMP4169[50].kind = 2; TMP4169[50].sons = &TMP4188[0];
NTI242273.node = &TMP4169[50];
NTI242272.size = sizeof(TY242272*);
NTI242272.kind = 24;
NTI242272.base = (&NTI242273);
NTI242272.marker = TMP4190;
TMP4169[49].kind = 1;
TMP4169[49].offset = offsetof(Tctx242048, callbacks);
TMP4169[49].typ = (&NTI242272);
TMP4169[49].name = "callbacks";
TMP4171[17] = &TMP4169[56];
TMP4169[56].kind = 1;
TMP4169[56].offset = offsetof(Tctx242048, errorflag);
TMP4169[56].typ = (&NTI149);
TMP4169[56].name = "errorFlag";
TMP4169[0].len = 18; TMP4169[0].kind = 2; TMP4169[0].sons = &TMP4171[0];
NTI242048.node = &TMP4169[0];
NTI242046.size = sizeof(Tctx242048*);
NTI242046.kind = 22;
NTI242046.base = (&NTI242048);
NTI242046.marker = TMP4191;
NTI242028.size = sizeof(NU8);
NTI242028.kind = 14;
NTI242028.base = 0;
NTI242028.flags = 3;
for (TMP7282 = 0; TMP7282 < 157; TMP7282++) {
TMP4169[TMP7282+57].kind = 1;
TMP4169[TMP7282+57].offset = TMP7282;
TMP4169[TMP7282+57].name = TMP7281[TMP7282];
TMP7280[TMP7282] = &TMP4169[TMP7282+57];
}
TMP4169[214].len = 157; TMP4169[214].kind = 2; TMP4169[214].sons = &TMP7280[0];
NTI242028.node = &TMP4169[214];
}

