/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Tnode193813 Tnode193813;
typedef struct Tcontext247023 Tcontext247023;
typedef struct Ttype193849 Ttype193849;
typedef struct Tlineinfo165338 Tlineinfo165338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym193843 Tsym193843;
typedef struct Tident169021 Tident169021;
typedef struct Tnodeseq193807 Tnodeseq193807;
typedef struct Tidobj169015 Tidobj169015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq193845 Ttypeseq193845;
typedef struct Tloc193827 Tloc193827;
typedef struct Ropeobj163009 Ropeobj163009;
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
typedef struct Tscope193837 Tscope193837;
typedef struct Tpasscontext244005 Tpasscontext244005;
typedef struct Tproccon247011 Tproccon247011;
typedef struct Tsymseq193815 Tsymseq193815;
typedef struct Intset190056 Intset190056;
typedef struct Ttrunk190052 Ttrunk190052;
typedef struct Ttrunkseq190054 Ttrunkseq190054;
typedef struct Tlinkedlist133028 Tlinkedlist133028;
typedef struct Tlistentry133022 Tlistentry133022;
typedef struct Tidtable193861 Tidtable193861;
typedef struct Tidpairseq193859 Tidpairseq193859;
typedef struct Tstrtable193817 Tstrtable193817;
typedef struct Tctx246048 Tctx246048;
typedef struct TY247141 TY247141;
typedef struct Ttabiter201119 Ttabiter201119;
typedef struct TY193944 TY193944;
typedef struct Tlib193831 Tlib193831;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct Tidpair193857 Tidpair193857;
typedef struct TY246253 TY246253;
typedef struct TY166033 TY166033;
typedef struct PprocHEX3Aobjecttype246232 PprocHEX3Aobjecttype246232;
typedef struct TY246272 TY246272;
typedef struct Tinstantiationpair247013 Tinstantiationpair247013;
typedef struct Tinstantiation193833 Tinstantiation193833;
typedef struct TY246233 TY246233;
typedef struct TY246239 TY246239;
typedef struct TY246273 TY246273;
typedef struct Vmargs246042 Vmargs246042;
typedef struct TY193933 TY193933;
typedef struct Tblock246030 Tblock246030;
typedef struct TY246213 TY246213;
struct  Tlineinfo165338  {
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
struct  Tloc193827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype193849* t;
Ropeobj163009* r;
Ropeobj163009* heaproot;
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
struct  Tstrtable193817  {
NI counter;
Tsymseq193815* data;
};
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
struct  Tscope193837  {
NI depthlevel;
Tstrtable193817 symbols;
Tnodeseq193807* usingsyms;
Tscope193837* parent;
};
struct  Ttabiter201119  {
NI h;
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
typedef N_NIMCALL_PTR(Tnode193813*, Transformation409013) (Tcontext247023* c, Tnode193813* n);
struct  Tident169021  {
  Tidobj169015 Sup;
NimStringDesc* s;
Tident169021* next;
NI h;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Ropeobj163009  {
  TNimObject Sup;
Ropeobj163009* left;
Ropeobj163009* right;
NI length;
NimStringDesc* data;
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
struct  Tlistentry133022  {
  TNimObject Sup;
Tlistentry133022* prev;
Tlistentry133022* next;
};
struct  Tidpair193857  {
Tidobj169015* key;
TNimObject* val;
};
struct  Tctx246048  {
  Tpasscontext244005 Sup;
TY246253* code;
TY166033* debug;
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
struct  Tlib193831  {
  Tlistentry133022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj163009* name;
Tnode193813* path;
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
struct  Tinstantiation193833  {
Tsym193843* sym;
Ttypeseq193845* concretetypes;
TY193933* usedby;
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
struct Tnodeseq193807 {
  TGenericSeq Sup;
  Tnode193813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq193845 {
  TGenericSeq Sup;
  Ttype193849* data[SEQ_DECL_SIZE];
};
struct Tsymseq193815 {
  TGenericSeq Sup;
  Tsym193843* data[SEQ_DECL_SIZE];
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
struct TY193944 {
  TGenericSeq Sup;
  Tinstantiation193833* data[SEQ_DECL_SIZE];
};
struct TY246253 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY166033 {
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
struct TY193933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY246213 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tnode193813*, semlocals_410020)(Tcontext247023* c, Tnode193813* n);
N_NIMCALL(Ttype193849*, newtypes_247218)(NU8 kind, Tcontext247023* c);
N_NIMCALL(Tnode193813*, newnodeit_195807)(NU8 kind, Tlineinfo165338 info, Ttype193849* typ);
N_NIMCALL(Tnode193813*, newnodei_195351)(NU8 kind, Tlineinfo165338 info);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46746*, usrtocell_50246)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_51804)(Tcell46746* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46762* s, Tcell46746* c);
N_NIMCALL(Tsym193843*, inittabiter_201124)(Ttabiter201119* ti, Tstrtable193817 tab);
N_NIMCALL(Ttype193849*, skiptypes_197167)(Ttype193849* t, NU64 kinds);
N_NIMCALL(Tsym193843*, newsym_194655)(NU8 symkind, Tident169021* name, Tsym193843* owner, Tlineinfo165338 info);
N_NIMCALL(Tsym193843*, getcurrowner_247255)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, addson_195819)(Tnode193813* father, Tnode193813* son);
N_NIMCALL(Tnode193813*, newsymnode_195325)(Tsym193843* sym);
N_NIMCALL(void, addsonskipintlit_241731)(Ttype193849* father, Ttype193849* son);
N_NIMCALL(Tnode193813*, newsymnode_195338)(Tsym193843* sym, Tlineinfo165338 info);
static N_INLINE(Tnode193813*, newderef_360024)(Tnode193813* n);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, add_194164)(Tnode193813* father, Tnode193813* son);
N_NIMCALL(Tsym193843*, nextiter_201132)(Ttabiter201119* ti, Tstrtable193817 tab);
N_NIMCALL(void, registerplugin_409124)(NimStringDesc* package, NimStringDesc* module, NimStringDesc* fn, Transformation409013 t);
STRING_LITERAL(TMP8074, "stdlib", 6);
STRING_LITERAL(TMP8075, "system", 6);
STRING_LITERAL(TMP8076, "locals", 6);
extern TFrame* frameptr_17042;
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

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = 0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI) 0) <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (((NI) 0) <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result;
}

static N_INLINE(Tnode193813*, newderef_360024)(Tnode193813* n) {
	Tnode193813* result;
	nimfr("newDeref", "lowerings.nim")
	result = 0;
	nimln(19, "lowerings.nim");
	if ((NU)(((NI) 0)) >= (NU)((*(*n).typ).sons->Sup.len)) raiseIndexError();
	result = newnodeit_195807(((NU8) 65), (*n).info, (*(*n).typ).sons->data[((NI) 0)]);
	nimln(20, "lowerings.nim");
	addson_195819(result, n);
	popFrame();
	return result;
}

N_NIMCALL(Tnode193813*, semlocals_410020)(Tcontext247023* c, Tnode193813* n) {
	Tnode193813* result;
	NI counter;
	Ttype193849* tupletype;
	nimfr("semLocals", "locals.nim")
	result = 0;
	nimln(15, "locals.nim");
	counter = ((NI) 0);
	nimln(16, "locals.nim");
	tupletype = newtypes_247218(((NU8) 18), c);
	nimln(17, "locals.nim");
	result = newnodeit_195807(((NU8) 37), (*n).info, tupletype);
	nimln(18, "locals.nim");
	asgnRefNoCycle((void**) (&(*tupletype).n), newnodei_195351(((NU8) 138), (*n).info));
	{
		Tscope193837* scope_410027;
		Tscope193837* HEX3Atmp_410100;
		Tscope193837* current_410103;
		scope_410027 = 0;
		HEX3Atmp_410100 = 0;
		nimln(20, "locals.nim");
		HEX3Atmp_410100 = (*c).currentscope;
		nimln(65, "lookups.nim");
		current_410103 = HEX3Atmp_410100;
		{
			nimln(66, "lookups.nim");
			while (1) {
				if (!!((current_410103 == NIM_NIL))) goto LA3;
				nimln(65, "lookups.nim");
				scope_410027 = current_410103;
				nimln(21, "locals.nim");
				{
					if (!(scope_410027 == (*c).toplevelscope)) goto LA6;
					goto LA1;
				}
				LA6: ;
				{
					Tsym193843* it_410039;
					Tstrtable193817 HEX3Atmp_410094;
					Ttabiter201119 it_410097;
					Tsym193843* s_410099;
					it_410039 = 0;
					memset((void*)(&HEX3Atmp_410094), 0, sizeof(HEX3Atmp_410094));
					nimln(22, "locals.nim");
					HEX3Atmp_410094.counter = (*scope_410027).symbols.counter;
					HEX3Atmp_410094.data = (*scope_410027).symbols.data;
					memset((void*)(&it_410097), 0, sizeof(it_410097));
					nimln(734, "astalgo.nim");
					s_410099 = inittabiter_201124((&it_410097), HEX3Atmp_410094);
					{
						nimln(735, "astalgo.nim");
						while (1) {
							if (!!((s_410099 == NIM_NIL))) goto LA10;
							nimln(734, "astalgo.nim");
							it_410039 = s_410099;
							nimln(26, "locals.nim");
							{
								NIM_BOOL LOC13;
								Ttype193849* LOC15;
								Tsym193843* field;
								Tsym193843* LOC18;
								NI TMP8073;
								Tnode193813* LOC19;
								Tnode193813* a;
								LOC13 = 0;
								LOC13 = ((2099976 &(1<<(((*it_410039).kind)&31)))!=0);
								if (!(LOC13)) goto LA14;
								nimln(27, "locals.nim");
								LOC15 = 0;
								LOC15 = skiptypes_197167((*it_410039).typ, 8390656);
								LOC13 = !(((IL64(576742227414352328) &(IL64(1)<<(((*LOC15).kind)&IL64(63))))!=0));
								LA14: ;
								if (!LOC13) goto LA16;
								nimln(30, "locals.nim");
								LOC18 = 0;
								LOC18 = getcurrowner_247255();
								field = newsym_194655(((NU8) 19), (*it_410039).name, LOC18, (*n).info);
								nimln(31, "locals.nim");
								asgnRefNoCycle((void**) (&(*field).typ), skiptypes_197167((*it_410039).typ, 8390656));
								nimln(32, "locals.nim");
								(*field).position = counter;
								nimln(33, "locals.nim");
								TMP8073 = addInt(counter, ((NI) 1));
								counter = (NI)(TMP8073);
								nimln(35, "locals.nim");
								LOC19 = 0;
								LOC19 = newsymnode_195325(field);
								addson_195819((*tupletype).n, LOC19);
								nimln(36, "locals.nim");
								addsonskipintlit_241731(tupletype, (*field).typ);
								nimln(38, "locals.nim");
								a = newsymnode_195338(it_410039, (*result).info);
								nimln(39, "locals.nim");
								{
									Ttype193849* LOC22;
									LOC22 = 0;
									LOC22 = skiptypes_197167((*it_410039).typ, 2048);
									if (!((*LOC22).kind == ((NU8) 23))) goto LA23;
									a = newderef_360024(a);
								}
								LA23: ;
								nimln(40, "locals.nim");
								add_194164(result, a);
							}
							LA16: ;
							nimln(737, "astalgo.nim");
							s_410099 = nextiter_201132((&it_410097), HEX3Atmp_410094);
						} LA10: ;
					}
				}
				nimln(68, "lookups.nim");
				current_410103 = (*current_410103).parent;
			} LA3: ;
		}
	} LA1: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_localsInit)(void) {
	nimfr("locals", "locals.nim")
	nimln(42, "locals.nim");
	registerplugin_409124(((NimStringDesc*) &TMP8074), ((NimStringDesc*) &TMP8075), ((NimStringDesc*) &TMP8076), semlocals_410020);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_localsDatInit)(void) {
}

