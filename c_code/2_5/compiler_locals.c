/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Tnode191813 Tnode191813;
typedef struct Tcontext245023 Tcontext245023;
typedef struct Ttype191849 Ttype191849;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym191843 Tsym191843;
typedef struct Tident167021 Tident167021;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Tidobj167015 Tidobj167015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj161009 Ropeobj161009;
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
typedef struct Tscope191837 Tscope191837;
typedef struct Tpasscontext242005 Tpasscontext242005;
typedef struct Tproccon245011 Tproccon245011;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Intset188056 Intset188056;
typedef struct Ttrunk188052 Ttrunk188052;
typedef struct Ttrunkseq188054 Ttrunkseq188054;
typedef struct Tlinkedlist130028 Tlinkedlist130028;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tidtable191861 Tidtable191861;
typedef struct Tidpairseq191859 Tidpairseq191859;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tctx244048 Tctx244048;
typedef struct TY245141 TY245141;
typedef struct Ttabiter199119 Ttabiter199119;
typedef struct TY191944 TY191944;
typedef struct Tlib191831 Tlib191831;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct Tidpair191857 Tidpair191857;
typedef struct TY244253 TY244253;
typedef struct TY164036 TY164036;
typedef struct PprocHEX3Aobjecttype244232 PprocHEX3Aobjecttype244232;
typedef struct TY244272 TY244272;
typedef struct Tinstantiationpair245013 Tinstantiationpair245013;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct TY244233 TY244233;
typedef struct TY244239 TY244239;
typedef struct TY244273 TY244273;
typedef struct Vmargs244042 Vmargs244042;
typedef struct TY191933 TY191933;
typedef struct Tblock244030 Tblock244030;
typedef struct TY244213 TY244213;
struct  Tlineinfo163338  {
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
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
};
struct  Tloc191827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype191849* t;
Ropeobj161009* r;
Ropeobj161009* heaproot;
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
struct  Tpasscontext242005  {
  TNimObject Sup;
NIM_BOOL fromcache;
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
struct  Tidtable191861  {
NI counter;
Tidpairseq191859* data;
};
typedef N_NIMCALL_PTR(Tnode191813*, TY245072) (Tcontext245023* c, Tnode191813* n);
typedef N_NIMCALL_PTR(Tnode191813*, TY245077) (Tcontext245023* c, Tnode191813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode191813*, TY245085) (Tcontext245023* c, Tnode191813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode191813*, TY245093) (Tcontext245023* c, Tnode191813* n);
typedef N_NIMCALL_PTR(Tnode191813*, TY245098) (Tcontext245023* c, Tnode191813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode191813*, TY245106) (Tcontext245023* c, Tnode191813* n);
typedef N_NIMCALL_PTR(Tnode191813*, TY245111) (Tcontext245023* c, Tnode191813* n, Tnode191813* norig, NU32 filter);
typedef N_NIMCALL_PTR(Ttype191849*, TY245118) (Tcontext245023* c, Tnode191813* n, Ttype191849* prev);
typedef struct {
N_NIMCALL_PTR(Tnode191813*, ClPrc) (Tcontext245023* c, Tidtable191861 pt, Tnode191813* n, void* ClEnv);
void* ClEnv;
} TY245124;
typedef struct {
N_NIMCALL_PTR(Tsym191843*, ClPrc) (Tcontext245023* c, Tsym191843* fn, Tidtable191861 pt, Tlineinfo163338 info, void* ClEnv);
void* ClEnv;
} TY245130;
struct  Tstrtable191817  {
NI counter;
Tsymseq191815* data;
};
typedef N_NIMCALL_PTR(Tsym191843*, TY245146) (Tcontext245023* c, Tsym191843* dc, Ttype191849* t, Tlineinfo163338 info, NU8 op);
struct  Tcontext245023  {
  Tpasscontext242005 Sup;
Tsym191843* module;
Tscope191837* currentscope;
Tscope191837* importtable;
Tscope191837* toplevelscope;
Tproccon245011* p;
Tsymseq191815* friendmodules;
NI instcounter;
Intset188056 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI incompilescontext;
NI ingenericinst;
Tsymseq191815* converters;
Tsymseq191815* patterns;
Tlinkedlist130028 optionstack;
Tidtable191861 symmapping;
Tlinkedlist130028 libs;
TY245072 semconstexpr;
TY245077 semexpr;
TY245085 semtryexpr;
TY245093 semtryconstexpr;
TY245098 semoperand;
TY245106 semconstboolexpr;
TY245111 semoverloadedcall;
TY245118 semtypenode;
TY245124 seminferredlambda;
TY245130 semgenerateinstance;
Intset188056 includedfiles;
Tstrtable191817 userpragmas;
Tctx244048* evalcontext;
Intset188056 unknownidents;
TY245141* generics;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY245146 insttypeboundop;
};
struct  Tscope191837  {
NI depthlevel;
Tstrtable191817 symbols;
Tnodeseq191807* usingsyms;
Tscope191837* parent;
};
struct  Ttabiter199119  {
NI h;
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
typedef N_NIMCALL_PTR(Tnode191813*, Transformation407013) (Tcontext245023* c, Tnode191813* n);
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
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
struct  Ropeobj161009  {
  TNimObject Sup;
Ropeobj161009* left;
Ropeobj161009* right;
NI length;
NimStringDesc* data;
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
struct  Tproccon245011  {
Tsym191843* owner;
Tsym191843* resultsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon245011* next;
NIM_BOOL wasforwarded;
Tnode191813* bracketexpr;
};
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
struct  Tidpair191857  {
Tidobj167015* key;
TNimObject* val;
};
struct  Tctx244048  {
  Tpasscontext242005 Sup;
TY244253* code;
TY164036* debug;
Tnode191813* globals;
Tnode191813* constants;
Ttypeseq191845* types;
Tnode191813* currentexceptiona;
Tnode191813* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype244232* prc;
Tsym191843* module;
Tnode191813* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo163338 comesfromheuristic;
TY244272* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair245013  {
Tsym191843* genericsym;
Tinstantiation191833* inst;
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
struct TY244239 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY244239 TY244236[256];
struct  PprocHEX3Aobjecttype244232  {
TY244233* blocks;
Tsym191843* sym;
TY244236 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs244042* args, void* ClEnv);
void* ClEnv;
} Vmcallback244044;
struct TY244273 {
NimStringDesc* Field0;
Vmcallback244044 Field1;
};
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
};
struct  Tblock244030  {
Tsym191843* label;
TY244213* fixups;
};
struct  Vmargs244042  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode191813* currentexception;
};
struct Tnodeseq191807 {
  TGenericSeq Sup;
  Tnode191813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq191845 {
  TGenericSeq Sup;
  Ttype191849* data[SEQ_DECL_SIZE];
};
struct Tsymseq191815 {
  TGenericSeq Sup;
  Tsym191843* data[SEQ_DECL_SIZE];
};
struct Ttrunkseq188054 {
  TGenericSeq Sup;
  Ttrunk188052* data[SEQ_DECL_SIZE];
};
struct Tidpairseq191859 {
  TGenericSeq Sup;
  Tidpair191857 data[SEQ_DECL_SIZE];
};
struct TY245141 {
  TGenericSeq Sup;
  Tinstantiationpair245013 data[SEQ_DECL_SIZE];
};
struct TY191944 {
  TGenericSeq Sup;
  Tinstantiation191833* data[SEQ_DECL_SIZE];
};
struct TY244253 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY164036 {
  TGenericSeq Sup;
  Tlineinfo163338 data[SEQ_DECL_SIZE];
};
struct TY244272 {
  TGenericSeq Sup;
  TY244273 data[SEQ_DECL_SIZE];
};
struct TY244233 {
  TGenericSeq Sup;
  Tblock244030 data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY244213 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tnode191813*, semlocals_408020)(Tcontext245023* c, Tnode191813* n);
N_NIMCALL(Ttype191849*, newtypes_245219)(NU8 kind, Tcontext245023* c);
N_NIMCALL(Tnode191813*, newnodeit_193807)(NU8 kind, Tlineinfo163338 info, Ttype191849* typ);
N_NIMCALL(Tnode191813*, newnodei_193351)(NU8 kind, Tlineinfo163338 info);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46746*, usrtocell_50246)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_51804)(Tcell46746* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46762* s, Tcell46746* c);
N_NIMCALL(Tsym191843*, inittabiter_199124)(Ttabiter199119* ti, Tstrtable191817 tab);
N_NIMCALL(Ttype191849*, skiptypes_195167)(Ttype191849* t, NU64 kinds);
N_NIMCALL(Tsym191843*, newsym_192656)(NU8 symkind, Tident167021* name, Tsym191843* owner, Tlineinfo163338 info);
N_NIMCALL(Tsym191843*, getcurrowner_245256)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, addson_193819)(Tnode191813* father, Tnode191813* son);
N_NIMCALL(Tnode191813*, newsymnode_193325)(Tsym191843* sym);
N_NIMCALL(void, addsonskipintlit_239729)(Ttype191849* father, Ttype191849* son);
N_NIMCALL(Tnode191813*, newsymnode_193338)(Tsym191843* sym, Tlineinfo163338 info);
static N_INLINE(Tnode191813*, newderef_358024)(Tnode191813* n);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, add_192164)(Tnode191813* father, Tnode191813* son);
N_NIMCALL(Tsym191843*, nextiter_199132)(Ttabiter199119* ti, Tstrtable191817 tab);
N_NIMCALL(void, registerplugin_407124)(NimStringDesc* package, NimStringDesc* module, NimStringDesc* fn, Transformation407013 t);
STRING_LITERAL(TMP8097, "stdlib", 6);
STRING_LITERAL(TMP8098, "system", 6);
STRING_LITERAL(TMP8099, "locals", 6);
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

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = 0;
	result = (NI)((NU32)(a) + (NU32)(b));
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

static N_INLINE(Tnode191813*, newderef_358024)(Tnode191813* n) {
	Tnode191813* result;
	nimfr("newDeref", "lowerings.nim")
	result = 0;
	nimln(19, "lowerings.nim");
	if ((NU)(((NI) 0)) >= (NU)((*(*n).typ).sons->Sup.len)) raiseIndexError();
	result = newnodeit_193807(((NU8) 65), (*n).info, (*(*n).typ).sons->data[((NI) 0)]);
	nimln(20, "lowerings.nim");
	addson_193819(result, n);
	popFrame();
	return result;
}

N_NIMCALL(Tnode191813*, semlocals_408020)(Tcontext245023* c, Tnode191813* n) {
	Tnode191813* result;
	NI counter;
	Ttype191849* tupletype;
	nimfr("semLocals", "locals.nim")
	result = 0;
	nimln(15, "locals.nim");
	counter = ((NI) 0);
	nimln(16, "locals.nim");
	tupletype = newtypes_245219(((NU8) 18), c);
	nimln(17, "locals.nim");
	result = newnodeit_193807(((NU8) 37), (*n).info, tupletype);
	nimln(18, "locals.nim");
	asgnRefNoCycle((void**) (&(*tupletype).n), newnodei_193351(((NU8) 138), (*n).info));
	{
		Tscope191837* scope_408027;
		Tscope191837* HEX3Atmp_408100;
		Tscope191837* current_408103;
		scope_408027 = 0;
		HEX3Atmp_408100 = 0;
		nimln(20, "locals.nim");
		HEX3Atmp_408100 = (*c).currentscope;
		nimln(65, "lookups.nim");
		current_408103 = HEX3Atmp_408100;
		{
			nimln(66, "lookups.nim");
			while (1) {
				if (!!((current_408103 == NIM_NIL))) goto LA3;
				nimln(65, "lookups.nim");
				scope_408027 = current_408103;
				nimln(21, "locals.nim");
				{
					if (!(scope_408027 == (*c).toplevelscope)) goto LA6;
					goto LA1;
				}
				LA6: ;
				{
					Tsym191843* it_408039;
					Tstrtable191817 HEX3Atmp_408094;
					Ttabiter199119 it_408097;
					Tsym191843* s_408099;
					it_408039 = 0;
					memset((void*)(&HEX3Atmp_408094), 0, sizeof(HEX3Atmp_408094));
					nimln(22, "locals.nim");
					HEX3Atmp_408094.counter = (*scope_408027).symbols.counter;
					HEX3Atmp_408094.data = (*scope_408027).symbols.data;
					memset((void*)(&it_408097), 0, sizeof(it_408097));
					nimln(734, "astalgo.nim");
					s_408099 = inittabiter_199124((&it_408097), HEX3Atmp_408094);
					{
						nimln(735, "astalgo.nim");
						while (1) {
							if (!!((s_408099 == NIM_NIL))) goto LA10;
							nimln(734, "astalgo.nim");
							it_408039 = s_408099;
							nimln(26, "locals.nim");
							{
								NIM_BOOL LOC13;
								Ttype191849* LOC15;
								Tsym191843* field;
								Tsym191843* LOC18;
								NI TMP8096;
								Tnode191813* LOC19;
								Tnode191813* a;
								LOC13 = 0;
								LOC13 = ((2099976 &(1<<(((*it_408039).kind)&31)))!=0);
								if (!(LOC13)) goto LA14;
								nimln(27, "locals.nim");
								LOC15 = 0;
								LOC15 = skiptypes_195167((*it_408039).typ, 8390656);
								LOC13 = !(((*LOC15).kind == ((NU8) 48) || (*LOC15).kind == ((NU8) 27) || (*LOC15).kind == ((NU8) 8) || (*LOC15).kind == ((NU8) 59) || (*LOC15).kind == ((NU8) 6) || (*LOC15).kind == ((NU8) 7) || (*LOC15).kind == ((NU8) 3)));
								LA14: ;
								if (!LOC13) goto LA16;
								nimln(30, "locals.nim");
								LOC18 = 0;
								LOC18 = getcurrowner_245256();
								field = newsym_192656(((NU8) 19), (*it_408039).name, LOC18, (*n).info);
								nimln(31, "locals.nim");
								asgnRefNoCycle((void**) (&(*field).typ), skiptypes_195167((*it_408039).typ, 8390656));
								nimln(32, "locals.nim");
								(*field).position = counter;
								nimln(33, "locals.nim");
								TMP8096 = addInt(counter, ((NI) 1));
								counter = (NI)(TMP8096);
								nimln(35, "locals.nim");
								LOC19 = 0;
								LOC19 = newsymnode_193325(field);
								addson_193819((*tupletype).n, LOC19);
								nimln(36, "locals.nim");
								addsonskipintlit_239729(tupletype, (*field).typ);
								nimln(38, "locals.nim");
								a = newsymnode_193338(it_408039, (*result).info);
								nimln(39, "locals.nim");
								{
									Ttype191849* LOC22;
									LOC22 = 0;
									LOC22 = skiptypes_195167((*it_408039).typ, 2048);
									if (!((*LOC22).kind == ((NU8) 23))) goto LA23;
									a = newderef_358024(a);
								}
								LA23: ;
								nimln(40, "locals.nim");
								add_192164(result, a);
							}
							LA16: ;
							nimln(737, "astalgo.nim");
							s_408099 = nextiter_199132((&it_408097), HEX3Atmp_408094);
						} LA10: ;
					}
				}
				nimln(68, "lookups.nim");
				current_408103 = (*current_408103).parent;
			} LA3: ;
		}
	} LA1: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_localsInit)(void) {
	nimfr("locals", "locals.nim")
	nimln(42, "locals.nim");
	registerplugin_407124(((NimStringDesc*) &TMP8097), ((NimStringDesc*) &TMP8098), ((NimStringDesc*) &TMP8099), semlocals_408020);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_localsDatInit)(void) {
}

