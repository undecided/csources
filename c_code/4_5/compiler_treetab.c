/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Tnode190813 Tnode190813;
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
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj160009 Ropeobj160009;
typedef struct Tlib190831 Tlib190831;
typedef struct Tnodetable190873 Tnodetable190873;
typedef struct Tnodepairseq190871 Tnodepairseq190871;
typedef struct Tnodepair190869 Tnodepair190869;
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
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct TY190933 TY190933;
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
typedef NU8 TY191031[20];
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
struct  Tident166021  {
  Tidobj166015 Sup;
NimStringDesc* s;
Tident166021* next;
NI h;
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
struct  Tnodetable190873  {
NI counter;
Tnodepairseq190871* data;
};
struct  Tnodepair190869  {
NI h;
Tnode190813* key;
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
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
struct Tnodepairseq190871 {
  TGenericSeq Sup;
  Tnodepair190869 data[SEQ_DECL_SIZE];
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
N_NIMCALL(NI, hashtree_242027)(Tnode190813* n);
static N_INLINE(NI, HEX21HEX26_131025)(NI h, NI val);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NIMCALL(NI64, chckRange64)(NI64 i, NI64 a, NI64 b);
N_NIMCALL(NI, hash_131839)(NimStringDesc* x);
N_NIMCALL(NI, sonslen_193403)(Tnode190813* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NIM_BOOL, treesequivalent_242111)(Tnode190813* a, Tnode190813* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, sametypeornil_225108)(Ttype190849* a, Ttype190849* b, NU8 flags);
N_NIMCALL(NI, nodetablerawget_242210)(Tnodetable190873 t, NI k, Tnode190813* key);
static N_INLINE(NI, nexttry_198256)(NI h, NI maxhash);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NI, nodetableget_242243)(Tnodetable190873 t, Tnode190813* key);
N_NIMCALL(void, nodetablerawinsert_242258)(Tnodepairseq190871** data, NI k, Tnode190813* key, NI val);
N_NIMCALL(void, failedassertimpl_87217)(NimStringDesc* msg);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46746*, usrtocell_50246)(void* usr);
static N_INLINE(void, rtladdzct_51804)(Tcell46746* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46762* s, Tcell46746* c);
N_NIMCALL(void, nodetableput_242415)(Tnodetable190873* t, Tnode190813* key, NI val);
N_NIMCALL(NIM_BOOL, mustrehash_198249)(NI length, NI counter);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, nodetabletestorset_242698)(Tnodetable190873* t, Tnode190813* key, NI val);
static NIM_CONST TY191031 TMP4142 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4143, "ident", 5);
static NIM_CONST TY191031 TMP4144 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4145, "sym", 3);
static NIM_CONST TY191031 TMP4146 = {
0xE0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4147, "intVal", 6);
static NIM_CONST TY191031 TMP4148 = {
0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4149, "floatVal", 8);
static NIM_CONST TY191031 TMP4150 = {
0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4151, "strVal", 6);
static NIM_CONST TY191031 TMP4153 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4154, "sons", 4);
STRING_LITERAL(TMP4160, "data[h].key == nil ", 19);
STRING_LITERAL(TMP4161, "not (t.data[index].key == nil) ", 31);
extern TFrame* frameptr_17042;
extern Tgcheap48616 gch_48644;
extern TNimType NTI190871; /* TNodePairSeq */

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
	result = (NI)((NU32)(h) + (NU32)(val));
	nimln(52, "hashes.nim");
	result = (NI)((NU32)(result) + (NU32)((NI)((NU32)(result) << (NU32)(((NI) 10)))));
	nimln(53, "hashes.nim");
	result = (NI)(result ^ (NI)((NU32)(result) >> (NU32)(((NI) 6))));
	popFrame();
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

N_NIMCALL(NI, hashtree_242027)(Tnode190813* n) {
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
		if (!(((TMP4142[(*n).kind/8] &(1<<((*n).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4143));
		result = HEX21HEX26_131025(result, (*(*n).kindU.S5.ident).h);
	}
	break;
	case ((NU8) 3):
	{
		nimln(24, "treetab.nim");
		if (!(((TMP4144[(*n).kind/8] &(1<<((*n).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4145));
		result = HEX21HEX26_131025(result, (*(*(*n).kindU.S4.sym).name).h);
	}
	break;
	case ((NU8) 5) ... ((NU8) 15):
	{
		nimln(26, "treetab.nim");
		{
			NIM_BOOL LOC11;
			LOC11 = 0;
			if (!(((TMP4146[(*n).kind/8] &(1<<((*n).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4147));
			LOC11 = (IL64(-2147483648) <= (*n).kindU.S1.intval);
			if (!(LOC11)) goto LA12;
			if (!(((TMP4146[(*n).kind/8] &(1<<((*n).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4147));
			LOC11 = ((*n).kindU.S1.intval <= IL64(2147483647));
			LA12: ;
			if (!LOC11) goto LA13;
			nimln(27, "treetab.nim");
			if (!(((TMP4146[(*n).kind/8] &(1<<((*n).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4147));
			result = HEX21HEX26_131025(result, ((NI)chckRange64((*n).kindU.S1.intval, ((NI) (-2147483647 -1)), ((NI) 2147483647))));
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
			if (!(((TMP4148[(*n).kind/8] &(1<<((*n).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4149));
			LOC18 = (-1.0000000000000000e+06 <= (*n).kindU.S2.floatval);
			if (!(LOC18)) goto LA19;
			if (!(((TMP4148[(*n).kind/8] &(1<<((*n).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4149));
			LOC18 = ((*n).kindU.S2.floatval <= 1.0000000000000000e+06);
			LA19: ;
			if (!LOC18) goto LA20;
			nimln(30, "treetab.nim");
			if (!(((TMP4148[(*n).kind/8] &(1<<((*n).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4149));
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
			if (!(((TMP4150[(*n).kind/8] &(1<<((*n).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4151));
			if (!!((*n).kindU.S3.strval == 0)) goto LA25;
			nimln(33, "treetab.nim");
			if (!(((TMP4150[(*n).kind/8] &(1<<((*n).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4151));
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
			NI i_242082;
			NI HEX3Atmp_242089;
			NI LOC30;
			NI TMP4152;
			NI res_242092;
			i_242082 = 0;
			HEX3Atmp_242089 = 0;
			nimln(35, "treetab.nim");
			LOC30 = 0;
			LOC30 = sonslen_193403(n);
			TMP4152 = subInt(LOC30, ((NI) 1));
			HEX3Atmp_242089 = (NI)(TMP4152);
			nimln(1598, "system.nim");
			res_242092 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					NI LOC33;
					NI TMP4155;
					if (!(res_242092 <= HEX3Atmp_242089)) goto LA32;
					nimln(1600, "system.nim");
					i_242082 = res_242092;
					nimln(36, "treetab.nim");
					if (((TMP4153[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4154));
					if ((NU)(i_242082) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
					LOC33 = 0;
					LOC33 = hashtree_242027((*n).kindU.S6.sons->data[i_242082]);
					result = HEX21HEX26_131025(result, LOC33);
					nimln(1614, "system.nim");
					TMP4155 = addInt(res_242092, ((NI) 1));
					res_242092 = (NI)(TMP4155);
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

N_NIMCALL(NIM_BOOL, treesequivalent_242111)(Tnode190813* a, Tnode190813* b) {
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
			if (!(((TMP4144[(*a).kind/8] &(1<<((*a).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4145));
			if (!(((TMP4144[(*b).kind/8] &(1<<((*b).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4145));
			result = ((*(*a).kindU.S4.sym).Sup.id == (*(*b).kindU.S4.sym).Sup.id);
		}
		break;
		case ((NU8) 2):
		{
			nimln(45, "treetab.nim");
			if (!(((TMP4142[(*a).kind/8] &(1<<((*a).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4143));
			if (!(((TMP4142[(*b).kind/8] &(1<<((*b).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4143));
			result = ((*(*a).kindU.S5.ident).Sup.id == (*(*b).kindU.S5.ident).Sup.id);
		}
		break;
		case ((NU8) 5) ... ((NU8) 15):
		{
			nimln(46, "treetab.nim");
			if (!(((TMP4146[(*a).kind/8] &(1<<((*a).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4147));
			if (!(((TMP4146[(*b).kind/8] &(1<<((*b).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4147));
			result = ((*a).kindU.S1.intval == (*b).kindU.S1.intval);
		}
		break;
		case ((NU8) 16) ... ((NU8) 18):
		{
			nimln(47, "treetab.nim");
			if (!(((TMP4148[(*a).kind/8] &(1<<((*a).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4149));
			if (!(((TMP4148[(*b).kind/8] &(1<<((*b).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4149));
			result = ((*a).kindU.S2.floatval == (*b).kindU.S2.floatval);
		}
		break;
		case ((NU8) 20) ... ((NU8) 22):
		{
			nimln(48, "treetab.nim");
			if (!(((TMP4150[(*a).kind/8] &(1<<((*a).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4151));
			if (!(((TMP4150[(*b).kind/8] &(1<<((*b).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4151));
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
				LOC21 = sonslen_193403(a);
				LOC22 = 0;
				LOC22 = sonslen_193403(b);
				if (!(LOC21 == LOC22)) goto LA23;
				{
					NI i_242184;
					NI HEX3Atmp_242188;
					NI LOC26;
					NI TMP4156;
					NI res_242191;
					i_242184 = 0;
					HEX3Atmp_242188 = 0;
					nimln(51, "treetab.nim");
					LOC26 = 0;
					LOC26 = sonslen_193403(a);
					TMP4156 = subInt(LOC26, ((NI) 1));
					HEX3Atmp_242188 = (NI)(TMP4156);
					nimln(1598, "system.nim");
					res_242191 = ((NI) 0);
					{
						nimln(1599, "system.nim");
						while (1) {
							NI TMP4157;
							if (!(res_242191 <= HEX3Atmp_242188)) goto LA28;
							nimln(1600, "system.nim");
							i_242184 = res_242191;
							nimln(52, "treetab.nim");
							{
								NIM_BOOL LOC31;
								if (((TMP4153[(*a).kind/8] &(1<<((*a).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4154));
								if ((NU)(i_242184) >= (NU)((*a).kindU.S6.sons->Sup.len)) raiseIndexError();
								if (((TMP4153[(*b).kind/8] &(1<<((*b).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4154));
								if ((NU)(i_242184) >= (NU)((*b).kindU.S6.sons->Sup.len)) raiseIndexError();
								LOC31 = 0;
								LOC31 = treesequivalent_242111((*a).kindU.S6.sons->data[i_242184], (*b).kindU.S6.sons->data[i_242184]);
								if (!!(LOC31)) goto LA32;
								goto BeforeRet;
							}
							LA32: ;
							nimln(1614, "system.nim");
							TMP4157 = addInt(res_242191, ((NI) 1));
							res_242191 = (NI)(TMP4157);
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
			result = sametypeornil_225108((*a).typ, (*b).typ, 0);
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

static N_INLINE(NI, nexttry_198256)(NI h, NI maxhash) {
	NI result;
	NI TMP4158;
	NI TMP4159;
	nimfr("nextTry", "astalgo.nim")
	result = 0;
	nimln(470, "astalgo.nim");
	TMP4158 = mulInt(((NI) 5), h);
	TMP4159 = addInt((NI)(TMP4158), ((NI) 1));
	result = (NI)((NI)(TMP4159) & maxhash);
	popFrame();
	return result;
}

N_NIMCALL(NI, nodetablerawget_242210)(Tnodetable190873 t, NI k, Tnode190813* key) {
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
				LOC5 = treesequivalent_242111(t.data->data[h].key, key);
				LA6: ;
				if (!LOC5) goto LA7;
				nimln(60, "treetab.nim");
				result = h;
				goto BeforeRet;
			}
			LA7: ;
			nimln(61, "treetab.nim");
			h = nexttry_198256(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA2: ;
	}
	nimln(62, "treetab.nim");
	result = ((NI) -1);
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, nodetableget_242243)(Tnodetable190873 t, Tnode190813* key) {
	NI result;
	NI index;
	NI LOC1;
	nimfr("nodeTableGet", "treetab.nim")
	result = 0;
	nimln(65, "treetab.nim");
	LOC1 = 0;
	LOC1 = hashtree_242027(key);
	index = nodetablerawget_242210(t, LOC1, key);
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
		result = ((NI) (-2147483647 -1));
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

N_NIMCALL(void, nodetablerawinsert_242258)(Tnodepairseq190871** data, NI k, Tnode190813* key, NI val) {
	NI h;
	nimfr("nodeTableRawInsert", "treetab.nim")
	nimln(71, "treetab.nim");
	h = (NI)(k & ((*data) ? ((*data)->Sup.len-1) : -1));
	{
		nimln(72, "treetab.nim");
		while (1) {
			if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
			if (!!(((*data)->data[h].key == NIM_NIL))) goto LA2;
			h = nexttry_198256(h, ((*data) ? ((*data)->Sup.len-1) : -1));
		} LA2: ;
	}
	nimln(73, "treetab.nim");
	{
		if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
		if (!!(((*data)->data[h].key == NIM_NIL))) goto LA5;
		failedassertimpl_87217(((NimStringDesc*) &TMP4160));
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

N_NIMCALL(void, nodetableput_242415)(Tnodetable190873* t, Tnode190813* key, NI val) {
	Tnodepairseq190871* n;
	NI k;
	NI index;
	nimfr("nodeTablePut", "treetab.nim")
	n = 0;
	nimln(80, "treetab.nim");
	k = hashtree_242027(key);
	nimln(81, "treetab.nim");
	index = nodetablerawget_242210((*t), k, key);
	nimln(82, "treetab.nim");
	{
		if (!(((NI) 0) <= index)) goto LA3;
		nimln(83, "treetab.nim");
		{
			if ((NU)(index) >= (NU)((*t).data->Sup.len)) raiseIndexError();
			if (!!(!(((*t).data->data[index].key == NIM_NIL)))) goto LA7;
			failedassertimpl_87217(((NimStringDesc*) &TMP4161));
		}
		LA7: ;
		nimln(84, "treetab.nim");
		if ((NU)(index) >= (NU)((*t).data->Sup.len)) raiseIndexError();
		(*t).data->data[index].val = val;
	}
	goto LA1;
	LA3: ;
	{
		NI TMP4164;
		nimln(86, "treetab.nim");
		{
			NIM_BOOL LOC12;
			NI TMP4162;
			Tnodepairseq190871* LOC22;
			LOC12 = 0;
			LOC12 = mustrehash_198249(((*t).data ? (*t).data->Sup.len : 0), (*t).counter);
			if (!LOC12) goto LA13;
			nimln(87, "treetab.nim");
			TMP4162 = mulInt(((*t).data ? (*t).data->Sup.len : 0), ((NI) 2));
			n = (Tnodepairseq190871*) newSeq((&NTI190871), ((NI)chckRange((NI)(TMP4162), ((NI) 0), ((NI) 2147483647))));
			{
				NI i_242639;
				NI HEX3Atmp_242676;
				NI res_242679;
				i_242639 = 0;
				HEX3Atmp_242676 = 0;
				nimln(88, "treetab.nim");
				HEX3Atmp_242676 = ((*t).data ? ((*t).data->Sup.len-1) : -1);
				nimln(1598, "system.nim");
				res_242679 = ((NI) 0);
				{
					nimln(1599, "system.nim");
					while (1) {
						NI TMP4163;
						if (!(res_242679 <= HEX3Atmp_242676)) goto LA17;
						nimln(1600, "system.nim");
						i_242639 = res_242679;
						nimln(89, "treetab.nim");
						{
							if ((NU)(i_242639) >= (NU)((*t).data->Sup.len)) raiseIndexError();
							if (!!(((*t).data->data[i_242639].key == NIM_NIL))) goto LA20;
							nimln(90, "treetab.nim");
							if ((NU)(i_242639) >= (NU)((*t).data->Sup.len)) raiseIndexError();
							if ((NU)(i_242639) >= (NU)((*t).data->Sup.len)) raiseIndexError();
							if ((NU)(i_242639) >= (NU)((*t).data->Sup.len)) raiseIndexError();
							nodetablerawinsert_242258((&n), (*t).data->data[i_242639].h, (*t).data->data[i_242639].key, (*t).data->data[i_242639].val);
						}
						LA20: ;
						nimln(1614, "system.nim");
						TMP4163 = addInt(res_242679, ((NI) 1));
						res_242679 = (NI)(TMP4163);
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
		nodetablerawinsert_242258((&(*t).data), k, key, val);
		nimln(93, "treetab.nim");
		TMP4164 = addInt((*t).counter, ((NI) 1));
		(*t).counter = (NI)(TMP4164);
	}
	LA1: ;
	popFrame();
}

N_NIMCALL(NI, nodetabletestorset_242698)(Tnodetable190873* t, Tnode190813* key, NI val) {
	NI result;
	Tnodepairseq190871* n;
	NI k;
	NI index;
	nimfr("nodeTableTestOrSet", "treetab.nim")
	result = 0;
	n = 0;
	nimln(97, "treetab.nim");
	k = hashtree_242027(key);
	nimln(98, "treetab.nim");
	index = nodetablerawget_242210((*t), k, key);
	nimln(99, "treetab.nim");
	{
		if (!(((NI) 0) <= index)) goto LA3;
		nimln(100, "treetab.nim");
		{
			if ((NU)(index) >= (NU)((*t).data->Sup.len)) raiseIndexError();
			if (!!(!(((*t).data->data[index].key == NIM_NIL)))) goto LA7;
			failedassertimpl_87217(((NimStringDesc*) &TMP4161));
		}
		LA7: ;
		nimln(101, "treetab.nim");
		if ((NU)(index) >= (NU)((*t).data->Sup.len)) raiseIndexError();
		result = (*t).data->data[index].val;
	}
	goto LA1;
	LA3: ;
	{
		NI TMP4167;
		nimln(103, "treetab.nim");
		{
			NIM_BOOL LOC12;
			NI TMP4165;
			Tnodepairseq190871* LOC22;
			LOC12 = 0;
			LOC12 = mustrehash_198249(((*t).data ? (*t).data->Sup.len : 0), (*t).counter);
			if (!LOC12) goto LA13;
			nimln(104, "treetab.nim");
			TMP4165 = mulInt(((*t).data ? (*t).data->Sup.len : 0), ((NI) 2));
			n = (Tnodepairseq190871*) newSeq((&NTI190871), ((NI)chckRange((NI)(TMP4165), ((NI) 0), ((NI) 2147483647))));
			{
				NI i_242839;
				NI HEX3Atmp_242876;
				NI res_242879;
				i_242839 = 0;
				HEX3Atmp_242876 = 0;
				nimln(105, "treetab.nim");
				HEX3Atmp_242876 = ((*t).data ? ((*t).data->Sup.len-1) : -1);
				nimln(1598, "system.nim");
				res_242879 = ((NI) 0);
				{
					nimln(1599, "system.nim");
					while (1) {
						NI TMP4166;
						if (!(res_242879 <= HEX3Atmp_242876)) goto LA17;
						nimln(1600, "system.nim");
						i_242839 = res_242879;
						nimln(106, "treetab.nim");
						{
							if ((NU)(i_242839) >= (NU)((*t).data->Sup.len)) raiseIndexError();
							if (!!(((*t).data->data[i_242839].key == NIM_NIL))) goto LA20;
							nimln(107, "treetab.nim");
							if ((NU)(i_242839) >= (NU)((*t).data->Sup.len)) raiseIndexError();
							if ((NU)(i_242839) >= (NU)((*t).data->Sup.len)) raiseIndexError();
							if ((NU)(i_242839) >= (NU)((*t).data->Sup.len)) raiseIndexError();
							nodetablerawinsert_242258((&n), (*t).data->data[i_242839].h, (*t).data->data[i_242839].key, (*t).data->data[i_242839].val);
						}
						LA20: ;
						nimln(1614, "system.nim");
						TMP4166 = addInt(res_242879, ((NI) 1));
						res_242879 = (NI)(TMP4166);
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
		nodetablerawinsert_242258((&(*t).data), k, key, val);
		nimln(110, "treetab.nim");
		result = val;
		nimln(111, "treetab.nim");
		TMP4167 = addInt((*t).counter, ((NI) 1));
		(*t).counter = (NI)(TMP4167);
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

