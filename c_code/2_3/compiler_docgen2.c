/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <setjmp.h>
typedef struct Tnode191813 Tnode191813;
typedef struct Tpasscontext242005 Tpasscontext242005;
typedef struct Tgen508010 Tgen508010;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct Tdocumentor341007 Tdocumentor341007;
typedef struct Tsym191843 Tsym191843;
typedef struct Tidobj167015 Tidobj167015;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Ttype191849 Ttype191849;
typedef struct Tident167021 Tident167021;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tlib191831 Tlib191831;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct Tcell46746 Tcell46746;
typedef struct Tcellset46758 Tcellset46758;
typedef struct Tgcheap48616 Tgcheap48616;
typedef struct Tcellseq46762 Tcellseq46762;
typedef struct Tpagedesc46754 Tpagedesc46754;
typedef struct Tmemregion28610 Tmemregion28610;
typedef struct Tsmallchunk27840 Tsmallchunk27840;
typedef struct Tllchunk28604 Tllchunk28604;
typedef struct Tbigchunk27842 Tbigchunk27842;
typedef struct Tintset27817 Tintset27817;
typedef struct Ttrunk27813 Ttrunk27813;
typedef struct Tavlnode28608 Tavlnode28608;
typedef struct Tgcstat48614 Tgcstat48614;
typedef struct Stringtableobj134012 Stringtableobj134012;
typedef struct Trstgenerator312016 Trstgenerator312016;
typedef struct TY312034 TY312034;
typedef struct Table312052 Table312052;
typedef struct Keyvaluepairseq312055 Keyvaluepairseq312055;
typedef struct Tpass242017 Tpass242017;
typedef struct Trodreader234030 Trodreader234030;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct Keyvaluepairseq134010 Keyvaluepairseq134010;
typedef struct Ttocentry312012 Ttocentry312012;
typedef struct Trstnode297011 Trstnode297011;
typedef struct Keyvaluepair312058 Keyvaluepair312058;
typedef struct TY191933 TY191933;
typedef struct Tindex234028 Tindex234028;
typedef struct Tiitable199274 Tiitable199274;
typedef struct Tiipairseq199272 Tiipairseq199272;
typedef struct Tidtable191861 Tidtable191861;
typedef struct Tidpairseq191859 Tidpairseq191859;
typedef struct Memfile232208 Memfile232208;
typedef struct TY103553 TY103553;
typedef struct Trstnodeseq297009 Trstnodeseq297009;
typedef struct Tiipair199270 Tiipair199270;
typedef struct Tidpair191857 Tidpair191857;
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
struct  Tgen508010  {
  Tpasscontext242005 Sup;
Tdocumentor341007* doc;
Tsym191843* module;
};
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable191817  {
NI counter;
Tsymseq191815* data;
};
struct  Tlineinfo163338  {
NI16 line;
NI16 col;
NI32 fileindex;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e, void* ClEnv);
void* ClEnv;
} TY15609;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY15609 raiseAction;
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
typedef N_NIMCALL_PTR(NimStringDesc*, Tfindfilehandler298023) (NimStringDesc* filename);
typedef N_NIMCALL_PTR(void, Tmsghandler298021) (NimStringDesc* filename, NI line, NI col, NU8 msgkind, NimStringDesc* arg);
typedef NimStringDesc* TY312042[5];
struct  Table312052  {
Keyvaluepairseq312055* data;
NI counter;
};
struct  Trstgenerator312016  {
  TNimObject Sup;
NU8 target;
Stringtableobj134012* config;
NI splitafter;
TY312034* tocpart;
NIM_BOOL hastoc;
NimStringDesc* theindex;
NU8 options;
Tfindfilehandler298023 findfile;
Tmsghandler298021 msghandler;
NimStringDesc* filename;
TY312042 meta;
NimStringDesc* currentsection;
Table312052 seenindexterms;
};
typedef Ropeobj161009* Tsections341005[26];
struct  Tdocumentor341007  {
  Trstgenerator312016 Sup;
Ropeobj161009* moddesc;
NI id;
Tsections341005 toc;
Tsections341005 section;
NimStringDesc* indexvalfilename;
NimStringDesc* analytics;
Stringtableobj134012* seensymbols;
};
typedef N_NIMCALL_PTR(Tpasscontext242005*, Tpassopen242009) (Tsym191843* module);
typedef N_NIMCALL_PTR(Tpasscontext242005*, Tpassopencached242011) (Tsym191843* module, Trodreader234030* rd);
typedef N_NIMCALL_PTR(Tnode191813*, Tpassprocess242015) (Tpasscontext242005* p, Tnode191813* toplevelstmt);
typedef N_NIMCALL_PTR(Tnode191813*, Tpassclose242013) (Tpasscontext242005* p, Tnode191813* n);
struct Tpass242017 {
Tpassopen242009 Field0;
Tpassopencached242011 Field1;
Tpassprocess242015 Field2;
Tpassclose242013 Field3;
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
typedef NI TY27820[8];
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
struct  Stringtableobj134012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq134010* data;
NU8 mode;
};
struct  Ttocentry312012  {
Trstnode297011* n;
NimStringDesc* refname;
NimStringDesc* header;
};
struct Keyvaluepair312058 {
NI Field0;
NimStringDesc* Field1;
NI Field2;
};
struct  Tiitable199274  {
NI counter;
Tiipairseq199272* data;
};
struct  Tindex234028  {
NI lastidxkey;
NI lastidxval;
Tiitable199274 tab;
NimStringDesc* r;
NI offset;
};
struct  Tidtable191861  {
NI counter;
Tidpairseq191859* data;
};
struct  Memfile232208  {
void* mem;
NI size;
int handle;
};
struct  Trodreader234030  {
  TNimObject Sup;
NI pos;
NCSTRING s;
NU32 options;
NU8 reason;
TY191933* moddeps;
TY191933* files;
NI dataidx;
NI convertersidx;
NI initidx;
NI interfidx;
NI compilerprocsidx;
NI methodsidx;
NimStringDesc* filename;
Tindex234028 index;
Tindex234028 imports;
NI readerindex;
NI line;
NI moduleid;
Tidtable191861 syms;
Memfile232208 memfile;
Tsymseq191815* methods;
NimStringDesc* origfile;
NIM_BOOL inviewmode;
};
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
};
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
struct TY103553 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Trstnode297011  {
NU8 kind;
NimStringDesc* text;
NI level;
Trstnodeseq297009* sons;
};
struct  Tiipair199270  {
NI key;
NI val;
};
struct  Tidpair191857  {
Tidobj167015* key;
TNimObject* val;
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
struct TY312034 {
  TGenericSeq Sup;
  Ttocentry312012 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq312055 {
  TGenericSeq Sup;
  Keyvaluepair312058 data[SEQ_DECL_SIZE];
};
struct Tnodeseq191807 {
  TGenericSeq Sup;
  Tnode191813* data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq134010 {
  TGenericSeq Sup;
  TY103553 data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct Tiipairseq199272 {
  TGenericSeq Sup;
  Tiipair199270 data[SEQ_DECL_SIZE];
};
struct Tidpairseq191859 {
  TGenericSeq Sup;
  Tidpair191857 data[SEQ_DECL_SIZE];
};
struct Trstnodeseq297009 {
  TGenericSeq Sup;
  Trstnode297011* data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tnode191813*, close_508018)(Tpasscontext242005* p, Tnode191813* n);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(void, writeoutput_344337)(Tdocumentor341007* d, NimStringDesc* filename, NimStringDesc* outext, NIM_BOOL usewarning);
N_NIMCALL(NimStringDesc*, tofilename_164263)(NI32 fileidx);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, generateindex_344318)(Tdocumentor341007* d);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(void, setFrame)(TFrame* s);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52622)(Tcell46746* c);
static N_INLINE(NIM_BOOL, canbecycleroot_50267)(Tcell46746* c);
static N_INLINE(void, rtladdcycleroot_51023)(Tcell46746* c);
N_NOINLINE(void, incl_47465)(Tcellset46758* s, Tcell46746* cell);
static N_INLINE(Tcell46746*, usrtocell_50246)(void* usr);
static N_INLINE(void, decref_52204)(Tcell46746* c);
static N_INLINE(void, rtladdzct_51804)(Tcell46746* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46762* s, Tcell46746* c);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(Tnode191813*, processnode_508056)(Tpasscontext242005* c, Tnode191813* n);
N_NIMCALL(void, generatedoc_342218)(Tdocumentor341007* d, Tnode191813* n);
N_NIMCALL(Tpasscontext242005*, myopen_508068)(Tsym191843* module);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP10609)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(Tdocumentor341007*, newdocumentor_341065)(NimStringDesc* filename, Stringtableobj134012* config);
N_NIMCALL(void, finishdoc2pass_508106)(NimStringDesc* project);
STRING_LITERAL(TMP10607, "html", 4);
NIM_CONST Tpass242017 docgen2pass_508092 = {myopen_508068,
NIM_NIL,
processnode_508056,
close_508018}
;
extern TNimType NTI242005; /* TPassContext */
TNimType NTI508010; /* TGen */
extern TNimType NTI341009; /* PDoc */
extern TNimType NTI191811; /* PSym */
extern NIM_BOOL gwholeproject_154139;
extern TSafePoint* exchandler_17043;
extern TFrame* frameptr_17042;
extern TNimType NTI3431; /* IOError */
extern Exception* currexception_17045;
extern Tgcheap48616 gch_48644;
TNimType NTI508012; /* PGen */
extern Stringtableobj134012* gconfigvars_154231;

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

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_17043;
	exchandler_17043 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_17043 = (*exchandler_17043).prev;
}

static N_INLINE(void, setFrame)(TFrame* s) {
	frameptr_17042 = s;
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

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	nimfr("getCurrentException", "system.nim")
	result = 0;
	nimln(2726, "system.nim");
	result = currexception_17045;
	popFrame();
	return result;
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

static N_INLINE(void, incref_52622)(Tcell46746* c) {
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

static N_INLINE(Tcell46746*, usrtocell_50246)(void* usr) {
	Tcell46746* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	result = ((Tcell46746*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46746))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_51804)(Tcell46746* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_50217((&gch_48644.zct), c);
	popFrame();
}

static N_INLINE(void, decref_52204)(Tcell46746* c) {
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

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_17045), (*currexception_17045).parent);
}

N_NIMCALL(Tnode191813*, close_508018)(Tpasscontext242005* p, Tnode191813* n) {
	Tnode191813* result;
	Tgen508010* g;
	NIM_BOOL usewarning;
	nimfr("close", "docgen2.nim")
	result = 0;
	nimln(23, "docgen2.nim");
	if (p) chckObj((*p).Sup.m_type, (&NTI508010));
	g = ((Tgen508010*) (p));
	nimln(24, "docgen2.nim");
	usewarning = !((((*(*g).module).flags &(1<<((((NU8) 12))&31)))!=0));
	nimln(25, "docgen2.nim");
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		TSafePoint TMP10608;
		LOC3 = 0;
		LOC3 = gwholeproject_154139;
		if (LOC3) goto LA4;
		LOC3 = (((*(*g).module).flags &(1<<((((NU8) 12))&31)))!=0);
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(26, "docgen2.nim");
		LOC7 = 0;
		LOC7 = tofilename_164263(((NI32)chckRange((*(*g).module).position, ((NI32) (-2147483647 -1)), ((NI32) 2147483647))));
		writeoutput_344337((*g).doc, LOC7, ((NimStringDesc*) &TMP10607), usewarning);
		nimln(27, "docgen2.nim");
		pushSafePoint(&TMP10608);
		TMP10608.status = setjmp(TMP10608.context);
		if (TMP10608.status == 0) {
			nimln(28, "docgen2.nim");
			generateindex_344318((*g).doc);
			popSafePoint();
		}
		else {
			popSafePoint();
			setFrame((TFrame*)&FR);
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3431))) {
				TMP10608.status = 0;
				popCurrentException();
			}
		}
		if (TMP10608.status != 0) reraiseException();
	}
	LA5: ;
	popFrame();
	return result;
}

N_NIMCALL(Tnode191813*, processnode_508056)(Tpasscontext242005* c, Tnode191813* n) {
	Tnode191813* result;
	Tgen508010* g;
	nimfr("processNode", "docgen2.nim")
	result = 0;
	nimln(33, "docgen2.nim");
	result = n;
	nimln(34, "docgen2.nim");
	if (c) chckObj((*c).Sup.m_type, (&NTI508010));
	g = ((Tgen508010*) (c));
	nimln(35, "docgen2.nim");
	generatedoc_342218((*g).doc, n);
	popFrame();
	return result;
}
N_NIMCALL(void, TMP10609)(void* p, NI op) {
	Tgen508010* a;
	a = (Tgen508010*)p;
	nimGCvisit((void*)(*a).doc, op);
	nimGCvisit((void*)(*a).module, op);
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

N_NIMCALL(Tpasscontext242005*, myopen_508068)(Tsym191843* module) {
	Tpasscontext242005* result;
	Tgen508010* g;
	Tdocumentor341007* d;
	NimStringDesc* LOC1;
	nimfr("myOpen", "docgen2.nim")
	result = 0;
	g = 0;
	nimln(39, "docgen2.nim");
	g = (Tgen508010*) newObj((&NTI508012), sizeof(Tgen508010));
	(*g).Sup.Sup.m_type = (&NTI508010);
	nimln(40, "docgen2.nim");
	asgnRefNoCycle((void**) (&(*g).module), module);
	nimln(41, "docgen2.nim");
	LOC1 = 0;
	LOC1 = tofilename_164263(((NI32)chckRange((*module).position, ((NI32) (-2147483647 -1)), ((NI32) 2147483647))));
	d = newdocumentor_341065(LOC1, gconfigvars_154231);
	nimln(42, "docgen2.nim");
	(*d).Sup.hastoc = NIM_TRUE;
	nimln(43, "docgen2.nim");
	asgnRef((void**) (&(*g).doc), d);
	nimln(44, "docgen2.nim");
	result = &g->Sup;
	popFrame();
	return result;
}

N_NIMCALL(void, finishdoc2pass_508106)(NimStringDesc* project) {
	nimfr("finishDoc2Pass", "docgen2.nim")
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, compiler_docgen2Init)(void) {
	nimfr("docgen2", "docgen2.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_docgen2DatInit)(void) {
static TNimNode* TMP10606[2];
static TNimNode TMP10604[3];
NTI508010.size = sizeof(Tgen508010);
NTI508010.kind = 17;
NTI508010.base = (&NTI242005);
TMP10606[0] = &TMP10604[1];
TMP10604[1].kind = 1;
TMP10604[1].offset = offsetof(Tgen508010, doc);
TMP10604[1].typ = (&NTI341009);
TMP10604[1].name = "doc";
TMP10606[1] = &TMP10604[2];
TMP10604[2].kind = 1;
TMP10604[2].offset = offsetof(Tgen508010, module);
TMP10604[2].typ = (&NTI191811);
TMP10604[2].name = "module";
TMP10604[0].len = 2; TMP10604[0].kind = 2; TMP10604[0].sons = &TMP10606[0];
NTI508010.node = &TMP10604[0];
NTI508012.size = sizeof(Tgen508010*);
NTI508012.kind = 22;
NTI508012.base = (&NTI508010);
NTI508012.marker = TMP10609;
}

