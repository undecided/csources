/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct Tpasscontext240005 Tpasscontext240005;
typedef struct Tsym189843 Tsym189843;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tidobj165015 Tidobj165015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq189845 Ttypeseq189845;
typedef struct Tscope189837 Tscope189837;
typedef struct TY189944 TY189944;
typedef struct Tstrtable189817 Tstrtable189817;
typedef struct Tsymseq189815 Tsymseq189815;
typedef struct Ttype189849 Ttype189849;
typedef struct Tident165021 Tident165021;
typedef struct Tlineinfo161338 Tlineinfo161338;
typedef struct Tnode189813 Tnode189813;
typedef struct Tloc189827 Tloc189827;
typedef struct Ropeobj159009 Ropeobj159009;
typedef struct Tlib189831 Tlib189831;
typedef struct Tnodeseq189807 Tnodeseq189807;
typedef struct Tpass240017 Tpass240017;
typedef struct Trodreader232030 Trodreader232030;
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
typedef struct Tinstantiation189833 Tinstantiation189833;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct TY189933 TY189933;
typedef struct Tindex232028 Tindex232028;
typedef struct Tiitable197274 Tiitable197274;
typedef struct Tiipairseq197272 Tiipairseq197272;
typedef struct Tidtable189861 Tidtable189861;
typedef struct Tidpairseq189859 Tidpairseq189859;
typedef struct Memfile230208 Memfile230208;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct Tiipair197270 Tiipair197270;
typedef struct Tidpair189857 Tidpair189857;
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
struct  Tidobj165015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable189817  {
NI counter;
Tsymseq189815* data;
};
struct  Tlineinfo161338  {
NI16 line;
NI16 col;
NI32 fileindex;
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
struct  Tident165021  {
  Tidobj165015 Sup;
NimStringDesc* s;
Tident165021* next;
NI h;
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
typedef N_NIMCALL_PTR(Tpasscontext240005*, Tpassopen240009) (Tsym189843* module);
typedef N_NIMCALL_PTR(Tpasscontext240005*, Tpassopencached240011) (Tsym189843* module, Trodreader232030* rd);
typedef N_NIMCALL_PTR(Tnode189813*, Tpassprocess240015) (Tpasscontext240005* p, Tnode189813* toplevelstmt);
typedef N_NIMCALL_PTR(Tnode189813*, Tpassclose240013) (Tpasscontext240005* p, Tnode189813* n);
struct Tpass240017 {
Tpassopen240009 Field0;
Tpassopencached240011 Field1;
Tpassprocess240015 Field2;
Tpassclose240013 Field3;
};
typedef NU8 TY190031[20];
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
struct  Tpasscontext240005  {
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
struct  Tscope189837  {
NI depthlevel;
Tstrtable189817 symbols;
Tnodeseq189807* usingsyms;
Tscope189837* parent;
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
struct  Tiitable197274  {
NI counter;
Tiipairseq197272* data;
};
struct  Tindex232028  {
NI lastidxkey;
NI lastidxval;
Tiitable197274 tab;
NimStringDesc* r;
NI offset;
};
struct  Tidtable189861  {
NI counter;
Tidpairseq189859* data;
};
struct  Memfile230208  {
void* mem;
NI size;
int handle;
};
struct  Trodreader232030  {
  TNimObject Sup;
NI pos;
NCSTRING s;
NU32 options;
NU8 reason;
TY189933* moddeps;
TY189933* files;
NI dataidx;
NI convertersidx;
NI initidx;
NI interfidx;
NI compilerprocsidx;
NI methodsidx;
NimStringDesc* filename;
Tindex232028 index;
Tindex232028 imports;
NI readerindex;
NI line;
NI moduleid;
Tidtable189861 syms;
Memfile230208 memfile;
Tsymseq189815* methods;
NimStringDesc* origfile;
NIM_BOOL inviewmode;
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
struct  Tinstantiation189833  {
Tsym189843* sym;
Ttypeseq189845* concretetypes;
TY189933* usedby;
};
struct  Tiipair197270  {
NI key;
NI val;
};
struct  Tidpair189857  {
Tidobj165015* key;
TNimObject* val;
};
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
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
struct Tnodeseq189807 {
  TGenericSeq Sup;
  Tnode189813* data[SEQ_DECL_SIZE];
};
struct TY189933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct Tiipairseq197272 {
  TGenericSeq Sup;
  Tiipair197270 data[SEQ_DECL_SIZE];
};
struct Tidpairseq189859 {
  TGenericSeq Sup;
  Tidpair189857 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tpasscontext240005*, verboseopen_504012)(Tsym189843* s);
N_NIMCALL(void, rawmessage_162960)(NU16 msg, NimStringDesc* arg);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(Tnode189813*, verboseprocess_504023)(Tpasscontext240005* context, Tnode189813* n);
N_NIMCALL(void, internalerror_163218)(NimStringDesc* errmsg);
N_NIMCALL(void, message_163188)(Tlineinfo161338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(Tnode189813*, cleanup_504066)(Tpasscontext240005* c, Tnode189813* n);
N_NIMCALL(NI, sonslen_192403)(Tnode189813* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(Tsym189843*, getmodule_197243)(Tsym189843* s);
N_NIMCALL(NIM_BOOL, astneeded_240093)(Tsym189843* s);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr);
static N_INLINE(void, rtladdzct_51804)(Tcell46747* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46763* s, Tcell46747* c);
STRING_LITERAL(TMP10569, "logpass: context is not nil", 27);
NIM_CONST Tpass240017 verbosepass_504056 = {verboseopen_504012,
NIM_NIL,
verboseprocess_504023,
NIM_NIL}
;
static NIM_CONST TY190031 TMP10571 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP10572, "sons", 4);
static NIM_CONST TY190031 TMP10574 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP10575, "sym", 3);
NIM_CONST Tpass240017 cleanuppass_504156 = {NIM_NIL,
NIM_NIL,
cleanup_504066,
cleanup_504066}
;
extern NI gverbosity_152137;
extern TFrame* frameptr_17042;
extern NU64 gnotes_162014;
extern NI gbackendid_188013;
extern NU32 gglobaloptions_152128;
extern Tnode189813* emptynode_190807;
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

N_NIMCALL(Tpasscontext240005*, verboseopen_504012)(Tsym189843* s) {
	Tpasscontext240005* result;
	nimfr("verboseOpen", "passaux.nim")
	result = 0;
	nimln(17, "passaux.nim");
	result = NIM_NIL;
	nimln(18, "passaux.nim");
	{
		if (!(((NI) 0) < gverbosity_152137)) goto LA3;
		rawmessage_162960(((NU16) 269), (*(*s).name).s);
	}
	LA3: ;
	popFrame();
	return result;
}

N_NIMCALL(Tnode189813*, verboseprocess_504023)(Tpasscontext240005* context, Tnode189813* n) {
	Tnode189813* result;
	nimfr("verboseProcess", "passaux.nim")
	result = 0;
	nimln(21, "passaux.nim");
	result = n;
	nimln(22, "passaux.nim");
	{
		if (!!((context == NIM_NIL))) goto LA3;
		internalerror_163218(((NimStringDesc*) &TMP10569));
	}
	LA3: ;
	nimln(23, "passaux.nim");
	{
		NimStringDesc* LOC9;
		if (!(gverbosity_152137 == ((NI) 3))) goto LA7;
		nimln(26, "passaux.nim");
		gnotes_162014 |= ((NI64)1)<<(((((NU16) 269)- 230))%(sizeof(NI64)*8));
		nimln(27, "passaux.nim");
		LOC9 = 0;
		LOC9 = nimIntToStr(gbackendid_188013);
		message_163188((*n).info, ((NU16) 269), LOC9);
	}
	LA7: ;
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

N_NIMCALL(Tnode189813*, cleanup_504066)(Tpasscontext240005* c, Tnode189813* n) {
	Tnode189813* result;
	nimfr("cleanUp", "passaux.nim")
{	result = 0;
	nimln(32, "passaux.nim");
	result = n;
	nimln(34, "passaux.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((gglobaloptions_152128 &(1<<((((NU8) 2))&31)))!=0);
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
			NI i_504105;
			NI HEX3Atmp_504134;
			NI LOC9;
			NI TMP10570;
			NI res_504137;
			i_504105 = 0;
			HEX3Atmp_504134 = 0;
			nimln(37, "passaux.nim");
			LOC9 = 0;
			LOC9 = sonslen_192403(n);
			TMP10570 = subInt(LOC9, ((NI) 1));
			HEX3Atmp_504134 = (NI)(TMP10570);
			nimln(1598, "system.nim");
			res_504137 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					Tnode189813* LOC12;
					NI TMP10573;
					if (!(res_504137 <= HEX3Atmp_504134)) goto LA11;
					nimln(1600, "system.nim");
					i_504105 = res_504137;
					nimln(37, "passaux.nim");
					if (((TMP10571[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP10572));
					if ((NU)(i_504105) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
					LOC12 = 0;
					LOC12 = cleanup_504066(c, (*n).kindU.S6.sons->data[i_504105]);
					nimln(1614, "system.nim");
					TMP10573 = addInt(res_504137, ((NI) 1));
					res_504137 = (NI)(TMP10573);
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
			Tsym189843* s;
			if (((TMP10571[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP10572));
			if ((NU)(((NI) 0)) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
			if (!((*(*n).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 3))) goto LA16;
			nimln(40, "passaux.nim");
			if (((TMP10571[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP10572));
			if ((NU)(((NI) 0)) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
			if (!(((TMP10574[(*(*n).kindU.S6.sons->data[((NI) 0)]).kind/8] &(1<<((*(*n).kindU.S6.sons->data[((NI) 0)]).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP10575));
			s = (*(*n).kindU.S6.sons->data[((NI) 0)]).kindU.S4.sym;
			nimln(41, "passaux.nim");
			{
				NIM_BOOL LOC20;
				Tsym189843* LOC21;
				NIM_BOOL LOC23;
				LOC20 = 0;
				LOC21 = 0;
				LOC21 = getmodule_197243(s);
				LOC20 = !((((*LOC21).flags &(1<<((((NU8) 25))&31)))!=0));
				if (!(LOC20)) goto LA22;
				LOC23 = 0;
				LOC23 = astneeded_240093(s);
				LOC20 = !(LOC23);
				LA22: ;
				if (!LOC20) goto LA24;
				nimln(42, "passaux.nim");
				if (((TMP10571[(*(*s).ast).kind/8] &(1<<((*(*s).ast).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP10572));
				if ((NU)(((NI) 6)) >= (NU)((*(*s).ast).kindU.S6.sons->Sup.len)) raiseIndexError();
				asgnRefNoCycle((void**) (&(*(*s).ast).kindU.S6.sons->data[((NI) 6)]), emptynode_190807);
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

