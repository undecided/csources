/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Ropeobj160009 Ropeobj160009;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode190813 Tnode190813;
typedef struct Tpasscontext241005 Tpasscontext241005;
typedef struct Tgen506016 Tgen506016;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct Tsym190843 Tsym190843;
typedef struct Ttype190849 Ttype190849;
typedef struct Tlineinfo162338 Tlineinfo162338;
typedef struct Tident166021 Tident166021;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tidobj166015 Tidobj166015;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Tloc190827 Tloc190827;
typedef struct Tlib190831 Tlib190831;
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
typedef struct Tpass241017 Tpass241017;
typedef struct Trodreader233030 Trodreader233030;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct TY190933 TY190933;
typedef struct Tindex233028 Tindex233028;
typedef struct Tiitable198274 Tiitable198274;
typedef struct Tiipairseq198272 Tiipairseq198272;
typedef struct Tidtable190861 Tidtable190861;
typedef struct Tidpairseq190859 Tidpairseq190859;
typedef struct Memfile231208 Memfile231208;
typedef struct Tiipair198270 Tiipair198270;
typedef struct Tidpair190857 Tidpair190857;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef Ropeobj160009* TY199177[2];
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
struct  Tgen506016  {
  Tpasscontext241005 Sup;
Tsym190843* module;
};
struct  Tlineinfo162338  {
NI16 line;
NI16 col;
NI32 fileindex;
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
typedef NU8 TY191031[20];
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
struct  Ropeobj160009  {
  TNimObject Sup;
Ropeobj160009* left;
Ropeobj160009* right;
NI length;
NimStringDesc* data;
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
struct  Tscope190837  {
NI depthlevel;
Tstrtable190817 symbols;
Tnodeseq190807* usingsyms;
Tscope190837* parent;
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
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
struct  Tiipair198270  {
NI key;
NI val;
};
struct  Tidpair190857  {
Tidobj166015* key;
TNimObject* val;
};
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
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
N_NIMCALL(void, adddependencyaux_506028)(NimStringDesc* importing, NimStringDesc* imported);
N_NIMCALL(void, addf_161635)(Ropeobj160009** c, NimStringDesc* frmt, Ropeobj160009** args, NI argsLen0);
N_NIMCALL(Ropeobj160009*, rope_160320)(NimStringDesc* s);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(Tnode190813*, adddotdependency_506041)(Tpasscontext241005* c, Tnode190813* n);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(NI, sonslen_193403)(Tnode190813* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NimStringDesc*, getmodulename_251018)(Tnode190813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, generatedot_506009)(NimStringDesc* project);
N_NIMCALL(void, writerope_161105)(Ropeobj160009* head, NimStringDesc* filename, NIM_BOOL usewarning);
N_NIMCALL(Ropeobj160009*, HEX25_161235)(NimStringDesc* frmt, Ropeobj160009** args, NI argsLen0);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path);
N_NIMCALL(Tpasscontext241005*, myopen_506131)(Tsym190843* module);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP10590)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46746*, usrtocell_50246)(void* usr);
static N_INLINE(void, rtladdzct_51804)(Tcell46746* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46762* s, Tcell46746* c);
STRING_LITERAL(TMP10580, "$1 -> $2;$n", 11);
static NIM_CONST TY191031 TMP10582 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP10583, "sons", 4);
STRING_LITERAL(TMP10587, "digraph $1 {$n$2}$n", 19);
STRING_LITERAL(TMP10588, "", 0);
STRING_LITERAL(TMP10589, "dot", 3);
NIM_CONST Tpass241017 gendependpass_506151 = {myopen_506131,
NIM_NIL,
adddotdependency_506041,
NIM_NIL}
;
Ropeobj160009* gdotgraph_506023;
extern TFrame* frameptr_17042;
extern TNimType NTI241005; /* TPassContext */
TNimType NTI506016; /* TGen */
extern TNimType NTI190811; /* PSym */
TNimType NTI506018; /* PGen */
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

N_NIMCALL(void, adddependencyaux_506028)(NimStringDesc* importing, NimStringDesc* imported) {
	TY199177 LOC1;
	nimfr("addDependencyAux", "depends.nim")
	nimln(25, "depends.nim");
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = rope_160320(importing);
	LOC1[1] = rope_160320(imported);
	addf_161635(&gdotgraph_506023, ((NimStringDesc*) &TMP10580), LOC1, 2);
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

N_NIMCALL(Tnode190813*, adddotdependency_506041)(Tpasscontext241005* c, Tnode190813* n) {
	Tnode190813* result;
	Tgen506016* g;
	nimfr("addDotDependency", "depends.nim")
	result = 0;
	nimln(29, "depends.nim");
	result = n;
	nimln(30, "depends.nim");
	if (c) chckObj((*c).Sup.m_type, (&NTI506016));
	g = ((Tgen506016*) (c));
	nimln(31, "depends.nim");
	switch ((*n).kind) {
	case ((NU8) 116):
	{
		{
			NI i_506059;
			NI HEX3Atmp_506081;
			NI LOC3;
			NI TMP10581;
			NI res_506084;
			i_506059 = 0;
			HEX3Atmp_506081 = 0;
			nimln(33, "depends.nim");
			LOC3 = 0;
			LOC3 = sonslen_193403(n);
			TMP10581 = subInt(LOC3, ((NI) 1));
			HEX3Atmp_506081 = (NI)(TMP10581);
			nimln(1598, "system.nim");
			res_506084 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					NimStringDesc* imported;
					NI TMP10584;
					if (!(res_506084 <= HEX3Atmp_506081)) goto LA5;
					nimln(1600, "system.nim");
					i_506059 = res_506084;
					nimln(34, "depends.nim");
					if (((TMP10582[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP10583));
					if ((NU)(i_506059) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
					imported = getmodulename_251018((*n).kindU.S6.sons->data[i_506059]);
					nimln(35, "depends.nim");
					adddependencyaux_506028((*(*(*g).module).name).s, imported);
					nimln(1614, "system.nim");
					TMP10584 = addInt(res_506084, ((NI) 1));
					res_506084 = (NI)(TMP10584);
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
		if (((TMP10582[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP10583));
		if ((NU)(((NI) 0)) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
		imported = getmodulename_251018((*n).kindU.S6.sons->data[((NI) 0)]);
		nimln(38, "depends.nim");
		adddependencyaux_506028((*(*(*g).module).name).s, imported);
	}
	break;
	case ((NU8) 115):
	case ((NU8) 112):
	case ((NU8) 126):
	case ((NU8) 127):
	{
		{
			NI i_506078;
			NI HEX3Atmp_506089;
			NI LOC9;
			NI TMP10585;
			NI res_506092;
			i_506078 = 0;
			HEX3Atmp_506089 = 0;
			nimln(40, "depends.nim");
			LOC9 = 0;
			LOC9 = sonslen_193403(n);
			TMP10585 = subInt(LOC9, ((NI) 1));
			HEX3Atmp_506089 = (NI)(TMP10585);
			nimln(1598, "system.nim");
			res_506092 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					Tnode190813* LOC12;
					NI TMP10586;
					if (!(res_506092 <= HEX3Atmp_506089)) goto LA11;
					nimln(1600, "system.nim");
					i_506078 = res_506092;
					nimln(40, "depends.nim");
					if (((TMP10582[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP10583));
					if ((NU)(i_506078) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
					LOC12 = 0;
					LOC12 = adddotdependency_506041(c, (*n).kindU.S6.sons->data[i_506078]);
					nimln(1614, "system.nim");
					TMP10586 = addInt(res_506092, ((NI) 1));
					res_506092 = (NI)(TMP10586);
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

N_NIMCALL(void, generatedot_506009)(NimStringDesc* project) {
	TY199177 LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	Ropeobj160009* LOC4;
	NimStringDesc* LOC5;
	nimfr("generateDot", "depends.nim")
	nimln(45, "depends.nim");
	memset((void*)LOC1, 0, sizeof(LOC1));
	nimln(46, "depends.nim");
	LOC2 = 0;
	LOC2 = nosextractFilename(project);
	LOC3 = 0;
	LOC3 = noschangeFileExt(LOC2, ((NimStringDesc*) &TMP10588));
	LOC1[0] = rope_160320(LOC3);
	LOC1[1] = gdotgraph_506023;
	LOC4 = 0;
	LOC4 = HEX25_161235(((NimStringDesc*) &TMP10587), LOC1, 2);
	nimln(47, "depends.nim");
	LOC5 = 0;
	LOC5 = noschangeFileExt(project, ((NimStringDesc*) &TMP10589));
	writerope_161105(LOC4, LOC5, NIM_FALSE);
	popFrame();
}
N_NIMCALL(void, TMP10590)(void* p, NI op) {
	Tgen506016* a;
	a = (Tgen506016*)p;
	nimGCvisit((void*)(*a).module, op);
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

N_NIMCALL(Tpasscontext241005*, myopen_506131)(Tsym190843* module) {
	Tpasscontext241005* result;
	Tgen506016* g;
	nimfr("myOpen", "depends.nim")
	result = 0;
	g = 0;
	nimln(51, "depends.nim");
	g = (Tgen506016*) newObj((&NTI506018), sizeof(Tgen506016));
	(*g).Sup.Sup.m_type = (&NTI506016);
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
static TNimNode TMP10578[1];
NTI506016.size = sizeof(Tgen506016);
NTI506016.kind = 17;
NTI506016.base = (&NTI241005);
TMP10578[0].kind = 1;
TMP10578[0].offset = offsetof(Tgen506016, module);
TMP10578[0].typ = (&NTI190811);
TMP10578[0].name = "module";
NTI506016.node = &TMP10578[0];
NTI506018.size = sizeof(Tgen506016*);
NTI506018.kind = 22;
NTI506018.base = (&NTI506016);
NTI506018.marker = TMP10590;
}

