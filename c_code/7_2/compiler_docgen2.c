/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <setjmp.h>
typedef struct Tnode189813 Tnode189813;
typedef struct Tpasscontext240005 Tpasscontext240005;
typedef struct Tgen506010 Tgen506010;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct Tdocumentor339007 Tdocumentor339007;
typedef struct Tsym189843 Tsym189843;
typedef struct Tidobj165015 Tidobj165015;
typedef struct Ttypeseq189845 Ttypeseq189845;
typedef struct Tscope189837 Tscope189837;
typedef struct TY189944 TY189944;
typedef struct Tstrtable189817 Tstrtable189817;
typedef struct Tsymseq189815 Tsymseq189815;
typedef struct Ttype189849 Ttype189849;
typedef struct Tident165021 Tident165021;
typedef struct Tlineinfo161338 Tlineinfo161338;
typedef struct Tloc189827 Tloc189827;
typedef struct Ropeobj159009 Ropeobj159009;
typedef struct Tlib189831 Tlib189831;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct Tcell46747 Tcell46747;
typedef struct Tcellset46759 Tcellset46759;
typedef struct Tgcheap48616 Tgcheap48616;
typedef struct Tcellseq46763 Tcellseq46763;
typedef struct Tpagedesc46755 Tpagedesc46755;
typedef struct Tmemregion28610 Tmemregion28610;
typedef struct Tsmallchunk27840 Tsmallchunk27840;
typedef struct Tllchunk28604 Tllchunk28604;
typedef struct Tbigchunk27842 Tbigchunk27842;
typedef struct Tintset27817 Tintset27817;
typedef struct Ttrunk27813 Ttrunk27813;
typedef struct Tavlnode28608 Tavlnode28608;
typedef struct Tgcstat48614 Tgcstat48614;
typedef struct Stringtableobj133012 Stringtableobj133012;
typedef struct Trstgenerator310016 Trstgenerator310016;
typedef struct TY310034 TY310034;
typedef struct Table310052 Table310052;
typedef struct Keyvaluepairseq310055 Keyvaluepairseq310055;
typedef struct Tpass240017 Tpass240017;
typedef struct Trodreader232030 Trodreader232030;
typedef struct Tnodeseq189807 Tnodeseq189807;
typedef struct Tinstantiation189833 Tinstantiation189833;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct Keyvaluepairseq133010 Keyvaluepairseq133010;
typedef struct Ttocentry310012 Ttocentry310012;
typedef struct Trstnode295011 Trstnode295011;
typedef struct Keyvaluepair310058 Keyvaluepair310058;
typedef struct TY189933 TY189933;
typedef struct Tindex232028 Tindex232028;
typedef struct Tiitable197274 Tiitable197274;
typedef struct Tiipairseq197272 Tiipairseq197272;
typedef struct Tidtable189861 Tidtable189861;
typedef struct Tidpairseq189859 Tidpairseq189859;
typedef struct Memfile230208 Memfile230208;
typedef struct TY103553 TY103553;
typedef struct Trstnodeseq295009 Trstnodeseq295009;
typedef struct Tiipair197270 Tiipair197270;
typedef struct Tidpair189857 Tidpair189857;
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
struct  Tgen506010  {
  Tpasscontext240005 Sup;
Tdocumentor339007* doc;
Tsym189843* module;
};
struct  Tidobj165015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable189817  {
NI counter;
Tsymseq189815* data;
};
struct  Tlineinfo161338  {
NI16 line;
NI16 col;
NI32 fileindex;
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
typedef N_NIMCALL_PTR(NimStringDesc*, Tfindfilehandler296023) (NimStringDesc* filename);
typedef N_NIMCALL_PTR(void, Tmsghandler296021) (NimStringDesc* filename, NI line, NI col, NU8 msgkind, NimStringDesc* arg);
typedef NimStringDesc* TY310042[5];
struct  Table310052  {
Keyvaluepairseq310055* data;
NI counter;
};
struct  Trstgenerator310016  {
  TNimObject Sup;
NU8 target;
Stringtableobj133012* config;
NI splitafter;
TY310034* tocpart;
NIM_BOOL hastoc;
NimStringDesc* theindex;
NU8 options;
Tfindfilehandler296023 findfile;
Tmsghandler296021 msghandler;
NimStringDesc* filename;
TY310042 meta;
NimStringDesc* currentsection;
Table310052 seenindexterms;
};
typedef Ropeobj159009* Tsections339005[26];
struct  Tdocumentor339007  {
  Trstgenerator310016 Sup;
Ropeobj159009* moddesc;
NI id;
Tsections339005 toc;
Tsections339005 section;
NimStringDesc* indexvalfilename;
NimStringDesc* analytics;
Stringtableobj133012* seensymbols;
};
typedef N_NIMCALL_PTR(Tpasscontext240005*, Tpassopen240009) (Tsym189843* module);
typedef N_NIMCALL_PTR(Tpasscontext240005*, Tpassopencached240011) (Tsym189843* module, Trodreader232030* rd);
typedef N_NIMCALL_PTR(Tnode189813*, Tpassprocess240015) (Tpasscontext240005* p, Tnode189813* toplevelstmt);
typedef N_NIMCALL_PTR(Tnode189813*, Tpassclose240013) (Tpasscontext240005* p, Tnode189813* n);
struct Tpass240017 {
Tpassopen240009 Field0;
Tpassopencached240011 Field1;
Tpassprocess240015 Field2;
Tpassclose240013 Field3;
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
struct  Stringtableobj133012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq133010* data;
NU8 mode;
};
struct  Ttocentry310012  {
Trstnode295011* n;
NimStringDesc* refname;
NimStringDesc* header;
};
struct Keyvaluepair310058 {
NI Field0;
NimStringDesc* Field1;
NI Field2;
};
struct  Tiitable197274  {
NI counter;
Tiipairseq197272* data;
};
struct  Tindex232028  {
NI lastidxkey;
NI lastidxval;
Tiitable197274 tab;
NimStringDesc* r;
NI offset;
};
struct  Tidtable189861  {
NI counter;
Tidpairseq189859* data;
};
struct  Memfile230208  {
void* mem;
NI size;
int handle;
};
struct  Trodreader232030  {
  TNimObject Sup;
NI pos;
NCSTRING s;
NU32 options;
NU8 reason;
TY189933* moddeps;
TY189933* files;
NI dataidx;
NI convertersidx;
NI initidx;
NI interfidx;
NI compilerprocsidx;
NI methodsidx;
NimStringDesc* filename;
Tindex232028 index;
Tindex232028 imports;
NI readerindex;
NI line;
NI moduleid;
Tidtable189861 syms;
Memfile230208 memfile;
Tsymseq189815* methods;
NimStringDesc* origfile;
NIM_BOOL inviewmode;
};
struct  Tinstantiation189833  {
Tsym189843* sym;
Ttypeseq189845* concretetypes;
TY189933* usedby;
};
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
struct TY103553 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Trstnode295011  {
NU8 kind;
NimStringDesc* text;
NI level;
Trstnodeseq295009* sons;
};
struct  Tiipair197270  {
NI key;
NI val;
};
struct  Tidpair189857  {
Tidobj165015* key;
TNimObject* val;
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
struct TY310034 {
  TGenericSeq Sup;
  Ttocentry310012 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq310055 {
  TGenericSeq Sup;
  Keyvaluepair310058 data[SEQ_DECL_SIZE];
};
struct Tnodeseq189807 {
  TGenericSeq Sup;
  Tnode189813* data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq133010 {
  TGenericSeq Sup;
  TY103553 data[SEQ_DECL_SIZE];
};
struct TY189933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct Tiipairseq197272 {
  TGenericSeq Sup;
  Tiipair197270 data[SEQ_DECL_SIZE];
};
struct Tidpairseq189859 {
  TGenericSeq Sup;
  Tidpair189857 data[SEQ_DECL_SIZE];
};
struct Trstnodeseq295009 {
  TGenericSeq Sup;
  Trstnode295011* data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tnode189813*, close_506018)(Tpasscontext240005* p, Tnode189813* n);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(void, writeoutput_342337)(Tdocumentor339007* d, NimStringDesc* filename, NimStringDesc* outext, NIM_BOOL usewarning);
N_NIMCALL(NimStringDesc*, tofilename_162263)(NI32 fileidx);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, generateindex_342318)(Tdocumentor339007* d);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(void, setFrame)(TFrame* s);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52622)(Tcell46747* c);
static N_INLINE(NIM_BOOL, canbecycleroot_50267)(Tcell46747* c);
static N_INLINE(void, rtladdcycleroot_51023)(Tcell46747* c);
N_NOINLINE(void, incl_47465)(Tcellset46759* s, Tcell46747* cell);
static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr);
static N_INLINE(void, decref_52204)(Tcell46747* c);
static N_INLINE(void, rtladdzct_51804)(Tcell46747* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46763* s, Tcell46747* c);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(Tnode189813*, processnode_506056)(Tpasscontext240005* c, Tnode189813* n);
N_NIMCALL(void, generatedoc_340218)(Tdocumentor339007* d, Tnode189813* n);
N_NIMCALL(Tpasscontext240005*, myopen_506068)(Tsym189843* module);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP10605)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(Tdocumentor339007*, newdocumentor_339065)(NimStringDesc* filename, Stringtableobj133012* config);
N_NIMCALL(void, finishdoc2pass_506106)(NimStringDesc* project);
STRING_LITERAL(TMP10603, "html", 4);
NIM_CONST Tpass240017 docgen2pass_506092 = {myopen_506068,
NIM_NIL,
processnode_506056,
close_506018}
;
extern TNimType NTI240005; /* TPassContext */
TNimType NTI506010; /* TGen */
extern TNimType NTI339009; /* PDoc */
extern TNimType NTI189811; /* PSym */
extern NIM_BOOL gwholeproject_152139;
extern TSafePoint* exchandler_17043;
extern TFrame* frameptr_17042;
extern TNimType NTI3431; /* IOError */
extern Exception* currexception_17045;
extern Tgcheap48616 gch_48644;
TNimType NTI506012; /* PGen */
extern Stringtableobj133012* gconfigvars_152231;

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

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_17045), (*currexception_17045).parent);
}

N_NIMCALL(Tnode189813*, close_506018)(Tpasscontext240005* p, Tnode189813* n) {
	Tnode189813* result;
	Tgen506010* g;
	NIM_BOOL usewarning;
	nimfr("close", "docgen2.nim")
	result = 0;
	nimln(23, "docgen2.nim");
	if (p) chckObj((*p).Sup.m_type, (&NTI506010));
	g = ((Tgen506010*) (p));
	nimln(24, "docgen2.nim");
	usewarning = !((((*(*g).module).flags &(1<<((((NU8) 12))&31)))!=0));
	nimln(25, "docgen2.nim");
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		TSafePoint TMP10604;
		LOC3 = 0;
		LOC3 = gwholeproject_152139;
		if (LOC3) goto LA4;
		LOC3 = (((*(*g).module).flags &(1<<((((NU8) 12))&31)))!=0);
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(26, "docgen2.nim");
		LOC7 = 0;
		LOC7 = tofilename_162263(((NI32)chckRange((*(*g).module).position, ((NI32) (-2147483647 -1)), ((NI32) 2147483647))));
		writeoutput_342337((*g).doc, LOC7, ((NimStringDesc*) &TMP10603), usewarning);
		nimln(27, "docgen2.nim");
		pushSafePoint(&TMP10604);
		TMP10604.status = _setjmp(TMP10604.context);
		if (TMP10604.status == 0) {
			nimln(28, "docgen2.nim");
			generateindex_342318((*g).doc);
			popSafePoint();
		}
		else {
			popSafePoint();
			setFrame((TFrame*)&FR);
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3431))) {
				TMP10604.status = 0;
				popCurrentException();
			}
		}
		if (TMP10604.status != 0) reraiseException();
	}
	LA5: ;
	popFrame();
	return result;
}

N_NIMCALL(Tnode189813*, processnode_506056)(Tpasscontext240005* c, Tnode189813* n) {
	Tnode189813* result;
	Tgen506010* g;
	nimfr("processNode", "docgen2.nim")
	result = 0;
	nimln(33, "docgen2.nim");
	result = n;
	nimln(34, "docgen2.nim");
	if (c) chckObj((*c).Sup.m_type, (&NTI506010));
	g = ((Tgen506010*) (c));
	nimln(35, "docgen2.nim");
	generatedoc_340218((*g).doc, n);
	popFrame();
	return result;
}
N_NIMCALL(void, TMP10605)(void* p, NI op) {
	Tgen506010* a;
	a = (Tgen506010*)p;
	nimGCvisit((void*)(*a).doc, op);
	nimGCvisit((void*)(*a).module, op);
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

N_NIMCALL(Tpasscontext240005*, myopen_506068)(Tsym189843* module) {
	Tpasscontext240005* result;
	Tgen506010* g;
	Tdocumentor339007* d;
	NimStringDesc* LOC1;
	nimfr("myOpen", "docgen2.nim")
	result = 0;
	g = 0;
	nimln(39, "docgen2.nim");
	g = (Tgen506010*) newObj((&NTI506012), sizeof(Tgen506010));
	(*g).Sup.Sup.m_type = (&NTI506010);
	nimln(40, "docgen2.nim");
	asgnRefNoCycle((void**) (&(*g).module), module);
	nimln(41, "docgen2.nim");
	LOC1 = 0;
	LOC1 = tofilename_162263(((NI32)chckRange((*module).position, ((NI32) (-2147483647 -1)), ((NI32) 2147483647))));
	d = newdocumentor_339065(LOC1, gconfigvars_152231);
	nimln(42, "docgen2.nim");
	(*d).Sup.hastoc = NIM_TRUE;
	nimln(43, "docgen2.nim");
	asgnRef((void**) (&(*g).doc), d);
	nimln(44, "docgen2.nim");
	result = &g->Sup;
	popFrame();
	return result;
}

N_NIMCALL(void, finishdoc2pass_506106)(NimStringDesc* project) {
	nimfr("finishDoc2Pass", "docgen2.nim")
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, compiler_docgen2Init)(void) {
	nimfr("docgen2", "docgen2.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_docgen2DatInit)(void) {
static TNimNode* TMP10602[2];
static TNimNode TMP10600[3];
NTI506010.size = sizeof(Tgen506010);
NTI506010.kind = 17;
NTI506010.base = (&NTI240005);
TMP10602[0] = &TMP10600[1];
TMP10600[1].kind = 1;
TMP10600[1].offset = offsetof(Tgen506010, doc);
TMP10600[1].typ = (&NTI339009);
TMP10600[1].name = "doc";
TMP10602[1] = &TMP10600[2];
TMP10600[2].kind = 1;
TMP10600[2].offset = offsetof(Tgen506010, module);
TMP10600[2].typ = (&NTI189811);
TMP10600[2].name = "module";
TMP10600[0].len = 2; TMP10600[0].kind = 2; TMP10600[0].sons = &TMP10602[0];
NTI506010.node = &TMP10600[0];
NTI506012.size = sizeof(Tgen506010*);
NTI506012.kind = 22;
NTI506012.base = (&NTI506010);
NTI506012.marker = TMP10605;
}

