/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Tnode191813 Tnode191813;
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
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tlib191831 Tlib191831;
typedef struct Tnodetable191873 Tnodetable191873;
typedef struct Tnodepairseq191871 Tnodepairseq191871;
typedef struct Tnodepair191869 Tnodepair191869;
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
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct TY191933 TY191933;
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
typedef NU8 TY192031[20];
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
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
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
struct  Tnodetable191873  {
NI counter;
Tnodepairseq191871* data;
};
struct  Tnodepair191869  {
NI h;
Tnode191813* key;
NI val;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
typedef NI TY27820[8];
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
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
};
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
struct Tnodepairseq191871 {
  TGenericSeq Sup;
  Tnodepair191869 data[SEQ_DECL_SIZE];
};
struct Tnodeseq191807 {
  TGenericSeq Sup;
  Tnode191813* data[SEQ_DECL_SIZE];
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
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, hashtree_243027)(Tnode191813* n);
static N_INLINE(NI, HEX21HEX26_131025)(NI h, NI val);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NIMCALL(NI, hash_131839)(NimStringDesc* x);
N_NIMCALL(NI, sonslen_194403)(Tnode191813* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NIM_BOOL, treesequivalent_243112)(Tnode191813* a, Tnode191813* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, sametypeornil_226108)(Ttype191849* a, Ttype191849* b, NU8 flags);
N_NIMCALL(NI, nodetablerawget_243211)(Tnodetable191873 t, NI k, Tnode191813* key);
static N_INLINE(NI, nexttry_199256)(NI h, NI maxhash);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NI, nodetableget_243244)(Tnodetable191873 t, Tnode191813* key);
N_NIMCALL(void, nodetablerawinsert_243259)(Tnodepairseq191871** data, NI k, Tnode191813* key, NI val);
N_NIMCALL(void, failedassertimpl_87017)(NimStringDesc* msg);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46746*, usrtocell_50246)(void* usr);
static N_INLINE(void, rtladdzct_51804)(Tcell46746* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46762* s, Tcell46746* c);
N_NIMCALL(void, nodetableput_243415)(Tnodetable191873* t, Tnode191813* key, NI val);
N_NIMCALL(NIM_BOOL, mustrehash_199249)(NI length, NI counter);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, nodetabletestorset_243698)(Tnodetable191873* t, Tnode191813* key, NI val);
static NIM_CONST TY192031 TMP4147 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4148, "ident", 5);
static NIM_CONST TY192031 TMP4149 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4150, "sym", 3);
static NIM_CONST TY192031 TMP4151 = {
0xE0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4152, "intVal", 6);
static NIM_CONST TY192031 TMP4153 = {
0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4154, "floatVal", 8);
static NIM_CONST TY192031 TMP4155 = {
0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4156, "strVal", 6);
static NIM_CONST TY192031 TMP4158 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4159, "sons", 4);
STRING_LITERAL(TMP4165, "data[h].key == nil ", 19);
STRING_LITERAL(TMP4166, "not (t.data[index].key == nil) ", 31);
extern TFrame* frameptr_17042;
extern Tgcheap48616 gch_48644;
extern TNimType NTI191871; /* TNodePairSeq */

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

static N_INLINE(NI, HEX21HEX26_131025)(NI h, NI val) {
	NI result;
	nimfr("!&", "hashes.nim")
	result = 0;
	nimln(51, "hashes.nim");
	result = (NI)((NU64)(h) + (NU64)(val));
	nimln(52, "hashes.nim");
	result = (NI)((NU64)(result) + (NU64)((NI)((NU64)(result) << (NU64)(((NI) 10)))));
	nimln(53, "hashes.nim");
	result = (NI)(result ^ (NI)((NU64)(result) >> (NU64)(((NI) 6))));
	popFrame();
	return result;
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

N_NIMCALL(NI, hashtree_243027)(Tnode191813* n) {
	NI result;
	nimfr("hashTree", "treetab.nim")
{	result = 0;
	nimln(16, "treetab.nim");
	{
		if (!(n == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	nimln(17, "treetab.nim");
	result = ((NI) ((*n).kind));
	nimln(18, "treetab.nim");
	switch ((*n).kind) {
	case ((NU8) 1):
	case ((NU8) 23):
	case ((NU8) 4):
	{
	}
	break;
	case ((NU8) 2):
	{
		nimln(22, "treetab.nim");
		if (!(((TMP4147[(*n).kind/8] &(1<<((*n).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4148));
		result = HEX21HEX26_131025(result, (*(*n).kindU.S5.ident).h);
	}
	break;
	case ((NU8) 3):
	{
		nimln(24, "treetab.nim");
		if (!(((TMP4149[(*n).kind/8] &(1<<((*n).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4150));
		result = HEX21HEX26_131025(result, (*(*(*n).kindU.S4.sym).name).h);
	}
	break;
	case ((NU8) 5) ... ((NU8) 15):
	{
		nimln(26, "treetab.nim");
		{
			NIM_BOOL LOC11;
			LOC11 = 0;
			if (!(((TMP4151[(*n).kind/8] &(1<<((*n).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4152));
			LOC11 = ((IL64(-9223372036854775807) - IL64(1)) <= (*n).kindU.S1.intval);
			if (!(LOC11)) goto LA12;
			if (!(((TMP4151[(*n).kind/8] &(1<<((*n).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4152));
			LOC11 = ((*n).kindU.S1.intval <= IL64(9223372036854775807));
			LA12: ;
			if (!LOC11) goto LA13;
			nimln(27, "treetab.nim");
			if (!(((TMP4151[(*n).kind/8] &(1<<((*n).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4152));
			result = HEX21HEX26_131025(result, ((NI) ((*n).kindU.S1.intval)));
		}
		LA13: ;
	}
	break;
	case ((NU8) 16) ... ((NU8) 18):
	{
		nimln(29, "treetab.nim");
		{
			NIM_BOOL LOC18;
			LOC18 = 0;
			if (!(((TMP4153[(*n).kind/8] &(1<<((*n).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4154));
			LOC18 = (-1.0000000000000000e+06 <= (*n).kindU.S2.floatval);
			if (!(LOC18)) goto LA19;
			if (!(((TMP4153[(*n).kind/8] &(1<<((*n).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4154));
			LOC18 = ((*n).kindU.S2.floatval <= 1.0000000000000000e+06);
			LA19: ;
			if (!LOC18) goto LA20;
			nimln(30, "treetab.nim");
			if (!(((TMP4153[(*n).kind/8] &(1<<((*n).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4154));
			result = HEX21HEX26_131025(result, float64ToInt32((*n).kindU.S2.floatval));
		}
		LA20: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		nimln(32, "treetab.nim");
		{
			NI LOC27;
			if (!(((TMP4155[(*n).kind/8] &(1<<((*n).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4156));
			if (!!((*n).kindU.S3.strval == 0)) goto LA25;
			nimln(33, "treetab.nim");
			if (!(((TMP4155[(*n).kind/8] &(1<<((*n).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4156));
			LOC27 = 0;
			LOC27 = hash_131839((*n).kindU.S3.strval);
			result = HEX21HEX26_131025(result, LOC27);
		}
		LA25: ;
	}
	break;
	default:
	{
		{
			NI i_243082;
			NI HEX3Atmp_243090;
			NI LOC30;
			NI TMP4157;
			NI res_243093;
			i_243082 = 0;
			HEX3Atmp_243090 = 0;
			nimln(35, "treetab.nim");
			LOC30 = 0;
			LOC30 = sonslen_194403(n);
			TMP4157 = subInt(LOC30, ((NI) 1));
			HEX3Atmp_243090 = (NI)(TMP4157);
			nimln(1598, "system.nim");
			res_243093 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					NI LOC33;
					NI TMP4160;
					if (!(res_243093 <= HEX3Atmp_243090)) goto LA32;
					nimln(1600, "system.nim");
					i_243082 = res_243093;
					nimln(36, "treetab.nim");
					if (((TMP4158[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4159));
					if ((NU)(i_243082) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
					LOC33 = 0;
					LOC33 = hashtree_243027((*n).kindU.S6.sons->data[i_243082]);
					result = HEX21HEX26_131025(result, LOC33);
					nimln(1614, "system.nim");
					TMP4160 = addInt(res_243093, ((NI) 1));
					res_243093 = (NI)(TMP4160);
				} LA32: ;
			}
		}
	}
	break;
	}
	}BeforeRet: ;
	popFrame();
	return result;
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

N_NIMCALL(NIM_BOOL, treesequivalent_243112)(Tnode191813* a, Tnode191813* b) {
	NIM_BOOL result;
	nimfr("treesEquivalent", "treetab.nim")
{	result = 0;
	nimln(39, "treetab.nim");
	{
		if (!(a == b)) goto LA3;
		nimln(40, "treetab.nim");
		result = NIM_TRUE;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		NIM_BOOL LOC7;
		nimln(41, "treetab.nim");
		LOC6 = 0;
		LOC7 = 0;
		LOC7 = !((a == NIM_NIL));
		if (!(LOC7)) goto LA8;
		LOC7 = !((b == NIM_NIL));
		LA8: ;
		LOC6 = LOC7;
		if (!(LOC6)) goto LA9;
		LOC6 = ((*a).kind == (*b).kind);
		LA9: ;
		if (!LOC6) goto LA10;
		nimln(42, "treetab.nim");
		switch ((*a).kind) {
		case ((NU8) 1):
		case ((NU8) 23):
		case ((NU8) 4):
		{
			nimln(43, "treetab.nim");
			result = NIM_TRUE;
		}
		break;
		case ((NU8) 3):
		{
			nimln(44, "treetab.nim");
			if (!(((TMP4149[(*a).kind/8] &(1<<((*a).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4150));
			if (!(((TMP4149[(*b).kind/8] &(1<<((*b).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4150));
			result = ((*(*a).kindU.S4.sym).Sup.id == (*(*b).kindU.S4.sym).Sup.id);
		}
		break;
		case ((NU8) 2):
		{
			nimln(45, "treetab.nim");
			if (!(((TMP4147[(*a).kind/8] &(1<<((*a).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4148));
			if (!(((TMP4147[(*b).kind/8] &(1<<((*b).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4148));
			result = ((*(*a).kindU.S5.ident).Sup.id == (*(*b).kindU.S5.ident).Sup.id);
		}
		break;
		case ((NU8) 5) ... ((NU8) 15):
		{
			nimln(46, "treetab.nim");
			if (!(((TMP4151[(*a).kind/8] &(1<<((*a).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4152));
			if (!(((TMP4151[(*b).kind/8] &(1<<((*b).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4152));
			result = ((*a).kindU.S1.intval == (*b).kindU.S1.intval);
		}
		break;
		case ((NU8) 16) ... ((NU8) 18):
		{
			nimln(47, "treetab.nim");
			if (!(((TMP4153[(*a).kind/8] &(1<<((*a).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4154));
			if (!(((TMP4153[(*b).kind/8] &(1<<((*b).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4154));
			result = ((*a).kindU.S2.floatval == (*b).kindU.S2.floatval);
		}
		break;
		case ((NU8) 20) ... ((NU8) 22):
		{
			nimln(48, "treetab.nim");
			if (!(((TMP4155[(*a).kind/8] &(1<<((*a).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4156));
			if (!(((TMP4155[(*b).kind/8] &(1<<((*b).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4156));
			result = eqStrings((*a).kindU.S3.strval, (*b).kindU.S3.strval);
		}
		break;
		default:
		{
			nimln(50, "treetab.nim");
			{
				NI LOC21;
				NI LOC22;
				LOC21 = 0;
				LOC21 = sonslen_194403(a);
				LOC22 = 0;
				LOC22 = sonslen_194403(b);
				if (!(LOC21 == LOC22)) goto LA23;
				{
					NI i_243185;
					NI HEX3Atmp_243189;
					NI LOC26;
					NI TMP4161;
					NI res_243192;
					i_243185 = 0;
					HEX3Atmp_243189 = 0;
					nimln(51, "treetab.nim");
					LOC26 = 0;
					LOC26 = sonslen_194403(a);
					TMP4161 = subInt(LOC26, ((NI) 1));
					HEX3Atmp_243189 = (NI)(TMP4161);
					nimln(1598, "system.nim");
					res_243192 = ((NI) 0);
					{
						nimln(1599, "system.nim");
						while (1) {
							NI TMP4162;
							if (!(res_243192 <= HEX3Atmp_243189)) goto LA28;
							nimln(1600, "system.nim");
							i_243185 = res_243192;
							nimln(52, "treetab.nim");
							{
								NIM_BOOL LOC31;
								if (((TMP4158[(*a).kind/8] &(1<<((*a).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4159));
								if ((NU)(i_243185) >= (NU)((*a).kindU.S6.sons->Sup.len)) raiseIndexError();
								if (((TMP4158[(*b).kind/8] &(1<<((*b).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4159));
								if ((NU)(i_243185) >= (NU)((*b).kindU.S6.sons->Sup.len)) raiseIndexError();
								LOC31 = 0;
								LOC31 = treesequivalent_243112((*a).kindU.S6.sons->data[i_243185], (*b).kindU.S6.sons->data[i_243185]);
								if (!!(LOC31)) goto LA32;
								goto BeforeRet;
							}
							LA32: ;
							nimln(1614, "system.nim");
							TMP4162 = addInt(res_243192, ((NI) 1));
							res_243192 = (NI)(TMP4162);
						} LA28: ;
					}
				}
				nimln(53, "treetab.nim");
				result = NIM_TRUE;
			}
			LA23: ;
		}
		break;
		}
		nimln(54, "treetab.nim");
		{
			if (!result) goto LA36;
			result = sametypeornil_226108((*a).typ, (*b).typ, 0);
		}
		LA36: ;
	}
	goto LA1;
	LA10: ;
	LA1: ;
	}BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(NI, nexttry_199256)(NI h, NI maxhash) {
	NI result;
	NI TMP4163;
	NI TMP4164;
	nimfr("nextTry", "astalgo.nim")
	result = 0;
	nimln(470, "astalgo.nim");
	TMP4163 = mulInt(((NI) 5), h);
	TMP4164 = addInt((NI)(TMP4163), ((NI) 1));
	result = (NI)((NI)(TMP4164) & maxhash);
	popFrame();
	return result;
}

N_NIMCALL(NI, nodetablerawget_243211)(Tnodetable191873 t, NI k, Tnode191813* key) {
	NI result;
	NI h;
	nimfr("nodeTableRawGet", "treetab.nim")
{	result = 0;
	nimln(57, "treetab.nim");
	h = (NI)(k & (t.data ? (t.data->Sup.len-1) : -1));
	{
		nimln(58, "treetab.nim");
		while (1) {
			if ((NU)(h) >= (NU)(t.data->Sup.len)) raiseIndexError();
			if (!!((t.data->data[h].key == NIM_NIL))) goto LA2;
			nimln(59, "treetab.nim");
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				if ((NU)(h) >= (NU)(t.data->Sup.len)) raiseIndexError();
				LOC5 = (t.data->data[h].h == k);
				if (!(LOC5)) goto LA6;
				if ((NU)(h) >= (NU)(t.data->Sup.len)) raiseIndexError();
				LOC5 = treesequivalent_243112(t.data->data[h].key, key);
				LA6: ;
				if (!LOC5) goto LA7;
				nimln(60, "treetab.nim");
				result = h;
				goto BeforeRet;
			}
			LA7: ;
			nimln(61, "treetab.nim");
			h = nexttry_199256(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA2: ;
	}
	nimln(62, "treetab.nim");
	result = ((NI) -1);
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, nodetableget_243244)(Tnodetable191873 t, Tnode191813* key) {
	NI result;
	NI index;
	NI LOC1;
	nimfr("nodeTableGet", "treetab.nim")
	result = 0;
	nimln(65, "treetab.nim");
	LOC1 = 0;
	LOC1 = hashtree_243027(key);
	index = nodetablerawget_243211(t, LOC1, key);
	nimln(66, "treetab.nim");
	{
		if (!(((NI) 0) <= index)) goto LA4;
		if ((NU)(index) >= (NU)(t.data->Sup.len)) raiseIndexError();
		result = t.data->data[index].val;
	}
	goto LA2;
	LA4: ;
	{
		nimln(67, "treetab.nim");
		result = ((NI) (IL64(-9223372036854775807) - IL64(1)));
	}
	LA2: ;
	popFrame();
	return result;
}

static N_INLINE(Tcell46746*, usrtocell_50246)(void* usr) {
	Tcell46746* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	result = ((Tcell46746*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46746))))));
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

N_NIMCALL(void, nodetablerawinsert_243259)(Tnodepairseq191871** data, NI k, Tnode191813* key, NI val) {
	NI h;
	nimfr("nodeTableRawInsert", "treetab.nim")
	nimln(71, "treetab.nim");
	h = (NI)(k & ((*data) ? ((*data)->Sup.len-1) : -1));
	{
		nimln(72, "treetab.nim");
		while (1) {
			if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
			if (!!(((*data)->data[h].key == NIM_NIL))) goto LA2;
			h = nexttry_199256(h, ((*data) ? ((*data)->Sup.len-1) : -1));
		} LA2: ;
	}
	nimln(73, "treetab.nim");
	{
		if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
		if (!!(((*data)->data[h].key == NIM_NIL))) goto LA5;
		failedassertimpl_87017(((NimStringDesc*) &TMP4165));
	}
	LA5: ;
	nimln(74, "treetab.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	(*data)->data[h].h = k;
	nimln(75, "treetab.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	asgnRefNoCycle((void**) (&(*data)->data[h].key), key);
	nimln(76, "treetab.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	(*data)->data[h].val = val;
	popFrame();
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

N_NIMCALL(void, nodetableput_243415)(Tnodetable191873* t, Tnode191813* key, NI val) {
	Tnodepairseq191871* n;
	NI k;
	NI index;
	nimfr("nodeTablePut", "treetab.nim")
	n = 0;
	nimln(80, "treetab.nim");
	k = hashtree_243027(key);
	nimln(81, "treetab.nim");
	index = nodetablerawget_243211((*t), k, key);
	nimln(82, "treetab.nim");
	{
		if (!(((NI) 0) <= index)) goto LA3;
		nimln(83, "treetab.nim");
		{
			if ((NU)(index) >= (NU)((*t).data->Sup.len)) raiseIndexError();
			if (!!(!(((*t).data->data[index].key == NIM_NIL)))) goto LA7;
			failedassertimpl_87017(((NimStringDesc*) &TMP4166));
		}
		LA7: ;
		nimln(84, "treetab.nim");
		if ((NU)(index) >= (NU)((*t).data->Sup.len)) raiseIndexError();
		(*t).data->data[index].val = val;
	}
	goto LA1;
	LA3: ;
	{
		NI TMP4169;
		nimln(86, "treetab.nim");
		{
			NIM_BOOL LOC12;
			NI TMP4167;
			Tnodepairseq191871* LOC22;
			LOC12 = 0;
			LOC12 = mustrehash_199249(((*t).data ? (*t).data->Sup.len : 0), (*t).counter);
			if (!LOC12) goto LA13;
			nimln(87, "treetab.nim");
			TMP4167 = mulInt(((*t).data ? (*t).data->Sup.len : 0), ((NI) 2));
			n = (Tnodepairseq191871*) newSeq((&NTI191871), ((NI)chckRange((NI)(TMP4167), ((NI) 0), ((NI) IL64(9223372036854775807)))));
			{
				NI i_243639;
				NI HEX3Atmp_243676;
				NI res_243679;
				i_243639 = 0;
				HEX3Atmp_243676 = 0;
				nimln(88, "treetab.nim");
				HEX3Atmp_243676 = ((*t).data ? ((*t).data->Sup.len-1) : -1);
				nimln(1598, "system.nim");
				res_243679 = ((NI) 0);
				{
					nimln(1599, "system.nim");
					while (1) {
						NI TMP4168;
						if (!(res_243679 <= HEX3Atmp_243676)) goto LA17;
						nimln(1600, "system.nim");
						i_243639 = res_243679;
						nimln(89, "treetab.nim");
						{
							if ((NU)(i_243639) >= (NU)((*t).data->Sup.len)) raiseIndexError();
							if (!!(((*t).data->data[i_243639].key == NIM_NIL))) goto LA20;
							nimln(90, "treetab.nim");
							if ((NU)(i_243639) >= (NU)((*t).data->Sup.len)) raiseIndexError();
							if ((NU)(i_243639) >= (NU)((*t).data->Sup.len)) raiseIndexError();
							if ((NU)(i_243639) >= (NU)((*t).data->Sup.len)) raiseIndexError();
							nodetablerawinsert_243259((&n), (*t).data->data[i_243639].h, (*t).data->data[i_243639].key, (*t).data->data[i_243639].val);
						}
						LA20: ;
						nimln(1614, "system.nim");
						TMP4168 = addInt(res_243679, ((NI) 1));
						res_243679 = (NI)(TMP4168);
					} LA17: ;
				}
			}
			nimln(91, "treetab.nim");
			LOC22 = 0;
			LOC22 = (*t).data;
			unsureAsgnRef((void**) (&(*t).data), n);
			n = LOC22;
		}
		LA13: ;
		nimln(92, "treetab.nim");
		nodetablerawinsert_243259((&(*t).data), k, key, val);
		nimln(93, "treetab.nim");
		TMP4169 = addInt((*t).counter, ((NI) 1));
		(*t).counter = (NI)(TMP4169);
	}
	LA1: ;
	popFrame();
}

N_NIMCALL(NI, nodetabletestorset_243698)(Tnodetable191873* t, Tnode191813* key, NI val) {
	NI result;
	Tnodepairseq191871* n;
	NI k;
	NI index;
	nimfr("nodeTableTestOrSet", "treetab.nim")
	result = 0;
	n = 0;
	nimln(97, "treetab.nim");
	k = hashtree_243027(key);
	nimln(98, "treetab.nim");
	index = nodetablerawget_243211((*t), k, key);
	nimln(99, "treetab.nim");
	{
		if (!(((NI) 0) <= index)) goto LA3;
		nimln(100, "treetab.nim");
		{
			if ((NU)(index) >= (NU)((*t).data->Sup.len)) raiseIndexError();
			if (!!(!(((*t).data->data[index].key == NIM_NIL)))) goto LA7;
			failedassertimpl_87017(((NimStringDesc*) &TMP4166));
		}
		LA7: ;
		nimln(101, "treetab.nim");
		if ((NU)(index) >= (NU)((*t).data->Sup.len)) raiseIndexError();
		result = (*t).data->data[index].val;
	}
	goto LA1;
	LA3: ;
	{
		NI TMP4172;
		nimln(103, "treetab.nim");
		{
			NIM_BOOL LOC12;
			NI TMP4170;
			Tnodepairseq191871* LOC22;
			LOC12 = 0;
			LOC12 = mustrehash_199249(((*t).data ? (*t).data->Sup.len : 0), (*t).counter);
			if (!LOC12) goto LA13;
			nimln(104, "treetab.nim");
			TMP4170 = mulInt(((*t).data ? (*t).data->Sup.len : 0), ((NI) 2));
			n = (Tnodepairseq191871*) newSeq((&NTI191871), ((NI)chckRange((NI)(TMP4170), ((NI) 0), ((NI) IL64(9223372036854775807)))));
			{
				NI i_243839;
				NI HEX3Atmp_243876;
				NI res_243879;
				i_243839 = 0;
				HEX3Atmp_243876 = 0;
				nimln(105, "treetab.nim");
				HEX3Atmp_243876 = ((*t).data ? ((*t).data->Sup.len-1) : -1);
				nimln(1598, "system.nim");
				res_243879 = ((NI) 0);
				{
					nimln(1599, "system.nim");
					while (1) {
						NI TMP4171;
						if (!(res_243879 <= HEX3Atmp_243876)) goto LA17;
						nimln(1600, "system.nim");
						i_243839 = res_243879;
						nimln(106, "treetab.nim");
						{
							if ((NU)(i_243839) >= (NU)((*t).data->Sup.len)) raiseIndexError();
							if (!!(((*t).data->data[i_243839].key == NIM_NIL))) goto LA20;
							nimln(107, "treetab.nim");
							if ((NU)(i_243839) >= (NU)((*t).data->Sup.len)) raiseIndexError();
							if ((NU)(i_243839) >= (NU)((*t).data->Sup.len)) raiseIndexError();
							if ((NU)(i_243839) >= (NU)((*t).data->Sup.len)) raiseIndexError();
							nodetablerawinsert_243259((&n), (*t).data->data[i_243839].h, (*t).data->data[i_243839].key, (*t).data->data[i_243839].val);
						}
						LA20: ;
						nimln(1614, "system.nim");
						TMP4171 = addInt(res_243879, ((NI) 1));
						res_243879 = (NI)(TMP4171);
					} LA17: ;
				}
			}
			nimln(108, "treetab.nim");
			LOC22 = 0;
			LOC22 = (*t).data;
			unsureAsgnRef((void**) (&(*t).data), n);
			n = LOC22;
		}
		LA13: ;
		nimln(109, "treetab.nim");
		nodetablerawinsert_243259((&(*t).data), k, key, val);
		nimln(110, "treetab.nim");
		result = val;
		nimln(111, "treetab.nim");
		TMP4172 = addInt((*t).counter, ((NI) 1));
		(*t).counter = (NI)(TMP4172);
	}
	LA1: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_treetabInit)(void) {
	nimfr("treetab", "treetab.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_treetabDatInit)(void) {
}

