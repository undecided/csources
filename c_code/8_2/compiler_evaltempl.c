/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Tnode189813 Tnode189813;
typedef struct Templctx382019 Templctx382019;
typedef struct Tsym189843 Tsym189843;
typedef struct Tidtable189861 Tidtable189861;
typedef struct Tidpairseq189859 Tidpairseq189859;
typedef struct Ttype189849 Ttype189849;
typedef struct Tlineinfo161338 Tlineinfo161338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tident165021 Tident165021;
typedef struct Tnodeseq189807 Tnodeseq189807;
typedef struct Tidobj165015 Tidobj165015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq189845 Ttypeseq189845;
typedef struct Tscope189837 Tscope189837;
typedef struct TY189944 TY189944;
typedef struct Tstrtable189817 Tstrtable189817;
typedef struct Tsymseq189815 Tsymseq189815;
typedef struct Tloc189827 Tloc189827;
typedef struct Ropeobj159009 Ropeobj159009;
typedef struct Tlib189831 Tlib189831;
typedef struct TY145211 TY145211;
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
typedef struct Tidpair189857 Tidpair189857;
typedef struct Tinstantiation189833 Tinstantiation189833;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct TY189933 TY189933;
struct  Tidtable189861  {
NI counter;
Tidpairseq189859* data;
};
struct  Templctx382019  {
Tsym189843* owner;
Tsym189843* gensymowner;
NIM_BOOL instlines;
Tidtable189861 mapping;
};
struct  Tlineinfo161338  {
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
struct  Tnode189813  {
Ttype189849* typ;
Tlineinfo161338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym189843* sym;
} S4;
struct {Tident165021* ident;
} S5;
struct {Tnodeseq189807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef NU8 TY190031[20];
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
struct  Tidobj165015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable189817  {
NI counter;
Tsymseq189815* data;
};
struct  Tloc189827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype189849* t;
Ropeobj159009* r;
Ropeobj159009* heaproot;
};
struct  Tsym189843  {
  Tidobj165015 Sup;
NU8 kind;
union{
struct {Ttypeseq189845* typeinstcache;
Tscope189837* typscope;
} S1;
struct {TY189944* procinstcache;
Tsym189843* gcunsafetyreason;
} S2;
struct {TY189944* usedgenerics;
Tstrtable189817 tab;
} S3;
struct {Tsym189843* guard;
} S4;
} kindU;
NU16 magic;
Ttype189849* typ;
Tident165021* name;
Tlineinfo161338 info;
Tsym189843* owner;
NU32 flags;
Tnode189813* ast;
NU32 options;
NI position;
NI offset;
Tloc189827 loc;
Tlib189831* annex;
Tnode189813* constraint;
};
struct TY145211 {
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
struct  Ttype189849  {
  Tidobj165015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq189845* sons;
Tnode189813* n;
Tsym189843* owner;
Tsym189843* sym;
Tsym189843* destructor;
Tsym189843* deepcopy;
Tsym189843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc189827 loc;
};
struct  Tidpair189857  {
Tidobj165015* key;
TNimObject* val;
};
struct  Tident165021  {
  Tidobj165015 Sup;
NimStringDesc* s;
Tident165021* next;
NI h;
};
struct  Tscope189837  {
NI depthlevel;
Tstrtable189817 symbols;
Tnodeseq189807* usingsyms;
Tscope189837* parent;
};
struct  Ropeobj159009  {
  TNimObject Sup;
Ropeobj159009* left;
Ropeobj159009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry129022  {
  TNimObject Sup;
Tlistentry129022* prev;
Tlistentry129022* next;
};
struct  Tlib189831  {
  Tlistentry129022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj159009* name;
Tnode189813* path;
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
struct  Tinstantiation189833  {
Tsym189843* sym;
Ttypeseq189845* concretetypes;
TY189933* usedby;
};
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
struct Tidpairseq189859 {
  TGenericSeq Sup;
  Tidpair189857 data[SEQ_DECL_SIZE];
};
struct Tnodeseq189807 {
  TGenericSeq Sup;
  Tnode189813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq189845 {
  TGenericSeq Sup;
  Ttype189849* data[SEQ_DECL_SIZE];
};
struct TY189944 {
  TGenericSeq Sup;
  Tinstantiation189833* data[SEQ_DECL_SIZE];
};
struct Tsymseq189815 {
  TGenericSeq Sup;
  Tsym189843* data[SEQ_DECL_SIZE];
};
struct TY189933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tnode189813*, copynode_382027)(Templctx382019* ctx, Tnode189813* a, Tnode189813* b);
N_NIMCALL(Tnode189813*, copynode_193640)(Tnode189813* src);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, evaltemplateaux_382039)(Tnode189813* templ, Tnode189813* actual, Templctx382019* c, Tnode189813* result);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, len_190097)(Tnode189813* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, add_190164)(Tnode189813* father, Tnode189813* son);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(Tnode189813*, copytree_194028)(Tnode189813* src);
N_NIMCALL(void, internalerror_163218)(NimStringDesc* errmsg);
N_NIMCALL(NimStringDesc*, HEX24_163306)(TY145211 x);
N_NIMCALL(TNimObject*, idtableget_197182)(Tidtable189861 t, Tidobj165015* key);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(Tsym189843*, copysym_192607)(Tsym189843* s, NIM_BOOL keepid);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr);
static N_INLINE(void, rtladdzct_51804)(Tcell46747* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46763* s, Tcell46747* c);
N_NIMCALL(void, idtableput_197196)(Tidtable189861* t, Tidobj165015* key, TNimObject* val);
N_NIMCALL(Tnode189813*, newsymnode_191338)(Tsym189843* sym, Tlineinfo161338 info);
N_NIMCALL(NI, sonslen_192403)(Tnode189813* n);
N_NIMCALL(Tnode189813*, evaltemplateargs_382184)(Tnode189813* n, Tsym189843* s);
N_NIMCALL(NI, sonslen_192351)(Ttype189849* n);
N_NIMCALL(void, globalerror_163134)(Tlineinfo161338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tnode189813*, newnodei_191351)(NU8 kind, Tlineinfo161338 info);
N_NIMCALL(void, localerror_163155)(Tlineinfo161338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, addson_191819)(Tnode189813* father, Tnode189813* son);
N_NIMCALL(Tnode189813*, evaltemplate_382260)(Tnode189813* n, Tsym189843* tmpl, Tsym189843* gensymowner);
N_NIMCALL(void, initidtable_193057)(Tidtable189861* x);
N_NIMCALL(Tnode189813*, getbody_234647)(Tsym189843* s);
static N_INLINE(NIM_BOOL, isatom_194906)(Tnode189813* n);
N_NIMCALL(NimStringDesc*, rendertree_211058)(Tnode189813* n, NU8 renderflags);
static N_INLINE(NI, safelen_190125)(Tnode189813* n);
static NIM_CONST TY190031 TMP7611 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP7612, "sym", 3);
static NIM_CONST TY190031 TMP7613 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP7614, "sons", 4);
STRING_LITERAL(TMP7617, "compiler/evaltempl.nim", 22);
NIM_CONST TY145211 TMP7616 = {((NimStringDesc*) &TMP7617),
((NI) 39)}
;
STRING_LITERAL(TMP7620, "", 0);
extern TFrame* frameptr_17042;
extern TNimType NTI189843; /* TSym */
extern Tgcheap48616 gch_48644;
NI evaltemplatecounter_382256;

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

N_NIMCALL(Tnode189813*, copynode_382027)(Templctx382019* ctx, Tnode189813* a, Tnode189813* b) {
	Tnode189813* result;
	nimfr("copyNode", "evaltempl.nim")
	result = 0;
	nimln(24, "evaltempl.nim");
	result = copynode_193640(a);
	nimln(25, "evaltempl.nim");
	{
		if (!(*ctx).instlines) goto LA3;
		(*result).info = (*b).info;
	}
	LA3: ;
	popFrame();
	return result;
}

static N_INLINE(NI, len_190097)(Tnode189813* n) {
	NI result;
	nimfr("len", "ast.nim")
	result = 0;
	nimln(934, "ast.nim");
	{
		if (((TMP7613[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7614));
		if (!(*n).kindU.S6.sons == 0) goto LA3;
		result = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		nimln(935, "ast.nim");
		if (((TMP7613[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7614));
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

N_NIMCALL(void, evaltemplateaux_382039)(Tnode189813* templ, Tnode189813* actual, Templctx382019* c, Tnode189813* result) {
	nimfr("evalTemplateAux", "evaltempl.nim")
	nimln(28, "evaltempl.nim");
	switch ((*templ).kind) {
	case ((NU8) 3):
	{
		Tsym189843* s;
		nimln(30, "evaltempl.nim");
		if (!(((TMP7611[(*templ).kind/8] &(1<<((*templ).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP7612));
		s = (*templ).kindU.S4.sym;
		nimln(31, "evaltempl.nim");
		{
			if (!((*(*s).owner).Sup.id == (*(*c).owner).Sup.id)) goto LA4;
			nimln(32, "evaltempl.nim");
			{
				NIM_BOOL LOC8;
				Tnode189813* x;
				LOC8 = 0;
				LOC8 = ((*s).kind == ((NU8) 3));
				if (!(LOC8)) goto LA9;
				LOC8 = !((((*s).flags &(1<<((((NU8) 31))&31)))!=0));
				LA9: ;
				if (!LOC8) goto LA10;
				nimln(33, "evaltempl.nim");
				if (((TMP7613[(*actual).kind/8] &(1<<((*actual).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7614));
				if ((NU)((*s).position) >= (NU)((*actual).kindU.S6.sons->Sup.len)) raiseIndexError();
				x = (*actual).kindU.S6.sons->data[(*s).position];
				nimln(34, "evaltempl.nim");
				{
					if (!((*x).kind == ((NU8) 152))) goto LA14;
					{
						Tnode189813* y_382083;
						y_382083 = 0;
						{
							NI i_382142;
							NI HEX3Atmp_382144;
							NI LOC18;
							NI res_382146;
							i_382142 = 0;
							HEX3Atmp_382144 = 0;
							nimln(1537, "ast.nim");
							LOC18 = 0;
							LOC18 = len_190097(x);
							HEX3Atmp_382144 = subInt(LOC18, 1);
							nimln(1598, "system.nim");
							res_382146 = ((NI) 0);
							{
								nimln(1599, "system.nim");
								while (1) {
									NI TMP7615;
									if (!(res_382146 <= HEX3Atmp_382144)) goto LA20;
									nimln(1600, "system.nim");
									i_382142 = res_382146;
									nimln(1537, "ast.nim");
									if (((TMP7613[(*x).kind/8] &(1<<((*x).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7614));
									if ((NU)(i_382142) >= (NU)((*x).kindU.S6.sons->Sup.len)) raiseIndexError();
									y_382083 = (*x).kindU.S6.sons->data[i_382142];
									nimln(35, "evaltempl.nim");
									add_190164(result, y_382083);
									nimln(1619, "system.nim");
									TMP7615 = addInt(res_382146, ((NI) 1));
									res_382146 = (NI)(TMP7615);
								} LA20: ;
							}
						}
					}
				}
				goto LA12;
				LA14: ;
				{
					Tnode189813* LOC22;
					nimln(37, "evaltempl.nim");
					LOC22 = 0;
					LOC22 = copytree_194028(x);
					add_190164(result, LOC22);
				}
				LA12: ;
			}
			goto LA6;
			LA10: ;
			{
				Tsym189843* x;
				Tidobj165015* LOC29;
				TNimObject* LOC30;
				Tlineinfo161338 LOC37;
				Tnode189813* LOC43;
				nimln(854, "msgs.nim");
				{
					NimStringDesc* LOC28;
					nimln(39, "evaltempl.nim");
					if (!!((((*s).flags &(1<<((((NU8) 31))&31)))!=0))) goto LA26;
					nimln(854, "msgs.nim");
					LOC28 = 0;
					LOC28 = HEX24_163306(TMP7616);
					internalerror_163218(LOC28);
				}
				LA26: ;
				nimln(40, "evaltempl.nim");
				LOC29 = 0;
				LOC29 = &s->Sup;
				LOC30 = 0;
				LOC30 = idtableget_197182((*c).mapping, LOC29);
				if (LOC30) chckObj((*LOC30).m_type, (&NTI189843));
				x = ((Tsym189843*) (LOC30));
				nimln(41, "evaltempl.nim");
				{
					Tidobj165015* LOC35;
					TNimObject* LOC36;
					if (!(x == NIM_NIL)) goto LA33;
					nimln(42, "evaltempl.nim");
					x = copysym_192607(s, NIM_FALSE);
					nimln(43, "evaltempl.nim");
					asgnRefNoCycle((void**) (&(*x).owner), (*c).gensymowner);
					nimln(44, "evaltempl.nim");
					LOC35 = 0;
					LOC35 = &s->Sup;
					LOC36 = 0;
					LOC36 = &x->Sup.Sup;
					idtableput_197196((&(*c).mapping), LOC35, LOC36);
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
				LOC43 = newsymnode_191338(x, LOC37);
				add_190164(result, LOC43);
			}
			LA6: ;
		}
		goto LA2;
		LA4: ;
		{
			Tnode189813* LOC45;
			nimln(47, "evaltempl.nim");
			LOC45 = 0;
			LOC45 = copynode_382027((&(*c)), templ, actual);
			add_190164(result, LOC45);
		}
		LA2: ;
	}
	break;
	case ((NU8) 0) ... ((NU8) 2):
	case ((NU8) 4) ... ((NU8) 23):
	{
		Tnode189813* LOC47;
		nimln(49, "evaltempl.nim");
		LOC47 = 0;
		LOC47 = copynode_382027((&(*c)), templ, actual);
		add_190164(result, LOC47);
	}
	break;
	default:
	{
		Tnode189813* res;
		nimln(51, "evaltempl.nim");
		res = copynode_382027((&(*c)), templ, actual);
		{
			NI i_382135;
			NI HEX3Atmp_382150;
			NI LOC50;
			NI TMP7618;
			NI res_382153;
			i_382135 = 0;
			HEX3Atmp_382150 = 0;
			nimln(52, "evaltempl.nim");
			LOC50 = 0;
			LOC50 = sonslen_192403(templ);
			TMP7618 = subInt(LOC50, ((NI) 1));
			HEX3Atmp_382150 = (NI)(TMP7618);
			nimln(1598, "system.nim");
			res_382153 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					NI TMP7619;
					if (!(res_382153 <= HEX3Atmp_382150)) goto LA52;
					nimln(1600, "system.nim");
					i_382135 = res_382153;
					nimln(53, "evaltempl.nim");
					if (((TMP7613[(*templ).kind/8] &(1<<((*templ).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7614));
					if ((NU)(i_382135) >= (NU)((*templ).kindU.S6.sons->Sup.len)) raiseIndexError();
					evaltemplateaux_382039((*templ).kindU.S6.sons->data[i_382135], actual, c, res);
					nimln(1614, "system.nim");
					TMP7619 = addInt(res_382153, ((NI) 1));
					res_382153 = (NI)(TMP7619);
				} LA52: ;
			}
		}
		nimln(54, "evaltempl.nim");
		add_190164(result, res);
	}
	break;
	}
	popFrame();
}

N_NIMCALL(Tnode189813*, evaltemplateargs_382184)(Tnode189813* n, Tsym189843* s) {
	Tnode189813* result;
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
		a = sonslen_192403(n);
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
	f = sonslen_192351((*s).typ);
	nimln(65, "evaltempl.nim");
	{
		if (!(f < a)) goto LA5;
		globalerror_163134((*n).info, ((NU16) 133), ((NimStringDesc*) &TMP7620));
	}
	LA5: ;
	nimln(67, "evaltempl.nim");
	result = newnodei_191351(((NU8) 152), (*n).info);
	{
		NI i_382204;
		NI HEX3Atmp_382234;
		NI TMP7621;
		NI res_382237;
		i_382204 = 0;
		HEX3Atmp_382234 = 0;
		nimln(68, "evaltempl.nim");
		TMP7621 = subInt(f, ((NI) 1));
		HEX3Atmp_382234 = (NI)(TMP7621);
		nimln(1598, "system.nim");
		res_382237 = ((NI) 1);
		{
			nimln(1599, "system.nim");
			while (1) {
				Tnode189813* arg;
				NI TMP7622;
				if (!(res_382237 <= HEX3Atmp_382234)) goto LA9;
				nimln(1600, "system.nim");
				i_382204 = res_382237;
				nimln(69, "evaltempl.nim");
				{
					if (!(i_382204 < a)) goto LA12;
					if (((TMP7613[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7614));
					if ((NU)(i_382204) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
					arg = (*n).kindU.S6.sons->data[i_382204];
				}
				goto LA10;
				LA12: ;
				{
					if (((TMP7613[(*(*(*s).typ).n).kind/8] &(1<<((*(*(*s).typ).n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7614));
					if ((NU)(i_382204) >= (NU)((*(*(*s).typ).n).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (!(((TMP7611[(*(*(*(*s).typ).n).kindU.S6.sons->data[i_382204]).kind/8] &(1<<((*(*(*(*s).typ).n).kindU.S6.sons->data[i_382204]).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP7612));
					arg = copytree_194028((*(*(*(*(*s).typ).n).kindU.S6.sons->data[i_382204]).kindU.S4.sym).ast);
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
					localerror_163155((*n).info, ((NU16) 133), ((NimStringDesc*) &TMP7620));
				}
				LA19: ;
				nimln(72, "evaltempl.nim");
				addson_191819(result, arg);
				nimln(1614, "system.nim");
				TMP7622 = addInt(res_382237, ((NI) 1));
				res_382237 = (NI)(TMP7622);
			} LA9: ;
		}
	}
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, isatom_194906)(Tnode189813* n) {
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

static N_INLINE(NI, safelen_190125)(Tnode189813* n) {
	NI result;
	nimfr("safeLen", "ast.nim")
	result = 0;
	nimln(939, "ast.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((*n).kind >= ((NU8) 0) && (*n).kind <= ((NU8) 23));
		if (LOC3) goto LA4;
		if (((TMP7613[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7614));
		LOC3 = (*n).kindU.S6.sons == 0;
		LA4: ;
		if (!LOC3) goto LA5;
		result = ((NI) 0);
	}
	goto LA1;
	LA5: ;
	{
		nimln(940, "ast.nim");
		if (((TMP7613[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7614));
		result = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(Tnode189813*, evaltemplate_382260)(Tnode189813* n, Tsym189843* tmpl, Tsym189843* gensymowner) {
	Tnode189813* result;
	NI TMP7623;
	Tnode189813* args;
	Templctx382019 ctx;
	Tnode189813* body;
	NI TMP7626;
	nimfr("evalTemplate", "evaltempl.nim")
	result = 0;
	nimln(78, "evaltempl.nim");
	TMP7623 = addInt(evaltemplatecounter_382256, ((NI) 1));
	evaltemplatecounter_382256 = (NI)(TMP7623);
	nimln(79, "evaltempl.nim");
	{
		if (!(((NI) 100) < evaltemplatecounter_382256)) goto LA3;
		nimln(80, "evaltempl.nim");
		globalerror_163134((*n).info, ((NU16) 183), ((NimStringDesc*) &TMP7620));
		nimln(81, "evaltempl.nim");
		result = n;
	}
	LA3: ;
	nimln(84, "evaltempl.nim");
	args = evaltemplateargs_382184(n, tmpl);
	memset((void*)(&ctx), 0, sizeof(ctx));
	nimln(86, "evaltempl.nim");
	ctx.owner = tmpl;
	nimln(87, "evaltempl.nim");
	ctx.gensymowner = gensymowner;
	nimln(88, "evaltempl.nim");
	initidtable_193057((&ctx.mapping));
	nimln(90, "evaltempl.nim");
	body = getbody_234647(tmpl);
	nimln(91, "evaltempl.nim");
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = isatom_194906(body);
		if (!LOC7) goto LA8;
		nimln(92, "evaltempl.nim");
		result = newnodei_191351(((NU8) 37), (*body).info);
		nimln(93, "evaltempl.nim");
		evaltemplateaux_382039(body, args, (&ctx), result);
		nimln(94, "evaltempl.nim");
		{
			NI LOC12;
			LOC12 = 0;
			LOC12 = len_190097(result);
			if (!(LOC12 == ((NI) 1))) goto LA13;
			if (((TMP7613[(*result).kind/8] &(1<<((*result).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7614));
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
			LOC16 = rendertree_211058(result, 4);
			localerror_163155((*result).info, ((NU16) 1), LOC16);
		}
		LA10: ;
	}
	goto LA5;
	LA8: ;
	{
		nimln(99, "evaltempl.nim");
		result = copynode_193640(body);
		nimln(100, "evaltempl.nim");
		ctx.instlines = !(((*body).kind == ((NU8) 115) || (*body).kind == ((NU8) 126) || (*body).kind == ((NU8) 112) || (*body).kind == ((NU8) 127)));
		nimln(102, "evaltempl.nim");
		{
			if (!ctx.instlines) goto LA20;
			(*result).info = (*n).info;
		}
		LA20: ;
		{
			NI i_382308;
			NI HEX3Atmp_382322;
			NI LOC23;
			NI TMP7624;
			NI res_382325;
			i_382308 = 0;
			HEX3Atmp_382322 = 0;
			nimln(103, "evaltempl.nim");
			LOC23 = 0;
			LOC23 = safelen_190125(body);
			TMP7624 = subInt(LOC23, ((NI) 1));
			HEX3Atmp_382322 = (NI)(TMP7624);
			nimln(1598, "system.nim");
			res_382325 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					NI TMP7625;
					if (!(res_382325 <= HEX3Atmp_382322)) goto LA25;
					nimln(1600, "system.nim");
					i_382308 = res_382325;
					nimln(104, "evaltempl.nim");
					if (((TMP7613[(*body).kind/8] &(1<<((*body).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7614));
					if ((NU)(i_382308) >= (NU)((*body).kindU.S6.sons->Sup.len)) raiseIndexError();
					evaltemplateaux_382039((*body).kindU.S6.sons->data[i_382308], args, (&ctx), result);
					nimln(1614, "system.nim");
					TMP7625 = addInt(res_382325, ((NI) 1));
					res_382325 = (NI)(TMP7625);
				} LA25: ;
			}
		}
	}
	LA5: ;
	nimln(106, "evaltempl.nim");
	TMP7626 = subInt(evaltemplatecounter_382256, ((NI) 1));
	evaltemplatecounter_382256 = (NI)(TMP7626);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplInit)(void) {
	nimfr("evaltempl", "evaltempl.nim")
	nimln(74, "evaltempl.nim");
	evaltemplatecounter_382256 = ((NI) 0);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplDatInit)(void) {
}

