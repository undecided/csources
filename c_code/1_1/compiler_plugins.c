/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct PluginHEX3Aobjecttype409019 PluginHEX3Aobjecttype409019;
typedef struct Tsym193843 Tsym193843;
typedef struct Tidobj169015 Tidobj169015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq193845 Ttypeseq193845;
typedef struct Tscope193837 Tscope193837;
typedef struct TY193944 TY193944;
typedef struct Tstrtable193817 Tstrtable193817;
typedef struct Tsymseq193815 Tsymseq193815;
typedef struct Ttype193849 Ttype193849;
typedef struct Tident169021 Tident169021;
typedef struct Tlineinfo165338 Tlineinfo165338;
typedef struct Tnode193813 Tnode193813;
typedef struct Tloc193827 Tloc193827;
typedef struct Ropeobj163009 Ropeobj163009;
typedef struct Tlib193831 Tlib193831;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tcontext247023 Tcontext247023;
typedef struct Tcell46746 Tcell46746;
typedef struct Tcellseq46762 Tcellseq46762;
typedef struct Tgcheap48616 Tgcheap48616;
typedef struct Tcellset46758 Tcellset46758;
typedef struct Tpagedesc46754 Tpagedesc46754;
typedef struct Tmemregion28610 Tmemregion28610;
typedef struct Tsmallchunk27840 Tsmallchunk27840;
typedef struct Tllchunk28604 Tllchunk28604;
typedef struct Tbigchunk27842 Tbigchunk27842;
typedef struct Tintset27817 Tintset27817;
typedef struct Ttrunk27813 Ttrunk27813;
typedef struct Tavlnode28608 Tavlnode28608;
typedef struct Tgcstat48614 Tgcstat48614;
typedef struct Tnodeseq193807 Tnodeseq193807;
typedef struct Tinstantiation193833 Tinstantiation193833;
typedef struct Tlistentry133022 Tlistentry133022;
typedef struct Tpasscontext244005 Tpasscontext244005;
typedef struct Tproccon247011 Tproccon247011;
typedef struct Intset190056 Intset190056;
typedef struct Ttrunk190052 Ttrunk190052;
typedef struct Ttrunkseq190054 Ttrunkseq190054;
typedef struct Tlinkedlist133028 Tlinkedlist133028;
typedef struct Tidtable193861 Tidtable193861;
typedef struct Tidpairseq193859 Tidpairseq193859;
typedef struct Tctx246048 Tctx246048;
typedef struct TY247141 TY247141;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct TY193933 TY193933;
typedef struct Tidpair193857 Tidpair193857;
typedef struct TY246253 TY246253;
typedef struct TY166036 TY166036;
typedef struct PprocHEX3Aobjecttype246232 PprocHEX3Aobjecttype246232;
typedef struct TY246272 TY246272;
typedef struct Tinstantiationpair247013 Tinstantiationpair247013;
typedef struct TY246233 TY246233;
typedef struct TY246239 TY246239;
typedef struct TY246273 TY246273;
typedef struct Vmargs246042 Vmargs246042;
typedef struct Tblock246030 Tblock246030;
typedef struct TY246213 TY246213;
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
struct  Tidobj169015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable193817  {
NI counter;
Tsymseq193815* data;
};
struct  Tlineinfo165338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tloc193827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype193849* t;
Ropeobj163009* r;
Ropeobj163009* heaproot;
};
struct  Tsym193843  {
  Tidobj169015 Sup;
NU8 kind;
union{
struct {Ttypeseq193845* typeinstcache;
Tscope193837* typscope;
} S1;
struct {TY193944* procinstcache;
Tsym193843* gcunsafetyreason;
} S2;
struct {TY193944* usedgenerics;
Tstrtable193817 tab;
} S3;
struct {Tsym193843* guard;
} S4;
} kindU;
NU16 magic;
Ttype193849* typ;
Tident169021* name;
Tlineinfo165338 info;
Tsym193843* owner;
NU32 flags;
Tnode193813* ast;
NU32 options;
NI position;
NI offset;
Tloc193827 loc;
Tlib193831* annex;
Tnode193813* constraint;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tident169021  {
  Tidobj169015 Sup;
NimStringDesc* s;
Tident169021* next;
NI h;
};
typedef N_NIMCALL_PTR(Tnode193813*, Transformation409013) (Tcontext247023* c, Tnode193813* n);
struct  PluginHEX3Aobjecttype409019  {
Tident169021* fn;
Tident169021* module;
Tident169021* package;
Transformation409013 t;
PluginHEX3Aobjecttype409019* next;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  Tscope193837  {
NI depthlevel;
Tstrtable193817 symbols;
Tnodeseq193807* usingsyms;
Tscope193837* parent;
};
struct  Ttype193849  {
  Tidobj169015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq193845* sons;
Tnode193813* n;
Tsym193843* owner;
Tsym193843* sym;
Tsym193843* destructor;
Tsym193843* deepcopy;
Tsym193843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc193827 loc;
};
struct  Tnode193813  {
Ttype193849* typ;
Tlineinfo165338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym193843* sym;
} S4;
struct {Tident169021* ident;
} S5;
struct {Tnodeseq193807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Ropeobj163009  {
  TNimObject Sup;
Ropeobj163009* left;
Ropeobj163009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry133022  {
  TNimObject Sup;
Tlistentry133022* prev;
Tlistentry133022* next;
};
struct  Tlib193831  {
  Tlistentry133022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj163009* name;
Tnode193813* path;
};
struct  Tpasscontext244005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Intset190056  {
NI counter;
NI max;
Ttrunk190052* head;
Ttrunkseq190054* data;
};
struct  Tlinkedlist133028  {
Tlistentry133022* head;
Tlistentry133022* tail;
NI counter;
};
struct  Tidtable193861  {
NI counter;
Tidpairseq193859* data;
};
typedef N_NIMCALL_PTR(Tnode193813*, TY247072) (Tcontext247023* c, Tnode193813* n);
typedef N_NIMCALL_PTR(Tnode193813*, TY247077) (Tcontext247023* c, Tnode193813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode193813*, TY247085) (Tcontext247023* c, Tnode193813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode193813*, TY247093) (Tcontext247023* c, Tnode193813* n);
typedef N_NIMCALL_PTR(Tnode193813*, TY247098) (Tcontext247023* c, Tnode193813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode193813*, TY247106) (Tcontext247023* c, Tnode193813* n);
typedef N_NIMCALL_PTR(Tnode193813*, TY247111) (Tcontext247023* c, Tnode193813* n, Tnode193813* norig, NU32 filter);
typedef N_NIMCALL_PTR(Ttype193849*, TY247118) (Tcontext247023* c, Tnode193813* n, Ttype193849* prev);
typedef struct {
N_NIMCALL_PTR(Tnode193813*, ClPrc) (Tcontext247023* c, Tidtable193861 pt, Tnode193813* n, void* ClEnv);
void* ClEnv;
} TY247124;
typedef struct {
N_NIMCALL_PTR(Tsym193843*, ClPrc) (Tcontext247023* c, Tsym193843* fn, Tidtable193861 pt, Tlineinfo165338 info, void* ClEnv);
void* ClEnv;
} TY247130;
typedef N_NIMCALL_PTR(Tsym193843*, TY247146) (Tcontext247023* c, Tsym193843* dc, Ttype193849* t, Tlineinfo165338 info, NU8 op);
struct  Tcontext247023  {
  Tpasscontext244005 Sup;
Tsym193843* module;
Tscope193837* currentscope;
Tscope193837* importtable;
Tscope193837* toplevelscope;
Tproccon247011* p;
Tsymseq193815* friendmodules;
NI instcounter;
Intset190056 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI incompilescontext;
NI ingenericinst;
Tsymseq193815* converters;
Tsymseq193815* patterns;
Tlinkedlist133028 optionstack;
Tidtable193861 symmapping;
Tlinkedlist133028 libs;
TY247072 semconstexpr;
TY247077 semexpr;
TY247085 semtryexpr;
TY247093 semtryconstexpr;
TY247098 semoperand;
TY247106 semconstboolexpr;
TY247111 semoverloadedcall;
TY247118 semtypenode;
TY247124 seminferredlambda;
TY247130 semgenerateinstance;
Intset190056 includedfiles;
Tstrtable193817 userpragmas;
Tctx246048* evalcontext;
Intset190056 unknownidents;
TY247141* generics;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY247146 insttypeboundop;
};
typedef NI TY27820[16];
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
struct  Tinstantiation193833  {
Tsym193843* sym;
Ttypeseq193845* concretetypes;
TY193933* usedby;
};
struct  Tproccon247011  {
Tsym193843* owner;
Tsym193843* resultsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon247011* next;
NIM_BOOL wasforwarded;
Tnode193813* bracketexpr;
};
struct  Ttrunk190052  {
Ttrunk190052* next;
NI key;
TY27820 bits;
};
struct  Tidpair193857  {
Tidobj169015* key;
TNimObject* val;
};
struct  Tctx246048  {
  Tpasscontext244005 Sup;
TY246253* code;
TY166036* debug;
Tnode193813* globals;
Tnode193813* constants;
Ttypeseq193845* types;
Tnode193813* currentexceptiona;
Tnode193813* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype246232* prc;
Tsym193843* module;
Tnode193813* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo165338 comesfromheuristic;
TY246272* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair247013  {
Tsym193843* genericsym;
Tinstantiation193833* inst;
};
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
struct TY246239 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY246239 TY246236[256];
struct  PprocHEX3Aobjecttype246232  {
TY246233* blocks;
Tsym193843* sym;
TY246236 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs246042* args, void* ClEnv);
void* ClEnv;
} Vmcallback246044;
struct TY246273 {
NimStringDesc* Field0;
Vmcallback246044 Field1;
};
struct  Tblock246030  {
Tsym193843* label;
TY246213* fixups;
};
struct  Vmargs246042  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode193813* currentexception;
};
struct Ttypeseq193845 {
  TGenericSeq Sup;
  Ttype193849* data[SEQ_DECL_SIZE];
};
struct TY193944 {
  TGenericSeq Sup;
  Tinstantiation193833* data[SEQ_DECL_SIZE];
};
struct Tsymseq193815 {
  TGenericSeq Sup;
  Tsym193843* data[SEQ_DECL_SIZE];
};
struct Tnodeseq193807 {
  TGenericSeq Sup;
  Tnode193813* data[SEQ_DECL_SIZE];
};
struct Ttrunkseq190054 {
  TGenericSeq Sup;
  Ttrunk190052* data[SEQ_DECL_SIZE];
};
struct Tidpairseq193859 {
  TGenericSeq Sup;
  Tidpair193857 data[SEQ_DECL_SIZE];
};
struct TY247141 {
  TGenericSeq Sup;
  Tinstantiationpair247013 data[SEQ_DECL_SIZE];
};
struct TY193933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY246253 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY166036 {
  TGenericSeq Sup;
  Tlineinfo165338 data[SEQ_DECL_SIZE];
};
struct TY246272 {
  TGenericSeq Sup;
  TY246273 data[SEQ_DECL_SIZE];
};
struct TY246233 {
  TGenericSeq Sup;
  Tblock246030 data[SEQ_DECL_SIZE];
};
struct TY246213 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, pluginmatches_409029)(PluginHEX3Aobjecttype409019* p, Tsym193843* s);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(Transformation409013, getplugin_409094)(Tsym193843* fn);
N_NIMCALL(void, registerplugin_409124)(NimStringDesc* package, NimStringDesc* module, NimStringDesc* fn, Transformation409013 t);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP8067)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(Tident169021*, getident_169463)(NimStringDesc* identifier);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46746*, usrtocell_50246)(void* usr);
static N_INLINE(void, rtladdzct_51804)(Tcell46746* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46762* s, Tcell46746* c);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52622)(Tcell46746* c);
static N_INLINE(NIM_BOOL, canbecycleroot_50267)(Tcell46746* c);
static N_INLINE(void, rtladdcycleroot_51023)(Tcell46746* c);
N_NOINLINE(void, incl_47465)(Tcellset46758* s, Tcell46746* cell);
static N_INLINE(void, decref_52204)(Tcell46746* c);
extern TFrame* frameptr_17042;
PluginHEX3Aobjecttype409019* head_409089;
TNimType NTI409019; /* Plugin:ObjectType */
extern TNimType NTI169019; /* PIdent */
TNimType NTI409013; /* Transformation */
TNimType NTI409015; /* Plugin */
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

N_NIMCALL(NIM_BOOL, pluginmatches_409029)(PluginHEX3Aobjecttype409019* p, Tsym193843* s) {
	NIM_BOOL result;
	Tsym193843* module;
	Tsym193843* package;
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

N_NIMCALL(Transformation409013, getplugin_409094)(Tsym193843* fn) {
	Transformation409013 result;
	PluginHEX3Aobjecttype409019* it;
	nimfr("getPlugin", "plugins.nim")
{	result = 0;
	nimln(35, "plugins.nim");
	it = head_409089;
	{
		nimln(36, "plugins.nim");
		while (1) {
			if (!!((it == NIM_NIL))) goto LA2;
			nimln(37, "plugins.nim");
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = pluginmatches_409029(it, fn);
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
N_NIMCALL(void, TMP8067)(void* p, NI op) {
	PluginHEX3Aobjecttype409019* a;
	a = (PluginHEX3Aobjecttype409019*)p;
	nimGCvisit((void*)(*a).fn, op);
	nimGCvisit((void*)(*a).module, op);
	nimGCvisit((void*)(*a).package, op);
	nimGCvisit((void*)(*a).next, op);
}

static N_INLINE(Tcell46746*, usrtocell_50246)(void* usr) {
	Tcell46746* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	result = ((Tcell46746*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46746))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_51804)(Tcell46746* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_50217((&gch_48644.zct), c);
	popFrame();
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

static N_INLINE(void, decref_52204)(Tcell46746* c) {
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

N_NIMCALL(void, registerplugin_409124)(NimStringDesc* package, NimStringDesc* module, NimStringDesc* fn, Transformation409013 t) {
	PluginHEX3Aobjecttype409019* oldhead;
	PluginHEX3Aobjecttype409019* LOC1;
	nimfr("registerPlugin", "plugins.nim")
	nimln(41, "plugins.nim");
	oldhead = head_409089;
	nimln(42, "plugins.nim");
	LOC1 = 0;
	LOC1 = (PluginHEX3Aobjecttype409019*) newObj((&NTI409015), sizeof(PluginHEX3Aobjecttype409019));
	asgnRefNoCycle((void**) (&(*LOC1).fn), getident_169463(fn));
	asgnRefNoCycle((void**) (&(*LOC1).module), getident_169463(module));
	nimln(43, "plugins.nim");
	asgnRefNoCycle((void**) (&(*LOC1).package), getident_169463(package));
	(*LOC1).t = t;
	asgnRef((void**) (&(*LOC1).next), oldhead);
	asgnRef((void**) (&head_409089), LOC1);
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, compiler_pluginsInit)(void) {
	nimfr("plugins", "plugins.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_pluginsDatInit)(void) {
static TNimNode* TMP8066[5];
static TNimNode TMP8064[6];
NTI409019.size = sizeof(PluginHEX3Aobjecttype409019);
NTI409019.kind = 18;
NTI409019.base = 0;
TMP8066[0] = &TMP8064[1];
TMP8064[1].kind = 1;
TMP8064[1].offset = offsetof(PluginHEX3Aobjecttype409019, fn);
TMP8064[1].typ = (&NTI169019);
TMP8064[1].name = "fn";
TMP8066[1] = &TMP8064[2];
TMP8064[2].kind = 1;
TMP8064[2].offset = offsetof(PluginHEX3Aobjecttype409019, module);
TMP8064[2].typ = (&NTI169019);
TMP8064[2].name = "module";
TMP8066[2] = &TMP8064[3];
TMP8064[3].kind = 1;
TMP8064[3].offset = offsetof(PluginHEX3Aobjecttype409019, package);
TMP8064[3].typ = (&NTI169019);
TMP8064[3].name = "package";
TMP8066[3] = &TMP8064[4];
NTI409013.size = sizeof(Transformation409013);
NTI409013.kind = 25;
NTI409013.base = 0;
NTI409013.flags = 3;
TMP8064[4].kind = 1;
TMP8064[4].offset = offsetof(PluginHEX3Aobjecttype409019, t);
TMP8064[4].typ = (&NTI409013);
TMP8064[4].name = "t";
TMP8066[4] = &TMP8064[5];
TMP8064[5].kind = 1;
TMP8064[5].offset = offsetof(PluginHEX3Aobjecttype409019, next);
TMP8064[5].typ = (&NTI409015);
TMP8064[5].name = "next";
TMP8064[0].len = 5; TMP8064[0].kind = 2; TMP8064[0].sons = &TMP8066[0];
NTI409019.node = &TMP8064[0];
NTI409015.size = sizeof(PluginHEX3Aobjecttype409019*);
NTI409015.kind = 22;
NTI409015.base = (&NTI409019);
NTI409015.marker = TMP8067;
}

