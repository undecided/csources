/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct Tnode190813 Tnode190813;
typedef struct Ttype190849 Ttype190849;
typedef struct Tlineinfo162338 Tlineinfo162338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym190843 Tsym190843;
typedef struct Tident166021 Tident166021;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tbitset239012 Tbitset239012;
typedef struct Tidobj166015 Tidobj166015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj160009 Ropeobj160009;
typedef struct Tcell46947 Tcell46947;
typedef struct Tcellseq46963 Tcellseq46963;
typedef struct Tgcheap48816 Tgcheap48816;
typedef struct Tcellset46959 Tcellset46959;
typedef struct Tpagedesc46955 Tpagedesc46955;
typedef struct Tmemregion28810 Tmemregion28810;
typedef struct Tsmallchunk28040 Tsmallchunk28040;
typedef struct Tllchunk28804 Tllchunk28804;
typedef struct Tbigchunk28042 Tbigchunk28042;
typedef struct Tintset28017 Tintset28017;
typedef struct Ttrunk28013 Ttrunk28013;
typedef struct Tavlnode28808 Tavlnode28808;
typedef struct Tgcstat48814 Tgcstat48814;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Tlib190831 Tlib190831;
typedef struct Tbasechunk28038 Tbasechunk28038;
typedef struct Tfreecell28030 Tfreecell28030;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry130022 Tlistentry130022;
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
struct  Tloc190827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype190849* t;
Ropeobj160009* r;
Ropeobj160009* heaproot;
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
struct  Tstrtable190817  {
NI counter;
Tsymseq190815* data;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Ropeobj160009  {
  TNimObject Sup;
Ropeobj160009* left;
Ropeobj160009* right;
NI length;
NimStringDesc* data;
};
typedef NI TY28020[8];
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
struct  Tfreecell28030  {
Tfreecell28030* next;
NI zerofield;
};
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct Tbitset239012 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
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
N_NIMCALL(NIM_BOOL, inset_240019)(Tnode190813* s, Tnode190813* elem);
N_NIMCALL(void, internalerror_164199)(Tlineinfo162338 info, NimStringDesc* errmsg);
N_NIMCALL(NI, sonslen_193403)(Tnode190813* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, levalue_198374)(Tnode190813* a, Tnode190813* b);
N_NIMCALL(NIM_BOOL, samevalue_198324)(Tnode190813* a, Tnode190813* b);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20201)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NIM_BOOL, overlap_240012)(Tnode190813* a, Tnode190813* b);
N_NIMCALL(NIM_BOOL, someinset_240026)(Tnode190813* s, Tnode190813* a, Tnode190813* b);
N_NIMCALL(void, tobitset_240004)(Tnode190813* s, Tbitset239012** b);
N_NIMCALL(NI64, firstord_220004)(Ttype190849* t);
N_NIMCALL(void, bitsetinit_239021)(Tbitset239012** b, NI length);
N_NIMCALL(NI64, getsize_220190)(Ttype190849* typ);
N_NIMCALL(NI64, getordvalue_220178)(Tnode190813* n);
N_NIMCALL(void, bitsetincl_239061)(Tbitset239012** x, NI64 elem);
static N_INLINE(NI64, subInt64)(NI64 a, NI64 b);
static N_INLINE(NI64, addInt64)(NI64 a, NI64 b);
N_NIMCALL(Tnode190813*, totreeset_240354)(Tbitset239012* s, Ttype190849* settype, Tlineinfo162338 info);
N_NIMCALL(Tnode190813*, newnodei_192351)(NU8 kind, Tlineinfo162338 info);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46947*, usrtocell_50446)(void* usr);
static N_INLINE(void, rtladdzct_52004)(Tcell46947* c);
N_NOINLINE(void, addzct_50417)(Tcellseq46963* s, Tcell46947* c);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NIM_BOOL, bitsetin_239077)(Tbitset239012* x, NI64 e);
N_NIMCALL(void, addson_192819)(Tnode190813* father, Tnode190813* son);
N_NIMCALL(Tnode190813*, newinttypenode_191619)(NU8 kind, NI64 intval, Ttype190849* typ);
N_NIMCALL(Tnode190813*, unionsets_240047)(Tnode190813* a, Tnode190813* b);
N_NIMCALL(void, bitsetunion_239029)(Tbitset239012** x, Tbitset239012* y);
N_NIMCALL(Tnode190813*, diffsets_240054)(Tnode190813* a, Tnode190813* b);
N_NIMCALL(void, bitsetdiff_239037)(Tbitset239012** x, Tbitset239012* y);
N_NIMCALL(Tnode190813*, intersectsets_240061)(Tnode190813* a, Tnode190813* b);
N_NIMCALL(void, bitsetintersect_239053)(Tbitset239012** x, Tbitset239012* y);
N_NIMCALL(Tnode190813*, symdiffsets_240068)(Tnode190813* a, Tnode190813* b);
N_NIMCALL(void, bitsetsymdiff_239045)(Tbitset239012** x, Tbitset239012* y);
N_NIMCALL(NIM_BOOL, containssets_240075)(Tnode190813* a, Tnode190813* b);
N_NIMCALL(NIM_BOOL, bitsetcontains_239091)(Tbitset239012* x, Tbitset239012* y);
N_NIMCALL(NIM_BOOL, equalsets_240082)(Tnode190813* a, Tnode190813* b);
N_NIMCALL(NIM_BOOL, bitsetequals_239084)(Tbitset239012* x, Tbitset239012* y);
N_NIMCALL(Tnode190813*, complement_240550)(Tnode190813* a);
N_NIMCALL(NI64, cardset_240089)(Tnode190813* s);
N_NIMCALL(NIM_BOOL, sethasrange_240041)(Tnode190813* s);
N_NIMCALL(NIM_BOOL, emptyrange_240034)(Tnode190813* a, Tnode190813* b);
STRING_LITERAL(TMP4074, "inSet", 5);
static NIM_CONST TY191031 TMP4076 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4077, "sons", 4);
STRING_LITERAL(TMP4079, "SomeInSet", 9);
STRING_LITERAL(TMP4102, "SetHasRange", 11);
extern TFrame* frameptr_17242;
extern Tgcheap48816 gch_48844;

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

N_NIMCALL(NIM_BOOL, inset_240019)(Tnode190813* s, Tnode190813* elem) {
	NIM_BOOL result;
	nimfr("inSet", "nimsets.nim")
{	result = 0;
	nimln(34, "nimsets.nim");
	{
		if (!!(((*s).kind == ((NU8) 39)))) goto LA3;
		nimln(35, "nimsets.nim");
		internalerror_164199((*s).info, ((NimStringDesc*) &TMP4074));
		nimln(36, "nimsets.nim");
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_240121;
		NI HEX3Atmp_240138;
		NI LOC6;
		NI TMP4075;
		NI res_240141;
		i_240121 = 0;
		HEX3Atmp_240138 = 0;
		nimln(37, "nimsets.nim");
		LOC6 = 0;
		LOC6 = sonslen_193403(s);
		TMP4075 = subInt(LOC6, ((NI) 1));
		HEX3Atmp_240138 = (NI)(TMP4075);
		nimln(1598, "system.nim");
		res_240141 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4078;
				if (!(res_240141 <= HEX3Atmp_240138)) goto LA8;
				nimln(1600, "system.nim");
				i_240121 = res_240141;
				nimln(38, "nimsets.nim");
				{
					if (((TMP4076[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
					if ((NU)(i_240121) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (!((*(*s).kindU.S6.sons->data[i_240121]).kind == ((NU8) 44))) goto LA11;
					nimln(39, "nimsets.nim");
					{
						NIM_BOOL LOC15;
						LOC15 = 0;
						if (((TMP4076[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
						if ((NU)(i_240121) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP4076[(*(*s).kindU.S6.sons->data[i_240121]).kind/8] &(1<<((*(*s).kindU.S6.sons->data[i_240121]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
						if ((NU)(((NI) 0)) >= (NU)((*(*s).kindU.S6.sons->data[i_240121]).kindU.S6.sons->Sup.len)) raiseIndexError();
						LOC15 = levalue_198374((*(*s).kindU.S6.sons->data[i_240121]).kindU.S6.sons->data[((NI) 0)], elem);
						if (!(LOC15)) goto LA16;
						nimln(40, "nimsets.nim");
						if (((TMP4076[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
						if ((NU)(i_240121) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP4076[(*(*s).kindU.S6.sons->data[i_240121]).kind/8] &(1<<((*(*s).kindU.S6.sons->data[i_240121]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
						if ((NU)(((NI) 1)) >= (NU)((*(*s).kindU.S6.sons->data[i_240121]).kindU.S6.sons->Sup.len)) raiseIndexError();
						LOC15 = levalue_198374(elem, (*(*s).kindU.S6.sons->data[i_240121]).kindU.S6.sons->data[((NI) 1)]);
						LA16: ;
						if (!LOC15) goto LA17;
						nimln(41, "nimsets.nim");
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA17: ;
				}
				goto LA9;
				LA11: ;
				{
					nimln(43, "nimsets.nim");
					{
						NIM_BOOL LOC22;
						if (((TMP4076[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
						if ((NU)(i_240121) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
						LOC22 = 0;
						LOC22 = samevalue_198324((*s).kindU.S6.sons->data[i_240121], elem);
						if (!LOC22) goto LA23;
						nimln(44, "nimsets.nim");
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA23: ;
				}
				LA9: ;
				nimln(1614, "system.nim");
				TMP4078 = addInt(res_240141, ((NI) 1));
				res_240141 = (NI)(TMP4078);
			} LA8: ;
		}
	}
	nimln(45, "nimsets.nim");
	result = NIM_FALSE;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, overlap_240012)(Tnode190813* a, Tnode190813* b) {
	NIM_BOOL result;
	nimfr("overlap", "nimsets.nim")
	result = 0;
	nimln(48, "nimsets.nim");
	{
		if (!((*a).kind == ((NU8) 44))) goto LA3;
		nimln(49, "nimsets.nim");
		{
			NIM_BOOL LOC9;
			if (!((*b).kind == ((NU8) 44))) goto LA7;
			nimln(51, "nimsets.nim");
			LOC9 = 0;
			if (((TMP4076[(*a).kind/8] &(1<<((*a).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
			if ((NU)(((NI) 0)) >= (NU)((*a).kindU.S6.sons->Sup.len)) raiseIndexError();
			if (((TMP4076[(*b).kind/8] &(1<<((*b).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
			if ((NU)(((NI) 1)) >= (NU)((*b).kindU.S6.sons->Sup.len)) raiseIndexError();
			LOC9 = levalue_198374((*a).kindU.S6.sons->data[((NI) 0)], (*b).kindU.S6.sons->data[((NI) 1)]);
			if (!(LOC9)) goto LA10;
			nimln(52, "nimsets.nim");
			if (((TMP4076[(*b).kind/8] &(1<<((*b).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
			if ((NU)(((NI) 0)) >= (NU)((*b).kindU.S6.sons->Sup.len)) raiseIndexError();
			if (((TMP4076[(*a).kind/8] &(1<<((*a).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
			if ((NU)(((NI) 1)) >= (NU)((*a).kindU.S6.sons->Sup.len)) raiseIndexError();
			LOC9 = levalue_198374((*b).kindU.S6.sons->data[((NI) 0)], (*a).kindU.S6.sons->data[((NI) 1)]);
			LA10: ;
			result = LOC9;
		}
		goto LA5;
		LA7: ;
		{
			NIM_BOOL LOC12;
			nimln(54, "nimsets.nim");
			LOC12 = 0;
			if (((TMP4076[(*a).kind/8] &(1<<((*a).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
			if ((NU)(((NI) 0)) >= (NU)((*a).kindU.S6.sons->Sup.len)) raiseIndexError();
			LOC12 = levalue_198374((*a).kindU.S6.sons->data[((NI) 0)], b);
			if (!(LOC12)) goto LA13;
			if (((TMP4076[(*a).kind/8] &(1<<((*a).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
			if ((NU)(((NI) 1)) >= (NU)((*a).kindU.S6.sons->Sup.len)) raiseIndexError();
			LOC12 = levalue_198374(b, (*a).kindU.S6.sons->data[((NI) 1)]);
			LA13: ;
			result = LOC12;
		}
		LA5: ;
	}
	goto LA1;
	LA3: ;
	{
		nimln(56, "nimsets.nim");
		{
			NIM_BOOL LOC19;
			if (!((*b).kind == ((NU8) 44))) goto LA17;
			nimln(57, "nimsets.nim");
			LOC19 = 0;
			if (((TMP4076[(*b).kind/8] &(1<<((*b).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
			if ((NU)(((NI) 0)) >= (NU)((*b).kindU.S6.sons->Sup.len)) raiseIndexError();
			LOC19 = levalue_198374((*b).kindU.S6.sons->data[((NI) 0)], a);
			if (!(LOC19)) goto LA20;
			if (((TMP4076[(*b).kind/8] &(1<<((*b).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
			if ((NU)(((NI) 1)) >= (NU)((*b).kindU.S6.sons->Sup.len)) raiseIndexError();
			LOC19 = levalue_198374(a, (*b).kindU.S6.sons->data[((NI) 1)]);
			LA20: ;
			result = LOC19;
		}
		goto LA15;
		LA17: ;
		{
			nimln(59, "nimsets.nim");
			result = samevalue_198324(a, b);
		}
		LA15: ;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, someinset_240026)(Tnode190813* s, Tnode190813* a, Tnode190813* b) {
	NIM_BOOL result;
	nimfr("someInSet", "nimsets.nim")
{	result = 0;
	nimln(63, "nimsets.nim");
	{
		if (!!(((*s).kind == ((NU8) 39)))) goto LA3;
		nimln(64, "nimsets.nim");
		internalerror_164199((*s).info, ((NimStringDesc*) &TMP4079));
		nimln(65, "nimsets.nim");
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_240233;
		NI HEX3Atmp_240255;
		NI LOC6;
		NI TMP4080;
		NI res_240258;
		i_240233 = 0;
		HEX3Atmp_240255 = 0;
		nimln(66, "nimsets.nim");
		LOC6 = 0;
		LOC6 = sonslen_193403(s);
		TMP4080 = subInt(LOC6, ((NI) 1));
		HEX3Atmp_240255 = (NI)(TMP4080);
		nimln(1598, "system.nim");
		res_240258 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4081;
				if (!(res_240258 <= HEX3Atmp_240255)) goto LA8;
				nimln(1600, "system.nim");
				i_240233 = res_240258;
				nimln(67, "nimsets.nim");
				{
					if (((TMP4076[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
					if ((NU)(i_240233) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (!((*(*s).kindU.S6.sons->data[i_240233]).kind == ((NU8) 44))) goto LA11;
					nimln(68, "nimsets.nim");
					{
						NIM_BOOL LOC15;
						NIM_BOOL LOC16;
						NIM_BOOL LOC19;
						LOC15 = 0;
						LOC16 = 0;
						if (((TMP4076[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
						if ((NU)(i_240233) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP4076[(*(*s).kindU.S6.sons->data[i_240233]).kind/8] &(1<<((*(*s).kindU.S6.sons->data[i_240233]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
						if ((NU)(((NI) 0)) >= (NU)((*(*s).kindU.S6.sons->data[i_240233]).kindU.S6.sons->Sup.len)) raiseIndexError();
						LOC16 = levalue_198374((*(*s).kindU.S6.sons->data[i_240233]).kindU.S6.sons->data[((NI) 0)], b);
						if (!(LOC16)) goto LA17;
						if (((TMP4076[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
						if ((NU)(i_240233) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP4076[(*(*s).kindU.S6.sons->data[i_240233]).kind/8] &(1<<((*(*s).kindU.S6.sons->data[i_240233]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
						if ((NU)(((NI) 1)) >= (NU)((*(*s).kindU.S6.sons->data[i_240233]).kindU.S6.sons->Sup.len)) raiseIndexError();
						LOC16 = levalue_198374(b, (*(*s).kindU.S6.sons->data[i_240233]).kindU.S6.sons->data[((NI) 1)]);
						LA17: ;
						LOC15 = LOC16;
						if (LOC15) goto LA18;
						nimln(69, "nimsets.nim");
						LOC19 = 0;
						if (((TMP4076[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
						if ((NU)(i_240233) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP4076[(*(*s).kindU.S6.sons->data[i_240233]).kind/8] &(1<<((*(*s).kindU.S6.sons->data[i_240233]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
						if ((NU)(((NI) 0)) >= (NU)((*(*s).kindU.S6.sons->data[i_240233]).kindU.S6.sons->Sup.len)) raiseIndexError();
						LOC19 = levalue_198374((*(*s).kindU.S6.sons->data[i_240233]).kindU.S6.sons->data[((NI) 0)], a);
						if (!(LOC19)) goto LA20;
						if (((TMP4076[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
						if ((NU)(i_240233) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP4076[(*(*s).kindU.S6.sons->data[i_240233]).kind/8] &(1<<((*(*s).kindU.S6.sons->data[i_240233]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
						if ((NU)(((NI) 1)) >= (NU)((*(*s).kindU.S6.sons->data[i_240233]).kindU.S6.sons->Sup.len)) raiseIndexError();
						LOC19 = levalue_198374(a, (*(*s).kindU.S6.sons->data[i_240233]).kindU.S6.sons->data[((NI) 1)]);
						LA20: ;
						LOC15 = LOC19;
						LA18: ;
						if (!LOC15) goto LA21;
						nimln(70, "nimsets.nim");
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA21: ;
				}
				goto LA9;
				LA11: ;
				{
					nimln(73, "nimsets.nim");
					{
						NIM_BOOL LOC26;
						LOC26 = 0;
						if (((TMP4076[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
						if ((NU)(i_240233) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
						LOC26 = levalue_198374(a, (*s).kindU.S6.sons->data[i_240233]);
						if (!(LOC26)) goto LA27;
						if (((TMP4076[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
						if ((NU)(i_240233) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
						LOC26 = levalue_198374((*s).kindU.S6.sons->data[i_240233], b);
						LA27: ;
						if (!LOC26) goto LA28;
						nimln(74, "nimsets.nim");
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA28: ;
				}
				LA9: ;
				nimln(1614, "system.nim");
				TMP4081 = addInt(res_240258, ((NI) 1));
				res_240258 = (NI)(TMP4081);
			} LA8: ;
		}
	}
	nimln(75, "nimsets.nim");
	result = NIM_FALSE;
	}BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(NI64, subInt64)(NI64 a, NI64 b) {
	NI64 result;
{	result = 0;
	result = (NI64)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (IL64(0) <= (NI64)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (IL64(0) <= (NI64)(result ^ (NI64)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI64, addInt64)(NI64 a, NI64 b) {
	NI64 result;
{	result = 0;
	result = (NI64)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (IL64(0) <= (NI64)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (IL64(0) <= (NI64)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, tobitset_240004)(Tnode190813* s, Tbitset239012** b) {
	NI64 first;
	NI64 j;
	NI64 LOC1;
	nimfr("toBitSet", "nimsets.nim")
	first = 0;
	j = 0;
	nimln(79, "nimsets.nim");
	if ((NU)(((NI) 0)) >= (NU)((*(*s).typ).sons->Sup.len)) raiseIndexError();
	first = firstord_220004((*(*s).typ).sons->data[((NI) 0)]);
	nimln(80, "nimsets.nim");
	LOC1 = 0;
	LOC1 = getsize_220190((*s).typ);
	bitsetinit_239021(b, ((NI) (LOC1)));
	{
		NI i_240296;
		NI HEX3Atmp_240326;
		NI LOC3;
		NI TMP4082;
		NI res_240329;
		i_240296 = 0;
		HEX3Atmp_240326 = 0;
		nimln(81, "nimsets.nim");
		LOC3 = 0;
		LOC3 = sonslen_193403(s);
		TMP4082 = subInt(LOC3, ((NI) 1));
		HEX3Atmp_240326 = (NI)(TMP4082);
		nimln(1598, "system.nim");
		res_240329 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4086;
				if (!(res_240329 <= HEX3Atmp_240326)) goto LA5;
				nimln(1600, "system.nim");
				i_240296 = res_240329;
				nimln(82, "nimsets.nim");
				{
					if (((TMP4076[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
					if ((NU)(i_240296) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (!((*(*s).kindU.S6.sons->data[i_240296]).kind == ((NU8) 44))) goto LA8;
					nimln(83, "nimsets.nim");
					if (((TMP4076[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
					if ((NU)(i_240296) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (((TMP4076[(*(*s).kindU.S6.sons->data[i_240296]).kind/8] &(1<<((*(*s).kindU.S6.sons->data[i_240296]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
					if ((NU)(((NI) 0)) >= (NU)((*(*s).kindU.S6.sons->data[i_240296]).kindU.S6.sons->Sup.len)) raiseIndexError();
					j = getordvalue_220178((*(*s).kindU.S6.sons->data[i_240296]).kindU.S6.sons->data[((NI) 0)]);
					{
						nimln(84, "nimsets.nim");
						while (1) {
							NI64 LOC12;
							NI64 TMP4083;
							NI64 TMP4084;
							if (((TMP4076[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
							if ((NU)(i_240296) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
							if (((TMP4076[(*(*s).kindU.S6.sons->data[i_240296]).kind/8] &(1<<((*(*s).kindU.S6.sons->data[i_240296]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
							if ((NU)(((NI) 1)) >= (NU)((*(*s).kindU.S6.sons->data[i_240296]).kindU.S6.sons->Sup.len)) raiseIndexError();
							LOC12 = 0;
							LOC12 = getordvalue_220178((*(*s).kindU.S6.sons->data[i_240296]).kindU.S6.sons->data[((NI) 1)]);
							if (!(j <= LOC12)) goto LA11;
							nimln(85, "nimsets.nim");
							TMP4083 = subInt64(j, first);
							bitsetincl_239061(b, (NI64)(TMP4083));
							nimln(86, "nimsets.nim");
							TMP4084 = addInt64(j, ((NI) 1));
							j = (NI64)(TMP4084);
						} LA11: ;
					}
				}
				goto LA6;
				LA8: ;
				{
					NI64 LOC14;
					NI64 TMP4085;
					nimln(88, "nimsets.nim");
					if (((TMP4076[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
					if ((NU)(i_240296) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
					LOC14 = 0;
					LOC14 = getordvalue_220178((*s).kindU.S6.sons->data[i_240296]);
					TMP4085 = subInt64(LOC14, first);
					bitsetincl_239061(b, (NI64)(TMP4085));
				}
				LA6: ;
				nimln(1614, "system.nim");
				TMP4086 = addInt(res_240329, ((NI) 1));
				res_240329 = (NI)(TMP4086);
			} LA5: ;
		}
	}
	popFrame();
}

static N_INLINE(Tcell46947*, usrtocell_50446)(void* usr) {
	Tcell46947* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	result = ((Tcell46947*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46947))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_52004)(Tcell46947* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_50417((&gch_48844.zct), c);
	popFrame();
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
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
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

N_NIMCALL(Tnode190813*, totreeset_240354)(Tbitset239012* s, Ttype190849* settype, Tlineinfo162338 info) {
	Tnode190813* result;
	NI64 a;
	NI64 b;
	NI64 e;
	NI64 first;
	Ttype190849* elemtype;
	Tnode190813* n;
	nimfr("toTreeSet", "nimsets.nim")
	result = 0;
	a = 0;
	b = 0;
	e = 0;
	first = 0;
	elemtype = 0;
	n = 0;
	nimln(95, "nimsets.nim");
	if ((NU)(((NI) 0)) >= (NU)((*settype).sons->Sup.len)) raiseIndexError();
	elemtype = (*settype).sons->data[((NI) 0)];
	nimln(96, "nimsets.nim");
	first = firstord_220004(elemtype);
	nimln(97, "nimsets.nim");
	result = newnodei_192351(((NU8) 39), info);
	nimln(98, "nimsets.nim");
	asgnRefNoCycle((void**) (&(*result).typ), settype);
	nimln(99, "nimsets.nim");
	(*result).info = info;
	nimln(100, "nimsets.nim");
	e = IL64(0);
	{
		nimln(101, "nimsets.nim");
		while (1) {
			NI TMP4087;
			NI64 TMP4094;
			TMP4087 = mulInt((s ? s->Sup.len : 0), ((NI) 8));
			if (!(e < ((NI64) ((NI)(TMP4087))))) goto LA2;
			nimln(102, "nimsets.nim");
			{
				NIM_BOOL LOC5;
				NI64 TMP4090;
				LOC5 = 0;
				LOC5 = bitsetin_239077(s, e);
				if (!LOC5) goto LA6;
				nimln(103, "nimsets.nim");
				a = e;
				nimln(104, "nimsets.nim");
				b = e;
				{
					nimln(105, "nimsets.nim");
					while (1) {
						NI64 TMP4088;
						nimln(106, "nimsets.nim");
						TMP4088 = addInt64(b, ((NI) 1));
						b = (NI64)(TMP4088);
						nimln(107, "nimsets.nim");
						{
							NIM_BOOL LOC12;
							NI TMP4089;
							NIM_BOOL LOC14;
							LOC12 = 0;
							TMP4089 = mulInt((s ? s->Sup.len : 0), ((NI) 8));
							LOC12 = (((NI64) ((NI)(TMP4089))) <= b);
							if (LOC12) goto LA13;
							LOC14 = 0;
							LOC14 = bitsetin_239077(s, b);
							LOC12 = !(LOC14);
							LA13: ;
							if (!LOC12) goto LA15;
							goto LA8;
						}
						LA15: ;
					}
				} LA8: ;
				nimln(108, "nimsets.nim");
				TMP4090 = subInt64(b, ((NI) 1));
				b = (NI64)(TMP4090);
				nimln(109, "nimsets.nim");
				{
					NI64 TMP4091;
					Tnode190813* LOC21;
					if (!(a == b)) goto LA19;
					nimln(110, "nimsets.nim");
					TMP4091 = addInt64(a, first);
					LOC21 = 0;
					LOC21 = newinttypenode_191619(((NU8) 6), (NI64)(TMP4091), elemtype);
					addson_192819(result, LOC21);
				}
				goto LA17;
				LA19: ;
				{
					NI64 TMP4092;
					Tnode190813* LOC23;
					NI64 TMP4093;
					Tnode190813* LOC24;
					nimln(112, "nimsets.nim");
					n = newnodei_192351(((NU8) 44), info);
					nimln(113, "nimsets.nim");
					asgnRefNoCycle((void**) (&(*n).typ), elemtype);
					nimln(114, "nimsets.nim");
					TMP4092 = addInt64(a, first);
					LOC23 = 0;
					LOC23 = newinttypenode_191619(((NU8) 6), (NI64)(TMP4092), elemtype);
					addson_192819(n, LOC23);
					nimln(115, "nimsets.nim");
					TMP4093 = addInt64(b, first);
					LOC24 = 0;
					LOC24 = newinttypenode_191619(((NU8) 6), (NI64)(TMP4093), elemtype);
					addson_192819(n, LOC24);
					nimln(116, "nimsets.nim");
					addson_192819(result, n);
				}
				LA17: ;
				nimln(117, "nimsets.nim");
				e = b;
			}
			LA6: ;
			nimln(118, "nimsets.nim");
			TMP4094 = addInt64(e, ((NI) 1));
			e = (NI64)(TMP4094);
		} LA2: ;
	}
	popFrame();
	return result;
}

N_NIMCALL(Tnode190813*, unionsets_240047)(Tnode190813* a, Tnode190813* b) {
	Tnode190813* result;
	Tbitset239012* x;
	Tbitset239012* y;
	nimfr("unionSets", "nimsets.nim")
	result = 0;
	x = 0;
	y = 0;
	nimln(122, "nimsets.nim");
	tobitset_240004(a, (&x));
	nimln(123, "nimsets.nim");
	tobitset_240004(b, (&y));
	nimln(124, "nimsets.nim");
	bitsetunion_239029((&x), y);
	nimln(125, "nimsets.nim");
	result = totreeset_240354(x, (*a).typ, (*a).info);
	popFrame();
	return result;
}

N_NIMCALL(Tnode190813*, diffsets_240054)(Tnode190813* a, Tnode190813* b) {
	Tnode190813* result;
	Tbitset239012* x;
	Tbitset239012* y;
	nimfr("diffSets", "nimsets.nim")
	result = 0;
	x = 0;
	y = 0;
	nimln(122, "nimsets.nim");
	tobitset_240004(a, (&x));
	nimln(123, "nimsets.nim");
	tobitset_240004(b, (&y));
	nimln(124, "nimsets.nim");
	bitsetdiff_239037((&x), y);
	nimln(125, "nimsets.nim");
	result = totreeset_240354(x, (*a).typ, (*a).info);
	popFrame();
	return result;
}

N_NIMCALL(Tnode190813*, intersectsets_240061)(Tnode190813* a, Tnode190813* b) {
	Tnode190813* result;
	Tbitset239012* x;
	Tbitset239012* y;
	nimfr("intersectSets", "nimsets.nim")
	result = 0;
	x = 0;
	y = 0;
	nimln(122, "nimsets.nim");
	tobitset_240004(a, (&x));
	nimln(123, "nimsets.nim");
	tobitset_240004(b, (&y));
	nimln(124, "nimsets.nim");
	bitsetintersect_239053((&x), y);
	nimln(125, "nimsets.nim");
	result = totreeset_240354(x, (*a).typ, (*a).info);
	popFrame();
	return result;
}

N_NIMCALL(Tnode190813*, symdiffsets_240068)(Tnode190813* a, Tnode190813* b) {
	Tnode190813* result;
	Tbitset239012* x;
	Tbitset239012* y;
	nimfr("symdiffSets", "nimsets.nim")
	result = 0;
	x = 0;
	y = 0;
	nimln(122, "nimsets.nim");
	tobitset_240004(a, (&x));
	nimln(123, "nimsets.nim");
	tobitset_240004(b, (&y));
	nimln(124, "nimsets.nim");
	bitsetsymdiff_239045((&x), y);
	nimln(125, "nimsets.nim");
	result = totreeset_240354(x, (*a).typ, (*a).info);
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, containssets_240075)(Tnode190813* a, Tnode190813* b) {
	NIM_BOOL result;
	Tbitset239012* x;
	Tbitset239012* y;
	nimfr("containsSets", "nimsets.nim")
	result = 0;
	x = 0;
	y = 0;
	nimln(134, "nimsets.nim");
	tobitset_240004(a, (&x));
	nimln(135, "nimsets.nim");
	tobitset_240004(b, (&y));
	nimln(136, "nimsets.nim");
	result = bitsetcontains_239091(x, y);
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, equalsets_240082)(Tnode190813* a, Tnode190813* b) {
	NIM_BOOL result;
	Tbitset239012* x;
	Tbitset239012* y;
	nimfr("equalSets", "nimsets.nim")
	result = 0;
	x = 0;
	y = 0;
	nimln(140, "nimsets.nim");
	tobitset_240004(a, (&x));
	nimln(141, "nimsets.nim");
	tobitset_240004(b, (&y));
	nimln(142, "nimsets.nim");
	result = bitsetequals_239084(x, y);
	popFrame();
	return result;
}

N_NIMCALL(Tnode190813*, complement_240550)(Tnode190813* a) {
	Tnode190813* result;
	Tbitset239012* x;
	nimfr("complement", "nimsets.nim")
	result = 0;
	x = 0;
	nimln(146, "nimsets.nim");
	tobitset_240004(a, (&x));
	{
		NI i_240568;
		NI HEX3Atmp_240571;
		NI res_240574;
		i_240568 = 0;
		HEX3Atmp_240571 = 0;
		nimln(147, "nimsets.nim");
		HEX3Atmp_240571 = (x ? (x->Sup.len-1) : -1);
		nimln(1598, "system.nim");
		res_240574 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4095;
				if (!(res_240574 <= HEX3Atmp_240571)) goto LA3;
				nimln(1600, "system.nim");
				i_240568 = res_240574;
				nimln(147, "nimsets.nim");
				if ((NU)(i_240568) >= (NU)(x->Sup.len)) raiseIndexError();
				if ((NU)(i_240568) >= (NU)(x->Sup.len)) raiseIndexError();
				x->data[i_240568] = (NI8)((NU8) ~(x->data[i_240568]));
				nimln(1614, "system.nim");
				TMP4095 = addInt(res_240574, ((NI) 1));
				res_240574 = (NI)(TMP4095);
			} LA3: ;
		}
	}
	nimln(148, "nimsets.nim");
	result = totreeset_240354(x, (*a).typ, (*a).info);
	popFrame();
	return result;
}

N_NIMCALL(NI64, cardset_240089)(Tnode190813* s) {
	NI64 result;
	nimfr("cardSet", "nimsets.nim")
	result = 0;
	nimln(153, "nimsets.nim");
	result = IL64(0);
	{
		NI i_240609;
		NI HEX3Atmp_240634;
		NI LOC2;
		NI TMP4096;
		NI res_240637;
		i_240609 = 0;
		HEX3Atmp_240634 = 0;
		nimln(154, "nimsets.nim");
		LOC2 = 0;
		LOC2 = sonslen_193403(s);
		TMP4096 = subInt(LOC2, ((NI) 1));
		HEX3Atmp_240634 = (NI)(TMP4096);
		nimln(1598, "system.nim");
		res_240637 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4101;
				if (!(res_240637 <= HEX3Atmp_240634)) goto LA4;
				nimln(1600, "system.nim");
				i_240609 = res_240637;
				nimln(155, "nimsets.nim");
				{
					NI64 LOC9;
					NI64 TMP4097;
					NI64 LOC10;
					NI64 TMP4098;
					NI64 TMP4099;
					if (((TMP4076[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
					if ((NU)(i_240609) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (!((*(*s).kindU.S6.sons->data[i_240609]).kind == ((NU8) 44))) goto LA7;
					nimln(156, "nimsets.nim");
					nimln(157, "nimsets.nim");
					nimln(156, "nimsets.nim");
					if (((TMP4076[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
					if ((NU)(i_240609) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (((TMP4076[(*(*s).kindU.S6.sons->data[i_240609]).kind/8] &(1<<((*(*s).kindU.S6.sons->data[i_240609]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
					if ((NU)(((NI) 1)) >= (NU)((*(*s).kindU.S6.sons->data[i_240609]).kindU.S6.sons->Sup.len)) raiseIndexError();
					LOC9 = 0;
					LOC9 = getordvalue_220178((*(*s).kindU.S6.sons->data[i_240609]).kindU.S6.sons->data[((NI) 1)]);
					TMP4097 = addInt64(result, LOC9);
					nimln(157, "nimsets.nim");
					if (((TMP4076[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
					if ((NU)(i_240609) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (((TMP4076[(*(*s).kindU.S6.sons->data[i_240609]).kind/8] &(1<<((*(*s).kindU.S6.sons->data[i_240609]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
					if ((NU)(((NI) 0)) >= (NU)((*(*s).kindU.S6.sons->data[i_240609]).kindU.S6.sons->Sup.len)) raiseIndexError();
					LOC10 = 0;
					LOC10 = getordvalue_220178((*(*s).kindU.S6.sons->data[i_240609]).kindU.S6.sons->data[((NI) 0)]);
					TMP4098 = subInt64((NI64)(TMP4097), LOC10);
					TMP4099 = addInt64((NI64)(TMP4098), IL64(1));
					result = (NI64)(TMP4099);
				}
				goto LA5;
				LA7: ;
				{
					NI64 TMP4100;
					nimln(159, "nimsets.nim");
					TMP4100 = addInt64(result, ((NI) 1));
					result = (NI64)(TMP4100);
				}
				LA5: ;
				nimln(1614, "system.nim");
				TMP4101 = addInt(res_240637, ((NI) 1));
				res_240637 = (NI)(TMP4101);
			} LA4: ;
		}
	}
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, sethasrange_240041)(Tnode190813* s) {
	NIM_BOOL result;
	nimfr("setHasRange", "nimsets.nim")
{	result = 0;
	nimln(162, "nimsets.nim");
	{
		if (!!(((*s).kind == ((NU8) 39)))) goto LA3;
		nimln(163, "nimsets.nim");
		internalerror_164199((*s).info, ((NimStringDesc*) &TMP4102));
		nimln(164, "nimsets.nim");
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_240681;
		NI HEX3Atmp_240693;
		NI LOC6;
		NI TMP4103;
		NI res_240696;
		i_240681 = 0;
		HEX3Atmp_240693 = 0;
		nimln(165, "nimsets.nim");
		LOC6 = 0;
		LOC6 = sonslen_193403(s);
		TMP4103 = subInt(LOC6, ((NI) 1));
		HEX3Atmp_240693 = (NI)(TMP4103);
		nimln(1598, "system.nim");
		res_240696 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4104;
				if (!(res_240696 <= HEX3Atmp_240693)) goto LA8;
				nimln(1600, "system.nim");
				i_240681 = res_240696;
				nimln(166, "nimsets.nim");
				{
					if (((TMP4076[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4077));
					if ((NU)(i_240681) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (!((*(*s).kindU.S6.sons->data[i_240681]).kind == ((NU8) 44))) goto LA11;
					nimln(167, "nimsets.nim");
					result = NIM_TRUE;
					goto BeforeRet;
				}
				LA11: ;
				nimln(1614, "system.nim");
				TMP4104 = addInt(res_240696, ((NI) 1));
				res_240696 = (NI)(TMP4104);
			} LA8: ;
		}
	}
	nimln(168, "nimsets.nim");
	result = NIM_FALSE;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, emptyrange_240034)(Tnode190813* a, Tnode190813* b) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	nimfr("emptyRange", "nimsets.nim")
	result = 0;
	nimln(171, "nimsets.nim");
	LOC1 = 0;
	LOC1 = levalue_198374(a, b);
	result = !(LOC1);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimsetsInit)(void) {
	nimfr("nimsets", "nimsets.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimsetsDatInit)(void) {
}

