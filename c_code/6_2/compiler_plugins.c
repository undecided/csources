/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct PluginHEX3Aobjecttype406019 PluginHEX3Aobjecttype406019;
typedef struct Tsym190843 Tsym190843;
typedef struct Tidobj166015 Tidobj166015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Ttype190849 Ttype190849;
typedef struct Tident166021 Tident166021;
typedef struct Tlineinfo162338 Tlineinfo162338;
typedef struct Tnode190813 Tnode190813;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj160009 Ropeobj160009;
typedef struct Tlib190831 Tlib190831;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tcontext244023 Tcontext244023;
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
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tpasscontext241005 Tpasscontext241005;
typedef struct Tproccon244011 Tproccon244011;
typedef struct Intset187056 Intset187056;
typedef struct Ttrunk187052 Ttrunk187052;
typedef struct Ttrunkseq187054 Ttrunkseq187054;
typedef struct Tlinkedlist130028 Tlinkedlist130028;
typedef struct Tidtable190861 Tidtable190861;
typedef struct Tidpairseq190859 Tidpairseq190859;
typedef struct Tctx243048 Tctx243048;
typedef struct TY244141 TY244141;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct TY190933 TY190933;
typedef struct Tidpair190857 Tidpair190857;
typedef struct TY243253 TY243253;
typedef struct TY163033 TY163033;
typedef struct PprocHEX3Aobjecttype243232 PprocHEX3Aobjecttype243232;
typedef struct TY243272 TY243272;
typedef struct Tinstantiationpair244013 Tinstantiationpair244013;
typedef struct TY243233 TY243233;
typedef struct TY243239 TY243239;
typedef struct TY243273 TY243273;
typedef struct Vmargs243042 Vmargs243042;
typedef struct Tblock243030 Tblock243030;
typedef struct TY243213 TY243213;
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
struct  Tidobj166015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable190817  {
NI counter;
Tsymseq190815* data;
};
struct  Tlineinfo162338  {
NI16 line;
NI16 col;
NI32 fileindex;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tident166021  {
  Tidobj166015 Sup;
NimStringDesc* s;
Tident166021* next;
NI h;
};
typedef N_NIMCALL_PTR(Tnode190813*, Transformation406013) (Tcontext244023* c, Tnode190813* n);
struct  PluginHEX3Aobjecttype406019  {
Tident166021* fn;
Tident166021* module;
Tident166021* package;
Transformation406013 t;
PluginHEX3Aobjecttype406019* next;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  Tpasscontext241005  {
  TNimObject Sup;
NIM_BOOL fromcache;
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
struct  Tidtable190861  {
NI counter;
Tidpairseq190859* data;
};
typedef N_NIMCALL_PTR(Tnode190813*, TY244072) (Tcontext244023* c, Tnode190813* n);
typedef N_NIMCALL_PTR(Tnode190813*, TY244077) (Tcontext244023* c, Tnode190813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode190813*, TY244085) (Tcontext244023* c, Tnode190813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode190813*, TY244093) (Tcontext244023* c, Tnode190813* n);
typedef N_NIMCALL_PTR(Tnode190813*, TY244098) (Tcontext244023* c, Tnode190813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode190813*, TY244106) (Tcontext244023* c, Tnode190813* n);
typedef N_NIMCALL_PTR(Tnode190813*, TY244111) (Tcontext244023* c, Tnode190813* n, Tnode190813* norig, NU32 filter);
typedef N_NIMCALL_PTR(Ttype190849*, TY244118) (Tcontext244023* c, Tnode190813* n, Ttype190849* prev);
typedef struct {
N_NIMCALL_PTR(Tnode190813*, ClPrc) (Tcontext244023* c, Tidtable190861 pt, Tnode190813* n, void* ClEnv);
void* ClEnv;
} TY244124;
typedef struct {
N_NIMCALL_PTR(Tsym190843*, ClPrc) (Tcontext244023* c, Tsym190843* fn, Tidtable190861 pt, Tlineinfo162338 info, void* ClEnv);
void* ClEnv;
} TY244130;
typedef N_NIMCALL_PTR(Tsym190843*, TY244146) (Tcontext244023* c, Tsym190843* dc, Ttype190849* t, Tlineinfo162338 info, NU8 op);
struct  Tcontext244023  {
  Tpasscontext241005 Sup;
Tsym190843* module;
Tscope190837* currentscope;
Tscope190837* importtable;
Tscope190837* toplevelscope;
Tproccon244011* p;
Tsymseq190815* friendmodules;
NI instcounter;
Intset187056 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI incompilescontext;
NI ingenericinst;
Tsymseq190815* converters;
Tsymseq190815* patterns;
Tlinkedlist130028 optionstack;
Tidtable190861 symmapping;
Tlinkedlist130028 libs;
TY244072 semconstexpr;
TY244077 semexpr;
TY244085 semtryexpr;
TY244093 semtryconstexpr;
TY244098 semoperand;
TY244106 semconstboolexpr;
TY244111 semoverloadedcall;
TY244118 semtypenode;
TY244124 seminferredlambda;
TY244130 semgenerateinstance;
Intset187056 includedfiles;
Tstrtable190817 userpragmas;
Tctx243048* evalcontext;
Intset187056 unknownidents;
TY244141* generics;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY244146 insttypeboundop;
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
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct  Tproccon244011  {
Tsym190843* owner;
Tsym190843* resultsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon244011* next;
NIM_BOOL wasforwarded;
Tnode190813* bracketexpr;
};
struct  Ttrunk187052  {
Ttrunk187052* next;
NI key;
TY27820 bits;
};
struct  Tidpair190857  {
Tidobj166015* key;
TNimObject* val;
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
struct  Tinstantiationpair244013  {
Tsym190843* genericsym;
Tinstantiation190833* inst;
};
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
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
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs243042* args, void* ClEnv);
void* ClEnv;
} Vmcallback243044;
struct TY243273 {
NimStringDesc* Field0;
Vmcallback243044 Field1;
};
struct  Tblock243030  {
Tsym190843* label;
TY243213* fixups;
};
struct  Vmargs243042  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode190813* currentexception;
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
struct Ttrunkseq187054 {
  TGenericSeq Sup;
  Ttrunk187052* data[SEQ_DECL_SIZE];
};
struct Tidpairseq190859 {
  TGenericSeq Sup;
  Tidpair190857 data[SEQ_DECL_SIZE];
};
struct TY244141 {
  TGenericSeq Sup;
  Tinstantiationpair244013 data[SEQ_DECL_SIZE];
};
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY243253 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY163033 {
  TGenericSeq Sup;
  Tlineinfo162338 data[SEQ_DECL_SIZE];
};
struct TY243272 {
  TGenericSeq Sup;
  TY243273 data[SEQ_DECL_SIZE];
};
struct TY243233 {
  TGenericSeq Sup;
  Tblock243030 data[SEQ_DECL_SIZE];
};
struct TY243213 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, pluginmatches_406029)(PluginHEX3Aobjecttype406019* p, Tsym190843* s);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(Transformation406013, getplugin_406094)(Tsym190843* fn);
N_NIMCALL(void, registerplugin_406124)(NimStringDesc* package, NimStringDesc* module, NimStringDesc* fn, Transformation406013 t);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP8086)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(Tident166021*, getident_166463)(NimStringDesc* identifier);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr);
static N_INLINE(void, rtladdzct_51804)(Tcell46747* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46763* s, Tcell46747* c);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52622)(Tcell46747* c);
static N_INLINE(NIM_BOOL, canbecycleroot_50267)(Tcell46747* c);
static N_INLINE(void, rtladdcycleroot_51023)(Tcell46747* c);
N_NOINLINE(void, incl_47465)(Tcellset46759* s, Tcell46747* cell);
static N_INLINE(void, decref_52204)(Tcell46747* c);
extern TFrame* frameptr_17042;
PluginHEX3Aobjecttype406019* head_406089;
TNimType NTI406019; /* Plugin:ObjectType */
extern TNimType NTI166019; /* PIdent */
TNimType NTI406013; /* Transformation */
TNimType NTI406015; /* Plugin */
extern Tgcheap48616 gch_48644;

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

N_NIMCALL(NIM_BOOL, pluginmatches_406029)(PluginHEX3Aobjecttype406019* p, Tsym190843* s) {
	NIM_BOOL result;
	Tsym190843* module;
	Tsym190843* package;
	nimfr("pluginMatches", "plugins.nim")
{	result = 0;
	nimln(23, "plugins.nim");
	{
		if (!!(((*(*s).name).Sup.id == (*(*p).fn).Sup.id))) goto LA3;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	nimln(24, "plugins.nim");
	module = (*s).owner;
	nimln(25, "plugins.nim");
	{
		NIM_BOOL LOC7;
		NIM_BOOL LOC8;
		LOC7 = 0;
		LOC8 = 0;
		LOC8 = (module == NIM_NIL);
		if (LOC8) goto LA9;
		LOC8 = !(((*module).kind == ((NU8) 6)));
		LA9: ;
		LOC7 = LOC8;
		if (LOC7) goto LA10;
		nimln(26, "plugins.nim");
		LOC7 = !(((*(*module).name).Sup.id == (*(*p).module).Sup.id));
		LA10: ;
		if (!LOC7) goto LA11;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA11: ;
	nimln(27, "plugins.nim");
	package = (*module).owner;
	nimln(28, "plugins.nim");
	{
		NIM_BOOL LOC15;
		NIM_BOOL LOC16;
		LOC15 = 0;
		LOC16 = 0;
		LOC16 = (package == NIM_NIL);
		if (LOC16) goto LA17;
		LOC16 = !(((*package).kind == ((NU8) 24)));
		LA17: ;
		LOC15 = LOC16;
		if (LOC15) goto LA18;
		nimln(29, "plugins.nim");
		LOC15 = !(((*(*package).name).Sup.id == (*(*p).package).Sup.id));
		LA18: ;
		if (!LOC15) goto LA19;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA19: ;
	nimln(30, "plugins.nim");
	result = NIM_TRUE;
	goto BeforeRet;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(Transformation406013, getplugin_406094)(Tsym190843* fn) {
	Transformation406013 result;
	PluginHEX3Aobjecttype406019* it;
	nimfr("getPlugin", "plugins.nim")
{	result = 0;
	nimln(35, "plugins.nim");
	it = head_406089;
	{
		nimln(36, "plugins.nim");
		while (1) {
			if (!!((it == NIM_NIL))) goto LA2;
			nimln(37, "plugins.nim");
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = pluginmatches_406029(it, fn);
				if (!LOC5) goto LA6;
				result = (*it).t;
				goto BeforeRet;
			}
			LA6: ;
			nimln(38, "plugins.nim");
			it = (*it).next;
		} LA2: ;
	}
	}BeforeRet: ;
	popFrame();
	return result;
}
N_NIMCALL(void, TMP8086)(void* p, NI op) {
	PluginHEX3Aobjecttype406019* a;
	a = (PluginHEX3Aobjecttype406019*)p;
	nimGCvisit((void*)(*a).fn, op);
	nimGCvisit((void*)(*a).module, op);
	nimGCvisit((void*)(*a).package, op);
	nimGCvisit((void*)(*a).next, op);
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

N_NIMCALL(void, registerplugin_406124)(NimStringDesc* package, NimStringDesc* module, NimStringDesc* fn, Transformation406013 t) {
	PluginHEX3Aobjecttype406019* oldhead;
	PluginHEX3Aobjecttype406019* LOC1;
	nimfr("registerPlugin", "plugins.nim")
	nimln(41, "plugins.nim");
	oldhead = head_406089;
	nimln(42, "plugins.nim");
	LOC1 = 0;
	LOC1 = (PluginHEX3Aobjecttype406019*) newObj((&NTI406015), sizeof(PluginHEX3Aobjecttype406019));
	asgnRefNoCycle((void**) (&(*LOC1).fn), getident_166463(fn));
	asgnRefNoCycle((void**) (&(*LOC1).module), getident_166463(module));
	nimln(43, "plugins.nim");
	asgnRefNoCycle((void**) (&(*LOC1).package), getident_166463(package));
	(*LOC1).t = t;
	asgnRef((void**) (&(*LOC1).next), oldhead);
	asgnRef((void**) (&head_406089), LOC1);
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, compiler_pluginsInit)(void) {
	nimfr("plugins", "plugins.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_pluginsDatInit)(void) {
static TNimNode* TMP8085[5];
static TNimNode TMP8083[6];
NTI406019.size = sizeof(PluginHEX3Aobjecttype406019);
NTI406019.kind = 18;
NTI406019.base = 0;
TMP8085[0] = &TMP8083[1];
TMP8083[1].kind = 1;
TMP8083[1].offset = offsetof(PluginHEX3Aobjecttype406019, fn);
TMP8083[1].typ = (&NTI166019);
TMP8083[1].name = "fn";
TMP8085[1] = &TMP8083[2];
TMP8083[2].kind = 1;
TMP8083[2].offset = offsetof(PluginHEX3Aobjecttype406019, module);
TMP8083[2].typ = (&NTI166019);
TMP8083[2].name = "module";
TMP8085[2] = &TMP8083[3];
TMP8083[3].kind = 1;
TMP8083[3].offset = offsetof(PluginHEX3Aobjecttype406019, package);
TMP8083[3].typ = (&NTI166019);
TMP8083[3].name = "package";
TMP8085[3] = &TMP8083[4];
NTI406013.size = sizeof(Transformation406013);
NTI406013.kind = 25;
NTI406013.base = 0;
NTI406013.flags = 3;
TMP8083[4].kind = 1;
TMP8083[4].offset = offsetof(PluginHEX3Aobjecttype406019, t);
TMP8083[4].typ = (&NTI406013);
TMP8083[4].name = "t";
TMP8085[4] = &TMP8083[5];
TMP8083[5].kind = 1;
TMP8083[5].offset = offsetof(PluginHEX3Aobjecttype406019, next);
TMP8083[5].typ = (&NTI406015);
TMP8083[5].name = "next";
TMP8083[0].len = 5; TMP8083[0].kind = 2; TMP8083[0].sons = &TMP8085[0];
NTI406019.node = &TMP8083[0];
NTI406015.size = sizeof(PluginHEX3Aobjecttype406019*);
NTI406015.kind = 22;
NTI406015.base = (&NTI406019);
NTI406015.marker = TMP8086;
}

