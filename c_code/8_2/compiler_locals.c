/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Tnode189813 Tnode189813;
typedef struct Tcontext243023 Tcontext243023;
typedef struct Ttype189849 Ttype189849;
typedef struct Tlineinfo161338 Tlineinfo161338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym189843 Tsym189843;
typedef struct Tident165021 Tident165021;
typedef struct Tnodeseq189807 Tnodeseq189807;
typedef struct Tidobj165015 Tidobj165015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq189845 Ttypeseq189845;
typedef struct Tloc189827 Tloc189827;
typedef struct Ropeobj159009 Ropeobj159009;
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
typedef struct Tscope189837 Tscope189837;
typedef struct Tpasscontext240005 Tpasscontext240005;
typedef struct Tproccon243011 Tproccon243011;
typedef struct Tsymseq189815 Tsymseq189815;
typedef struct Intset186056 Intset186056;
typedef struct Ttrunk186052 Ttrunk186052;
typedef struct Ttrunkseq186054 Ttrunkseq186054;
typedef struct Tlinkedlist129028 Tlinkedlist129028;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct Tidtable189861 Tidtable189861;
typedef struct Tidpairseq189859 Tidpairseq189859;
typedef struct Tstrtable189817 Tstrtable189817;
typedef struct Tctx242048 Tctx242048;
typedef struct TY243141 TY243141;
typedef struct Ttabiter197119 Ttabiter197119;
typedef struct TY189944 TY189944;
typedef struct Tlib189831 Tlib189831;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct Tidpair189857 Tidpair189857;
typedef struct TY242253 TY242253;
typedef struct TY162033 TY162033;
typedef struct PprocHEX3Aobjecttype242232 PprocHEX3Aobjecttype242232;
typedef struct TY242272 TY242272;
typedef struct Tinstantiationpair243013 Tinstantiationpair243013;
typedef struct Tinstantiation189833 Tinstantiation189833;
typedef struct TY242233 TY242233;
typedef struct TY242239 TY242239;
typedef struct TY242273 TY242273;
typedef struct Vmargs242042 Vmargs242042;
typedef struct TY189933 TY189933;
typedef struct Tblock242030 Tblock242030;
typedef struct TY242213 TY242213;
struct  Tlineinfo161338  {
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
struct  Tidobj165015  {
  TNimObject Sup;
NI id;
};
struct  Tloc189827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype189849* t;
Ropeobj159009* r;
Ropeobj159009* heaproot;
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
struct  Tpasscontext240005  {
  TNimObject Sup;
NIM_BOOL fromcache;
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
struct  Tidtable189861  {
NI counter;
Tidpairseq189859* data;
};
typedef N_NIMCALL_PTR(Tnode189813*, TY243072) (Tcontext243023* c, Tnode189813* n);
typedef N_NIMCALL_PTR(Tnode189813*, TY243077) (Tcontext243023* c, Tnode189813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode189813*, TY243085) (Tcontext243023* c, Tnode189813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode189813*, TY243093) (Tcontext243023* c, Tnode189813* n);
typedef N_NIMCALL_PTR(Tnode189813*, TY243098) (Tcontext243023* c, Tnode189813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode189813*, TY243106) (Tcontext243023* c, Tnode189813* n);
typedef N_NIMCALL_PTR(Tnode189813*, TY243111) (Tcontext243023* c, Tnode189813* n, Tnode189813* norig, NU32 filter);
typedef N_NIMCALL_PTR(Ttype189849*, TY243118) (Tcontext243023* c, Tnode189813* n, Ttype189849* prev);
typedef struct {
N_NIMCALL_PTR(Tnode189813*, ClPrc) (Tcontext243023* c, Tidtable189861 pt, Tnode189813* n, void* ClEnv);
void* ClEnv;
} TY243124;
typedef struct {
N_NIMCALL_PTR(Tsym189843*, ClPrc) (Tcontext243023* c, Tsym189843* fn, Tidtable189861 pt, Tlineinfo161338 info, void* ClEnv);
void* ClEnv;
} TY243130;
struct  Tstrtable189817  {
NI counter;
Tsymseq189815* data;
};
typedef N_NIMCALL_PTR(Tsym189843*, TY243146) (Tcontext243023* c, Tsym189843* dc, Ttype189849* t, Tlineinfo161338 info, NU8 op);
struct  Tcontext243023  {
  Tpasscontext240005 Sup;
Tsym189843* module;
Tscope189837* currentscope;
Tscope189837* importtable;
Tscope189837* toplevelscope;
Tproccon243011* p;
Tsymseq189815* friendmodules;
NI instcounter;
Intset186056 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI incompilescontext;
NI ingenericinst;
Tsymseq189815* converters;
Tsymseq189815* patterns;
Tlinkedlist129028 optionstack;
Tidtable189861 symmapping;
Tlinkedlist129028 libs;
TY243072 semconstexpr;
TY243077 semexpr;
TY243085 semtryexpr;
TY243093 semtryconstexpr;
TY243098 semoperand;
TY243106 semconstboolexpr;
TY243111 semoverloadedcall;
TY243118 semtypenode;
TY243124 seminferredlambda;
TY243130 semgenerateinstance;
Intset186056 includedfiles;
Tstrtable189817 userpragmas;
Tctx242048* evalcontext;
Intset186056 unknownidents;
TY243141* generics;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY243146 insttypeboundop;
};
struct  Tscope189837  {
NI depthlevel;
Tstrtable189817 symbols;
Tnodeseq189807* usingsyms;
Tscope189837* parent;
};
struct  Ttabiter197119  {
NI h;
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
typedef N_NIMCALL_PTR(Tnode189813*, Transformation405013) (Tcontext243023* c, Tnode189813* n);
struct  Tident165021  {
  Tidobj165015 Sup;
NimStringDesc* s;
Tident165021* next;
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
struct  Ropeobj159009  {
  TNimObject Sup;
Ropeobj159009* left;
Ropeobj159009* right;
NI length;
NimStringDesc* data;
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
struct  Tproccon243011  {
Tsym189843* owner;
Tsym189843* resultsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon243011* next;
NIM_BOOL wasforwarded;
Tnode189813* bracketexpr;
};
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
struct  Tidpair189857  {
Tidobj165015* key;
TNimObject* val;
};
struct  Tctx242048  {
  Tpasscontext240005 Sup;
TY242253* code;
TY162033* debug;
Tnode189813* globals;
Tnode189813* constants;
Ttypeseq189845* types;
Tnode189813* currentexceptiona;
Tnode189813* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype242232* prc;
Tsym189843* module;
Tnode189813* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo161338 comesfromheuristic;
TY242272* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair243013  {
Tsym189843* genericsym;
Tinstantiation189833* inst;
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
struct TY242239 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY242239 TY242236[256];
struct  PprocHEX3Aobjecttype242232  {
TY242233* blocks;
Tsym189843* sym;
TY242236 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs242042* args, void* ClEnv);
void* ClEnv;
} Vmcallback242044;
struct TY242273 {
NimStringDesc* Field0;
Vmcallback242044 Field1;
};
struct  Tinstantiation189833  {
Tsym189843* sym;
Ttypeseq189845* concretetypes;
TY189933* usedby;
};
struct  Tblock242030  {
Tsym189843* label;
TY242213* fixups;
};
struct  Vmargs242042  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode189813* currentexception;
};
struct Tnodeseq189807 {
  TGenericSeq Sup;
  Tnode189813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq189845 {
  TGenericSeq Sup;
  Ttype189849* data[SEQ_DECL_SIZE];
};
struct Tsymseq189815 {
  TGenericSeq Sup;
  Tsym189843* data[SEQ_DECL_SIZE];
};
struct Ttrunkseq186054 {
  TGenericSeq Sup;
  Ttrunk186052* data[SEQ_DECL_SIZE];
};
struct Tidpairseq189859 {
  TGenericSeq Sup;
  Tidpair189857 data[SEQ_DECL_SIZE];
};
struct TY243141 {
  TGenericSeq Sup;
  Tinstantiationpair243013 data[SEQ_DECL_SIZE];
};
struct TY189944 {
  TGenericSeq Sup;
  Tinstantiation189833* data[SEQ_DECL_SIZE];
};
struct TY242253 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY162033 {
  TGenericSeq Sup;
  Tlineinfo161338 data[SEQ_DECL_SIZE];
};
struct TY242272 {
  TGenericSeq Sup;
  TY242273 data[SEQ_DECL_SIZE];
};
struct TY242233 {
  TGenericSeq Sup;
  Tblock242030 data[SEQ_DECL_SIZE];
};
struct TY189933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY242213 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tnode189813*, semlocals_406020)(Tcontext243023* c, Tnode189813* n);
N_NIMCALL(Ttype189849*, newtypes_243218)(NU8 kind, Tcontext243023* c);
N_NIMCALL(Tnode189813*, newnodeit_191807)(NU8 kind, Tlineinfo161338 info, Ttype189849* typ);
N_NIMCALL(Tnode189813*, newnodei_191351)(NU8 kind, Tlineinfo161338 info);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_51804)(Tcell46747* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46763* s, Tcell46747* c);
N_NIMCALL(Tsym189843*, inittabiter_197124)(Ttabiter197119* ti, Tstrtable189817 tab);
N_NIMCALL(Ttype189849*, skiptypes_193167)(Ttype189849* t, NU64 kinds);
N_NIMCALL(Tsym189843*, newsym_190655)(NU8 symkind, Tident165021* name, Tsym189843* owner, Tlineinfo161338 info);
N_NIMCALL(Tsym189843*, getcurrowner_243255)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, addson_191819)(Tnode189813* father, Tnode189813* son);
N_NIMCALL(Tnode189813*, newsymnode_191325)(Tsym189843* sym);
N_NIMCALL(void, addsonskipintlit_237731)(Ttype189849* father, Ttype189849* son);
N_NIMCALL(Tnode189813*, newsymnode_191338)(Tsym189843* sym, Tlineinfo161338 info);
static N_INLINE(Tnode189813*, newderef_356024)(Tnode189813* n);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, add_190164)(Tnode189813* father, Tnode189813* son);
N_NIMCALL(Tsym189843*, nextiter_197132)(Ttabiter197119* ti, Tstrtable189817 tab);
N_NIMCALL(void, registerplugin_405124)(NimStringDesc* package, NimStringDesc* module, NimStringDesc* fn, Transformation405013 t);
STRING_LITERAL(TMP8081, "stdlib", 6);
STRING_LITERAL(TMP8082, "system", 6);
STRING_LITERAL(TMP8083, "locals", 6);
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

static N_INLINE(Tnode189813*, newderef_356024)(Tnode189813* n) {
	Tnode189813* result;
	nimfr("newDeref", "lowerings.nim")
	result = 0;
	nimln(19, "lowerings.nim");
	if ((NU)(((NI) 0)) >= (NU)((*(*n).typ).sons->Sup.len)) raiseIndexError();
	result = newnodeit_191807(((NU8) 65), (*n).info, (*(*n).typ).sons->data[((NI) 0)]);
	nimln(20, "lowerings.nim");
	addson_191819(result, n);
	popFrame();
	return result;
}

N_NIMCALL(Tnode189813*, semlocals_406020)(Tcontext243023* c, Tnode189813* n) {
	Tnode189813* result;
	NI counter;
	Ttype189849* tupletype;
	nimfr("semLocals", "locals.nim")
	result = 0;
	nimln(15, "locals.nim");
	counter = ((NI) 0);
	nimln(16, "locals.nim");
	tupletype = newtypes_243218(((NU8) 18), c);
	nimln(17, "locals.nim");
	result = newnodeit_191807(((NU8) 37), (*n).info, tupletype);
	nimln(18, "locals.nim");
	asgnRefNoCycle((void**) (&(*tupletype).n), newnodei_191351(((NU8) 138), (*n).info));
	{
		Tscope189837* scope_406027;
		Tscope189837* HEX3Atmp_406100;
		Tscope189837* current_406103;
		scope_406027 = 0;
		HEX3Atmp_406100 = 0;
		nimln(20, "locals.nim");
		HEX3Atmp_406100 = (*c).currentscope;
		nimln(65, "lookups.nim");
		current_406103 = HEX3Atmp_406100;
		{
			nimln(66, "lookups.nim");
			while (1) {
				if (!!((current_406103 == NIM_NIL))) goto LA3;
				nimln(65, "lookups.nim");
				scope_406027 = current_406103;
				nimln(21, "locals.nim");
				{
					if (!(scope_406027 == (*c).toplevelscope)) goto LA6;
					goto LA1;
				}
				LA6: ;
				{
					Tsym189843* it_406039;
					Tstrtable189817 HEX3Atmp_406094;
					Ttabiter197119 it_406097;
					Tsym189843* s_406099;
					it_406039 = 0;
					memset((void*)(&HEX3Atmp_406094), 0, sizeof(HEX3Atmp_406094));
					nimln(22, "locals.nim");
					HEX3Atmp_406094.counter = (*scope_406027).symbols.counter;
					HEX3Atmp_406094.data = (*scope_406027).symbols.data;
					memset((void*)(&it_406097), 0, sizeof(it_406097));
					nimln(734, "astalgo.nim");
					s_406099 = inittabiter_197124((&it_406097), HEX3Atmp_406094);
					{
						nimln(735, "astalgo.nim");
						while (1) {
							if (!!((s_406099 == NIM_NIL))) goto LA10;
							nimln(734, "astalgo.nim");
							it_406039 = s_406099;
							nimln(26, "locals.nim");
							{
								NIM_BOOL LOC13;
								Ttype189849* LOC15;
								Tsym189843* field;
								Tsym189843* LOC18;
								NI TMP8080;
								Tnode189813* LOC19;
								Tnode189813* a;
								LOC13 = 0;
								LOC13 = ((2099976 &(1<<(((*it_406039).kind)&31)))!=0);
								if (!(LOC13)) goto LA14;
								nimln(27, "locals.nim");
								LOC15 = 0;
								LOC15 = skiptypes_193167((*it_406039).typ, 8390656);
								LOC13 = !(((IL64(576742227414352328) &(IL64(1)<<(((*LOC15).kind)&IL64(63))))!=0));
								LA14: ;
								if (!LOC13) goto LA16;
								nimln(30, "locals.nim");
								LOC18 = 0;
								LOC18 = getcurrowner_243255();
								field = newsym_190655(((NU8) 19), (*it_406039).name, LOC18, (*n).info);
								nimln(31, "locals.nim");
								asgnRefNoCycle((void**) (&(*field).typ), skiptypes_193167((*it_406039).typ, 8390656));
								nimln(32, "locals.nim");
								(*field).position = counter;
								nimln(33, "locals.nim");
								TMP8080 = addInt(counter, ((NI) 1));
								counter = (NI)(TMP8080);
								nimln(35, "locals.nim");
								LOC19 = 0;
								LOC19 = newsymnode_191325(field);
								addson_191819((*tupletype).n, LOC19);
								nimln(36, "locals.nim");
								addsonskipintlit_237731(tupletype, (*field).typ);
								nimln(38, "locals.nim");
								a = newsymnode_191338(it_406039, (*result).info);
								nimln(39, "locals.nim");
								{
									Ttype189849* LOC22;
									LOC22 = 0;
									LOC22 = skiptypes_193167((*it_406039).typ, 2048);
									if (!((*LOC22).kind == ((NU8) 23))) goto LA23;
									a = newderef_356024(a);
								}
								LA23: ;
								nimln(40, "locals.nim");
								add_190164(result, a);
							}
							LA16: ;
							nimln(737, "astalgo.nim");
							s_406099 = nextiter_197132((&it_406097), HEX3Atmp_406094);
						} LA10: ;
					}
				}
				nimln(68, "lookups.nim");
				current_406103 = (*current_406103).parent;
			} LA3: ;
		}
	} LA1: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_localsInit)(void) {
	nimfr("locals", "locals.nim")
	nimln(42, "locals.nim");
	registerplugin_405124(((NimStringDesc*) &TMP8081), ((NimStringDesc*) &TMP8082), ((NimStringDesc*) &TMP8083), semlocals_406020);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_localsDatInit)(void) {
}

