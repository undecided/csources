/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct Ropeobj159009 Ropeobj159009;
typedef struct TY455155 TY455155;
typedef struct Tcgen455038 Tcgen455038;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tpasscontext240005 Tpasscontext240005;
typedef struct TNimObject TNimObject;
typedef struct Tsym189843 Tsym189843;
typedef struct NimStringDesc NimStringDesc;
typedef struct Tidtable189861 Tidtable189861;
typedef struct Tidpairseq189859 Tidpairseq189859;
typedef struct Intset186056 Intset186056;
typedef struct Ttrunk186052 Ttrunk186052;
typedef struct Ttrunkseq186054 Ttrunkseq186054;
typedef struct Tlinkedlist129028 Tlinkedlist129028;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct Tcproc455034 Tcproc455034;
typedef struct Ttypeseq189845 Ttypeseq189845;
typedef struct Tnodetable189873 Tnodetable189873;
typedef struct Tnodepairseq189871 Tnodepairseq189871;
typedef struct Tsymseq189815 Tsymseq189815;
typedef struct Tlineinfo161338 Tlineinfo161338;
typedef struct Tnodeseq189807 Tnodeseq189807;
typedef struct TY159599 TY159599;
typedef struct TY455106 TY455106;
typedef struct Tblock455032 Tblock455032;
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
typedef struct Tidobj165015 Tidobj165015;
typedef struct Tscope189837 Tscope189837;
typedef struct TY189944 TY189944;
typedef struct Tstrtable189817 Tstrtable189817;
typedef struct Ttype189849 Ttype189849;
typedef struct Tident165021 Tident165021;
typedef struct Tnode189813 Tnode189813;
typedef struct Tloc189827 Tloc189827;
typedef struct Tlib189831 Tlib189831;
typedef struct Tidpair189857 Tidpair189857;
typedef struct Tnodepair189869 Tnodepair189869;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct Tinstantiation189833 Tinstantiation189833;
typedef struct TY189933 TY189933;
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
struct  Tpasscontext240005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef Ropeobj159009* Tcfilesections455022[18];
struct  Tidtable189861  {
NI counter;
Tidpairseq189859* data;
};
struct  Intset186056  {
NI counter;
NI max;
Ttrunk186052* head;
Ttrunkseq186054* data;
};
struct  Tlinkedlist129028  {
Tlistentry129022* head;
Tlistentry129022* tail;
NI counter;
};
struct  Tnodetable189873  {
NI counter;
Tnodepairseq189871* data;
};
typedef Ropeobj159009* TY455143[10];
struct  Tcgen455038  {
  Tpasscontext240005 Sup;
Tsym189843* module;
NimStringDesc* filename;
Tcfilesections455022 s;
NIM_BOOL preventstacktrace;
NIM_BOOL usesthreadvars;
NIM_BOOL framedeclared;
NIM_BOOL isheaderfile;
NIM_BOOL includesstringh;
NIM_BOOL objhaskidsvalid;
NimStringDesc* cfilename;
Tidtable189861 typecache;
Tidtable189861 forwtypecache;
Intset186056 declaredthings;
Intset186056 declaredprotos;
Tlinkedlist129028 headerfiles;
Intset186056 typeinfomarker;
Tcproc455034* initproc;
Tcproc455034* postinitproc;
Tcproc455034* preinitproc;
Ttypeseq189845* typestack;
Tnodetable189873 datacache;
Tsymseq189815* forwardedprocs;
NI typenodes;
NI nimtypes;
Ropeobj159009* typenodesname;
Ropeobj159009* nimtypesname;
NI labels;
TY455143 extensionloaders;
Ropeobj159009* injectstmt;
};
struct  Tlineinfo161338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tcproc455034  {
Tsym189843* prc;
NIM_BOOL beforeretneeded;
NIM_BOOL threadvaraccessed;
Tlineinfo161338 lastlineinfo;
Tnodeseq189807* nestedtrystmts;
NI inexceptblock;
TY159599* finallysafepoints;
NI labels;
TY455106* blocks;
NI breakidx;
NU32 options;
NI maxframelen;
Tcgen455038* module;
NI withinloop;
NI splitdecls;
NI gcframeid;
Ropeobj159009* gcframetype;
};
typedef Ropeobj159009* Tcprocsections455026[3];
struct  Tblock455032  {
NI id;
Ropeobj159009* label;
Tcprocsections455026 sections;
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
struct  Ropeobj159009  {
  TNimObject Sup;
Ropeobj159009* left;
Ropeobj159009* right;
NI length;
NimStringDesc* data;
};
struct  Tidpair189857  {
Tidobj165015* key;
TNimObject* val;
};
typedef NI TY27820[16];
struct  Ttrunk186052  {
Ttrunk186052* next;
NI key;
TY27820 bits;
};
struct  Tlistentry129022  {
  TNimObject Sup;
Tlistentry129022* prev;
Tlistentry129022* next;
};
struct  Tnodepair189869  {
NI h;
Tnode189813* key;
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
struct  Tscope189837  {
NI depthlevel;
Tstrtable189817 symbols;
Tnodeseq189807* usingsyms;
Tscope189837* parent;
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
struct  Tident165021  {
  Tidobj165015 Sup;
NimStringDesc* s;
Tident165021* next;
NI h;
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
struct TY455155 {
  TGenericSeq Sup;
  Tcgen455038* data[SEQ_DECL_SIZE];
};
struct TY455106 {
  TGenericSeq Sup;
  Tblock455032 data[SEQ_DECL_SIZE];
};
struct Tnodeseq189807 {
  TGenericSeq Sup;
  Tnode189813* data[SEQ_DECL_SIZE];
};
struct TY159599 {
  TGenericSeq Sup;
  Ropeobj159009* data[SEQ_DECL_SIZE];
};
struct Tidpairseq189859 {
  TGenericSeq Sup;
  Tidpair189857 data[SEQ_DECL_SIZE];
};
struct Ttrunkseq186054 {
  TGenericSeq Sup;
  Ttrunk186052* data[SEQ_DECL_SIZE];
};
struct Ttypeseq189845 {
  TGenericSeq Sup;
  Ttype189849* data[SEQ_DECL_SIZE];
};
struct Tnodepairseq189871 {
  TGenericSeq Sup;
  Tnodepair189869 data[SEQ_DECL_SIZE];
};
struct Tsymseq189815 {
  TGenericSeq Sup;
  Tsym189843* data[SEQ_DECL_SIZE];
};
struct TY189944 {
  TGenericSeq Sup;
  Tinstantiation189833* data[SEQ_DECL_SIZE];
};
struct TY189933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP8917)(void* p, NI op);
N_NIMCALL(void, TMP8918)(void* p, NI op);
N_NIMCALL(void, TMP8920)(void* p, NI op);
N_NIMCALL(void, TMP8921)(void* p, NI op);
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
static N_INLINE(Ropeobj159009**, s_455184)(Tcproc455034* p, NU8 s);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(Ropeobj159009**, procsec_455205)(Tcproc455034* p, NU8 s);
N_NIMCALL(Tcgen455038*, bmod_455218)(Tsym189843* module);
N_NIMCALL(Tcproc455034*, newproc_455229)(Tsym189843* prc, Tcgen455038* module);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52622)(Tcell46747* c);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
Ropeobj159009* mainmodprocs_455150;
Ropeobj159009* mainmodinit_455151;
Ropeobj159009* othermodsinit_455152;
Ropeobj159009* maindatinit_455153;
Ropeobj159009* gmapping_455154;
TY455155* gmodules_455172;
extern TNimType NTI240005; /* TPassContext */
TNimType NTI455038; /* TCGen */
extern TNimType NTI189811; /* PSym */
extern TNimType NTI149; /* string */
extern TNimType NTI159007; /* Rope */
TNimType NTI455022; /* TCFileSections */
extern TNimType NTI138; /* bool */
extern TNimType NTI189861; /* TIdTable */
extern TNimType NTI186056; /* IntSet */
extern TNimType NTI129028; /* TLinkedList */
TNimType NTI455034; /* TCProc */
extern TNimType NTI161338; /* TLineInfo */
extern TNimType NTI189807; /* TNodeSeq */
extern TNimType NTI108; /* int */
extern TNimType NTI159599; /* seq[Rope] */
extern TNimType NTI3407; /* Natural */
TNimType NTI455032; /* TBlock */
TNimType NTI455026; /* TCProcSections */
extern TNimType NTI112; /* int16 */
TNimType NTI455106; /* seq[TBlock] */
extern TNimType NTI152121; /* set[TOption] */
TNimType NTI455030; /* BProc */
extern TNimType NTI189845; /* TTypeSeq */
extern TNimType NTI189873; /* TNodeTable */
extern TNimType NTI189815; /* TSymSeq */
TNimType NTI455143; /* array[48..57, Rope] */
TNimType NTI455028; /* BModule */
TNimType NTI455155; /* seq[BModule] */
extern Tgcheap48616 gch_48644;
extern TFrame* frameptr_17042;
NI gforwardedprocscounter_455173;
extern NU32 goptions_152126;
N_NIMCALL(void, TMP8917)(void* p, NI op) {
	TY455106* a;
	NI LOC1;
	NI LOC2;
	a = (TY455106*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].label, op);
	LOC2 = 0;
	for (LOC2 = 0; LOC2 < 3; LOC2++) {
	nimGCvisit((void*)a->data[LOC1].sections[LOC2], op);
	}
	}
}
N_NIMCALL(void, TMP8918)(void* p, NI op) {
	Tcproc455034* a;
	a = (Tcproc455034*)p;
	nimGCvisit((void*)(*a).prc, op);
	nimGCvisit((void*)(*a).nestedtrystmts, op);
	nimGCvisit((void*)(*a).finallysafepoints, op);
	nimGCvisit((void*)(*a).blocks, op);
	nimGCvisit((void*)(*a).module, op);
	nimGCvisit((void*)(*a).gcframetype, op);
}
N_NIMCALL(void, TMP8920)(void* p, NI op) {
	Tcgen455038* a;
	NI LOC1;
	NI LOC2;
	a = (Tcgen455038*)p;
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
N_NIMCALL(void, TMP8921)(void* p, NI op) {
	TY455155* a;
	NI LOC1;
	a = (TY455155*)p;
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

static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr) {
	Tcell46747* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	result = ((Tcell46747*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46747))))));
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

static N_INLINE(Ropeobj159009**, s_455184)(Tcproc455034* p, NU8 s) {
	Ropeobj159009** result;
	NI TMP8922;
	nimfr("s", "cgendata.nim")
	result = 0;
	nimln(136, "cgendata.nim");
	TMP8922 = subInt(((*p).blocks ? (*p).blocks->Sup.len : 0), ((NI) 1));
	if ((NU)((NI)(TMP8922)) >= (NU)((*p).blocks->Sup.len)) raiseIndexError();
	result = &(*p).blocks->data[(NI)(TMP8922)].sections[(s)- 0];
	popFrame();
	return result;
}

static N_INLINE(Ropeobj159009**, procsec_455205)(Tcproc455034* p, NU8 s) {
	Ropeobj159009** result;
	nimfr("procSec", "cgendata.nim")
	result = 0;
	nimln(140, "cgendata.nim");
	if ((NU)(((NI) 0)) >= (NU)((*p).blocks->Sup.len)) raiseIndexError();
	result = &(*p).blocks->data[((NI) 0)].sections[(s)- 0];
	popFrame();
	return result;
}

N_NIMCALL(Tcgen455038*, bmod_455218)(Tsym189843* module) {
	Tcgen455038* result;
	nimfr("bmod", "cgendata.nim")
	result = 0;
	nimln(144, "cgendata.nim");
	if ((NU)((*module).position) >= (NU)(gmodules_455172->Sup.len)) raiseIndexError();
	result = gmodules_455172->data[(*module).position];
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

N_NIMCALL(Tcproc455034*, newproc_455229)(Tsym189843* prc, Tcgen455038* module) {
	Tcproc455034* result;
	nimfr("newProc", "cgendata.nim")
	result = 0;
	nimln(147, "cgendata.nim");
	result = (Tcproc455034*) newObj((&NTI455030), sizeof(Tcproc455034));
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
		(*result).options = goptions_152126;
	}
	LA1: ;
	nimln(152, "cgendata.nim");
	if ((*result).blocks) nimGCunrefNoCycle((*result).blocks);
	(*result).blocks = (TY455106*) newSeqRC1((&NTI455106), ((NI) 1));
	nimln(153, "cgendata.nim");
	if ((*result).nestedtrystmts) nimGCunrefNoCycle((*result).nestedtrystmts);
	(*result).nestedtrystmts = (Tnodeseq189807*) newSeqRC1((&NTI189807), 0);
	nimln(154, "cgendata.nim");
	if ((*result).finallysafepoints) nimGCunrefNoCycle((*result).finallysafepoints);
	(*result).finallysafepoints = (TY159599*) newSeqRC1((&NTI159599), 0);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_cgendataInit)(void) {
	nimfr("cgendata", "cgendata.nim")
	nimln(131, "cgendata.nim");
	if (gmodules_455172) nimGCunref(gmodules_455172);
	gmodules_455172 = (TY455155*) newSeqRC1((&NTI455155), 0);
	nimln(132, "cgendata.nim");
	gforwardedprocscounter_455173 = ((NI) 0);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_cgendataDatInit)(void) {
static TNimNode* TMP8914[29];
static TNimNode* TMP8915[17];
static TNimNode* TMP8916[7];
static TNimNode TMP8912[56];
NTI455038.size = sizeof(Tcgen455038);
NTI455038.kind = 17;
NTI455038.base = (&NTI240005);
TMP8914[0] = &TMP8912[1];
TMP8912[1].kind = 1;
TMP8912[1].offset = offsetof(Tcgen455038, module);
TMP8912[1].typ = (&NTI189811);
TMP8912[1].name = "module";
TMP8914[1] = &TMP8912[2];
TMP8912[2].kind = 1;
TMP8912[2].offset = offsetof(Tcgen455038, filename);
TMP8912[2].typ = (&NTI149);
TMP8912[2].name = "filename";
TMP8914[2] = &TMP8912[3];
NTI455022.size = sizeof(Tcfilesections455022);
NTI455022.kind = 16;
NTI455022.base = (&NTI159007);
NTI455022.flags = 2;
TMP8912[3].kind = 1;
TMP8912[3].offset = offsetof(Tcgen455038, s);
TMP8912[3].typ = (&NTI455022);
TMP8912[3].name = "s";
TMP8914[3] = &TMP8912[4];
TMP8912[4].kind = 1;
TMP8912[4].offset = offsetof(Tcgen455038, preventstacktrace);
TMP8912[4].typ = (&NTI138);
TMP8912[4].name = "preventStackTrace";
TMP8914[4] = &TMP8912[5];
TMP8912[5].kind = 1;
TMP8912[5].offset = offsetof(Tcgen455038, usesthreadvars);
TMP8912[5].typ = (&NTI138);
TMP8912[5].name = "usesThreadVars";
TMP8914[5] = &TMP8912[6];
TMP8912[6].kind = 1;
TMP8912[6].offset = offsetof(Tcgen455038, framedeclared);
TMP8912[6].typ = (&NTI138);
TMP8912[6].name = "frameDeclared";
TMP8914[6] = &TMP8912[7];
TMP8912[7].kind = 1;
TMP8912[7].offset = offsetof(Tcgen455038, isheaderfile);
TMP8912[7].typ = (&NTI138);
TMP8912[7].name = "isHeaderFile";
TMP8914[7] = &TMP8912[8];
TMP8912[8].kind = 1;
TMP8912[8].offset = offsetof(Tcgen455038, includesstringh);
TMP8912[8].typ = (&NTI138);
TMP8912[8].name = "includesStringh";
TMP8914[8] = &TMP8912[9];
TMP8912[9].kind = 1;
TMP8912[9].offset = offsetof(Tcgen455038, objhaskidsvalid);
TMP8912[9].typ = (&NTI138);
TMP8912[9].name = "objHasKidsValid";
TMP8914[9] = &TMP8912[10];
TMP8912[10].kind = 1;
TMP8912[10].offset = offsetof(Tcgen455038, cfilename);
TMP8912[10].typ = (&NTI149);
TMP8912[10].name = "cfilename";
TMP8914[10] = &TMP8912[11];
TMP8912[11].kind = 1;
TMP8912[11].offset = offsetof(Tcgen455038, typecache);
TMP8912[11].typ = (&NTI189861);
TMP8912[11].name = "typeCache";
TMP8914[11] = &TMP8912[12];
TMP8912[12].kind = 1;
TMP8912[12].offset = offsetof(Tcgen455038, forwtypecache);
TMP8912[12].typ = (&NTI189861);
TMP8912[12].name = "forwTypeCache";
TMP8914[12] = &TMP8912[13];
TMP8912[13].kind = 1;
TMP8912[13].offset = offsetof(Tcgen455038, declaredthings);
TMP8912[13].typ = (&NTI186056);
TMP8912[13].name = "declaredThings";
TMP8914[13] = &TMP8912[14];
TMP8912[14].kind = 1;
TMP8912[14].offset = offsetof(Tcgen455038, declaredprotos);
TMP8912[14].typ = (&NTI186056);
TMP8912[14].name = "declaredProtos";
TMP8914[14] = &TMP8912[15];
TMP8912[15].kind = 1;
TMP8912[15].offset = offsetof(Tcgen455038, headerfiles);
TMP8912[15].typ = (&NTI129028);
TMP8912[15].name = "headerFiles";
TMP8914[15] = &TMP8912[16];
TMP8912[16].kind = 1;
TMP8912[16].offset = offsetof(Tcgen455038, typeinfomarker);
TMP8912[16].typ = (&NTI186056);
TMP8912[16].name = "typeInfoMarker";
TMP8914[16] = &TMP8912[17];
NTI455034.size = sizeof(Tcproc455034);
NTI455034.kind = 18;
NTI455034.base = 0;
TMP8915[0] = &TMP8912[19];
TMP8912[19].kind = 1;
TMP8912[19].offset = offsetof(Tcproc455034, prc);
TMP8912[19].typ = (&NTI189811);
TMP8912[19].name = "prc";
TMP8915[1] = &TMP8912[20];
TMP8912[20].kind = 1;
TMP8912[20].offset = offsetof(Tcproc455034, beforeretneeded);
TMP8912[20].typ = (&NTI138);
TMP8912[20].name = "beforeRetNeeded";
TMP8915[2] = &TMP8912[21];
TMP8912[21].kind = 1;
TMP8912[21].offset = offsetof(Tcproc455034, threadvaraccessed);
TMP8912[21].typ = (&NTI138);
TMP8912[21].name = "threadVarAccessed";
TMP8915[3] = &TMP8912[22];
TMP8912[22].kind = 1;
TMP8912[22].offset = offsetof(Tcproc455034, lastlineinfo);
TMP8912[22].typ = (&NTI161338);
TMP8912[22].name = "lastLineInfo";
TMP8915[4] = &TMP8912[23];
TMP8912[23].kind = 1;
TMP8912[23].offset = offsetof(Tcproc455034, nestedtrystmts);
TMP8912[23].typ = (&NTI189807);
TMP8912[23].name = "nestedTryStmts";
TMP8915[5] = &TMP8912[24];
TMP8912[24].kind = 1;
TMP8912[24].offset = offsetof(Tcproc455034, inexceptblock);
TMP8912[24].typ = (&NTI108);
TMP8912[24].name = "inExceptBlock";
TMP8915[6] = &TMP8912[25];
TMP8912[25].kind = 1;
TMP8912[25].offset = offsetof(Tcproc455034, finallysafepoints);
TMP8912[25].typ = (&NTI159599);
TMP8912[25].name = "finallySafePoints";
TMP8915[7] = &TMP8912[26];
TMP8912[26].kind = 1;
TMP8912[26].offset = offsetof(Tcproc455034, labels);
TMP8912[26].typ = (&NTI3407);
TMP8912[26].name = "labels";
TMP8915[8] = &TMP8912[27];
NTI455032.size = sizeof(Tblock455032);
NTI455032.kind = 18;
NTI455032.base = 0;
NTI455032.flags = 2;
TMP8916[0] = &TMP8912[29];
TMP8912[29].kind = 1;
TMP8912[29].offset = offsetof(Tblock455032, id);
TMP8912[29].typ = (&NTI108);
TMP8912[29].name = "id";
TMP8916[1] = &TMP8912[30];
TMP8912[30].kind = 1;
TMP8912[30].offset = offsetof(Tblock455032, label);
TMP8912[30].typ = (&NTI159007);
TMP8912[30].name = "label";
TMP8916[2] = &TMP8912[31];
NTI455026.size = sizeof(Tcprocsections455026);
NTI455026.kind = 16;
NTI455026.base = (&NTI159007);
NTI455026.flags = 2;
TMP8912[31].kind = 1;
TMP8912[31].offset = offsetof(Tblock455032, sections);
TMP8912[31].typ = (&NTI455026);
TMP8912[31].name = "sections";
TMP8916[3] = &TMP8912[32];
TMP8912[32].kind = 1;
TMP8912[32].offset = offsetof(Tblock455032, isloop);
TMP8912[32].typ = (&NTI138);
TMP8912[32].name = "isLoop";
TMP8916[4] = &TMP8912[33];
TMP8912[33].kind = 1;
TMP8912[33].offset = offsetof(Tblock455032, nestedtrystmts);
TMP8912[33].typ = (&NTI112);
TMP8912[33].name = "nestedTryStmts";
TMP8916[5] = &TMP8912[34];
TMP8912[34].kind = 1;
TMP8912[34].offset = offsetof(Tblock455032, nestedexceptstmts);
TMP8912[34].typ = (&NTI112);
TMP8912[34].name = "nestedExceptStmts";
TMP8916[6] = &TMP8912[35];
TMP8912[35].kind = 1;
TMP8912[35].offset = offsetof(Tblock455032, framelen);
TMP8912[35].typ = (&NTI112);
TMP8912[35].name = "frameLen";
TMP8912[28].len = 7; TMP8912[28].kind = 2; TMP8912[28].sons = &TMP8916[0];
NTI455032.node = &TMP8912[28];
NTI455106.size = sizeof(TY455106*);
NTI455106.kind = 24;
NTI455106.base = (&NTI455032);
NTI455106.flags = 2;
NTI455106.marker = TMP8917;
TMP8912[27].kind = 1;
TMP8912[27].offset = offsetof(Tcproc455034, blocks);
TMP8912[27].typ = (&NTI455106);
TMP8912[27].name = "blocks";
TMP8915[9] = &TMP8912[36];
TMP8912[36].kind = 1;
TMP8912[36].offset = offsetof(Tcproc455034, breakidx);
TMP8912[36].typ = (&NTI108);
TMP8912[36].name = "breakIdx";
TMP8915[10] = &TMP8912[37];
TMP8912[37].kind = 1;
TMP8912[37].offset = offsetof(Tcproc455034, options);
TMP8912[37].typ = (&NTI152121);
TMP8912[37].name = "options";
TMP8915[11] = &TMP8912[38];
TMP8912[38].kind = 1;
TMP8912[38].offset = offsetof(Tcproc455034, maxframelen);
TMP8912[38].typ = (&NTI108);
TMP8912[38].name = "maxFrameLen";
TMP8915[12] = &TMP8912[39];
TMP8912[39].kind = 1;
TMP8912[39].offset = offsetof(Tcproc455034, module);
TMP8912[39].typ = (&NTI455028);
TMP8912[39].name = "module";
TMP8915[13] = &TMP8912[40];
TMP8912[40].kind = 1;
TMP8912[40].offset = offsetof(Tcproc455034, withinloop);
TMP8912[40].typ = (&NTI108);
TMP8912[40].name = "withinLoop";
TMP8915[14] = &TMP8912[41];
TMP8912[41].kind = 1;
TMP8912[41].offset = offsetof(Tcproc455034, splitdecls);
TMP8912[41].typ = (&NTI108);
TMP8912[41].name = "splitDecls";
TMP8915[15] = &TMP8912[42];
TMP8912[42].kind = 1;
TMP8912[42].offset = offsetof(Tcproc455034, gcframeid);
TMP8912[42].typ = (&NTI3407);
TMP8912[42].name = "gcFrameId";
TMP8915[16] = &TMP8912[43];
TMP8912[43].kind = 1;
TMP8912[43].offset = offsetof(Tcproc455034, gcframetype);
TMP8912[43].typ = (&NTI159007);
TMP8912[43].name = "gcFrameType";
TMP8912[18].len = 17; TMP8912[18].kind = 2; TMP8912[18].sons = &TMP8915[0];
NTI455034.node = &TMP8912[18];
NTI455030.size = sizeof(Tcproc455034*);
NTI455030.kind = 22;
NTI455030.base = (&NTI455034);
NTI455030.marker = TMP8918;
TMP8912[17].kind = 1;
TMP8912[17].offset = offsetof(Tcgen455038, initproc);
TMP8912[17].typ = (&NTI455030);
TMP8912[17].name = "initProc";
TMP8914[17] = &TMP8912[44];
TMP8912[44].kind = 1;
TMP8912[44].offset = offsetof(Tcgen455038, postinitproc);
TMP8912[44].typ = (&NTI455030);
TMP8912[44].name = "postInitProc";
TMP8914[18] = &TMP8912[45];
TMP8912[45].kind = 1;
TMP8912[45].offset = offsetof(Tcgen455038, preinitproc);
TMP8912[45].typ = (&NTI455030);
TMP8912[45].name = "preInitProc";
TMP8914[19] = &TMP8912[46];
TMP8912[46].kind = 1;
TMP8912[46].offset = offsetof(Tcgen455038, typestack);
TMP8912[46].typ = (&NTI189845);
TMP8912[46].name = "typeStack";
TMP8914[20] = &TMP8912[47];
TMP8912[47].kind = 1;
TMP8912[47].offset = offsetof(Tcgen455038, datacache);
TMP8912[47].typ = (&NTI189873);
TMP8912[47].name = "dataCache";
TMP8914[21] = &TMP8912[48];
TMP8912[48].kind = 1;
TMP8912[48].offset = offsetof(Tcgen455038, forwardedprocs);
TMP8912[48].typ = (&NTI189815);
TMP8912[48].name = "forwardedProcs";
TMP8914[22] = &TMP8912[49];
TMP8912[49].kind = 1;
TMP8912[49].offset = offsetof(Tcgen455038, typenodes);
TMP8912[49].typ = (&NTI108);
TMP8912[49].name = "typeNodes";
TMP8914[23] = &TMP8912[50];
TMP8912[50].kind = 1;
TMP8912[50].offset = offsetof(Tcgen455038, nimtypes);
TMP8912[50].typ = (&NTI108);
TMP8912[50].name = "nimTypes";
TMP8914[24] = &TMP8912[51];
TMP8912[51].kind = 1;
TMP8912[51].offset = offsetof(Tcgen455038, typenodesname);
TMP8912[51].typ = (&NTI159007);
TMP8912[51].name = "typeNodesName";
TMP8914[25] = &TMP8912[52];
TMP8912[52].kind = 1;
TMP8912[52].offset = offsetof(Tcgen455038, nimtypesname);
TMP8912[52].typ = (&NTI159007);
TMP8912[52].name = "nimTypesName";
TMP8914[26] = &TMP8912[53];
TMP8912[53].kind = 1;
TMP8912[53].offset = offsetof(Tcgen455038, labels);
TMP8912[53].typ = (&NTI3407);
TMP8912[53].name = "labels";
TMP8914[27] = &TMP8912[54];
NTI455143.size = sizeof(TY455143);
NTI455143.kind = 16;
NTI455143.base = (&NTI159007);
NTI455143.flags = 2;
TMP8912[54].kind = 1;
TMP8912[54].offset = offsetof(Tcgen455038, extensionloaders);
TMP8912[54].typ = (&NTI455143);
TMP8912[54].name = "extensionLoaders";
TMP8914[28] = &TMP8912[55];
TMP8912[55].kind = 1;
TMP8912[55].offset = offsetof(Tcgen455038, injectstmt);
TMP8912[55].typ = (&NTI159007);
TMP8912[55].name = "injectStmt";
TMP8912[0].len = 29; TMP8912[0].kind = 2; TMP8912[0].sons = &TMP8914[0];
NTI455038.node = &TMP8912[0];
NTI455028.size = sizeof(Tcgen455038*);
NTI455028.kind = 22;
NTI455028.base = (&NTI455038);
NTI455028.marker = TMP8920;
NTI455155.size = sizeof(TY455155*);
NTI455155.kind = 24;
NTI455155.base = (&NTI455028);
NTI455155.marker = TMP8921;
}

