/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Tnode190813 Tnode190813;
typedef struct Templctx383019 Templctx383019;
typedef struct Tsym190843 Tsym190843;
typedef struct Tidtable190861 Tidtable190861;
typedef struct Tidpairseq190859 Tidpairseq190859;
typedef struct Ttype190849 Ttype190849;
typedef struct Tlineinfo162338 Tlineinfo162338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
typedef struct TY146211 TY146211;
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
typedef struct Tidpair190857 Tidpair190857;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct TY190933 TY190933;
struct  Tidtable190861  {
NI counter;
Tidpairseq190859* data;
};
struct  Templctx383019  {
Tsym190843* owner;
Tsym190843* gensymowner;
NIM_BOOL instlines;
Tidtable190861 mapping;
};
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
struct TY146211 {
NimStringDesc* Field0;
NI Field1;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  Tidpair190857  {
Tidobj166015* key;
TNimObject* val;
};
struct  Tident166021  {
  Tidobj166015 Sup;
NimStringDesc* s;
Tident166021* next;
NI h;
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
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
struct Tidpairseq190859 {
  TGenericSeq Sup;
  Tidpair190857 data[SEQ_DECL_SIZE];
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
N_NIMCALL(Tnode190813*, copynode_383027)(Templctx383019* ctx, Tnode190813* a, Tnode190813* b);
N_NIMCALL(Tnode190813*, copynode_194640)(Tnode190813* src);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, evaltemplateaux_383039)(Tnode190813* templ, Tnode190813* actual, Templctx383019* c, Tnode190813* result);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, len_191097)(Tnode190813* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, add_191164)(Tnode190813* father, Tnode190813* son);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(Tnode190813*, copytree_195028)(Tnode190813* src);
N_NIMCALL(void, internalerror_164218)(NimStringDesc* errmsg);
N_NIMCALL(NimStringDesc*, HEX24_164306)(TY146211 x);
N_NIMCALL(TNimObject*, idtableget_198182)(Tidtable190861 t, Tidobj166015* key);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(Tsym190843*, copysym_193607)(Tsym190843* s, NIM_BOOL keepid);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr);
static N_INLINE(void, rtladdzct_51804)(Tcell46747* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46763* s, Tcell46747* c);
N_NIMCALL(void, idtableput_198196)(Tidtable190861* t, Tidobj166015* key, TNimObject* val);
N_NIMCALL(Tnode190813*, newsymnode_192338)(Tsym190843* sym, Tlineinfo162338 info);
N_NIMCALL(NI, sonslen_193403)(Tnode190813* n);
N_NIMCALL(Tnode190813*, evaltemplateargs_383184)(Tnode190813* n, Tsym190843* s);
N_NIMCALL(NI, sonslen_193351)(Ttype190849* n);
N_NIMCALL(void, globalerror_164134)(Tlineinfo162338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tnode190813*, newnodei_192351)(NU8 kind, Tlineinfo162338 info);
N_NIMCALL(void, localerror_164155)(Tlineinfo162338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, addson_192819)(Tnode190813* father, Tnode190813* son);
N_NIMCALL(Tnode190813*, evaltemplate_383260)(Tnode190813* n, Tsym190843* tmpl, Tsym190843* gensymowner);
N_NIMCALL(void, initidtable_194057)(Tidtable190861* x);
N_NIMCALL(Tnode190813*, getbody_235648)(Tsym190843* s);
static N_INLINE(NIM_BOOL, isatom_195905)(Tnode190813* n);
N_NIMCALL(NimStringDesc*, rendertree_212058)(Tnode190813* n, NU8 renderflags);
static N_INLINE(NI, safelen_191125)(Tnode190813* n);
static NIM_CONST TY191031 TMP7623 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP7624, "sym", 3);
static NIM_CONST TY191031 TMP7625 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP7626, "sons", 4);
STRING_LITERAL(TMP7629, "compiler/evaltempl.nim", 22);
NIM_CONST TY146211 TMP7628 = {((NimStringDesc*) &TMP7629),
((NI) 39)}
;
STRING_LITERAL(TMP7632, "", 0);
extern TFrame* frameptr_17042;
extern TNimType NTI190843; /* TSym */
extern Tgcheap48616 gch_48644;
NI evaltemplatecounter_383256;

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

N_NIMCALL(Tnode190813*, copynode_383027)(Templctx383019* ctx, Tnode190813* a, Tnode190813* b) {
	Tnode190813* result;
	nimfr("copyNode", "evaltempl.nim")
	result = 0;
	nimln(24, "evaltempl.nim");
	result = copynode_194640(a);
	nimln(25, "evaltempl.nim");
	{
		if (!(*ctx).instlines) goto LA3;
		(*result).info = (*b).info;
	}
	LA3: ;
	popFrame();
	return result;
}

static N_INLINE(NI, len_191097)(Tnode190813* n) {
	NI result;
	nimfr("len", "ast.nim")
	result = 0;
	nimln(934, "ast.nim");
	{
		if (((TMP7625[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7626));
		if (!(*n).kindU.S6.sons == 0) goto LA3;
		result = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		nimln(935, "ast.nim");
		if (((TMP7625[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7626));
		result = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
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

N_NIMCALL(void, evaltemplateaux_383039)(Tnode190813* templ, Tnode190813* actual, Templctx383019* c, Tnode190813* result) {
	nimfr("evalTemplateAux", "evaltempl.nim")
	nimln(28, "evaltempl.nim");
	switch ((*templ).kind) {
	case ((NU8) 3):
	{
		Tsym190843* s;
		nimln(30, "evaltempl.nim");
		if (!(((TMP7623[(*templ).kind/8] &(1<<((*templ).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP7624));
		s = (*templ).kindU.S4.sym;
		nimln(31, "evaltempl.nim");
		{
			if (!((*(*s).owner).Sup.id == (*(*c).owner).Sup.id)) goto LA4;
			nimln(32, "evaltempl.nim");
			{
				NIM_BOOL LOC8;
				Tnode190813* x;
				LOC8 = 0;
				LOC8 = ((*s).kind == ((NU8) 3));
				if (!(LOC8)) goto LA9;
				LOC8 = !((((*s).flags &(1<<((((NU8) 31))&31)))!=0));
				LA9: ;
				if (!LOC8) goto LA10;
				nimln(33, "evaltempl.nim");
				if (((TMP7625[(*actual).kind/8] &(1<<((*actual).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7626));
				if ((NU)((*s).position) >= (NU)((*actual).kindU.S6.sons->Sup.len)) raiseIndexError();
				x = (*actual).kindU.S6.sons->data[(*s).position];
				nimln(34, "evaltempl.nim");
				{
					if (!((*x).kind == ((NU8) 152))) goto LA14;
					{
						Tnode190813* y_383083;
						y_383083 = 0;
						{
							NI i_383142;
							NI HEX3Atmp_383144;
							NI LOC18;
							NI res_383146;
							i_383142 = 0;
							HEX3Atmp_383144 = 0;
							nimln(1537, "ast.nim");
							LOC18 = 0;
							LOC18 = len_191097(x);
							HEX3Atmp_383144 = subInt(LOC18, 1);
							nimln(1598, "system.nim");
							res_383146 = ((NI) 0);
							{
								nimln(1599, "system.nim");
								while (1) {
									NI TMP7627;
									if (!(res_383146 <= HEX3Atmp_383144)) goto LA20;
									nimln(1600, "system.nim");
									i_383142 = res_383146;
									nimln(1537, "ast.nim");
									if (((TMP7625[(*x).kind/8] &(1<<((*x).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7626));
									if ((NU)(i_383142) >= (NU)((*x).kindU.S6.sons->Sup.len)) raiseIndexError();
									y_383083 = (*x).kindU.S6.sons->data[i_383142];
									nimln(35, "evaltempl.nim");
									add_191164(result, y_383083);
									nimln(1619, "system.nim");
									TMP7627 = addInt(res_383146, ((NI) 1));
									res_383146 = (NI)(TMP7627);
								} LA20: ;
							}
						}
					}
				}
				goto LA12;
				LA14: ;
				{
					Tnode190813* LOC22;
					nimln(37, "evaltempl.nim");
					LOC22 = 0;
					LOC22 = copytree_195028(x);
					add_191164(result, LOC22);
				}
				LA12: ;
			}
			goto LA6;
			LA10: ;
			{
				Tsym190843* x;
				Tidobj166015* LOC29;
				TNimObject* LOC30;
				Tlineinfo162338 LOC37;
				Tnode190813* LOC43;
				nimln(854, "msgs.nim");
				{
					NimStringDesc* LOC28;
					nimln(39, "evaltempl.nim");
					if (!!((((*s).flags &(1<<((((NU8) 31))&31)))!=0))) goto LA26;
					nimln(854, "msgs.nim");
					LOC28 = 0;
					LOC28 = HEX24_164306(TMP7628);
					internalerror_164218(LOC28);
				}
				LA26: ;
				nimln(40, "evaltempl.nim");
				LOC29 = 0;
				LOC29 = &s->Sup;
				LOC30 = 0;
				LOC30 = idtableget_198182((*c).mapping, LOC29);
				if (LOC30) chckObj((*LOC30).m_type, (&NTI190843));
				x = ((Tsym190843*) (LOC30));
				nimln(41, "evaltempl.nim");
				{
					Tidobj166015* LOC35;
					TNimObject* LOC36;
					if (!(x == NIM_NIL)) goto LA33;
					nimln(42, "evaltempl.nim");
					x = copysym_193607(s, NIM_FALSE);
					nimln(43, "evaltempl.nim");
					asgnRefNoCycle((void**) (&(*x).owner), (*c).gensymowner);
					nimln(44, "evaltempl.nim");
					LOC35 = 0;
					LOC35 = &s->Sup;
					LOC36 = 0;
					LOC36 = &x->Sup.Sup;
					idtableput_198196((&(*c).mapping), LOC35, LOC36);
				}
				LA33: ;
				nimln(45, "evaltempl.nim");
				{
					if (!(*c).instlines) goto LA40;
					LOC37 = (*actual).info;
				}
				goto LA38;
				LA40: ;
				{
					LOC37 = (*templ).info;
				}
				LA38: ;
				LOC43 = 0;
				LOC43 = newsymnode_192338(x, LOC37);
				add_191164(result, LOC43);
			}
			LA6: ;
		}
		goto LA2;
		LA4: ;
		{
			Tnode190813* LOC45;
			nimln(47, "evaltempl.nim");
			LOC45 = 0;
			LOC45 = copynode_383027((&(*c)), templ, actual);
			add_191164(result, LOC45);
		}
		LA2: ;
	}
	break;
	case ((NU8) 0) ... ((NU8) 2):
	case ((NU8) 4) ... ((NU8) 23):
	{
		Tnode190813* LOC47;
		nimln(49, "evaltempl.nim");
		LOC47 = 0;
		LOC47 = copynode_383027((&(*c)), templ, actual);
		add_191164(result, LOC47);
	}
	break;
	default:
	{
		Tnode190813* res;
		nimln(51, "evaltempl.nim");
		res = copynode_383027((&(*c)), templ, actual);
		{
			NI i_383135;
			NI HEX3Atmp_383150;
			NI LOC50;
			NI TMP7630;
			NI res_383153;
			i_383135 = 0;
			HEX3Atmp_383150 = 0;
			nimln(52, "evaltempl.nim");
			LOC50 = 0;
			LOC50 = sonslen_193403(templ);
			TMP7630 = subInt(LOC50, ((NI) 1));
			HEX3Atmp_383150 = (NI)(TMP7630);
			nimln(1598, "system.nim");
			res_383153 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					NI TMP7631;
					if (!(res_383153 <= HEX3Atmp_383150)) goto LA52;
					nimln(1600, "system.nim");
					i_383135 = res_383153;
					nimln(53, "evaltempl.nim");
					if (((TMP7625[(*templ).kind/8] &(1<<((*templ).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7626));
					if ((NU)(i_383135) >= (NU)((*templ).kindU.S6.sons->Sup.len)) raiseIndexError();
					evaltemplateaux_383039((*templ).kindU.S6.sons->data[i_383135], actual, c, res);
					nimln(1614, "system.nim");
					TMP7631 = addInt(res_383153, ((NI) 1));
					res_383153 = (NI)(TMP7631);
				} LA52: ;
			}
		}
		nimln(54, "evaltempl.nim");
		add_191164(result, res);
	}
	break;
	}
	popFrame();
}

N_NIMCALL(Tnode190813*, evaltemplateargs_383184)(Tnode190813* n, Tsym190843* s) {
	Tnode190813* result;
	NI a;
	NI f;
	nimfr("evalTemplateArgs", "evaltempl.nim")
	result = 0;
	a = 0;
	nimln(60, "evaltempl.nim");
	switch ((*n).kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	{
		nimln(62, "evaltempl.nim");
		a = sonslen_193403(n);
	}
	break;
	default:
	{
		nimln(63, "evaltempl.nim");
		a = ((NI) 0);
	}
	break;
	}
	nimln(64, "evaltempl.nim");
	f = sonslen_193351((*s).typ);
	nimln(65, "evaltempl.nim");
	{
		if (!(f < a)) goto LA5;
		globalerror_164134((*n).info, ((NU16) 133), ((NimStringDesc*) &TMP7632));
	}
	LA5: ;
	nimln(67, "evaltempl.nim");
	result = newnodei_192351(((NU8) 152), (*n).info);
	{
		NI i_383204;
		NI HEX3Atmp_383234;
		NI TMP7633;
		NI res_383237;
		i_383204 = 0;
		HEX3Atmp_383234 = 0;
		nimln(68, "evaltempl.nim");
		TMP7633 = subInt(f, ((NI) 1));
		HEX3Atmp_383234 = (NI)(TMP7633);
		nimln(1598, "system.nim");
		res_383237 = ((NI) 1);
		{
			nimln(1599, "system.nim");
			while (1) {
				Tnode190813* arg;
				NI TMP7634;
				if (!(res_383237 <= HEX3Atmp_383234)) goto LA9;
				nimln(1600, "system.nim");
				i_383204 = res_383237;
				nimln(69, "evaltempl.nim");
				{
					if (!(i_383204 < a)) goto LA12;
					if (((TMP7625[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7626));
					if ((NU)(i_383204) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
					arg = (*n).kindU.S6.sons->data[i_383204];
				}
				goto LA10;
				LA12: ;
				{
					if (((TMP7625[(*(*(*s).typ).n).kind/8] &(1<<((*(*(*s).typ).n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7626));
					if ((NU)(i_383204) >= (NU)((*(*(*s).typ).n).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (!(((TMP7623[(*(*(*(*s).typ).n).kindU.S6.sons->data[i_383204]).kind/8] &(1<<((*(*(*(*s).typ).n).kindU.S6.sons->data[i_383204]).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP7624));
					arg = copytree_195028((*(*(*(*(*s).typ).n).kindU.S6.sons->data[i_383204]).kindU.S4.sym).ast);
				}
				LA10: ;
				nimln(70, "evaltempl.nim");
				{
					NIM_BOOL LOC17;
					LOC17 = 0;
					LOC17 = (arg == NIM_NIL);
					if (LOC17) goto LA18;
					LOC17 = ((*arg).kind == ((NU8) 1));
					LA18: ;
					if (!LOC17) goto LA19;
					nimln(71, "evaltempl.nim");
					localerror_164155((*n).info, ((NU16) 133), ((NimStringDesc*) &TMP7632));
				}
				LA19: ;
				nimln(72, "evaltempl.nim");
				addson_192819(result, arg);
				nimln(1614, "system.nim");
				TMP7634 = addInt(res_383237, ((NI) 1));
				res_383237 = (NI)(TMP7634);
			} LA9: ;
		}
	}
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, isatom_195905)(Tnode190813* n) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	nimfr("isAtom", "ast.nim")
	result = 0;
	nimln(1543, "ast.nim");
	LOC1 = 0;
	LOC1 = (((NU8) 0) <= (*n).kind);
	if (!(LOC1)) goto LA2;
	LOC1 = ((*n).kind <= ((NU8) 23));
	LA2: ;
	result = LOC1;
	popFrame();
	return result;
}

static N_INLINE(NI, safelen_191125)(Tnode190813* n) {
	NI result;
	nimfr("safeLen", "ast.nim")
	result = 0;
	nimln(939, "ast.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((*n).kind >= ((NU8) 0) && (*n).kind <= ((NU8) 23));
		if (LOC3) goto LA4;
		if (((TMP7625[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7626));
		LOC3 = (*n).kindU.S6.sons == 0;
		LA4: ;
		if (!LOC3) goto LA5;
		result = ((NI) 0);
	}
	goto LA1;
	LA5: ;
	{
		nimln(940, "ast.nim");
		if (((TMP7625[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7626));
		result = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(Tnode190813*, evaltemplate_383260)(Tnode190813* n, Tsym190843* tmpl, Tsym190843* gensymowner) {
	Tnode190813* result;
	NI TMP7635;
	Tnode190813* args;
	Templctx383019 ctx;
	Tnode190813* body;
	NI TMP7638;
	nimfr("evalTemplate", "evaltempl.nim")
	result = 0;
	nimln(78, "evaltempl.nim");
	TMP7635 = addInt(evaltemplatecounter_383256, ((NI) 1));
	evaltemplatecounter_383256 = (NI)(TMP7635);
	nimln(79, "evaltempl.nim");
	{
		if (!(((NI) 100) < evaltemplatecounter_383256)) goto LA3;
		nimln(80, "evaltempl.nim");
		globalerror_164134((*n).info, ((NU16) 183), ((NimStringDesc*) &TMP7632));
		nimln(81, "evaltempl.nim");
		result = n;
	}
	LA3: ;
	nimln(84, "evaltempl.nim");
	args = evaltemplateargs_383184(n, tmpl);
	memset((void*)(&ctx), 0, sizeof(ctx));
	nimln(86, "evaltempl.nim");
	ctx.owner = tmpl;
	nimln(87, "evaltempl.nim");
	ctx.gensymowner = gensymowner;
	nimln(88, "evaltempl.nim");
	initidtable_194057((&ctx.mapping));
	nimln(90, "evaltempl.nim");
	body = getbody_235648(tmpl);
	nimln(91, "evaltempl.nim");
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = isatom_195905(body);
		if (!LOC7) goto LA8;
		nimln(92, "evaltempl.nim");
		result = newnodei_192351(((NU8) 37), (*body).info);
		nimln(93, "evaltempl.nim");
		evaltemplateaux_383039(body, args, (&ctx), result);
		nimln(94, "evaltempl.nim");
		{
			NI LOC12;
			LOC12 = 0;
			LOC12 = len_191097(result);
			if (!(LOC12 == ((NI) 1))) goto LA13;
			if (((TMP7625[(*result).kind/8] &(1<<((*result).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7626));
			if ((NU)(((NI) 0)) >= (NU)((*result).kindU.S6.sons->Sup.len)) raiseIndexError();
			result = (*result).kindU.S6.sons->data[((NI) 0)];
		}
		goto LA10;
		LA13: ;
		{
			NimStringDesc* LOC16;
			nimln(96, "evaltempl.nim");
			nimln(97, "evaltempl.nim");
			LOC16 = 0;
			LOC16 = rendertree_212058(result, 4);
			localerror_164155((*result).info, ((NU16) 1), LOC16);
		}
		LA10: ;
	}
	goto LA5;
	LA8: ;
	{
		nimln(99, "evaltempl.nim");
		result = copynode_194640(body);
		nimln(100, "evaltempl.nim");
		ctx.instlines = !(((*body).kind == ((NU8) 115) || (*body).kind == ((NU8) 126) || (*body).kind == ((NU8) 112) || (*body).kind == ((NU8) 127)));
		nimln(102, "evaltempl.nim");
		{
			if (!ctx.instlines) goto LA20;
			(*result).info = (*n).info;
		}
		LA20: ;
		{
			NI i_383308;
			NI HEX3Atmp_383322;
			NI LOC23;
			NI TMP7636;
			NI res_383325;
			i_383308 = 0;
			HEX3Atmp_383322 = 0;
			nimln(103, "evaltempl.nim");
			LOC23 = 0;
			LOC23 = safelen_191125(body);
			TMP7636 = subInt(LOC23, ((NI) 1));
			HEX3Atmp_383322 = (NI)(TMP7636);
			nimln(1598, "system.nim");
			res_383325 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					NI TMP7637;
					if (!(res_383325 <= HEX3Atmp_383322)) goto LA25;
					nimln(1600, "system.nim");
					i_383308 = res_383325;
					nimln(104, "evaltempl.nim");
					if (((TMP7625[(*body).kind/8] &(1<<((*body).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7626));
					if ((NU)(i_383308) >= (NU)((*body).kindU.S6.sons->Sup.len)) raiseIndexError();
					evaltemplateaux_383039((*body).kindU.S6.sons->data[i_383308], args, (&ctx), result);
					nimln(1614, "system.nim");
					TMP7637 = addInt(res_383325, ((NI) 1));
					res_383325 = (NI)(TMP7637);
				} LA25: ;
			}
		}
	}
	LA5: ;
	nimln(106, "evaltempl.nim");
	TMP7638 = subInt(evaltemplatecounter_383256, ((NI) 1));
	evaltemplatecounter_383256 = (NI)(TMP7638);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplInit)(void) {
	nimfr("evaltempl", "evaltempl.nim")
	nimln(74, "evaltempl.nim");
	evaltemplatecounter_383256 = ((NI) 0);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplDatInit)(void) {
}

