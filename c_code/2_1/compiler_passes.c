/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct Tpass242017 Tpass242017;
typedef struct Tpasscontext242005 Tpasscontext242005;
typedef struct Tsym191843 Tsym191843;
typedef struct Trodreader234030 Trodreader234030;
typedef struct Tnode191813 Tnode191813;
typedef struct Tidobj167015 Tidobj167015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Ttype191849 Ttype191849;
typedef struct Tident167021 Tident167021;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tlib191831 Tlib191831;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Tpassdata242019 Tpassdata242019;
typedef struct TY13606 TY13606;
typedef struct Tllstream178204 Tllstream178204;
typedef struct Tparsers219035 Tparsers219035;
typedef struct Tparser207205 Tparser207205;
typedef struct Tlexer181185 Tlexer181185;
typedef struct Tbaselexer179024 Tbaselexer179024;
typedef struct Ttoken181181 Ttoken181181;
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
typedef struct TY191933 TY191933;
typedef struct Tindex234028 Tindex234028;
typedef struct Tiitable199274 Tiitable199274;
typedef struct Tiipairseq199272 Tiipairseq199272;
typedef struct Tidtable191861 Tidtable191861;
typedef struct Tidpairseq191859 Tidpairseq191859;
typedef struct Memfile232208 Memfile232208;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct Tiipair199270 Tiipair199270;
typedef struct Tidpair191857 Tidpair191857;
typedef N_NIMCALL_PTR(Tpasscontext242005*, Tpassopen242009) (Tsym191843* module);
typedef N_NIMCALL_PTR(Tpasscontext242005*, Tpassopencached242011) (Tsym191843* module, Trodreader234030* rd);
typedef N_NIMCALL_PTR(Tnode191813*, Tpassprocess242015) (Tpasscontext242005* p, Tnode191813* toplevelstmt);
typedef N_NIMCALL_PTR(Tnode191813*, Tpassclose242013) (Tpasscontext242005* p, Tnode191813* n);
struct Tpass242017 {
Tpassopen242009 Field0;
Tpassopencached242011 Field1;
Tpassprocess242015 Field2;
Tpassclose242013 Field3;
};
typedef N_NIMCALL_PTR(Tsym191843*, TY242064) (Tsym191843* m, NI32 fileidx);
typedef N_NIMCALL_PTR(Tnode191813*, TY242069) (Tsym191843* m, NI32 fileidx);
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
struct  Tstrtable191817  {
NI counter;
Tsymseq191815* data;
};
struct  Tlineinfo163338  {
NI16 line;
NI16 col;
NI32 fileindex;
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
typedef NU8 TY192031[20];
typedef Tpass242017 TY242173[10];
struct Tpassdata242019 {
Tnode191813* Field0;
Tnode191813* Field1;
};
struct  Tpasscontext242005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tbaselexer179024  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Tllstream178204* stream;
NI linenumber;
NI sentinel;
NI linestart;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Tlineinfo163338 info, NU16 msg, NimStringDesc* arg, void* ClEnv);
void* ClEnv;
} Terrorhandler181183;
struct  Tlexer181185  {
  Tbaselexer179024 Sup;
NI32 fileidx;
NI indentahead;
NI currlineindent;
NIM_BOOL strongspaces;
Terrorhandler181183 errorhandler;
};
struct  Ttoken181181  {
NU8 toktype;
NI indent;
Tident167021* ident;
NI64 inumber;
NF fnumber;
NU8 base;
NI8 strongspacea;
NI8 strongspaceb;
NimStringDesc* literal;
NI line;
NI col;
};
struct  Tparser207205  {
NI currind;
NIM_BOOL firsttok;
NIM_BOOL strongspaces;
Tlexer181185 lex;
Ttoken181181 tok;
NI inpragma;
NI insemistmtlist;
};
struct  Tparsers219035  {
NU8 skin;
Tparser207205 parser;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef Tpasscontext242005* Tpasscontextarray242168[10];
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
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
struct  Tllstream178204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
struct  Tiitable199274  {
NI counter;
Tiipairseq199272* data;
};
struct  Tindex234028  {
NI lastidxkey;
NI lastidxval;
Tiitable199274 tab;
NimStringDesc* r;
NI offset;
};
struct  Tidtable191861  {
NI counter;
Tidpairseq191859* data;
};
struct  Memfile232208  {
void* mem;
NI size;
int handle;
};
struct  Trodreader234030  {
  TNimObject Sup;
NI pos;
NCSTRING s;
NU32 options;
NU8 reason;
TY191933* moddeps;
TY191933* files;
NI dataidx;
NI convertersidx;
NI initidx;
NI interfidx;
NI compilerprocsidx;
NI methodsidx;
NimStringDesc* filename;
Tindex234028 index;
Tindex234028 imports;
NI readerindex;
NI line;
NI moduleid;
Tidtable191861 syms;
Memfile232208 memfile;
Tsymseq191815* methods;
NimStringDesc* origfile;
NIM_BOOL inviewmode;
};
struct  Tscope191837  {
NI depthlevel;
Tstrtable191817 symbols;
Tnodeseq191807* usingsyms;
Tscope191837* parent;
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
struct  Tiipair199270  {
NI key;
NI val;
};
struct  Tidpair191857  {
Tidobj167015* key;
TNimObject* val;
};
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
};
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
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
struct Tiipairseq199272 {
  TGenericSeq Sup;
  Tiipair199270 data[SEQ_DECL_SIZE];
};
struct Tidpairseq191859 {
  TGenericSeq Sup;
  Tidpair191857 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tpass242017, makepass_242043)(Tpassopen242009 open, Tpassopencached242011 opencached, Tpassprocess242015 process, Tpassclose242013 close);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL, skipcodegen_242083)(Tnode191813* n);
N_NIMCALL(NIM_BOOL, astneeded_242093)(Tsym191843* s);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, clearpasses_242182)(void);
N_NIMCALL(void, registerpass_242190)(Tpass242017 p);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, carrypass_242208)(Tpass242017 p, Tsym191843* module, Tpassdata242019 m, Tpassdata242019* Result);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(void, carrypasses_242231)(Tnode191813* nodes, Tsym191843* module, Tpass242017* passes, NI passesLen0);
N_NIMCALL(void, openpasses_242293)(Tpasscontext242005** a, Tsym191843* module);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(void, openpassescached_242342)(Tpasscontext242005** a, Tsym191843* module, Trodreader234030* rd);
N_NIMCALL(void, closepasses_242404)(Tpasscontext242005** a);
N_NIMCALL(NIM_BOOL, processtoplevelstmt_242454)(Tnode191813* n, Tpasscontext242005** a);
N_NIMCALL(void, processtoplevelstmtcached_242513)(Tnode191813* n, Tpasscontext242005** a);
N_NIMCALL(void, closepassescached_242563)(Tpasscontext242005** a);
N_NIMCALL(void, processimplicits_242621)(TY13606* implicits, NU8 nodekind, Tpasscontext242005** a);
N_NIMCALL(Tnode191813*, newnodei_193351)(NU8 kind, Tlineinfo163338 info);
N_NIMCALL(Tnode191813*, newstrnode_192644)(NU8 kind, NimStringDesc* strval);
N_NIMCALL(void, addson_193819)(Tnode191813* father, Tnode191813* son);
N_NIMCALL(void, failedassertimpl_87017)(NimStringDesc* msg);
N_NIMCALL(void, processmodule_242056)(Tsym191843* module, Tllstream178204* stream, Trodreader234030* rd);
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(NimStringDesc*, tofullpathconsiderdirty_164407)(NI32 fileidx);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr);
static N_INLINE(void, rtladdzct_51804)(Tcell46747* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46763* s, Tcell46747* c);
N_NIMCALL(Tllstream178204*, llstreamopen_178238)(FILE* f);
N_NIMCALL(Tllstream178204*, llstreamopen_178256)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, rawmessage_164960)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, openparsers_219047)(Tparsers219035* p, NI32 fileidx, Tllstream178204* inputstream);
N_NIMCALL(Tnode191813*, parsetoplevelstmt_219070)(Tparsers219035* p);
N_NIMCALL(void, closeparsers_219056)(Tparsers219035* p);
N_NIMCALL(void, idsynchronizationpoint_190453)(NI idrange);
N_NIMCALL(Tnode191813*, loadinitsection_234077)(Trodreader234030* r);
N_NIMCALL(NI, sonslen_194403)(Tnode191813* n);
static NIM_CONST TY192031 TMP4117 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4118, "sons", 4);
STRING_LITERAL(TMP4134, "len(a) == L seq modified while iterating over it", 48);
STRING_LITERAL(TMP4135, "-", 1);
STRING_LITERAL(TMP4136, "stdinfile", 9);
extern TFrame* frameptr_17042;
TY242064 gimportmodule_242068;
TY242069 gincludefile_242073;
extern NI gerrorcounter_164015;
TY242173 gpasses_242175;
NI gpasseslen_242176;
extern Tlineinfo163338 gcmdlineinfo_163922;
extern TNimType NTI219035; /* TParsers */
extern Tgcheap48616 gch_48644;
extern TY13606* implicitimports_154276;
extern TY13606* implicitincludes_154294;
extern TNimType NTI3411; /* RootObj */
TNimType NTI242005; /* TPassContext */
extern TNimType NTI138; /* bool */
TNimType NTI242019; /* TPassData */
extern TNimType NTI191805; /* PNode */

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

N_NIMCALL(Tpass242017, makepass_242043)(Tpassopen242009 open, Tpassopencached242011 opencached, Tpassprocess242015 process, Tpassclose242013 close) {
	Tpass242017 result;
	nimfr("makePass", "passes.nim")
	memset((void*)(&result), 0, sizeof(result));
	nimln(44, "passes.nim");
	result.Field0 = open;
	nimln(45, "passes.nim");
	result.Field1 = opencached;
	nimln(46, "passes.nim");
	result.Field3 = close;
	nimln(47, "passes.nim");
	result.Field2 = process;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, skipcodegen_242083)(Tnode191813* n) {
	NIM_BOOL result;
	nimfr("skipCodegen", "passes.nim")
	result = 0;
	nimln(66, "passes.nim");
	result = (((NI) 0) < gerrorcounter_164015);
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, astneeded_242093)(Tsym191843* s) {
	NIM_BOOL result;
	nimfr("astNeeded", "passes.nim")
	result = 0;
	nimln(73, "passes.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NIM_BOOL LOC5;
		nimln(75, "passes.nim");
		LOC3 = 0;
		nimln(74, "passes.nim");
		LOC4 = 0;
		nimln(73, "passes.nim");
		LOC5 = 0;
		LOC5 = ((12288 &(1<<(((*s).kind)&31)))!=0);
		if (!(LOC5)) goto LA6;
		nimln(74, "passes.nim");
		LOC5 = ((8454144 & (*s).flags) == 0);
		LA6: ;
		LOC4 = LOC5;
		if (!(LOC4)) goto LA7;
		nimln(75, "passes.nim");
		LOC4 = !(((*(*s).typ).callconv == ((NU8) 5)));
		LA7: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA8;
		nimln(76, "passes.nim");
		if (((TMP4117[(*(*s).ast).kind/8] &(1<<((*(*s).ast).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4118));
		if ((NU)(((NI) 2)) >= (NU)((*(*s).ast).kindU.S6.sons->Sup.len)) raiseIndexError();
		LOC3 = ((*(*(*s).ast).kindU.S6.sons->data[((NI) 2)]).kind == ((NU8) 1));
		LA8: ;
		if (!LOC3) goto LA9;
		nimln(77, "passes.nim");
		result = NIM_FALSE;
	}
	goto LA1;
	LA9: ;
	{
		nimln(80, "passes.nim");
		result = NIM_TRUE;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, clearpasses_242182)(void) {
	nimfr("clearPasses", "passes.nim")
	nimln(93, "passes.nim");
	gpasseslen_242176 = ((NI) 0);
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

N_NIMCALL(void, registerpass_242190)(Tpass242017 p) {
	NI TMP4119;
	nimfr("registerPass", "passes.nim")
	nimln(96, "passes.nim");
	if ((NU)(gpasseslen_242176) > (NU)(9)) raiseIndexError();
	gpasses_242175[(gpasseslen_242176)- 0] = p;
	nimln(97, "passes.nim");
	TMP4119 = addInt(gpasseslen_242176, ((NI) 1));
	gpasseslen_242176 = (NI)(TMP4119);
	popFrame();
}

N_NIMCALL(void, carrypass_242208)(Tpass242017 p, Tsym191843* module, Tpassdata242019 m, Tpassdata242019* Result) {
	Tpasscontext242005* c;
	nimfr("carryPass", "passes.nim")
	nimln(100, "passes.nim");
	c = p.Field0(module);
	nimln(101, "passes.nim");
	unsureAsgnRef((void**) (&(*Result).Field0), p.Field2(c, m.Field0));
	nimln(102, "passes.nim");
	{
		if (!!((p.Field3 == NIM_NIL))) goto LA3;
		unsureAsgnRef((void**) (&(*Result).Field1), p.Field3(c, m.Field1));
	}
	goto LA1;
	LA3: ;
	{
		unsureAsgnRef((void**) (&(*Result).Field1), m.Field1);
	}
	LA1: ;
	popFrame();
}

N_NIMCALL(void, carrypasses_242231)(Tnode191813* nodes, Tsym191843* module, Tpass242017* passes, NI passesLen0) {
	Tpassdata242019 passdata;
	nimfr("carryPasses", "passes.nim")
	memset((void*)(&passdata), 0, sizeof(passdata));
	nimln(107, "passes.nim");
	passdata.Field0 = nodes;
	{
		Tpass242017 pass_242272;
		NI i_242277;
		memset((void*)(&pass_242272), 0, sizeof(pass_242272));
		nimln(1689, "system.nim");
		i_242277 = ((NI) 0);
		{
			nimln(1690, "system.nim");
			while (1) {
				Tpassdata242019 LOC4;
				NI TMP4120;
				if (!(i_242277 < passesLen0)) goto LA3;
				nimln(1691, "system.nim");
				if ((NU)(i_242277) >= (NU)(passesLen0)) raiseIndexError();
				pass_242272 = passes[i_242277];
				nimln(109, "passes.nim");
				memset((void*)(&LOC4), 0, sizeof(LOC4));
				carrypass_242208(pass_242272, module, passdata, (&LOC4));
				passdata.Field0 = LOC4.Field0;
				passdata.Field1 = LOC4.Field1;
				nimln(1692, "system.nim");
				TMP4120 = addInt(i_242277, ((NI) 1));
				i_242277 = (NI)(TMP4120);
			} LA3: ;
		}
	}
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

N_NIMCALL(void, openpasses_242293)(Tpasscontext242005** a, Tsym191843* module) {
	nimfr("openPasses", "passes.nim")
	{
		NI i_242310;
		NI HEX3Atmp_242319;
		NI TMP4121;
		NI res_242322;
		i_242310 = 0;
		HEX3Atmp_242319 = 0;
		nimln(112, "passes.nim");
		TMP4121 = subInt(gpasseslen_242176, ((NI) 1));
		HEX3Atmp_242319 = (NI)(TMP4121);
		nimln(1598, "system.nim");
		res_242322 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4122;
				if (!(res_242322 <= HEX3Atmp_242319)) goto LA3;
				nimln(1600, "system.nim");
				i_242310 = res_242322;
				nimln(113, "passes.nim");
				{
					if ((NU)(i_242310) > (NU)(9)) raiseIndexError();
					if (!!(gpasses_242175[(i_242310)- 0].Field0 == 0)) goto LA6;
					nimln(114, "passes.nim");
					if ((NU)(i_242310) > (NU)(9)) raiseIndexError();
					if ((NU)(i_242310) > (NU)(9)) raiseIndexError();
					unsureAsgnRef((void**) (&a[(i_242310)- 0]), gpasses_242175[(i_242310)- 0].Field0(module));
				}
				goto LA4;
				LA6: ;
				{
					nimln(115, "passes.nim");
					if ((NU)(i_242310) > (NU)(9)) raiseIndexError();
					unsureAsgnRef((void**) (&a[(i_242310)- 0]), NIM_NIL);
				}
				LA4: ;
				nimln(1614, "system.nim");
				TMP4122 = addInt(res_242322, ((NI) 1));
				res_242322 = (NI)(TMP4122);
			} LA3: ;
		}
	}
	popFrame();
}

N_NIMCALL(void, openpassescached_242342)(Tpasscontext242005** a, Tsym191843* module, Trodreader234030* rd) {
	nimfr("openPassesCached", "passes.nim")
	{
		NI i_242360;
		NI HEX3Atmp_242381;
		NI TMP4123;
		NI res_242384;
		i_242360 = 0;
		HEX3Atmp_242381 = 0;
		nimln(118, "passes.nim");
		TMP4123 = subInt(gpasseslen_242176, ((NI) 1));
		HEX3Atmp_242381 = (NI)(TMP4123);
		nimln(1598, "system.nim");
		res_242384 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4124;
				if (!(res_242384 <= HEX3Atmp_242381)) goto LA3;
				nimln(1600, "system.nim");
				i_242360 = res_242384;
				nimln(119, "passes.nim");
				{
					if ((NU)(i_242360) > (NU)(9)) raiseIndexError();
					if (!!(gpasses_242175[(i_242360)- 0].Field1 == 0)) goto LA6;
					nimln(120, "passes.nim");
					if ((NU)(i_242360) > (NU)(9)) raiseIndexError();
					if ((NU)(i_242360) > (NU)(9)) raiseIndexError();
					unsureAsgnRef((void**) (&a[(i_242360)- 0]), gpasses_242175[(i_242360)- 0].Field1(module, rd));
					nimln(121, "passes.nim");
					{
						if ((NU)(i_242360) > (NU)(9)) raiseIndexError();
						if (!!((a[(i_242360)- 0] == NIM_NIL))) goto LA10;
						nimln(122, "passes.nim");
						if ((NU)(i_242360) > (NU)(9)) raiseIndexError();
						(*a[(i_242360)- 0]).fromcache = NIM_TRUE;
					}
					LA10: ;
				}
				goto LA4;
				LA6: ;
				{
					nimln(124, "passes.nim");
					if ((NU)(i_242360) > (NU)(9)) raiseIndexError();
					unsureAsgnRef((void**) (&a[(i_242360)- 0]), NIM_NIL);
				}
				LA4: ;
				nimln(1614, "system.nim");
				TMP4124 = addInt(res_242384, ((NI) 1));
				res_242384 = (NI)(TMP4124);
			} LA3: ;
		}
	}
	popFrame();
}

N_NIMCALL(void, closepasses_242404)(Tpasscontext242005** a) {
	Tnode191813* m;
	nimfr("closePasses", "passes.nim")
	nimln(127, "passes.nim");
	m = NIM_NIL;
	{
		NI i_242421;
		NI HEX3Atmp_242431;
		NI TMP4125;
		NI res_242434;
		i_242421 = 0;
		HEX3Atmp_242431 = 0;
		nimln(128, "passes.nim");
		TMP4125 = subInt(gpasseslen_242176, ((NI) 1));
		HEX3Atmp_242431 = (NI)(TMP4125);
		nimln(1598, "system.nim");
		res_242434 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4126;
				if (!(res_242434 <= HEX3Atmp_242431)) goto LA3;
				nimln(1600, "system.nim");
				i_242421 = res_242434;
				nimln(129, "passes.nim");
				{
					if ((NU)(i_242421) > (NU)(9)) raiseIndexError();
					if (!!(gpasses_242175[(i_242421)- 0].Field3 == 0)) goto LA6;
					if ((NU)(i_242421) > (NU)(9)) raiseIndexError();
					if ((NU)(i_242421) > (NU)(9)) raiseIndexError();
					m = gpasses_242175[(i_242421)- 0].Field3(a[(i_242421)- 0], m);
				}
				LA6: ;
				nimln(130, "passes.nim");
				if ((NU)(i_242421) > (NU)(9)) raiseIndexError();
				unsureAsgnRef((void**) (&a[(i_242421)- 0]), NIM_NIL);
				nimln(1614, "system.nim");
				TMP4126 = addInt(res_242434, ((NI) 1));
				res_242434 = (NI)(TMP4126);
			} LA3: ;
		}
	}
	popFrame();
}

N_NIMCALL(NIM_BOOL, processtoplevelstmt_242454)(Tnode191813* n, Tpasscontext242005** a) {
	NIM_BOOL result;
	Tnode191813* m;
	nimfr("processTopLevelStmt", "passes.nim")
{	result = 0;
	nimln(134, "passes.nim");
	m = n;
	{
		NI i_242473;
		NI HEX3Atmp_242490;
		NI TMP4127;
		NI res_242493;
		i_242473 = 0;
		HEX3Atmp_242490 = 0;
		nimln(135, "passes.nim");
		TMP4127 = subInt(gpasseslen_242176, ((NI) 1));
		HEX3Atmp_242490 = (NI)(TMP4127);
		nimln(1598, "system.nim");
		res_242493 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4128;
				if (!(res_242493 <= HEX3Atmp_242490)) goto LA3;
				nimln(1600, "system.nim");
				i_242473 = res_242493;
				nimln(136, "passes.nim");
				{
					if ((NU)(i_242473) > (NU)(9)) raiseIndexError();
					if (!!(gpasses_242175[(i_242473)- 0].Field2 == 0)) goto LA6;
					nimln(137, "passes.nim");
					if ((NU)(i_242473) > (NU)(9)) raiseIndexError();
					if ((NU)(i_242473) > (NU)(9)) raiseIndexError();
					m = gpasses_242175[(i_242473)- 0].Field2(a[(i_242473)- 0], m);
					nimln(138, "passes.nim");
					{
						if (!m == 0) goto LA10;
						result = NIM_FALSE;
						goto BeforeRet;
					}
					LA10: ;
				}
				LA6: ;
				nimln(1614, "system.nim");
				TMP4128 = addInt(res_242493, ((NI) 1));
				res_242493 = (NI)(TMP4128);
			} LA3: ;
		}
	}
	nimln(139, "passes.nim");
	result = NIM_TRUE;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, processtoplevelstmtcached_242513)(Tnode191813* n, Tpasscontext242005** a) {
	Tnode191813* m;
	nimfr("processTopLevelStmtCached", "passes.nim")
	nimln(143, "passes.nim");
	m = n;
	{
		NI i_242531;
		NI HEX3Atmp_242540;
		NI TMP4129;
		NI res_242543;
		i_242531 = 0;
		HEX3Atmp_242540 = 0;
		nimln(144, "passes.nim");
		TMP4129 = subInt(gpasseslen_242176, ((NI) 1));
		HEX3Atmp_242540 = (NI)(TMP4129);
		nimln(1598, "system.nim");
		res_242543 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4130;
				if (!(res_242543 <= HEX3Atmp_242540)) goto LA3;
				nimln(1600, "system.nim");
				i_242531 = res_242543;
				nimln(145, "passes.nim");
				{
					if ((NU)(i_242531) > (NU)(9)) raiseIndexError();
					if (!!(gpasses_242175[(i_242531)- 0].Field1 == 0)) goto LA6;
					if ((NU)(i_242531) > (NU)(9)) raiseIndexError();
					if ((NU)(i_242531) > (NU)(9)) raiseIndexError();
					m = gpasses_242175[(i_242531)- 0].Field2(a[(i_242531)- 0], m);
				}
				LA6: ;
				nimln(1614, "system.nim");
				TMP4130 = addInt(res_242543, ((NI) 1));
				res_242543 = (NI)(TMP4130);
			} LA3: ;
		}
	}
	popFrame();
}

N_NIMCALL(void, closepassescached_242563)(Tpasscontext242005** a) {
	Tnode191813* m;
	nimfr("closePassesCached", "passes.nim")
	nimln(148, "passes.nim");
	m = NIM_NIL;
	{
		NI i_242580;
		NI HEX3Atmp_242597;
		NI TMP4131;
		NI res_242600;
		i_242580 = 0;
		HEX3Atmp_242597 = 0;
		nimln(149, "passes.nim");
		TMP4131 = subInt(gpasseslen_242176, ((NI) 1));
		HEX3Atmp_242597 = (NI)(TMP4131);
		nimln(1598, "system.nim");
		res_242600 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4132;
				if (!(res_242600 <= HEX3Atmp_242597)) goto LA3;
				nimln(1600, "system.nim");
				i_242580 = res_242600;
				nimln(150, "passes.nim");
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					if ((NU)(i_242580) > (NU)(9)) raiseIndexError();
					LOC6 = !(gpasses_242175[(i_242580)- 0].Field1 == 0);
					if (!(LOC6)) goto LA7;
					if ((NU)(i_242580) > (NU)(9)) raiseIndexError();
					LOC6 = !(gpasses_242175[(i_242580)- 0].Field3 == 0);
					LA7: ;
					if (!LOC6) goto LA8;
					nimln(151, "passes.nim");
					if ((NU)(i_242580) > (NU)(9)) raiseIndexError();
					if ((NU)(i_242580) > (NU)(9)) raiseIndexError();
					m = gpasses_242175[(i_242580)- 0].Field3(a[(i_242580)- 0], m);
				}
				LA8: ;
				nimln(152, "passes.nim");
				if ((NU)(i_242580) > (NU)(9)) raiseIndexError();
				unsureAsgnRef((void**) (&a[(i_242580)- 0]), NIM_NIL);
				nimln(1614, "system.nim");
				TMP4132 = addInt(res_242600, ((NI) 1));
				res_242600 = (NI)(TMP4132);
			} LA3: ;
		}
	}
	popFrame();
}

N_NIMCALL(void, processimplicits_242621)(TY13606* implicits, NU8 nodekind, Tpasscontext242005** a) {
	nimfr("processImplicits", "passes.nim")
	{
		NimStringDesc* module_242637;
		NI i_242644;
		NI L_242646;
		module_242637 = 0;
		nimln(3084, "system.nim");
		i_242644 = ((NI) 0);
		nimln(3085, "system.nim");
		L_242646 = (implicits ? implicits->Sup.len : 0);
		{
			nimln(3086, "system.nim");
			while (1) {
				Tnode191813* importstmt;
				Tnode191813* str;
				NI TMP4133;
				if (!(i_242644 < L_242646)) goto LA3;
				nimln(3087, "system.nim");
				if ((NU)(i_242644) >= (NU)(implicits->Sup.len)) raiseIndexError();
				module_242637 = implicits->data[i_242644];
				nimln(157, "passes.nim");
				importstmt = newnodei_193351(nodekind, gcmdlineinfo_163922);
				nimln(158, "passes.nim");
				str = newstrnode_192644(((NU8) 20), module_242637);
				nimln(159, "passes.nim");
				(*str).info = gcmdlineinfo_163922;
				nimln(160, "passes.nim");
				addson_193819(importstmt, str);
				nimln(161, "passes.nim");
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = processtoplevelstmt_242454(importstmt, a);
					if (!!(LOC6)) goto LA7;
					goto LA1;
				}
				LA7: ;
				nimln(3088, "system.nim");
				TMP4133 = addInt(i_242644, ((NI) 1));
				i_242644 = (NI)(TMP4133);
				nimln(3089, "system.nim");
				{
					if (!!(((implicits ? implicits->Sup.len : 0) == L_242646))) goto LA11;
					failedassertimpl_87017(((NimStringDesc*) &TMP4134));
				}
				LA11: ;
			} LA3: ;
		}
	} LA1: ;
	popFrame();
}

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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46747* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_50246(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).refcount -= ((NI) 8);
		nimln(168, "gc.nim");
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_51804(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, processmodule_242056)(Tsym191843* module, Tllstream178204* stream, Trodreader234030* rd) {
	Tparsers219035 p;
	Tpasscontextarray242168 a;
	Tllstream178204* s;
	NI32 fileidx;
	nimfr("processModule", "passes.nim")
{	memset((void*)(&p), 0, sizeof(p));
	objectInit((&p), (&NTI219035));
	memset((void*)a, 0, sizeof(a));
	s = 0;
	nimln(168, "passes.nim");
	fileidx = ((NI32) ((*module).position));
	nimln(169, "passes.nim");
	{
		if (!(rd == NIM_NIL)) goto LA3;
		nimln(170, "passes.nim");
		openpasses_242293(a, module);
		nimln(171, "passes.nim");
		{
			NimStringDesc* filename;
			if (!(stream == NIM_NIL)) goto LA7;
			nimln(172, "passes.nim");
			filename = tofullpathconsiderdirty_164407(fileidx);
			nimln(173, "passes.nim");
			{
				NimStringDesc* LOC13;
				if (!eqStrings((*(*module).name).s, ((NimStringDesc*) &TMP4135))) goto LA11;
				nimln(174, "passes.nim");
				LOC13 = 0;
				LOC13 = (*(*module).name).s; (*(*module).name).s = copyStringRC1(((NimStringDesc*) &TMP4136));
				if (LOC13) nimGCunrefNoCycle(LOC13);
				nimln(175, "passes.nim");
				s = llstreamopen_178238(stdin);
			}
			goto LA9;
			LA11: ;
			{
				nimln(177, "passes.nim");
				s = llstreamopen_178256(filename, ((NU8) 0));
			}
			LA9: ;
			nimln(178, "passes.nim");
			{
				if (!(s == NIM_NIL)) goto LA17;
				nimln(179, "passes.nim");
				rawmessage_164960(((NU16) 3), filename);
				nimln(180, "passes.nim");
				goto BeforeRet;
			}
			LA17: ;
		}
		goto LA5;
		LA7: ;
		{
			nimln(182, "passes.nim");
			s = stream;
		}
		LA5: ;
		{
			nimln(183, "passes.nim");
			while (1) {
				nimln(184, "passes.nim");
				openparsers_219047((&p), fileidx, s);
				nimln(186, "passes.nim");
				{
					if (!!((((*module).flags &(1<<((((NU8) 13))&31)))!=0))) goto LA24;
					nimln(191, "passes.nim");
					processimplicits_242621(implicitimports_154276, ((NU8) 116), a);
					nimln(192, "passes.nim");
					processimplicits_242621(implicitincludes_154294, ((NU8) 121), a);
				}
				LA24: ;
				{
					nimln(194, "passes.nim");
					while (1) {
						Tnode191813* n;
						nimln(195, "passes.nim");
						n = parsetoplevelstmt_219070((&p));
						nimln(196, "passes.nim");
						{
							if (!((*n).kind == ((NU8) 1))) goto LA30;
							goto LA26;
						}
						LA30: ;
						nimln(197, "passes.nim");
						{
							NIM_BOOL LOC34;
							LOC34 = 0;
							LOC34 = processtoplevelstmt_242454(n, a);
							if (!!(LOC34)) goto LA35;
							goto LA26;
						}
						LA35: ;
					}
				} LA26: ;
				nimln(199, "passes.nim");
				closeparsers_219056((&p));
				nimln(200, "passes.nim");
				{
					if (!!(((*s).kind == ((NU8) 3)))) goto LA39;
					goto LA20;
				}
				LA39: ;
			}
		} LA20: ;
		nimln(201, "passes.nim");
		closepasses_242404(a);
		nimln(203, "passes.nim");
		idsynchronizationpoint_190453(((NI) 1000));
	}
	goto LA1;
	LA3: ;
	{
		Tnode191813* n;
		nimln(205, "passes.nim");
		openpassescached_242342(a, module, rd);
		nimln(206, "passes.nim");
		n = loadinitsection_234077(rd);
		{
			NI i_242766;
			NI HEX3Atmp_242777;
			NI LOC43;
			NI TMP4137;
			NI res_242780;
			i_242766 = 0;
			HEX3Atmp_242777 = 0;
			nimln(207, "passes.nim");
			LOC43 = 0;
			LOC43 = sonslen_194403(n);
			TMP4137 = subInt(LOC43, ((NI) 1));
			HEX3Atmp_242777 = (NI)(TMP4137);
			nimln(1598, "system.nim");
			res_242780 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					NI TMP4138;
					if (!(res_242780 <= HEX3Atmp_242777)) goto LA45;
					nimln(1600, "system.nim");
					i_242766 = res_242780;
					nimln(207, "passes.nim");
					if (((TMP4117[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4118));
					if ((NU)(i_242766) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
					processtoplevelstmtcached_242513((*n).kindU.S6.sons->data[i_242766], a);
					nimln(1614, "system.nim");
					TMP4138 = addInt(res_242780, ((NI) 1));
					res_242780 = (NI)(TMP4138);
				} LA45: ;
			}
		}
		nimln(208, "passes.nim");
		closepassescached_242563(a);
	}
	LA1: ;
	}BeforeRet: ;
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, compiler_passesInit)(void) {
	nimfr("passes", "passes.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_passesDatInit)(void) {
static TNimNode* TMP6331[2];
static TNimNode TMP4033[4];
NTI242005.size = sizeof(Tpasscontext242005);
NTI242005.kind = 17;
NTI242005.base = (&NTI3411);
NTI242005.flags = 1;
TMP4033[0].kind = 1;
TMP4033[0].offset = offsetof(Tpasscontext242005, fromcache);
TMP4033[0].typ = (&NTI138);
TMP4033[0].name = "fromCache";
NTI242005.node = &TMP4033[0];
NTI242019.size = sizeof(Tpassdata242019);
NTI242019.kind = 18;
NTI242019.base = 0;
NTI242019.flags = 2;
TMP6331[0] = &TMP4033[2];
TMP4033[2].kind = 1;
TMP4033[2].offset = offsetof(Tpassdata242019, Field0);
TMP4033[2].typ = (&NTI191805);
TMP4033[2].name = "Field0";
TMP6331[1] = &TMP4033[3];
TMP4033[3].kind = 1;
TMP4033[3].offset = offsetof(Tpassdata242019, Field1);
TMP4033[3].typ = (&NTI191805);
TMP4033[3].name = "Field1";
TMP4033[1].len = 2; TMP4033[1].kind = 2; TMP4033[1].sons = &TMP6331[0];
NTI242019.node = &TMP4033[1];
}

