/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Ropeobj162009 Ropeobj162009;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode192813 Tnode192813;
typedef struct Tpasscontext243005 Tpasscontext243005;
typedef struct Tgen508016 Tgen508016;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct Tsym192843 Tsym192843;
typedef struct Ttype192849 Ttype192849;
typedef struct Tlineinfo164338 Tlineinfo164338;
typedef struct Tident168021 Tident168021;
typedef struct Tnodeseq192807 Tnodeseq192807;
typedef struct Tidobj168015 Tidobj168015;
typedef struct Ttypeseq192845 Ttypeseq192845;
typedef struct Tscope192837 Tscope192837;
typedef struct TY192944 TY192944;
typedef struct Tstrtable192817 Tstrtable192817;
typedef struct Tsymseq192815 Tsymseq192815;
typedef struct Tloc192827 Tloc192827;
typedef struct Tlib192831 Tlib192831;
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
typedef struct Tpass243017 Tpass243017;
typedef struct Trodreader235030 Trodreader235030;
typedef struct Tinstantiation192833 Tinstantiation192833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct TY192933 TY192933;
typedef struct Tindex235028 Tindex235028;
typedef struct Tiitable200274 Tiitable200274;
typedef struct Tiipairseq200272 Tiipairseq200272;
typedef struct Tidtable192861 Tidtable192861;
typedef struct Tidpairseq192859 Tidpairseq192859;
typedef struct Memfile233208 Memfile233208;
typedef struct Tiipair200270 Tiipair200270;
typedef struct Tidpair192857 Tidpair192857;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef Ropeobj162009* TY201177[2];
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
struct  Tpasscontext243005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tgen508016  {
  Tpasscontext243005 Sup;
Tsym192843* module;
};
struct  Tlineinfo164338  {
NI16 line;
NI16 col;
NI32 fileindex;
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
typedef NU8 TY193031[20];
struct  Tidobj168015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable192817  {
NI counter;
Tsymseq192815* data;
};
struct  Tloc192827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype192849* t;
Ropeobj162009* r;
Ropeobj162009* heaproot;
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
struct  Tident168021  {
  Tidobj168015 Sup;
NimStringDesc* s;
Tident168021* next;
NI h;
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
typedef N_NIMCALL_PTR(Tpasscontext243005*, Tpassopen243009) (Tsym192843* module);
typedef N_NIMCALL_PTR(Tpasscontext243005*, Tpassopencached243011) (Tsym192843* module, Trodreader235030* rd);
typedef N_NIMCALL_PTR(Tnode192813*, Tpassprocess243015) (Tpasscontext243005* p, Tnode192813* toplevelstmt);
typedef N_NIMCALL_PTR(Tnode192813*, Tpassclose243013) (Tpasscontext243005* p, Tnode192813* n);
struct Tpass243017 {
Tpassopen243009 Field0;
Tpassopencached243011 Field1;
Tpassprocess243015 Field2;
Tpassclose243013 Field3;
};
struct  Ropeobj162009  {
  TNimObject Sup;
Ropeobj162009* left;
Ropeobj162009* right;
NI length;
NimStringDesc* data;
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
struct  Tscope192837  {
NI depthlevel;
Tstrtable192817 symbols;
Tnodeseq192807* usingsyms;
Tscope192837* parent;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tlib192831  {
  Tlistentry130022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj162009* name;
Tnode192813* path;
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
struct  Tiitable200274  {
NI counter;
Tiipairseq200272* data;
};
struct  Tindex235028  {
NI lastidxkey;
NI lastidxval;
Tiitable200274 tab;
NimStringDesc* r;
NI offset;
};
struct  Tidtable192861  {
NI counter;
Tidpairseq192859* data;
};
struct  Memfile233208  {
void* mem;
NI size;
int handle;
};
struct  Trodreader235030  {
  TNimObject Sup;
NI pos;
NCSTRING s;
NU32 options;
NU8 reason;
TY192933* moddeps;
TY192933* files;
NI dataidx;
NI convertersidx;
NI initidx;
NI interfidx;
NI compilerprocsidx;
NI methodsidx;
NimStringDesc* filename;
Tindex235028 index;
Tindex235028 imports;
NI readerindex;
NI line;
NI moduleid;
Tidtable192861 syms;
Memfile233208 memfile;
Tsymseq192815* methods;
NimStringDesc* origfile;
NIM_BOOL inviewmode;
};
struct  Tinstantiation192833  {
Tsym192843* sym;
Ttypeseq192845* concretetypes;
TY192933* usedby;
};
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
struct  Tiipair200270  {
NI key;
NI val;
};
struct  Tidpair192857  {
Tidobj168015* key;
TNimObject* val;
};
struct Tnodeseq192807 {
  TGenericSeq Sup;
  Tnode192813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq192845 {
  TGenericSeq Sup;
  Ttype192849* data[SEQ_DECL_SIZE];
};
struct TY192944 {
  TGenericSeq Sup;
  Tinstantiation192833* data[SEQ_DECL_SIZE];
};
struct Tsymseq192815 {
  TGenericSeq Sup;
  Tsym192843* data[SEQ_DECL_SIZE];
};
struct TY192933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct Tiipairseq200272 {
  TGenericSeq Sup;
  Tiipair200270 data[SEQ_DECL_SIZE];
};
struct Tidpairseq192859 {
  TGenericSeq Sup;
  Tidpair192857 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, adddependencyaux_508028)(NimStringDesc* importing, NimStringDesc* imported);
N_NIMCALL(void, addf_163635)(Ropeobj162009** c, NimStringDesc* frmt, Ropeobj162009** args, NI argsLen0);
N_NIMCALL(Ropeobj162009*, rope_162320)(NimStringDesc* s);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(Tnode192813*, adddotdependency_508041)(Tpasscontext243005* c, Tnode192813* n);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(NI, sonslen_195403)(Tnode192813* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NimStringDesc*, getmodulename_253018)(Tnode192813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, generatedot_508009)(NimStringDesc* project);
N_NIMCALL(void, writerope_163105)(Ropeobj162009* head, NimStringDesc* filename, NIM_BOOL usewarning);
N_NIMCALL(Ropeobj162009*, HEX25_163235)(NimStringDesc* frmt, Ropeobj162009** args, NI argsLen0);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path);
N_NIMCALL(Tpasscontext243005*, myopen_508131)(Tsym192843* module);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP10603)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr);
static N_INLINE(void, rtladdzct_51804)(Tcell46747* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46763* s, Tcell46747* c);
STRING_LITERAL(TMP10593, "$1 -> $2;$n", 11);
static NIM_CONST TY193031 TMP10595 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP10596, "sons", 4);
STRING_LITERAL(TMP10600, "digraph $1 {$n$2}$n", 19);
STRING_LITERAL(TMP10601, "", 0);
STRING_LITERAL(TMP10602, "dot", 3);
NIM_CONST Tpass243017 gendependpass_508151 = {myopen_508131,
NIM_NIL,
adddotdependency_508041,
NIM_NIL}
;
Ropeobj162009* gdotgraph_508023;
extern TFrame* frameptr_17042;
extern TNimType NTI243005; /* TPassContext */
TNimType NTI508016; /* TGen */
extern TNimType NTI192811; /* PSym */
TNimType NTI508018; /* PGen */
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

N_NIMCALL(void, adddependencyaux_508028)(NimStringDesc* importing, NimStringDesc* imported) {
	TY201177 LOC1;
	nimfr("addDependencyAux", "depends.nim")
	nimln(25, "depends.nim");
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = rope_162320(importing);
	LOC1[1] = rope_162320(imported);
	addf_163635(&gdotgraph_508023, ((NimStringDesc*) &TMP10593), LOC1, 2);
	popFrame();
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = 0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI) 0) <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result;
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

N_NIMCALL(Tnode192813*, adddotdependency_508041)(Tpasscontext243005* c, Tnode192813* n) {
	Tnode192813* result;
	Tgen508016* g;
	nimfr("addDotDependency", "depends.nim")
	result = 0;
	nimln(29, "depends.nim");
	result = n;
	nimln(30, "depends.nim");
	if (c) chckObj((*c).Sup.m_type, (&NTI508016));
	g = ((Tgen508016*) (c));
	nimln(31, "depends.nim");
	switch ((*n).kind) {
	case ((NU8) 116):
	{
		{
			NI i_508059;
			NI HEX3Atmp_508081;
			NI LOC3;
			NI TMP10594;
			NI res_508084;
			i_508059 = 0;
			HEX3Atmp_508081 = 0;
			nimln(33, "depends.nim");
			LOC3 = 0;
			LOC3 = sonslen_195403(n);
			TMP10594 = subInt(LOC3, ((NI) 1));
			HEX3Atmp_508081 = (NI)(TMP10594);
			nimln(1598, "system.nim");
			res_508084 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					NimStringDesc* imported;
					NI TMP10597;
					if (!(res_508084 <= HEX3Atmp_508081)) goto LA5;
					nimln(1600, "system.nim");
					i_508059 = res_508084;
					nimln(34, "depends.nim");
					if (((TMP10595[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP10596));
					if ((NU)(i_508059) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
					imported = getmodulename_253018((*n).kindU.S6.sons->data[i_508059]);
					nimln(35, "depends.nim");
					adddependencyaux_508028((*(*(*g).module).name).s, imported);
					nimln(1614, "system.nim");
					TMP10597 = addInt(res_508084, ((NI) 1));
					res_508084 = (NI)(TMP10597);
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 120):
	case ((NU8) 117):
	{
		NimStringDesc* imported;
		nimln(37, "depends.nim");
		if (((TMP10595[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP10596));
		if ((NU)(((NI) 0)) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
		imported = getmodulename_253018((*n).kindU.S6.sons->data[((NI) 0)]);
		nimln(38, "depends.nim");
		adddependencyaux_508028((*(*(*g).module).name).s, imported);
	}
	break;
	case ((NU8) 115):
	case ((NU8) 112):
	case ((NU8) 126):
	case ((NU8) 127):
	{
		{
			NI i_508078;
			NI HEX3Atmp_508089;
			NI LOC9;
			NI TMP10598;
			NI res_508092;
			i_508078 = 0;
			HEX3Atmp_508089 = 0;
			nimln(40, "depends.nim");
			LOC9 = 0;
			LOC9 = sonslen_195403(n);
			TMP10598 = subInt(LOC9, ((NI) 1));
			HEX3Atmp_508089 = (NI)(TMP10598);
			nimln(1598, "system.nim");
			res_508092 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					Tnode192813* LOC12;
					NI TMP10599;
					if (!(res_508092 <= HEX3Atmp_508089)) goto LA11;
					nimln(1600, "system.nim");
					i_508078 = res_508092;
					nimln(40, "depends.nim");
					if (((TMP10595[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP10596));
					if ((NU)(i_508078) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
					LOC12 = 0;
					LOC12 = adddotdependency_508041(c, (*n).kindU.S6.sons->data[i_508078]);
					nimln(1614, "system.nim");
					TMP10599 = addInt(res_508092, ((NI) 1));
					res_508092 = (NI)(TMP10599);
				} LA11: ;
			}
		}
	}
	break;
	default:
	{
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(void, generatedot_508009)(NimStringDesc* project) {
	TY201177 LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	Ropeobj162009* LOC4;
	NimStringDesc* LOC5;
	nimfr("generateDot", "depends.nim")
	nimln(45, "depends.nim");
	memset((void*)LOC1, 0, sizeof(LOC1));
	nimln(46, "depends.nim");
	LOC2 = 0;
	LOC2 = nosextractFilename(project);
	LOC3 = 0;
	LOC3 = noschangeFileExt(LOC2, ((NimStringDesc*) &TMP10601));
	LOC1[0] = rope_162320(LOC3);
	LOC1[1] = gdotgraph_508023;
	LOC4 = 0;
	LOC4 = HEX25_163235(((NimStringDesc*) &TMP10600), LOC1, 2);
	nimln(47, "depends.nim");
	LOC5 = 0;
	LOC5 = noschangeFileExt(project, ((NimStringDesc*) &TMP10602));
	writerope_163105(LOC4, LOC5, NIM_FALSE);
	popFrame();
}
N_NIMCALL(void, TMP10603)(void* p, NI op) {
	Tgen508016* a;
	a = (Tgen508016*)p;
	nimGCvisit((void*)(*a).module, op);
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

N_NIMCALL(Tpasscontext243005*, myopen_508131)(Tsym192843* module) {
	Tpasscontext243005* result;
	Tgen508016* g;
	nimfr("myOpen", "depends.nim")
	result = 0;
	g = 0;
	nimln(51, "depends.nim");
	g = (Tgen508016*) newObj((&NTI508018), sizeof(Tgen508016));
	(*g).Sup.Sup.m_type = (&NTI508016);
	nimln(52, "depends.nim");
	asgnRefNoCycle((void**) (&(*g).module), module);
	nimln(53, "depends.nim");
	result = &g->Sup;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_dependsInit)(void) {
	nimfr("depends", "depends.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_dependsDatInit)(void) {
static TNimNode TMP10591[1];
NTI508016.size = sizeof(Tgen508016);
NTI508016.kind = 17;
NTI508016.base = (&NTI243005);
TMP10591[0].kind = 1;
TMP10591[0].offset = offsetof(Tgen508016, module);
TMP10591[0].typ = (&NTI192811);
TMP10591[0].name = "module";
NTI508016.node = &TMP10591[0];
NTI508018.size = sizeof(Tgen508016*);
NTI508018.kind = 22;
NTI508018.base = (&NTI508016);
NTI508018.marker = TMP10603;
}

