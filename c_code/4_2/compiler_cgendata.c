/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct Ropeobj160009 Ropeobj160009;
typedef struct TY456155 TY456155;
typedef struct Tcgen456038 Tcgen456038;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tpasscontext241005 Tpasscontext241005;
typedef struct TNimObject TNimObject;
typedef struct Tsym190843 Tsym190843;
typedef struct NimStringDesc NimStringDesc;
typedef struct Tidtable190861 Tidtable190861;
typedef struct Tidpairseq190859 Tidpairseq190859;
typedef struct Intset187056 Intset187056;
typedef struct Ttrunk187052 Ttrunk187052;
typedef struct Ttrunkseq187054 Ttrunkseq187054;
typedef struct Tlinkedlist130028 Tlinkedlist130028;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tcproc456034 Tcproc456034;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tnodetable190873 Tnodetable190873;
typedef struct Tnodepairseq190871 Tnodepairseq190871;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Tlineinfo162338 Tlineinfo162338;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct TY160599 TY160599;
typedef struct TY456106 TY456106;
typedef struct Tblock456032 Tblock456032;
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
typedef struct Tidobj166015 Tidobj166015;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Ttype190849 Ttype190849;
typedef struct Tident166021 Tident166021;
typedef struct Tnode190813 Tnode190813;
typedef struct Tloc190827 Tloc190827;
typedef struct Tlib190831 Tlib190831;
typedef struct Tidpair190857 Tidpair190857;
typedef struct Tnodepair190869 Tnodepair190869;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct TY190933 TY190933;
struct  TGenericSeq  {
NI len;
NI reserved;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tpasscontext241005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef Ropeobj160009* Tcfilesections456022[18];
struct  Tidtable190861  {
NI counter;
Tidpairseq190859* data;
};
struct  Intset187056  {
NI counter;
NI max;
Ttrunk187052* head;
Ttrunkseq187054* data;
};
struct  Tlinkedlist130028  {
Tlistentry130022* head;
Tlistentry130022* tail;
NI counter;
};
struct  Tnodetable190873  {
NI counter;
Tnodepairseq190871* data;
};
typedef Ropeobj160009* TY456143[10];
struct  Tcgen456038  {
  Tpasscontext241005 Sup;
Tsym190843* module;
NimStringDesc* filename;
Tcfilesections456022 s;
NIM_BOOL preventstacktrace;
NIM_BOOL usesthreadvars;
NIM_BOOL framedeclared;
NIM_BOOL isheaderfile;
NIM_BOOL includesstringh;
NIM_BOOL objhaskidsvalid;
NimStringDesc* cfilename;
Tidtable190861 typecache;
Tidtable190861 forwtypecache;
Intset187056 declaredthings;
Intset187056 declaredprotos;
Tlinkedlist130028 headerfiles;
Intset187056 typeinfomarker;
Tcproc456034* initproc;
Tcproc456034* postinitproc;
Tcproc456034* preinitproc;
Ttypeseq190845* typestack;
Tnodetable190873 datacache;
Tsymseq190815* forwardedprocs;
NI typenodes;
NI nimtypes;
Ropeobj160009* typenodesname;
Ropeobj160009* nimtypesname;
NI labels;
TY456143 extensionloaders;
Ropeobj160009* injectstmt;
};
struct  Tlineinfo162338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tcproc456034  {
Tsym190843* prc;
NIM_BOOL beforeretneeded;
NIM_BOOL threadvaraccessed;
Tlineinfo162338 lastlineinfo;
Tnodeseq190807* nestedtrystmts;
NI inexceptblock;
TY160599* finallysafepoints;
NI labels;
TY456106* blocks;
NI breakidx;
NU32 options;
NI maxframelen;
Tcgen456038* module;
NI withinloop;
NI splitdecls;
NI gcframeid;
Ropeobj160009* gcframetype;
};
typedef Ropeobj160009* Tcprocsections456026[3];
struct  Tblock456032  {
NI id;
Ropeobj160009* label;
Tcprocsections456026 sections;
NIM_BOOL isloop;
NI16 nestedtrystmts;
NI16 nestedexceptstmts;
NI16 framelen;
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
struct  Ropeobj160009  {
  TNimObject Sup;
Ropeobj160009* left;
Ropeobj160009* right;
NI length;
NimStringDesc* data;
};
struct  Tidpair190857  {
Tidobj166015* key;
TNimObject* val;
};
typedef NI TY27820[8];
struct  Ttrunk187052  {
Ttrunk187052* next;
NI key;
TY27820 bits;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tnodepair190869  {
NI h;
Tnode190813* key;
NI val;
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
struct  Tscope190837  {
NI depthlevel;
Tstrtable190817 symbols;
Tnodeseq190807* usingsyms;
Tscope190837* parent;
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
struct  Tident166021  {
  Tidobj166015 Sup;
NimStringDesc* s;
Tident166021* next;
NI h;
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
struct  Tlib190831  {
  Tlistentry130022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj160009* name;
Tnode190813* path;
};
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct TY456155 {
  TGenericSeq Sup;
  Tcgen456038* data[SEQ_DECL_SIZE];
};
struct TY456106 {
  TGenericSeq Sup;
  Tblock456032 data[SEQ_DECL_SIZE];
};
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
};
struct TY160599 {
  TGenericSeq Sup;
  Ropeobj160009* data[SEQ_DECL_SIZE];
};
struct Tidpairseq190859 {
  TGenericSeq Sup;
  Tidpair190857 data[SEQ_DECL_SIZE];
};
struct Ttrunkseq187054 {
  TGenericSeq Sup;
  Ttrunk187052* data[SEQ_DECL_SIZE];
};
struct Ttypeseq190845 {
  TGenericSeq Sup;
  Ttype190849* data[SEQ_DECL_SIZE];
};
struct Tnodepairseq190871 {
  TGenericSeq Sup;
  Tnodepair190869 data[SEQ_DECL_SIZE];
};
struct Tsymseq190815 {
  TGenericSeq Sup;
  Tsym190843* data[SEQ_DECL_SIZE];
};
struct TY190944 {
  TGenericSeq Sup;
  Tinstantiation190833* data[SEQ_DECL_SIZE];
};
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP8919)(void* p, NI op);
N_NIMCALL(void, TMP8920)(void* p, NI op);
N_NIMCALL(void, TMP8922)(void* p, NI op);
N_NIMCALL(void, TMP8923)(void* p, NI op);
static N_INLINE(void, nimGCunref)(void* p);
static N_INLINE(void, decref_52204)(Tcell46747* c);
static N_INLINE(void, rtladdzct_51804)(Tcell46747* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46763* s, Tcell46747* c);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL, canbecycleroot_50267)(Tcell46747* c);
static N_INLINE(void, rtladdcycleroot_51023)(Tcell46747* c);
N_NOINLINE(void, incl_47465)(Tcellset46759* s, Tcell46747* cell);
static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
static N_INLINE(Ropeobj160009**, s_456184)(Tcproc456034* p, NU8 s);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(Ropeobj160009**, procsec_456205)(Tcproc456034* p, NU8 s);
N_NIMCALL(Tcgen456038*, bmod_456218)(Tsym190843* module);
N_NIMCALL(Tcproc456034*, newproc_456229)(Tsym190843* prc, Tcgen456038* module);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52622)(Tcell46747* c);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
Ropeobj160009* mainmodprocs_456150;
Ropeobj160009* mainmodinit_456151;
Ropeobj160009* othermodsinit_456152;
Ropeobj160009* maindatinit_456153;
Ropeobj160009* gmapping_456154;
TY456155* gmodules_456172;
extern TNimType NTI241005; /* TPassContext */
TNimType NTI456038; /* TCGen */
extern TNimType NTI190811; /* PSym */
extern TNimType NTI149; /* string */
extern TNimType NTI160007; /* Rope */
TNimType NTI456022; /* TCFileSections */
extern TNimType NTI138; /* bool */
extern TNimType NTI190861; /* TIdTable */
extern TNimType NTI187056; /* IntSet */
extern TNimType NTI130028; /* TLinkedList */
TNimType NTI456034; /* TCProc */
extern TNimType NTI162338; /* TLineInfo */
extern TNimType NTI190807; /* TNodeSeq */
extern TNimType NTI108; /* int */
extern TNimType NTI160599; /* seq[Rope] */
extern TNimType NTI3407; /* Natural */
TNimType NTI456032; /* TBlock */
TNimType NTI456026; /* TCProcSections */
extern TNimType NTI112; /* int16 */
TNimType NTI456106; /* seq[TBlock] */
extern TNimType NTI153121; /* set[TOption] */
TNimType NTI456030; /* BProc */
extern TNimType NTI190845; /* TTypeSeq */
extern TNimType NTI190873; /* TNodeTable */
extern TNimType NTI190815; /* TSymSeq */
TNimType NTI456143; /* array[48..57, Rope] */
TNimType NTI456028; /* BModule */
TNimType NTI456155; /* seq[BModule] */
extern Tgcheap48616 gch_48644;
extern TFrame* frameptr_17042;
NI gforwardedprocscounter_456173;
extern NU32 goptions_153126;
N_NIMCALL(void, TMP8919)(void* p, NI op) {
	TY456106* a;
	NI LOC1;
	NI LOC2;
	a = (TY456106*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].label, op);
	LOC2 = 0;
	for (LOC2 = 0; LOC2 < 3; LOC2++) {
	nimGCvisit((void*)a->data[LOC1].sections[LOC2], op);
	}
	}
}
N_NIMCALL(void, TMP8920)(void* p, NI op) {
	Tcproc456034* a;
	a = (Tcproc456034*)p;
	nimGCvisit((void*)(*a).prc, op);
	nimGCvisit((void*)(*a).nestedtrystmts, op);
	nimGCvisit((void*)(*a).finallysafepoints, op);
	nimGCvisit((void*)(*a).blocks, op);
	nimGCvisit((void*)(*a).module, op);
	nimGCvisit((void*)(*a).gcframetype, op);
}
N_NIMCALL(void, TMP8922)(void* p, NI op) {
	Tcgen456038* a;
	NI LOC1;
	NI LOC2;
	a = (Tcgen456038*)p;
	nimGCvisit((void*)(*a).module, op);
	nimGCvisit((void*)(*a).filename, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 18; LOC1++) {
	nimGCvisit((void*)(*a).s[LOC1], op);
	}
	nimGCvisit((void*)(*a).cfilename, op);
	nimGCvisit((void*)(*a).typecache.data, op);
	nimGCvisit((void*)(*a).forwtypecache.data, op);
	nimGCvisit((void*)(*a).declaredthings.head, op);
	nimGCvisit((void*)(*a).declaredthings.data, op);
	nimGCvisit((void*)(*a).declaredprotos.head, op);
	nimGCvisit((void*)(*a).declaredprotos.data, op);
	nimGCvisit((void*)(*a).headerfiles.head, op);
	nimGCvisit((void*)(*a).headerfiles.tail, op);
	nimGCvisit((void*)(*a).typeinfomarker.head, op);
	nimGCvisit((void*)(*a).typeinfomarker.data, op);
	nimGCvisit((void*)(*a).initproc, op);
	nimGCvisit((void*)(*a).postinitproc, op);
	nimGCvisit((void*)(*a).preinitproc, op);
	nimGCvisit((void*)(*a).typestack, op);
	nimGCvisit((void*)(*a).datacache.data, op);
	nimGCvisit((void*)(*a).forwardedprocs, op);
	nimGCvisit((void*)(*a).typenodesname, op);
	nimGCvisit((void*)(*a).nimtypesname, op);
	LOC2 = 0;
	for (LOC2 = 0; LOC2 < 10; LOC2++) {
	nimGCvisit((void*)(*a).extensionloaders[LOC2], op);
	}
	nimGCvisit((void*)(*a).injectstmt, op);
}
N_NIMCALL(void, TMP8923)(void* p, NI op) {
	TY456155* a;
	NI LOC1;
	a = (TY456155*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
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

static N_INLINE(void, rtladdzct_51804)(Tcell46747* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_50217((&gch_48644.zct), c);
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

static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr) {
	Tcell46747* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	result = ((Tcell46747*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46747))))));
	popFrame();
	return result;
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

static N_INLINE(Ropeobj160009**, s_456184)(Tcproc456034* p, NU8 s) {
	Ropeobj160009** result;
	NI TMP8924;
	nimfr("s", "cgendata.nim")
	result = 0;
	nimln(136, "cgendata.nim");
	TMP8924 = subInt(((*p).blocks ? (*p).blocks->Sup.len : 0), ((NI) 1));
	if ((NU)((NI)(TMP8924)) >= (NU)((*p).blocks->Sup.len)) raiseIndexError();
	result = &(*p).blocks->data[(NI)(TMP8924)].sections[(s)- 0];
	popFrame();
	return result;
}

static N_INLINE(Ropeobj160009**, procsec_456205)(Tcproc456034* p, NU8 s) {
	Ropeobj160009** result;
	nimfr("procSec", "cgendata.nim")
	result = 0;
	nimln(140, "cgendata.nim");
	if ((NU)(((NI) 0)) >= (NU)((*p).blocks->Sup.len)) raiseIndexError();
	result = &(*p).blocks->data[((NI) 0)].sections[(s)- 0];
	popFrame();
	return result;
}

N_NIMCALL(Tcgen456038*, bmod_456218)(Tsym190843* module) {
	Tcgen456038* result;
	nimfr("bmod", "cgendata.nim")
	result = 0;
	nimln(144, "cgendata.nim");
	if ((NU)((*module).position) >= (NU)(gmodules_456172->Sup.len)) raiseIndexError();
	result = gmodules_456172->data[(*module).position];
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

N_NIMCALL(Tcproc456034*, newproc_456229)(Tsym190843* prc, Tcgen456038* module) {
	Tcproc456034* result;
	nimfr("newProc", "cgendata.nim")
	result = 0;
	nimln(147, "cgendata.nim");
	result = (Tcproc456034*) newObj((&NTI456030), sizeof(Tcproc456034));
	nimln(148, "cgendata.nim");
	asgnRefNoCycle((void**) (&(*result).prc), prc);
	nimln(149, "cgendata.nim");
	asgnRef((void**) (&(*result).module), module);
	nimln(150, "cgendata.nim");
	{
		if (!!((prc == NIM_NIL))) goto LA3;
		(*result).options = (*prc).options;
	}
	goto LA1;
	LA3: ;
	{
		nimln(151, "cgendata.nim");
		(*result).options = goptions_153126;
	}
	LA1: ;
	nimln(152, "cgendata.nim");
	if ((*result).blocks) nimGCunrefNoCycle((*result).blocks);
	(*result).blocks = (TY456106*) newSeqRC1((&NTI456106), ((NI) 1));
	nimln(153, "cgendata.nim");
	if ((*result).nestedtrystmts) nimGCunrefNoCycle((*result).nestedtrystmts);
	(*result).nestedtrystmts = (Tnodeseq190807*) newSeqRC1((&NTI190807), 0);
	nimln(154, "cgendata.nim");
	if ((*result).finallysafepoints) nimGCunrefNoCycle((*result).finallysafepoints);
	(*result).finallysafepoints = (TY160599*) newSeqRC1((&NTI160599), 0);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_cgendataInit)(void) {
	nimfr("cgendata", "cgendata.nim")
	nimln(131, "cgendata.nim");
	if (gmodules_456172) nimGCunref(gmodules_456172);
	gmodules_456172 = (TY456155*) newSeqRC1((&NTI456155), 0);
	nimln(132, "cgendata.nim");
	gforwardedprocscounter_456173 = ((NI) 0);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_cgendataDatInit)(void) {
static TNimNode* TMP8916[29];
static TNimNode* TMP8917[17];
static TNimNode* TMP8918[7];
static TNimNode TMP8914[56];
NTI456038.size = sizeof(Tcgen456038);
NTI456038.kind = 17;
NTI456038.base = (&NTI241005);
TMP8916[0] = &TMP8914[1];
TMP8914[1].kind = 1;
TMP8914[1].offset = offsetof(Tcgen456038, module);
TMP8914[1].typ = (&NTI190811);
TMP8914[1].name = "module";
TMP8916[1] = &TMP8914[2];
TMP8914[2].kind = 1;
TMP8914[2].offset = offsetof(Tcgen456038, filename);
TMP8914[2].typ = (&NTI149);
TMP8914[2].name = "filename";
TMP8916[2] = &TMP8914[3];
NTI456022.size = sizeof(Tcfilesections456022);
NTI456022.kind = 16;
NTI456022.base = (&NTI160007);
NTI456022.flags = 2;
TMP8914[3].kind = 1;
TMP8914[3].offset = offsetof(Tcgen456038, s);
TMP8914[3].typ = (&NTI456022);
TMP8914[3].name = "s";
TMP8916[3] = &TMP8914[4];
TMP8914[4].kind = 1;
TMP8914[4].offset = offsetof(Tcgen456038, preventstacktrace);
TMP8914[4].typ = (&NTI138);
TMP8914[4].name = "preventStackTrace";
TMP8916[4] = &TMP8914[5];
TMP8914[5].kind = 1;
TMP8914[5].offset = offsetof(Tcgen456038, usesthreadvars);
TMP8914[5].typ = (&NTI138);
TMP8914[5].name = "usesThreadVars";
TMP8916[5] = &TMP8914[6];
TMP8914[6].kind = 1;
TMP8914[6].offset = offsetof(Tcgen456038, framedeclared);
TMP8914[6].typ = (&NTI138);
TMP8914[6].name = "frameDeclared";
TMP8916[6] = &TMP8914[7];
TMP8914[7].kind = 1;
TMP8914[7].offset = offsetof(Tcgen456038, isheaderfile);
TMP8914[7].typ = (&NTI138);
TMP8914[7].name = "isHeaderFile";
TMP8916[7] = &TMP8914[8];
TMP8914[8].kind = 1;
TMP8914[8].offset = offsetof(Tcgen456038, includesstringh);
TMP8914[8].typ = (&NTI138);
TMP8914[8].name = "includesStringh";
TMP8916[8] = &TMP8914[9];
TMP8914[9].kind = 1;
TMP8914[9].offset = offsetof(Tcgen456038, objhaskidsvalid);
TMP8914[9].typ = (&NTI138);
TMP8914[9].name = "objHasKidsValid";
TMP8916[9] = &TMP8914[10];
TMP8914[10].kind = 1;
TMP8914[10].offset = offsetof(Tcgen456038, cfilename);
TMP8914[10].typ = (&NTI149);
TMP8914[10].name = "cfilename";
TMP8916[10] = &TMP8914[11];
TMP8914[11].kind = 1;
TMP8914[11].offset = offsetof(Tcgen456038, typecache);
TMP8914[11].typ = (&NTI190861);
TMP8914[11].name = "typeCache";
TMP8916[11] = &TMP8914[12];
TMP8914[12].kind = 1;
TMP8914[12].offset = offsetof(Tcgen456038, forwtypecache);
TMP8914[12].typ = (&NTI190861);
TMP8914[12].name = "forwTypeCache";
TMP8916[12] = &TMP8914[13];
TMP8914[13].kind = 1;
TMP8914[13].offset = offsetof(Tcgen456038, declaredthings);
TMP8914[13].typ = (&NTI187056);
TMP8914[13].name = "declaredThings";
TMP8916[13] = &TMP8914[14];
TMP8914[14].kind = 1;
TMP8914[14].offset = offsetof(Tcgen456038, declaredprotos);
TMP8914[14].typ = (&NTI187056);
TMP8914[14].name = "declaredProtos";
TMP8916[14] = &TMP8914[15];
TMP8914[15].kind = 1;
TMP8914[15].offset = offsetof(Tcgen456038, headerfiles);
TMP8914[15].typ = (&NTI130028);
TMP8914[15].name = "headerFiles";
TMP8916[15] = &TMP8914[16];
TMP8914[16].kind = 1;
TMP8914[16].offset = offsetof(Tcgen456038, typeinfomarker);
TMP8914[16].typ = (&NTI187056);
TMP8914[16].name = "typeInfoMarker";
TMP8916[16] = &TMP8914[17];
NTI456034.size = sizeof(Tcproc456034);
NTI456034.kind = 18;
NTI456034.base = 0;
TMP8917[0] = &TMP8914[19];
TMP8914[19].kind = 1;
TMP8914[19].offset = offsetof(Tcproc456034, prc);
TMP8914[19].typ = (&NTI190811);
TMP8914[19].name = "prc";
TMP8917[1] = &TMP8914[20];
TMP8914[20].kind = 1;
TMP8914[20].offset = offsetof(Tcproc456034, beforeretneeded);
TMP8914[20].typ = (&NTI138);
TMP8914[20].name = "beforeRetNeeded";
TMP8917[2] = &TMP8914[21];
TMP8914[21].kind = 1;
TMP8914[21].offset = offsetof(Tcproc456034, threadvaraccessed);
TMP8914[21].typ = (&NTI138);
TMP8914[21].name = "threadVarAccessed";
TMP8917[3] = &TMP8914[22];
TMP8914[22].kind = 1;
TMP8914[22].offset = offsetof(Tcproc456034, lastlineinfo);
TMP8914[22].typ = (&NTI162338);
TMP8914[22].name = "lastLineInfo";
TMP8917[4] = &TMP8914[23];
TMP8914[23].kind = 1;
TMP8914[23].offset = offsetof(Tcproc456034, nestedtrystmts);
TMP8914[23].typ = (&NTI190807);
TMP8914[23].name = "nestedTryStmts";
TMP8917[5] = &TMP8914[24];
TMP8914[24].kind = 1;
TMP8914[24].offset = offsetof(Tcproc456034, inexceptblock);
TMP8914[24].typ = (&NTI108);
TMP8914[24].name = "inExceptBlock";
TMP8917[6] = &TMP8914[25];
TMP8914[25].kind = 1;
TMP8914[25].offset = offsetof(Tcproc456034, finallysafepoints);
TMP8914[25].typ = (&NTI160599);
TMP8914[25].name = "finallySafePoints";
TMP8917[7] = &TMP8914[26];
TMP8914[26].kind = 1;
TMP8914[26].offset = offsetof(Tcproc456034, labels);
TMP8914[26].typ = (&NTI3407);
TMP8914[26].name = "labels";
TMP8917[8] = &TMP8914[27];
NTI456032.size = sizeof(Tblock456032);
NTI456032.kind = 18;
NTI456032.base = 0;
NTI456032.flags = 2;
TMP8918[0] = &TMP8914[29];
TMP8914[29].kind = 1;
TMP8914[29].offset = offsetof(Tblock456032, id);
TMP8914[29].typ = (&NTI108);
TMP8914[29].name = "id";
TMP8918[1] = &TMP8914[30];
TMP8914[30].kind = 1;
TMP8914[30].offset = offsetof(Tblock456032, label);
TMP8914[30].typ = (&NTI160007);
TMP8914[30].name = "label";
TMP8918[2] = &TMP8914[31];
NTI456026.size = sizeof(Tcprocsections456026);
NTI456026.kind = 16;
NTI456026.base = (&NTI160007);
NTI456026.flags = 2;
TMP8914[31].kind = 1;
TMP8914[31].offset = offsetof(Tblock456032, sections);
TMP8914[31].typ = (&NTI456026);
TMP8914[31].name = "sections";
TMP8918[3] = &TMP8914[32];
TMP8914[32].kind = 1;
TMP8914[32].offset = offsetof(Tblock456032, isloop);
TMP8914[32].typ = (&NTI138);
TMP8914[32].name = "isLoop";
TMP8918[4] = &TMP8914[33];
TMP8914[33].kind = 1;
TMP8914[33].offset = offsetof(Tblock456032, nestedtrystmts);
TMP8914[33].typ = (&NTI112);
TMP8914[33].name = "nestedTryStmts";
TMP8918[5] = &TMP8914[34];
TMP8914[34].kind = 1;
TMP8914[34].offset = offsetof(Tblock456032, nestedexceptstmts);
TMP8914[34].typ = (&NTI112);
TMP8914[34].name = "nestedExceptStmts";
TMP8918[6] = &TMP8914[35];
TMP8914[35].kind = 1;
TMP8914[35].offset = offsetof(Tblock456032, framelen);
TMP8914[35].typ = (&NTI112);
TMP8914[35].name = "frameLen";
TMP8914[28].len = 7; TMP8914[28].kind = 2; TMP8914[28].sons = &TMP8918[0];
NTI456032.node = &TMP8914[28];
NTI456106.size = sizeof(TY456106*);
NTI456106.kind = 24;
NTI456106.base = (&NTI456032);
NTI456106.flags = 2;
NTI456106.marker = TMP8919;
TMP8914[27].kind = 1;
TMP8914[27].offset = offsetof(Tcproc456034, blocks);
TMP8914[27].typ = (&NTI456106);
TMP8914[27].name = "blocks";
TMP8917[9] = &TMP8914[36];
TMP8914[36].kind = 1;
TMP8914[36].offset = offsetof(Tcproc456034, breakidx);
TMP8914[36].typ = (&NTI108);
TMP8914[36].name = "breakIdx";
TMP8917[10] = &TMP8914[37];
TMP8914[37].kind = 1;
TMP8914[37].offset = offsetof(Tcproc456034, options);
TMP8914[37].typ = (&NTI153121);
TMP8914[37].name = "options";
TMP8917[11] = &TMP8914[38];
TMP8914[38].kind = 1;
TMP8914[38].offset = offsetof(Tcproc456034, maxframelen);
TMP8914[38].typ = (&NTI108);
TMP8914[38].name = "maxFrameLen";
TMP8917[12] = &TMP8914[39];
TMP8914[39].kind = 1;
TMP8914[39].offset = offsetof(Tcproc456034, module);
TMP8914[39].typ = (&NTI456028);
TMP8914[39].name = "module";
TMP8917[13] = &TMP8914[40];
TMP8914[40].kind = 1;
TMP8914[40].offset = offsetof(Tcproc456034, withinloop);
TMP8914[40].typ = (&NTI108);
TMP8914[40].name = "withinLoop";
TMP8917[14] = &TMP8914[41];
TMP8914[41].kind = 1;
TMP8914[41].offset = offsetof(Tcproc456034, splitdecls);
TMP8914[41].typ = (&NTI108);
TMP8914[41].name = "splitDecls";
TMP8917[15] = &TMP8914[42];
TMP8914[42].kind = 1;
TMP8914[42].offset = offsetof(Tcproc456034, gcframeid);
TMP8914[42].typ = (&NTI3407);
TMP8914[42].name = "gcFrameId";
TMP8917[16] = &TMP8914[43];
TMP8914[43].kind = 1;
TMP8914[43].offset = offsetof(Tcproc456034, gcframetype);
TMP8914[43].typ = (&NTI160007);
TMP8914[43].name = "gcFrameType";
TMP8914[18].len = 17; TMP8914[18].kind = 2; TMP8914[18].sons = &TMP8917[0];
NTI456034.node = &TMP8914[18];
NTI456030.size = sizeof(Tcproc456034*);
NTI456030.kind = 22;
NTI456030.base = (&NTI456034);
NTI456030.marker = TMP8920;
TMP8914[17].kind = 1;
TMP8914[17].offset = offsetof(Tcgen456038, initproc);
TMP8914[17].typ = (&NTI456030);
TMP8914[17].name = "initProc";
TMP8916[17] = &TMP8914[44];
TMP8914[44].kind = 1;
TMP8914[44].offset = offsetof(Tcgen456038, postinitproc);
TMP8914[44].typ = (&NTI456030);
TMP8914[44].name = "postInitProc";
TMP8916[18] = &TMP8914[45];
TMP8914[45].kind = 1;
TMP8914[45].offset = offsetof(Tcgen456038, preinitproc);
TMP8914[45].typ = (&NTI456030);
TMP8914[45].name = "preInitProc";
TMP8916[19] = &TMP8914[46];
TMP8914[46].kind = 1;
TMP8914[46].offset = offsetof(Tcgen456038, typestack);
TMP8914[46].typ = (&NTI190845);
TMP8914[46].name = "typeStack";
TMP8916[20] = &TMP8914[47];
TMP8914[47].kind = 1;
TMP8914[47].offset = offsetof(Tcgen456038, datacache);
TMP8914[47].typ = (&NTI190873);
TMP8914[47].name = "dataCache";
TMP8916[21] = &TMP8914[48];
TMP8914[48].kind = 1;
TMP8914[48].offset = offsetof(Tcgen456038, forwardedprocs);
TMP8914[48].typ = (&NTI190815);
TMP8914[48].name = "forwardedProcs";
TMP8916[22] = &TMP8914[49];
TMP8914[49].kind = 1;
TMP8914[49].offset = offsetof(Tcgen456038, typenodes);
TMP8914[49].typ = (&NTI108);
TMP8914[49].name = "typeNodes";
TMP8916[23] = &TMP8914[50];
TMP8914[50].kind = 1;
TMP8914[50].offset = offsetof(Tcgen456038, nimtypes);
TMP8914[50].typ = (&NTI108);
TMP8914[50].name = "nimTypes";
TMP8916[24] = &TMP8914[51];
TMP8914[51].kind = 1;
TMP8914[51].offset = offsetof(Tcgen456038, typenodesname);
TMP8914[51].typ = (&NTI160007);
TMP8914[51].name = "typeNodesName";
TMP8916[25] = &TMP8914[52];
TMP8914[52].kind = 1;
TMP8914[52].offset = offsetof(Tcgen456038, nimtypesname);
TMP8914[52].typ = (&NTI160007);
TMP8914[52].name = "nimTypesName";
TMP8916[26] = &TMP8914[53];
TMP8914[53].kind = 1;
TMP8914[53].offset = offsetof(Tcgen456038, labels);
TMP8914[53].typ = (&NTI3407);
TMP8914[53].name = "labels";
TMP8916[27] = &TMP8914[54];
NTI456143.size = sizeof(TY456143);
NTI456143.kind = 16;
NTI456143.base = (&NTI160007);
NTI456143.flags = 2;
TMP8914[54].kind = 1;
TMP8914[54].offset = offsetof(Tcgen456038, extensionloaders);
TMP8914[54].typ = (&NTI456143);
TMP8914[54].name = "extensionLoaders";
TMP8916[28] = &TMP8914[55];
TMP8914[55].kind = 1;
TMP8914[55].offset = offsetof(Tcgen456038, injectstmt);
TMP8914[55].typ = (&NTI160007);
TMP8914[55].name = "injectStmt";
TMP8914[0].len = 29; TMP8914[0].kind = 2; TMP8914[0].sons = &TMP8916[0];
NTI456038.node = &TMP8914[0];
NTI456028.size = sizeof(Tcgen456038*);
NTI456028.kind = 22;
NTI456028.base = (&NTI456038);
NTI456028.marker = TMP8922;
NTI456155.size = sizeof(TY456155*);
NTI456155.kind = 24;
NTI456155.base = (&NTI456028);
NTI456155.marker = TMP8923;
}

