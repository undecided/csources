/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Tnode192813 Tnode192813;
typedef struct Ttype192849 Ttype192849;
typedef struct Tlineinfo164338 Tlineinfo164338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym192843 Tsym192843;
typedef struct Tident168021 Tident168021;
typedef struct Tnodeseq192807 Tnodeseq192807;
typedef struct Tinfocpu160479 Tinfocpu160479;
typedef struct Tidtable192861 Tidtable192861;
typedef struct Tidpairseq192859 Tidpairseq192859;
typedef struct Tcell46747 Tcell46747;
typedef struct TNimType TNimType;
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
typedef struct Tidobj168015 Tidobj168015;
typedef struct Tidpair192857 Tidpair192857;
typedef struct TNimObject TNimObject;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq192845 Ttypeseq192845;
typedef struct Tloc192827 Tloc192827;
typedef struct Ropeobj162009 Ropeobj162009;
typedef struct Tscope192837 Tscope192837;
typedef struct TY192944 TY192944;
typedef struct Tstrtable192817 Tstrtable192817;
typedef struct Tsymseq192815 Tsymseq192815;
typedef struct Tlib192831 Tlib192831;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct Tinstantiation192833 Tinstantiation192833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TY192933 TY192933;
struct  Tlineinfo164338  {
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
struct Tinfocpu160479 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef Tinfocpu160479 TY160497[14];
struct  Tidtable192861  {
NI counter;
Tidpairseq192859* data;
};
typedef Tidtable192861 TY456272[62];
typedef Ttype192849* TY240060[62];
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
struct  Tidpair192857  {
Tidobj168015* key;
TNimObject* val;
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
struct  Tidobj168015  {
  TNimObject Sup;
NI id;
};
struct  Tloc192827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype192849* t;
Ropeobj162009* r;
Ropeobj162009* heaproot;
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
struct  Tstrtable192817  {
NI counter;
Tsymseq192815* data;
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
struct  Ropeobj162009  {
  TNimObject Sup;
Ropeobj162009* left;
Ropeobj162009* right;
NI length;
NimStringDesc* data;
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
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
struct  Tinstantiation192833  {
Tsym192843* sym;
Ttypeseq192845* concretetypes;
TY192933* usedby;
};
struct Tnodeseq192807 {
  TGenericSeq Sup;
  Tnode192813* data[SEQ_DECL_SIZE];
};
struct Tidpairseq192859 {
  TGenericSeq Sup;
  Tidpair192857 data[SEQ_DECL_SIZE];
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
N_NIMCALL(Tnode192813*, getpragmastmt_456017)(Tnode192813* n, NU16 w);
static N_INLINE(NI, len_193097)(Tnode192813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(Tnode192813*, HEX5BHEX5D_193244)(Tnode192813* n, NI i);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NU16, whichpragma_221673)(Tnode192813* n);
N_NIMCALL(NIM_BOOL, stmtscontainpragma_456123)(Tnode192813* n, NU16 w);
N_NIMCALL(NI64, hashstring_456146)(NimStringDesc* s);
N_NIMCALL(void, inittypetables_456285)(void);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(void, initidtable_196057)(Tidtable192861* x);
N_NIMCALL(void, resetcaches_456448)(void);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr);
static N_INLINE(void, rtladdzct_51804)(Tcell46747* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46763* s, Tcell46747* c);
N_NIMCALL(Ttype192849*, slowsearch_456601)(Ttype192849* key, NU8 k);
N_NIMCALL(NIM_BOOL, idtablehasobjectaskey_200205)(Tidtable192861 t, Tidobj168015* key);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(NIM_BOOL, samebackendtype_229024)(Ttype192849* x, Ttype192849* y);
N_NIMCALL(void, idtableput_200196)(Tidtable192861* t, Tidobj168015* key, TNimObject* val);
N_NIMCALL(Ttype192849*, getuniquetype_456656)(Ttype192849* key);
N_NIMCALL(void, internalerror_166218)(NimStringDesc* errmsg);
N_NIMCALL(Ttype192849*, lastson_195442)(Ttype192849* n);
N_NIMCALL(TNimObject*, idtableget_200182)(Tidtable192861 t, Tidobj168015* key);
N_NIMCALL(TNimObject*, tablegettype_456804)(Tidtable192861 tab, Ttype192849* key);
N_NIMCALL(NIM_BOOL, sametype_227092)(Ttype192849* a, Ttype192849* b, NU8 flags);
N_NIMCALL(NimStringDesc*, makesinglelinecstring_456870)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, tocchar_164439)(NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, failedassertimpl_87017)(NimStringDesc* msg);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, mangle_456896)(NimStringDesc* name);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_NIMCALL(NIM_CHAR, nsuToLowerChar)(NIM_CHAR c);
N_NIMCALL(Ropeobj162009*, makellvmstring_456951)(NimStringDesc* s);
static N_INLINE(NI, modInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NIMCALL(void, add_162534)(Ropeobj162009** a, Ropeobj162009* b);
N_NIMCALL(Ropeobj162009*, rope_162320)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
static NIM_CONST TY193031 TMP8899 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP8900, "sons", 4);
extern NIM_CONST TY160497 Cpu_160496;
STRING_LITERAL(TMP8910, "getUniqueType", 13);
STRING_LITERAL(TMP8913, "\"", 1);
STRING_LITERAL(TMP8915, "len(a) == L string modified while iterating over it", 51);
STRING_LITERAL(TMP8916, "N", 1);
STRING_LITERAL(TMP8917, "HEX", 3);
STRING_LITERAL(TMP8920, "c\"", 2);
STRING_LITERAL(TMP8925, "\\00\"", 4);
extern TFrame* frameptr_17042;
extern NU8 targetcpu_160600;
TY456272 gtypetable_456275;
TY240060 gcanonicaltypes_456279;
extern Tgcheap48616 gch_48644;
extern TNimType NTI192849; /* TType */

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

static N_INLINE(NI, len_193097)(Tnode192813* n) {
	NI result;
	nimfr("len", "ast.nim")
	result = 0;
	nimln(934, "ast.nim");
	{
		if (((TMP8899[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP8900));
		if (!(*n).kindU.S6.sons == 0) goto LA3;
		result = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		nimln(935, "ast.nim");
		if (((TMP8899[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP8900));
		result = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
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

static N_INLINE(Tnode192813*, HEX5BHEX5D_193244)(Tnode192813* n, NI i) {
	Tnode192813* result;
	nimfr("[]", "ast.nim")
	result = 0;
	nimln(948, "ast.nim");
	if (((TMP8899[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP8900));
	if ((NU)(i) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
	result = (*n).kindU.S6.sons->data[i];
	popFrame();
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

N_NIMCALL(Tnode192813*, getpragmastmt_456017)(Tnode192813* n, NU16 w) {
	Tnode192813* result;
	nimfr("getPragmaStmt", "ccgutils.nim")
{	result = 0;
	nimln(17, "ccgutils.nim");
	switch ((*n).kind) {
	case ((NU8) 115):
	{
		{
			NI i_456041;
			NI HEX3Atmp_456084;
			NI LOC3;
			NI res_456087;
			i_456041 = 0;
			HEX3Atmp_456084 = 0;
			nimln(19, "ccgutils.nim");
			LOC3 = 0;
			LOC3 = len_193097(n);
			HEX3Atmp_456084 = subInt(LOC3, 1);
			nimln(1598, "system.nim");
			res_456087 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					Tnode192813* LOC6;
					NI TMP8901;
					if (!(res_456087 <= HEX3Atmp_456084)) goto LA5;
					nimln(1600, "system.nim");
					i_456041 = res_456087;
					nimln(20, "ccgutils.nim");
					LOC6 = 0;
					LOC6 = HEX5BHEX5D_193244(n, i_456041);
					result = getpragmastmt_456017(LOC6, w);
					nimln(21, "ccgutils.nim");
					{
						if (!!((result == NIM_NIL))) goto LA9;
						goto LA2;
					}
					LA9: ;
					nimln(1619, "system.nim");
					TMP8901 = addInt(res_456087, ((NI) 1));
					res_456087 = (NI)(TMP8901);
				} LA5: ;
			}
		} LA2: ;
	}
	break;
	case ((NU8) 90):
	{
		{
			NI i_456073;
			NI HEX3Atmp_456092;
			NI LOC13;
			NI res_456095;
			i_456073 = 0;
			HEX3Atmp_456092 = 0;
			nimln(23, "ccgutils.nim");
			LOC13 = 0;
			LOC13 = len_193097(n);
			HEX3Atmp_456092 = subInt(LOC13, 1);
			nimln(1598, "system.nim");
			res_456095 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					NI TMP8902;
					if (!(res_456095 <= HEX3Atmp_456092)) goto LA15;
					nimln(1600, "system.nim");
					i_456073 = res_456095;
					nimln(24, "ccgutils.nim");
					{
						Tnode192813* LOC18;
						NU16 LOC19;
						LOC18 = 0;
						LOC18 = HEX5BHEX5D_193244(n, i_456073);
						LOC19 = 0;
						LOC19 = whichpragma_221673(LOC18);
						if (!(LOC19 == w)) goto LA20;
						result = HEX5BHEX5D_193244(n, i_456073);
						goto BeforeRet;
					}
					LA20: ;
					nimln(1619, "system.nim");
					TMP8902 = addInt(res_456095, ((NI) 1));
					res_456095 = (NI)(TMP8902);
				} LA15: ;
			}
		}
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, stmtscontainpragma_456123)(Tnode192813* n, NU16 w) {
	NIM_BOOL result;
	Tnode192813* LOC1;
	nimfr("stmtsContainPragma", "ccgutils.nim")
	result = 0;
	nimln(28, "ccgutils.nim");
	LOC1 = 0;
	LOC1 = getpragmastmt_456017(n, w);
	result = !((LOC1 == NIM_NIL));
	popFrame();
	return result;
}

N_NIMCALL(NI64, hashstring_456146)(NimStringDesc* s) {
	NI64 result;
	nimfr("hashString", "ccgutils.nim")
	result = 0;
	nimln(32, "ccgutils.nim");
	{
		NI64 b;
		if (targetcpu_160600 < 1 || targetcpu_160600 > 14) raiseIndexError();
		if (!(Cpu_160496[(targetcpu_160600)- 1].Field4 == ((NI) 64))) goto LA3;
		nimln(35, "ccgutils.nim");
		b = IL64(0);
		{
			NI i_456163;
			NI HEX3Atmp_456232;
			NI TMP8903;
			NI res_456235;
			i_456163 = 0;
			HEX3Atmp_456232 = 0;
			nimln(36, "ccgutils.nim");
			TMP8903 = subInt((s ? s->Sup.len : 0), ((NI) 1));
			HEX3Atmp_456232 = (NI)(TMP8903);
			nimln(1598, "system.nim");
			res_456235 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					NI TMP8904;
					if (!(res_456235 <= HEX3Atmp_456232)) goto LA7;
					nimln(1600, "system.nim");
					i_456163 = res_456235;
					nimln(37, "ccgutils.nim");
					if ((NU)(i_456163) > (NU)(s->Sup.len)) raiseIndexError();
					b = (NI64)((NU64)(b) + (NU64)(((NI64) (((NU8)(s->data[i_456163]))))));
					nimln(38, "ccgutils.nim");
					b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(IL64(10)))));
					nimln(39, "ccgutils.nim");
					b = (NI64)(b ^ (NI64)((NU64)(b) >> (NU64)(IL64(6))));
					nimln(1614, "system.nim");
					TMP8904 = addInt(res_456235, ((NI) 1));
					res_456235 = (NI)(TMP8904);
				} LA7: ;
			}
		}
		nimln(40, "ccgutils.nim");
		b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(IL64(3)))));
		nimln(41, "ccgutils.nim");
		b = (NI64)(b ^ (NI64)((NU64)(b) >> (NU64)(IL64(11))));
		nimln(42, "ccgutils.nim");
		b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(IL64(15)))));
		nimln(43, "ccgutils.nim");
		result = b;
	}
	goto LA1;
	LA3: ;
	{
		NI32 a;
		nimln(45, "ccgutils.nim");
		a = ((NI32) 0);
		{
			NI i_456185;
			NI HEX3Atmp_456241;
			NI TMP8905;
			NI res_456244;
			i_456185 = 0;
			HEX3Atmp_456241 = 0;
			nimln(46, "ccgutils.nim");
			TMP8905 = subInt((s ? s->Sup.len : 0), ((NI) 1));
			HEX3Atmp_456241 = (NI)(TMP8905);
			nimln(1598, "system.nim");
			res_456244 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					NI TMP8906;
					if (!(res_456244 <= HEX3Atmp_456241)) goto LA11;
					nimln(1600, "system.nim");
					i_456185 = res_456244;
					nimln(47, "ccgutils.nim");
					if ((NU)(i_456185) > (NU)(s->Sup.len)) raiseIndexError();
					a = (NI32)((NU32)(a) + (NU32)(((NI32) (((NU8)(s->data[i_456185]))))));
					nimln(48, "ccgutils.nim");
					a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 10)))));
					nimln(49, "ccgutils.nim");
					a = (NI32)(a ^ (NI32)((NU32)(a) >> (NU32)(((NI32) 6))));
					nimln(1614, "system.nim");
					TMP8906 = addInt(res_456244, ((NI) 1));
					res_456244 = (NI)(TMP8906);
				} LA11: ;
			}
		}
		nimln(50, "ccgutils.nim");
		a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 3)))));
		nimln(51, "ccgutils.nim");
		a = (NI32)(a ^ (NI32)((NU32)(a) >> (NU32)(((NI32) 11))));
		nimln(52, "ccgutils.nim");
		a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 15)))));
		nimln(53, "ccgutils.nim");
		result = ((NI64) (a));
	}
	LA1: ;
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

N_NIMCALL(void, inittypetables_456285)(void) {
	nimfr("initTypeTables", "ccgutils.nim")
	{
		NU8 i_456423;
		NI res_456430;
		i_456423 = 0;
		nimln(1598, "system.nim");
		res_456430 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP8907;
				if (!(res_456430 <= ((NI) 61))) goto LA3;
				nimln(1600, "system.nim");
				i_456423 = ((NU8)chckRange(res_456430, ((NU8) 0), ((NU8) 61)));
				nimln(60, "ccgutils.nim");
				initidtable_196057((&gtypetable_456275[(i_456423)- 0]));
				nimln(1614, "system.nim");
				TMP8907 = addInt(res_456430, ((NI) 1));
				res_456430 = (NI)(TMP8907);
			} LA3: ;
		}
	}
	popFrame();
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

N_NIMCALL(void, resetcaches_456448)(void) {
	nimfr("resetCaches", "ccgutils.nim")
	nimln(64, "ccgutils.nim");
	inittypetables_456285();
	{
		NU8 i_456460;
		NI res_456464;
		i_456460 = 0;
		nimln(1598, "system.nim");
		res_456464 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP8908;
				if (!(res_456464 <= ((NI) 61))) goto LA3;
				nimln(1600, "system.nim");
				i_456460 = ((NU8)chckRange(res_456464, ((NU8) 0), ((NU8) 61)));
				nimln(66, "ccgutils.nim");
				asgnRefNoCycle((void**) (&gcanonicaltypes_456279[(i_456460)- 0]), NIM_NIL);
				nimln(1619, "system.nim");
				TMP8908 = addInt(res_456464, ((NI) 1));
				res_456464 = (NI)(TMP8908);
			} LA3: ;
		}
	}
	popFrame();
}

N_NIMCALL(Ttype192849*, slowsearch_456601)(Ttype192849* key, NU8 k) {
	Ttype192849* result;
	Tidobj168015* LOC16;
	TNimObject* LOC17;
	nimfr("slowSearch", "ccgutils.nim")
{	result = 0;
	nimln(78, "ccgutils.nim");
	{
		Tidobj168015* LOC3;
		NIM_BOOL LOC4;
		LOC3 = 0;
		LOC3 = &key->Sup;
		LOC4 = 0;
		LOC4 = idtablehasobjectaskey_200205(gtypetable_456275[(k)- 0], LOC3);
		if (!LOC4) goto LA5;
		result = key;
		goto BeforeRet;
	}
	LA5: ;
	{
		NI h_456618;
		NI HEX3Atmp_456634;
		NI res_456637;
		h_456618 = 0;
		HEX3Atmp_456634 = 0;
		nimln(79, "ccgutils.nim");
		HEX3Atmp_456634 = (gtypetable_456275[(k)- 0].data ? (gtypetable_456275[(k)- 0].data->Sup.len-1) : -1);
		nimln(1598, "system.nim");
		res_456637 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				Ttype192849* t;
				NI TMP8909;
				if (!(res_456637 <= HEX3Atmp_456634)) goto LA9;
				nimln(1600, "system.nim");
				h_456618 = res_456637;
				nimln(80, "ccgutils.nim");
				if ((NU)(h_456618) >= (NU)(gtypetable_456275[(k)- 0].data->Sup.len)) raiseIndexError();
				if (gtypetable_456275[(k)- 0].data->data[h_456618].key) chckObj((*gtypetable_456275[(k)- 0].data->data[h_456618].key).Sup.m_type, (&NTI192849));
				t = ((Ttype192849*) (gtypetable_456275[(k)- 0].data->data[h_456618].key));
				nimln(81, "ccgutils.nim");
				{
					NIM_BOOL LOC12;
					LOC12 = 0;
					LOC12 = !((t == NIM_NIL));
					if (!(LOC12)) goto LA13;
					LOC12 = samebackendtype_229024(t, key);
					LA13: ;
					if (!LOC12) goto LA14;
					nimln(82, "ccgutils.nim");
					result = t;
					goto BeforeRet;
				}
				LA14: ;
				nimln(1614, "system.nim");
				TMP8909 = addInt(res_456637, ((NI) 1));
				res_456637 = (NI)(TMP8909);
			} LA9: ;
		}
	}
	nimln(83, "ccgutils.nim");
	LOC16 = 0;
	LOC16 = &key->Sup;
	LOC17 = 0;
	LOC17 = &key->Sup.Sup;
	idtableput_200196((&gtypetable_456275[(k)- 0]), LOC16, LOC17);
	nimln(84, "ccgutils.nim");
	result = key;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(Ttype192849*, getuniquetype_456656)(Ttype192849* key) {
	Ttype192849* result;
	NU8 k;
	nimfr("getUniqueType", "ccgutils.nim")
{	result = 0;
	nimln(88, "ccgutils.nim");
	{
		if (!(key == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	nimln(89, "ccgutils.nim");
	k = (*key).kind;
	nimln(90, "ccgutils.nim");
	switch (k) {
	case ((NU8) 1):
	case ((NU8) 2):
	case ((NU8) 31) ... ((NU8) 44):
	{
		nimln(94, "ccgutils.nim");
		result = key;
	}
	break;
	case ((NU8) 3):
	case ((NU8) 5):
	case ((NU8) 6):
	case ((NU8) 7):
	case ((NU8) 26):
	case ((NU8) 28):
	case ((NU8) 29):
	case ((NU8) 0):
	case ((NU8) 45):
	{
		nimln(97, "ccgutils.nim");
		result = gcanonicaltypes_456279[(k)- 0];
		nimln(98, "ccgutils.nim");
		{
			if (!(result == NIM_NIL)) goto LA9;
			nimln(99, "ccgutils.nim");
			asgnRefNoCycle((void**) (&gcanonicaltypes_456279[(k)- 0]), key);
			nimln(100, "ccgutils.nim");
			result = key;
		}
		LA9: ;
	}
	break;
	case ((NU8) 8):
	case ((NU8) 51):
	case ((NU8) 12):
	case ((NU8) 60):
	case ((NU8) 61):
	case ((NU8) 54):
	case ((NU8) 52):
	case ((NU8) 53):
	case ((NU8) 55):
	case ((NU8) 56):
	case ((NU8) 57):
	case ((NU8) 58):
	{
		nimln(102, "ccgutils.nim");
		internalerror_166218(((NimStringDesc*) &TMP8910));
	}
	break;
	case ((NU8) 13):
	{
		nimln(104, "ccgutils.nim");
		{
			if (!!(((*key).deepcopy == NIM_NIL))) goto LA15;
			result = key;
		}
		goto LA13;
		LA15: ;
		{
			Ttype192849* LOC18;
			nimln(105, "ccgutils.nim");
			LOC18 = 0;
			LOC18 = lastson_195442(key);
			result = getuniquetype_456656(LOC18);
		}
		LA13: ;
	}
	break;
	case ((NU8) 11):
	case ((NU8) 15):
	case ((NU8) 47):
	case ((NU8) 46):
	case ((NU8) 49):
	case ((NU8) 59):
	{
		Ttype192849* LOC20;
		nimln(107, "ccgutils.nim");
		LOC20 = 0;
		LOC20 = lastson_195442(key);
		result = getuniquetype_456656(LOC20);
	}
	break;
	case ((NU8) 21):
	case ((NU8) 22):
	case ((NU8) 23):
	{
		Ttype192849* elemtype;
		nimln(113, "ccgutils.nim");
		elemtype = lastson_195442(key);
		nimln(114, "ccgutils.nim");
		{
			if (!((IL64(35182224605190) &(IL64(1)<<(((*elemtype).kind)&IL64(63))))!=0)) goto LA24;
			nimln(117, "ccgutils.nim");
			result = key;
		}
		goto LA22;
		LA24: ;
		{
			nimln(119, "ccgutils.nim");
			result = slowsearch_456601(key, k);
		}
		LA22: ;
	}
	break;
	case ((NU8) 4):
	case ((NU8) 9):
	case ((NU8) 10):
	case ((NU8) 27):
	case ((NU8) 16):
	case ((NU8) 19):
	case ((NU8) 20):
	case ((NU8) 18):
	case ((NU8) 24):
	case ((NU8) 30):
	case ((NU8) 48):
	case ((NU8) 50):
	{
		nimln(125, "ccgutils.nim");
		result = slowsearch_456601(key, k);
	}
	break;
	case ((NU8) 17):
	{
		nimln(127, "ccgutils.nim");
		{
			Tidobj168015* LOC33;
			TNimObject* LOC34;
			if (!!((((*key).flags &(1<<((((NU8) 8))&31)))!=0))) goto LA31;
			nimln(129, "ccgutils.nim");
			LOC33 = 0;
			LOC33 = &key->Sup;
			LOC34 = 0;
			LOC34 = idtableget_200182(gtypetable_456275[(k)- 0], LOC33);
			if (LOC34) chckObj((*LOC34).m_type, (&NTI192849));
			result = ((Ttype192849*) (LOC34));
			nimln(130, "ccgutils.nim");
			{
				Tidobj168015* LOC39;
				TNimObject* LOC40;
				if (!(result == NIM_NIL)) goto LA37;
				nimln(131, "ccgutils.nim");
				LOC39 = 0;
				LOC39 = &key->Sup;
				LOC40 = 0;
				LOC40 = &key->Sup.Sup;
				idtableput_200196((&gtypetable_456275[(k)- 0]), LOC39, LOC40);
				nimln(132, "ccgutils.nim");
				result = key;
			}
			LA37: ;
		}
		goto LA29;
		LA31: ;
		{
			Tidobj168015* LOC57;
			TNimObject* LOC58;
			nimln(135, "ccgutils.nim");
			{
				Tidobj168015* LOC44;
				NIM_BOOL LOC45;
				LOC44 = 0;
				LOC44 = &key->Sup;
				LOC45 = 0;
				LOC45 = idtablehasobjectaskey_200205(gtypetable_456275[(k)- 0], LOC44);
				if (!LOC45) goto LA46;
				result = key;
				goto BeforeRet;
			}
			LA46: ;
			{
				NI h_456744;
				NI HEX3Atmp_456782;
				NI res_456785;
				h_456744 = 0;
				HEX3Atmp_456782 = 0;
				nimln(136, "ccgutils.nim");
				HEX3Atmp_456782 = (gtypetable_456275[(k)- 0].data ? (gtypetable_456275[(k)- 0].data->Sup.len-1) : -1);
				nimln(1598, "system.nim");
				res_456785 = ((NI) 0);
				{
					nimln(1599, "system.nim");
					while (1) {
						Ttype192849* t;
						NI TMP8911;
						if (!(res_456785 <= HEX3Atmp_456782)) goto LA50;
						nimln(1600, "system.nim");
						h_456744 = res_456785;
						nimln(137, "ccgutils.nim");
						if ((NU)(h_456744) >= (NU)(gtypetable_456275[(k)- 0].data->Sup.len)) raiseIndexError();
						if (gtypetable_456275[(k)- 0].data->data[h_456744].key) chckObj((*gtypetable_456275[(k)- 0].data->data[h_456744].key).Sup.m_type, (&NTI192849));
						t = ((Ttype192849*) (gtypetable_456275[(k)- 0].data->data[h_456744].key));
						nimln(138, "ccgutils.nim");
						{
							NIM_BOOL LOC53;
							LOC53 = 0;
							LOC53 = !((t == NIM_NIL));
							if (!(LOC53)) goto LA54;
							LOC53 = samebackendtype_229024(t, key);
							LA54: ;
							if (!LOC53) goto LA55;
							nimln(139, "ccgutils.nim");
							result = t;
							goto BeforeRet;
						}
						LA55: ;
						nimln(1614, "system.nim");
						TMP8911 = addInt(res_456785, ((NI) 1));
						res_456785 = (NI)(TMP8911);
					} LA50: ;
				}
			}
			nimln(140, "ccgutils.nim");
			LOC57 = 0;
			LOC57 = &key->Sup;
			LOC58 = 0;
			LOC58 = &key->Sup.Sup;
			idtableput_200196((&gtypetable_456275[(k)- 0]), LOC57, LOC58);
			nimln(141, "ccgutils.nim");
			result = key;
		}
		LA29: ;
	}
	break;
	case ((NU8) 14):
	{
		Tidobj168015* LOC60;
		TNimObject* LOC61;
		nimln(143, "ccgutils.nim");
		LOC60 = 0;
		LOC60 = &key->Sup;
		LOC61 = 0;
		LOC61 = idtableget_200182(gtypetable_456275[(k)- 0], LOC60);
		if (LOC61) chckObj((*LOC61).m_type, (&NTI192849));
		result = ((Ttype192849*) (LOC61));
		nimln(144, "ccgutils.nim");
		{
			Tidobj168015* LOC66;
			TNimObject* LOC67;
			if (!(result == NIM_NIL)) goto LA64;
			nimln(145, "ccgutils.nim");
			LOC66 = 0;
			LOC66 = &key->Sup;
			LOC67 = 0;
			LOC67 = &key->Sup.Sup;
			idtableput_200196((&gtypetable_456275[(k)- 0]), LOC66, LOC67);
			nimln(146, "ccgutils.nim");
			result = key;
		}
		LA64: ;
	}
	break;
	case ((NU8) 25):
	{
		nimln(148, "ccgutils.nim");
		{
			if (!!(((*key).callconv == ((NU8) 8)))) goto LA71;
			nimln(149, "ccgutils.nim");
			result = key;
		}
		goto LA69;
		LA71: ;
		{
			nimln(152, "ccgutils.nim");
			result = slowsearch_456601(key, k);
		}
		LA69: ;
	}
	break;
	}
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(TNimObject*, tablegettype_456804)(Tidtable192861 tab, Ttype192849* key) {
	TNimObject* result;
	Tidobj168015* LOC1;
	nimfr("tableGetType", "ccgutils.nim")
{	result = 0;
	nimln(156, "ccgutils.nim");
	LOC1 = 0;
	LOC1 = &key->Sup;
	result = idtableget_200182(tab, LOC1);
	nimln(157, "ccgutils.nim");
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = (result == NIM_NIL);
		if (!(LOC4)) goto LA5;
		LOC4 = (((NI) 0) < tab.counter);
		LA5: ;
		if (!LOC4) goto LA6;
		{
			NI h_456833;
			NI HEX3Atmp_456848;
			NI res_456851;
			h_456833 = 0;
			HEX3Atmp_456848 = 0;
			nimln(160, "ccgutils.nim");
			HEX3Atmp_456848 = (tab.data ? (tab.data->Sup.len-1) : -1);
			nimln(1598, "system.nim");
			res_456851 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					Ttype192849* t;
					NI TMP8912;
					if (!(res_456851 <= HEX3Atmp_456848)) goto LA10;
					nimln(1600, "system.nim");
					h_456833 = res_456851;
					nimln(161, "ccgutils.nim");
					if ((NU)(h_456833) >= (NU)(tab.data->Sup.len)) raiseIndexError();
					if (tab.data->data[h_456833].key) chckObj((*tab.data->data[h_456833].key).Sup.m_type, (&NTI192849));
					t = ((Ttype192849*) (tab.data->data[h_456833].key));
					nimln(162, "ccgutils.nim");
					{
						if (!!((t == NIM_NIL))) goto LA13;
						nimln(163, "ccgutils.nim");
						{
							NIM_BOOL LOC17;
							LOC17 = 0;
							LOC17 = sametype_227092(t, key, 0);
							if (!LOC17) goto LA18;
							nimln(164, "ccgutils.nim");
							if ((NU)(h_456833) >= (NU)(tab.data->Sup.len)) raiseIndexError();
							result = tab.data->data[h_456833].val;
							goto BeforeRet;
						}
						LA18: ;
					}
					LA13: ;
					nimln(1614, "system.nim");
					TMP8912 = addInt(res_456851, ((NI) 1));
					res_456851 = (NI)(TMP8912);
				} LA10: ;
			}
		}
	}
	LA6: ;
	}BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, makesinglelinecstring_456870)(NimStringDesc* s) {
	NimStringDesc* result;
	nimfr("makeSingleLineCString", "ccgutils.nim")
	result = 0;
	nimln(167, "ccgutils.nim");
	result = copyString(((NimStringDesc*) &TMP8913));
	{
		NIM_CHAR c_456874;
		NI i_456878;
		NI L_456880;
		c_456874 = 0;
		nimln(3102, "system.nim");
		i_456878 = ((NI) 0);
		nimln(3103, "system.nim");
		L_456880 = (s ? s->Sup.len : 0);
		{
			nimln(3104, "system.nim");
			while (1) {
				NimStringDesc* LOC4;
				NI TMP8914;
				if (!(i_456878 < L_456880)) goto LA3;
				nimln(3105, "system.nim");
				if ((NU)(i_456878) > (NU)(s->Sup.len)) raiseIndexError();
				c_456874 = s->data[i_456878];
				nimln(169, "ccgutils.nim");
				LOC4 = 0;
				LOC4 = tocchar_164439(c_456874);
				result = resizeString(result, LOC4->Sup.len + 0);
appendString(result, LOC4);
				nimln(3106, "system.nim");
				TMP8914 = addInt(i_456878, ((NI) 1));
				i_456878 = (NI)(TMP8914);
				nimln(3107, "system.nim");
				{
					if (!!(((s ? s->Sup.len : 0) == L_456880))) goto LA7;
					failedassertimpl_87017(((NimStringDesc*) &TMP8915));
				}
				LA7: ;
			} LA3: ;
		}
	}
	nimln(170, "ccgutils.nim");
	result = addChar(result, 34);
	popFrame();
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(NimStringDesc*, mangle_456896)(NimStringDesc* name) {
	NimStringDesc* result;
	nimfr("mangle", "ccgutils.nim")
	result = 0;
	nimln(176, "ccgutils.nim");
	result = rawNewString(((NI)chckRange((name ? name->Sup.len : 0), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	nimln(177, "ccgutils.nim");
	if ((NU)(((NI) 0)) > (NU)(name->Sup.len)) raiseIndexError();
	switch (((NU8)(name->data[((NI) 0)]))) {
	case 65 ... 90:
	case 97 ... 122:
	{
		nimln(179, "ccgutils.nim");
		if ((NU)(((NI) 0)) > (NU)(name->Sup.len)) raiseIndexError();
		result = addChar(result, name->data[((NI) 0)]);
	}
	break;
	case 48 ... 57:
	{
		NimStringDesc* LOC3;
		nimln(181, "ccgutils.nim");
		LOC3 = 0;
		if ((NU)(((NI) 0)) > (NU)(name->Sup.len)) raiseIndexError();
		LOC3 = rawNewString(2);
appendString(LOC3, ((NimStringDesc*) &TMP8916));
appendChar(LOC3, name->data[((NI) 0)]);
		result = resizeString(result, LOC3->Sup.len + 0);
appendString(result, LOC3);
	}
	break;
	default:
	{
		NimStringDesc* LOC5;
		NimStringDesc* LOC6;
		nimln(183, "ccgutils.nim");
		LOC5 = 0;
		if ((NU)(((NI) 0)) > (NU)(name->Sup.len)) raiseIndexError();
		LOC6 = 0;
		LOC6 = nsuToHex(((NI64) (((NU8)(name->data[((NI) 0)])))), ((NI) 2));
		LOC5 = rawNewString(LOC6->Sup.len + 3);
appendString(LOC5, ((NimStringDesc*) &TMP8917));
appendString(LOC5, LOC6);
		result = LOC5;
	}
	break;
	}
	{
		NI i_456918;
		NI HEX3Atmp_456929;
		NI TMP8918;
		NI res_456932;
		i_456918 = 0;
		HEX3Atmp_456929 = 0;
		nimln(184, "ccgutils.nim");
		TMP8918 = subInt((name ? name->Sup.len : 0), ((NI) 1));
		HEX3Atmp_456929 = (NI)(TMP8918);
		nimln(1598, "system.nim");
		res_456932 = ((NI) 1);
		{
			nimln(1599, "system.nim");
			while (1) {
				NIM_CHAR c;
				NI TMP8919;
				if (!(res_456932 <= HEX3Atmp_456929)) goto LA9;
				nimln(1600, "system.nim");
				i_456918 = res_456932;
				nimln(185, "ccgutils.nim");
				if ((NU)(i_456918) > (NU)(name->Sup.len)) raiseIndexError();
				c = name->data[i_456918];
				nimln(186, "ccgutils.nim");
				switch (((NU8)(c))) {
				case 65 ... 90:
				{
					NIM_CHAR LOC11;
					nimln(188, "ccgutils.nim");
					LOC11 = 0;
					LOC11 = nsuToLowerChar(c);
					result = addChar(result, LOC11);
				}
				break;
				case 95:
				{
				}
				break;
				case 97 ... 122:
				case 48 ... 57:
				{
					nimln(192, "ccgutils.nim");
					result = addChar(result, c);
				}
				break;
				default:
				{
					NimStringDesc* LOC15;
					NimStringDesc* LOC16;
					nimln(194, "ccgutils.nim");
					LOC15 = 0;
					LOC16 = 0;
					LOC16 = nsuToHex(((NI64) (((NU8)(c)))), ((NI) 2));
					LOC15 = rawNewString(LOC16->Sup.len + 3);
appendString(LOC15, ((NimStringDesc*) &TMP8917));
appendString(LOC15, LOC16);
					result = resizeString(result, LOC15->Sup.len + 0);
appendString(result, LOC15);
				}
				break;
				}
				nimln(1619, "system.nim");
				TMP8919 = addInt(res_456932, ((NI) 1));
				res_456932 = (NI)(TMP8919);
			} LA9: ;
		}
	}
	popFrame();
	return result;
}

static N_INLINE(NI, modInt)(NI a, NI b) {
	NI result;
{	result = 0;
	{
		if (!(b == ((NI) 0))) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	result = (NI)(a % b);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Ropeobj162009*, makellvmstring_456951)(NimStringDesc* s) {
	Ropeobj162009* result;
	NimStringDesc* res;
	Ropeobj162009* LOC12;
	nimfr("makeLLVMString", "ccgutils.nim")
	result = 0;
	nimln(198, "ccgutils.nim");
	result = NIM_NIL;
	nimln(199, "ccgutils.nim");
	res = copyString(((NimStringDesc*) &TMP8920));
	{
		NI i_456969;
		NI HEX3Atmp_456982;
		NI TMP8921;
		NI res_456985;
		i_456969 = 0;
		HEX3Atmp_456982 = 0;
		nimln(200, "ccgutils.nim");
		TMP8921 = subInt((s ? s->Sup.len : 0), ((NI) 1));
		HEX3Atmp_456982 = (NI)(TMP8921);
		nimln(1598, "system.nim");
		res_456985 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP8924;
				if (!(res_456985 <= HEX3Atmp_456982)) goto LA3;
				nimln(1600, "system.nim");
				i_456969 = res_456985;
				nimln(201, "ccgutils.nim");
				{
					NI TMP8922;
					NI TMP8923;
					Ropeobj162009* LOC8;
					TMP8922 = addInt(i_456969, ((NI) 1));
					TMP8923 = modInt((NI)(TMP8922), ((NI) 64));
					if (!(((NI) ((NI)(TMP8923))) == ((NI) 0))) goto LA6;
					nimln(202, "ccgutils.nim");
					LOC8 = 0;
					LOC8 = rope_162320(res);
					add_162534(&result, LOC8);
					nimln(203, "ccgutils.nim");
					res = setLengthStr(res, ((NI) 0));
				}
				LA6: ;
				nimln(204, "ccgutils.nim");
				if ((NU)(i_456969) > (NU)(s->Sup.len)) raiseIndexError();
				switch (((NU8)(s->data[i_456969]))) {
				case 0 ... 31:
				case 128 ... 255:
				case 34:
				case 92:
				{
					NimStringDesc* LOC10;
					nimln(206, "ccgutils.nim");
					res = addChar(res, 92);
					nimln(207, "ccgutils.nim");
					if ((NU)(i_456969) > (NU)(s->Sup.len)) raiseIndexError();
					LOC10 = 0;
					LOC10 = nsuToHex(((NI64) (((NU8)(s->data[i_456969])))), ((NI) 2));
					res = resizeString(res, LOC10->Sup.len + 0);
appendString(res, LOC10);
				}
				break;
				default:
				{
					nimln(208, "ccgutils.nim");
					if ((NU)(i_456969) > (NU)(s->Sup.len)) raiseIndexError();
					res = addChar(res, s->data[i_456969]);
				}
				break;
				}
				nimln(1614, "system.nim");
				TMP8924 = addInt(res_456985, ((NI) 1));
				res_456985 = (NI)(TMP8924);
			} LA3: ;
		}
	}
	nimln(209, "ccgutils.nim");
	res = resizeString(res, 4);
appendString(res, ((NimStringDesc*) &TMP8925));
	nimln(210, "ccgutils.nim");
	LOC12 = 0;
	LOC12 = rope_162320(res);
	add_162534(&result, LOC12);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_ccgutilsInit)(void) {
	nimfr("ccgutils", "ccgutils.nim")
	nimln(212, "ccgutils.nim");
	inittypetables_456285();
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_ccgutilsDatInit)(void) {
}

