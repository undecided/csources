/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct Tpasscontext244005 Tpasscontext244005;
typedef struct Tsym193843 Tsym193843;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tidobj169015 Tidobj169015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq193845 Ttypeseq193845;
typedef struct Tscope193837 Tscope193837;
typedef struct TY193944 TY193944;
typedef struct Tstrtable193817 Tstrtable193817;
typedef struct Tsymseq193815 Tsymseq193815;
typedef struct Ttype193849 Ttype193849;
typedef struct Tident169021 Tident169021;
typedef struct Tlineinfo165338 Tlineinfo165338;
typedef struct Tnode193813 Tnode193813;
typedef struct Tloc193827 Tloc193827;
typedef struct Ropeobj163009 Ropeobj163009;
typedef struct Tlib193831 Tlib193831;
typedef struct Tnodeseq193807 Tnodeseq193807;
typedef struct Tpass244017 Tpass244017;
typedef struct Trodreader236030 Trodreader236030;
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
typedef struct Tinstantiation193833 Tinstantiation193833;
typedef struct Tlistentry133022 Tlistentry133022;
typedef struct TY193933 TY193933;
typedef struct Tindex236028 Tindex236028;
typedef struct Tiitable201274 Tiitable201274;
typedef struct Tiipairseq201272 Tiipairseq201272;
typedef struct Tidtable193861 Tidtable193861;
typedef struct Tidpairseq193859 Tidpairseq193859;
typedef struct Memfile234208 Memfile234208;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct Tiipair201270 Tiipair201270;
typedef struct Tidpair193857 Tidpair193857;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj169015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable193817  {
NI counter;
Tsymseq193815* data;
};
struct  Tlineinfo165338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tloc193827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype193849* t;
Ropeobj163009* r;
Ropeobj163009* heaproot;
};
struct  Tsym193843  {
  Tidobj169015 Sup;
NU8 kind;
union{
struct {Ttypeseq193845* typeinstcache;
Tscope193837* typscope;
} S1;
struct {TY193944* procinstcache;
Tsym193843* gcunsafetyreason;
} S2;
struct {TY193944* usedgenerics;
Tstrtable193817 tab;
} S3;
struct {Tsym193843* guard;
} S4;
} kindU;
NU16 magic;
Ttype193849* typ;
Tident169021* name;
Tlineinfo165338 info;
Tsym193843* owner;
NU32 flags;
Tnode193813* ast;
NU32 options;
NI position;
NI offset;
Tloc193827 loc;
Tlib193831* annex;
Tnode193813* constraint;
};
struct  Tident169021  {
  Tidobj169015 Sup;
NimStringDesc* s;
Tident169021* next;
NI h;
};
struct  Tnode193813  {
Ttype193849* typ;
Tlineinfo165338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym193843* sym;
} S4;
struct {Tident169021* ident;
} S5;
struct {Tnodeseq193807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef N_NIMCALL_PTR(Tpasscontext244005*, Tpassopen244009) (Tsym193843* module);
typedef N_NIMCALL_PTR(Tpasscontext244005*, Tpassopencached244011) (Tsym193843* module, Trodreader236030* rd);
typedef N_NIMCALL_PTR(Tnode193813*, Tpassprocess244015) (Tpasscontext244005* p, Tnode193813* toplevelstmt);
typedef N_NIMCALL_PTR(Tnode193813*, Tpassclose244013) (Tpasscontext244005* p, Tnode193813* n);
struct Tpass244017 {
Tpassopen244009 Field0;
Tpassopencached244011 Field1;
Tpassprocess244015 Field2;
Tpassclose244013 Field3;
};
typedef NU8 TY194031[20];
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
struct  Tpasscontext244005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tscope193837  {
NI depthlevel;
Tstrtable193817 symbols;
Tnodeseq193807* usingsyms;
Tscope193837* parent;
};
struct  Ttype193849  {
  Tidobj169015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq193845* sons;
Tnode193813* n;
Tsym193843* owner;
Tsym193843* sym;
Tsym193843* destructor;
Tsym193843* deepcopy;
Tsym193843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc193827 loc;
};
struct  Ropeobj163009  {
  TNimObject Sup;
Ropeobj163009* left;
Ropeobj163009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry133022  {
  TNimObject Sup;
Tlistentry133022* prev;
Tlistentry133022* next;
};
struct  Tlib193831  {
  Tlistentry133022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj163009* name;
Tnode193813* path;
};
struct  Tiitable201274  {
NI counter;
Tiipairseq201272* data;
};
struct  Tindex236028  {
NI lastidxkey;
NI lastidxval;
Tiitable201274 tab;
NimStringDesc* r;
NI offset;
};
struct  Tidtable193861  {
NI counter;
Tidpairseq193859* data;
};
struct  Memfile234208  {
void* mem;
NI size;
NI fhandle;
NI maphandle;
};
struct  Trodreader236030  {
  TNimObject Sup;
NI pos;
NCSTRING s;
NU32 options;
NU8 reason;
TY193933* moddeps;
TY193933* files;
NI dataidx;
NI convertersidx;
NI initidx;
NI interfidx;
NI compilerprocsidx;
NI methodsidx;
NimStringDesc* filename;
Tindex236028 index;
Tindex236028 imports;
NI readerindex;
NI line;
NI moduleid;
Tidtable193861 syms;
Memfile234208 memfile;
Tsymseq193815* methods;
NimStringDesc* origfile;
NIM_BOOL inviewmode;
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
struct  Tinstantiation193833  {
Tsym193843* sym;
Ttypeseq193845* concretetypes;
TY193933* usedby;
};
struct  Tiipair201270  {
NI key;
NI val;
};
struct  Tidpair193857  {
Tidobj169015* key;
TNimObject* val;
};
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
struct Ttypeseq193845 {
  TGenericSeq Sup;
  Ttype193849* data[SEQ_DECL_SIZE];
};
struct TY193944 {
  TGenericSeq Sup;
  Tinstantiation193833* data[SEQ_DECL_SIZE];
};
struct Tsymseq193815 {
  TGenericSeq Sup;
  Tsym193843* data[SEQ_DECL_SIZE];
};
struct Tnodeseq193807 {
  TGenericSeq Sup;
  Tnode193813* data[SEQ_DECL_SIZE];
};
struct TY193933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct Tiipairseq201272 {
  TGenericSeq Sup;
  Tiipair201270 data[SEQ_DECL_SIZE];
};
struct Tidpairseq193859 {
  TGenericSeq Sup;
  Tidpair193857 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tpasscontext244005*, verboseopen_508012)(Tsym193843* s);
N_NIMCALL(void, rawmessage_166960)(NU16 msg, NimStringDesc* arg);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(Tnode193813*, verboseprocess_508023)(Tpasscontext244005* context, Tnode193813* n);
N_NIMCALL(void, internalerror_167218)(NimStringDesc* errmsg);
N_NIMCALL(void, message_167188)(Tlineinfo165338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(Tnode193813*, cleanup_508066)(Tpasscontext244005* c, Tnode193813* n);
N_NIMCALL(NI, sonslen_196403)(Tnode193813* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(Tsym193843*, getmodule_201243)(Tsym193843* s);
N_NIMCALL(NIM_BOOL, astneeded_244093)(Tsym193843* s);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46746*, usrtocell_50246)(void* usr);
static N_INLINE(void, rtladdzct_51804)(Tcell46746* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46762* s, Tcell46746* c);
STRING_LITERAL(TMP10562, "logpass: context is not nil", 27);
NIM_CONST Tpass244017 verbosepass_508056 = {verboseopen_508012,
NIM_NIL,
verboseprocess_508023,
NIM_NIL}
;
static NIM_CONST TY194031 TMP10564 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP10565, "sons", 4);
static NIM_CONST TY194031 TMP10567 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP10568, "sym", 3);
NIM_CONST Tpass244017 cleanuppass_508156 = {NIM_NIL,
NIM_NIL,
cleanup_508066,
cleanup_508066}
;
extern NI gverbosity_156137;
extern TFrame* frameptr_17042;
extern NU64 gnotes_166011;
extern NI gbackendid_192013;
extern NU32 gglobaloptions_156128;
extern Tnode193813* emptynode_194807;
extern Tgcheap48616 gch_48644;

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

N_NIMCALL(Tpasscontext244005*, verboseopen_508012)(Tsym193843* s) {
	Tpasscontext244005* result;
	nimfr("verboseOpen", "passaux.nim")
	result = 0;
	nimln(17, "passaux.nim");
	result = NIM_NIL;
	nimln(18, "passaux.nim");
	{
		if (!(((NI) 0) < gverbosity_156137)) goto LA3;
		rawmessage_166960(((NU16) 269), (*(*s).name).s);
	}
	LA3: ;
	popFrame();
	return result;
}

N_NIMCALL(Tnode193813*, verboseprocess_508023)(Tpasscontext244005* context, Tnode193813* n) {
	Tnode193813* result;
	nimfr("verboseProcess", "passaux.nim")
	result = 0;
	nimln(21, "passaux.nim");
	result = n;
	nimln(22, "passaux.nim");
	{
		if (!!((context == NIM_NIL))) goto LA3;
		internalerror_167218(((NimStringDesc*) &TMP10562));
	}
	LA3: ;
	nimln(23, "passaux.nim");
	{
		NimStringDesc* LOC9;
		if (!(gverbosity_156137 == ((NI) 3))) goto LA7;
		nimln(26, "passaux.nim");
		gnotes_166011 |= ((NI64)1)<<(((((NU16) 269)- 230))%(sizeof(NI64)*8));
		nimln(27, "passaux.nim");
		LOC9 = 0;
		LOC9 = nimIntToStr(gbackendid_192013);
		message_167188((*n).info, ((NU16) 269), LOC9);
	}
	LA7: ;
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

N_NIMCALL(Tnode193813*, cleanup_508066)(Tpasscontext244005* c, Tnode193813* n) {
	Tnode193813* result;
	nimfr("cleanUp", "passaux.nim")
{	result = 0;
	nimln(32, "passaux.nim");
	result = n;
	nimln(34, "passaux.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((gglobaloptions_156128 &(1<<((((NU8) 2))&31)))!=0);
		if (LOC3) goto LA4;
		LOC3 = (n == NIM_NIL);
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	nimln(35, "passaux.nim");
	switch ((*n).kind) {
	case ((NU8) 115):
	{
		{
			NI i_508105;
			NI HEX3Atmp_508134;
			NI LOC9;
			NI TMP10563;
			NI res_508137;
			i_508105 = 0;
			HEX3Atmp_508134 = 0;
			nimln(37, "passaux.nim");
			LOC9 = 0;
			LOC9 = sonslen_196403(n);
			TMP10563 = subInt(LOC9, ((NI) 1));
			HEX3Atmp_508134 = (NI)(TMP10563);
			nimln(1598, "system.nim");
			res_508137 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					Tnode193813* LOC12;
					NI TMP10566;
					if (!(res_508137 <= HEX3Atmp_508134)) goto LA11;
					nimln(1600, "system.nim");
					i_508105 = res_508137;
					nimln(37, "passaux.nim");
					if (((TMP10564[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP10565));
					if ((NU)(i_508105) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
					LOC12 = 0;
					LOC12 = cleanup_508066(c, (*n).kindU.S6.sons->data[i_508105]);
					nimln(1614, "system.nim");
					TMP10566 = addInt(res_508137, ((NI) 1));
					res_508137 = (NI)(TMP10566);
				} LA11: ;
			}
		}
	}
	break;
	case ((NU8) 79):
	case ((NU8) 80):
	{
		nimln(39, "passaux.nim");
		{
			Tsym193843* s;
			if (((TMP10564[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP10565));
			if ((NU)(((NI) 0)) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
			if (!((*(*n).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 3))) goto LA16;
			nimln(40, "passaux.nim");
			if (((TMP10564[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP10565));
			if ((NU)(((NI) 0)) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
			if (!(((TMP10567[(*(*n).kindU.S6.sons->data[((NI) 0)]).kind/8] &(1<<((*(*n).kindU.S6.sons->data[((NI) 0)]).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP10568));
			s = (*(*n).kindU.S6.sons->data[((NI) 0)]).kindU.S4.sym;
			nimln(41, "passaux.nim");
			{
				NIM_BOOL LOC20;
				Tsym193843* LOC21;
				NIM_BOOL LOC23;
				LOC20 = 0;
				LOC21 = 0;
				LOC21 = getmodule_201243(s);
				LOC20 = !((((*LOC21).flags &(1<<((((NU8) 25))&31)))!=0));
				if (!(LOC20)) goto LA22;
				LOC23 = 0;
				LOC23 = astneeded_244093(s);
				LOC20 = !(LOC23);
				LA22: ;
				if (!LOC20) goto LA24;
				nimln(42, "passaux.nim");
				if (((TMP10564[(*(*s).ast).kind/8] &(1<<((*(*s).ast).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP10565));
				if ((NU)(((NI) 6)) >= (NU)((*(*s).ast).kindU.S6.sons->Sup.len)) raiseIndexError();
				asgnRefNoCycle((void**) (&(*(*s).ast).kindU.S6.sons->data[((NI) 6)]), emptynode_194807);
			}
			LA24: ;
		}
		LA16: ;
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
NIM_EXTERNC N_NOINLINE(void, compiler_passauxInit)(void) {
	nimfr("passaux", "passaux.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_passauxDatInit)(void) {
}

