/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct TY457155 TY457155;
typedef struct Tcgen457038 Tcgen457038;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tpasscontext242005 Tpasscontext242005;
typedef struct TNimObject TNimObject;
typedef struct Tsym191843 Tsym191843;
typedef struct NimStringDesc NimStringDesc;
typedef struct Tidtable191861 Tidtable191861;
typedef struct Tidpairseq191859 Tidpairseq191859;
typedef struct Intset188056 Intset188056;
typedef struct Ttrunk188052 Ttrunk188052;
typedef struct Ttrunkseq188054 Ttrunkseq188054;
typedef struct Tlinkedlist130028 Tlinkedlist130028;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tcproc457034 Tcproc457034;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tnodetable191873 Tnodetable191873;
typedef struct Tnodepairseq191871 Tnodepairseq191871;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct TY161599 TY161599;
typedef struct TY457106 TY457106;
typedef struct Tblock457032 Tblock457032;
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
typedef struct Tidobj167015 Tidobj167015;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Ttype191849 Ttype191849;
typedef struct Tident167021 Tident167021;
typedef struct Tnode191813 Tnode191813;
typedef struct Tloc191827 Tloc191827;
typedef struct Tlib191831 Tlib191831;
typedef struct Tidpair191857 Tidpair191857;
typedef struct Tnodepair191869 Tnodepair191869;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct TY191933 TY191933;
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
struct  Tpasscontext242005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef Ropeobj161009* Tcfilesections457022[18];
struct  Tidtable191861  {
NI counter;
Tidpairseq191859* data;
};
struct  Intset188056  {
NI counter;
NI max;
Ttrunk188052* head;
Ttrunkseq188054* data;
};
struct  Tlinkedlist130028  {
Tlistentry130022* head;
Tlistentry130022* tail;
NI counter;
};
struct  Tnodetable191873  {
NI counter;
Tnodepairseq191871* data;
};
typedef Ropeobj161009* TY457143[10];
struct  Tcgen457038  {
  Tpasscontext242005 Sup;
Tsym191843* module;
NimStringDesc* filename;
Tcfilesections457022 s;
NIM_BOOL preventstacktrace;
NIM_BOOL usesthreadvars;
NIM_BOOL framedeclared;
NIM_BOOL isheaderfile;
NIM_BOOL includesstringh;
NIM_BOOL objhaskidsvalid;
NimStringDesc* cfilename;
Tidtable191861 typecache;
Tidtable191861 forwtypecache;
Intset188056 declaredthings;
Intset188056 declaredprotos;
Tlinkedlist130028 headerfiles;
Intset188056 typeinfomarker;
Tcproc457034* initproc;
Tcproc457034* postinitproc;
Tcproc457034* preinitproc;
Ttypeseq191845* typestack;
Tnodetable191873 datacache;
Tsymseq191815* forwardedprocs;
NI typenodes;
NI nimtypes;
Ropeobj161009* typenodesname;
Ropeobj161009* nimtypesname;
NI labels;
TY457143 extensionloaders;
Ropeobj161009* injectstmt;
};
struct  Tlineinfo163338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tcproc457034  {
Tsym191843* prc;
NIM_BOOL beforeretneeded;
NIM_BOOL threadvaraccessed;
Tlineinfo163338 lastlineinfo;
Tnodeseq191807* nestedtrystmts;
NI inexceptblock;
TY161599* finallysafepoints;
NI labels;
TY457106* blocks;
NI breakidx;
NU32 options;
NI maxframelen;
Tcgen457038* module;
NI withinloop;
NI splitdecls;
NI gcframeid;
Ropeobj161009* gcframetype;
};
typedef Ropeobj161009* Tcprocsections457026[3];
struct  Tblock457032  {
NI id;
Ropeobj161009* label;
Tcprocsections457026 sections;
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
struct  Ropeobj161009  {
  TNimObject Sup;
Ropeobj161009* left;
Ropeobj161009* right;
NI length;
NimStringDesc* data;
};
struct  Tidpair191857  {
Tidobj167015* key;
TNimObject* val;
};
typedef NI TY27820[8];
struct  Ttrunk188052  {
Ttrunk188052* next;
NI key;
TY27820 bits;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tnodepair191869  {
NI h;
Tnode191813* key;
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
struct  Tscope191837  {
NI depthlevel;
Tstrtable191817 symbols;
Tnodeseq191807* usingsyms;
Tscope191837* parent;
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
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
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
struct TY457155 {
  TGenericSeq Sup;
  Tcgen457038* data[SEQ_DECL_SIZE];
};
struct TY457106 {
  TGenericSeq Sup;
  Tblock457032 data[SEQ_DECL_SIZE];
};
struct Tnodeseq191807 {
  TGenericSeq Sup;
  Tnode191813* data[SEQ_DECL_SIZE];
};
struct TY161599 {
  TGenericSeq Sup;
  Ropeobj161009* data[SEQ_DECL_SIZE];
};
struct Tidpairseq191859 {
  TGenericSeq Sup;
  Tidpair191857 data[SEQ_DECL_SIZE];
};
struct Ttrunkseq188054 {
  TGenericSeq Sup;
  Ttrunk188052* data[SEQ_DECL_SIZE];
};
struct Ttypeseq191845 {
  TGenericSeq Sup;
  Ttype191849* data[SEQ_DECL_SIZE];
};
struct Tnodepairseq191871 {
  TGenericSeq Sup;
  Tnodepair191869 data[SEQ_DECL_SIZE];
};
struct Tsymseq191815 {
  TGenericSeq Sup;
  Tsym191843* data[SEQ_DECL_SIZE];
};
struct TY191944 {
  TGenericSeq Sup;
  Tinstantiation191833* data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP8929)(void* p, NI op);
N_NIMCALL(void, TMP8930)(void* p, NI op);
N_NIMCALL(void, TMP8932)(void* p, NI op);
N_NIMCALL(void, TMP8933)(void* p, NI op);
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
static N_INLINE(Ropeobj161009**, s_457184)(Tcproc457034* p, NU8 s);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(Ropeobj161009**, procsec_457205)(Tcproc457034* p, NU8 s);
N_NIMCALL(Tcgen457038*, bmod_457218)(Tsym191843* module);
N_NIMCALL(Tcproc457034*, newproc_457229)(Tsym191843* prc, Tcgen457038* module);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52622)(Tcell46747* c);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
Ropeobj161009* mainmodprocs_457150;
Ropeobj161009* mainmodinit_457151;
Ropeobj161009* othermodsinit_457152;
Ropeobj161009* maindatinit_457153;
Ropeobj161009* gmapping_457154;
TY457155* gmodules_457172;
extern TNimType NTI242005; /* TPassContext */
TNimType NTI457038; /* TCGen */
extern TNimType NTI191811; /* PSym */
extern TNimType NTI149; /* string */
extern TNimType NTI161007; /* Rope */
TNimType NTI457022; /* TCFileSections */
extern TNimType NTI138; /* bool */
extern TNimType NTI191861; /* TIdTable */
extern TNimType NTI188056; /* IntSet */
extern TNimType NTI130028; /* TLinkedList */
TNimType NTI457034; /* TCProc */
extern TNimType NTI163338; /* TLineInfo */
extern TNimType NTI191807; /* TNodeSeq */
extern TNimType NTI108; /* int */
extern TNimType NTI161599; /* seq[Rope] */
extern TNimType NTI3407; /* Natural */
TNimType NTI457032; /* TBlock */
TNimType NTI457026; /* TCProcSections */
extern TNimType NTI112; /* int16 */
TNimType NTI457106; /* seq[TBlock] */
extern TNimType NTI154121; /* set[TOption] */
TNimType NTI457030; /* BProc */
extern TNimType NTI191845; /* TTypeSeq */
extern TNimType NTI191873; /* TNodeTable */
extern TNimType NTI191815; /* TSymSeq */
TNimType NTI457143; /* array[48..57, Rope] */
TNimType NTI457028; /* BModule */
TNimType NTI457155; /* seq[BModule] */
extern Tgcheap48616 gch_48644;
extern TFrame* frameptr_17042;
NI gforwardedprocscounter_457173;
extern NU32 goptions_154126;
N_NIMCALL(void, TMP8929)(void* p, NI op) {
	TY457106* a;
	NI LOC1;
	NI LOC2;
	a = (TY457106*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].label, op);
	LOC2 = 0;
	for (LOC2 = 0; LOC2 < 3; LOC2++) {
	nimGCvisit((void*)a->data[LOC1].sections[LOC2], op);
	}
	}
}
N_NIMCALL(void, TMP8930)(void* p, NI op) {
	Tcproc457034* a;
	a = (Tcproc457034*)p;
	nimGCvisit((void*)(*a).prc, op);
	nimGCvisit((void*)(*a).nestedtrystmts, op);
	nimGCvisit((void*)(*a).finallysafepoints, op);
	nimGCvisit((void*)(*a).blocks, op);
	nimGCvisit((void*)(*a).module, op);
	nimGCvisit((void*)(*a).gcframetype, op);
}
N_NIMCALL(void, TMP8932)(void* p, NI op) {
	Tcgen457038* a;
	NI LOC1;
	NI LOC2;
	a = (Tcgen457038*)p;
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
N_NIMCALL(void, TMP8933)(void* p, NI op) {
	TY457155* a;
	NI LOC1;
	a = (TY457155*)p;
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

static N_INLINE(Ropeobj161009**, s_457184)(Tcproc457034* p, NU8 s) {
	Ropeobj161009** result;
	NI TMP8934;
	nimfr("s", "cgendata.nim")
	result = 0;
	nimln(136, "cgendata.nim");
	TMP8934 = subInt(((*p).blocks ? (*p).blocks->Sup.len : 0), ((NI) 1));
	if ((NU)((NI)(TMP8934)) >= (NU)((*p).blocks->Sup.len)) raiseIndexError();
	result = &(*p).blocks->data[(NI)(TMP8934)].sections[(s)- 0];
	popFrame();
	return result;
}

static N_INLINE(Ropeobj161009**, procsec_457205)(Tcproc457034* p, NU8 s) {
	Ropeobj161009** result;
	nimfr("procSec", "cgendata.nim")
	result = 0;
	nimln(140, "cgendata.nim");
	if ((NU)(((NI) 0)) >= (NU)((*p).blocks->Sup.len)) raiseIndexError();
	result = &(*p).blocks->data[((NI) 0)].sections[(s)- 0];
	popFrame();
	return result;
}

N_NIMCALL(Tcgen457038*, bmod_457218)(Tsym191843* module) {
	Tcgen457038* result;
	nimfr("bmod", "cgendata.nim")
	result = 0;
	nimln(144, "cgendata.nim");
	if ((NU)((*module).position) >= (NU)(gmodules_457172->Sup.len)) raiseIndexError();
	result = gmodules_457172->data[(*module).position];
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

N_NIMCALL(Tcproc457034*, newproc_457229)(Tsym191843* prc, Tcgen457038* module) {
	Tcproc457034* result;
	nimfr("newProc", "cgendata.nim")
	result = 0;
	nimln(147, "cgendata.nim");
	result = (Tcproc457034*) newObj((&NTI457030), sizeof(Tcproc457034));
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
		(*result).options = goptions_154126;
	}
	LA1: ;
	nimln(152, "cgendata.nim");
	if ((*result).blocks) nimGCunrefNoCycle((*result).blocks);
	(*result).blocks = (TY457106*) newSeqRC1((&NTI457106), ((NI) 1));
	nimln(153, "cgendata.nim");
	if ((*result).nestedtrystmts) nimGCunrefNoCycle((*result).nestedtrystmts);
	(*result).nestedtrystmts = (Tnodeseq191807*) newSeqRC1((&NTI191807), 0);
	nimln(154, "cgendata.nim");
	if ((*result).finallysafepoints) nimGCunrefNoCycle((*result).finallysafepoints);
	(*result).finallysafepoints = (TY161599*) newSeqRC1((&NTI161599), 0);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_cgendataInit)(void) {
	nimfr("cgendata", "cgendata.nim")
	nimln(131, "cgendata.nim");
	if (gmodules_457172) nimGCunref(gmodules_457172);
	gmodules_457172 = (TY457155*) newSeqRC1((&NTI457155), 0);
	nimln(132, "cgendata.nim");
	gforwardedprocscounter_457173 = ((NI) 0);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_cgendataDatInit)(void) {
static TNimNode* TMP8926[29];
static TNimNode* TMP8927[17];
static TNimNode* TMP8928[7];
static TNimNode TMP8924[56];
NTI457038.size = sizeof(Tcgen457038);
NTI457038.kind = 17;
NTI457038.base = (&NTI242005);
TMP8926[0] = &TMP8924[1];
TMP8924[1].kind = 1;
TMP8924[1].offset = offsetof(Tcgen457038, module);
TMP8924[1].typ = (&NTI191811);
TMP8924[1].name = "module";
TMP8926[1] = &TMP8924[2];
TMP8924[2].kind = 1;
TMP8924[2].offset = offsetof(Tcgen457038, filename);
TMP8924[2].typ = (&NTI149);
TMP8924[2].name = "filename";
TMP8926[2] = &TMP8924[3];
NTI457022.size = sizeof(Tcfilesections457022);
NTI457022.kind = 16;
NTI457022.base = (&NTI161007);
NTI457022.flags = 2;
TMP8924[3].kind = 1;
TMP8924[3].offset = offsetof(Tcgen457038, s);
TMP8924[3].typ = (&NTI457022);
TMP8924[3].name = "s";
TMP8926[3] = &TMP8924[4];
TMP8924[4].kind = 1;
TMP8924[4].offset = offsetof(Tcgen457038, preventstacktrace);
TMP8924[4].typ = (&NTI138);
TMP8924[4].name = "preventStackTrace";
TMP8926[4] = &TMP8924[5];
TMP8924[5].kind = 1;
TMP8924[5].offset = offsetof(Tcgen457038, usesthreadvars);
TMP8924[5].typ = (&NTI138);
TMP8924[5].name = "usesThreadVars";
TMP8926[5] = &TMP8924[6];
TMP8924[6].kind = 1;
TMP8924[6].offset = offsetof(Tcgen457038, framedeclared);
TMP8924[6].typ = (&NTI138);
TMP8924[6].name = "frameDeclared";
TMP8926[6] = &TMP8924[7];
TMP8924[7].kind = 1;
TMP8924[7].offset = offsetof(Tcgen457038, isheaderfile);
TMP8924[7].typ = (&NTI138);
TMP8924[7].name = "isHeaderFile";
TMP8926[7] = &TMP8924[8];
TMP8924[8].kind = 1;
TMP8924[8].offset = offsetof(Tcgen457038, includesstringh);
TMP8924[8].typ = (&NTI138);
TMP8924[8].name = "includesStringh";
TMP8926[8] = &TMP8924[9];
TMP8924[9].kind = 1;
TMP8924[9].offset = offsetof(Tcgen457038, objhaskidsvalid);
TMP8924[9].typ = (&NTI138);
TMP8924[9].name = "objHasKidsValid";
TMP8926[9] = &TMP8924[10];
TMP8924[10].kind = 1;
TMP8924[10].offset = offsetof(Tcgen457038, cfilename);
TMP8924[10].typ = (&NTI149);
TMP8924[10].name = "cfilename";
TMP8926[10] = &TMP8924[11];
TMP8924[11].kind = 1;
TMP8924[11].offset = offsetof(Tcgen457038, typecache);
TMP8924[11].typ = (&NTI191861);
TMP8924[11].name = "typeCache";
TMP8926[11] = &TMP8924[12];
TMP8924[12].kind = 1;
TMP8924[12].offset = offsetof(Tcgen457038, forwtypecache);
TMP8924[12].typ = (&NTI191861);
TMP8924[12].name = "forwTypeCache";
TMP8926[12] = &TMP8924[13];
TMP8924[13].kind = 1;
TMP8924[13].offset = offsetof(Tcgen457038, declaredthings);
TMP8924[13].typ = (&NTI188056);
TMP8924[13].name = "declaredThings";
TMP8926[13] = &TMP8924[14];
TMP8924[14].kind = 1;
TMP8924[14].offset = offsetof(Tcgen457038, declaredprotos);
TMP8924[14].typ = (&NTI188056);
TMP8924[14].name = "declaredProtos";
TMP8926[14] = &TMP8924[15];
TMP8924[15].kind = 1;
TMP8924[15].offset = offsetof(Tcgen457038, headerfiles);
TMP8924[15].typ = (&NTI130028);
TMP8924[15].name = "headerFiles";
TMP8926[15] = &TMP8924[16];
TMP8924[16].kind = 1;
TMP8924[16].offset = offsetof(Tcgen457038, typeinfomarker);
TMP8924[16].typ = (&NTI188056);
TMP8924[16].name = "typeInfoMarker";
TMP8926[16] = &TMP8924[17];
NTI457034.size = sizeof(Tcproc457034);
NTI457034.kind = 18;
NTI457034.base = 0;
TMP8927[0] = &TMP8924[19];
TMP8924[19].kind = 1;
TMP8924[19].offset = offsetof(Tcproc457034, prc);
TMP8924[19].typ = (&NTI191811);
TMP8924[19].name = "prc";
TMP8927[1] = &TMP8924[20];
TMP8924[20].kind = 1;
TMP8924[20].offset = offsetof(Tcproc457034, beforeretneeded);
TMP8924[20].typ = (&NTI138);
TMP8924[20].name = "beforeRetNeeded";
TMP8927[2] = &TMP8924[21];
TMP8924[21].kind = 1;
TMP8924[21].offset = offsetof(Tcproc457034, threadvaraccessed);
TMP8924[21].typ = (&NTI138);
TMP8924[21].name = "threadVarAccessed";
TMP8927[3] = &TMP8924[22];
TMP8924[22].kind = 1;
TMP8924[22].offset = offsetof(Tcproc457034, lastlineinfo);
TMP8924[22].typ = (&NTI163338);
TMP8924[22].name = "lastLineInfo";
TMP8927[4] = &TMP8924[23];
TMP8924[23].kind = 1;
TMP8924[23].offset = offsetof(Tcproc457034, nestedtrystmts);
TMP8924[23].typ = (&NTI191807);
TMP8924[23].name = "nestedTryStmts";
TMP8927[5] = &TMP8924[24];
TMP8924[24].kind = 1;
TMP8924[24].offset = offsetof(Tcproc457034, inexceptblock);
TMP8924[24].typ = (&NTI108);
TMP8924[24].name = "inExceptBlock";
TMP8927[6] = &TMP8924[25];
TMP8924[25].kind = 1;
TMP8924[25].offset = offsetof(Tcproc457034, finallysafepoints);
TMP8924[25].typ = (&NTI161599);
TMP8924[25].name = "finallySafePoints";
TMP8927[7] = &TMP8924[26];
TMP8924[26].kind = 1;
TMP8924[26].offset = offsetof(Tcproc457034, labels);
TMP8924[26].typ = (&NTI3407);
TMP8924[26].name = "labels";
TMP8927[8] = &TMP8924[27];
NTI457032.size = sizeof(Tblock457032);
NTI457032.kind = 18;
NTI457032.base = 0;
NTI457032.flags = 2;
TMP8928[0] = &TMP8924[29];
TMP8924[29].kind = 1;
TMP8924[29].offset = offsetof(Tblock457032, id);
TMP8924[29].typ = (&NTI108);
TMP8924[29].name = "id";
TMP8928[1] = &TMP8924[30];
TMP8924[30].kind = 1;
TMP8924[30].offset = offsetof(Tblock457032, label);
TMP8924[30].typ = (&NTI161007);
TMP8924[30].name = "label";
TMP8928[2] = &TMP8924[31];
NTI457026.size = sizeof(Tcprocsections457026);
NTI457026.kind = 16;
NTI457026.base = (&NTI161007);
NTI457026.flags = 2;
TMP8924[31].kind = 1;
TMP8924[31].offset = offsetof(Tblock457032, sections);
TMP8924[31].typ = (&NTI457026);
TMP8924[31].name = "sections";
TMP8928[3] = &TMP8924[32];
TMP8924[32].kind = 1;
TMP8924[32].offset = offsetof(Tblock457032, isloop);
TMP8924[32].typ = (&NTI138);
TMP8924[32].name = "isLoop";
TMP8928[4] = &TMP8924[33];
TMP8924[33].kind = 1;
TMP8924[33].offset = offsetof(Tblock457032, nestedtrystmts);
TMP8924[33].typ = (&NTI112);
TMP8924[33].name = "nestedTryStmts";
TMP8928[5] = &TMP8924[34];
TMP8924[34].kind = 1;
TMP8924[34].offset = offsetof(Tblock457032, nestedexceptstmts);
TMP8924[34].typ = (&NTI112);
TMP8924[34].name = "nestedExceptStmts";
TMP8928[6] = &TMP8924[35];
TMP8924[35].kind = 1;
TMP8924[35].offset = offsetof(Tblock457032, framelen);
TMP8924[35].typ = (&NTI112);
TMP8924[35].name = "frameLen";
TMP8924[28].len = 7; TMP8924[28].kind = 2; TMP8924[28].sons = &TMP8928[0];
NTI457032.node = &TMP8924[28];
NTI457106.size = sizeof(TY457106*);
NTI457106.kind = 24;
NTI457106.base = (&NTI457032);
NTI457106.flags = 2;
NTI457106.marker = TMP8929;
TMP8924[27].kind = 1;
TMP8924[27].offset = offsetof(Tcproc457034, blocks);
TMP8924[27].typ = (&NTI457106);
TMP8924[27].name = "blocks";
TMP8927[9] = &TMP8924[36];
TMP8924[36].kind = 1;
TMP8924[36].offset = offsetof(Tcproc457034, breakidx);
TMP8924[36].typ = (&NTI108);
TMP8924[36].name = "breakIdx";
TMP8927[10] = &TMP8924[37];
TMP8924[37].kind = 1;
TMP8924[37].offset = offsetof(Tcproc457034, options);
TMP8924[37].typ = (&NTI154121);
TMP8924[37].name = "options";
TMP8927[11] = &TMP8924[38];
TMP8924[38].kind = 1;
TMP8924[38].offset = offsetof(Tcproc457034, maxframelen);
TMP8924[38].typ = (&NTI108);
TMP8924[38].name = "maxFrameLen";
TMP8927[12] = &TMP8924[39];
TMP8924[39].kind = 1;
TMP8924[39].offset = offsetof(Tcproc457034, module);
TMP8924[39].typ = (&NTI457028);
TMP8924[39].name = "module";
TMP8927[13] = &TMP8924[40];
TMP8924[40].kind = 1;
TMP8924[40].offset = offsetof(Tcproc457034, withinloop);
TMP8924[40].typ = (&NTI108);
TMP8924[40].name = "withinLoop";
TMP8927[14] = &TMP8924[41];
TMP8924[41].kind = 1;
TMP8924[41].offset = offsetof(Tcproc457034, splitdecls);
TMP8924[41].typ = (&NTI108);
TMP8924[41].name = "splitDecls";
TMP8927[15] = &TMP8924[42];
TMP8924[42].kind = 1;
TMP8924[42].offset = offsetof(Tcproc457034, gcframeid);
TMP8924[42].typ = (&NTI3407);
TMP8924[42].name = "gcFrameId";
TMP8927[16] = &TMP8924[43];
TMP8924[43].kind = 1;
TMP8924[43].offset = offsetof(Tcproc457034, gcframetype);
TMP8924[43].typ = (&NTI161007);
TMP8924[43].name = "gcFrameType";
TMP8924[18].len = 17; TMP8924[18].kind = 2; TMP8924[18].sons = &TMP8927[0];
NTI457034.node = &TMP8924[18];
NTI457030.size = sizeof(Tcproc457034*);
NTI457030.kind = 22;
NTI457030.base = (&NTI457034);
NTI457030.marker = TMP8930;
TMP8924[17].kind = 1;
TMP8924[17].offset = offsetof(Tcgen457038, initproc);
TMP8924[17].typ = (&NTI457030);
TMP8924[17].name = "initProc";
TMP8926[17] = &TMP8924[44];
TMP8924[44].kind = 1;
TMP8924[44].offset = offsetof(Tcgen457038, postinitproc);
TMP8924[44].typ = (&NTI457030);
TMP8924[44].name = "postInitProc";
TMP8926[18] = &TMP8924[45];
TMP8924[45].kind = 1;
TMP8924[45].offset = offsetof(Tcgen457038, preinitproc);
TMP8924[45].typ = (&NTI457030);
TMP8924[45].name = "preInitProc";
TMP8926[19] = &TMP8924[46];
TMP8924[46].kind = 1;
TMP8924[46].offset = offsetof(Tcgen457038, typestack);
TMP8924[46].typ = (&NTI191845);
TMP8924[46].name = "typeStack";
TMP8926[20] = &TMP8924[47];
TMP8924[47].kind = 1;
TMP8924[47].offset = offsetof(Tcgen457038, datacache);
TMP8924[47].typ = (&NTI191873);
TMP8924[47].name = "dataCache";
TMP8926[21] = &TMP8924[48];
TMP8924[48].kind = 1;
TMP8924[48].offset = offsetof(Tcgen457038, forwardedprocs);
TMP8924[48].typ = (&NTI191815);
TMP8924[48].name = "forwardedProcs";
TMP8926[22] = &TMP8924[49];
TMP8924[49].kind = 1;
TMP8924[49].offset = offsetof(Tcgen457038, typenodes);
TMP8924[49].typ = (&NTI108);
TMP8924[49].name = "typeNodes";
TMP8926[23] = &TMP8924[50];
TMP8924[50].kind = 1;
TMP8924[50].offset = offsetof(Tcgen457038, nimtypes);
TMP8924[50].typ = (&NTI108);
TMP8924[50].name = "nimTypes";
TMP8926[24] = &TMP8924[51];
TMP8924[51].kind = 1;
TMP8924[51].offset = offsetof(Tcgen457038, typenodesname);
TMP8924[51].typ = (&NTI161007);
TMP8924[51].name = "typeNodesName";
TMP8926[25] = &TMP8924[52];
TMP8924[52].kind = 1;
TMP8924[52].offset = offsetof(Tcgen457038, nimtypesname);
TMP8924[52].typ = (&NTI161007);
TMP8924[52].name = "nimTypesName";
TMP8926[26] = &TMP8924[53];
TMP8924[53].kind = 1;
TMP8924[53].offset = offsetof(Tcgen457038, labels);
TMP8924[53].typ = (&NTI3407);
TMP8924[53].name = "labels";
TMP8926[27] = &TMP8924[54];
NTI457143.size = sizeof(TY457143);
NTI457143.kind = 16;
NTI457143.base = (&NTI161007);
NTI457143.flags = 2;
TMP8924[54].kind = 1;
TMP8924[54].offset = offsetof(Tcgen457038, extensionloaders);
TMP8924[54].typ = (&NTI457143);
TMP8924[54].name = "extensionLoaders";
TMP8926[28] = &TMP8924[55];
TMP8924[55].kind = 1;
TMP8924[55].offset = offsetof(Tcgen457038, injectstmt);
TMP8924[55].typ = (&NTI161007);
TMP8924[55].name = "injectStmt";
TMP8924[0].len = 29; TMP8924[0].kind = 2; TMP8924[0].sons = &TMP8926[0];
NTI457038.node = &TMP8924[0];
NTI457028.size = sizeof(Tcgen457038*);
NTI457028.kind = 22;
NTI457028.base = (&NTI457038);
NTI457028.marker = TMP8932;
NTI457155.size = sizeof(TY457155*);
NTI457155.kind = 24;
NTI457155.base = (&NTI457028);
NTI457155.marker = TMP8933;
}

