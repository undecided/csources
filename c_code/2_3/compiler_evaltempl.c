/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Tnode191813 Tnode191813;
typedef struct Templctx384019 Templctx384019;
typedef struct Tsym191843 Tsym191843;
typedef struct Tidtable191861 Tidtable191861;
typedef struct Tidpairseq191859 Tidpairseq191859;
typedef struct Ttype191849 Ttype191849;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
typedef struct TY147211 TY147211;
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
typedef struct Tidpair191857 Tidpair191857;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct TY191933 TY191933;
struct  Tidtable191861  {
NI counter;
Tidpairseq191859* data;
};
struct  Templctx384019  {
Tsym191843* owner;
Tsym191843* gensymowner;
NIM_BOOL instlines;
Tidtable191861 mapping;
};
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
struct TY147211 {
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
struct  Tidpair191857  {
Tidobj167015* key;
TNimObject* val;
};
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
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
struct Tidpairseq191859 {
  TGenericSeq Sup;
  Tidpair191857 data[SEQ_DECL_SIZE];
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
N_NIMCALL(Tnode191813*, copynode_384027)(Templctx384019* ctx, Tnode191813* a, Tnode191813* b);
N_NIMCALL(Tnode191813*, copynode_195640)(Tnode191813* src);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, evaltemplateaux_384039)(Tnode191813* templ, Tnode191813* actual, Templctx384019* c, Tnode191813* result);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, len_192097)(Tnode191813* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, add_192164)(Tnode191813* father, Tnode191813* son);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(Tnode191813*, copytree_196028)(Tnode191813* src);
N_NIMCALL(void, internalerror_165218)(NimStringDesc* errmsg);
N_NIMCALL(NimStringDesc*, HEX24_165306)(TY147211 x);
N_NIMCALL(TNimObject*, idtableget_199182)(Tidtable191861 t, Tidobj167015* key);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(Tsym191843*, copysym_194607)(Tsym191843* s, NIM_BOOL keepid);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46746*, usrtocell_50246)(void* usr);
static N_INLINE(void, rtladdzct_51804)(Tcell46746* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46762* s, Tcell46746* c);
N_NIMCALL(void, idtableput_199196)(Tidtable191861* t, Tidobj167015* key, TNimObject* val);
N_NIMCALL(Tnode191813*, newsymnode_193338)(Tsym191843* sym, Tlineinfo163338 info);
N_NIMCALL(NI, sonslen_194403)(Tnode191813* n);
N_NIMCALL(Tnode191813*, evaltemplateargs_384184)(Tnode191813* n, Tsym191843* s);
N_NIMCALL(NI, sonslen_194351)(Ttype191849* n);
N_NIMCALL(void, globalerror_165134)(Tlineinfo163338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tnode191813*, newnodei_193351)(NU8 kind, Tlineinfo163338 info);
N_NIMCALL(void, localerror_165155)(Tlineinfo163338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, addson_193819)(Tnode191813* father, Tnode191813* son);
N_NIMCALL(Tnode191813*, evaltemplate_384260)(Tnode191813* n, Tsym191843* tmpl, Tsym191843* gensymowner);
N_NIMCALL(void, initidtable_195057)(Tidtable191861* x);
N_NIMCALL(Tnode191813*, getbody_236647)(Tsym191843* s);
static N_INLINE(NIM_BOOL, isatom_196906)(Tnode191813* n);
N_NIMCALL(NimStringDesc*, rendertree_213058)(Tnode191813* n, NU8 renderflags);
static N_INLINE(NI, safelen_192125)(Tnode191813* n);
static NIM_CONST TY192031 TMP7627 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP7628, "sym", 3);
static NIM_CONST TY192031 TMP7629 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP7630, "sons", 4);
STRING_LITERAL(TMP7633, "compiler/evaltempl.nim", 22);
NIM_CONST TY147211 TMP7632 = {((NimStringDesc*) &TMP7633),
((NI) 39)}
;
STRING_LITERAL(TMP7636, "", 0);
extern TFrame* frameptr_17042;
extern TNimType NTI191843; /* TSym */
extern Tgcheap48616 gch_48644;
NI evaltemplatecounter_384256;

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

N_NIMCALL(Tnode191813*, copynode_384027)(Templctx384019* ctx, Tnode191813* a, Tnode191813* b) {
	Tnode191813* result;
	nimfr("copyNode", "evaltempl.nim")
	result = 0;
	nimln(24, "evaltempl.nim");
	result = copynode_195640(a);
	nimln(25, "evaltempl.nim");
	{
		if (!(*ctx).instlines) goto LA3;
		(*result).info = (*b).info;
	}
	LA3: ;
	popFrame();
	return result;
}

static N_INLINE(NI, len_192097)(Tnode191813* n) {
	NI result;
	nimfr("len", "ast.nim")
	result = 0;
	nimln(934, "ast.nim");
	{
		if (((TMP7629[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7630));
		if (!(*n).kindU.S6.sons == 0) goto LA3;
		result = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		nimln(935, "ast.nim");
		if (((TMP7629[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7630));
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

N_NIMCALL(void, evaltemplateaux_384039)(Tnode191813* templ, Tnode191813* actual, Templctx384019* c, Tnode191813* result) {
	nimfr("evalTemplateAux", "evaltempl.nim")
	nimln(28, "evaltempl.nim");
	switch ((*templ).kind) {
	case ((NU8) 3):
	{
		Tsym191843* s;
		nimln(30, "evaltempl.nim");
		if (!(((TMP7627[(*templ).kind/8] &(1<<((*templ).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP7628));
		s = (*templ).kindU.S4.sym;
		nimln(31, "evaltempl.nim");
		{
			if (!((*(*s).owner).Sup.id == (*(*c).owner).Sup.id)) goto LA4;
			nimln(32, "evaltempl.nim");
			{
				NIM_BOOL LOC8;
				Tnode191813* x;
				LOC8 = 0;
				LOC8 = ((*s).kind == ((NU8) 3));
				if (!(LOC8)) goto LA9;
				LOC8 = !((((*s).flags &(1<<((((NU8) 31))&31)))!=0));
				LA9: ;
				if (!LOC8) goto LA10;
				nimln(33, "evaltempl.nim");
				if (((TMP7629[(*actual).kind/8] &(1<<((*actual).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7630));
				if ((NU)((*s).position) >= (NU)((*actual).kindU.S6.sons->Sup.len)) raiseIndexError();
				x = (*actual).kindU.S6.sons->data[(*s).position];
				nimln(34, "evaltempl.nim");
				{
					if (!((*x).kind == ((NU8) 152))) goto LA14;
					{
						Tnode191813* y_384083;
						y_384083 = 0;
						{
							NI i_384142;
							NI HEX3Atmp_384144;
							NI LOC18;
							NI res_384146;
							i_384142 = 0;
							HEX3Atmp_384144 = 0;
							nimln(1537, "ast.nim");
							LOC18 = 0;
							LOC18 = len_192097(x);
							HEX3Atmp_384144 = subInt(LOC18, 1);
							nimln(1598, "system.nim");
							res_384146 = ((NI) 0);
							{
								nimln(1599, "system.nim");
								while (1) {
									NI TMP7631;
									if (!(res_384146 <= HEX3Atmp_384144)) goto LA20;
									nimln(1600, "system.nim");
									i_384142 = res_384146;
									nimln(1537, "ast.nim");
									if (((TMP7629[(*x).kind/8] &(1<<((*x).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7630));
									if ((NU)(i_384142) >= (NU)((*x).kindU.S6.sons->Sup.len)) raiseIndexError();
									y_384083 = (*x).kindU.S6.sons->data[i_384142];
									nimln(35, "evaltempl.nim");
									add_192164(result, y_384083);
									nimln(1619, "system.nim");
									TMP7631 = addInt(res_384146, ((NI) 1));
									res_384146 = (NI)(TMP7631);
								} LA20: ;
							}
						}
					}
				}
				goto LA12;
				LA14: ;
				{
					Tnode191813* LOC22;
					nimln(37, "evaltempl.nim");
					LOC22 = 0;
					LOC22 = copytree_196028(x);
					add_192164(result, LOC22);
				}
				LA12: ;
			}
			goto LA6;
			LA10: ;
			{
				Tsym191843* x;
				Tidobj167015* LOC29;
				TNimObject* LOC30;
				Tlineinfo163338 LOC37;
				Tnode191813* LOC43;
				nimln(854, "msgs.nim");
				{
					NimStringDesc* LOC28;
					nimln(39, "evaltempl.nim");
					if (!!((((*s).flags &(1<<((((NU8) 31))&31)))!=0))) goto LA26;
					nimln(854, "msgs.nim");
					LOC28 = 0;
					LOC28 = HEX24_165306(TMP7632);
					internalerror_165218(LOC28);
				}
				LA26: ;
				nimln(40, "evaltempl.nim");
				LOC29 = 0;
				LOC29 = &s->Sup;
				LOC30 = 0;
				LOC30 = idtableget_199182((*c).mapping, LOC29);
				if (LOC30) chckObj((*LOC30).m_type, (&NTI191843));
				x = ((Tsym191843*) (LOC30));
				nimln(41, "evaltempl.nim");
				{
					Tidobj167015* LOC35;
					TNimObject* LOC36;
					if (!(x == NIM_NIL)) goto LA33;
					nimln(42, "evaltempl.nim");
					x = copysym_194607(s, NIM_FALSE);
					nimln(43, "evaltempl.nim");
					asgnRefNoCycle((void**) (&(*x).owner), (*c).gensymowner);
					nimln(44, "evaltempl.nim");
					LOC35 = 0;
					LOC35 = &s->Sup;
					LOC36 = 0;
					LOC36 = &x->Sup.Sup;
					idtableput_199196((&(*c).mapping), LOC35, LOC36);
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
				LOC43 = newsymnode_193338(x, LOC37);
				add_192164(result, LOC43);
			}
			LA6: ;
		}
		goto LA2;
		LA4: ;
		{
			Tnode191813* LOC45;
			nimln(47, "evaltempl.nim");
			LOC45 = 0;
			LOC45 = copynode_384027((&(*c)), templ, actual);
			add_192164(result, LOC45);
		}
		LA2: ;
	}
	break;
	case ((NU8) 0) ... ((NU8) 2):
	case ((NU8) 4) ... ((NU8) 23):
	{
		Tnode191813* LOC47;
		nimln(49, "evaltempl.nim");
		LOC47 = 0;
		LOC47 = copynode_384027((&(*c)), templ, actual);
		add_192164(result, LOC47);
	}
	break;
	default:
	{
		Tnode191813* res;
		nimln(51, "evaltempl.nim");
		res = copynode_384027((&(*c)), templ, actual);
		{
			NI i_384135;
			NI HEX3Atmp_384150;
			NI LOC50;
			NI TMP7634;
			NI res_384153;
			i_384135 = 0;
			HEX3Atmp_384150 = 0;
			nimln(52, "evaltempl.nim");
			LOC50 = 0;
			LOC50 = sonslen_194403(templ);
			TMP7634 = subInt(LOC50, ((NI) 1));
			HEX3Atmp_384150 = (NI)(TMP7634);
			nimln(1598, "system.nim");
			res_384153 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					NI TMP7635;
					if (!(res_384153 <= HEX3Atmp_384150)) goto LA52;
					nimln(1600, "system.nim");
					i_384135 = res_384153;
					nimln(53, "evaltempl.nim");
					if (((TMP7629[(*templ).kind/8] &(1<<((*templ).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7630));
					if ((NU)(i_384135) >= (NU)((*templ).kindU.S6.sons->Sup.len)) raiseIndexError();
					evaltemplateaux_384039((*templ).kindU.S6.sons->data[i_384135], actual, c, res);
					nimln(1614, "system.nim");
					TMP7635 = addInt(res_384153, ((NI) 1));
					res_384153 = (NI)(TMP7635);
				} LA52: ;
			}
		}
		nimln(54, "evaltempl.nim");
		add_192164(result, res);
	}
	break;
	}
	popFrame();
}

N_NIMCALL(Tnode191813*, evaltemplateargs_384184)(Tnode191813* n, Tsym191843* s) {
	Tnode191813* result;
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
		a = sonslen_194403(n);
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
	f = sonslen_194351((*s).typ);
	nimln(65, "evaltempl.nim");
	{
		if (!(f < a)) goto LA5;
		globalerror_165134((*n).info, ((NU16) 133), ((NimStringDesc*) &TMP7636));
	}
	LA5: ;
	nimln(67, "evaltempl.nim");
	result = newnodei_193351(((NU8) 152), (*n).info);
	{
		NI i_384204;
		NI HEX3Atmp_384234;
		NI TMP7637;
		NI res_384237;
		i_384204 = 0;
		HEX3Atmp_384234 = 0;
		nimln(68, "evaltempl.nim");
		TMP7637 = subInt(f, ((NI) 1));
		HEX3Atmp_384234 = (NI)(TMP7637);
		nimln(1598, "system.nim");
		res_384237 = ((NI) 1);
		{
			nimln(1599, "system.nim");
			while (1) {
				Tnode191813* arg;
				NI TMP7638;
				if (!(res_384237 <= HEX3Atmp_384234)) goto LA9;
				nimln(1600, "system.nim");
				i_384204 = res_384237;
				nimln(69, "evaltempl.nim");
				{
					if (!(i_384204 < a)) goto LA12;
					if (((TMP7629[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7630));
					if ((NU)(i_384204) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
					arg = (*n).kindU.S6.sons->data[i_384204];
				}
				goto LA10;
				LA12: ;
				{
					if (((TMP7629[(*(*(*s).typ).n).kind/8] &(1<<((*(*(*s).typ).n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7630));
					if ((NU)(i_384204) >= (NU)((*(*(*s).typ).n).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (!(((TMP7627[(*(*(*(*s).typ).n).kindU.S6.sons->data[i_384204]).kind/8] &(1<<((*(*(*(*s).typ).n).kindU.S6.sons->data[i_384204]).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP7628));
					arg = copytree_196028((*(*(*(*(*s).typ).n).kindU.S6.sons->data[i_384204]).kindU.S4.sym).ast);
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
					localerror_165155((*n).info, ((NU16) 133), ((NimStringDesc*) &TMP7636));
				}
				LA19: ;
				nimln(72, "evaltempl.nim");
				addson_193819(result, arg);
				nimln(1614, "system.nim");
				TMP7638 = addInt(res_384237, ((NI) 1));
				res_384237 = (NI)(TMP7638);
			} LA9: ;
		}
	}
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, isatom_196906)(Tnode191813* n) {
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

static N_INLINE(NI, safelen_192125)(Tnode191813* n) {
	NI result;
	nimfr("safeLen", "ast.nim")
	result = 0;
	nimln(939, "ast.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((*n).kind >= ((NU8) 0) && (*n).kind <= ((NU8) 23));
		if (LOC3) goto LA4;
		if (((TMP7629[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7630));
		LOC3 = (*n).kindU.S6.sons == 0;
		LA4: ;
		if (!LOC3) goto LA5;
		result = ((NI) 0);
	}
	goto LA1;
	LA5: ;
	{
		nimln(940, "ast.nim");
		if (((TMP7629[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7630));
		result = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(Tnode191813*, evaltemplate_384260)(Tnode191813* n, Tsym191843* tmpl, Tsym191843* gensymowner) {
	Tnode191813* result;
	NI TMP7639;
	Tnode191813* args;
	Templctx384019 ctx;
	Tnode191813* body;
	NI TMP7642;
	nimfr("evalTemplate", "evaltempl.nim")
	result = 0;
	nimln(78, "evaltempl.nim");
	TMP7639 = addInt(evaltemplatecounter_384256, ((NI) 1));
	evaltemplatecounter_384256 = (NI)(TMP7639);
	nimln(79, "evaltempl.nim");
	{
		if (!(((NI) 100) < evaltemplatecounter_384256)) goto LA3;
		nimln(80, "evaltempl.nim");
		globalerror_165134((*n).info, ((NU16) 183), ((NimStringDesc*) &TMP7636));
		nimln(81, "evaltempl.nim");
		result = n;
	}
	LA3: ;
	nimln(84, "evaltempl.nim");
	args = evaltemplateargs_384184(n, tmpl);
	memset((void*)(&ctx), 0, sizeof(ctx));
	nimln(86, "evaltempl.nim");
	ctx.owner = tmpl;
	nimln(87, "evaltempl.nim");
	ctx.gensymowner = gensymowner;
	nimln(88, "evaltempl.nim");
	initidtable_195057((&ctx.mapping));
	nimln(90, "evaltempl.nim");
	body = getbody_236647(tmpl);
	nimln(91, "evaltempl.nim");
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = isatom_196906(body);
		if (!LOC7) goto LA8;
		nimln(92, "evaltempl.nim");
		result = newnodei_193351(((NU8) 37), (*body).info);
		nimln(93, "evaltempl.nim");
		evaltemplateaux_384039(body, args, (&ctx), result);
		nimln(94, "evaltempl.nim");
		{
			NI LOC12;
			LOC12 = 0;
			LOC12 = len_192097(result);
			if (!(LOC12 == ((NI) 1))) goto LA13;
			if (((TMP7629[(*result).kind/8] &(1<<((*result).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7630));
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
			LOC16 = rendertree_213058(result, 4);
			localerror_165155((*result).info, ((NU16) 1), LOC16);
		}
		LA10: ;
	}
	goto LA5;
	LA8: ;
	{
		nimln(99, "evaltempl.nim");
		result = copynode_195640(body);
		nimln(100, "evaltempl.nim");
		ctx.instlines = !(((*body).kind == ((NU8) 115) || (*body).kind == ((NU8) 126) || (*body).kind == ((NU8) 112) || (*body).kind == ((NU8) 127)));
		nimln(102, "evaltempl.nim");
		{
			if (!ctx.instlines) goto LA20;
			(*result).info = (*n).info;
		}
		LA20: ;
		{
			NI i_384308;
			NI HEX3Atmp_384322;
			NI LOC23;
			NI TMP7640;
			NI res_384325;
			i_384308 = 0;
			HEX3Atmp_384322 = 0;
			nimln(103, "evaltempl.nim");
			LOC23 = 0;
			LOC23 = safelen_192125(body);
			TMP7640 = subInt(LOC23, ((NI) 1));
			HEX3Atmp_384322 = (NI)(TMP7640);
			nimln(1598, "system.nim");
			res_384325 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					NI TMP7641;
					if (!(res_384325 <= HEX3Atmp_384322)) goto LA25;
					nimln(1600, "system.nim");
					i_384308 = res_384325;
					nimln(104, "evaltempl.nim");
					if (((TMP7629[(*body).kind/8] &(1<<((*body).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7630));
					if ((NU)(i_384308) >= (NU)((*body).kindU.S6.sons->Sup.len)) raiseIndexError();
					evaltemplateaux_384039((*body).kindU.S6.sons->data[i_384308], args, (&ctx), result);
					nimln(1614, "system.nim");
					TMP7641 = addInt(res_384325, ((NI) 1));
					res_384325 = (NI)(TMP7641);
				} LA25: ;
			}
		}
	}
	LA5: ;
	nimln(106, "evaltempl.nim");
	TMP7642 = subInt(evaltemplatecounter_384256, ((NI) 1));
	evaltemplatecounter_384256 = (NI)(TMP7642);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplInit)(void) {
	nimfr("evaltempl", "evaltempl.nim")
	nimln(74, "evaltempl.nim");
	evaltemplatecounter_384256 = ((NI) 0);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplDatInit)(void) {
}

