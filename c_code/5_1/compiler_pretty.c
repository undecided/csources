/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <setjmp.h>

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY248019 TY248019;
typedef struct Tsourcefile248008 Tsourcefile248008;
typedef struct TY13606 TY13606;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct Tlineinfo162338 Tlineinfo162338;
typedef struct Tsym190843 Tsym190843;
typedef struct Tidobj166015 Tidobj166015;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Ttype190849 Ttype190849;
typedef struct Tident166021 Tident166021;
typedef struct Tnode190813 Tnode190813;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj160009 Ropeobj160009;
typedef struct Tlib190831 Tlib190831;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TY190933 TY190933;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tsourcefile248008  {
TY13606* lines;
NIM_BOOL dirty;
NIM_BOOL isnimfixfile;
NimStringDesc* fullpath;
NimStringDesc* newline;
NI32 fileidx;
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
typedef NU8 TY77659[32];
typedef NimStringDesc* TY270154[33];
struct  Tlineinfo162338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tidobj166015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable190817  {
NI counter;
Tsymseq190815* data;
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
struct  Tident166021  {
  Tidobj166015 Sup;
NimStringDesc* s;
Tident166021* next;
NI h;
};
typedef NI TY27820[16];
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
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct TY248019 {
  TGenericSeq Sup;
  Tsourcefile248008 data[SEQ_DECL_SIZE];
};
struct TY13606 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
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
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, overwritefiles_270030)(void);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, getconfigvar_153334)(NimStringDesc* key);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(FILE*, open_13217)(NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(void, write_13457)(FILE* f, NimStringDesc* s);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, failedassertimpl_87017)(NimStringDesc* msg);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(void, setFrame)(TFrame* s);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, rawmessage_163960)(NU16 msg, NimStringDesc* arg);
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
N_NIMCALL(NIM_BOOL, HEX3DHEX7E_270101)(NimStringDesc* s, NimStringDesc** a, NI aLen0);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(NimStringDesc*, beautifyname_270135)(NimStringDesc* s, NU8 k);
N_NIMCALL(NIM_BOOL, allcharsinset_98459)(NimStringDesc* s, TY77659 theset);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NIM_CHAR, nsuToUpperChar)(NIM_CHAR c);
N_NIMCALL(NIM_BOOL, contains_99351)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NIM_CHAR, nsuToLowerChar)(NIM_CHAR c);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(void, replaceinfile_270216)(Tlineinfo162338 info, NimStringDesc* newname);
N_NIMCALL(void, loadfile_248041)(Tlineinfo162338 info);
N_NIMCALL(NI, identlen_248147)(NimStringDesc* line, NI start);
N_NIMCALL(NIM_BOOL, differ_248184)(NimStringDesc* line, NI a, NI b, NimStringDesc* x);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76643, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, checkstyle_270270)(Tlineinfo162338 info, NimStringDesc* s, NU8 k, Tsym190843* sym);
N_NIMCALL(Tident166021*, getident_166463)(NimStringDesc* identifier);
N_NIMCALL(void, message_164188)(Tlineinfo162338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, stylecheckdefimpl_270294)(Tlineinfo162338 info, Tsym190843* s, NU8 k);
N_NIMCALL(void, stylecheckuseimpl_270404)(Tlineinfo162338 info, Tsym190843* s);
STRING_LITERAL(TMP4749, "pretty.strip", 12);
STRING_LITERAL(TMP4750, "on", 2);
STRING_LITERAL(TMP4751, ".pretty.nim", 11);
STRING_LITERAL(TMP4754, "len(a) == L seq modified while iterating over it", 48);
static NIM_CONST TY77659 TMP4757 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x03,
0xFE, 0xFF, 0xFF, 0x87, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4759, "int", 3);
STRING_LITERAL(TMP4760, "uint", 4);
STRING_LITERAL(TMP4761, "cint", 4);
STRING_LITERAL(TMP4762, "cuint", 5);
STRING_LITERAL(TMP4763, "clong", 5);
STRING_LITERAL(TMP4764, "cstring", 7);
STRING_LITERAL(TMP4765, "string", 6);
STRING_LITERAL(TMP4766, "char", 4);
STRING_LITERAL(TMP4767, "byte", 4);
STRING_LITERAL(TMP4768, "bool", 4);
STRING_LITERAL(TMP4769, "openArray", 9);
STRING_LITERAL(TMP4770, "seq", 3);
STRING_LITERAL(TMP4771, "array", 5);
STRING_LITERAL(TMP4772, "void", 4);
STRING_LITERAL(TMP4773, "pointer", 7);
STRING_LITERAL(TMP4774, "float", 5);
STRING_LITERAL(TMP4775, "csize", 5);
STRING_LITERAL(TMP4776, "cdouble", 7);
STRING_LITERAL(TMP4777, "cchar", 5);
STRING_LITERAL(TMP4778, "cschar", 6);
STRING_LITERAL(TMP4779, "cshort", 6);
STRING_LITERAL(TMP4780, "cu", 2);
STRING_LITERAL(TMP4781, "nil", 3);
STRING_LITERAL(TMP4782, "expr", 4);
STRING_LITERAL(TMP4783, "stmt", 4);
STRING_LITERAL(TMP4784, "typedesc", 8);
STRING_LITERAL(TMP4785, "auto", 4);
STRING_LITERAL(TMP4786, "any", 3);
STRING_LITERAL(TMP4787, "range", 5);
STRING_LITERAL(TMP4788, "openarray", 9);
STRING_LITERAL(TMP4789, "varargs", 7);
STRING_LITERAL(TMP4790, "set", 3);
STRING_LITERAL(TMP4791, "cfloat", 6);
NIM_CONST TY270154 TMP4758 = {((NimStringDesc*) &TMP4759),
((NimStringDesc*) &TMP4760),
((NimStringDesc*) &TMP4761),
((NimStringDesc*) &TMP4762),
((NimStringDesc*) &TMP4763),
((NimStringDesc*) &TMP4764),
((NimStringDesc*) &TMP4765),
((NimStringDesc*) &TMP4766),
((NimStringDesc*) &TMP4767),
((NimStringDesc*) &TMP4768),
((NimStringDesc*) &TMP4769),
((NimStringDesc*) &TMP4770),
((NimStringDesc*) &TMP4771),
((NimStringDesc*) &TMP4772),
((NimStringDesc*) &TMP4773),
((NimStringDesc*) &TMP4774),
((NimStringDesc*) &TMP4775),
((NimStringDesc*) &TMP4776),
((NimStringDesc*) &TMP4777),
((NimStringDesc*) &TMP4778),
((NimStringDesc*) &TMP4779),
((NimStringDesc*) &TMP4780),
((NimStringDesc*) &TMP4781),
((NimStringDesc*) &TMP4782),
((NimStringDesc*) &TMP4783),
((NimStringDesc*) &TMP4784),
((NimStringDesc*) &TMP4785),
((NimStringDesc*) &TMP4786),
((NimStringDesc*) &TMP4787),
((NimStringDesc*) &TMP4788),
((NimStringDesc*) &TMP4789),
((NimStringDesc*) &TMP4790),
((NimStringDesc*) &TMP4791)}
;
NIM_BOOL goverwrite_270020;
NU8 gstylecheck_270021;
NIM_BOOL gcheckextern_270022;
NIM_BOOL gonlymainfile_270023;
extern TY248019* gsourcefiles_248036;
extern NI32 gprojectmainidx_153237;
extern TSafePoint* exchandler_17043;
extern TFrame* frameptr_17042;
extern TNimType NTI3431; /* IOError */
extern Exception* currexception_17045;
extern Tgcheap48616 gch_48644;

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
{	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (*a).Sup.len);
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_17043;
	exchandler_17043 = s;
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

static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr) {
	Tcell46747* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	result = ((Tcell46747*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46747))))));
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

N_NIMCALL(void, overwritefiles_270030)(void) {
	NIM_BOOL dostrip;
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	nimfr("overwriteFiles", "pretty.nim")
	nimln(26, "pretty.nim");
	LOC1 = 0;
	LOC1 = getconfigvar_153334(((NimStringDesc*) &TMP4749));
	LOC2 = 0;
	LOC2 = nsuNormalize(LOC1);
	dostrip = eqStrings(LOC2, ((NimStringDesc*) &TMP4750));
	{
		NI i_270043;
		NI HEX3Atmp_270070;
		NI res_270073;
		i_270043 = 0;
		HEX3Atmp_270070 = 0;
		nimln(27, "pretty.nim");
		HEX3Atmp_270070 = (gsourcefiles_248036 ? (gsourcefiles_248036->Sup.len-1) : -1);
		nimln(1598, "system.nim");
		res_270073 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4755;
				if (!(res_270073 <= HEX3Atmp_270070)) goto LA5;
				nimln(1600, "system.nim");
				i_270043 = res_270073;
				nimln(28, "pretty.nim");
				{
					NIM_BOOL LOC8;
					NIM_BOOL LOC9;
					NIM_BOOL LOC12;
					NimStringDesc* newfile;
					TSafePoint TMP4752;
					LOC8 = 0;
					LOC9 = 0;
					if ((NU)(i_270043) >= (NU)(gsourcefiles_248036->Sup.len)) raiseIndexError();
					LOC9 = gsourcefiles_248036->data[i_270043].dirty;
					if (!(LOC9)) goto LA10;
					if ((NU)(i_270043) >= (NU)(gsourcefiles_248036->Sup.len)) raiseIndexError();
					LOC9 = !(gsourcefiles_248036->data[i_270043].isnimfixfile);
					LA10: ;
					LOC8 = LOC9;
					if (!(LOC8)) goto LA11;
					nimln(29, "pretty.nim");
					LOC12 = 0;
					LOC12 = !(gonlymainfile_270023);
					if (LOC12) goto LA13;
					if ((NU)(i_270043) >= (NU)(gsourcefiles_248036->Sup.len)) raiseIndexError();
					LOC12 = (gsourcefiles_248036->data[i_270043].fileidx == gprojectmainidx_153237);
					LA13: ;
					LOC8 = LOC12;
					LA11: ;
					if (!LOC8) goto LA14;
					nimln(30, "pretty.nim");
					{
						if (!goverwrite_270020) goto LA18;
						if ((NU)(i_270043) >= (NU)(gsourcefiles_248036->Sup.len)) raiseIndexError();
						newfile = gsourcefiles_248036->data[i_270043].fullpath;
					}
					goto LA16;
					LA18: ;
					{
						nimln(31, "pretty.nim");
						if ((NU)(i_270043) >= (NU)(gsourcefiles_248036->Sup.len)) raiseIndexError();
						newfile = noschangeFileExt(gsourcefiles_248036->data[i_270043].fullpath, ((NimStringDesc*) &TMP4751));
					}
					LA16: ;
					nimln(32, "pretty.nim");
					pushSafePoint(&TMP4752);
					TMP4752.status = _setjmp(TMP4752.context);
					if (TMP4752.status == 0) {
						FILE* f;
						nimln(33, "pretty.nim");
						f = open_13217(newfile, ((NU8) 1), ((NI) -1));
						{
							NimStringDesc* line_270055;
							TY13606* HEX3Atmp_270064;
							NI i_270067;
							NI L_270069;
							line_270055 = 0;
							HEX3Atmp_270064 = 0;
							nimln(34, "pretty.nim");
							if ((NU)(i_270043) >= (NU)(gsourcefiles_248036->Sup.len)) raiseIndexError();
							HEX3Atmp_270064 = gsourcefiles_248036->data[i_270043].lines;
							nimln(3084, "system.nim");
							i_270067 = ((NI) 0);
							nimln(3085, "system.nim");
							L_270069 = (HEX3Atmp_270064 ? HEX3Atmp_270064->Sup.len : 0);
							{
								nimln(3086, "system.nim");
								while (1) {
									NI TMP4753;
									if (!(i_270067 < L_270069)) goto LA24;
									nimln(3087, "system.nim");
									if ((NU)(i_270067) >= (NU)(HEX3Atmp_270064->Sup.len)) raiseIndexError();
									line_270055 = HEX3Atmp_270064->data[i_270067];
									nimln(35, "pretty.nim");
									{
										NimStringDesc* LOC29;
										if (!dostrip) goto LA27;
										nimln(36, "pretty.nim");
										LOC29 = 0;
										LOC29 = nsuStrip(line_270055, NIM_FALSE, NIM_TRUE);
										write_13457(f, LOC29);
									}
									goto LA25;
									LA27: ;
									{
										nimln(38, "pretty.nim");
										write_13457(f, line_270055);
									}
									LA25: ;
									nimln(39, "pretty.nim");
									if ((NU)(i_270043) >= (NU)(gsourcefiles_248036->Sup.len)) raiseIndexError();
									write_13457(f, gsourcefiles_248036->data[i_270043].newline);
									nimln(3088, "system.nim");
									TMP4753 = addInt(i_270067, ((NI) 1));
									i_270067 = (NI)(TMP4753);
									nimln(3089, "system.nim");
									{
										if (!!(((HEX3Atmp_270064 ? HEX3Atmp_270064->Sup.len : 0) == L_270069))) goto LA33;
										failedassertimpl_87017(((NimStringDesc*) &TMP4754));
									}
									LA33: ;
								} LA24: ;
							}
						}
						nimln(40, "pretty.nim");
						fclose(f);
						popSafePoint();
					}
					else {
						popSafePoint();
						setFrame((TFrame*)&FR);
						if (isObj(getCurrentException()->Sup.m_type, (&NTI3431))) {
							TMP4752.status = 0;
							nimln(42, "pretty.nim");
							rawmessage_163960(((NU16) 3), newfile);
							popCurrentException();
						}
					}
					if (TMP4752.status != 0) reraiseException();
				}
				LA14: ;
				nimln(1619, "system.nim");
				TMP4755 = addInt(res_270073, ((NI) 1));
				res_270073 = (NI)(TMP4755);
			} LA5: ;
		}
	}
	popFrame();
}

N_NIMCALL(NIM_BOOL, HEX3DHEX7E_270101)(NimStringDesc* s, NimStringDesc** a, NI aLen0) {
	NIM_BOOL result;
	nimfr("=~", "pretty.nim")
{	result = 0;
	{
		NimStringDesc* x_270115;
		NI i_270119;
		x_270115 = 0;
		nimln(1689, "system.nim");
		i_270119 = ((NI) 0);
		{
			nimln(1690, "system.nim");
			while (1) {
				NI TMP4756;
				if (!(i_270119 < aLen0)) goto LA3;
				nimln(1691, "system.nim");
				if ((NU)(i_270119) >= (NU)(aLen0)) raiseIndexError();
				x_270115 = a[i_270119];
				nimln(46, "pretty.nim");
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = nsuStartsWith(s, x_270115);
					if (!LOC6) goto LA7;
					result = NIM_TRUE;
					goto BeforeRet;
				}
				LA7: ;
				nimln(1692, "system.nim");
				TMP4756 = addInt(i_270119, ((NI) 1));
				i_270119 = (NI)(TMP4756);
			} LA3: ;
		}
	}
	}BeforeRet: ;
	popFrame();
	return result;
}

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

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = 0;
	result = (NI)((NU32)(a) - (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI) 0) <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (((NI) 0) <= (NI)(result ^ (NI)((NU32) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, beautifyname_270135)(NimStringDesc* s, NU8 k) {
	NimStringDesc* result;
	NIM_BOOL allupper;
	NI i;
	NI TMP4792;
	nimfr("beautifyName", "pretty.nim")
{	result = 0;
	nimln(52, "pretty.nim");
	allupper = allcharsinset_98459(s, TMP4757);
	nimln(53, "pretty.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = allupper;
		if (!(LOC3)) goto LA4;
		LOC3 = ((1049728 &(1<<((k)&31)))!=0);
		LA4: ;
		if (!LOC3) goto LA5;
		result = copyString(s);
		goto BeforeRet;
	}
	LA5: ;
	nimln(54, "pretty.nim");
	result = rawNewString(((NI)chckRange((s ? s->Sup.len : 0), ((NI) 0), ((NI) 2147483647))));
	nimln(55, "pretty.nim");
	i = ((NI) 0);
	nimln(56, "pretty.nim");
	switch (k) {
	case ((NU8) 7):
	case ((NU8) 4):
	{
		nimln(59, "pretty.nim");
		{
			NIM_BOOL LOC10;
			LOC10 = 0;
			LOC10 = HEX3DHEX7E_270101(s, TMP4758, 33);
			if (!LOC10) goto LA11;
			nimln(65, "pretty.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			result = addChar(result, s->data[i]);
		}
		goto LA8;
		LA11: ;
		{
			NIM_CHAR LOC14;
			nimln(67, "pretty.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			LOC14 = 0;
			LOC14 = nsuToUpperChar(s->data[i]);
			result = addChar(result, LOC14);
		}
		LA8: ;
	}
	break;
	case ((NU8) 10):
	case ((NU8) 20):
	{
		nimln(70, "pretty.nim");
		if ((NU)(((NI) 0)) > (NU)(s->Sup.len)) raiseIndexError();
		result = addChar(result, s->data[((NI) 0)]);
	}
	break;
	default:
	{
		nimln(73, "pretty.nim");
		{
			NIM_BOOL LOC19;
			LOC19 = 0;
			LOC19 = ((s ? s->Sup.len : 0) == ((NI) 1));
			if (!(LOC19)) goto LA20;
			if ((NU)(((NI) 0)) > (NU)(s->Sup.len)) raiseIndexError();
			LOC19 = ((NU8)(s->data[((NI) 0)]) == (NU8)(76));
			LA20: ;
			if (!LOC19) goto LA21;
			result = addChar(result, 76);
		}
		goto LA17;
		LA21: ;
		{
			NIM_BOOL LOC24;
			nimln(74, "pretty.nim");
			LOC24 = 0;
			LOC24 = contains_99351(s, 95);
			if (!LOC24) goto LA25;
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			result = addChar(result, s->data[i]);
		}
		goto LA17;
		LA25: ;
		{
			NIM_CHAR LOC28;
			nimln(75, "pretty.nim");
			if ((NU)(((NI) 0)) > (NU)(s->Sup.len)) raiseIndexError();
			LOC28 = 0;
			LOC28 = nsuToLowerChar(s->data[((NI) 0)]);
			result = addChar(result, LOC28);
		}
		LA17: ;
	}
	break;
	}
	nimln(76, "pretty.nim");
	TMP4792 = addInt(i, ((NI) 1));
	i = (NI)(TMP4792);
	{
		nimln(77, "pretty.nim");
		while (1) {
			NI TMP4796;
			if (!(i < (s ? s->Sup.len : 0))) goto LA30;
			nimln(78, "pretty.nim");
			{
				if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
				if (!((NU8)(s->data[i]) == (NU8)(95))) goto LA33;
				nimln(79, "pretty.nim");
				{
					NIM_BOOL LOC37;
					NI TMP4793;
					NI TMP4794;
					LOC37 = 0;
					LOC37 = (((NI) 0) < i);
					if (!(LOC37)) goto LA38;
					TMP4793 = subInt(i, ((NI) 1));
					if ((NU)((NI)(TMP4793)) > (NU)(s->Sup.len)) raiseIndexError();
					LOC37 = (((NU8)(s->data[(NI)(TMP4793)])) >= ((NU8)(65)) && ((NU8)(s->data[(NI)(TMP4793)])) <= ((NU8)(90)));
					LA38: ;
					if (!LOC37) goto LA39;
					nimln(81, "pretty.nim");
					result = addChar(result, 95);
					nimln(82, "pretty.nim");
					TMP4794 = addInt(i, ((NI) 1));
					i = (NI)(TMP4794);
					nimln(83, "pretty.nim");
					if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
					result = addChar(result, s->data[i]);
				}
				goto LA35;
				LA39: ;
				{
					NI TMP4795;
					NIM_CHAR LOC42;
					nimln(85, "pretty.nim");
					TMP4795 = addInt(i, ((NI) 1));
					i = (NI)(TMP4795);
					nimln(86, "pretty.nim");
					if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
					LOC42 = 0;
					LOC42 = nsuToUpperChar(s->data[i]);
					result = addChar(result, LOC42);
				}
				LA35: ;
			}
			goto LA31;
			LA33: ;
			{
				NIM_CHAR LOC46;
				if (!allupper) goto LA44;
				nimln(88, "pretty.nim");
				if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
				LOC46 = 0;
				LOC46 = nsuToLowerChar(s->data[i]);
				result = addChar(result, LOC46);
			}
			goto LA31;
			LA44: ;
			{
				nimln(90, "pretty.nim");
				if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
				result = addChar(result, s->data[i]);
			}
			LA31: ;
			nimln(91, "pretty.nim");
			TMP4796 = addInt(i, ((NI) 1));
			i = (NI)(TMP4796);
		} LA30: ;
	}
	}BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
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

N_NIMCALL(void, replaceinfile_270216)(Tlineinfo162338 info, NimStringDesc* newname) {
	NimStringDesc* line;
	NI TMP4797;
	NI first;
	NI last;
	NI LOC17;
	NI TMP4801;
	NI TMP4802;
	nimfr("replaceInFile", "pretty.nim")
{	nimln(94, "pretty.nim");
	loadfile_248041(info);
	nimln(96, "pretty.nim");
	if ((NU)(info.fileindex) >= (NU)(gsourcefiles_248036->Sup.len)) raiseIndexError();
	TMP4797 = subInt(info.line, ((NI16) 1));
	if (TMP4797 < -32768 || TMP4797 > 32767) raiseOverflow();
	if ((NU)((NI16)(TMP4797)) >= (NU)(gsourcefiles_248036->data[info.fileindex].lines->Sup.len)) raiseIndexError();
	line = gsourcefiles_248036->data[info.fileindex].lines->data[(NI16)(TMP4797)];
	nimln(97, "pretty.nim");
	first = ((((NI) (info.col)) <= (line ? line->Sup.len : 0)) ? ((NI) (info.col)) : (line ? line->Sup.len : 0));
	nimln(98, "pretty.nim");
	{
		if (!(first < ((NI) 0))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		nimln(100, "pretty.nim");
		while (1) {
			NIM_BOOL LOC7;
			NI TMP4798;
			NI TMP4799;
			LOC7 = 0;
			LOC7 = (((NI) 0) < first);
			if (!(LOC7)) goto LA8;
			TMP4798 = subInt(first, ((NI) 1));
			if ((NU)((NI)(TMP4798)) > (NU)(line->Sup.len)) raiseIndexError();
			LOC7 = (((NU8)(line->data[(NI)(TMP4798)])) >= ((NU8)(97)) && ((NU8)(line->data[(NI)(TMP4798)])) <= ((NU8)(122)) || ((NU8)(line->data[(NI)(TMP4798)])) >= ((NU8)(65)) && ((NU8)(line->data[(NI)(TMP4798)])) <= ((NU8)(90)) || ((NU8)(line->data[(NI)(TMP4798)])) >= ((NU8)(48)) && ((NU8)(line->data[(NI)(TMP4798)])) <= ((NU8)(57)) || ((NU8)(line->data[(NI)(TMP4798)])) >= ((NU8)(128)) && ((NU8)(line->data[(NI)(TMP4798)])) <= ((NU8)(255)) || ((NU8)(line->data[(NI)(TMP4798)])) == ((NU8)(95)));
			LA8: ;
			if (!LOC7) goto LA6;
			TMP4799 = subInt(first, ((NI) 1));
			first = (NI)(TMP4799);
		} LA6: ;
	}
	nimln(101, "pretty.nim");
	{
		if (!(first < ((NI) 0))) goto LA11;
		goto BeforeRet;
	}
	LA11: ;
	nimln(102, "pretty.nim");
	{
		NI TMP4800;
		if ((NU)(first) > (NU)(line->Sup.len)) raiseIndexError();
		if (!((NU8)(line->data[first]) == (NU8)(96))) goto LA15;
		TMP4800 = addInt(first, ((NI) 1));
		first = (NI)(TMP4800);
	}
	LA15: ;
	nimln(104, "pretty.nim");
	LOC17 = 0;
	LOC17 = identlen_248147(line, first);
	TMP4801 = addInt(first, LOC17);
	TMP4802 = subInt((NI)(TMP4801), ((NI) 1));
	last = (NI)(TMP4802);
	nimln(105, "pretty.nim");
	{
		NIM_BOOL LOC20;
		NimStringDesc* x;
		NimStringDesc* LOC23;
		NI TMP4803;
		NimStringDesc* LOC24;
		NI TMP4804;
		NimStringDesc* LOC25;
		NI TMP4805;
		LOC20 = 0;
		LOC20 = differ_248184(line, first, last, newname);
		if (!LOC20) goto LA21;
		nimln(107, "pretty.nim");
		LOC23 = 0;
		TMP4803 = subInt(first, ((NI) 1));
		LOC24 = 0;
		LOC24 = copyStrLast(line, ((NI) 0), (NI)(TMP4803));
		TMP4804 = addInt(last, ((NI) 1));
		LOC25 = 0;
		LOC25 = copyStr(line, (NI)(TMP4804));
		LOC23 = rawNewString(LOC24->Sup.len + newname->Sup.len + LOC25->Sup.len + 0);
appendString(LOC23, LOC24);
appendString(LOC23, newname);
appendString(LOC23, LOC25);
		x = LOC23;
		nimln(108, "pretty.nim");
		if ((NU)(info.fileindex) >= (NU)(gsourcefiles_248036->Sup.len)) raiseIndexError();
		TMP4805 = subInt(info.line, ((NI16) 1));
		if (TMP4805 < -32768 || TMP4805 > 32767) raiseOverflow();
		if ((NU)((NI16)(TMP4805)) >= (NU)(gsourcefiles_248036->data[info.fileindex].lines->Sup.len)) raiseIndexError();
		asgnRefNoCycle((void**) (&gsourcefiles_248036->data[info.fileindex].lines->data[(NI16)(TMP4805)]), x);
		nimln(109, "pretty.nim");
		if ((NU)(info.fileindex) >= (NU)(gsourcefiles_248036->Sup.len)) raiseIndexError();
		gsourcefiles_248036->data[info.fileindex].dirty = NIM_TRUE;
	}
	LA21: ;
	}BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, checkstyle_270270)(Tlineinfo162338 info, NimStringDesc* s, NU8 k, Tsym190843* sym) {
	NimStringDesc* beau;
	nimfr("checkStyle", "pretty.nim")
	nimln(112, "pretty.nim");
	beau = beautifyname_270135(s, k);
	nimln(113, "pretty.nim");
	{
		if (!!(eqStrings(s, beau))) goto LA3;
		nimln(114, "pretty.nim");
		{
			if (!(gstylecheck_270021 == ((NU8) 2))) goto LA7;
			nimln(115, "pretty.nim");
			asgnRefNoCycle((void**) (&(*sym).name), getident_166463(beau));
			nimln(116, "pretty.nim");
			replaceinfile_270216(info, beau);
		}
		goto LA5;
		LA7: ;
		{
			nimln(118, "pretty.nim");
			message_164188(info, ((NU16) 275), beau);
		}
		LA5: ;
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, stylecheckdefimpl_270294)(Tlineinfo162338 info, Tsym190843* s, NU8 k) {
	nimfr("styleCheckDefImpl", "pretty.nim")
{	nimln(122, "pretty.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((2080 &(1<<((k)&31)))!=0);
		if (LOC3) goto LA4;
		if ((NU)(((NI) 0)) > (NU)((*(*s).name).s->Sup.len)) raiseIndexError();
		LOC3 = !((((NU8)((*(*s).name).s->data[((NI) 0)])) >= ((NU8)(97)) && ((NU8)((*(*s).name).s->data[((NI) 0)])) <= ((NU8)(122)) || ((NU8)((*(*s).name).s->data[((NI) 0)])) >= ((NU8)(65)) && ((NU8)((*(*s).name).s->data[((NI) 0)])) <= ((NU8)(90)) || ((NU8)((*(*s).name).s->data[((NI) 0)])) >= ((NU8)(48)) && ((NU8)((*(*s).name).s->data[((NI) 0)])) <= ((NU8)(57)) || ((NU8)((*(*s).name).s->data[((NI) 0)])) >= ((NU8)(128)) && ((NU8)((*(*s).name).s->data[((NI) 0)])) <= ((NU8)(255)) || ((NU8)((*(*s).name).s->data[((NI) 0)])) == ((NU8)(95))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	nimln(123, "pretty.nim");
	{
		NIM_BOOL LOC9;
		LOC9 = 0;
		LOC9 = ((144 &(1<<((k)&31)))!=0);
		if (!(LOC9)) goto LA10;
		LOC9 = (((*s).flags &(1<<((((NU8) 29))&31)))!=0);
		LA10: ;
		if (!LOC9) goto LA11;
		goto BeforeRet;
	}
	LA11: ;
	nimln(124, "pretty.nim");
	{
		NIM_BOOL LOC15;
		LOC15 = 0;
		LOC15 = ((96 & (*s).flags) == 0);
		if (LOC15) goto LA16;
		LOC15 = gcheckextern_270022;
		LA16: ;
		if (!LOC15) goto LA17;
		nimln(125, "pretty.nim");
		checkstyle_270270(info, (*(*s).name).s, k, s);
	}
	LA17: ;
	}BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, stylecheckuseimpl_270404)(Tlineinfo162338 info, Tsym190843* s) {
	NimStringDesc* newname;
	nimfr("styleCheckUseImpl", "pretty.nim")
{	nimln(137, "pretty.nim");
	{
		if (!(info.fileindex < ((NI32) 0))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	nimln(142, "pretty.nim");
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = ((2080 &(1<<(((*s).kind)&31)))!=0);
		if (LOC7) goto LA8;
		if ((NU)(((NI) 0)) > (NU)((*(*s).name).s->Sup.len)) raiseIndexError();
		LOC7 = !((((NU8)((*(*s).name).s->data[((NI) 0)])) >= ((NU8)(97)) && ((NU8)((*(*s).name).s->data[((NI) 0)])) <= ((NU8)(122)) || ((NU8)((*(*s).name).s->data[((NI) 0)])) >= ((NU8)(65)) && ((NU8)((*(*s).name).s->data[((NI) 0)])) <= ((NU8)(90)) || ((NU8)((*(*s).name).s->data[((NI) 0)])) >= ((NU8)(48)) && ((NU8)((*(*s).name).s->data[((NI) 0)])) <= ((NU8)(57)) || ((NU8)((*(*s).name).s->data[((NI) 0)])) >= ((NU8)(128)) && ((NU8)((*(*s).name).s->data[((NI) 0)])) <= ((NU8)(255)) || ((NU8)((*(*s).name).s->data[((NI) 0)])) == ((NU8)(95))));
		LA8: ;
		if (!LOC7) goto LA9;
		nimln(143, "pretty.nim");
		goto BeforeRet;
	}
	LA9: ;
	nimln(144, "pretty.nim");
	{
		NIM_BOOL LOC13;
		LOC13 = 0;
		LOC13 = ((144 &(1<<(((*s).kind)&31)))!=0);
		if (!(LOC13)) goto LA14;
		LOC13 = (((*s).flags &(1<<((((NU8) 29))&31)))!=0);
		LA14: ;
		if (!LOC13) goto LA15;
		goto BeforeRet;
	}
	LA15: ;
	nimln(145, "pretty.nim");
	newname = (*(*s).name).s;
	nimln(147, "pretty.nim");
	replaceinfile_270216(info, newname);
	}BeforeRet: ;
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, compiler_prettyInit)(void) {
	nimfr("pretty", "pretty.nim")
	nimln(21, "pretty.nim");
	goverwrite_270020 = NIM_TRUE;
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_prettyDatInit)(void) {
}

