/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Tnode192813 Tnode192813;
typedef struct Tcontext246023 Tcontext246023;
typedef struct Ttype192849 Ttype192849;
typedef struct Tlineinfo164338 Tlineinfo164338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym192843 Tsym192843;
typedef struct Tident168021 Tident168021;
typedef struct Tnodeseq192807 Tnodeseq192807;
typedef struct Tidobj168015 Tidobj168015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq192845 Ttypeseq192845;
typedef struct Tloc192827 Tloc192827;
typedef struct Ropeobj162009 Ropeobj162009;
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
typedef struct Tscope192837 Tscope192837;
typedef struct Tpasscontext243005 Tpasscontext243005;
typedef struct Tproccon246011 Tproccon246011;
typedef struct Tsymseq192815 Tsymseq192815;
typedef struct Intset189056 Intset189056;
typedef struct Ttrunk189052 Ttrunk189052;
typedef struct Ttrunkseq189054 Ttrunkseq189054;
typedef struct Tlinkedlist130028 Tlinkedlist130028;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tidtable192861 Tidtable192861;
typedef struct Tidpairseq192859 Tidpairseq192859;
typedef struct Tstrtable192817 Tstrtable192817;
typedef struct Tctx245048 Tctx245048;
typedef struct TY246141 TY246141;
typedef struct Ttabiter200119 Ttabiter200119;
typedef struct TY192944 TY192944;
typedef struct Tlib192831 Tlib192831;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct Tidpair192857 Tidpair192857;
typedef struct TY245253 TY245253;
typedef struct TY165033 TY165033;
typedef struct PprocHEX3Aobjecttype245232 PprocHEX3Aobjecttype245232;
typedef struct TY245272 TY245272;
typedef struct Tinstantiationpair246013 Tinstantiationpair246013;
typedef struct Tinstantiation192833 Tinstantiation192833;
typedef struct TY245233 TY245233;
typedef struct TY245239 TY245239;
typedef struct TY245273 TY245273;
typedef struct Vmargs245042 Vmargs245042;
typedef struct TY192933 TY192933;
typedef struct Tblock245030 Tblock245030;
typedef struct TY245213 TY245213;
struct  Tlineinfo164338  {
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
struct  Tnode192813  {
Ttype192849* typ;
Tlineinfo164338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym192843* sym;
} S4;
struct {Tident168021* ident;
} S5;
struct {Tnodeseq192807* sons;
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
struct  Tidobj168015  {
  TNimObject Sup;
NI id;
};
struct  Tloc192827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype192849* t;
Ropeobj162009* r;
Ropeobj162009* heaproot;
};
struct  Ttype192849  {
  Tidobj168015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq192845* sons;
Tnode192813* n;
Tsym192843* owner;
Tsym192843* sym;
Tsym192843* destructor;
Tsym192843* deepcopy;
Tsym192843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc192827 loc;
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
struct  Tpasscontext243005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Intset189056  {
NI counter;
NI max;
Ttrunk189052* head;
Ttrunkseq189054* data;
};
struct  Tlinkedlist130028  {
Tlistentry130022* head;
Tlistentry130022* tail;
NI counter;
};
struct  Tidtable192861  {
NI counter;
Tidpairseq192859* data;
};
typedef N_NIMCALL_PTR(Tnode192813*, TY246072) (Tcontext246023* c, Tnode192813* n);
typedef N_NIMCALL_PTR(Tnode192813*, TY246077) (Tcontext246023* c, Tnode192813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode192813*, TY246085) (Tcontext246023* c, Tnode192813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode192813*, TY246093) (Tcontext246023* c, Tnode192813* n);
typedef N_NIMCALL_PTR(Tnode192813*, TY246098) (Tcontext246023* c, Tnode192813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode192813*, TY246106) (Tcontext246023* c, Tnode192813* n);
typedef N_NIMCALL_PTR(Tnode192813*, TY246111) (Tcontext246023* c, Tnode192813* n, Tnode192813* norig, NU32 filter);
typedef N_NIMCALL_PTR(Ttype192849*, TY246118) (Tcontext246023* c, Tnode192813* n, Ttype192849* prev);
typedef struct {
N_NIMCALL_PTR(Tnode192813*, ClPrc) (Tcontext246023* c, Tidtable192861 pt, Tnode192813* n, void* ClEnv);
void* ClEnv;
} TY246124;
typedef struct {
N_NIMCALL_PTR(Tsym192843*, ClPrc) (Tcontext246023* c, Tsym192843* fn, Tidtable192861 pt, Tlineinfo164338 info, void* ClEnv);
void* ClEnv;
} TY246130;
struct  Tstrtable192817  {
NI counter;
Tsymseq192815* data;
};
typedef N_NIMCALL_PTR(Tsym192843*, TY246146) (Tcontext246023* c, Tsym192843* dc, Ttype192849* t, Tlineinfo164338 info, NU8 op);
struct  Tcontext246023  {
  Tpasscontext243005 Sup;
Tsym192843* module;
Tscope192837* currentscope;
Tscope192837* importtable;
Tscope192837* toplevelscope;
Tproccon246011* p;
Tsymseq192815* friendmodules;
NI instcounter;
Intset189056 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI incompilescontext;
NI ingenericinst;
Tsymseq192815* converters;
Tsymseq192815* patterns;
Tlinkedlist130028 optionstack;
Tidtable192861 symmapping;
Tlinkedlist130028 libs;
TY246072 semconstexpr;
TY246077 semexpr;
TY246085 semtryexpr;
TY246093 semtryconstexpr;
TY246098 semoperand;
TY246106 semconstboolexpr;
TY246111 semoverloadedcall;
TY246118 semtypenode;
TY246124 seminferredlambda;
TY246130 semgenerateinstance;
Intset189056 includedfiles;
Tstrtable192817 userpragmas;
Tctx245048* evalcontext;
Intset189056 unknownidents;
TY246141* generics;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY246146 insttypeboundop;
};
struct  Tscope192837  {
NI depthlevel;
Tstrtable192817 symbols;
Tnodeseq192807* usingsyms;
Tscope192837* parent;
};
struct  Ttabiter200119  {
NI h;
};
struct  Tsym192843  {
  Tidobj168015 Sup;
NU8 kind;
union{
struct {Ttypeseq192845* typeinstcache;
Tscope192837* typscope;
} S1;
struct {TY192944* procinstcache;
Tsym192843* gcunsafetyreason;
} S2;
struct {TY192944* usedgenerics;
Tstrtable192817 tab;
} S3;
struct {Tsym192843* guard;
} S4;
} kindU;
NU16 magic;
Ttype192849* typ;
Tident168021* name;
Tlineinfo164338 info;
Tsym192843* owner;
NU32 flags;
Tnode192813* ast;
NU32 options;
NI position;
NI offset;
Tloc192827 loc;
Tlib192831* annex;
Tnode192813* constraint;
};
typedef N_NIMCALL_PTR(Tnode192813*, Transformation408013) (Tcontext246023* c, Tnode192813* n);
struct  Tident168021  {
  Tidobj168015 Sup;
NimStringDesc* s;
Tident168021* next;
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
struct  Ropeobj162009  {
  TNimObject Sup;
Ropeobj162009* left;
Ropeobj162009* right;
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
struct  Tproccon246011  {
Tsym192843* owner;
Tsym192843* resultsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon246011* next;
NIM_BOOL wasforwarded;
Tnode192813* bracketexpr;
};
struct  Ttrunk189052  {
Ttrunk189052* next;
NI key;
TY27820 bits;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tidpair192857  {
Tidobj168015* key;
TNimObject* val;
};
struct  Tctx245048  {
  Tpasscontext243005 Sup;
TY245253* code;
TY165033* debug;
Tnode192813* globals;
Tnode192813* constants;
Ttypeseq192845* types;
Tnode192813* currentexceptiona;
Tnode192813* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype245232* prc;
Tsym192843* module;
Tnode192813* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo164338 comesfromheuristic;
TY245272* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair246013  {
Tsym192843* genericsym;
Tinstantiation192833* inst;
};
struct  Tlib192831  {
  Tlistentry130022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj162009* name;
Tnode192813* path;
};
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
struct TY245239 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY245239 TY245236[256];
struct  PprocHEX3Aobjecttype245232  {
TY245233* blocks;
Tsym192843* sym;
TY245236 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs245042* args, void* ClEnv);
void* ClEnv;
} Vmcallback245044;
struct TY245273 {
NimStringDesc* Field0;
Vmcallback245044 Field1;
};
struct  Tinstantiation192833  {
Tsym192843* sym;
Ttypeseq192845* concretetypes;
TY192933* usedby;
};
struct  Tblock245030  {
Tsym192843* label;
TY245213* fixups;
};
struct  Vmargs245042  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode192813* currentexception;
};
struct Tnodeseq192807 {
  TGenericSeq Sup;
  Tnode192813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq192845 {
  TGenericSeq Sup;
  Ttype192849* data[SEQ_DECL_SIZE];
};
struct Tsymseq192815 {
  TGenericSeq Sup;
  Tsym192843* data[SEQ_DECL_SIZE];
};
struct Ttrunkseq189054 {
  TGenericSeq Sup;
  Ttrunk189052* data[SEQ_DECL_SIZE];
};
struct Tidpairseq192859 {
  TGenericSeq Sup;
  Tidpair192857 data[SEQ_DECL_SIZE];
};
struct TY246141 {
  TGenericSeq Sup;
  Tinstantiationpair246013 data[SEQ_DECL_SIZE];
};
struct TY192944 {
  TGenericSeq Sup;
  Tinstantiation192833* data[SEQ_DECL_SIZE];
};
struct TY245253 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY165033 {
  TGenericSeq Sup;
  Tlineinfo164338 data[SEQ_DECL_SIZE];
};
struct TY245272 {
  TGenericSeq Sup;
  TY245273 data[SEQ_DECL_SIZE];
};
struct TY245233 {
  TGenericSeq Sup;
  Tblock245030 data[SEQ_DECL_SIZE];
};
struct TY192933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY245213 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tnode192813*, semlocals_409020)(Tcontext246023* c, Tnode192813* n);
N_NIMCALL(Ttype192849*, newtypes_246218)(NU8 kind, Tcontext246023* c);
N_NIMCALL(Tnode192813*, newnodeit_194807)(NU8 kind, Tlineinfo164338 info, Ttype192849* typ);
N_NIMCALL(Tnode192813*, newnodei_194351)(NU8 kind, Tlineinfo164338 info);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46746*, usrtocell_50246)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_51804)(Tcell46746* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46762* s, Tcell46746* c);
N_NIMCALL(Tsym192843*, inittabiter_200124)(Ttabiter200119* ti, Tstrtable192817 tab);
N_NIMCALL(Ttype192849*, skiptypes_196167)(Ttype192849* t, NU64 kinds);
N_NIMCALL(Tsym192843*, newsym_193655)(NU8 symkind, Tident168021* name, Tsym192843* owner, Tlineinfo164338 info);
N_NIMCALL(Tsym192843*, getcurrowner_246255)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, addson_194819)(Tnode192813* father, Tnode192813* son);
N_NIMCALL(Tnode192813*, newsymnode_194325)(Tsym192843* sym);
N_NIMCALL(void, addsonskipintlit_240731)(Ttype192849* father, Ttype192849* son);
N_NIMCALL(Tnode192813*, newsymnode_194338)(Tsym192843* sym, Tlineinfo164338 info);
static N_INLINE(Tnode192813*, newderef_359024)(Tnode192813* n);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, add_193164)(Tnode192813* father, Tnode192813* son);
N_NIMCALL(Tsym192843*, nextiter_200132)(Ttabiter200119* ti, Tstrtable192817 tab);
N_NIMCALL(void, registerplugin_408124)(NimStringDesc* package, NimStringDesc* module, NimStringDesc* fn, Transformation408013 t);
STRING_LITERAL(TMP8096, "stdlib", 6);
STRING_LITERAL(TMP8097, "system", 6);
STRING_LITERAL(TMP8098, "locals", 6);
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

static N_INLINE(Tnode192813*, newderef_359024)(Tnode192813* n) {
	Tnode192813* result;
	nimfr("newDeref", "lowerings.nim")
	result = 0;
	nimln(19, "lowerings.nim");
	if ((NU)(((NI) 0)) >= (NU)((*(*n).typ).sons->Sup.len)) raiseIndexError();
	result = newnodeit_194807(((NU8) 65), (*n).info, (*(*n).typ).sons->data[((NI) 0)]);
	nimln(20, "lowerings.nim");
	addson_194819(result, n);
	popFrame();
	return result;
}

N_NIMCALL(Tnode192813*, semlocals_409020)(Tcontext246023* c, Tnode192813* n) {
	Tnode192813* result;
	NI counter;
	Ttype192849* tupletype;
	nimfr("semLocals", "locals.nim")
	result = 0;
	nimln(15, "locals.nim");
	counter = ((NI) 0);
	nimln(16, "locals.nim");
	tupletype = newtypes_246218(((NU8) 18), c);
	nimln(17, "locals.nim");
	result = newnodeit_194807(((NU8) 37), (*n).info, tupletype);
	nimln(18, "locals.nim");
	asgnRefNoCycle((void**) (&(*tupletype).n), newnodei_194351(((NU8) 138), (*n).info));
	{
		Tscope192837* scope_409027;
		Tscope192837* HEX3Atmp_409100;
		Tscope192837* current_409103;
		scope_409027 = 0;
		HEX3Atmp_409100 = 0;
		nimln(20, "locals.nim");
		HEX3Atmp_409100 = (*c).currentscope;
		nimln(65, "lookups.nim");
		current_409103 = HEX3Atmp_409100;
		{
			nimln(66, "lookups.nim");
			while (1) {
				if (!!((current_409103 == NIM_NIL))) goto LA3;
				nimln(65, "lookups.nim");
				scope_409027 = current_409103;
				nimln(21, "locals.nim");
				{
					if (!(scope_409027 == (*c).toplevelscope)) goto LA6;
					goto LA1;
				}
				LA6: ;
				{
					Tsym192843* it_409039;
					Tstrtable192817 HEX3Atmp_409094;
					Ttabiter200119 it_409097;
					Tsym192843* s_409099;
					it_409039 = 0;
					memset((void*)(&HEX3Atmp_409094), 0, sizeof(HEX3Atmp_409094));
					nimln(22, "locals.nim");
					HEX3Atmp_409094.counter = (*scope_409027).symbols.counter;
					HEX3Atmp_409094.data = (*scope_409027).symbols.data;
					memset((void*)(&it_409097), 0, sizeof(it_409097));
					nimln(734, "astalgo.nim");
					s_409099 = inittabiter_200124((&it_409097), HEX3Atmp_409094);
					{
						nimln(735, "astalgo.nim");
						while (1) {
							if (!!((s_409099 == NIM_NIL))) goto LA10;
							nimln(734, "astalgo.nim");
							it_409039 = s_409099;
							nimln(26, "locals.nim");
							{
								NIM_BOOL LOC13;
								Ttype192849* LOC15;
								Tsym192843* field;
								Tsym192843* LOC18;
								NI TMP8095;
								Tnode192813* LOC19;
								Tnode192813* a;
								LOC13 = 0;
								LOC13 = ((2099976 &(1<<(((*it_409039).kind)&31)))!=0);
								if (!(LOC13)) goto LA14;
								nimln(27, "locals.nim");
								LOC15 = 0;
								LOC15 = skiptypes_196167((*it_409039).typ, 8390656);
								LOC13 = !(((IL64(576742227414352328) &(IL64(1)<<(((*LOC15).kind)&IL64(63))))!=0));
								LA14: ;
								if (!LOC13) goto LA16;
								nimln(30, "locals.nim");
								LOC18 = 0;
								LOC18 = getcurrowner_246255();
								field = newsym_193655(((NU8) 19), (*it_409039).name, LOC18, (*n).info);
								nimln(31, "locals.nim");
								asgnRefNoCycle((void**) (&(*field).typ), skiptypes_196167((*it_409039).typ, 8390656));
								nimln(32, "locals.nim");
								(*field).position = counter;
								nimln(33, "locals.nim");
								TMP8095 = addInt(counter, ((NI) 1));
								counter = (NI)(TMP8095);
								nimln(35, "locals.nim");
								LOC19 = 0;
								LOC19 = newsymnode_194325(field);
								addson_194819((*tupletype).n, LOC19);
								nimln(36, "locals.nim");
								addsonskipintlit_240731(tupletype, (*field).typ);
								nimln(38, "locals.nim");
								a = newsymnode_194338(it_409039, (*result).info);
								nimln(39, "locals.nim");
								{
									Ttype192849* LOC22;
									LOC22 = 0;
									LOC22 = skiptypes_196167((*it_409039).typ, 2048);
									if (!((*LOC22).kind == ((NU8) 23))) goto LA23;
									a = newderef_359024(a);
								}
								LA23: ;
								nimln(40, "locals.nim");
								add_193164(result, a);
							}
							LA16: ;
							nimln(737, "astalgo.nim");
							s_409099 = nextiter_200132((&it_409097), HEX3Atmp_409094);
						} LA10: ;
					}
				}
				nimln(68, "lookups.nim");
				current_409103 = (*current_409103).parent;
			} LA3: ;
		}
	} LA1: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_localsInit)(void) {
	nimfr("locals", "locals.nim")
	nimln(42, "locals.nim");
	registerplugin_408124(((NimStringDesc*) &TMP8096), ((NimStringDesc*) &TMP8097), ((NimStringDesc*) &TMP8098), semlocals_409020);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_localsDatInit)(void) {
}

