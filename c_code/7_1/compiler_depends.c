/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Ropeobj159009 Ropeobj159009;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode189813 Tnode189813;
typedef struct Tpasscontext240005 Tpasscontext240005;
typedef struct Tgen505016 Tgen505016;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct Tsym189843 Tsym189843;
typedef struct Ttype189849 Ttype189849;
typedef struct Tlineinfo161338 Tlineinfo161338;
typedef struct Tident165021 Tident165021;
typedef struct Tnodeseq189807 Tnodeseq189807;
typedef struct Tidobj165015 Tidobj165015;
typedef struct Ttypeseq189845 Ttypeseq189845;
typedef struct Tscope189837 Tscope189837;
typedef struct TY189944 TY189944;
typedef struct Tstrtable189817 Tstrtable189817;
typedef struct Tsymseq189815 Tsymseq189815;
typedef struct Tloc189827 Tloc189827;
typedef struct Tlib189831 Tlib189831;
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
typedef struct Tpass240017 Tpass240017;
typedef struct Trodreader232030 Trodreader232030;
typedef struct Tinstantiation189833 Tinstantiation189833;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct TY189933 TY189933;
typedef struct Tindex232028 Tindex232028;
typedef struct Tiitable197274 Tiitable197274;
typedef struct Tiipairseq197272 Tiipairseq197272;
typedef struct Tidtable189861 Tidtable189861;
typedef struct Tidpairseq189859 Tidpairseq189859;
typedef struct Memfile230208 Memfile230208;
typedef struct Tiipair197270 Tiipair197270;
typedef struct Tidpair189857 Tidpair189857;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef Ropeobj159009* TY198177[2];
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
struct  Tpasscontext240005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tgen505016  {
  Tpasscontext240005 Sup;
Tsym189843* module;
};
struct  Tlineinfo161338  {
NI16 line;
NI16 col;
NI32 fileindex;
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
typedef NU8 TY190031[20];
struct  Tidobj165015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable189817  {
NI counter;
Tsymseq189815* data;
};
struct  Tloc189827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype189849* t;
Ropeobj159009* r;
Ropeobj159009* heaproot;
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
struct  Tident165021  {
  Tidobj165015 Sup;
NimStringDesc* s;
Tident165021* next;
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
typedef N_NIMCALL_PTR(Tpasscontext240005*, Tpassopen240009) (Tsym189843* module);
typedef N_NIMCALL_PTR(Tpasscontext240005*, Tpassopencached240011) (Tsym189843* module, Trodreader232030* rd);
typedef N_NIMCALL_PTR(Tnode189813*, Tpassprocess240015) (Tpasscontext240005* p, Tnode189813* toplevelstmt);
typedef N_NIMCALL_PTR(Tnode189813*, Tpassclose240013) (Tpasscontext240005* p, Tnode189813* n);
struct Tpass240017 {
Tpassopen240009 Field0;
Tpassopencached240011 Field1;
Tpassprocess240015 Field2;
Tpassclose240013 Field3;
};
struct  Ropeobj159009  {
  TNimObject Sup;
Ropeobj159009* left;
Ropeobj159009* right;
NI length;
NimStringDesc* data;
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
struct  Tscope189837  {
NI depthlevel;
Tstrtable189817 symbols;
Tnodeseq189807* usingsyms;
Tscope189837* parent;
};
struct  Tlistentry129022  {
  TNimObject Sup;
Tlistentry129022* prev;
Tlistentry129022* next;
};
struct  Tlib189831  {
  Tlistentry129022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj159009* name;
Tnode189813* path;
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
struct  Tiitable197274  {
NI counter;
Tiipairseq197272* data;
};
struct  Tindex232028  {
NI lastidxkey;
NI lastidxval;
Tiitable197274 tab;
NimStringDesc* r;
NI offset;
};
struct  Tidtable189861  {
NI counter;
Tidpairseq189859* data;
};
struct  Memfile230208  {
void* mem;
NI size;
int handle;
};
struct  Trodreader232030  {
  TNimObject Sup;
NI pos;
NCSTRING s;
NU32 options;
NU8 reason;
TY189933* moddeps;
TY189933* files;
NI dataidx;
NI convertersidx;
NI initidx;
NI interfidx;
NI compilerprocsidx;
NI methodsidx;
NimStringDesc* filename;
Tindex232028 index;
Tindex232028 imports;
NI readerindex;
NI line;
NI moduleid;
Tidtable189861 syms;
Memfile230208 memfile;
Tsymseq189815* methods;
NimStringDesc* origfile;
NIM_BOOL inviewmode;
};
struct  Tinstantiation189833  {
Tsym189843* sym;
Ttypeseq189845* concretetypes;
TY189933* usedby;
};
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
struct  Tiipair197270  {
NI key;
NI val;
};
struct  Tidpair189857  {
Tidobj165015* key;
TNimObject* val;
};
struct Tnodeseq189807 {
  TGenericSeq Sup;
  Tnode189813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq189845 {
  TGenericSeq Sup;
  Ttype189849* data[SEQ_DECL_SIZE];
};
struct TY189944 {
  TGenericSeq Sup;
  Tinstantiation189833* data[SEQ_DECL_SIZE];
};
struct Tsymseq189815 {
  TGenericSeq Sup;
  Tsym189843* data[SEQ_DECL_SIZE];
};
struct TY189933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct Tiipairseq197272 {
  TGenericSeq Sup;
  Tiipair197270 data[SEQ_DECL_SIZE];
};
struct Tidpairseq189859 {
  TGenericSeq Sup;
  Tidpair189857 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, adddependencyaux_505028)(NimStringDesc* importing, NimStringDesc* imported);
N_NIMCALL(void, addf_160635)(Ropeobj159009** c, NimStringDesc* frmt, Ropeobj159009** args, NI argsLen0);
N_NIMCALL(Ropeobj159009*, rope_159320)(NimStringDesc* s);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(Tnode189813*, adddotdependency_505041)(Tpasscontext240005* c, Tnode189813* n);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(NI, sonslen_192403)(Tnode189813* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NimStringDesc*, getmodulename_250018)(Tnode189813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, generatedot_505009)(NimStringDesc* project);
N_NIMCALL(void, writerope_160105)(Ropeobj159009* head, NimStringDesc* filename, NIM_BOOL usewarning);
N_NIMCALL(Ropeobj159009*, HEX25_160235)(NimStringDesc* frmt, Ropeobj159009** args, NI argsLen0);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path);
N_NIMCALL(Tpasscontext240005*, myopen_505131)(Tsym189843* module);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP10599)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr);
static N_INLINE(void, rtladdzct_51804)(Tcell46747* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46763* s, Tcell46747* c);
STRING_LITERAL(TMP10589, "$1 -> $2;$n", 11);
static NIM_CONST TY190031 TMP10591 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP10592, "sons", 4);
STRING_LITERAL(TMP10596, "digraph $1 {$n$2}$n", 19);
STRING_LITERAL(TMP10597, "", 0);
STRING_LITERAL(TMP10598, "dot", 3);
NIM_CONST Tpass240017 gendependpass_505151 = {myopen_505131,
NIM_NIL,
adddotdependency_505041,
NIM_NIL}
;
Ropeobj159009* gdotgraph_505023;
extern TFrame* frameptr_17042;
extern TNimType NTI240005; /* TPassContext */
TNimType NTI505016; /* TGen */
extern TNimType NTI189811; /* PSym */
TNimType NTI505018; /* PGen */
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

N_NIMCALL(void, adddependencyaux_505028)(NimStringDesc* importing, NimStringDesc* imported) {
	TY198177 LOC1;
	nimfr("addDependencyAux", "depends.nim")
	nimln(25, "depends.nim");
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = rope_159320(importing);
	LOC1[1] = rope_159320(imported);
	addf_160635(&gdotgraph_505023, ((NimStringDesc*) &TMP10589), LOC1, 2);
	popFrame();
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

N_NIMCALL(Tnode189813*, adddotdependency_505041)(Tpasscontext240005* c, Tnode189813* n) {
	Tnode189813* result;
	Tgen505016* g;
	nimfr("addDotDependency", "depends.nim")
	result = 0;
	nimln(29, "depends.nim");
	result = n;
	nimln(30, "depends.nim");
	if (c) chckObj((*c).Sup.m_type, (&NTI505016));
	g = ((Tgen505016*) (c));
	nimln(31, "depends.nim");
	switch ((*n).kind) {
	case ((NU8) 116):
	{
		{
			NI i_505059;
			NI HEX3Atmp_505081;
			NI LOC3;
			NI TMP10590;
			NI res_505084;
			i_505059 = 0;
			HEX3Atmp_505081 = 0;
			nimln(33, "depends.nim");
			LOC3 = 0;
			LOC3 = sonslen_192403(n);
			TMP10590 = subInt(LOC3, ((NI) 1));
			HEX3Atmp_505081 = (NI)(TMP10590);
			nimln(1598, "system.nim");
			res_505084 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					NimStringDesc* imported;
					NI TMP10593;
					if (!(res_505084 <= HEX3Atmp_505081)) goto LA5;
					nimln(1600, "system.nim");
					i_505059 = res_505084;
					nimln(34, "depends.nim");
					if (((TMP10591[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP10592));
					if ((NU)(i_505059) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
					imported = getmodulename_250018((*n).kindU.S6.sons->data[i_505059]);
					nimln(35, "depends.nim");
					adddependencyaux_505028((*(*(*g).module).name).s, imported);
					nimln(1614, "system.nim");
					TMP10593 = addInt(res_505084, ((NI) 1));
					res_505084 = (NI)(TMP10593);
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
		if (((TMP10591[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP10592));
		if ((NU)(((NI) 0)) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
		imported = getmodulename_250018((*n).kindU.S6.sons->data[((NI) 0)]);
		nimln(38, "depends.nim");
		adddependencyaux_505028((*(*(*g).module).name).s, imported);
	}
	break;
	case ((NU8) 115):
	case ((NU8) 112):
	case ((NU8) 126):
	case ((NU8) 127):
	{
		{
			NI i_505078;
			NI HEX3Atmp_505089;
			NI LOC9;
			NI TMP10594;
			NI res_505092;
			i_505078 = 0;
			HEX3Atmp_505089 = 0;
			nimln(40, "depends.nim");
			LOC9 = 0;
			LOC9 = sonslen_192403(n);
			TMP10594 = subInt(LOC9, ((NI) 1));
			HEX3Atmp_505089 = (NI)(TMP10594);
			nimln(1598, "system.nim");
			res_505092 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					Tnode189813* LOC12;
					NI TMP10595;
					if (!(res_505092 <= HEX3Atmp_505089)) goto LA11;
					nimln(1600, "system.nim");
					i_505078 = res_505092;
					nimln(40, "depends.nim");
					if (((TMP10591[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP10592));
					if ((NU)(i_505078) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
					LOC12 = 0;
					LOC12 = adddotdependency_505041(c, (*n).kindU.S6.sons->data[i_505078]);
					nimln(1614, "system.nim");
					TMP10595 = addInt(res_505092, ((NI) 1));
					res_505092 = (NI)(TMP10595);
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

N_NIMCALL(void, generatedot_505009)(NimStringDesc* project) {
	TY198177 LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	Ropeobj159009* LOC4;
	NimStringDesc* LOC5;
	nimfr("generateDot", "depends.nim")
	nimln(45, "depends.nim");
	memset((void*)LOC1, 0, sizeof(LOC1));
	nimln(46, "depends.nim");
	LOC2 = 0;
	LOC2 = nosextractFilename(project);
	LOC3 = 0;
	LOC3 = noschangeFileExt(LOC2, ((NimStringDesc*) &TMP10597));
	LOC1[0] = rope_159320(LOC3);
	LOC1[1] = gdotgraph_505023;
	LOC4 = 0;
	LOC4 = HEX25_160235(((NimStringDesc*) &TMP10596), LOC1, 2);
	nimln(47, "depends.nim");
	LOC5 = 0;
	LOC5 = noschangeFileExt(project, ((NimStringDesc*) &TMP10598));
	writerope_160105(LOC4, LOC5, NIM_FALSE);
	popFrame();
}
N_NIMCALL(void, TMP10599)(void* p, NI op) {
	Tgen505016* a;
	a = (Tgen505016*)p;
	nimGCvisit((void*)(*a).module, op);
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

N_NIMCALL(Tpasscontext240005*, myopen_505131)(Tsym189843* module) {
	Tpasscontext240005* result;
	Tgen505016* g;
	nimfr("myOpen", "depends.nim")
	result = 0;
	g = 0;
	nimln(51, "depends.nim");
	g = (Tgen505016*) newObj((&NTI505018), sizeof(Tgen505016));
	(*g).Sup.Sup.m_type = (&NTI505016);
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
static TNimNode TMP10587[1];
NTI505016.size = sizeof(Tgen505016);
NTI505016.kind = 17;
NTI505016.base = (&NTI240005);
TMP10587[0].kind = 1;
TMP10587[0].offset = offsetof(Tgen505016, module);
TMP10587[0].typ = (&NTI189811);
TMP10587[0].name = "module";
NTI505016.node = &TMP10587[0];
NTI505018.size = sizeof(Tgen505016*);
NTI505018.kind = 22;
NTI505018.base = (&NTI505016);
NTI505018.marker = TMP10599;
}

