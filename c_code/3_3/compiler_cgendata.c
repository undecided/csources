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
typedef struct Tcell46946 Tcell46946;
typedef struct Tcellseq46962 Tcellseq46962;
typedef struct Tgcheap48816 Tgcheap48816;
typedef struct Tcellset46958 Tcellset46958;
typedef struct Tpagedesc46954 Tpagedesc46954;
typedef struct Tmemregion28810 Tmemregion28810;
typedef struct Tsmallchunk28040 Tsmallchunk28040;
typedef struct Tllchunk28804 Tllchunk28804;
typedef struct Tbigchunk28042 Tbigchunk28042;
typedef struct Tintset28017 Tintset28017;
typedef struct Ttrunk28013 Ttrunk28013;
typedef struct Tavlnode28808 Tavlnode28808;
typedef struct Tgcstat48814 Tgcstat48814;
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
typedef struct Tbasechunk28038 Tbasechunk28038;
typedef struct Tfreecell28030 Tfreecell28030;
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
struct  Tcell46946  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46962  {
NI len;
NI cap;
Tcell46946** d;
};
struct  Tcellset46958  {
NI counter;
NI max;
Tpagedesc46954* head;
Tpagedesc46954** data;
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
Tcellseq46962 zct;
Tcellseq46962 decstack;
Tcellset46958 cycleroots;
Tcellseq46962 tempstack;
NI recgclock;
Tmemregion28810 region;
Tgcstat48814 stat;
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
typedef NI TY28020[8];
struct  Ttrunk187052  {
Ttrunk187052* next;
NI key;
TY28020 bits;
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
struct  Tpagedesc46954  {
Tpagedesc46954* next;
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
struct  Tfreecell28030  {
Tfreecell28030* next;
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
N_NIMCALL(void, TMP8920)(void* p, NI op);
N_NIMCALL(void, TMP8921)(void* p, NI op);
N_NIMCALL(void, TMP8923)(void* p, NI op);
N_NIMCALL(void, TMP8924)(void* p, NI op);
static N_INLINE(void, nimGCunref)(void* p);
static N_INLINE(void, decref_52404)(Tcell46946* c);
static N_INLINE(void, rtladdzct_52004)(Tcell46946* c);
N_NOINLINE(void, addzct_50417)(Tcellseq46962* s, Tcell46946* c);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20201)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL, canbecycleroot_50467)(Tcell46946* c);
static N_INLINE(void, rtladdcycleroot_51223)(Tcell46946* c);
N_NOINLINE(void, incl_47665)(Tcellset46958* s, Tcell46946* cell);
static N_INLINE(Tcell46946*, usrtocell_50446)(void* usr);
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
static N_INLINE(void, incref_52822)(Tcell46946* c);
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
extern Tgcheap48816 gch_48844;
extern TFrame* frameptr_17242;
NI gforwardedprocscounter_456173;
extern NU32 goptions_153126;
N_NIMCALL(void, TMP8920)(void* p, NI op) {
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
N_NIMCALL(void, TMP8921)(void* p, NI op) {
	Tcproc456034* a;
	a = (Tcproc456034*)p;
	nimGCvisit((void*)(*a).prc, op);
	nimGCvisit((void*)(*a).nestedtrystmts, op);
	nimGCvisit((void*)(*a).finallysafepoints, op);
	nimGCvisit((void*)(*a).blocks, op);
	nimGCvisit((void*)(*a).module, op);
	nimGCvisit((void*)(*a).gcframetype, op);
}
N_NIMCALL(void, TMP8923)(void* p, NI op) {
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
N_NIMCALL(void, TMP8924)(void* p, NI op) {
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

static N_INLINE(void, rtladdzct_52004)(Tcell46946* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_50417((&gch_48844.zct), c);
	popFrame();
}

static N_INLINE(NIM_BOOL, canbecycleroot_50467)(Tcell46946* c) {
	NIM_BOOL result;
	nimfr("canBeCycleRoot", "gc.nim")
	result = 0;
	nimln(121, "gc.nim");
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdcycleroot_51223)(Tcell46946* c) {
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

static N_INLINE(void, decref_52404)(Tcell46946* c) {
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

static N_INLINE(Tcell46946*, usrtocell_50446)(void* usr) {
	Tcell46946* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	result = ((Tcell46946*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46946))))));
	popFrame();
	return result;
}

static N_INLINE(void, nimGCunref)(void* p) {
	Tcell46946* LOC1;
	nimfr("nimGCunref", "gc.nim")
	nimln(223, "gc.nim");
	LOC1 = 0;
	LOC1 = usrtocell_50446(p);
	decref_52404(LOC1);
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
	NI TMP8925;
	nimfr("s", "cgendata.nim")
	result = 0;
	nimln(136, "cgendata.nim");
	TMP8925 = subInt(((*p).blocks ? (*p).blocks->Sup.len : 0), ((NI) 1));
	if ((NU)((NI)(TMP8925)) >= (NU)((*p).blocks->Sup.len)) raiseIndexError();
	result = &(*p).blocks->data[(NI)(TMP8925)].sections[(s)- 0];
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
		Tcell46946* c;
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(252, "gc.nim");
		c = usrtocell_50446(src);
		nimln(169, "gc.nim");
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	nimln(254, "gc.nim");
	{
		Tcell46946* c;
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

static N_INLINE(void, incref_52822)(Tcell46946* c) {
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
		Tcell46946* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_50446(src);
		incref_52822(LOC5);
	}
	LA3: ;
	nimln(245, "gc.nim");
	{
		Tcell46946* LOC10;
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46946* c;
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
static TNimNode* TMP8917[29];
static TNimNode* TMP8918[17];
static TNimNode* TMP8919[7];
static TNimNode TMP8915[56];
NTI456038.size = sizeof(Tcgen456038);
NTI456038.kind = 17;
NTI456038.base = (&NTI241005);
TMP8917[0] = &TMP8915[1];
TMP8915[1].kind = 1;
TMP8915[1].offset = offsetof(Tcgen456038, module);
TMP8915[1].typ = (&NTI190811);
TMP8915[1].name = "module";
TMP8917[1] = &TMP8915[2];
TMP8915[2].kind = 1;
TMP8915[2].offset = offsetof(Tcgen456038, filename);
TMP8915[2].typ = (&NTI149);
TMP8915[2].name = "filename";
TMP8917[2] = &TMP8915[3];
NTI456022.size = sizeof(Tcfilesections456022);
NTI456022.kind = 16;
NTI456022.base = (&NTI160007);
NTI456022.flags = 2;
TMP8915[3].kind = 1;
TMP8915[3].offset = offsetof(Tcgen456038, s);
TMP8915[3].typ = (&NTI456022);
TMP8915[3].name = "s";
TMP8917[3] = &TMP8915[4];
TMP8915[4].kind = 1;
TMP8915[4].offset = offsetof(Tcgen456038, preventstacktrace);
TMP8915[4].typ = (&NTI138);
TMP8915[4].name = "preventStackTrace";
TMP8917[4] = &TMP8915[5];
TMP8915[5].kind = 1;
TMP8915[5].offset = offsetof(Tcgen456038, usesthreadvars);
TMP8915[5].typ = (&NTI138);
TMP8915[5].name = "usesThreadVars";
TMP8917[5] = &TMP8915[6];
TMP8915[6].kind = 1;
TMP8915[6].offset = offsetof(Tcgen456038, framedeclared);
TMP8915[6].typ = (&NTI138);
TMP8915[6].name = "frameDeclared";
TMP8917[6] = &TMP8915[7];
TMP8915[7].kind = 1;
TMP8915[7].offset = offsetof(Tcgen456038, isheaderfile);
TMP8915[7].typ = (&NTI138);
TMP8915[7].name = "isHeaderFile";
TMP8917[7] = &TMP8915[8];
TMP8915[8].kind = 1;
TMP8915[8].offset = offsetof(Tcgen456038, includesstringh);
TMP8915[8].typ = (&NTI138);
TMP8915[8].name = "includesStringh";
TMP8917[8] = &TMP8915[9];
TMP8915[9].kind = 1;
TMP8915[9].offset = offsetof(Tcgen456038, objhaskidsvalid);
TMP8915[9].typ = (&NTI138);
TMP8915[9].name = "objHasKidsValid";
TMP8917[9] = &TMP8915[10];
TMP8915[10].kind = 1;
TMP8915[10].offset = offsetof(Tcgen456038, cfilename);
TMP8915[10].typ = (&NTI149);
TMP8915[10].name = "cfilename";
TMP8917[10] = &TMP8915[11];
TMP8915[11].kind = 1;
TMP8915[11].offset = offsetof(Tcgen456038, typecache);
TMP8915[11].typ = (&NTI190861);
TMP8915[11].name = "typeCache";
TMP8917[11] = &TMP8915[12];
TMP8915[12].kind = 1;
TMP8915[12].offset = offsetof(Tcgen456038, forwtypecache);
TMP8915[12].typ = (&NTI190861);
TMP8915[12].name = "forwTypeCache";
TMP8917[12] = &TMP8915[13];
TMP8915[13].kind = 1;
TMP8915[13].offset = offsetof(Tcgen456038, declaredthings);
TMP8915[13].typ = (&NTI187056);
TMP8915[13].name = "declaredThings";
TMP8917[13] = &TMP8915[14];
TMP8915[14].kind = 1;
TMP8915[14].offset = offsetof(Tcgen456038, declaredprotos);
TMP8915[14].typ = (&NTI187056);
TMP8915[14].name = "declaredProtos";
TMP8917[14] = &TMP8915[15];
TMP8915[15].kind = 1;
TMP8915[15].offset = offsetof(Tcgen456038, headerfiles);
TMP8915[15].typ = (&NTI130028);
TMP8915[15].name = "headerFiles";
TMP8917[15] = &TMP8915[16];
TMP8915[16].kind = 1;
TMP8915[16].offset = offsetof(Tcgen456038, typeinfomarker);
TMP8915[16].typ = (&NTI187056);
TMP8915[16].name = "typeInfoMarker";
TMP8917[16] = &TMP8915[17];
NTI456034.size = sizeof(Tcproc456034);
NTI456034.kind = 18;
NTI456034.base = 0;
TMP8918[0] = &TMP8915[19];
TMP8915[19].kind = 1;
TMP8915[19].offset = offsetof(Tcproc456034, prc);
TMP8915[19].typ = (&NTI190811);
TMP8915[19].name = "prc";
TMP8918[1] = &TMP8915[20];
TMP8915[20].kind = 1;
TMP8915[20].offset = offsetof(Tcproc456034, beforeretneeded);
TMP8915[20].typ = (&NTI138);
TMP8915[20].name = "beforeRetNeeded";
TMP8918[2] = &TMP8915[21];
TMP8915[21].kind = 1;
TMP8915[21].offset = offsetof(Tcproc456034, threadvaraccessed);
TMP8915[21].typ = (&NTI138);
TMP8915[21].name = "threadVarAccessed";
TMP8918[3] = &TMP8915[22];
TMP8915[22].kind = 1;
TMP8915[22].offset = offsetof(Tcproc456034, lastlineinfo);
TMP8915[22].typ = (&NTI162338);
TMP8915[22].name = "lastLineInfo";
TMP8918[4] = &TMP8915[23];
TMP8915[23].kind = 1;
TMP8915[23].offset = offsetof(Tcproc456034, nestedtrystmts);
TMP8915[23].typ = (&NTI190807);
TMP8915[23].name = "nestedTryStmts";
TMP8918[5] = &TMP8915[24];
TMP8915[24].kind = 1;
TMP8915[24].offset = offsetof(Tcproc456034, inexceptblock);
TMP8915[24].typ = (&NTI108);
TMP8915[24].name = "inExceptBlock";
TMP8918[6] = &TMP8915[25];
TMP8915[25].kind = 1;
TMP8915[25].offset = offsetof(Tcproc456034, finallysafepoints);
TMP8915[25].typ = (&NTI160599);
TMP8915[25].name = "finallySafePoints";
TMP8918[7] = &TMP8915[26];
TMP8915[26].kind = 1;
TMP8915[26].offset = offsetof(Tcproc456034, labels);
TMP8915[26].typ = (&NTI3407);
TMP8915[26].name = "labels";
TMP8918[8] = &TMP8915[27];
NTI456032.size = sizeof(Tblock456032);
NTI456032.kind = 18;
NTI456032.base = 0;
NTI456032.flags = 2;
TMP8919[0] = &TMP8915[29];
TMP8915[29].kind = 1;
TMP8915[29].offset = offsetof(Tblock456032, id);
TMP8915[29].typ = (&NTI108);
TMP8915[29].name = "id";
TMP8919[1] = &TMP8915[30];
TMP8915[30].kind = 1;
TMP8915[30].offset = offsetof(Tblock456032, label);
TMP8915[30].typ = (&NTI160007);
TMP8915[30].name = "label";
TMP8919[2] = &TMP8915[31];
NTI456026.size = sizeof(Tcprocsections456026);
NTI456026.kind = 16;
NTI456026.base = (&NTI160007);
NTI456026.flags = 2;
TMP8915[31].kind = 1;
TMP8915[31].offset = offsetof(Tblock456032, sections);
TMP8915[31].typ = (&NTI456026);
TMP8915[31].name = "sections";
TMP8919[3] = &TMP8915[32];
TMP8915[32].kind = 1;
TMP8915[32].offset = offsetof(Tblock456032, isloop);
TMP8915[32].typ = (&NTI138);
TMP8915[32].name = "isLoop";
TMP8919[4] = &TMP8915[33];
TMP8915[33].kind = 1;
TMP8915[33].offset = offsetof(Tblock456032, nestedtrystmts);
TMP8915[33].typ = (&NTI112);
TMP8915[33].name = "nestedTryStmts";
TMP8919[5] = &TMP8915[34];
TMP8915[34].kind = 1;
TMP8915[34].offset = offsetof(Tblock456032, nestedexceptstmts);
TMP8915[34].typ = (&NTI112);
TMP8915[34].name = "nestedExceptStmts";
TMP8919[6] = &TMP8915[35];
TMP8915[35].kind = 1;
TMP8915[35].offset = offsetof(Tblock456032, framelen);
TMP8915[35].typ = (&NTI112);
TMP8915[35].name = "frameLen";
TMP8915[28].len = 7; TMP8915[28].kind = 2; TMP8915[28].sons = &TMP8919[0];
NTI456032.node = &TMP8915[28];
NTI456106.size = sizeof(TY456106*);
NTI456106.kind = 24;
NTI456106.base = (&NTI456032);
NTI456106.flags = 2;
NTI456106.marker = TMP8920;
TMP8915[27].kind = 1;
TMP8915[27].offset = offsetof(Tcproc456034, blocks);
TMP8915[27].typ = (&NTI456106);
TMP8915[27].name = "blocks";
TMP8918[9] = &TMP8915[36];
TMP8915[36].kind = 1;
TMP8915[36].offset = offsetof(Tcproc456034, breakidx);
TMP8915[36].typ = (&NTI108);
TMP8915[36].name = "breakIdx";
TMP8918[10] = &TMP8915[37];
TMP8915[37].kind = 1;
TMP8915[37].offset = offsetof(Tcproc456034, options);
TMP8915[37].typ = (&NTI153121);
TMP8915[37].name = "options";
TMP8918[11] = &TMP8915[38];
TMP8915[38].kind = 1;
TMP8915[38].offset = offsetof(Tcproc456034, maxframelen);
TMP8915[38].typ = (&NTI108);
TMP8915[38].name = "maxFrameLen";
TMP8918[12] = &TMP8915[39];
TMP8915[39].kind = 1;
TMP8915[39].offset = offsetof(Tcproc456034, module);
TMP8915[39].typ = (&NTI456028);
TMP8915[39].name = "module";
TMP8918[13] = &TMP8915[40];
TMP8915[40].kind = 1;
TMP8915[40].offset = offsetof(Tcproc456034, withinloop);
TMP8915[40].typ = (&NTI108);
TMP8915[40].name = "withinLoop";
TMP8918[14] = &TMP8915[41];
TMP8915[41].kind = 1;
TMP8915[41].offset = offsetof(Tcproc456034, splitdecls);
TMP8915[41].typ = (&NTI108);
TMP8915[41].name = "splitDecls";
TMP8918[15] = &TMP8915[42];
TMP8915[42].kind = 1;
TMP8915[42].offset = offsetof(Tcproc456034, gcframeid);
TMP8915[42].typ = (&NTI3407);
TMP8915[42].name = "gcFrameId";
TMP8918[16] = &TMP8915[43];
TMP8915[43].kind = 1;
TMP8915[43].offset = offsetof(Tcproc456034, gcframetype);
TMP8915[43].typ = (&NTI160007);
TMP8915[43].name = "gcFrameType";
TMP8915[18].len = 17; TMP8915[18].kind = 2; TMP8915[18].sons = &TMP8918[0];
NTI456034.node = &TMP8915[18];
NTI456030.size = sizeof(Tcproc456034*);
NTI456030.kind = 22;
NTI456030.base = (&NTI456034);
NTI456030.marker = TMP8921;
TMP8915[17].kind = 1;
TMP8915[17].offset = offsetof(Tcgen456038, initproc);
TMP8915[17].typ = (&NTI456030);
TMP8915[17].name = "initProc";
TMP8917[17] = &TMP8915[44];
TMP8915[44].kind = 1;
TMP8915[44].offset = offsetof(Tcgen456038, postinitproc);
TMP8915[44].typ = (&NTI456030);
TMP8915[44].name = "postInitProc";
TMP8917[18] = &TMP8915[45];
TMP8915[45].kind = 1;
TMP8915[45].offset = offsetof(Tcgen456038, preinitproc);
TMP8915[45].typ = (&NTI456030);
TMP8915[45].name = "preInitProc";
TMP8917[19] = &TMP8915[46];
TMP8915[46].kind = 1;
TMP8915[46].offset = offsetof(Tcgen456038, typestack);
TMP8915[46].typ = (&NTI190845);
TMP8915[46].name = "typeStack";
TMP8917[20] = &TMP8915[47];
TMP8915[47].kind = 1;
TMP8915[47].offset = offsetof(Tcgen456038, datacache);
TMP8915[47].typ = (&NTI190873);
TMP8915[47].name = "dataCache";
TMP8917[21] = &TMP8915[48];
TMP8915[48].kind = 1;
TMP8915[48].offset = offsetof(Tcgen456038, forwardedprocs);
TMP8915[48].typ = (&NTI190815);
TMP8915[48].name = "forwardedProcs";
TMP8917[22] = &TMP8915[49];
TMP8915[49].kind = 1;
TMP8915[49].offset = offsetof(Tcgen456038, typenodes);
TMP8915[49].typ = (&NTI108);
TMP8915[49].name = "typeNodes";
TMP8917[23] = &TMP8915[50];
TMP8915[50].kind = 1;
TMP8915[50].offset = offsetof(Tcgen456038, nimtypes);
TMP8915[50].typ = (&NTI108);
TMP8915[50].name = "nimTypes";
TMP8917[24] = &TMP8915[51];
TMP8915[51].kind = 1;
TMP8915[51].offset = offsetof(Tcgen456038, typenodesname);
TMP8915[51].typ = (&NTI160007);
TMP8915[51].name = "typeNodesName";
TMP8917[25] = &TMP8915[52];
TMP8915[52].kind = 1;
TMP8915[52].offset = offsetof(Tcgen456038, nimtypesname);
TMP8915[52].typ = (&NTI160007);
TMP8915[52].name = "nimTypesName";
TMP8917[26] = &TMP8915[53];
TMP8915[53].kind = 1;
TMP8915[53].offset = offsetof(Tcgen456038, labels);
TMP8915[53].typ = (&NTI3407);
TMP8915[53].name = "labels";
TMP8917[27] = &TMP8915[54];
NTI456143.size = sizeof(TY456143);
NTI456143.kind = 16;
NTI456143.base = (&NTI160007);
NTI456143.flags = 2;
TMP8915[54].kind = 1;
TMP8915[54].offset = offsetof(Tcgen456038, extensionloaders);
TMP8915[54].typ = (&NTI456143);
TMP8915[54].name = "extensionLoaders";
TMP8917[28] = &TMP8915[55];
TMP8915[55].kind = 1;
TMP8915[55].offset = offsetof(Tcgen456038, injectstmt);
TMP8915[55].typ = (&NTI160007);
TMP8915[55].name = "injectStmt";
TMP8915[0].len = 29; TMP8915[0].kind = 2; TMP8915[0].sons = &TMP8917[0];
NTI456038.node = &TMP8915[0];
NTI456028.size = sizeof(Tcgen456038*);
NTI456028.kind = 22;
NTI456028.base = (&NTI456038);
NTI456028.marker = TMP8923;
NTI456155.size = sizeof(TY456155*);
NTI456155.kind = 24;
NTI456155.base = (&NTI456028);
NTI456155.marker = TMP8924;
}

