/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Tnode190813 Tnode190813;
typedef struct Tcontext244023 Tcontext244023;
typedef struct Ttype190849 Ttype190849;
typedef struct Tlineinfo162338 Tlineinfo162338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym190843 Tsym190843;
typedef struct Tident166021 Tident166021;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tidobj166015 Tidobj166015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj160009 Ropeobj160009;
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
typedef struct Tscope190837 Tscope190837;
typedef struct Tpasscontext241005 Tpasscontext241005;
typedef struct Tproccon244011 Tproccon244011;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Intset187056 Intset187056;
typedef struct Ttrunk187052 Ttrunk187052;
typedef struct Ttrunkseq187054 Ttrunkseq187054;
typedef struct Tlinkedlist130028 Tlinkedlist130028;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tidtable190861 Tidtable190861;
typedef struct Tidpairseq190859 Tidpairseq190859;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tctx243048 Tctx243048;
typedef struct TY244141 TY244141;
typedef struct Ttabiter198119 Ttabiter198119;
typedef struct TY190944 TY190944;
typedef struct Tlib190831 Tlib190831;
typedef struct Tbasechunk28038 Tbasechunk28038;
typedef struct Tfreecell28030 Tfreecell28030;
typedef struct Tidpair190857 Tidpair190857;
typedef struct TY243253 TY243253;
typedef struct TY163033 TY163033;
typedef struct PprocHEX3Aobjecttype243232 PprocHEX3Aobjecttype243232;
typedef struct TY243272 TY243272;
typedef struct Tinstantiationpair244013 Tinstantiationpair244013;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct TY243233 TY243233;
typedef struct TY243239 TY243239;
typedef struct TY243273 TY243273;
typedef struct Vmargs243042 Vmargs243042;
typedef struct TY190933 TY190933;
typedef struct Tblock243030 Tblock243030;
typedef struct TY243213 TY243213;
struct  Tlineinfo162338  {
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
struct  Tloc190827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype190849* t;
Ropeobj160009* r;
Ropeobj160009* heaproot;
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
struct  Tstrtable190817  {
NI counter;
Tsymseq190815* data;
};
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
struct  Tscope190837  {
NI depthlevel;
Tstrtable190817 symbols;
Tnodeseq190807* usingsyms;
Tscope190837* parent;
};
struct  Ttabiter198119  {
NI h;
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
typedef N_NIMCALL_PTR(Tnode190813*, Transformation406013) (Tcontext244023* c, Tnode190813* n);
struct  Tident166021  {
  Tidobj166015 Sup;
NimStringDesc* s;
Tident166021* next;
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
struct  Ropeobj160009  {
  TNimObject Sup;
Ropeobj160009* left;
Ropeobj160009* right;
NI length;
NimStringDesc* data;
};
typedef NI TY28020[8];
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
TY28020 bits;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
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
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
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
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq190845 {
  TGenericSeq Sup;
  Ttype190849* data[SEQ_DECL_SIZE];
};
struct Tsymseq190815 {
  TGenericSeq Sup;
  Tsym190843* data[SEQ_DECL_SIZE];
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
struct TY190944 {
  TGenericSeq Sup;
  Tinstantiation190833* data[SEQ_DECL_SIZE];
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
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY243213 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tnode190813*, semlocals_407020)(Tcontext244023* c, Tnode190813* n);
N_NIMCALL(Ttype190849*, newtypes_244218)(NU8 kind, Tcontext244023* c);
N_NIMCALL(Tnode190813*, newnodeit_192807)(NU8 kind, Tlineinfo162338 info, Ttype190849* typ);
N_NIMCALL(Tnode190813*, newnodei_192351)(NU8 kind, Tlineinfo162338 info);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46946*, usrtocell_50446)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20201)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_52004)(Tcell46946* c);
N_NOINLINE(void, addzct_50417)(Tcellseq46962* s, Tcell46946* c);
N_NIMCALL(Tsym190843*, inittabiter_198124)(Ttabiter198119* ti, Tstrtable190817 tab);
N_NIMCALL(Ttype190849*, skiptypes_194167)(Ttype190849* t, NU64 kinds);
N_NIMCALL(Tsym190843*, newsym_191655)(NU8 symkind, Tident166021* name, Tsym190843* owner, Tlineinfo162338 info);
N_NIMCALL(Tsym190843*, getcurrowner_244255)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, addson_192819)(Tnode190813* father, Tnode190813* son);
N_NIMCALL(Tnode190813*, newsymnode_192325)(Tsym190843* sym);
N_NIMCALL(void, addsonskipintlit_238731)(Ttype190849* father, Ttype190849* son);
N_NIMCALL(Tnode190813*, newsymnode_192338)(Tsym190843* sym, Tlineinfo162338 info);
static N_INLINE(Tnode190813*, newderef_357024)(Tnode190813* n);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, add_191164)(Tnode190813* father, Tnode190813* son);
N_NIMCALL(Tsym190843*, nextiter_198132)(Ttabiter198119* ti, Tstrtable190817 tab);
N_NIMCALL(void, registerplugin_406124)(NimStringDesc* package, NimStringDesc* module, NimStringDesc* fn, Transformation406013 t);
STRING_LITERAL(TMP8086, "stdlib", 6);
STRING_LITERAL(TMP8087, "system", 6);
STRING_LITERAL(TMP8088, "locals", 6);
extern TFrame* frameptr_17242;
extern Tgcheap48816 gch_48844;

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

static N_INLINE(Tcell46946*, usrtocell_50446)(void* usr) {
	Tcell46946* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	result = ((Tcell46946*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46946))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_52004)(Tcell46946* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_50417((&gch_48844.zct), c);
	popFrame();
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

static N_INLINE(Tnode190813*, newderef_357024)(Tnode190813* n) {
	Tnode190813* result;
	nimfr("newDeref", "lowerings.nim")
	result = 0;
	nimln(19, "lowerings.nim");
	if ((NU)(((NI) 0)) >= (NU)((*(*n).typ).sons->Sup.len)) raiseIndexError();
	result = newnodeit_192807(((NU8) 65), (*n).info, (*(*n).typ).sons->data[((NI) 0)]);
	nimln(20, "lowerings.nim");
	addson_192819(result, n);
	popFrame();
	return result;
}

N_NIMCALL(Tnode190813*, semlocals_407020)(Tcontext244023* c, Tnode190813* n) {
	Tnode190813* result;
	NI counter;
	Ttype190849* tupletype;
	nimfr("semLocals", "locals.nim")
	result = 0;
	nimln(15, "locals.nim");
	counter = ((NI) 0);
	nimln(16, "locals.nim");
	tupletype = newtypes_244218(((NU8) 18), c);
	nimln(17, "locals.nim");
	result = newnodeit_192807(((NU8) 37), (*n).info, tupletype);
	nimln(18, "locals.nim");
	asgnRefNoCycle((void**) (&(*tupletype).n), newnodei_192351(((NU8) 138), (*n).info));
	{
		Tscope190837* scope_407027;
		Tscope190837* HEX3Atmp_407100;
		Tscope190837* current_407103;
		scope_407027 = 0;
		HEX3Atmp_407100 = 0;
		nimln(20, "locals.nim");
		HEX3Atmp_407100 = (*c).currentscope;
		nimln(65, "lookups.nim");
		current_407103 = HEX3Atmp_407100;
		{
			nimln(66, "lookups.nim");
			while (1) {
				if (!!((current_407103 == NIM_NIL))) goto LA3;
				nimln(65, "lookups.nim");
				scope_407027 = current_407103;
				nimln(21, "locals.nim");
				{
					if (!(scope_407027 == (*c).toplevelscope)) goto LA6;
					goto LA1;
				}
				LA6: ;
				{
					Tsym190843* it_407039;
					Tstrtable190817 HEX3Atmp_407094;
					Ttabiter198119 it_407097;
					Tsym190843* s_407099;
					it_407039 = 0;
					memset((void*)(&HEX3Atmp_407094), 0, sizeof(HEX3Atmp_407094));
					nimln(22, "locals.nim");
					HEX3Atmp_407094.counter = (*scope_407027).symbols.counter;
					HEX3Atmp_407094.data = (*scope_407027).symbols.data;
					memset((void*)(&it_407097), 0, sizeof(it_407097));
					nimln(734, "astalgo.nim");
					s_407099 = inittabiter_198124((&it_407097), HEX3Atmp_407094);
					{
						nimln(735, "astalgo.nim");
						while (1) {
							if (!!((s_407099 == NIM_NIL))) goto LA10;
							nimln(734, "astalgo.nim");
							it_407039 = s_407099;
							nimln(26, "locals.nim");
							{
								NIM_BOOL LOC13;
								Ttype190849* LOC15;
								Tsym190843* field;
								Tsym190843* LOC18;
								NI TMP8085;
								Tnode190813* LOC19;
								Tnode190813* a;
								LOC13 = 0;
								LOC13 = ((2099976 &(1<<(((*it_407039).kind)&31)))!=0);
								if (!(LOC13)) goto LA14;
								nimln(27, "locals.nim");
								LOC15 = 0;
								LOC15 = skiptypes_194167((*it_407039).typ, 8390656);
								LOC13 = !(((IL64(576742227414352328) &(IL64(1)<<(((*LOC15).kind)&IL64(63))))!=0));
								LA14: ;
								if (!LOC13) goto LA16;
								nimln(30, "locals.nim");
								LOC18 = 0;
								LOC18 = getcurrowner_244255();
								field = newsym_191655(((NU8) 19), (*it_407039).name, LOC18, (*n).info);
								nimln(31, "locals.nim");
								asgnRefNoCycle((void**) (&(*field).typ), skiptypes_194167((*it_407039).typ, 8390656));
								nimln(32, "locals.nim");
								(*field).position = counter;
								nimln(33, "locals.nim");
								TMP8085 = addInt(counter, ((NI) 1));
								counter = (NI)(TMP8085);
								nimln(35, "locals.nim");
								LOC19 = 0;
								LOC19 = newsymnode_192325(field);
								addson_192819((*tupletype).n, LOC19);
								nimln(36, "locals.nim");
								addsonskipintlit_238731(tupletype, (*field).typ);
								nimln(38, "locals.nim");
								a = newsymnode_192338(it_407039, (*result).info);
								nimln(39, "locals.nim");
								{
									Ttype190849* LOC22;
									LOC22 = 0;
									LOC22 = skiptypes_194167((*it_407039).typ, 2048);
									if (!((*LOC22).kind == ((NU8) 23))) goto LA23;
									a = newderef_357024(a);
								}
								LA23: ;
								nimln(40, "locals.nim");
								add_191164(result, a);
							}
							LA16: ;
							nimln(737, "astalgo.nim");
							s_407099 = nextiter_198132((&it_407097), HEX3Atmp_407094);
						} LA10: ;
					}
				}
				nimln(68, "lookups.nim");
				current_407103 = (*current_407103).parent;
			} LA3: ;
		}
	} LA1: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_localsInit)(void) {
	nimfr("locals", "locals.nim")
	nimln(42, "locals.nim");
	registerplugin_406124(((NimStringDesc*) &TMP8086), ((NimStringDesc*) &TMP8087), ((NimStringDesc*) &TMP8088), semlocals_407020);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_localsDatInit)(void) {
}

