/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
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
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Tlib190831 Tlib190831;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
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
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NIM_BOOL, overlap_240012)(Tnode190813* a, Tnode190813* b);
N_NIMCALL(NIM_BOOL, someinset_240026)(Tnode190813* s, Tnode190813* a, Tnode190813* b);
N_NIMCALL(void, tobitset_240004)(Tnode190813* s, Tbitset239012** b);
N_NIMCALL(NI64, firstord_220004)(Ttype190849* t);
N_NIMCALL(void, bitsetinit_239021)(Tbitset239012** b, NI length);
N_NIMCALL(NI64, getsize_220190)(Ttype190849* typ);
N_NIMCALL(NI64, chckRange64)(NI64 i, NI64 a, NI64 b);
N_NIMCALL(NI64, getordvalue_220178)(Tnode190813* n);
N_NIMCALL(void, bitsetincl_239061)(Tbitset239012** x, NI64 elem);
static N_INLINE(NI64, subInt64)(NI64 a, NI64 b);
static N_INLINE(NI64, addInt64)(NI64 a, NI64 b);
N_NIMCALL(Tnode190813*, totreeset_240353)(Tbitset239012* s, Ttype190849* settype, Tlineinfo162338 info);
N_NIMCALL(Tnode190813*, newnodei_192351)(NU8 kind, Tlineinfo162338 info);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr);
static N_INLINE(void, rtladdzct_51804)(Tcell46747* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46763* s, Tcell46747* c);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NIM_BOOL, bitsetin_239077)(Tbitset239012* x, NI64 e);
N_NIMCALL(void, addson_192819)(Tnode190813* father, Tnode190813* son);
N_NIMCALL(Tnode190813*, newinttypenode_191620)(NU8 kind, NI64 intval, Ttype190849* typ);
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
N_NIMCALL(Tnode190813*, complement_240549)(Tnode190813* a);
N_NIMCALL(NI64, cardset_240089)(Tnode190813* s);
N_NIMCALL(NIM_BOOL, sethasrange_240041)(Tnode190813* s);
N_NIMCALL(NIM_BOOL, emptyrange_240034)(Tnode190813* a, Tnode190813* b);
STRING_LITERAL(TMP4084, "inSet", 5);
static NIM_CONST TY191031 TMP4086 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4087, "sons", 4);
STRING_LITERAL(TMP4089, "SomeInSet", 9);
STRING_LITERAL(TMP4112, "SetHasRange", 11);
extern TFrame* frameptr_17042;
extern Tgcheap48616 gch_48644;

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

N_NIMCALL(NIM_BOOL, inset_240019)(Tnode190813* s, Tnode190813* elem) {
	NIM_BOOL result;
	nimfr("inSet", "nimsets.nim")
{	result = 0;
	nimln(34, "nimsets.nim");
	{
		if (!!(((*s).kind == ((NU8) 39)))) goto LA3;
		nimln(35, "nimsets.nim");
		internalerror_164199((*s).info, ((NimStringDesc*) &TMP4084));
		nimln(36, "nimsets.nim");
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_240121;
		NI HEX3Atmp_240138;
		NI LOC6;
		NI TMP4085;
		NI res_240141;
		i_240121 = 0;
		HEX3Atmp_240138 = 0;
		nimln(37, "nimsets.nim");
		LOC6 = 0;
		LOC6 = sonslen_193403(s);
		TMP4085 = subInt(LOC6, ((NI) 1));
		HEX3Atmp_240138 = (NI)(TMP4085);
		nimln(1598, "system.nim");
		res_240141 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4088;
				if (!(res_240141 <= HEX3Atmp_240138)) goto LA8;
				nimln(1600, "system.nim");
				i_240121 = res_240141;
				nimln(38, "nimsets.nim");
				{
					if (((TMP4086[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
					if ((NU)(i_240121) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (!((*(*s).kindU.S6.sons->data[i_240121]).kind == ((NU8) 44))) goto LA11;
					nimln(39, "nimsets.nim");
					{
						NIM_BOOL LOC15;
						LOC15 = 0;
						if (((TMP4086[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
						if ((NU)(i_240121) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP4086[(*(*s).kindU.S6.sons->data[i_240121]).kind/8] &(1<<((*(*s).kindU.S6.sons->data[i_240121]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
						if ((NU)(((NI) 0)) >= (NU)((*(*s).kindU.S6.sons->data[i_240121]).kindU.S6.sons->Sup.len)) raiseIndexError();
						LOC15 = levalue_198374((*(*s).kindU.S6.sons->data[i_240121]).kindU.S6.sons->data[((NI) 0)], elem);
						if (!(LOC15)) goto LA16;
						nimln(40, "nimsets.nim");
						if (((TMP4086[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
						if ((NU)(i_240121) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP4086[(*(*s).kindU.S6.sons->data[i_240121]).kind/8] &(1<<((*(*s).kindU.S6.sons->data[i_240121]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
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
						if (((TMP4086[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
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
				TMP4088 = addInt(res_240141, ((NI) 1));
				res_240141 = (NI)(TMP4088);
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
			if (((TMP4086[(*a).kind/8] &(1<<((*a).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
			if ((NU)(((NI) 0)) >= (NU)((*a).kindU.S6.sons->Sup.len)) raiseIndexError();
			if (((TMP4086[(*b).kind/8] &(1<<((*b).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
			if ((NU)(((NI) 1)) >= (NU)((*b).kindU.S6.sons->Sup.len)) raiseIndexError();
			LOC9 = levalue_198374((*a).kindU.S6.sons->data[((NI) 0)], (*b).kindU.S6.sons->data[((NI) 1)]);
			if (!(LOC9)) goto LA10;
			nimln(52, "nimsets.nim");
			if (((TMP4086[(*b).kind/8] &(1<<((*b).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
			if ((NU)(((NI) 0)) >= (NU)((*b).kindU.S6.sons->Sup.len)) raiseIndexError();
			if (((TMP4086[(*a).kind/8] &(1<<((*a).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
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
			if (((TMP4086[(*a).kind/8] &(1<<((*a).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
			if ((NU)(((NI) 0)) >= (NU)((*a).kindU.S6.sons->Sup.len)) raiseIndexError();
			LOC12 = levalue_198374((*a).kindU.S6.sons->data[((NI) 0)], b);
			if (!(LOC12)) goto LA13;
			if (((TMP4086[(*a).kind/8] &(1<<((*a).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
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
			if (((TMP4086[(*b).kind/8] &(1<<((*b).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
			if ((NU)(((NI) 0)) >= (NU)((*b).kindU.S6.sons->Sup.len)) raiseIndexError();
			LOC19 = levalue_198374((*b).kindU.S6.sons->data[((NI) 0)], a);
			if (!(LOC19)) goto LA20;
			if (((TMP4086[(*b).kind/8] &(1<<((*b).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
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
		internalerror_164199((*s).info, ((NimStringDesc*) &TMP4089));
		nimln(65, "nimsets.nim");
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_240233;
		NI HEX3Atmp_240255;
		NI LOC6;
		NI TMP4090;
		NI res_240258;
		i_240233 = 0;
		HEX3Atmp_240255 = 0;
		nimln(66, "nimsets.nim");
		LOC6 = 0;
		LOC6 = sonslen_193403(s);
		TMP4090 = subInt(LOC6, ((NI) 1));
		HEX3Atmp_240255 = (NI)(TMP4090);
		nimln(1598, "system.nim");
		res_240258 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4091;
				if (!(res_240258 <= HEX3Atmp_240255)) goto LA8;
				nimln(1600, "system.nim");
				i_240233 = res_240258;
				nimln(67, "nimsets.nim");
				{
					if (((TMP4086[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
					if ((NU)(i_240233) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (!((*(*s).kindU.S6.sons->data[i_240233]).kind == ((NU8) 44))) goto LA11;
					nimln(68, "nimsets.nim");
					{
						NIM_BOOL LOC15;
						NIM_BOOL LOC16;
						NIM_BOOL LOC19;
						LOC15 = 0;
						LOC16 = 0;
						if (((TMP4086[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
						if ((NU)(i_240233) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP4086[(*(*s).kindU.S6.sons->data[i_240233]).kind/8] &(1<<((*(*s).kindU.S6.sons->data[i_240233]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
						if ((NU)(((NI) 0)) >= (NU)((*(*s).kindU.S6.sons->data[i_240233]).kindU.S6.sons->Sup.len)) raiseIndexError();
						LOC16 = levalue_198374((*(*s).kindU.S6.sons->data[i_240233]).kindU.S6.sons->data[((NI) 0)], b);
						if (!(LOC16)) goto LA17;
						if (((TMP4086[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
						if ((NU)(i_240233) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP4086[(*(*s).kindU.S6.sons->data[i_240233]).kind/8] &(1<<((*(*s).kindU.S6.sons->data[i_240233]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
						if ((NU)(((NI) 1)) >= (NU)((*(*s).kindU.S6.sons->data[i_240233]).kindU.S6.sons->Sup.len)) raiseIndexError();
						LOC16 = levalue_198374(b, (*(*s).kindU.S6.sons->data[i_240233]).kindU.S6.sons->data[((NI) 1)]);
						LA17: ;
						LOC15 = LOC16;
						if (LOC15) goto LA18;
						nimln(69, "nimsets.nim");
						LOC19 = 0;
						if (((TMP4086[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
						if ((NU)(i_240233) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP4086[(*(*s).kindU.S6.sons->data[i_240233]).kind/8] &(1<<((*(*s).kindU.S6.sons->data[i_240233]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
						if ((NU)(((NI) 0)) >= (NU)((*(*s).kindU.S6.sons->data[i_240233]).kindU.S6.sons->Sup.len)) raiseIndexError();
						LOC19 = levalue_198374((*(*s).kindU.S6.sons->data[i_240233]).kindU.S6.sons->data[((NI) 0)], a);
						if (!(LOC19)) goto LA20;
						if (((TMP4086[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
						if ((NU)(i_240233) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP4086[(*(*s).kindU.S6.sons->data[i_240233]).kind/8] &(1<<((*(*s).kindU.S6.sons->data[i_240233]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
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
						if (((TMP4086[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
						if ((NU)(i_240233) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
						LOC26 = levalue_198374(a, (*s).kindU.S6.sons->data[i_240233]);
						if (!(LOC26)) goto LA27;
						if (((TMP4086[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
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
				TMP4091 = addInt(res_240258, ((NI) 1));
				res_240258 = (NI)(TMP4091);
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
	bitsetinit_239021(b, ((NI)chckRange64(LOC1, ((NI) (-2147483647 -1)), ((NI) 2147483647))));
	{
		NI i_240296;
		NI HEX3Atmp_240325;
		NI LOC3;
		NI TMP4092;
		NI res_240328;
		i_240296 = 0;
		HEX3Atmp_240325 = 0;
		nimln(81, "nimsets.nim");
		LOC3 = 0;
		LOC3 = sonslen_193403(s);
		TMP4092 = subInt(LOC3, ((NI) 1));
		HEX3Atmp_240325 = (NI)(TMP4092);
		nimln(1598, "system.nim");
		res_240328 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4096;
				if (!(res_240328 <= HEX3Atmp_240325)) goto LA5;
				nimln(1600, "system.nim");
				i_240296 = res_240328;
				nimln(82, "nimsets.nim");
				{
					if (((TMP4086[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
					if ((NU)(i_240296) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (!((*(*s).kindU.S6.sons->data[i_240296]).kind == ((NU8) 44))) goto LA8;
					nimln(83, "nimsets.nim");
					if (((TMP4086[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
					if ((NU)(i_240296) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (((TMP4086[(*(*s).kindU.S6.sons->data[i_240296]).kind/8] &(1<<((*(*s).kindU.S6.sons->data[i_240296]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
					if ((NU)(((NI) 0)) >= (NU)((*(*s).kindU.S6.sons->data[i_240296]).kindU.S6.sons->Sup.len)) raiseIndexError();
					j = getordvalue_220178((*(*s).kindU.S6.sons->data[i_240296]).kindU.S6.sons->data[((NI) 0)]);
					{
						nimln(84, "nimsets.nim");
						while (1) {
							NI64 LOC12;
							NI64 TMP4093;
							NI64 TMP4094;
							if (((TMP4086[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
							if ((NU)(i_240296) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
							if (((TMP4086[(*(*s).kindU.S6.sons->data[i_240296]).kind/8] &(1<<((*(*s).kindU.S6.sons->data[i_240296]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
							if ((NU)(((NI) 1)) >= (NU)((*(*s).kindU.S6.sons->data[i_240296]).kindU.S6.sons->Sup.len)) raiseIndexError();
							LOC12 = 0;
							LOC12 = getordvalue_220178((*(*s).kindU.S6.sons->data[i_240296]).kindU.S6.sons->data[((NI) 1)]);
							if (!(j <= LOC12)) goto LA11;
							nimln(85, "nimsets.nim");
							TMP4093 = subInt64(j, first);
							bitsetincl_239061(b, (NI64)(TMP4093));
							nimln(86, "nimsets.nim");
							TMP4094 = addInt64(j, ((NI) 1));
							j = (NI64)(TMP4094);
						} LA11: ;
					}
				}
				goto LA6;
				LA8: ;
				{
					NI64 LOC14;
					NI64 TMP4095;
					nimln(88, "nimsets.nim");
					if (((TMP4086[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
					if ((NU)(i_240296) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
					LOC14 = 0;
					LOC14 = getordvalue_220178((*s).kindU.S6.sons->data[i_240296]);
					TMP4095 = subInt64(LOC14, first);
					bitsetincl_239061(b, (NI64)(TMP4095));
				}
				LA6: ;
				nimln(1614, "system.nim");
				TMP4096 = addInt(res_240328, ((NI) 1));
				res_240328 = (NI)(TMP4096);
			} LA5: ;
		}
	}
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

N_NIMCALL(Tnode190813*, totreeset_240353)(Tbitset239012* s, Ttype190849* settype, Tlineinfo162338 info) {
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
			NI TMP4097;
			NI64 TMP4104;
			TMP4097 = mulInt((s ? s->Sup.len : 0), ((NI) 8));
			if (!(e < ((NI64) ((NI)(TMP4097))))) goto LA2;
			nimln(102, "nimsets.nim");
			{
				NIM_BOOL LOC5;
				NI64 TMP4100;
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
						NI64 TMP4098;
						nimln(106, "nimsets.nim");
						TMP4098 = addInt64(b, ((NI) 1));
						b = (NI64)(TMP4098);
						nimln(107, "nimsets.nim");
						{
							NIM_BOOL LOC12;
							NI TMP4099;
							NIM_BOOL LOC14;
							LOC12 = 0;
							TMP4099 = mulInt((s ? s->Sup.len : 0), ((NI) 8));
							LOC12 = (((NI64) ((NI)(TMP4099))) <= b);
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
				TMP4100 = subInt64(b, ((NI) 1));
				b = (NI64)(TMP4100);
				nimln(109, "nimsets.nim");
				{
					NI64 TMP4101;
					Tnode190813* LOC21;
					if (!(a == b)) goto LA19;
					nimln(110, "nimsets.nim");
					TMP4101 = addInt64(a, first);
					LOC21 = 0;
					LOC21 = newinttypenode_191620(((NU8) 6), (NI64)(TMP4101), elemtype);
					addson_192819(result, LOC21);
				}
				goto LA17;
				LA19: ;
				{
					NI64 TMP4102;
					Tnode190813* LOC23;
					NI64 TMP4103;
					Tnode190813* LOC24;
					nimln(112, "nimsets.nim");
					n = newnodei_192351(((NU8) 44), info);
					nimln(113, "nimsets.nim");
					asgnRefNoCycle((void**) (&(*n).typ), elemtype);
					nimln(114, "nimsets.nim");
					TMP4102 = addInt64(a, first);
					LOC23 = 0;
					LOC23 = newinttypenode_191620(((NU8) 6), (NI64)(TMP4102), elemtype);
					addson_192819(n, LOC23);
					nimln(115, "nimsets.nim");
					TMP4103 = addInt64(b, first);
					LOC24 = 0;
					LOC24 = newinttypenode_191620(((NU8) 6), (NI64)(TMP4103), elemtype);
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
			TMP4104 = addInt64(e, ((NI) 1));
			e = (NI64)(TMP4104);
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
	result = totreeset_240353(x, (*a).typ, (*a).info);
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
	result = totreeset_240353(x, (*a).typ, (*a).info);
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
	result = totreeset_240353(x, (*a).typ, (*a).info);
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
	result = totreeset_240353(x, (*a).typ, (*a).info);
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

N_NIMCALL(Tnode190813*, complement_240549)(Tnode190813* a) {
	Tnode190813* result;
	Tbitset239012* x;
	nimfr("complement", "nimsets.nim")
	result = 0;
	x = 0;
	nimln(146, "nimsets.nim");
	tobitset_240004(a, (&x));
	{
		NI i_240567;
		NI HEX3Atmp_240570;
		NI res_240573;
		i_240567 = 0;
		HEX3Atmp_240570 = 0;
		nimln(147, "nimsets.nim");
		HEX3Atmp_240570 = (x ? (x->Sup.len-1) : -1);
		nimln(1598, "system.nim");
		res_240573 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4105;
				if (!(res_240573 <= HEX3Atmp_240570)) goto LA3;
				nimln(1600, "system.nim");
				i_240567 = res_240573;
				nimln(147, "nimsets.nim");
				if ((NU)(i_240567) >= (NU)(x->Sup.len)) raiseIndexError();
				if ((NU)(i_240567) >= (NU)(x->Sup.len)) raiseIndexError();
				x->data[i_240567] = (NI8)((NU8) ~(x->data[i_240567]));
				nimln(1614, "system.nim");
				TMP4105 = addInt(res_240573, ((NI) 1));
				res_240573 = (NI)(TMP4105);
			} LA3: ;
		}
	}
	nimln(148, "nimsets.nim");
	result = totreeset_240353(x, (*a).typ, (*a).info);
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
		NI i_240608;
		NI HEX3Atmp_240633;
		NI LOC2;
		NI TMP4106;
		NI res_240636;
		i_240608 = 0;
		HEX3Atmp_240633 = 0;
		nimln(154, "nimsets.nim");
		LOC2 = 0;
		LOC2 = sonslen_193403(s);
		TMP4106 = subInt(LOC2, ((NI) 1));
		HEX3Atmp_240633 = (NI)(TMP4106);
		nimln(1598, "system.nim");
		res_240636 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4111;
				if (!(res_240636 <= HEX3Atmp_240633)) goto LA4;
				nimln(1600, "system.nim");
				i_240608 = res_240636;
				nimln(155, "nimsets.nim");
				{
					NI64 LOC9;
					NI64 TMP4107;
					NI64 LOC10;
					NI64 TMP4108;
					NI64 TMP4109;
					if (((TMP4086[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
					if ((NU)(i_240608) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (!((*(*s).kindU.S6.sons->data[i_240608]).kind == ((NU8) 44))) goto LA7;
					nimln(156, "nimsets.nim");
					nimln(157, "nimsets.nim");
					nimln(156, "nimsets.nim");
					if (((TMP4086[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
					if ((NU)(i_240608) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (((TMP4086[(*(*s).kindU.S6.sons->data[i_240608]).kind/8] &(1<<((*(*s).kindU.S6.sons->data[i_240608]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
					if ((NU)(((NI) 1)) >= (NU)((*(*s).kindU.S6.sons->data[i_240608]).kindU.S6.sons->Sup.len)) raiseIndexError();
					LOC9 = 0;
					LOC9 = getordvalue_220178((*(*s).kindU.S6.sons->data[i_240608]).kindU.S6.sons->data[((NI) 1)]);
					TMP4107 = addInt64(result, LOC9);
					nimln(157, "nimsets.nim");
					if (((TMP4086[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
					if ((NU)(i_240608) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (((TMP4086[(*(*s).kindU.S6.sons->data[i_240608]).kind/8] &(1<<((*(*s).kindU.S6.sons->data[i_240608]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
					if ((NU)(((NI) 0)) >= (NU)((*(*s).kindU.S6.sons->data[i_240608]).kindU.S6.sons->Sup.len)) raiseIndexError();
					LOC10 = 0;
					LOC10 = getordvalue_220178((*(*s).kindU.S6.sons->data[i_240608]).kindU.S6.sons->data[((NI) 0)]);
					TMP4108 = subInt64((NI64)(TMP4107), LOC10);
					TMP4109 = addInt64((NI64)(TMP4108), IL64(1));
					result = (NI64)(TMP4109);
				}
				goto LA5;
				LA7: ;
				{
					NI64 TMP4110;
					nimln(159, "nimsets.nim");
					TMP4110 = addInt64(result, ((NI) 1));
					result = (NI64)(TMP4110);
				}
				LA5: ;
				nimln(1614, "system.nim");
				TMP4111 = addInt(res_240636, ((NI) 1));
				res_240636 = (NI)(TMP4111);
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
		internalerror_164199((*s).info, ((NimStringDesc*) &TMP4112));
		nimln(164, "nimsets.nim");
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_240680;
		NI HEX3Atmp_240692;
		NI LOC6;
		NI TMP4113;
		NI res_240695;
		i_240680 = 0;
		HEX3Atmp_240692 = 0;
		nimln(165, "nimsets.nim");
		LOC6 = 0;
		LOC6 = sonslen_193403(s);
		TMP4113 = subInt(LOC6, ((NI) 1));
		HEX3Atmp_240692 = (NI)(TMP4113);
		nimln(1598, "system.nim");
		res_240695 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4114;
				if (!(res_240695 <= HEX3Atmp_240692)) goto LA8;
				nimln(1600, "system.nim");
				i_240680 = res_240695;
				nimln(166, "nimsets.nim");
				{
					if (((TMP4086[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4087));
					if ((NU)(i_240680) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (!((*(*s).kindU.S6.sons->data[i_240680]).kind == ((NU8) 44))) goto LA11;
					nimln(167, "nimsets.nim");
					result = NIM_TRUE;
					goto BeforeRet;
				}
				LA11: ;
				nimln(1614, "system.nim");
				TMP4114 = addInt(res_240695, ((NI) 1));
				res_240695 = (NI)(TMP4114);
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

