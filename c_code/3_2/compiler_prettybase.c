/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct TY249019 TY249019;
typedef struct Tsourcefile249008 Tsourcefile249008;
typedef struct TY13806 TY13806;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct TY119789 TY119789;
typedef struct Baselexer247024 Baselexer247024;
typedef struct TNimObject TNimObject;
typedef struct Streamobj138027 Streamobj138027;
typedef struct Filestreamobj138692 Filestreamobj138692;
typedef struct Slice86457 Slice86457;
typedef struct Tident167021 Tident167021;
typedef struct Tidobj167015 Tidobj167015;
typedef struct Tsym191843 Tsym191843;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Ttype191849 Ttype191849;
typedef struct Tnode191813 Tnode191813;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tlib191831 Tlib191831;
typedef struct Tbasechunk28038 Tbasechunk28038;
typedef struct Tfreecell28030 Tfreecell28030;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TY191933 TY191933;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tsourcefile249008  {
TY13806* lines;
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
struct  Tlineinfo163338  {
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
struct  Baselexer247024  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Streamobj138027* input;
NI linenumber;
NI sentinel;
NI linestart;
NIM_BOOL fileopened;
};
typedef NU8 TY77859[32];
struct  Slice86457  {
NI a;
NI b;
};
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
};
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
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
typedef N_NIMCALL_PTR(void, TY138028) (Streamobj138027* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY138032) (Streamobj138027* s);
typedef N_NIMCALL_PTR(void, TY138036) (Streamobj138027* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY138041) (Streamobj138027* s);
typedef N_NIMCALL_PTR(NI, TY138045) (Streamobj138027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY138051) (Streamobj138027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY138057) (Streamobj138027* s);
struct  Streamobj138027  {
  TNimObject Sup;
TY138028 closeimpl;
TY138032 atendimpl;
TY138036 setpositionimpl;
TY138041 getpositionimpl;
TY138045 readdataimpl;
TY138051 writedataimpl;
TY138057 flushimpl;
};
struct  Filestreamobj138692  {
  Streamobj138027 Sup;
FILE* f;
};
struct  Tscope191837  {
NI depthlevel;
Tstrtable191817 symbols;
Tnodeseq191807* usingsyms;
Tscope191837* parent;
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
struct  Tfreecell28030  {
Tfreecell28030* next;
NI zerofield;
};
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
};
struct TY249019 {
  TGenericSeq Sup;
  Tsourcefile249008 data[SEQ_DECL_SIZE];
};
struct TY13806 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
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
struct Tnodeseq191807 {
  TGenericSeq Sup;
  Tnode191813* data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4258)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46947*, usrtocell_50446)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20201)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_52004)(Tcell46947* c);
N_NOINLINE(void, addzct_50417)(Tcellseq46963* s, Tcell46947* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, loadfile_249041)(Tlineinfo163338 info);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NimStringDesc*, tofullpath_164273)(NI32 fileidx);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY119789* Result);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(FILE*, open_13417)(NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readline_13681)(FILE* f, NimStringDesc** line);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(void, open_247040)(Baselexer247024* L, Streamobj138027* input, NI buflen);
N_NIMCALL(Filestreamobj138692*, newfilestream_138774)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, close_247050)(Baselexer247024* L);
N_NIMCALL(NI, identlen_249147)(NimStringDesc* line, NI start);
N_NIMCALL(NIM_BOOL, differ_249184)(NimStringDesc* line, NI a, NI b, NimStringDesc* x);
static N_INLINE(NimStringDesc*, HEX5BHEX5D_86450)(NimStringDesc* s, Slice86457 x);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76843, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(Slice86457, HEX2EHEX2E_105273)(NI a, NI b);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(void, replacedeprecated_249208)(Tlineinfo163338 info, Tident167021* oldsym, Tident167021* newsym);
static N_INLINE(NI, subInt)(NI a, NI b);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, replacedeprecated_249273)(Tlineinfo163338 info, Tsym191843* oldsym, Tsym191843* newsym);
N_NIMCALL(void, replacecomment_249286)(Tlineinfo163338 info);
N_NIMCALL(NimStringDesc*, nsuEscape)(NimStringDesc* s, NimStringDesc* prefix, NimStringDesc* suffix);
STRING_LITERAL(TMP4260, ".nimfix", 7);
STRING_LITERAL(TMP4262, "\015\012", 2);
STRING_LITERAL(TMP4263, "\012", 1);
NIM_CONST TY77859 Letters_249142 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x03,
0xFE, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}
;
STRING_LITERAL(TMP4280, "discard ", 8);
STRING_LITERAL(TMP4282, "\"", 1);
TY249019* gsourcefiles_249036;
TNimType NTI249008; /* TSourceFile */
extern TNimType NTI13806; /* seq[string] */
extern TNimType NTI138; /* bool */
extern TNimType NTI149; /* string */
extern TNimType NTI114; /* int32 */
TNimType NTI249019; /* seq[TSourceFile] */
extern TFrame* frameptr_17242;
extern Tgcheap48816 gch_48844;
extern TNimType NTI247024; /* BaseLexer */
N_NIMCALL(void, TMP4258)(void* p, NI op) {
	TY249019* a;
	NI LOC1;
	a = (TY249019*)p;
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46947* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_50446(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).refcount -= ((NI) 8);
		nimln(168, "gc.nim");
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_52004(c);
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

N_NIMCALL(void, loadfile_249041)(Tlineinfo163338 info) {
	NI32 i;
	nimfr("loadFile", "prettybase.nim")
	nimln(24, "prettybase.nim");
	i = info.fileindex;
	nimln(25, "prettybase.nim");
	{
		NI TMP4259;
		if (!((gsourcefiles_249036 ? gsourcefiles_249036->Sup.len : 0) <= ((NI) (i)))) goto LA3;
		nimln(26, "prettybase.nim");
		TMP4259 = addInt(i, ((NI32) 1));
		if (TMP4259 < (-2147483647 -1) || TMP4259 > 2147483647) raiseOverflow();
		gsourcefiles_249036 = (TY249019*) setLengthSeq(&(gsourcefiles_249036)->Sup, sizeof(Tsourcefile249008), ((NI)chckRange((NI32)(TMP4259), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	}
	LA3: ;
	nimln(27, "prettybase.nim");
	{
		NimStringDesc* path;
		NimStringDesc* LOC9;
		TY119789 LOC10;
		Baselexer247024 lex;
		Filestreamobj138692* LOC16;
		Streamobj138027* LOC17;
		NI pos;
		if ((NU)(i) >= (NU)(gsourcefiles_249036->Sup.len)) raiseIndexError();
		if (!gsourcefiles_249036->data[i].lines == 0) goto LA7;
		nimln(28, "prettybase.nim");
		if ((NU)(i) >= (NU)(gsourcefiles_249036->Sup.len)) raiseIndexError();
		gsourcefiles_249036->data[i].fileidx = info.fileindex;
		nimln(29, "prettybase.nim");
		if ((NU)(i) >= (NU)(gsourcefiles_249036->Sup.len)) raiseIndexError();
		if (gsourcefiles_249036->data[i].lines) nimGCunrefNoCycle(gsourcefiles_249036->data[i].lines);
		gsourcefiles_249036->data[i].lines = (TY13806*) newSeqRC1((&NTI13806), 0);
		nimln(30, "prettybase.nim");
		path = tofullpath_164273(info.fileindex);
		nimln(31, "prettybase.nim");
		if ((NU)(i) >= (NU)(gsourcefiles_249036->Sup.len)) raiseIndexError();
		LOC9 = 0;
		LOC9 = gsourcefiles_249036->data[i].fullpath; gsourcefiles_249036->data[i].fullpath = copyStringRC1(path);
		if (LOC9) nimGCunrefNoCycle(LOC9);
		nimln(32, "prettybase.nim");
		if ((NU)(i) >= (NU)(gsourcefiles_249036->Sup.len)) raiseIndexError();
		memset((void*)(&LOC10), 0, sizeof(LOC10));
		nossplitFile(path, (&LOC10));
		gsourcefiles_249036->data[i].isnimfixfile = eqStrings(LOC10.Field2, ((NimStringDesc*) &TMP4260));
		{
			NimStringDesc* line_249088;
			FILE* f_249115;
			NimStringDesc* res_249117;
			line_249088 = 0;
			nimln(2699, "system.nim");
			f_249115 = open_13417(path, ((NU8) 0), ((NI) 8000));
			nimln(2700, "system.nim");
			res_249117 = rawNewString(((NI) 80));
			{
				nimln(2701, "system.nim");
				while (1) {
					NIM_BOOL LOC14;
					NimStringDesc* LOC15;
					LOC14 = 0;
					LOC14 = readline_13681(f_249115, (&res_249117));
					if (!LOC14) goto LA13;
					nimln(2700, "system.nim");
					line_249088 = res_249117;
					nimln(35, "prettybase.nim");
					if ((NU)(i) >= (NU)(gsourcefiles_249036->Sup.len)) raiseIndexError();
					gsourcefiles_249036->data[i].lines = (TY13806*) incrSeq(&(gsourcefiles_249036->data[i].lines)->Sup, sizeof(NimStringDesc*));
					LOC15 = 0;
					LOC15 = gsourcefiles_249036->data[i].lines->data[gsourcefiles_249036->data[i].lines->Sup.len-1]; gsourcefiles_249036->data[i].lines->data[gsourcefiles_249036->data[i].lines->Sup.len-1] = copyStringRC1(line_249088);
					if (LOC15) nimGCunrefNoCycle(LOC15);
				} LA13: ;
			}
			nimln(2702, "system.nim");
			fclose(f_249115);
		}
		memset((void*)(&lex), 0, sizeof(lex));
		lex.Sup.m_type = (&NTI247024);
		nimln(38, "prettybase.nim");
		LOC16 = 0;
		LOC16 = newfilestream_138774(path, ((NU8) 0));
		LOC17 = 0;
		LOC17 = &LOC16->Sup;
		open_247040((&lex), LOC17, ((NI) 8192));
		nimln(39, "prettybase.nim");
		pos = lex.bufpos;
		{
			nimln(40, "prettybase.nim");
			while (1) {
				NI TMP4264;
				nimln(41, "prettybase.nim");
				switch (((NU8)(lex.buf[pos]))) {
				case 13:
				{
					NimStringDesc* LOC21;
					nimln(43, "prettybase.nim");
					if ((NU)(i) >= (NU)(gsourcefiles_249036->Sup.len)) raiseIndexError();
					LOC21 = 0;
					LOC21 = gsourcefiles_249036->data[i].newline; gsourcefiles_249036->data[i].newline = copyStringRC1(((NimStringDesc*) &TMP4262));
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
					if ((NU)(i) >= (NU)(gsourcefiles_249036->Sup.len)) raiseIndexError();
					LOC23 = 0;
					LOC23 = gsourcefiles_249036->data[i].newline; gsourcefiles_249036->data[i].newline = copyStringRC1(((NimStringDesc*) &TMP4263));
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
				TMP4264 = addInt(pos, ((NI) 1));
				pos = (NI)(TMP4264);
			}
		} LA18: ;
		nimln(50, "prettybase.nim");
		close_247050((&lex));
	}
	LA7: ;
	popFrame();
}

N_NIMCALL(NI, identlen_249147)(NimStringDesc* line, NI start) {
	NI result;
	nimfr("identLen", "prettybase.nim")
	result = 0;
	{
		nimln(56, "prettybase.nim");
		while (1) {
			NIM_BOOL LOC3;
			NI TMP4265;
			NI TMP4266;
			NI TMP4267;
			LOC3 = 0;
			TMP4265 = addInt(start, result);
			LOC3 = ((NI)(TMP4265) < (line ? line->Sup.len : 0));
			if (!(LOC3)) goto LA4;
			TMP4266 = addInt(start, result);
			if ((NU)((NI)(TMP4266)) > (NU)(line->Sup.len)) raiseIndexError();
			LOC3 = (((NU8)(line->data[(NI)(TMP4266)])) >= ((NU8)(97)) && ((NU8)(line->data[(NI)(TMP4266)])) <= ((NU8)(122)) || ((NU8)(line->data[(NI)(TMP4266)])) >= ((NU8)(65)) && ((NU8)(line->data[(NI)(TMP4266)])) <= ((NU8)(90)) || ((NU8)(line->data[(NI)(TMP4266)])) >= ((NU8)(48)) && ((NU8)(line->data[(NI)(TMP4266)])) <= ((NU8)(57)) || ((NU8)(line->data[(NI)(TMP4266)])) >= ((NU8)(128)) && ((NU8)(line->data[(NI)(TMP4266)])) <= ((NU8)(255)) || ((NU8)(line->data[(NI)(TMP4266)])) == ((NU8)(95)));
			LA4: ;
			if (!LOC3) goto LA2;
			nimln(57, "prettybase.nim");
			TMP4267 = addInt(result, ((NI) 1));
			result = (NI)(TMP4267);
		} LA2: ;
	}
	popFrame();
	return result;
}

static N_INLINE(NimStringDesc*, HEX5BHEX5D_86450)(NimStringDesc* s, Slice86457 x) {
	NimStringDesc* result;
	nimfr("[]", "system.nim")
	result = 0;
	nimln(2880, "system.nim");
	result = copyStrLast(s, x.a, x.b);
	popFrame();
	return result;
}

static N_INLINE(Slice86457, HEX2EHEX2E_105273)(NI a, NI b) {
	Slice86457 result;
	nimfr("..", "system.nim")
	memset((void*)(&result), 0, sizeof(result));
	nimln(234, "system.nim");
	result.a = a;
	nimln(235, "system.nim");
	result.b = b;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, differ_249184)(NimStringDesc* line, NI a, NI b, NimStringDesc* x) {
	NIM_BOOL result;
	NimStringDesc* y;
	Slice86457 LOC1;
	NIM_BOOL LOC2;
	NI LOC3;
	nimfr("differ", "prettybase.nim")
	result = 0;
	nimln(60, "prettybase.nim");
	LOC1 = HEX2EHEX2E_105273(a, b);
	y = HEX5BHEX5D_86450(line, LOC1);
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

N_NIMCALL(void, replacedeprecated_249208)(Tlineinfo163338 info, Tident167021* oldsym, Tident167021* newsym) {
	NimStringDesc* line;
	NI TMP4268;
	NI first;
	NI last;
	NI LOC17;
	NI TMP4272;
	NI TMP4273;
	nimfr("replaceDeprecated", "prettybase.nim")
{	nimln(64, "prettybase.nim");
	loadfile_249041(info);
	nimln(66, "prettybase.nim");
	if ((NU)(info.fileindex) >= (NU)(gsourcefiles_249036->Sup.len)) raiseIndexError();
	TMP4268 = subInt(info.line, ((NI16) 1));
	if (TMP4268 < -32768 || TMP4268 > 32767) raiseOverflow();
	if ((NU)((NI16)(TMP4268)) >= (NU)(gsourcefiles_249036->data[info.fileindex].lines->Sup.len)) raiseIndexError();
	line = gsourcefiles_249036->data[info.fileindex].lines->data[(NI16)(TMP4268)];
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
			NI TMP4269;
			NI TMP4270;
			LOC7 = 0;
			LOC7 = (((NI) 0) < first);
			if (!(LOC7)) goto LA8;
			TMP4269 = subInt(first, ((NI) 1));
			if ((NU)((NI)(TMP4269)) > (NU)(line->Sup.len)) raiseIndexError();
			LOC7 = (((NU8)(line->data[(NI)(TMP4269)])) >= ((NU8)(97)) && ((NU8)(line->data[(NI)(TMP4269)])) <= ((NU8)(122)) || ((NU8)(line->data[(NI)(TMP4269)])) >= ((NU8)(65)) && ((NU8)(line->data[(NI)(TMP4269)])) <= ((NU8)(90)) || ((NU8)(line->data[(NI)(TMP4269)])) >= ((NU8)(48)) && ((NU8)(line->data[(NI)(TMP4269)])) <= ((NU8)(57)) || ((NU8)(line->data[(NI)(TMP4269)])) >= ((NU8)(128)) && ((NU8)(line->data[(NI)(TMP4269)])) <= ((NU8)(255)) || ((NU8)(line->data[(NI)(TMP4269)])) == ((NU8)(95)));
			LA8: ;
			if (!LOC7) goto LA6;
			TMP4270 = subInt(first, ((NI) 1));
			first = (NI)(TMP4270);
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
		NI TMP4271;
		if ((NU)(first) > (NU)(line->Sup.len)) raiseIndexError();
		if (!((NU8)(line->data[first]) == (NU8)(96))) goto LA15;
		TMP4271 = addInt(first, ((NI) 1));
		first = (NI)(TMP4271);
	}
	LA15: ;
	nimln(74, "prettybase.nim");
	LOC17 = 0;
	LOC17 = identlen_249147(line, first);
	TMP4272 = addInt(first, LOC17);
	TMP4273 = subInt((NI)(TMP4272), ((NI) 1));
	last = (NI)(TMP4273);
	nimln(75, "prettybase.nim");
	{
		Slice86457 LOC20;
		NimStringDesc* LOC21;
		NI LOC22;
		NimStringDesc* x;
		NimStringDesc* LOC25;
		NI TMP4274;
		NimStringDesc* LOC26;
		NI TMP4275;
		NimStringDesc* LOC27;
		NI TMP4276;
		LOC20 = HEX2EHEX2E_105273(first, last);
		LOC21 = 0;
		LOC21 = HEX5BHEX5D_86450(line, LOC20);
		LOC22 = 0;
		LOC22 = nsuCmpIgnoreStyle(LOC21, (*oldsym).s);
		if (!(LOC22 == ((NI) 0))) goto LA23;
		nimln(76, "prettybase.nim");
		LOC25 = 0;
		TMP4274 = subInt(first, ((NI) 1));
		LOC26 = 0;
		LOC26 = copyStrLast(line, ((NI) 0), (NI)(TMP4274));
		TMP4275 = addInt(last, ((NI) 1));
		LOC27 = 0;
		LOC27 = copyStr(line, (NI)(TMP4275));
		LOC25 = rawNewString(LOC26->Sup.len + (*newsym).s->Sup.len + LOC27->Sup.len + 0);
appendString(LOC25, LOC26);
appendString(LOC25, (*newsym).s);
appendString(LOC25, LOC27);
		x = LOC25;
		nimln(77, "prettybase.nim");
		if ((NU)(info.fileindex) >= (NU)(gsourcefiles_249036->Sup.len)) raiseIndexError();
		TMP4276 = subInt(info.line, ((NI16) 1));
		if (TMP4276 < -32768 || TMP4276 > 32767) raiseOverflow();
		if ((NU)((NI16)(TMP4276)) >= (NU)(gsourcefiles_249036->data[info.fileindex].lines->Sup.len)) raiseIndexError();
		asgnRefNoCycle((void**) (&gsourcefiles_249036->data[info.fileindex].lines->data[(NI16)(TMP4276)]), x);
		nimln(78, "prettybase.nim");
		if ((NU)(info.fileindex) >= (NU)(gsourcefiles_249036->Sup.len)) raiseIndexError();
		gsourcefiles_249036->data[info.fileindex].dirty = NIM_TRUE;
	}
	LA23: ;
	}BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, replacedeprecated_249273)(Tlineinfo163338 info, Tsym191843* oldsym, Tsym191843* newsym) {
	nimfr("replaceDeprecated", "prettybase.nim")
	nimln(82, "prettybase.nim");
	replacedeprecated_249208(info, (*oldsym).name, (*newsym).name);
	popFrame();
}

N_NIMCALL(void, replacecomment_249286)(Tlineinfo163338 info) {
	NimStringDesc* line;
	NI TMP4277;
	NI first;
	NimStringDesc* x;
	NimStringDesc* LOC5;
	NI TMP4279;
	NimStringDesc* LOC6;
	NI TMP4281;
	NimStringDesc* LOC7;
	NimStringDesc* LOC8;
	NI TMP4283;
	nimfr("replaceComment", "prettybase.nim")
	nimln(85, "prettybase.nim");
	loadfile_249041(info);
	nimln(87, "prettybase.nim");
	if ((NU)(info.fileindex) >= (NU)(gsourcefiles_249036->Sup.len)) raiseIndexError();
	TMP4277 = subInt(info.line, ((NI16) 1));
	if (TMP4277 < -32768 || TMP4277 > 32767) raiseOverflow();
	if ((NU)((NI16)(TMP4277)) >= (NU)(gsourcefiles_249036->data[info.fileindex].lines->Sup.len)) raiseIndexError();
	line = gsourcefiles_249036->data[info.fileindex].lines->data[(NI16)(TMP4277)];
	nimln(88, "prettybase.nim");
	first = ((NI) (info.col));
	nimln(89, "prettybase.nim");
	{
		NI TMP4278;
		if ((NU)(first) > (NU)(line->Sup.len)) raiseIndexError();
		if (!!(((NU8)(line->data[first]) == (NU8)(35)))) goto LA3;
		TMP4278 = addInt(first, ((NI) 1));
		first = (NI)(TMP4278);
	}
	LA3: ;
	nimln(91, "prettybase.nim");
	LOC5 = 0;
	TMP4279 = subInt(first, ((NI) 1));
	LOC6 = 0;
	LOC6 = copyStrLast(line, ((NI) 0), (NI)(TMP4279));
	TMP4281 = addInt(first, ((NI) 1));
	LOC7 = 0;
	LOC7 = copyStr(line, (NI)(TMP4281));
	LOC8 = 0;
	LOC8 = nsuEscape(LOC7, ((NimStringDesc*) &TMP4282), ((NimStringDesc*) &TMP4282));
	LOC5 = rawNewString(LOC6->Sup.len + LOC8->Sup.len + 8);
appendString(LOC5, LOC6);
appendString(LOC5, ((NimStringDesc*) &TMP4280));
appendString(LOC5, LOC8);
	x = LOC5;
	nimln(92, "prettybase.nim");
	if ((NU)(info.fileindex) >= (NU)(gsourcefiles_249036->Sup.len)) raiseIndexError();
	TMP4283 = subInt(info.line, ((NI16) 1));
	if (TMP4283 < -32768 || TMP4283 > 32767) raiseOverflow();
	if ((NU)((NI16)(TMP4283)) >= (NU)(gsourcefiles_249036->data[info.fileindex].lines->Sup.len)) raiseIndexError();
	asgnRefNoCycle((void**) (&gsourcefiles_249036->data[info.fileindex].lines->data[(NI16)(TMP4283)]), x);
	nimln(93, "prettybase.nim");
	if ((NU)(info.fileindex) >= (NU)(gsourcefiles_249036->Sup.len)) raiseIndexError();
	gsourcefiles_249036->data[info.fileindex].dirty = NIM_TRUE;
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseInit)(void) {
	nimfr("prettybase", "prettybase.nim")
	nimln(21, "prettybase.nim");
	if (gsourcefiles_249036) nimGCunrefNoCycle(gsourcefiles_249036);
	gsourcefiles_249036 = (TY249019*) newSeqRC1((&NTI249019), 0);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseDatInit)(void) {
static TNimNode* TMP4257[6];
static TNimNode TMP4213[7];
NTI249008.size = sizeof(Tsourcefile249008);
NTI249008.kind = 18;
NTI249008.base = 0;
NTI249008.flags = 2;
TMP4257[0] = &TMP4213[1];
TMP4213[1].kind = 1;
TMP4213[1].offset = offsetof(Tsourcefile249008, lines);
TMP4213[1].typ = (&NTI13806);
TMP4213[1].name = "lines";
TMP4257[1] = &TMP4213[2];
TMP4213[2].kind = 1;
TMP4213[2].offset = offsetof(Tsourcefile249008, dirty);
TMP4213[2].typ = (&NTI138);
TMP4213[2].name = "dirty";
TMP4257[2] = &TMP4213[3];
TMP4213[3].kind = 1;
TMP4213[3].offset = offsetof(Tsourcefile249008, isnimfixfile);
TMP4213[3].typ = (&NTI138);
TMP4213[3].name = "isNimfixFile";
TMP4257[3] = &TMP4213[4];
TMP4213[4].kind = 1;
TMP4213[4].offset = offsetof(Tsourcefile249008, fullpath);
TMP4213[4].typ = (&NTI149);
TMP4213[4].name = "fullpath";
TMP4257[4] = &TMP4213[5];
TMP4213[5].kind = 1;
TMP4213[5].offset = offsetof(Tsourcefile249008, newline);
TMP4213[5].typ = (&NTI149);
TMP4213[5].name = "newline";
TMP4257[5] = &TMP4213[6];
TMP4213[6].kind = 1;
TMP4213[6].offset = offsetof(Tsourcefile249008, fileidx);
TMP4213[6].typ = (&NTI114);
TMP4213[6].name = "fileIdx";
TMP4213[0].len = 6; TMP4213[0].kind = 2; TMP4213[0].sons = &TMP4257[0];
NTI249008.node = &TMP4213[0];
NTI249019.size = sizeof(TY249019*);
NTI249019.kind = 24;
NTI249019.base = (&NTI249008);
NTI249019.flags = 2;
NTI249019.marker = TMP4258;
}

