/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <setjmp.h>
typedef struct Tnode190813 Tnode190813;
typedef struct Tpasscontext241005 Tpasscontext241005;
typedef struct Tgen507010 Tgen507010;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct Tdocumentor340007 Tdocumentor340007;
typedef struct Tsym190843 Tsym190843;
typedef struct Tidobj166015 Tidobj166015;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Ttype190849 Ttype190849;
typedef struct Tident166021 Tident166021;
typedef struct Tlineinfo162338 Tlineinfo162338;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj160009 Ropeobj160009;
typedef struct Tlib190831 Tlib190831;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct Tcell46947 Tcell46947;
typedef struct Tcellset46959 Tcellset46959;
typedef struct Tgcheap48816 Tgcheap48816;
typedef struct Tcellseq46963 Tcellseq46963;
typedef struct Tpagedesc46955 Tpagedesc46955;
typedef struct Tmemregion28810 Tmemregion28810;
typedef struct Tsmallchunk28040 Tsmallchunk28040;
typedef struct Tllchunk28804 Tllchunk28804;
typedef struct Tbigchunk28042 Tbigchunk28042;
typedef struct Tintset28017 Tintset28017;
typedef struct Ttrunk28013 Ttrunk28013;
typedef struct Tavlnode28808 Tavlnode28808;
typedef struct Tgcstat48814 Tgcstat48814;
typedef struct Stringtableobj134012 Stringtableobj134012;
typedef struct Trstgenerator311016 Trstgenerator311016;
typedef struct TY311034 TY311034;
typedef struct Table311052 Table311052;
typedef struct Keyvaluepairseq311055 Keyvaluepairseq311055;
typedef struct Tpass241017 Tpass241017;
typedef struct Trodreader233030 Trodreader233030;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tbasechunk28038 Tbasechunk28038;
typedef struct Tfreecell28030 Tfreecell28030;
typedef struct Keyvaluepairseq134010 Keyvaluepairseq134010;
typedef struct Ttocentry311012 Ttocentry311012;
typedef struct Trstnode296011 Trstnode296011;
typedef struct Keyvaluepair311058 Keyvaluepair311058;
typedef struct TY190933 TY190933;
typedef struct Tindex233028 Tindex233028;
typedef struct Tiitable198274 Tiitable198274;
typedef struct Tiipairseq198272 Tiipairseq198272;
typedef struct Tidtable190861 Tidtable190861;
typedef struct Tidpairseq190859 Tidpairseq190859;
typedef struct Memfile231208 Memfile231208;
typedef struct TY103552 TY103552;
typedef struct Trstnodeseq296009 Trstnodeseq296009;
typedef struct Tiipair198270 Tiipair198270;
typedef struct Tidpair190857 Tidpair190857;
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
struct  Tgen507010  {
  Tpasscontext241005 Sup;
Tdocumentor340007* doc;
Tsym190843* module;
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
} TY15809;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY15809 raiseAction;
};
struct  Tcell46947  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46963  {
NI len;
NI cap;
Tcell46947** d;
};
struct  Tcellset46959  {
NI counter;
NI max;
Tpagedesc46955* head;
Tpagedesc46955** data;
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
Tcellseq46963 zct;
Tcellseq46963 decstack;
Tcellset46959 cycleroots;
Tcellseq46963 tempstack;
NI recgclock;
Tmemregion28810 region;
Tgcstat48814 stat;
};
typedef N_NIMCALL_PTR(NimStringDesc*, Tfindfilehandler297023) (NimStringDesc* filename);
typedef N_NIMCALL_PTR(void, Tmsghandler297021) (NimStringDesc* filename, NI line, NI col, NU8 msgkind, NimStringDesc* arg);
typedef NimStringDesc* TY311042[5];
struct  Table311052  {
Keyvaluepairseq311055* data;
NI counter;
};
struct  Trstgenerator311016  {
  TNimObject Sup;
NU8 target;
Stringtableobj134012* config;
NI splitafter;
TY311034* tocpart;
NIM_BOOL hastoc;
NimStringDesc* theindex;
NU8 options;
Tfindfilehandler297023 findfile;
Tmsghandler297021 msghandler;
NimStringDesc* filename;
TY311042 meta;
NimStringDesc* currentsection;
Table311052 seenindexterms;
};
typedef Ropeobj160009* Tsections340005[26];
struct  Tdocumentor340007  {
  Trstgenerator311016 Sup;
Ropeobj160009* moddesc;
NI id;
Tsections340005 toc;
Tsections340005 section;
NimStringDesc* indexvalfilename;
NimStringDesc* analytics;
Stringtableobj134012* seensymbols;
};
typedef N_NIMCALL_PTR(Tpasscontext241005*, Tpassopen241009) (Tsym190843* module);
typedef N_NIMCALL_PTR(Tpasscontext241005*, Tpassopencached241011) (Tsym190843* module, Trodreader233030* rd);
typedef N_NIMCALL_PTR(Tnode190813*, Tpassprocess241015) (Tpasscontext241005* p, Tnode190813* toplevelstmt);
typedef N_NIMCALL_PTR(Tnode190813*, Tpassclose241013) (Tpasscontext241005* p, Tnode190813* n);
struct Tpass241017 {
Tpassopen241009 Field0;
Tpassopencached241011 Field1;
Tpassprocess241015 Field2;
Tpassclose241013 Field3;
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
typedef NI TY28020[16];
struct  Tpagedesc46955  {
Tpagedesc46955* next;
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
struct  Stringtableobj134012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq134010* data;
NU8 mode;
};
struct  Ttocentry311012  {
Trstnode296011* n;
NimStringDesc* refname;
NimStringDesc* header;
};
struct Keyvaluepair311058 {
NI Field0;
NimStringDesc* Field1;
NI Field2;
};
struct  Tiitable198274  {
NI counter;
Tiipairseq198272* data;
};
struct  Tindex233028  {
NI lastidxkey;
NI lastidxval;
Tiitable198274 tab;
NimStringDesc* r;
NI offset;
};
struct  Tidtable190861  {
NI counter;
Tidpairseq190859* data;
};
struct  Memfile231208  {
void* mem;
NI size;
int handle;
};
struct  Trodreader233030  {
  TNimObject Sup;
NI pos;
NCSTRING s;
NU32 options;
NU8 reason;
TY190933* moddeps;
TY190933* files;
NI dataidx;
NI convertersidx;
NI initidx;
NI interfidx;
NI compilerprocsidx;
NI methodsidx;
NimStringDesc* filename;
Tindex233028 index;
Tindex233028 imports;
NI readerindex;
NI line;
NI moduleid;
Tidtable190861 syms;
Memfile231208 memfile;
Tsymseq190815* methods;
NimStringDesc* origfile;
NIM_BOOL inviewmode;
};
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct  Tfreecell28030  {
Tfreecell28030* next;
NI zerofield;
};
struct TY103552 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Trstnode296011  {
NU8 kind;
NimStringDesc* text;
NI level;
Trstnodeseq296009* sons;
};
struct  Tiipair198270  {
NI key;
NI val;
};
struct  Tidpair190857  {
Tidobj166015* key;
TNimObject* val;
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
struct TY311034 {
  TGenericSeq Sup;
  Ttocentry311012 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq311055 {
  TGenericSeq Sup;
  Keyvaluepair311058 data[SEQ_DECL_SIZE];
};
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq134010 {
  TGenericSeq Sup;
  TY103552 data[SEQ_DECL_SIZE];
};
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct Tiipairseq198272 {
  TGenericSeq Sup;
  Tiipair198270 data[SEQ_DECL_SIZE];
};
struct Tidpairseq190859 {
  TGenericSeq Sup;
  Tidpair190857 data[SEQ_DECL_SIZE];
};
struct Trstnodeseq296009 {
  TGenericSeq Sup;
  Trstnode296011* data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tnode190813*, close_507018)(Tpasscontext241005* p, Tnode190813* n);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(void, writeoutput_343337)(Tdocumentor340007* d, NimStringDesc* filename, NimStringDesc* outext, NIM_BOOL usewarning);
N_NIMCALL(NimStringDesc*, tofilename_163266)(NI32 fileidx);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, generateindex_343318)(Tdocumentor340007* d);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(void, setFrame)(TFrame* s);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20201)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52822)(Tcell46947* c);
static N_INLINE(NIM_BOOL, canbecycleroot_50467)(Tcell46947* c);
static N_INLINE(void, rtladdcycleroot_51223)(Tcell46947* c);
N_NOINLINE(void, incl_47665)(Tcellset46959* s, Tcell46947* cell);
static N_INLINE(Tcell46947*, usrtocell_50446)(void* usr);
static N_INLINE(void, decref_52404)(Tcell46947* c);
static N_INLINE(void, rtladdzct_52004)(Tcell46947* c);
N_NOINLINE(void, addzct_50417)(Tcellseq46963* s, Tcell46947* c);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(Tnode190813*, processnode_507057)(Tpasscontext241005* c, Tnode190813* n);
N_NIMCALL(void, generatedoc_341218)(Tdocumentor340007* d, Tnode190813* n);
N_NIMCALL(Tpasscontext241005*, myopen_507069)(Tsym190843* module);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP10597)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(Tdocumentor340007*, newdocumentor_340065)(NimStringDesc* filename, Stringtableobj134012* config);
N_NIMCALL(void, finishdoc2pass_507108)(NimStringDesc* project);
STRING_LITERAL(TMP10595, "html", 4);
NIM_CONST Tpass241017 docgen2pass_507094 = {myopen_507069,
NIM_NIL,
processnode_507057,
close_507018}
;
extern TNimType NTI241005; /* TPassContext */
TNimType NTI507010; /* TGen */
extern TNimType NTI340009; /* PDoc */
extern TNimType NTI190811; /* PSym */
extern NIM_BOOL gwholeproject_153139;
extern TSafePoint* exchandler_17243;
extern TFrame* frameptr_17242;
extern TNimType NTI3431; /* IOError */
extern Exception* currexception_17245;
extern Tgcheap48816 gch_48844;
TNimType NTI507012; /* PGen */
extern Stringtableobj134012* gconfigvars_153231;

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_17243;
	exchandler_17243 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_17243 = (*exchandler_17243).prev;
}

static N_INLINE(void, setFrame)(TFrame* s) {
	frameptr_17242 = s;
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

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	nimfr("getCurrentException", "system.nim")
	result = 0;
	nimln(2726, "system.nim");
	result = currexception_17245;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_50467)(Tcell46947* c) {
	NIM_BOOL result;
	nimfr("canBeCycleRoot", "gc.nim")
	result = 0;
	nimln(121, "gc.nim");
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdcycleroot_51223)(Tcell46947* c) {
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

static N_INLINE(void, incref_52822)(Tcell46947* c) {
	nimfr("incRef", "gc.nim")
	nimln(216, "gc.nim");
	(*c).refcount = (NI)((NU32)((*c).refcount) + (NU32)(((NI) 8)));
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

static N_INLINE(Tcell46947*, usrtocell_50446)(void* usr) {
	Tcell46947* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	result = ((Tcell46947*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46947))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_52004)(Tcell46947* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_50417((&gch_48844.zct), c);
	popFrame();
}

static N_INLINE(void, decref_52404)(Tcell46947* c) {
	nimfr("decRef", "gc.nim")
	nimln(206, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).refcount -= ((NI) 8);
		nimln(168, "gc.nim");
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
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

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr("asgnRef", "gc.nim")
	nimln(244, "gc.nim");
	{
		Tcell46947* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_50446(src);
		incref_52822(LOC5);
	}
	LA3: ;
	nimln(245, "gc.nim");
	{
		Tcell46947* LOC10;
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

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_17245), (*currexception_17245).parent);
}

N_NIMCALL(Tnode190813*, close_507018)(Tpasscontext241005* p, Tnode190813* n) {
	Tnode190813* result;
	Tgen507010* g;
	NIM_BOOL usewarning;
	nimfr("close", "docgen2.nim")
	result = 0;
	nimln(23, "docgen2.nim");
	if (p) chckObj((*p).Sup.m_type, (&NTI507010));
	g = ((Tgen507010*) (p));
	nimln(24, "docgen2.nim");
	usewarning = !((((*(*g).module).flags &(1<<((((NU8) 12))&31)))!=0));
	nimln(25, "docgen2.nim");
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		TSafePoint TMP10596;
		LOC3 = 0;
		LOC3 = gwholeproject_153139;
		if (LOC3) goto LA4;
		LOC3 = (((*(*g).module).flags &(1<<((((NU8) 12))&31)))!=0);
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(26, "docgen2.nim");
		LOC7 = 0;
		LOC7 = tofilename_163266(((NI32) ((*(*g).module).position)));
		writeoutput_343337((*g).doc, LOC7, ((NimStringDesc*) &TMP10595), usewarning);
		nimln(27, "docgen2.nim");
		pushSafePoint(&TMP10596);
		TMP10596.status = _setjmp(TMP10596.context);
		if (TMP10596.status == 0) {
			nimln(28, "docgen2.nim");
			generateindex_343318((*g).doc);
			popSafePoint();
		}
		else {
			popSafePoint();
			setFrame((TFrame*)&FR);
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3431))) {
				TMP10596.status = 0;
				popCurrentException();
			}
		}
		if (TMP10596.status != 0) reraiseException();
	}
	LA5: ;
	popFrame();
	return result;
}

N_NIMCALL(Tnode190813*, processnode_507057)(Tpasscontext241005* c, Tnode190813* n) {
	Tnode190813* result;
	Tgen507010* g;
	nimfr("processNode", "docgen2.nim")
	result = 0;
	nimln(33, "docgen2.nim");
	result = n;
	nimln(34, "docgen2.nim");
	if (c) chckObj((*c).Sup.m_type, (&NTI507010));
	g = ((Tgen507010*) (c));
	nimln(35, "docgen2.nim");
	generatedoc_341218((*g).doc, n);
	popFrame();
	return result;
}
N_NIMCALL(void, TMP10597)(void* p, NI op) {
	Tgen507010* a;
	a = (Tgen507010*)p;
	nimGCvisit((void*)(*a).doc, op);
	nimGCvisit((void*)(*a).module, op);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		Tcell46947* c;
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(252, "gc.nim");
		c = usrtocell_50446(src);
		nimln(169, "gc.nim");
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	nimln(254, "gc.nim");
	{
		Tcell46947* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(255, "gc.nim");
		c = usrtocell_50446((*dest));
		nimln(256, "gc.nim");
		{
			nimln(167, "gc.nim");
			(*c).refcount -= ((NI) 8);
			nimln(168, "gc.nim");
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
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

N_NIMCALL(Tpasscontext241005*, myopen_507069)(Tsym190843* module) {
	Tpasscontext241005* result;
	Tgen507010* g;
	Tdocumentor340007* d;
	NimStringDesc* LOC1;
	nimfr("myOpen", "docgen2.nim")
	result = 0;
	g = 0;
	nimln(39, "docgen2.nim");
	g = (Tgen507010*) newObj((&NTI507012), sizeof(Tgen507010));
	(*g).Sup.Sup.m_type = (&NTI507010);
	nimln(40, "docgen2.nim");
	asgnRefNoCycle((void**) (&(*g).module), module);
	nimln(41, "docgen2.nim");
	LOC1 = 0;
	LOC1 = tofilename_163266(((NI32) ((*module).position)));
	d = newdocumentor_340065(LOC1, gconfigvars_153231);
	nimln(42, "docgen2.nim");
	(*d).Sup.hastoc = NIM_TRUE;
	nimln(43, "docgen2.nim");
	asgnRef((void**) (&(*g).doc), d);
	nimln(44, "docgen2.nim");
	result = &g->Sup;
	popFrame();
	return result;
}

N_NIMCALL(void, finishdoc2pass_507108)(NimStringDesc* project) {
	nimfr("finishDoc2Pass", "docgen2.nim")
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, compiler_docgen2Init)(void) {
	nimfr("docgen2", "docgen2.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_docgen2DatInit)(void) {
static TNimNode* TMP10594[2];
static TNimNode TMP10592[3];
NTI507010.size = sizeof(Tgen507010);
NTI507010.kind = 17;
NTI507010.base = (&NTI241005);
TMP10594[0] = &TMP10592[1];
TMP10592[1].kind = 1;
TMP10592[1].offset = offsetof(Tgen507010, doc);
TMP10592[1].typ = (&NTI340009);
TMP10592[1].name = "doc";
TMP10594[1] = &TMP10592[2];
TMP10592[2].kind = 1;
TMP10592[2].offset = offsetof(Tgen507010, module);
TMP10592[2].typ = (&NTI190811);
TMP10592[2].name = "module";
TMP10592[0].len = 2; TMP10592[0].kind = 2; TMP10592[0].sons = &TMP10594[0];
NTI507010.node = &TMP10592[0];
NTI507012.size = sizeof(Tgen507010*);
NTI507012.kind = 22;
NTI507012.base = (&NTI507010);
NTI507012.marker = TMP10597;
}

