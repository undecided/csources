/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct TY247019 TY247019;
typedef struct Tsourcefile247008 Tsourcefile247008;
typedef struct TY13606 TY13606;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct Tlineinfo161338 Tlineinfo161338;
typedef struct TY118589 TY118589;
typedef struct Baselexer245024 Baselexer245024;
typedef struct TNimObject TNimObject;
typedef struct Streamobj137027 Streamobj137027;
typedef struct Filestreamobj137692 Filestreamobj137692;
typedef struct Slice86259 Slice86259;
typedef struct Tident165021 Tident165021;
typedef struct Tidobj165015 Tidobj165015;
typedef struct Tsym189843 Tsym189843;
typedef struct Ttypeseq189845 Ttypeseq189845;
typedef struct Tscope189837 Tscope189837;
typedef struct TY189944 TY189944;
typedef struct Tstrtable189817 Tstrtable189817;
typedef struct Tsymseq189815 Tsymseq189815;
typedef struct Ttype189849 Ttype189849;
typedef struct Tnode189813 Tnode189813;
typedef struct Tloc189827 Tloc189827;
typedef struct Ropeobj159009 Ropeobj159009;
typedef struct Tlib189831 Tlib189831;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct Tnodeseq189807 Tnodeseq189807;
typedef struct Tinstantiation189833 Tinstantiation189833;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct TY189933 TY189933;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tsourcefile247008  {
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
struct  Tlineinfo161338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct TY118589 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Baselexer245024  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Streamobj137027* input;
NI linenumber;
NI sentinel;
NI linestart;
NIM_BOOL fileopened;
};
typedef NU8 TY77659[32];
struct  Slice86259  {
NI a;
NI b;
};
struct  Tidobj165015  {
  TNimObject Sup;
NI id;
};
struct  Tident165021  {
  Tidobj165015 Sup;
NimStringDesc* s;
Tident165021* next;
NI h;
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
typedef N_NIMCALL_PTR(void, TY137028) (Streamobj137027* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY137032) (Streamobj137027* s);
typedef N_NIMCALL_PTR(void, TY137036) (Streamobj137027* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY137041) (Streamobj137027* s);
typedef N_NIMCALL_PTR(NI, TY137045) (Streamobj137027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY137051) (Streamobj137027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY137057) (Streamobj137027* s);
struct  Streamobj137027  {
  TNimObject Sup;
TY137028 closeimpl;
TY137032 atendimpl;
TY137036 setpositionimpl;
TY137041 getpositionimpl;
TY137045 readdataimpl;
TY137051 writedataimpl;
TY137057 flushimpl;
};
struct  Filestreamobj137692  {
  Streamobj137027 Sup;
FILE* f;
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
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
struct  Tinstantiation189833  {
Tsym189843* sym;
Ttypeseq189845* concretetypes;
TY189933* usedby;
};
struct TY247019 {
  TGenericSeq Sup;
  Tsourcefile247008 data[SEQ_DECL_SIZE];
};
struct TY13606 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
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
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4264)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_51804)(Tcell46747* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46763* s, Tcell46747* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, loadfile_247041)(Tlineinfo161338 info);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NimStringDesc*, tofullpath_162273)(NI32 fileidx);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY118589* Result);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(FILE*, open_13217)(NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readline_13481)(FILE* f, NimStringDesc** line);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(void, open_245040)(Baselexer245024* L, Streamobj137027* input, NI buflen);
N_NIMCALL(Filestreamobj137692*, newfilestream_137774)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, close_245050)(Baselexer245024* L);
N_NIMCALL(NI, identlen_247147)(NimStringDesc* line, NI start);
N_NIMCALL(NIM_BOOL, differ_247184)(NimStringDesc* line, NI a, NI b, NimStringDesc* x);
static N_INLINE(NimStringDesc*, HEX5BHEX5D_86252)(NimStringDesc* s, Slice86259 x);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76643, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(Slice86259, HEX2EHEX2E_105273)(NI a, NI b);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(void, replacedeprecated_247208)(Tlineinfo161338 info, Tident165021* oldsym, Tident165021* newsym);
static N_INLINE(NI, subInt)(NI a, NI b);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, replacedeprecated_247273)(Tlineinfo161338 info, Tsym189843* oldsym, Tsym189843* newsym);
N_NIMCALL(void, replacecomment_247286)(Tlineinfo161338 info);
N_NIMCALL(NimStringDesc*, nsuEscape)(NimStringDesc* s, NimStringDesc* prefix, NimStringDesc* suffix);
STRING_LITERAL(TMP4266, ".nimfix", 7);
STRING_LITERAL(TMP4268, "\015\012", 2);
STRING_LITERAL(TMP4269, "\012", 1);
NIM_CONST TY77659 Letters_247142 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x03,
0xFE, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}
;
STRING_LITERAL(TMP4286, "discard ", 8);
STRING_LITERAL(TMP4288, "\"", 1);
TY247019* gsourcefiles_247036;
TNimType NTI247008; /* TSourceFile */
extern TNimType NTI13606; /* seq[string] */
extern TNimType NTI138; /* bool */
extern TNimType NTI149; /* string */
extern TNimType NTI114; /* int32 */
TNimType NTI247019; /* seq[TSourceFile] */
extern TFrame* frameptr_17042;
extern Tgcheap48616 gch_48644;
extern TNimType NTI245024; /* BaseLexer */
N_NIMCALL(void, TMP4264)(void* p, NI op) {
	TY247019* a;
	NI LOC1;
	a = (TY247019*)p;
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46747* c;
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

N_NIMCALL(void, loadfile_247041)(Tlineinfo161338 info) {
	NI32 i;
	nimfr("loadFile", "prettybase.nim")
	nimln(24, "prettybase.nim");
	i = info.fileindex;
	nimln(25, "prettybase.nim");
	{
		NI TMP4265;
		if (!((gsourcefiles_247036 ? gsourcefiles_247036->Sup.len : 0) <= ((NI) (i)))) goto LA3;
		nimln(26, "prettybase.nim");
		TMP4265 = addInt(i, ((NI32) 1));
		if (TMP4265 < (-2147483647 -1) || TMP4265 > 2147483647) raiseOverflow();
		gsourcefiles_247036 = (TY247019*) setLengthSeq(&(gsourcefiles_247036)->Sup, sizeof(Tsourcefile247008), ((NI)chckRange((NI32)(TMP4265), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	}
	LA3: ;
	nimln(27, "prettybase.nim");
	{
		NimStringDesc* path;
		NimStringDesc* LOC9;
		TY118589 LOC10;
		Baselexer245024 lex;
		Filestreamobj137692* LOC16;
		Streamobj137027* LOC17;
		NI pos;
		if ((NU)(i) >= (NU)(gsourcefiles_247036->Sup.len)) raiseIndexError();
		if (!gsourcefiles_247036->data[i].lines == 0) goto LA7;
		nimln(28, "prettybase.nim");
		if ((NU)(i) >= (NU)(gsourcefiles_247036->Sup.len)) raiseIndexError();
		gsourcefiles_247036->data[i].fileidx = info.fileindex;
		nimln(29, "prettybase.nim");
		if ((NU)(i) >= (NU)(gsourcefiles_247036->Sup.len)) raiseIndexError();
		if (gsourcefiles_247036->data[i].lines) nimGCunrefNoCycle(gsourcefiles_247036->data[i].lines);
		gsourcefiles_247036->data[i].lines = (TY13606*) newSeqRC1((&NTI13606), 0);
		nimln(30, "prettybase.nim");
		path = tofullpath_162273(info.fileindex);
		nimln(31, "prettybase.nim");
		if ((NU)(i) >= (NU)(gsourcefiles_247036->Sup.len)) raiseIndexError();
		LOC9 = 0;
		LOC9 = gsourcefiles_247036->data[i].fullpath; gsourcefiles_247036->data[i].fullpath = copyStringRC1(path);
		if (LOC9) nimGCunrefNoCycle(LOC9);
		nimln(32, "prettybase.nim");
		if ((NU)(i) >= (NU)(gsourcefiles_247036->Sup.len)) raiseIndexError();
		memset((void*)(&LOC10), 0, sizeof(LOC10));
		nossplitFile(path, (&LOC10));
		gsourcefiles_247036->data[i].isnimfixfile = eqStrings(LOC10.Field2, ((NimStringDesc*) &TMP4266));
		{
			NimStringDesc* line_247088;
			FILE* f_247115;
			NimStringDesc* res_247117;
			line_247088 = 0;
			nimln(2699, "system.nim");
			f_247115 = open_13217(path, ((NU8) 0), ((NI) 8000));
			nimln(2700, "system.nim");
			res_247117 = rawNewString(((NI) 80));
			{
				nimln(2701, "system.nim");
				while (1) {
					NIM_BOOL LOC14;
					NimStringDesc* LOC15;
					LOC14 = 0;
					LOC14 = readline_13481(f_247115, (&res_247117));
					if (!LOC14) goto LA13;
					nimln(2700, "system.nim");
					line_247088 = res_247117;
					nimln(35, "prettybase.nim");
					if ((NU)(i) >= (NU)(gsourcefiles_247036->Sup.len)) raiseIndexError();
					gsourcefiles_247036->data[i].lines = (TY13606*) incrSeq(&(gsourcefiles_247036->data[i].lines)->Sup, sizeof(NimStringDesc*));
					LOC15 = 0;
					LOC15 = gsourcefiles_247036->data[i].lines->data[gsourcefiles_247036->data[i].lines->Sup.len-1]; gsourcefiles_247036->data[i].lines->data[gsourcefiles_247036->data[i].lines->Sup.len-1] = copyStringRC1(line_247088);
					if (LOC15) nimGCunrefNoCycle(LOC15);
				} LA13: ;
			}
			nimln(2702, "system.nim");
			fclose(f_247115);
		}
		memset((void*)(&lex), 0, sizeof(lex));
		lex.Sup.m_type = (&NTI245024);
		nimln(38, "prettybase.nim");
		LOC16 = 0;
		LOC16 = newfilestream_137774(path, ((NU8) 0));
		LOC17 = 0;
		LOC17 = &LOC16->Sup;
		open_245040((&lex), LOC17, ((NI) 8192));
		nimln(39, "prettybase.nim");
		pos = lex.bufpos;
		{
			nimln(40, "prettybase.nim");
			while (1) {
				NI TMP4270;
				nimln(41, "prettybase.nim");
				switch (((NU8)(lex.buf[pos]))) {
				case 13:
				{
					NimStringDesc* LOC21;
					nimln(43, "prettybase.nim");
					if ((NU)(i) >= (NU)(gsourcefiles_247036->Sup.len)) raiseIndexError();
					LOC21 = 0;
					LOC21 = gsourcefiles_247036->data[i].newline; gsourcefiles_247036->data[i].newline = copyStringRC1(((NimStringDesc*) &TMP4268));
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
					if ((NU)(i) >= (NU)(gsourcefiles_247036->Sup.len)) raiseIndexError();
					LOC23 = 0;
					LOC23 = gsourcefiles_247036->data[i].newline; gsourcefiles_247036->data[i].newline = copyStringRC1(((NimStringDesc*) &TMP4269));
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
				TMP4270 = addInt(pos, ((NI) 1));
				pos = (NI)(TMP4270);
			}
		} LA18: ;
		nimln(50, "prettybase.nim");
		close_245050((&lex));
	}
	LA7: ;
	popFrame();
}

N_NIMCALL(NI, identlen_247147)(NimStringDesc* line, NI start) {
	NI result;
	nimfr("identLen", "prettybase.nim")
	result = 0;
	{
		nimln(56, "prettybase.nim");
		while (1) {
			NIM_BOOL LOC3;
			NI TMP4271;
			NI TMP4272;
			NI TMP4273;
			LOC3 = 0;
			TMP4271 = addInt(start, result);
			LOC3 = ((NI)(TMP4271) < (line ? line->Sup.len : 0));
			if (!(LOC3)) goto LA4;
			TMP4272 = addInt(start, result);
			if ((NU)((NI)(TMP4272)) > (NU)(line->Sup.len)) raiseIndexError();
			LOC3 = (((NU8)(line->data[(NI)(TMP4272)])) >= ((NU8)(97)) && ((NU8)(line->data[(NI)(TMP4272)])) <= ((NU8)(122)) || ((NU8)(line->data[(NI)(TMP4272)])) >= ((NU8)(65)) && ((NU8)(line->data[(NI)(TMP4272)])) <= ((NU8)(90)) || ((NU8)(line->data[(NI)(TMP4272)])) >= ((NU8)(48)) && ((NU8)(line->data[(NI)(TMP4272)])) <= ((NU8)(57)) || ((NU8)(line->data[(NI)(TMP4272)])) >= ((NU8)(128)) && ((NU8)(line->data[(NI)(TMP4272)])) <= ((NU8)(255)) || ((NU8)(line->data[(NI)(TMP4272)])) == ((NU8)(95)));
			LA4: ;
			if (!LOC3) goto LA2;
			nimln(57, "prettybase.nim");
			TMP4273 = addInt(result, ((NI) 1));
			result = (NI)(TMP4273);
		} LA2: ;
	}
	popFrame();
	return result;
}

static N_INLINE(NimStringDesc*, HEX5BHEX5D_86252)(NimStringDesc* s, Slice86259 x) {
	NimStringDesc* result;
	nimfr("[]", "system.nim")
	result = 0;
	nimln(2880, "system.nim");
	result = copyStrLast(s, x.a, x.b);
	popFrame();
	return result;
}

static N_INLINE(Slice86259, HEX2EHEX2E_105273)(NI a, NI b) {
	Slice86259 result;
	nimfr("..", "system.nim")
	memset((void*)(&result), 0, sizeof(result));
	nimln(234, "system.nim");
	result.a = a;
	nimln(235, "system.nim");
	result.b = b;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, differ_247184)(NimStringDesc* line, NI a, NI b, NimStringDesc* x) {
	NIM_BOOL result;
	NimStringDesc* y;
	Slice86259 LOC1;
	NIM_BOOL LOC2;
	NI LOC3;
	nimfr("differ", "prettybase.nim")
	result = 0;
	nimln(60, "prettybase.nim");
	LOC1 = HEX2EHEX2E_105273(a, b);
	y = HEX5BHEX5D_86252(line, LOC1);
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

N_NIMCALL(void, replacedeprecated_247208)(Tlineinfo161338 info, Tident165021* oldsym, Tident165021* newsym) {
	NimStringDesc* line;
	NI TMP4274;
	NI first;
	NI last;
	NI LOC17;
	NI TMP4278;
	NI TMP4279;
	nimfr("replaceDeprecated", "prettybase.nim")
{	nimln(64, "prettybase.nim");
	loadfile_247041(info);
	nimln(66, "prettybase.nim");
	if ((NU)(info.fileindex) >= (NU)(gsourcefiles_247036->Sup.len)) raiseIndexError();
	TMP4274 = subInt(info.line, ((NI16) 1));
	if (TMP4274 < -32768 || TMP4274 > 32767) raiseOverflow();
	if ((NU)((NI16)(TMP4274)) >= (NU)(gsourcefiles_247036->data[info.fileindex].lines->Sup.len)) raiseIndexError();
	line = gsourcefiles_247036->data[info.fileindex].lines->data[(NI16)(TMP4274)];
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
			NI TMP4275;
			NI TMP4276;
			LOC7 = 0;
			LOC7 = (((NI) 0) < first);
			if (!(LOC7)) goto LA8;
			TMP4275 = subInt(first, ((NI) 1));
			if ((NU)((NI)(TMP4275)) > (NU)(line->Sup.len)) raiseIndexError();
			LOC7 = (((NU8)(line->data[(NI)(TMP4275)])) >= ((NU8)(97)) && ((NU8)(line->data[(NI)(TMP4275)])) <= ((NU8)(122)) || ((NU8)(line->data[(NI)(TMP4275)])) >= ((NU8)(65)) && ((NU8)(line->data[(NI)(TMP4275)])) <= ((NU8)(90)) || ((NU8)(line->data[(NI)(TMP4275)])) >= ((NU8)(48)) && ((NU8)(line->data[(NI)(TMP4275)])) <= ((NU8)(57)) || ((NU8)(line->data[(NI)(TMP4275)])) >= ((NU8)(128)) && ((NU8)(line->data[(NI)(TMP4275)])) <= ((NU8)(255)) || ((NU8)(line->data[(NI)(TMP4275)])) == ((NU8)(95)));
			LA8: ;
			if (!LOC7) goto LA6;
			TMP4276 = subInt(first, ((NI) 1));
			first = (NI)(TMP4276);
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
		NI TMP4277;
		if ((NU)(first) > (NU)(line->Sup.len)) raiseIndexError();
		if (!((NU8)(line->data[first]) == (NU8)(96))) goto LA15;
		TMP4277 = addInt(first, ((NI) 1));
		first = (NI)(TMP4277);
	}
	LA15: ;
	nimln(74, "prettybase.nim");
	LOC17 = 0;
	LOC17 = identlen_247147(line, first);
	TMP4278 = addInt(first, LOC17);
	TMP4279 = subInt((NI)(TMP4278), ((NI) 1));
	last = (NI)(TMP4279);
	nimln(75, "prettybase.nim");
	{
		Slice86259 LOC20;
		NimStringDesc* LOC21;
		NI LOC22;
		NimStringDesc* x;
		NimStringDesc* LOC25;
		NI TMP4280;
		NimStringDesc* LOC26;
		NI TMP4281;
		NimStringDesc* LOC27;
		NI TMP4282;
		LOC20 = HEX2EHEX2E_105273(first, last);
		LOC21 = 0;
		LOC21 = HEX5BHEX5D_86252(line, LOC20);
		LOC22 = 0;
		LOC22 = nsuCmpIgnoreStyle(LOC21, (*oldsym).s);
		if (!(LOC22 == ((NI) 0))) goto LA23;
		nimln(76, "prettybase.nim");
		LOC25 = 0;
		TMP4280 = subInt(first, ((NI) 1));
		LOC26 = 0;
		LOC26 = copyStrLast(line, ((NI) 0), (NI)(TMP4280));
		TMP4281 = addInt(last, ((NI) 1));
		LOC27 = 0;
		LOC27 = copyStr(line, (NI)(TMP4281));
		LOC25 = rawNewString(LOC26->Sup.len + (*newsym).s->Sup.len + LOC27->Sup.len + 0);
appendString(LOC25, LOC26);
appendString(LOC25, (*newsym).s);
appendString(LOC25, LOC27);
		x = LOC25;
		nimln(77, "prettybase.nim");
		if ((NU)(info.fileindex) >= (NU)(gsourcefiles_247036->Sup.len)) raiseIndexError();
		TMP4282 = subInt(info.line, ((NI16) 1));
		if (TMP4282 < -32768 || TMP4282 > 32767) raiseOverflow();
		if ((NU)((NI16)(TMP4282)) >= (NU)(gsourcefiles_247036->data[info.fileindex].lines->Sup.len)) raiseIndexError();
		asgnRefNoCycle((void**) (&gsourcefiles_247036->data[info.fileindex].lines->data[(NI16)(TMP4282)]), x);
		nimln(78, "prettybase.nim");
		if ((NU)(info.fileindex) >= (NU)(gsourcefiles_247036->Sup.len)) raiseIndexError();
		gsourcefiles_247036->data[info.fileindex].dirty = NIM_TRUE;
	}
	LA23: ;
	}BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, replacedeprecated_247273)(Tlineinfo161338 info, Tsym189843* oldsym, Tsym189843* newsym) {
	nimfr("replaceDeprecated", "prettybase.nim")
	nimln(82, "prettybase.nim");
	replacedeprecated_247208(info, (*oldsym).name, (*newsym).name);
	popFrame();
}

N_NIMCALL(void, replacecomment_247286)(Tlineinfo161338 info) {
	NimStringDesc* line;
	NI TMP4283;
	NI first;
	NimStringDesc* x;
	NimStringDesc* LOC5;
	NI TMP4285;
	NimStringDesc* LOC6;
	NI TMP4287;
	NimStringDesc* LOC7;
	NimStringDesc* LOC8;
	NI TMP4289;
	nimfr("replaceComment", "prettybase.nim")
	nimln(85, "prettybase.nim");
	loadfile_247041(info);
	nimln(87, "prettybase.nim");
	if ((NU)(info.fileindex) >= (NU)(gsourcefiles_247036->Sup.len)) raiseIndexError();
	TMP4283 = subInt(info.line, ((NI16) 1));
	if (TMP4283 < -32768 || TMP4283 > 32767) raiseOverflow();
	if ((NU)((NI16)(TMP4283)) >= (NU)(gsourcefiles_247036->data[info.fileindex].lines->Sup.len)) raiseIndexError();
	line = gsourcefiles_247036->data[info.fileindex].lines->data[(NI16)(TMP4283)];
	nimln(88, "prettybase.nim");
	first = ((NI) (info.col));
	nimln(89, "prettybase.nim");
	{
		NI TMP4284;
		if ((NU)(first) > (NU)(line->Sup.len)) raiseIndexError();
		if (!!(((NU8)(line->data[first]) == (NU8)(35)))) goto LA3;
		TMP4284 = addInt(first, ((NI) 1));
		first = (NI)(TMP4284);
	}
	LA3: ;
	nimln(91, "prettybase.nim");
	LOC5 = 0;
	TMP4285 = subInt(first, ((NI) 1));
	LOC6 = 0;
	LOC6 = copyStrLast(line, ((NI) 0), (NI)(TMP4285));
	TMP4287 = addInt(first, ((NI) 1));
	LOC7 = 0;
	LOC7 = copyStr(line, (NI)(TMP4287));
	LOC8 = 0;
	LOC8 = nsuEscape(LOC7, ((NimStringDesc*) &TMP4288), ((NimStringDesc*) &TMP4288));
	LOC5 = rawNewString(LOC6->Sup.len + LOC8->Sup.len + 8);
appendString(LOC5, LOC6);
appendString(LOC5, ((NimStringDesc*) &TMP4286));
appendString(LOC5, LOC8);
	x = LOC5;
	nimln(92, "prettybase.nim");
	if ((NU)(info.fileindex) >= (NU)(gsourcefiles_247036->Sup.len)) raiseIndexError();
	TMP4289 = subInt(info.line, ((NI16) 1));
	if (TMP4289 < -32768 || TMP4289 > 32767) raiseOverflow();
	if ((NU)((NI16)(TMP4289)) >= (NU)(gsourcefiles_247036->data[info.fileindex].lines->Sup.len)) raiseIndexError();
	asgnRefNoCycle((void**) (&gsourcefiles_247036->data[info.fileindex].lines->data[(NI16)(TMP4289)]), x);
	nimln(93, "prettybase.nim");
	if ((NU)(info.fileindex) >= (NU)(gsourcefiles_247036->Sup.len)) raiseIndexError();
	gsourcefiles_247036->data[info.fileindex].dirty = NIM_TRUE;
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseInit)(void) {
	nimfr("prettybase", "prettybase.nim")
	nimln(21, "prettybase.nim");
	if (gsourcefiles_247036) nimGCunrefNoCycle(gsourcefiles_247036);
	gsourcefiles_247036 = (TY247019*) newSeqRC1((&NTI247019), 0);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseDatInit)(void) {
static TNimNode* TMP4263[6];
static TNimNode TMP4219[7];
NTI247008.size = sizeof(Tsourcefile247008);
NTI247008.kind = 18;
NTI247008.base = 0;
NTI247008.flags = 2;
TMP4263[0] = &TMP4219[1];
TMP4219[1].kind = 1;
TMP4219[1].offset = offsetof(Tsourcefile247008, lines);
TMP4219[1].typ = (&NTI13606);
TMP4219[1].name = "lines";
TMP4263[1] = &TMP4219[2];
TMP4219[2].kind = 1;
TMP4219[2].offset = offsetof(Tsourcefile247008, dirty);
TMP4219[2].typ = (&NTI138);
TMP4219[2].name = "dirty";
TMP4263[2] = &TMP4219[3];
TMP4219[3].kind = 1;
TMP4219[3].offset = offsetof(Tsourcefile247008, isnimfixfile);
TMP4219[3].typ = (&NTI138);
TMP4219[3].name = "isNimfixFile";
TMP4263[3] = &TMP4219[4];
TMP4219[4].kind = 1;
TMP4219[4].offset = offsetof(Tsourcefile247008, fullpath);
TMP4219[4].typ = (&NTI149);
TMP4219[4].name = "fullpath";
TMP4263[4] = &TMP4219[5];
TMP4219[5].kind = 1;
TMP4219[5].offset = offsetof(Tsourcefile247008, newline);
TMP4219[5].typ = (&NTI149);
TMP4219[5].name = "newline";
TMP4263[5] = &TMP4219[6];
TMP4219[6].kind = 1;
TMP4219[6].offset = offsetof(Tsourcefile247008, fileidx);
TMP4219[6].typ = (&NTI114);
TMP4219[6].name = "fileIdx";
TMP4219[0].len = 6; TMP4219[0].kind = 2; TMP4219[0].sons = &TMP4263[0];
NTI247008.node = &TMP4219[0];
NTI247019.size = sizeof(TY247019*);
NTI247019.kind = 24;
NTI247019.base = (&NTI247008);
NTI247019.flags = 2;
NTI247019.marker = TMP4264;
}

