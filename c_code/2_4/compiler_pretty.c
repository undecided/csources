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
typedef struct TY249019 TY249019;
typedef struct Tsourcefile249008 Tsourcefile249008;
typedef struct TY13606 TY13606;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TSafePoint TSafePoint;
typedef struct Tcell46746 Tcell46746;
typedef struct Tcellset46758 Tcellset46758;
typedef struct Tgcheap48616 Tgcheap48616;
typedef struct Tcellseq46762 Tcellseq46762;
typedef struct Tpagedesc46754 Tpagedesc46754;
typedef struct Tmemregion28610 Tmemregion28610;
typedef struct Tsmallchunk27840 Tsmallchunk27840;
typedef struct Tllchunk28604 Tllchunk28604;
typedef struct Tbigchunk27842 Tbigchunk27842;
typedef struct Tintset27817 Tintset27817;
typedef struct Ttrunk27813 Ttrunk27813;
typedef struct Tavlnode28608 Tavlnode28608;
typedef struct Tgcstat48614 Tgcstat48614;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct Tsym191843 Tsym191843;
typedef struct Tidobj167015 Tidobj167015;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Ttype191849 Ttype191849;
typedef struct Tident167021 Tident167021;
typedef struct Tnode191813 Tnode191813;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tlib191831 Tlib191831;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TY191933 TY191933;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tsourcefile249008  {
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
typedef NU8 TY77659[32];
typedef NimStringDesc* TY271154[33];
struct  Tlineinfo163338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable191817  {
NI counter;
Tsymseq191815* data;
};
struct  Tloc191827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype191849* t;
Ropeobj161009* r;
Ropeobj161009* heaproot;
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
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
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
struct  Tscope191837  {
NI depthlevel;
Tstrtable191817 symbols;
Tnodeseq191807* usingsyms;
Tscope191837* parent;
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
struct  Ropeobj161009  {
  TNimObject Sup;
Ropeobj161009* left;
Ropeobj161009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
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
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
};
struct TY249019 {
  TGenericSeq Sup;
  Tsourcefile249008 data[SEQ_DECL_SIZE];
};
struct TY13606 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct Ttypeseq191845 {
  TGenericSeq Sup;
  Ttype191849* data[SEQ_DECL_SIZE];
};
struct TY191944 {
  TGenericSeq Sup;
  Tinstantiation191833* data[SEQ_DECL_SIZE];
};
struct Tsymseq191815 {
  TGenericSeq Sup;
  Tsym191843* data[SEQ_DECL_SIZE];
};
struct Tnodeseq191807 {
  TGenericSeq Sup;
  Tnode191813* data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, overwritefiles_271030)(void);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, getconfigvar_154334)(NimStringDesc* key);
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
N_NIMCALL(void, rawmessage_164960)(NU16 msg, NimStringDesc* arg);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52622)(Tcell46746* c);
static N_INLINE(NIM_BOOL, canbecycleroot_50267)(Tcell46746* c);
static N_INLINE(void, rtladdcycleroot_51023)(Tcell46746* c);
N_NOINLINE(void, incl_47465)(Tcellset46758* s, Tcell46746* cell);
static N_INLINE(Tcell46746*, usrtocell_50246)(void* usr);
static N_INLINE(void, decref_52204)(Tcell46746* c);
static N_INLINE(void, rtladdzct_51804)(Tcell46746* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46762* s, Tcell46746* c);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(NIM_BOOL, HEX3DHEX7E_271101)(NimStringDesc* s, NimStringDesc** a, NI aLen0);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(NimStringDesc*, beautifyname_271135)(NimStringDesc* s, NU8 k);
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
N_NIMCALL(void, replaceinfile_271216)(Tlineinfo163338 info, NimStringDesc* newname);
N_NIMCALL(void, loadfile_249041)(Tlineinfo163338 info);
N_NIMCALL(NI, identlen_249147)(NimStringDesc* line, NI start);
N_NIMCALL(NIM_BOOL, differ_249184)(NimStringDesc* line, NI a, NI b, NimStringDesc* x);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76643, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, checkstyle_271270)(Tlineinfo163338 info, NimStringDesc* s, NU8 k, Tsym191843* sym);
N_NIMCALL(Tident167021*, getident_167463)(NimStringDesc* identifier);
N_NIMCALL(void, message_165188)(Tlineinfo163338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, stylecheckdefimpl_271294)(Tlineinfo163338 info, Tsym191843* s, NU8 k);
N_NIMCALL(void, stylecheckuseimpl_271404)(Tlineinfo163338 info, Tsym191843* s);
STRING_LITERAL(TMP4753, "pretty.strip", 12);
STRING_LITERAL(TMP4754, "on", 2);
STRING_LITERAL(TMP4755, ".pretty.nim", 11);
STRING_LITERAL(TMP4758, "len(a) == L seq modified while iterating over it", 48);
static NIM_CONST TY77659 TMP4761 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x03,
0xFE, 0xFF, 0xFF, 0x87, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4763, "int", 3);
STRING_LITERAL(TMP4764, "uint", 4);
STRING_LITERAL(TMP4765, "cint", 4);
STRING_LITERAL(TMP4766, "cuint", 5);
STRING_LITERAL(TMP4767, "clong", 5);
STRING_LITERAL(TMP4768, "cstring", 7);
STRING_LITERAL(TMP4769, "string", 6);
STRING_LITERAL(TMP4770, "char", 4);
STRING_LITERAL(TMP4771, "byte", 4);
STRING_LITERAL(TMP4772, "bool", 4);
STRING_LITERAL(TMP4773, "openArray", 9);
STRING_LITERAL(TMP4774, "seq", 3);
STRING_LITERAL(TMP4775, "array", 5);
STRING_LITERAL(TMP4776, "void", 4);
STRING_LITERAL(TMP4777, "pointer", 7);
STRING_LITERAL(TMP4778, "float", 5);
STRING_LITERAL(TMP4779, "csize", 5);
STRING_LITERAL(TMP4780, "cdouble", 7);
STRING_LITERAL(TMP4781, "cchar", 5);
STRING_LITERAL(TMP4782, "cschar", 6);
STRING_LITERAL(TMP4783, "cshort", 6);
STRING_LITERAL(TMP4784, "cu", 2);
STRING_LITERAL(TMP4785, "nil", 3);
STRING_LITERAL(TMP4786, "expr", 4);
STRING_LITERAL(TMP4787, "stmt", 4);
STRING_LITERAL(TMP4788, "typedesc", 8);
STRING_LITERAL(TMP4789, "auto", 4);
STRING_LITERAL(TMP4790, "any", 3);
STRING_LITERAL(TMP4791, "range", 5);
STRING_LITERAL(TMP4792, "openarray", 9);
STRING_LITERAL(TMP4793, "varargs", 7);
STRING_LITERAL(TMP4794, "set", 3);
STRING_LITERAL(TMP4795, "cfloat", 6);
NIM_CONST TY271154 TMP4762 = {((NimStringDesc*) &TMP4763),
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
((NimStringDesc*) &TMP4791),
((NimStringDesc*) &TMP4792),
((NimStringDesc*) &TMP4793),
((NimStringDesc*) &TMP4794),
((NimStringDesc*) &TMP4795)}
;
NIM_BOOL goverwrite_271020;
NU8 gstylecheck_271021;
NIM_BOOL gcheckextern_271022;
NIM_BOOL gonlymainfile_271023;
extern TY249019* gsourcefiles_249036;
extern NI32 gprojectmainidx_154237;
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

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_17045), (*currexception_17045).parent);
}

N_NIMCALL(void, overwritefiles_271030)(void) {
	NIM_BOOL dostrip;
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	nimfr("overwriteFiles", "pretty.nim")
	nimln(26, "pretty.nim");
	LOC1 = 0;
	LOC1 = getconfigvar_154334(((NimStringDesc*) &TMP4753));
	LOC2 = 0;
	LOC2 = nsuNormalize(LOC1);
	dostrip = eqStrings(LOC2, ((NimStringDesc*) &TMP4754));
	{
		NI i_271043;
		NI HEX3Atmp_271070;
		NI res_271073;
		i_271043 = 0;
		HEX3Atmp_271070 = 0;
		nimln(27, "pretty.nim");
		HEX3Atmp_271070 = (gsourcefiles_249036 ? (gsourcefiles_249036->Sup.len-1) : -1);
		nimln(1598, "system.nim");
		res_271073 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4759;
				if (!(res_271073 <= HEX3Atmp_271070)) goto LA5;
				nimln(1600, "system.nim");
				i_271043 = res_271073;
				nimln(28, "pretty.nim");
				{
					NIM_BOOL LOC8;
					NIM_BOOL LOC9;
					NIM_BOOL LOC12;
					NimStringDesc* newfile;
					TSafePoint TMP4756;
					LOC8 = 0;
					LOC9 = 0;
					if ((NU)(i_271043) >= (NU)(gsourcefiles_249036->Sup.len)) raiseIndexError();
					LOC9 = gsourcefiles_249036->data[i_271043].dirty;
					if (!(LOC9)) goto LA10;
					if ((NU)(i_271043) >= (NU)(gsourcefiles_249036->Sup.len)) raiseIndexError();
					LOC9 = !(gsourcefiles_249036->data[i_271043].isnimfixfile);
					LA10: ;
					LOC8 = LOC9;
					if (!(LOC8)) goto LA11;
					nimln(29, "pretty.nim");
					LOC12 = 0;
					LOC12 = !(gonlymainfile_271023);
					if (LOC12) goto LA13;
					if ((NU)(i_271043) >= (NU)(gsourcefiles_249036->Sup.len)) raiseIndexError();
					LOC12 = (gsourcefiles_249036->data[i_271043].fileidx == gprojectmainidx_154237);
					LA13: ;
					LOC8 = LOC12;
					LA11: ;
					if (!LOC8) goto LA14;
					nimln(30, "pretty.nim");
					{
						if (!goverwrite_271020) goto LA18;
						if ((NU)(i_271043) >= (NU)(gsourcefiles_249036->Sup.len)) raiseIndexError();
						newfile = gsourcefiles_249036->data[i_271043].fullpath;
					}
					goto LA16;
					LA18: ;
					{
						nimln(31, "pretty.nim");
						if ((NU)(i_271043) >= (NU)(gsourcefiles_249036->Sup.len)) raiseIndexError();
						newfile = noschangeFileExt(gsourcefiles_249036->data[i_271043].fullpath, ((NimStringDesc*) &TMP4755));
					}
					LA16: ;
					nimln(32, "pretty.nim");
					pushSafePoint(&TMP4756);
					TMP4756.status = setjmp(TMP4756.context);
					if (TMP4756.status == 0) {
						FILE* f;
						nimln(33, "pretty.nim");
						f = open_13217(newfile, ((NU8) 1), ((NI) -1));
						{
							NimStringDesc* line_271055;
							TY13606* HEX3Atmp_271064;
							NI i_271067;
							NI L_271069;
							line_271055 = 0;
							HEX3Atmp_271064 = 0;
							nimln(34, "pretty.nim");
							if ((NU)(i_271043) >= (NU)(gsourcefiles_249036->Sup.len)) raiseIndexError();
							HEX3Atmp_271064 = gsourcefiles_249036->data[i_271043].lines;
							nimln(3084, "system.nim");
							i_271067 = ((NI) 0);
							nimln(3085, "system.nim");
							L_271069 = (HEX3Atmp_271064 ? HEX3Atmp_271064->Sup.len : 0);
							{
								nimln(3086, "system.nim");
								while (1) {
									NI TMP4757;
									if (!(i_271067 < L_271069)) goto LA24;
									nimln(3087, "system.nim");
									if ((NU)(i_271067) >= (NU)(HEX3Atmp_271064->Sup.len)) raiseIndexError();
									line_271055 = HEX3Atmp_271064->data[i_271067];
									nimln(35, "pretty.nim");
									{
										NimStringDesc* LOC29;
										if (!dostrip) goto LA27;
										nimln(36, "pretty.nim");
										LOC29 = 0;
										LOC29 = nsuStrip(line_271055, NIM_FALSE, NIM_TRUE);
										write_13457(f, LOC29);
									}
									goto LA25;
									LA27: ;
									{
										nimln(38, "pretty.nim");
										write_13457(f, line_271055);
									}
									LA25: ;
									nimln(39, "pretty.nim");
									if ((NU)(i_271043) >= (NU)(gsourcefiles_249036->Sup.len)) raiseIndexError();
									write_13457(f, gsourcefiles_249036->data[i_271043].newline);
									nimln(3088, "system.nim");
									TMP4757 = addInt(i_271067, ((NI) 1));
									i_271067 = (NI)(TMP4757);
									nimln(3089, "system.nim");
									{
										if (!!(((HEX3Atmp_271064 ? HEX3Atmp_271064->Sup.len : 0) == L_271069))) goto LA33;
										failedassertimpl_87017(((NimStringDesc*) &TMP4758));
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
							TMP4756.status = 0;
							nimln(42, "pretty.nim");
							rawmessage_164960(((NU16) 3), newfile);
							popCurrentException();
						}
					}
					if (TMP4756.status != 0) reraiseException();
				}
				LA14: ;
				nimln(1619, "system.nim");
				TMP4759 = addInt(res_271073, ((NI) 1));
				res_271073 = (NI)(TMP4759);
			} LA5: ;
		}
	}
	popFrame();
}

N_NIMCALL(NIM_BOOL, HEX3DHEX7E_271101)(NimStringDesc* s, NimStringDesc** a, NI aLen0) {
	NIM_BOOL result;
	nimfr("=~", "pretty.nim")
{	result = 0;
	{
		NimStringDesc* x_271115;
		NI i_271119;
		x_271115 = 0;
		nimln(1689, "system.nim");
		i_271119 = ((NI) 0);
		{
			nimln(1690, "system.nim");
			while (1) {
				NI TMP4760;
				if (!(i_271119 < aLen0)) goto LA3;
				nimln(1691, "system.nim");
				if ((NU)(i_271119) >= (NU)(aLen0)) raiseIndexError();
				x_271115 = a[i_271119];
				nimln(46, "pretty.nim");
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = nsuStartsWith(s, x_271115);
					if (!LOC6) goto LA7;
					result = NIM_TRUE;
					goto BeforeRet;
				}
				LA7: ;
				nimln(1692, "system.nim");
				TMP4760 = addInt(i_271119, ((NI) 1));
				i_271119 = (NI)(TMP4760);
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

N_NIMCALL(NimStringDesc*, beautifyname_271135)(NimStringDesc* s, NU8 k) {
	NimStringDesc* result;
	NIM_BOOL allupper;
	NI i;
	NI TMP4796;
	nimfr("beautifyName", "pretty.nim")
{	result = 0;
	nimln(52, "pretty.nim");
	allupper = allcharsinset_98459(s, TMP4761);
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
			LOC10 = HEX3DHEX7E_271101(s, TMP4762, 33);
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
	TMP4796 = addInt(i, ((NI) 1));
	i = (NI)(TMP4796);
	{
		nimln(77, "pretty.nim");
		while (1) {
			NI TMP4800;
			if (!(i < (s ? s->Sup.len : 0))) goto LA30;
			nimln(78, "pretty.nim");
			{
				if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
				if (!((NU8)(s->data[i]) == (NU8)(95))) goto LA33;
				nimln(79, "pretty.nim");
				{
					NIM_BOOL LOC37;
					NI TMP4797;
					NI TMP4798;
					LOC37 = 0;
					LOC37 = (((NI) 0) < i);
					if (!(LOC37)) goto LA38;
					TMP4797 = subInt(i, ((NI) 1));
					if ((NU)((NI)(TMP4797)) > (NU)(s->Sup.len)) raiseIndexError();
					LOC37 = (((NU8)(s->data[(NI)(TMP4797)])) >= ((NU8)(65)) && ((NU8)(s->data[(NI)(TMP4797)])) <= ((NU8)(90)));
					LA38: ;
					if (!LOC37) goto LA39;
					nimln(81, "pretty.nim");
					result = addChar(result, 95);
					nimln(82, "pretty.nim");
					TMP4798 = addInt(i, ((NI) 1));
					i = (NI)(TMP4798);
					nimln(83, "pretty.nim");
					if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
					result = addChar(result, s->data[i]);
				}
				goto LA35;
				LA39: ;
				{
					NI TMP4799;
					NIM_CHAR LOC42;
					nimln(85, "pretty.nim");
					TMP4799 = addInt(i, ((NI) 1));
					i = (NI)(TMP4799);
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
			TMP4800 = addInt(i, ((NI) 1));
			i = (NI)(TMP4800);
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

N_NIMCALL(void, replaceinfile_271216)(Tlineinfo163338 info, NimStringDesc* newname) {
	NimStringDesc* line;
	NI TMP4801;
	NI first;
	NI last;
	NI LOC17;
	NI TMP4805;
	NI TMP4806;
	nimfr("replaceInFile", "pretty.nim")
{	nimln(94, "pretty.nim");
	loadfile_249041(info);
	nimln(96, "pretty.nim");
	if ((NU)(info.fileindex) >= (NU)(gsourcefiles_249036->Sup.len)) raiseIndexError();
	TMP4801 = subInt(info.line, ((NI16) 1));
	if (TMP4801 < -32768 || TMP4801 > 32767) raiseOverflow();
	if ((NU)((NI16)(TMP4801)) >= (NU)(gsourcefiles_249036->data[info.fileindex].lines->Sup.len)) raiseIndexError();
	line = gsourcefiles_249036->data[info.fileindex].lines->data[(NI16)(TMP4801)];
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
			NI TMP4802;
			NI TMP4803;
			LOC7 = 0;
			LOC7 = (((NI) 0) < first);
			if (!(LOC7)) goto LA8;
			TMP4802 = subInt(first, ((NI) 1));
			if ((NU)((NI)(TMP4802)) > (NU)(line->Sup.len)) raiseIndexError();
			LOC7 = (((NU8)(line->data[(NI)(TMP4802)])) >= ((NU8)(97)) && ((NU8)(line->data[(NI)(TMP4802)])) <= ((NU8)(122)) || ((NU8)(line->data[(NI)(TMP4802)])) >= ((NU8)(65)) && ((NU8)(line->data[(NI)(TMP4802)])) <= ((NU8)(90)) || ((NU8)(line->data[(NI)(TMP4802)])) >= ((NU8)(48)) && ((NU8)(line->data[(NI)(TMP4802)])) <= ((NU8)(57)) || ((NU8)(line->data[(NI)(TMP4802)])) >= ((NU8)(128)) && ((NU8)(line->data[(NI)(TMP4802)])) <= ((NU8)(255)) || ((NU8)(line->data[(NI)(TMP4802)])) == ((NU8)(95)));
			LA8: ;
			if (!LOC7) goto LA6;
			TMP4803 = subInt(first, ((NI) 1));
			first = (NI)(TMP4803);
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
		NI TMP4804;
		if ((NU)(first) > (NU)(line->Sup.len)) raiseIndexError();
		if (!((NU8)(line->data[first]) == (NU8)(96))) goto LA15;
		TMP4804 = addInt(first, ((NI) 1));
		first = (NI)(TMP4804);
	}
	LA15: ;
	nimln(104, "pretty.nim");
	LOC17 = 0;
	LOC17 = identlen_249147(line, first);
	TMP4805 = addInt(first, LOC17);
	TMP4806 = subInt((NI)(TMP4805), ((NI) 1));
	last = (NI)(TMP4806);
	nimln(105, "pretty.nim");
	{
		NIM_BOOL LOC20;
		NimStringDesc* x;
		NimStringDesc* LOC23;
		NI TMP4807;
		NimStringDesc* LOC24;
		NI TMP4808;
		NimStringDesc* LOC25;
		NI TMP4809;
		LOC20 = 0;
		LOC20 = differ_249184(line, first, last, newname);
		if (!LOC20) goto LA21;
		nimln(107, "pretty.nim");
		LOC23 = 0;
		TMP4807 = subInt(first, ((NI) 1));
		LOC24 = 0;
		LOC24 = copyStrLast(line, ((NI) 0), (NI)(TMP4807));
		TMP4808 = addInt(last, ((NI) 1));
		LOC25 = 0;
		LOC25 = copyStr(line, (NI)(TMP4808));
		LOC23 = rawNewString(LOC24->Sup.len + newname->Sup.len + LOC25->Sup.len + 0);
appendString(LOC23, LOC24);
appendString(LOC23, newname);
appendString(LOC23, LOC25);
		x = LOC23;
		nimln(108, "pretty.nim");
		if ((NU)(info.fileindex) >= (NU)(gsourcefiles_249036->Sup.len)) raiseIndexError();
		TMP4809 = subInt(info.line, ((NI16) 1));
		if (TMP4809 < -32768 || TMP4809 > 32767) raiseOverflow();
		if ((NU)((NI16)(TMP4809)) >= (NU)(gsourcefiles_249036->data[info.fileindex].lines->Sup.len)) raiseIndexError();
		asgnRefNoCycle((void**) (&gsourcefiles_249036->data[info.fileindex].lines->data[(NI16)(TMP4809)]), x);
		nimln(109, "pretty.nim");
		if ((NU)(info.fileindex) >= (NU)(gsourcefiles_249036->Sup.len)) raiseIndexError();
		gsourcefiles_249036->data[info.fileindex].dirty = NIM_TRUE;
	}
	LA21: ;
	}BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, checkstyle_271270)(Tlineinfo163338 info, NimStringDesc* s, NU8 k, Tsym191843* sym) {
	NimStringDesc* beau;
	nimfr("checkStyle", "pretty.nim")
	nimln(112, "pretty.nim");
	beau = beautifyname_271135(s, k);
	nimln(113, "pretty.nim");
	{
		if (!!(eqStrings(s, beau))) goto LA3;
		nimln(114, "pretty.nim");
		{
			if (!(gstylecheck_271021 == ((NU8) 2))) goto LA7;
			nimln(115, "pretty.nim");
			asgnRefNoCycle((void**) (&(*sym).name), getident_167463(beau));
			nimln(116, "pretty.nim");
			replaceinfile_271216(info, beau);
		}
		goto LA5;
		LA7: ;
		{
			nimln(118, "pretty.nim");
			message_165188(info, ((NU16) 275), beau);
		}
		LA5: ;
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, stylecheckdefimpl_271294)(Tlineinfo163338 info, Tsym191843* s, NU8 k) {
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
		LOC15 = gcheckextern_271022;
		LA16: ;
		if (!LOC15) goto LA17;
		nimln(125, "pretty.nim");
		checkstyle_271270(info, (*(*s).name).s, k, s);
	}
	LA17: ;
	}BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, stylecheckuseimpl_271404)(Tlineinfo163338 info, Tsym191843* s) {
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
	replaceinfile_271216(info, newname);
	}BeforeRet: ;
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, compiler_prettyInit)(void) {
	nimfr("pretty", "pretty.nim")
	nimln(21, "pretty.nim");
	goverwrite_271020 = NIM_TRUE;
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_prettyDatInit)(void) {
}

