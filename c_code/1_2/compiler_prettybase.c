/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct TY251019 TY251019;
typedef struct Tsourcefile251008 Tsourcefile251008;
typedef struct TY13606 TY13606;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct Tlineinfo165338 Tlineinfo165338;
typedef struct TY119789 TY119789;
typedef struct Baselexer249024 Baselexer249024;
typedef struct TNimObject TNimObject;
typedef struct Streamobj141027 Streamobj141027;
typedef struct Filestreamobj141692 Filestreamobj141692;
typedef struct Slice88061 Slice88061;
typedef struct Tident169021 Tident169021;
typedef struct Tidobj169015 Tidobj169015;
typedef struct Tsym193843 Tsym193843;
typedef struct Ttypeseq193845 Ttypeseq193845;
typedef struct Tscope193837 Tscope193837;
typedef struct TY193944 TY193944;
typedef struct Tstrtable193817 Tstrtable193817;
typedef struct Tsymseq193815 Tsymseq193815;
typedef struct Ttype193849 Ttype193849;
typedef struct Tnode193813 Tnode193813;
typedef struct Tloc193827 Tloc193827;
typedef struct Ropeobj163009 Ropeobj163009;
typedef struct Tlib193831 Tlib193831;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct Tnodeseq193807 Tnodeseq193807;
typedef struct Tinstantiation193833 Tinstantiation193833;
typedef struct Tlistentry133022 Tlistentry133022;
typedef struct TY193933 TY193933;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tsourcefile251008  {
TY13606* lines;
NIM_BOOL dirty;
NIM_BOOL isnimfixfile;
NimStringDesc* fullpath;
NimStringDesc* newline;
NI32 fileidx;
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
struct  Tlineinfo165338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct TY119789 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Baselexer249024  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Streamobj141027* input;
NI linenumber;
NI sentinel;
NI linestart;
NIM_BOOL fileopened;
};
typedef NU8 TY77659[32];
struct  Slice88061  {
NI a;
NI b;
};
struct  Tidobj169015  {
  TNimObject Sup;
NI id;
};
struct  Tident169021  {
  Tidobj169015 Sup;
NimStringDesc* s;
Tident169021* next;
NI h;
};
struct  Tstrtable193817  {
NI counter;
Tsymseq193815* data;
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
typedef N_NIMCALL_PTR(void, TY141028) (Streamobj141027* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY141032) (Streamobj141027* s);
typedef N_NIMCALL_PTR(void, TY141036) (Streamobj141027* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY141041) (Streamobj141027* s);
typedef N_NIMCALL_PTR(NI, TY141045) (Streamobj141027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY141051) (Streamobj141027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY141057) (Streamobj141027* s);
struct  Streamobj141027  {
  TNimObject Sup;
TY141028 closeimpl;
TY141032 atendimpl;
TY141036 setpositionimpl;
TY141041 getpositionimpl;
TY141045 readdataimpl;
TY141051 writedataimpl;
TY141057 flushimpl;
};
struct  Filestreamobj141692  {
  Streamobj141027 Sup;
FILE* f;
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
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
struct  Tinstantiation193833  {
Tsym193843* sym;
Ttypeseq193845* concretetypes;
TY193933* usedby;
};
struct TY251019 {
  TGenericSeq Sup;
  Tsourcefile251008 data[SEQ_DECL_SIZE];
};
struct TY13606 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
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
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4251)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46746*, usrtocell_50246)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_51804)(Tcell46746* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46762* s, Tcell46746* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, loadfile_251041)(Tlineinfo165338 info);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NimStringDesc*, tofullpath_166273)(NI32 fileidx);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY119789* Result);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(FILE*, open_13217)(NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readline_13481)(FILE* f, NimStringDesc** line);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(void, open_249040)(Baselexer249024* L, Streamobj141027* input, NI buflen);
N_NIMCALL(Filestreamobj141692*, newfilestream_141774)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, close_249050)(Baselexer249024* L);
N_NIMCALL(NI, identlen_251147)(NimStringDesc* line, NI start);
N_NIMCALL(NIM_BOOL, differ_251184)(NimStringDesc* line, NI a, NI b, NimStringDesc* x);
static N_INLINE(NimStringDesc*, HEX5BHEX5D_88054)(NimStringDesc* s, Slice88061 x);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76643, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(Slice88061, HEX2EHEX2E_110273)(NI a, NI b);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(void, replacedeprecated_251208)(Tlineinfo165338 info, Tident169021* oldsym, Tident169021* newsym);
static N_INLINE(NI, subInt)(NI a, NI b);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, replacedeprecated_251273)(Tlineinfo165338 info, Tsym193843* oldsym, Tsym193843* newsym);
N_NIMCALL(void, replacecomment_251286)(Tlineinfo165338 info);
N_NIMCALL(NimStringDesc*, nsuEscape)(NimStringDesc* s, NimStringDesc* prefix, NimStringDesc* suffix);
STRING_LITERAL(TMP4253, ".nimfix", 7);
STRING_LITERAL(TMP4256, "\015\012", 2);
STRING_LITERAL(TMP4257, "\012", 1);
NIM_CONST TY77659 Letters_251142 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x03,
0xFE, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}
;
STRING_LITERAL(TMP4274, "discard ", 8);
STRING_LITERAL(TMP4276, "\"", 1);
TY251019* gsourcefiles_251036;
TNimType NTI251008; /* TSourceFile */
extern TNimType NTI13606; /* seq[string] */
extern TNimType NTI138; /* bool */
extern TNimType NTI149; /* string */
extern TNimType NTI114; /* int32 */
TNimType NTI251019; /* seq[TSourceFile] */
extern TFrame* frameptr_17042;
extern Tgcheap48616 gch_48644;
extern TNimType NTI249024; /* BaseLexer */
N_NIMCALL(void, TMP4251)(void* p, NI op) {
	TY251019* a;
	NI LOC1;
	a = (TY251019*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].lines, op);
	nimGCvisit((void*)a->data[LOC1].fullpath, op);
	nimGCvisit((void*)a->data[LOC1].newline, op);
	}
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46746* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_50246(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).refcount -= ((NI) 8);
		nimln(168, "gc.nim");
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_51804(c);
	}
	LA3: ;
	popFrame();
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

N_NIMCALL(void, loadfile_251041)(Tlineinfo165338 info) {
	NI32 i;
	nimfr("loadFile", "prettybase.nim")
	nimln(24, "prettybase.nim");
	i = info.fileindex;
	nimln(25, "prettybase.nim");
	{
		NI TMP4252;
		if (!((gsourcefiles_251036 ? gsourcefiles_251036->Sup.len : 0) <= ((NI) (i)))) goto LA3;
		nimln(26, "prettybase.nim");
		TMP4252 = addInt(i, ((NI32) 1));
		if (TMP4252 < (-2147483647 -1) || TMP4252 > 2147483647) raiseOverflow();
		gsourcefiles_251036 = (TY251019*) setLengthSeq(&(gsourcefiles_251036)->Sup, sizeof(Tsourcefile251008), ((NI)chckRange((NI32)(TMP4252), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	}
	LA3: ;
	nimln(27, "prettybase.nim");
	{
		NimStringDesc* path;
		NimStringDesc* LOC9;
		TY119789 LOC10;
		Baselexer249024 lex;
		Filestreamobj141692* LOC16;
		Streamobj141027* LOC17;
		NI pos;
		if ((NU)(i) >= (NU)(gsourcefiles_251036->Sup.len)) raiseIndexError();
		if (!gsourcefiles_251036->data[i].lines == 0) goto LA7;
		nimln(28, "prettybase.nim");
		if ((NU)(i) >= (NU)(gsourcefiles_251036->Sup.len)) raiseIndexError();
		gsourcefiles_251036->data[i].fileidx = info.fileindex;
		nimln(29, "prettybase.nim");
		if ((NU)(i) >= (NU)(gsourcefiles_251036->Sup.len)) raiseIndexError();
		if (gsourcefiles_251036->data[i].lines) nimGCunrefNoCycle(gsourcefiles_251036->data[i].lines);
		gsourcefiles_251036->data[i].lines = (TY13606*) newSeqRC1((&NTI13606), 0);
		nimln(30, "prettybase.nim");
		path = tofullpath_166273(info.fileindex);
		nimln(31, "prettybase.nim");
		if ((NU)(i) >= (NU)(gsourcefiles_251036->Sup.len)) raiseIndexError();
		LOC9 = 0;
		LOC9 = gsourcefiles_251036->data[i].fullpath; gsourcefiles_251036->data[i].fullpath = copyStringRC1(path);
		if (LOC9) nimGCunrefNoCycle(LOC9);
		nimln(32, "prettybase.nim");
		if ((NU)(i) >= (NU)(gsourcefiles_251036->Sup.len)) raiseIndexError();
		memset((void*)(&LOC10), 0, sizeof(LOC10));
		nossplitFile(path, (&LOC10));
		gsourcefiles_251036->data[i].isnimfixfile = eqStrings(LOC10.Field2, ((NimStringDesc*) &TMP4253));
		{
			NimStringDesc* line_251088;
			FILE* f_251115;
			NimStringDesc* res_251117;
			line_251088 = 0;
			nimln(2699, "system.nim");
			f_251115 = open_13217(path, ((NU8) 0), ((NI) 8000));
			nimln(2700, "system.nim");
			res_251117 = rawNewString(((NI) 80));
			{
				nimln(2701, "system.nim");
				while (1) {
					NIM_BOOL LOC14;
					NimStringDesc* LOC15;
					LOC14 = 0;
					LOC14 = readline_13481(f_251115, (&res_251117));
					if (!LOC14) goto LA13;
					nimln(2700, "system.nim");
					line_251088 = res_251117;
					nimln(35, "prettybase.nim");
					if ((NU)(i) >= (NU)(gsourcefiles_251036->Sup.len)) raiseIndexError();
					gsourcefiles_251036->data[i].lines = (TY13606*) incrSeq(&(gsourcefiles_251036->data[i].lines)->Sup, sizeof(NimStringDesc*));
					LOC15 = 0;
					LOC15 = gsourcefiles_251036->data[i].lines->data[gsourcefiles_251036->data[i].lines->Sup.len-1]; gsourcefiles_251036->data[i].lines->data[gsourcefiles_251036->data[i].lines->Sup.len-1] = copyStringRC1(line_251088);
					if (LOC15) nimGCunrefNoCycle(LOC15);
				} LA13: ;
			}
			nimln(2702, "system.nim");
			fclose(f_251115);
		}
		memset((void*)(&lex), 0, sizeof(lex));
		lex.Sup.m_type = (&NTI249024);
		nimln(38, "prettybase.nim");
		LOC16 = 0;
		LOC16 = newfilestream_141774(path, ((NU8) 0));
		LOC17 = 0;
		LOC17 = &LOC16->Sup;
		open_249040((&lex), LOC17, ((NI) 8192));
		nimln(39, "prettybase.nim");
		pos = lex.bufpos;
		{
			nimln(40, "prettybase.nim");
			while (1) {
				NI TMP4258;
				nimln(41, "prettybase.nim");
				switch (((NU8)(lex.buf[pos]))) {
				case 13:
				{
					NimStringDesc* LOC21;
					nimln(43, "prettybase.nim");
					if ((NU)(i) >= (NU)(gsourcefiles_251036->Sup.len)) raiseIndexError();
					LOC21 = 0;
					LOC21 = gsourcefiles_251036->data[i].newline; gsourcefiles_251036->data[i].newline = copyStringRC1(((NimStringDesc*) &TMP4256));
					if (LOC21) nimGCunrefNoCycle(LOC21);
					nimln(44, "prettybase.nim");
					goto LA18;
				}
				break;
				case 10:
				case 0:
				{
					NimStringDesc* LOC23;
					nimln(46, "prettybase.nim");
					if ((NU)(i) >= (NU)(gsourcefiles_251036->Sup.len)) raiseIndexError();
					LOC23 = 0;
					LOC23 = gsourcefiles_251036->data[i].newline; gsourcefiles_251036->data[i].newline = copyStringRC1(((NimStringDesc*) &TMP4257));
					if (LOC23) nimGCunrefNoCycle(LOC23);
					nimln(47, "prettybase.nim");
					goto LA18;
				}
				break;
				default:
				{
				}
				break;
				}
				nimln(49, "prettybase.nim");
				TMP4258 = addInt(pos, ((NI) 1));
				pos = (NI)(TMP4258);
			}
		} LA18: ;
		nimln(50, "prettybase.nim");
		close_249050((&lex));
	}
	LA7: ;
	popFrame();
}

N_NIMCALL(NI, identlen_251147)(NimStringDesc* line, NI start) {
	NI result;
	nimfr("identLen", "prettybase.nim")
	result = 0;
	{
		nimln(56, "prettybase.nim");
		while (1) {
			NIM_BOOL LOC3;
			NI TMP4259;
			NI TMP4260;
			NI TMP4261;
			LOC3 = 0;
			TMP4259 = addInt(start, result);
			LOC3 = ((NI)(TMP4259) < (line ? line->Sup.len : 0));
			if (!(LOC3)) goto LA4;
			TMP4260 = addInt(start, result);
			if ((NU)((NI)(TMP4260)) > (NU)(line->Sup.len)) raiseIndexError();
			LOC3 = (((NU8)(line->data[(NI)(TMP4260)])) >= ((NU8)(97)) && ((NU8)(line->data[(NI)(TMP4260)])) <= ((NU8)(122)) || ((NU8)(line->data[(NI)(TMP4260)])) >= ((NU8)(65)) && ((NU8)(line->data[(NI)(TMP4260)])) <= ((NU8)(90)) || ((NU8)(line->data[(NI)(TMP4260)])) >= ((NU8)(48)) && ((NU8)(line->data[(NI)(TMP4260)])) <= ((NU8)(57)) || ((NU8)(line->data[(NI)(TMP4260)])) >= ((NU8)(128)) && ((NU8)(line->data[(NI)(TMP4260)])) <= ((NU8)(255)) || ((NU8)(line->data[(NI)(TMP4260)])) == ((NU8)(95)));
			LA4: ;
			if (!LOC3) goto LA2;
			nimln(57, "prettybase.nim");
			TMP4261 = addInt(result, ((NI) 1));
			result = (NI)(TMP4261);
		} LA2: ;
	}
	popFrame();
	return result;
}

static N_INLINE(NimStringDesc*, HEX5BHEX5D_88054)(NimStringDesc* s, Slice88061 x) {
	NimStringDesc* result;
	nimfr("[]", "system.nim")
	result = 0;
	nimln(2880, "system.nim");
	result = copyStrLast(s, x.a, x.b);
	popFrame();
	return result;
}

static N_INLINE(Slice88061, HEX2EHEX2E_110273)(NI a, NI b) {
	Slice88061 result;
	nimfr("..", "system.nim")
	memset((void*)(&result), 0, sizeof(result));
	nimln(234, "system.nim");
	result.a = a;
	nimln(235, "system.nim");
	result.b = b;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, differ_251184)(NimStringDesc* line, NI a, NI b, NimStringDesc* x) {
	NIM_BOOL result;
	NimStringDesc* y;
	Slice88061 LOC1;
	NIM_BOOL LOC2;
	NI LOC3;
	nimfr("differ", "prettybase.nim")
	result = 0;
	nimln(60, "prettybase.nim");
	LOC1 = HEX2EHEX2E_110273(a, b);
	y = HEX5BHEX5D_88054(line, LOC1);
	nimln(61, "prettybase.nim");
	LOC2 = 0;
	LOC3 = 0;
	LOC3 = nsuCmpIgnoreStyle(y, x);
	LOC2 = (LOC3 == ((NI) 0));
	if (!(LOC2)) goto LA4;
	LOC2 = !(eqStrings(y, x));
	LA4: ;
	result = LOC2;
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

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
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

N_NIMCALL(void, replacedeprecated_251208)(Tlineinfo165338 info, Tident169021* oldsym, Tident169021* newsym) {
	NimStringDesc* line;
	NI TMP4262;
	NI first;
	NI last;
	NI LOC17;
	NI TMP4266;
	NI TMP4267;
	nimfr("replaceDeprecated", "prettybase.nim")
{	nimln(64, "prettybase.nim");
	loadfile_251041(info);
	nimln(66, "prettybase.nim");
	if ((NU)(info.fileindex) >= (NU)(gsourcefiles_251036->Sup.len)) raiseIndexError();
	TMP4262 = subInt(info.line, ((NI16) 1));
	if (TMP4262 < -32768 || TMP4262 > 32767) raiseOverflow();
	if ((NU)((NI16)(TMP4262)) >= (NU)(gsourcefiles_251036->data[info.fileindex].lines->Sup.len)) raiseIndexError();
	line = gsourcefiles_251036->data[info.fileindex].lines->data[(NI16)(TMP4262)];
	nimln(67, "prettybase.nim");
	first = ((((NI) (info.col)) <= (line ? line->Sup.len : 0)) ? ((NI) (info.col)) : (line ? line->Sup.len : 0));
	nimln(68, "prettybase.nim");
	{
		if (!(first < ((NI) 0))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		nimln(70, "prettybase.nim");
		while (1) {
			NIM_BOOL LOC7;
			NI TMP4263;
			NI TMP4264;
			LOC7 = 0;
			LOC7 = (((NI) 0) < first);
			if (!(LOC7)) goto LA8;
			TMP4263 = subInt(first, ((NI) 1));
			if ((NU)((NI)(TMP4263)) > (NU)(line->Sup.len)) raiseIndexError();
			LOC7 = (((NU8)(line->data[(NI)(TMP4263)])) >= ((NU8)(97)) && ((NU8)(line->data[(NI)(TMP4263)])) <= ((NU8)(122)) || ((NU8)(line->data[(NI)(TMP4263)])) >= ((NU8)(65)) && ((NU8)(line->data[(NI)(TMP4263)])) <= ((NU8)(90)) || ((NU8)(line->data[(NI)(TMP4263)])) >= ((NU8)(48)) && ((NU8)(line->data[(NI)(TMP4263)])) <= ((NU8)(57)) || ((NU8)(line->data[(NI)(TMP4263)])) >= ((NU8)(128)) && ((NU8)(line->data[(NI)(TMP4263)])) <= ((NU8)(255)) || ((NU8)(line->data[(NI)(TMP4263)])) == ((NU8)(95)));
			LA8: ;
			if (!LOC7) goto LA6;
			TMP4264 = subInt(first, ((NI) 1));
			first = (NI)(TMP4264);
		} LA6: ;
	}
	nimln(71, "prettybase.nim");
	{
		if (!(first < ((NI) 0))) goto LA11;
		goto BeforeRet;
	}
	LA11: ;
	nimln(72, "prettybase.nim");
	{
		NI TMP4265;
		if ((NU)(first) > (NU)(line->Sup.len)) raiseIndexError();
		if (!((NU8)(line->data[first]) == (NU8)(96))) goto LA15;
		TMP4265 = addInt(first, ((NI) 1));
		first = (NI)(TMP4265);
	}
	LA15: ;
	nimln(74, "prettybase.nim");
	LOC17 = 0;
	LOC17 = identlen_251147(line, first);
	TMP4266 = addInt(first, LOC17);
	TMP4267 = subInt((NI)(TMP4266), ((NI) 1));
	last = (NI)(TMP4267);
	nimln(75, "prettybase.nim");
	{
		Slice88061 LOC20;
		NimStringDesc* LOC21;
		NI LOC22;
		NimStringDesc* x;
		NimStringDesc* LOC25;
		NI TMP4268;
		NimStringDesc* LOC26;
		NI TMP4269;
		NimStringDesc* LOC27;
		NI TMP4270;
		LOC20 = HEX2EHEX2E_110273(first, last);
		LOC21 = 0;
		LOC21 = HEX5BHEX5D_88054(line, LOC20);
		LOC22 = 0;
		LOC22 = nsuCmpIgnoreStyle(LOC21, (*oldsym).s);
		if (!(LOC22 == ((NI) 0))) goto LA23;
		nimln(76, "prettybase.nim");
		LOC25 = 0;
		TMP4268 = subInt(first, ((NI) 1));
		LOC26 = 0;
		LOC26 = copyStrLast(line, ((NI) 0), (NI)(TMP4268));
		TMP4269 = addInt(last, ((NI) 1));
		LOC27 = 0;
		LOC27 = copyStr(line, (NI)(TMP4269));
		LOC25 = rawNewString(LOC26->Sup.len + (*newsym).s->Sup.len + LOC27->Sup.len + 0);
appendString(LOC25, LOC26);
appendString(LOC25, (*newsym).s);
appendString(LOC25, LOC27);
		x = LOC25;
		nimln(77, "prettybase.nim");
		if ((NU)(info.fileindex) >= (NU)(gsourcefiles_251036->Sup.len)) raiseIndexError();
		TMP4270 = subInt(info.line, ((NI16) 1));
		if (TMP4270 < -32768 || TMP4270 > 32767) raiseOverflow();
		if ((NU)((NI16)(TMP4270)) >= (NU)(gsourcefiles_251036->data[info.fileindex].lines->Sup.len)) raiseIndexError();
		asgnRefNoCycle((void**) (&gsourcefiles_251036->data[info.fileindex].lines->data[(NI16)(TMP4270)]), x);
		nimln(78, "prettybase.nim");
		if ((NU)(info.fileindex) >= (NU)(gsourcefiles_251036->Sup.len)) raiseIndexError();
		gsourcefiles_251036->data[info.fileindex].dirty = NIM_TRUE;
	}
	LA23: ;
	}BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, replacedeprecated_251273)(Tlineinfo165338 info, Tsym193843* oldsym, Tsym193843* newsym) {
	nimfr("replaceDeprecated", "prettybase.nim")
	nimln(82, "prettybase.nim");
	replacedeprecated_251208(info, (*oldsym).name, (*newsym).name);
	popFrame();
}

N_NIMCALL(void, replacecomment_251286)(Tlineinfo165338 info) {
	NimStringDesc* line;
	NI TMP4271;
	NI first;
	NimStringDesc* x;
	NimStringDesc* LOC5;
	NI TMP4273;
	NimStringDesc* LOC6;
	NI TMP4275;
	NimStringDesc* LOC7;
	NimStringDesc* LOC8;
	NI TMP4277;
	nimfr("replaceComment", "prettybase.nim")
	nimln(85, "prettybase.nim");
	loadfile_251041(info);
	nimln(87, "prettybase.nim");
	if ((NU)(info.fileindex) >= (NU)(gsourcefiles_251036->Sup.len)) raiseIndexError();
	TMP4271 = subInt(info.line, ((NI16) 1));
	if (TMP4271 < -32768 || TMP4271 > 32767) raiseOverflow();
	if ((NU)((NI16)(TMP4271)) >= (NU)(gsourcefiles_251036->data[info.fileindex].lines->Sup.len)) raiseIndexError();
	line = gsourcefiles_251036->data[info.fileindex].lines->data[(NI16)(TMP4271)];
	nimln(88, "prettybase.nim");
	first = ((NI) (info.col));
	nimln(89, "prettybase.nim");
	{
		NI TMP4272;
		if ((NU)(first) > (NU)(line->Sup.len)) raiseIndexError();
		if (!!(((NU8)(line->data[first]) == (NU8)(35)))) goto LA3;
		TMP4272 = addInt(first, ((NI) 1));
		first = (NI)(TMP4272);
	}
	LA3: ;
	nimln(91, "prettybase.nim");
	LOC5 = 0;
	TMP4273 = subInt(first, ((NI) 1));
	LOC6 = 0;
	LOC6 = copyStrLast(line, ((NI) 0), (NI)(TMP4273));
	TMP4275 = addInt(first, ((NI) 1));
	LOC7 = 0;
	LOC7 = copyStr(line, (NI)(TMP4275));
	LOC8 = 0;
	LOC8 = nsuEscape(LOC7, ((NimStringDesc*) &TMP4276), ((NimStringDesc*) &TMP4276));
	LOC5 = rawNewString(LOC6->Sup.len + LOC8->Sup.len + 8);
appendString(LOC5, LOC6);
appendString(LOC5, ((NimStringDesc*) &TMP4274));
appendString(LOC5, LOC8);
	x = LOC5;
	nimln(92, "prettybase.nim");
	if ((NU)(info.fileindex) >= (NU)(gsourcefiles_251036->Sup.len)) raiseIndexError();
	TMP4277 = subInt(info.line, ((NI16) 1));
	if (TMP4277 < -32768 || TMP4277 > 32767) raiseOverflow();
	if ((NU)((NI16)(TMP4277)) >= (NU)(gsourcefiles_251036->data[info.fileindex].lines->Sup.len)) raiseIndexError();
	asgnRefNoCycle((void**) (&gsourcefiles_251036->data[info.fileindex].lines->data[(NI16)(TMP4277)]), x);
	nimln(93, "prettybase.nim");
	if ((NU)(info.fileindex) >= (NU)(gsourcefiles_251036->Sup.len)) raiseIndexError();
	gsourcefiles_251036->data[info.fileindex].dirty = NIM_TRUE;
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseInit)(void) {
	nimfr("prettybase", "prettybase.nim")
	nimln(21, "prettybase.nim");
	if (gsourcefiles_251036) nimGCunrefNoCycle(gsourcefiles_251036);
	gsourcefiles_251036 = (TY251019*) newSeqRC1((&NTI251019), 0);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseDatInit)(void) {
static TNimNode* TMP4250[6];
static TNimNode TMP4206[7];
NTI251008.size = sizeof(Tsourcefile251008);
NTI251008.kind = 18;
NTI251008.base = 0;
NTI251008.flags = 2;
TMP4250[0] = &TMP4206[1];
TMP4206[1].kind = 1;
TMP4206[1].offset = offsetof(Tsourcefile251008, lines);
TMP4206[1].typ = (&NTI13606);
TMP4206[1].name = "lines";
TMP4250[1] = &TMP4206[2];
TMP4206[2].kind = 1;
TMP4206[2].offset = offsetof(Tsourcefile251008, dirty);
TMP4206[2].typ = (&NTI138);
TMP4206[2].name = "dirty";
TMP4250[2] = &TMP4206[3];
TMP4206[3].kind = 1;
TMP4206[3].offset = offsetof(Tsourcefile251008, isnimfixfile);
TMP4206[3].typ = (&NTI138);
TMP4206[3].name = "isNimfixFile";
TMP4250[3] = &TMP4206[4];
TMP4206[4].kind = 1;
TMP4206[4].offset = offsetof(Tsourcefile251008, fullpath);
TMP4206[4].typ = (&NTI149);
TMP4206[4].name = "fullpath";
TMP4250[4] = &TMP4206[5];
TMP4206[5].kind = 1;
TMP4206[5].offset = offsetof(Tsourcefile251008, newline);
TMP4206[5].typ = (&NTI149);
TMP4206[5].name = "newline";
TMP4250[5] = &TMP4206[6];
TMP4206[6].kind = 1;
TMP4206[6].offset = offsetof(Tsourcefile251008, fileidx);
TMP4206[6].typ = (&NTI114);
TMP4206[6].name = "fileIdx";
TMP4206[0].len = 6; TMP4206[0].kind = 2; TMP4206[0].sons = &TMP4250[0];
NTI251008.node = &TMP4206[0];
NTI251019.size = sizeof(TY251019*);
NTI251019.kind = 24;
NTI251019.base = (&NTI251008);
NTI251019.flags = 2;
NTI251019.marker = TMP4251;
}

