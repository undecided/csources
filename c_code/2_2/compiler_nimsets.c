/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct Tnode191813 Tnode191813;
typedef struct Ttype191849 Ttype191849;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym191843 Tsym191843;
typedef struct Tident167021 Tident167021;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Tbitset240012 Tbitset240012;
typedef struct Tidobj167015 Tidobj167015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj161009 Ropeobj161009;
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
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Tlib191831 Tlib191831;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tlistentry130022 Tlistentry130022;
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
struct  Tloc191827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype191849* t;
Ropeobj161009* r;
Ropeobj161009* heaproot;
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
struct  Tstrtable191817  {
NI counter;
Tsymseq191815* data;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Ropeobj161009  {
  TNimObject Sup;
Ropeobj161009* left;
Ropeobj161009* right;
NI length;
NimStringDesc* data;
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
struct  Tscope191837  {
NI depthlevel;
Tstrtable191817 symbols;
Tnodeseq191807* usingsyms;
Tscope191837* parent;
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
struct Tbitset240012 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
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
N_NIMCALL(NIM_BOOL, inset_241019)(Tnode191813* s, Tnode191813* elem);
N_NIMCALL(void, internalerror_165199)(Tlineinfo163338 info, NimStringDesc* errmsg);
N_NIMCALL(NI, sonslen_194403)(Tnode191813* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, levalue_199374)(Tnode191813* a, Tnode191813* b);
N_NIMCALL(NIM_BOOL, samevalue_199324)(Tnode191813* a, Tnode191813* b);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NIM_BOOL, overlap_241012)(Tnode191813* a, Tnode191813* b);
N_NIMCALL(NIM_BOOL, someinset_241026)(Tnode191813* s, Tnode191813* a, Tnode191813* b);
N_NIMCALL(void, tobitset_241004)(Tnode191813* s, Tbitset240012** b);
N_NIMCALL(NI64, firstord_221004)(Ttype191849* t);
N_NIMCALL(void, bitsetinit_240021)(Tbitset240012** b, NI length);
N_NIMCALL(NI64, getsize_221190)(Ttype191849* typ);
N_NIMCALL(NI64, getordvalue_221178)(Tnode191813* n);
N_NIMCALL(void, bitsetincl_240061)(Tbitset240012** x, NI64 elem);
static N_INLINE(NI64, subInt64)(NI64 a, NI64 b);
static N_INLINE(NI64, addInt64)(NI64 a, NI64 b);
N_NIMCALL(Tnode191813*, totreeset_241354)(Tbitset240012* s, Ttype191849* settype, Tlineinfo163338 info);
N_NIMCALL(Tnode191813*, newnodei_193351)(NU8 kind, Tlineinfo163338 info);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr);
static N_INLINE(void, rtladdzct_51804)(Tcell46747* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46763* s, Tcell46747* c);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NIM_BOOL, bitsetin_240077)(Tbitset240012* x, NI64 e);
N_NIMCALL(void, addson_193819)(Tnode191813* father, Tnode191813* son);
N_NIMCALL(Tnode191813*, newinttypenode_192619)(NU8 kind, NI64 intval, Ttype191849* typ);
N_NIMCALL(Tnode191813*, unionsets_241047)(Tnode191813* a, Tnode191813* b);
N_NIMCALL(void, bitsetunion_240029)(Tbitset240012** x, Tbitset240012* y);
N_NIMCALL(Tnode191813*, diffsets_241054)(Tnode191813* a, Tnode191813* b);
N_NIMCALL(void, bitsetdiff_240037)(Tbitset240012** x, Tbitset240012* y);
N_NIMCALL(Tnode191813*, intersectsets_241061)(Tnode191813* a, Tnode191813* b);
N_NIMCALL(void, bitsetintersect_240053)(Tbitset240012** x, Tbitset240012* y);
N_NIMCALL(Tnode191813*, symdiffsets_241068)(Tnode191813* a, Tnode191813* b);
N_NIMCALL(void, bitsetsymdiff_240045)(Tbitset240012** x, Tbitset240012* y);
N_NIMCALL(NIM_BOOL, containssets_241075)(Tnode191813* a, Tnode191813* b);
N_NIMCALL(NIM_BOOL, bitsetcontains_240091)(Tbitset240012* x, Tbitset240012* y);
N_NIMCALL(NIM_BOOL, equalsets_241082)(Tnode191813* a, Tnode191813* b);
N_NIMCALL(NIM_BOOL, bitsetequals_240084)(Tbitset240012* x, Tbitset240012* y);
N_NIMCALL(Tnode191813*, complement_241550)(Tnode191813* a);
N_NIMCALL(NI64, cardset_241089)(Tnode191813* s);
N_NIMCALL(NIM_BOOL, sethasrange_241041)(Tnode191813* s);
N_NIMCALL(NIM_BOOL, emptyrange_241034)(Tnode191813* a, Tnode191813* b);
STRING_LITERAL(TMP4087, "inSet", 5);
static NIM_CONST TY192031 TMP4089 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4090, "sons", 4);
STRING_LITERAL(TMP4092, "SomeInSet", 9);
STRING_LITERAL(TMP4115, "SetHasRange", 11);
extern TFrame* frameptr_17042;
extern Tgcheap48616 gch_48644;

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

N_NIMCALL(NIM_BOOL, inset_241019)(Tnode191813* s, Tnode191813* elem) {
	NIM_BOOL result;
	nimfr("inSet", "nimsets.nim")
{	result = 0;
	nimln(34, "nimsets.nim");
	{
		if (!!(((*s).kind == ((NU8) 39)))) goto LA3;
		nimln(35, "nimsets.nim");
		internalerror_165199((*s).info, ((NimStringDesc*) &TMP4087));
		nimln(36, "nimsets.nim");
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_241121;
		NI HEX3Atmp_241138;
		NI LOC6;
		NI TMP4088;
		NI res_241141;
		i_241121 = 0;
		HEX3Atmp_241138 = 0;
		nimln(37, "nimsets.nim");
		LOC6 = 0;
		LOC6 = sonslen_194403(s);
		TMP4088 = subInt(LOC6, ((NI) 1));
		HEX3Atmp_241138 = (NI)(TMP4088);
		nimln(1598, "system.nim");
		res_241141 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4091;
				if (!(res_241141 <= HEX3Atmp_241138)) goto LA8;
				nimln(1600, "system.nim");
				i_241121 = res_241141;
				nimln(38, "nimsets.nim");
				{
					if (((TMP4089[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
					if ((NU)(i_241121) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (!((*(*s).kindU.S6.sons->data[i_241121]).kind == ((NU8) 44))) goto LA11;
					nimln(39, "nimsets.nim");
					{
						NIM_BOOL LOC15;
						LOC15 = 0;
						if (((TMP4089[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
						if ((NU)(i_241121) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP4089[(*(*s).kindU.S6.sons->data[i_241121]).kind/8] &(1<<((*(*s).kindU.S6.sons->data[i_241121]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
						if ((NU)(((NI) 0)) >= (NU)((*(*s).kindU.S6.sons->data[i_241121]).kindU.S6.sons->Sup.len)) raiseIndexError();
						LOC15 = levalue_199374((*(*s).kindU.S6.sons->data[i_241121]).kindU.S6.sons->data[((NI) 0)], elem);
						if (!(LOC15)) goto LA16;
						nimln(40, "nimsets.nim");
						if (((TMP4089[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
						if ((NU)(i_241121) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP4089[(*(*s).kindU.S6.sons->data[i_241121]).kind/8] &(1<<((*(*s).kindU.S6.sons->data[i_241121]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
						if ((NU)(((NI) 1)) >= (NU)((*(*s).kindU.S6.sons->data[i_241121]).kindU.S6.sons->Sup.len)) raiseIndexError();
						LOC15 = levalue_199374(elem, (*(*s).kindU.S6.sons->data[i_241121]).kindU.S6.sons->data[((NI) 1)]);
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
						if (((TMP4089[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
						if ((NU)(i_241121) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
						LOC22 = 0;
						LOC22 = samevalue_199324((*s).kindU.S6.sons->data[i_241121], elem);
						if (!LOC22) goto LA23;
						nimln(44, "nimsets.nim");
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA23: ;
				}
				LA9: ;
				nimln(1614, "system.nim");
				TMP4091 = addInt(res_241141, ((NI) 1));
				res_241141 = (NI)(TMP4091);
			} LA8: ;
		}
	}
	nimln(45, "nimsets.nim");
	result = NIM_FALSE;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, overlap_241012)(Tnode191813* a, Tnode191813* b) {
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
			if (((TMP4089[(*a).kind/8] &(1<<((*a).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
			if ((NU)(((NI) 0)) >= (NU)((*a).kindU.S6.sons->Sup.len)) raiseIndexError();
			if (((TMP4089[(*b).kind/8] &(1<<((*b).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
			if ((NU)(((NI) 1)) >= (NU)((*b).kindU.S6.sons->Sup.len)) raiseIndexError();
			LOC9 = levalue_199374((*a).kindU.S6.sons->data[((NI) 0)], (*b).kindU.S6.sons->data[((NI) 1)]);
			if (!(LOC9)) goto LA10;
			nimln(52, "nimsets.nim");
			if (((TMP4089[(*b).kind/8] &(1<<((*b).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
			if ((NU)(((NI) 0)) >= (NU)((*b).kindU.S6.sons->Sup.len)) raiseIndexError();
			if (((TMP4089[(*a).kind/8] &(1<<((*a).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
			if ((NU)(((NI) 1)) >= (NU)((*a).kindU.S6.sons->Sup.len)) raiseIndexError();
			LOC9 = levalue_199374((*b).kindU.S6.sons->data[((NI) 0)], (*a).kindU.S6.sons->data[((NI) 1)]);
			LA10: ;
			result = LOC9;
		}
		goto LA5;
		LA7: ;
		{
			NIM_BOOL LOC12;
			nimln(54, "nimsets.nim");
			LOC12 = 0;
			if (((TMP4089[(*a).kind/8] &(1<<((*a).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
			if ((NU)(((NI) 0)) >= (NU)((*a).kindU.S6.sons->Sup.len)) raiseIndexError();
			LOC12 = levalue_199374((*a).kindU.S6.sons->data[((NI) 0)], b);
			if (!(LOC12)) goto LA13;
			if (((TMP4089[(*a).kind/8] &(1<<((*a).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
			if ((NU)(((NI) 1)) >= (NU)((*a).kindU.S6.sons->Sup.len)) raiseIndexError();
			LOC12 = levalue_199374(b, (*a).kindU.S6.sons->data[((NI) 1)]);
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
			if (((TMP4089[(*b).kind/8] &(1<<((*b).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
			if ((NU)(((NI) 0)) >= (NU)((*b).kindU.S6.sons->Sup.len)) raiseIndexError();
			LOC19 = levalue_199374((*b).kindU.S6.sons->data[((NI) 0)], a);
			if (!(LOC19)) goto LA20;
			if (((TMP4089[(*b).kind/8] &(1<<((*b).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
			if ((NU)(((NI) 1)) >= (NU)((*b).kindU.S6.sons->Sup.len)) raiseIndexError();
			LOC19 = levalue_199374(a, (*b).kindU.S6.sons->data[((NI) 1)]);
			LA20: ;
			result = LOC19;
		}
		goto LA15;
		LA17: ;
		{
			nimln(59, "nimsets.nim");
			result = samevalue_199324(a, b);
		}
		LA15: ;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, someinset_241026)(Tnode191813* s, Tnode191813* a, Tnode191813* b) {
	NIM_BOOL result;
	nimfr("someInSet", "nimsets.nim")
{	result = 0;
	nimln(63, "nimsets.nim");
	{
		if (!!(((*s).kind == ((NU8) 39)))) goto LA3;
		nimln(64, "nimsets.nim");
		internalerror_165199((*s).info, ((NimStringDesc*) &TMP4092));
		nimln(65, "nimsets.nim");
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_241233;
		NI HEX3Atmp_241255;
		NI LOC6;
		NI TMP4093;
		NI res_241258;
		i_241233 = 0;
		HEX3Atmp_241255 = 0;
		nimln(66, "nimsets.nim");
		LOC6 = 0;
		LOC6 = sonslen_194403(s);
		TMP4093 = subInt(LOC6, ((NI) 1));
		HEX3Atmp_241255 = (NI)(TMP4093);
		nimln(1598, "system.nim");
		res_241258 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4094;
				if (!(res_241258 <= HEX3Atmp_241255)) goto LA8;
				nimln(1600, "system.nim");
				i_241233 = res_241258;
				nimln(67, "nimsets.nim");
				{
					if (((TMP4089[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
					if ((NU)(i_241233) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (!((*(*s).kindU.S6.sons->data[i_241233]).kind == ((NU8) 44))) goto LA11;
					nimln(68, "nimsets.nim");
					{
						NIM_BOOL LOC15;
						NIM_BOOL LOC16;
						NIM_BOOL LOC19;
						LOC15 = 0;
						LOC16 = 0;
						if (((TMP4089[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
						if ((NU)(i_241233) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP4089[(*(*s).kindU.S6.sons->data[i_241233]).kind/8] &(1<<((*(*s).kindU.S6.sons->data[i_241233]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
						if ((NU)(((NI) 0)) >= (NU)((*(*s).kindU.S6.sons->data[i_241233]).kindU.S6.sons->Sup.len)) raiseIndexError();
						LOC16 = levalue_199374((*(*s).kindU.S6.sons->data[i_241233]).kindU.S6.sons->data[((NI) 0)], b);
						if (!(LOC16)) goto LA17;
						if (((TMP4089[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
						if ((NU)(i_241233) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP4089[(*(*s).kindU.S6.sons->data[i_241233]).kind/8] &(1<<((*(*s).kindU.S6.sons->data[i_241233]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
						if ((NU)(((NI) 1)) >= (NU)((*(*s).kindU.S6.sons->data[i_241233]).kindU.S6.sons->Sup.len)) raiseIndexError();
						LOC16 = levalue_199374(b, (*(*s).kindU.S6.sons->data[i_241233]).kindU.S6.sons->data[((NI) 1)]);
						LA17: ;
						LOC15 = LOC16;
						if (LOC15) goto LA18;
						nimln(69, "nimsets.nim");
						LOC19 = 0;
						if (((TMP4089[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
						if ((NU)(i_241233) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP4089[(*(*s).kindU.S6.sons->data[i_241233]).kind/8] &(1<<((*(*s).kindU.S6.sons->data[i_241233]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
						if ((NU)(((NI) 0)) >= (NU)((*(*s).kindU.S6.sons->data[i_241233]).kindU.S6.sons->Sup.len)) raiseIndexError();
						LOC19 = levalue_199374((*(*s).kindU.S6.sons->data[i_241233]).kindU.S6.sons->data[((NI) 0)], a);
						if (!(LOC19)) goto LA20;
						if (((TMP4089[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
						if ((NU)(i_241233) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP4089[(*(*s).kindU.S6.sons->data[i_241233]).kind/8] &(1<<((*(*s).kindU.S6.sons->data[i_241233]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
						if ((NU)(((NI) 1)) >= (NU)((*(*s).kindU.S6.sons->data[i_241233]).kindU.S6.sons->Sup.len)) raiseIndexError();
						LOC19 = levalue_199374(a, (*(*s).kindU.S6.sons->data[i_241233]).kindU.S6.sons->data[((NI) 1)]);
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
						if (((TMP4089[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
						if ((NU)(i_241233) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
						LOC26 = levalue_199374(a, (*s).kindU.S6.sons->data[i_241233]);
						if (!(LOC26)) goto LA27;
						if (((TMP4089[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
						if ((NU)(i_241233) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
						LOC26 = levalue_199374((*s).kindU.S6.sons->data[i_241233], b);
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
				TMP4094 = addInt(res_241258, ((NI) 1));
				res_241258 = (NI)(TMP4094);
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

N_NIMCALL(void, tobitset_241004)(Tnode191813* s, Tbitset240012** b) {
	NI64 first;
	NI64 j;
	NI64 LOC1;
	nimfr("toBitSet", "nimsets.nim")
	first = 0;
	j = 0;
	nimln(79, "nimsets.nim");
	if ((NU)(((NI) 0)) >= (NU)((*(*s).typ).sons->Sup.len)) raiseIndexError();
	first = firstord_221004((*(*s).typ).sons->data[((NI) 0)]);
	nimln(80, "nimsets.nim");
	LOC1 = 0;
	LOC1 = getsize_221190((*s).typ);
	bitsetinit_240021(b, ((NI) (LOC1)));
	{
		NI i_241296;
		NI HEX3Atmp_241326;
		NI LOC3;
		NI TMP4095;
		NI res_241329;
		i_241296 = 0;
		HEX3Atmp_241326 = 0;
		nimln(81, "nimsets.nim");
		LOC3 = 0;
		LOC3 = sonslen_194403(s);
		TMP4095 = subInt(LOC3, ((NI) 1));
		HEX3Atmp_241326 = (NI)(TMP4095);
		nimln(1598, "system.nim");
		res_241329 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4099;
				if (!(res_241329 <= HEX3Atmp_241326)) goto LA5;
				nimln(1600, "system.nim");
				i_241296 = res_241329;
				nimln(82, "nimsets.nim");
				{
					if (((TMP4089[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
					if ((NU)(i_241296) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (!((*(*s).kindU.S6.sons->data[i_241296]).kind == ((NU8) 44))) goto LA8;
					nimln(83, "nimsets.nim");
					if (((TMP4089[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
					if ((NU)(i_241296) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (((TMP4089[(*(*s).kindU.S6.sons->data[i_241296]).kind/8] &(1<<((*(*s).kindU.S6.sons->data[i_241296]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
					if ((NU)(((NI) 0)) >= (NU)((*(*s).kindU.S6.sons->data[i_241296]).kindU.S6.sons->Sup.len)) raiseIndexError();
					j = getordvalue_221178((*(*s).kindU.S6.sons->data[i_241296]).kindU.S6.sons->data[((NI) 0)]);
					{
						nimln(84, "nimsets.nim");
						while (1) {
							NI64 LOC12;
							NI64 TMP4096;
							NI64 TMP4097;
							if (((TMP4089[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
							if ((NU)(i_241296) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
							if (((TMP4089[(*(*s).kindU.S6.sons->data[i_241296]).kind/8] &(1<<((*(*s).kindU.S6.sons->data[i_241296]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
							if ((NU)(((NI) 1)) >= (NU)((*(*s).kindU.S6.sons->data[i_241296]).kindU.S6.sons->Sup.len)) raiseIndexError();
							LOC12 = 0;
							LOC12 = getordvalue_221178((*(*s).kindU.S6.sons->data[i_241296]).kindU.S6.sons->data[((NI) 1)]);
							if (!(j <= LOC12)) goto LA11;
							nimln(85, "nimsets.nim");
							TMP4096 = subInt64(j, first);
							bitsetincl_240061(b, (NI64)(TMP4096));
							nimln(86, "nimsets.nim");
							TMP4097 = addInt64(j, ((NI) 1));
							j = (NI64)(TMP4097);
						} LA11: ;
					}
				}
				goto LA6;
				LA8: ;
				{
					NI64 LOC14;
					NI64 TMP4098;
					nimln(88, "nimsets.nim");
					if (((TMP4089[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
					if ((NU)(i_241296) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
					LOC14 = 0;
					LOC14 = getordvalue_221178((*s).kindU.S6.sons->data[i_241296]);
					TMP4098 = subInt64(LOC14, first);
					bitsetincl_240061(b, (NI64)(TMP4098));
				}
				LA6: ;
				nimln(1614, "system.nim");
				TMP4099 = addInt(res_241329, ((NI) 1));
				res_241329 = (NI)(TMP4099);
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

N_NIMCALL(Tnode191813*, totreeset_241354)(Tbitset240012* s, Ttype191849* settype, Tlineinfo163338 info) {
	Tnode191813* result;
	NI64 a;
	NI64 b;
	NI64 e;
	NI64 first;
	Ttype191849* elemtype;
	Tnode191813* n;
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
	first = firstord_221004(elemtype);
	nimln(97, "nimsets.nim");
	result = newnodei_193351(((NU8) 39), info);
	nimln(98, "nimsets.nim");
	asgnRefNoCycle((void**) (&(*result).typ), settype);
	nimln(99, "nimsets.nim");
	(*result).info = info;
	nimln(100, "nimsets.nim");
	e = IL64(0);
	{
		nimln(101, "nimsets.nim");
		while (1) {
			NI TMP4100;
			NI64 TMP4107;
			TMP4100 = mulInt((s ? s->Sup.len : 0), ((NI) 8));
			if (!(e < ((NI64) ((NI)(TMP4100))))) goto LA2;
			nimln(102, "nimsets.nim");
			{
				NIM_BOOL LOC5;
				NI64 TMP4103;
				LOC5 = 0;
				LOC5 = bitsetin_240077(s, e);
				if (!LOC5) goto LA6;
				nimln(103, "nimsets.nim");
				a = e;
				nimln(104, "nimsets.nim");
				b = e;
				{
					nimln(105, "nimsets.nim");
					while (1) {
						NI64 TMP4101;
						nimln(106, "nimsets.nim");
						TMP4101 = addInt64(b, ((NI) 1));
						b = (NI64)(TMP4101);
						nimln(107, "nimsets.nim");
						{
							NIM_BOOL LOC12;
							NI TMP4102;
							NIM_BOOL LOC14;
							LOC12 = 0;
							TMP4102 = mulInt((s ? s->Sup.len : 0), ((NI) 8));
							LOC12 = (((NI64) ((NI)(TMP4102))) <= b);
							if (LOC12) goto LA13;
							LOC14 = 0;
							LOC14 = bitsetin_240077(s, b);
							LOC12 = !(LOC14);
							LA13: ;
							if (!LOC12) goto LA15;
							goto LA8;
						}
						LA15: ;
					}
				} LA8: ;
				nimln(108, "nimsets.nim");
				TMP4103 = subInt64(b, ((NI) 1));
				b = (NI64)(TMP4103);
				nimln(109, "nimsets.nim");
				{
					NI64 TMP4104;
					Tnode191813* LOC21;
					if (!(a == b)) goto LA19;
					nimln(110, "nimsets.nim");
					TMP4104 = addInt64(a, first);
					LOC21 = 0;
					LOC21 = newinttypenode_192619(((NU8) 6), (NI64)(TMP4104), elemtype);
					addson_193819(result, LOC21);
				}
				goto LA17;
				LA19: ;
				{
					NI64 TMP4105;
					Tnode191813* LOC23;
					NI64 TMP4106;
					Tnode191813* LOC24;
					nimln(112, "nimsets.nim");
					n = newnodei_193351(((NU8) 44), info);
					nimln(113, "nimsets.nim");
					asgnRefNoCycle((void**) (&(*n).typ), elemtype);
					nimln(114, "nimsets.nim");
					TMP4105 = addInt64(a, first);
					LOC23 = 0;
					LOC23 = newinttypenode_192619(((NU8) 6), (NI64)(TMP4105), elemtype);
					addson_193819(n, LOC23);
					nimln(115, "nimsets.nim");
					TMP4106 = addInt64(b, first);
					LOC24 = 0;
					LOC24 = newinttypenode_192619(((NU8) 6), (NI64)(TMP4106), elemtype);
					addson_193819(n, LOC24);
					nimln(116, "nimsets.nim");
					addson_193819(result, n);
				}
				LA17: ;
				nimln(117, "nimsets.nim");
				e = b;
			}
			LA6: ;
			nimln(118, "nimsets.nim");
			TMP4107 = addInt64(e, ((NI) 1));
			e = (NI64)(TMP4107);
		} LA2: ;
	}
	popFrame();
	return result;
}

N_NIMCALL(Tnode191813*, unionsets_241047)(Tnode191813* a, Tnode191813* b) {
	Tnode191813* result;
	Tbitset240012* x;
	Tbitset240012* y;
	nimfr("unionSets", "nimsets.nim")
	result = 0;
	x = 0;
	y = 0;
	nimln(122, "nimsets.nim");
	tobitset_241004(a, (&x));
	nimln(123, "nimsets.nim");
	tobitset_241004(b, (&y));
	nimln(124, "nimsets.nim");
	bitsetunion_240029((&x), y);
	nimln(125, "nimsets.nim");
	result = totreeset_241354(x, (*a).typ, (*a).info);
	popFrame();
	return result;
}

N_NIMCALL(Tnode191813*, diffsets_241054)(Tnode191813* a, Tnode191813* b) {
	Tnode191813* result;
	Tbitset240012* x;
	Tbitset240012* y;
	nimfr("diffSets", "nimsets.nim")
	result = 0;
	x = 0;
	y = 0;
	nimln(122, "nimsets.nim");
	tobitset_241004(a, (&x));
	nimln(123, "nimsets.nim");
	tobitset_241004(b, (&y));
	nimln(124, "nimsets.nim");
	bitsetdiff_240037((&x), y);
	nimln(125, "nimsets.nim");
	result = totreeset_241354(x, (*a).typ, (*a).info);
	popFrame();
	return result;
}

N_NIMCALL(Tnode191813*, intersectsets_241061)(Tnode191813* a, Tnode191813* b) {
	Tnode191813* result;
	Tbitset240012* x;
	Tbitset240012* y;
	nimfr("intersectSets", "nimsets.nim")
	result = 0;
	x = 0;
	y = 0;
	nimln(122, "nimsets.nim");
	tobitset_241004(a, (&x));
	nimln(123, "nimsets.nim");
	tobitset_241004(b, (&y));
	nimln(124, "nimsets.nim");
	bitsetintersect_240053((&x), y);
	nimln(125, "nimsets.nim");
	result = totreeset_241354(x, (*a).typ, (*a).info);
	popFrame();
	return result;
}

N_NIMCALL(Tnode191813*, symdiffsets_241068)(Tnode191813* a, Tnode191813* b) {
	Tnode191813* result;
	Tbitset240012* x;
	Tbitset240012* y;
	nimfr("symdiffSets", "nimsets.nim")
	result = 0;
	x = 0;
	y = 0;
	nimln(122, "nimsets.nim");
	tobitset_241004(a, (&x));
	nimln(123, "nimsets.nim");
	tobitset_241004(b, (&y));
	nimln(124, "nimsets.nim");
	bitsetsymdiff_240045((&x), y);
	nimln(125, "nimsets.nim");
	result = totreeset_241354(x, (*a).typ, (*a).info);
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, containssets_241075)(Tnode191813* a, Tnode191813* b) {
	NIM_BOOL result;
	Tbitset240012* x;
	Tbitset240012* y;
	nimfr("containsSets", "nimsets.nim")
	result = 0;
	x = 0;
	y = 0;
	nimln(134, "nimsets.nim");
	tobitset_241004(a, (&x));
	nimln(135, "nimsets.nim");
	tobitset_241004(b, (&y));
	nimln(136, "nimsets.nim");
	result = bitsetcontains_240091(x, y);
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, equalsets_241082)(Tnode191813* a, Tnode191813* b) {
	NIM_BOOL result;
	Tbitset240012* x;
	Tbitset240012* y;
	nimfr("equalSets", "nimsets.nim")
	result = 0;
	x = 0;
	y = 0;
	nimln(140, "nimsets.nim");
	tobitset_241004(a, (&x));
	nimln(141, "nimsets.nim");
	tobitset_241004(b, (&y));
	nimln(142, "nimsets.nim");
	result = bitsetequals_240084(x, y);
	popFrame();
	return result;
}

N_NIMCALL(Tnode191813*, complement_241550)(Tnode191813* a) {
	Tnode191813* result;
	Tbitset240012* x;
	nimfr("complement", "nimsets.nim")
	result = 0;
	x = 0;
	nimln(146, "nimsets.nim");
	tobitset_241004(a, (&x));
	{
		NI i_241568;
		NI HEX3Atmp_241571;
		NI res_241574;
		i_241568 = 0;
		HEX3Atmp_241571 = 0;
		nimln(147, "nimsets.nim");
		HEX3Atmp_241571 = (x ? (x->Sup.len-1) : -1);
		nimln(1598, "system.nim");
		res_241574 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4108;
				if (!(res_241574 <= HEX3Atmp_241571)) goto LA3;
				nimln(1600, "system.nim");
				i_241568 = res_241574;
				nimln(147, "nimsets.nim");
				if ((NU)(i_241568) >= (NU)(x->Sup.len)) raiseIndexError();
				if ((NU)(i_241568) >= (NU)(x->Sup.len)) raiseIndexError();
				x->data[i_241568] = (NI8)((NU8) ~(x->data[i_241568]));
				nimln(1614, "system.nim");
				TMP4108 = addInt(res_241574, ((NI) 1));
				res_241574 = (NI)(TMP4108);
			} LA3: ;
		}
	}
	nimln(148, "nimsets.nim");
	result = totreeset_241354(x, (*a).typ, (*a).info);
	popFrame();
	return result;
}

N_NIMCALL(NI64, cardset_241089)(Tnode191813* s) {
	NI64 result;
	nimfr("cardSet", "nimsets.nim")
	result = 0;
	nimln(153, "nimsets.nim");
	result = IL64(0);
	{
		NI i_241609;
		NI HEX3Atmp_241634;
		NI LOC2;
		NI TMP4109;
		NI res_241637;
		i_241609 = 0;
		HEX3Atmp_241634 = 0;
		nimln(154, "nimsets.nim");
		LOC2 = 0;
		LOC2 = sonslen_194403(s);
		TMP4109 = subInt(LOC2, ((NI) 1));
		HEX3Atmp_241634 = (NI)(TMP4109);
		nimln(1598, "system.nim");
		res_241637 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4114;
				if (!(res_241637 <= HEX3Atmp_241634)) goto LA4;
				nimln(1600, "system.nim");
				i_241609 = res_241637;
				nimln(155, "nimsets.nim");
				{
					NI64 LOC9;
					NI64 TMP4110;
					NI64 LOC10;
					NI64 TMP4111;
					NI64 TMP4112;
					if (((TMP4089[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
					if ((NU)(i_241609) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (!((*(*s).kindU.S6.sons->data[i_241609]).kind == ((NU8) 44))) goto LA7;
					nimln(156, "nimsets.nim");
					nimln(157, "nimsets.nim");
					nimln(156, "nimsets.nim");
					if (((TMP4089[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
					if ((NU)(i_241609) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (((TMP4089[(*(*s).kindU.S6.sons->data[i_241609]).kind/8] &(1<<((*(*s).kindU.S6.sons->data[i_241609]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
					if ((NU)(((NI) 1)) >= (NU)((*(*s).kindU.S6.sons->data[i_241609]).kindU.S6.sons->Sup.len)) raiseIndexError();
					LOC9 = 0;
					LOC9 = getordvalue_221178((*(*s).kindU.S6.sons->data[i_241609]).kindU.S6.sons->data[((NI) 1)]);
					TMP4110 = addInt64(result, LOC9);
					nimln(157, "nimsets.nim");
					if (((TMP4089[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
					if ((NU)(i_241609) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (((TMP4089[(*(*s).kindU.S6.sons->data[i_241609]).kind/8] &(1<<((*(*s).kindU.S6.sons->data[i_241609]).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
					if ((NU)(((NI) 0)) >= (NU)((*(*s).kindU.S6.sons->data[i_241609]).kindU.S6.sons->Sup.len)) raiseIndexError();
					LOC10 = 0;
					LOC10 = getordvalue_221178((*(*s).kindU.S6.sons->data[i_241609]).kindU.S6.sons->data[((NI) 0)]);
					TMP4111 = subInt64((NI64)(TMP4110), LOC10);
					TMP4112 = addInt64((NI64)(TMP4111), IL64(1));
					result = (NI64)(TMP4112);
				}
				goto LA5;
				LA7: ;
				{
					NI64 TMP4113;
					nimln(159, "nimsets.nim");
					TMP4113 = addInt64(result, ((NI) 1));
					result = (NI64)(TMP4113);
				}
				LA5: ;
				nimln(1614, "system.nim");
				TMP4114 = addInt(res_241637, ((NI) 1));
				res_241637 = (NI)(TMP4114);
			} LA4: ;
		}
	}
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, sethasrange_241041)(Tnode191813* s) {
	NIM_BOOL result;
	nimfr("setHasRange", "nimsets.nim")
{	result = 0;
	nimln(162, "nimsets.nim");
	{
		if (!!(((*s).kind == ((NU8) 39)))) goto LA3;
		nimln(163, "nimsets.nim");
		internalerror_165199((*s).info, ((NimStringDesc*) &TMP4115));
		nimln(164, "nimsets.nim");
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_241681;
		NI HEX3Atmp_241693;
		NI LOC6;
		NI TMP4116;
		NI res_241696;
		i_241681 = 0;
		HEX3Atmp_241693 = 0;
		nimln(165, "nimsets.nim");
		LOC6 = 0;
		LOC6 = sonslen_194403(s);
		TMP4116 = subInt(LOC6, ((NI) 1));
		HEX3Atmp_241693 = (NI)(TMP4116);
		nimln(1598, "system.nim");
		res_241696 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4117;
				if (!(res_241696 <= HEX3Atmp_241693)) goto LA8;
				nimln(1600, "system.nim");
				i_241681 = res_241696;
				nimln(166, "nimsets.nim");
				{
					if (((TMP4089[(*s).kind/8] &(1<<((*s).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4090));
					if ((NU)(i_241681) >= (NU)((*s).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (!((*(*s).kindU.S6.sons->data[i_241681]).kind == ((NU8) 44))) goto LA11;
					nimln(167, "nimsets.nim");
					result = NIM_TRUE;
					goto BeforeRet;
				}
				LA11: ;
				nimln(1614, "system.nim");
				TMP4117 = addInt(res_241696, ((NI) 1));
				res_241696 = (NI)(TMP4117);
			} LA8: ;
		}
	}
	nimln(168, "nimsets.nim");
	result = NIM_FALSE;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, emptyrange_241034)(Tnode191813* a, Tnode191813* b) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	nimfr("emptyRange", "nimsets.nim")
	result = 0;
	nimln(171, "nimsets.nim");
	LOC1 = 0;
	LOC1 = levalue_199374(a, b);
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

