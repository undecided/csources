/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct TY248019 TY248019;
typedef struct Tsourcefile248008 Tsourcefile248008;
typedef struct TY13806 TY13806;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tcell46946 Tcell46946;
typedef struct Tcellseq46962 Tcellseq46962;
typedef struct Tgcheap48816 Tgcheap48816;
typedef struct Tcellset46958 Tcellset46958;
typedef struct Tpagedesc46954 Tpagedesc46954;
typedef struct Tmemregion28810 Tmemregion28810;
typedef struct Tsmallchunk28040 Tsmallchunk28040;
typedef struct Tllchunk28804 Tllchunk28804;
typedef struct Tbigchunk28042 Tbigchunk28042;
typedef struct Tintset28017 Tintset28017;
typedef struct Ttrunk28013 Ttrunk28013;
typedef struct Tavlnode28808 Tavlnode28808;
typedef struct Tgcstat48814 Tgcstat48814;
typedef struct Tlineinfo162338 Tlineinfo162338;
typedef struct TY119789 TY119789;
typedef struct Baselexer246024 Baselexer246024;
typedef struct TNimObject TNimObject;
typedef struct Streamobj138027 Streamobj138027;
typedef struct Filestreamobj138692 Filestreamobj138692;
typedef struct Slice86457 Slice86457;
typedef struct Tident166021 Tident166021;
typedef struct Tidobj166015 Tidobj166015;
typedef struct Tsym190843 Tsym190843;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Ttype190849 Ttype190849;
typedef struct Tnode190813 Tnode190813;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj160009 Ropeobj160009;
typedef struct Tlib190831 Tlib190831;
typedef struct Tbasechunk28038 Tbasechunk28038;
typedef struct Tfreecell28030 Tfreecell28030;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TY190933 TY190933;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tsourcefile248008  {
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
struct  Tcell46946  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46962  {
NI len;
NI cap;
Tcell46946** d;
};
struct  Tcellset46958  {
NI counter;
NI max;
Tpagedesc46954* head;
Tpagedesc46954** data;
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
Tcellseq46962 zct;
Tcellseq46962 decstack;
Tcellset46958 cycleroots;
Tcellseq46962 tempstack;
NI recgclock;
Tmemregion28810 region;
Tgcstat48814 stat;
};
struct  Tlineinfo162338  {
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
struct  Baselexer246024  {
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
struct  Tidobj166015  {
  TNimObject Sup;
NI id;
};
struct  Tident166021  {
  Tidobj166015 Sup;
NimStringDesc* s;
Tident166021* next;
NI h;
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
typedef NI TY28020[8];
struct  Tpagedesc46954  {
Tpagedesc46954* next;
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
struct  Tscope190837  {
NI depthlevel;
Tstrtable190817 symbols;
Tnodeseq190807* usingsyms;
Tscope190837* parent;
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
struct  Tfreecell28030  {
Tfreecell28030* next;
NI zerofield;
};
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct TY248019 {
  TGenericSeq Sup;
  Tsourcefile248008 data[SEQ_DECL_SIZE];
};
struct TY13806 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
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
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
};
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4260)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46946*, usrtocell_50446)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20201)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_52004)(Tcell46946* c);
N_NOINLINE(void, addzct_50417)(Tcellseq46962* s, Tcell46946* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, loadfile_248041)(Tlineinfo162338 info);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NimStringDesc*, tofullpath_163273)(NI32 fileidx);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY119789* Result);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(FILE*, open_13417)(NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readline_13681)(FILE* f, NimStringDesc** line);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(void, open_246040)(Baselexer246024* L, Streamobj138027* input, NI buflen);
N_NIMCALL(Filestreamobj138692*, newfilestream_138774)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, close_246050)(Baselexer246024* L);
N_NIMCALL(NI, identlen_248147)(NimStringDesc* line, NI start);
N_NIMCALL(NIM_BOOL, differ_248184)(NimStringDesc* line, NI a, NI b, NimStringDesc* x);
static N_INLINE(NimStringDesc*, HEX5BHEX5D_86450)(NimStringDesc* s, Slice86457 x);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76843, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(Slice86457, HEX2EHEX2E_105273)(NI a, NI b);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(void, replacedeprecated_248208)(Tlineinfo162338 info, Tident166021* oldsym, Tident166021* newsym);
static N_INLINE(NI, subInt)(NI a, NI b);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, replacedeprecated_248273)(Tlineinfo162338 info, Tsym190843* oldsym, Tsym190843* newsym);
N_NIMCALL(void, replacecomment_248286)(Tlineinfo162338 info);
N_NIMCALL(NimStringDesc*, nsuEscape)(NimStringDesc* s, NimStringDesc* prefix, NimStringDesc* suffix);
STRING_LITERAL(TMP4262, ".nimfix", 7);
STRING_LITERAL(TMP4264, "\015\012", 2);
STRING_LITERAL(TMP4265, "\012", 1);
NIM_CONST TY77859 Letters_248142 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x03,
0xFE, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}
;
STRING_LITERAL(TMP4282, "discard ", 8);
STRING_LITERAL(TMP4284, "\"", 1);
TY248019* gsourcefiles_248036;
TNimType NTI248008; /* TSourceFile */
extern TNimType NTI13806; /* seq[string] */
extern TNimType NTI138; /* bool */
extern TNimType NTI149; /* string */
extern TNimType NTI114; /* int32 */
TNimType NTI248019; /* seq[TSourceFile] */
extern TFrame* frameptr_17242;
extern Tgcheap48816 gch_48844;
extern TNimType NTI246024; /* BaseLexer */
N_NIMCALL(void, TMP4260)(void* p, NI op) {
	TY248019* a;
	NI LOC1;
	a = (TY248019*)p;
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

static N_INLINE(Tcell46946*, usrtocell_50446)(void* usr) {
	Tcell46946* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	result = ((Tcell46946*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46946))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_52004)(Tcell46946* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_50417((&gch_48844.zct), c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46946* c;
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

N_NIMCALL(void, loadfile_248041)(Tlineinfo162338 info) {
	NI32 i;
	nimfr("loadFile", "prettybase.nim")
	nimln(24, "prettybase.nim");
	i = info.fileindex;
	nimln(25, "prettybase.nim");
	{
		NI TMP4261;
		if (!((gsourcefiles_248036 ? gsourcefiles_248036->Sup.len : 0) <= ((NI) (i)))) goto LA3;
		nimln(26, "prettybase.nim");
		TMP4261 = addInt(i, ((NI32) 1));
		if (TMP4261 < (-2147483647 -1) || TMP4261 > 2147483647) raiseOverflow();
		gsourcefiles_248036 = (TY248019*) setLengthSeq(&(gsourcefiles_248036)->Sup, sizeof(Tsourcefile248008), ((NI)chckRange((NI32)(TMP4261), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	}
	LA3: ;
	nimln(27, "prettybase.nim");
	{
		NimStringDesc* path;
		NimStringDesc* LOC9;
		TY119789 LOC10;
		Baselexer246024 lex;
		Filestreamobj138692* LOC16;
		Streamobj138027* LOC17;
		NI pos;
		if ((NU)(i) >= (NU)(gsourcefiles_248036->Sup.len)) raiseIndexError();
		if (!gsourcefiles_248036->data[i].lines == 0) goto LA7;
		nimln(28, "prettybase.nim");
		if ((NU)(i) >= (NU)(gsourcefiles_248036->Sup.len)) raiseIndexError();
		gsourcefiles_248036->data[i].fileidx = info.fileindex;
		nimln(29, "prettybase.nim");
		if ((NU)(i) >= (NU)(gsourcefiles_248036->Sup.len)) raiseIndexError();
		if (gsourcefiles_248036->data[i].lines) nimGCunrefNoCycle(gsourcefiles_248036->data[i].lines);
		gsourcefiles_248036->data[i].lines = (TY13806*) newSeqRC1((&NTI13806), 0);
		nimln(30, "prettybase.nim");
		path = tofullpath_163273(info.fileindex);
		nimln(31, "prettybase.nim");
		if ((NU)(i) >= (NU)(gsourcefiles_248036->Sup.len)) raiseIndexError();
		LOC9 = 0;
		LOC9 = gsourcefiles_248036->data[i].fullpath; gsourcefiles_248036->data[i].fullpath = copyStringRC1(path);
		if (LOC9) nimGCunrefNoCycle(LOC9);
		nimln(32, "prettybase.nim");
		if ((NU)(i) >= (NU)(gsourcefiles_248036->Sup.len)) raiseIndexError();
		memset((void*)(&LOC10), 0, sizeof(LOC10));
		nossplitFile(path, (&LOC10));
		gsourcefiles_248036->data[i].isnimfixfile = eqStrings(LOC10.Field2, ((NimStringDesc*) &TMP4262));
		{
			NimStringDesc* line_248088;
			FILE* f_248115;
			NimStringDesc* res_248117;
			line_248088 = 0;
			nimln(2699, "system.nim");
			f_248115 = open_13417(path, ((NU8) 0), ((NI) 8000));
			nimln(2700, "system.nim");
			res_248117 = rawNewString(((NI) 80));
			{
				nimln(2701, "system.nim");
				while (1) {
					NIM_BOOL LOC14;
					NimStringDesc* LOC15;
					LOC14 = 0;
					LOC14 = readline_13681(f_248115, (&res_248117));
					if (!LOC14) goto LA13;
					nimln(2700, "system.nim");
					line_248088 = res_248117;
					nimln(35, "prettybase.nim");
					if ((NU)(i) >= (NU)(gsourcefiles_248036->Sup.len)) raiseIndexError();
					gsourcefiles_248036->data[i].lines = (TY13806*) incrSeq(&(gsourcefiles_248036->data[i].lines)->Sup, sizeof(NimStringDesc*));
					LOC15 = 0;
					LOC15 = gsourcefiles_248036->data[i].lines->data[gsourcefiles_248036->data[i].lines->Sup.len-1]; gsourcefiles_248036->data[i].lines->data[gsourcefiles_248036->data[i].lines->Sup.len-1] = copyStringRC1(line_248088);
					if (LOC15) nimGCunrefNoCycle(LOC15);
				} LA13: ;
			}
			nimln(2702, "system.nim");
			fclose(f_248115);
		}
		memset((void*)(&lex), 0, sizeof(lex));
		lex.Sup.m_type = (&NTI246024);
		nimln(38, "prettybase.nim");
		LOC16 = 0;
		LOC16 = newfilestream_138774(path, ((NU8) 0));
		LOC17 = 0;
		LOC17 = &LOC16->Sup;
		open_246040((&lex), LOC17, ((NI) 8192));
		nimln(39, "prettybase.nim");
		pos = lex.bufpos;
		{
			nimln(40, "prettybase.nim");
			while (1) {
				NI TMP4266;
				nimln(41, "prettybase.nim");
				switch (((NU8)(lex.buf[pos]))) {
				case 13:
				{
					NimStringDesc* LOC21;
					nimln(43, "prettybase.nim");
					if ((NU)(i) >= (NU)(gsourcefiles_248036->Sup.len)) raiseIndexError();
					LOC21 = 0;
					LOC21 = gsourcefiles_248036->data[i].newline; gsourcefiles_248036->data[i].newline = copyStringRC1(((NimStringDesc*) &TMP4264));
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
					if ((NU)(i) >= (NU)(gsourcefiles_248036->Sup.len)) raiseIndexError();
					LOC23 = 0;
					LOC23 = gsourcefiles_248036->data[i].newline; gsourcefiles_248036->data[i].newline = copyStringRC1(((NimStringDesc*) &TMP4265));
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
				TMP4266 = addInt(pos, ((NI) 1));
				pos = (NI)(TMP4266);
			}
		} LA18: ;
		nimln(50, "prettybase.nim");
		close_246050((&lex));
	}
	LA7: ;
	popFrame();
}

N_NIMCALL(NI, identlen_248147)(NimStringDesc* line, NI start) {
	NI result;
	nimfr("identLen", "prettybase.nim")
	result = 0;
	{
		nimln(56, "prettybase.nim");
		while (1) {
			NIM_BOOL LOC3;
			NI TMP4267;
			NI TMP4268;
			NI TMP4269;
			LOC3 = 0;
			TMP4267 = addInt(start, result);
			LOC3 = ((NI)(TMP4267) < (line ? line->Sup.len : 0));
			if (!(LOC3)) goto LA4;
			TMP4268 = addInt(start, result);
			if ((NU)((NI)(TMP4268)) > (NU)(line->Sup.len)) raiseIndexError();
			LOC3 = (((NU8)(line->data[(NI)(TMP4268)])) >= ((NU8)(97)) && ((NU8)(line->data[(NI)(TMP4268)])) <= ((NU8)(122)) || ((NU8)(line->data[(NI)(TMP4268)])) >= ((NU8)(65)) && ((NU8)(line->data[(NI)(TMP4268)])) <= ((NU8)(90)) || ((NU8)(line->data[(NI)(TMP4268)])) >= ((NU8)(48)) && ((NU8)(line->data[(NI)(TMP4268)])) <= ((NU8)(57)) || ((NU8)(line->data[(NI)(TMP4268)])) >= ((NU8)(128)) && ((NU8)(line->data[(NI)(TMP4268)])) <= ((NU8)(255)) || ((NU8)(line->data[(NI)(TMP4268)])) == ((NU8)(95)));
			LA4: ;
			if (!LOC3) goto LA2;
			nimln(57, "prettybase.nim");
			TMP4269 = addInt(result, ((NI) 1));
			result = (NI)(TMP4269);
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

N_NIMCALL(NIM_BOOL, differ_248184)(NimStringDesc* line, NI a, NI b, NimStringDesc* x) {
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
		Tcell46946* c;
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(252, "gc.nim");
		c = usrtocell_50446(src);
		nimln(169, "gc.nim");
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	nimln(254, "gc.nim");
	{
		Tcell46946* c;
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

N_NIMCALL(void, replacedeprecated_248208)(Tlineinfo162338 info, Tident166021* oldsym, Tident166021* newsym) {
	NimStringDesc* line;
	NI TMP4270;
	NI first;
	NI last;
	NI LOC17;
	NI TMP4274;
	NI TMP4275;
	nimfr("replaceDeprecated", "prettybase.nim")
{	nimln(64, "prettybase.nim");
	loadfile_248041(info);
	nimln(66, "prettybase.nim");
	if ((NU)(info.fileindex) >= (NU)(gsourcefiles_248036->Sup.len)) raiseIndexError();
	TMP4270 = subInt(info.line, ((NI16) 1));
	if (TMP4270 < -32768 || TMP4270 > 32767) raiseOverflow();
	if ((NU)((NI16)(TMP4270)) >= (NU)(gsourcefiles_248036->data[info.fileindex].lines->Sup.len)) raiseIndexError();
	line = gsourcefiles_248036->data[info.fileindex].lines->data[(NI16)(TMP4270)];
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
			NI TMP4271;
			NI TMP4272;
			LOC7 = 0;
			LOC7 = (((NI) 0) < first);
			if (!(LOC7)) goto LA8;
			TMP4271 = subInt(first, ((NI) 1));
			if ((NU)((NI)(TMP4271)) > (NU)(line->Sup.len)) raiseIndexError();
			LOC7 = (((NU8)(line->data[(NI)(TMP4271)])) >= ((NU8)(97)) && ((NU8)(line->data[(NI)(TMP4271)])) <= ((NU8)(122)) || ((NU8)(line->data[(NI)(TMP4271)])) >= ((NU8)(65)) && ((NU8)(line->data[(NI)(TMP4271)])) <= ((NU8)(90)) || ((NU8)(line->data[(NI)(TMP4271)])) >= ((NU8)(48)) && ((NU8)(line->data[(NI)(TMP4271)])) <= ((NU8)(57)) || ((NU8)(line->data[(NI)(TMP4271)])) >= ((NU8)(128)) && ((NU8)(line->data[(NI)(TMP4271)])) <= ((NU8)(255)) || ((NU8)(line->data[(NI)(TMP4271)])) == ((NU8)(95)));
			LA8: ;
			if (!LOC7) goto LA6;
			TMP4272 = subInt(first, ((NI) 1));
			first = (NI)(TMP4272);
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
		NI TMP4273;
		if ((NU)(first) > (NU)(line->Sup.len)) raiseIndexError();
		if (!((NU8)(line->data[first]) == (NU8)(96))) goto LA15;
		TMP4273 = addInt(first, ((NI) 1));
		first = (NI)(TMP4273);
	}
	LA15: ;
	nimln(74, "prettybase.nim");
	LOC17 = 0;
	LOC17 = identlen_248147(line, first);
	TMP4274 = addInt(first, LOC17);
	TMP4275 = subInt((NI)(TMP4274), ((NI) 1));
	last = (NI)(TMP4275);
	nimln(75, "prettybase.nim");
	{
		Slice86457 LOC20;
		NimStringDesc* LOC21;
		NI LOC22;
		NimStringDesc* x;
		NimStringDesc* LOC25;
		NI TMP4276;
		NimStringDesc* LOC26;
		NI TMP4277;
		NimStringDesc* LOC27;
		NI TMP4278;
		LOC20 = HEX2EHEX2E_105273(first, last);
		LOC21 = 0;
		LOC21 = HEX5BHEX5D_86450(line, LOC20);
		LOC22 = 0;
		LOC22 = nsuCmpIgnoreStyle(LOC21, (*oldsym).s);
		if (!(LOC22 == ((NI) 0))) goto LA23;
		nimln(76, "prettybase.nim");
		LOC25 = 0;
		TMP4276 = subInt(first, ((NI) 1));
		LOC26 = 0;
		LOC26 = copyStrLast(line, ((NI) 0), (NI)(TMP4276));
		TMP4277 = addInt(last, ((NI) 1));
		LOC27 = 0;
		LOC27 = copyStr(line, (NI)(TMP4277));
		LOC25 = rawNewString(LOC26->Sup.len + (*newsym).s->Sup.len + LOC27->Sup.len + 0);
appendString(LOC25, LOC26);
appendString(LOC25, (*newsym).s);
appendString(LOC25, LOC27);
		x = LOC25;
		nimln(77, "prettybase.nim");
		if ((NU)(info.fileindex) >= (NU)(gsourcefiles_248036->Sup.len)) raiseIndexError();
		TMP4278 = subInt(info.line, ((NI16) 1));
		if (TMP4278 < -32768 || TMP4278 > 32767) raiseOverflow();
		if ((NU)((NI16)(TMP4278)) >= (NU)(gsourcefiles_248036->data[info.fileindex].lines->Sup.len)) raiseIndexError();
		asgnRefNoCycle((void**) (&gsourcefiles_248036->data[info.fileindex].lines->data[(NI16)(TMP4278)]), x);
		nimln(78, "prettybase.nim");
		if ((NU)(info.fileindex) >= (NU)(gsourcefiles_248036->Sup.len)) raiseIndexError();
		gsourcefiles_248036->data[info.fileindex].dirty = NIM_TRUE;
	}
	LA23: ;
	}BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, replacedeprecated_248273)(Tlineinfo162338 info, Tsym190843* oldsym, Tsym190843* newsym) {
	nimfr("replaceDeprecated", "prettybase.nim")
	nimln(82, "prettybase.nim");
	replacedeprecated_248208(info, (*oldsym).name, (*newsym).name);
	popFrame();
}

N_NIMCALL(void, replacecomment_248286)(Tlineinfo162338 info) {
	NimStringDesc* line;
	NI TMP4279;
	NI first;
	NimStringDesc* x;
	NimStringDesc* LOC5;
	NI TMP4281;
	NimStringDesc* LOC6;
	NI TMP4283;
	NimStringDesc* LOC7;
	NimStringDesc* LOC8;
	NI TMP4285;
	nimfr("replaceComment", "prettybase.nim")
	nimln(85, "prettybase.nim");
	loadfile_248041(info);
	nimln(87, "prettybase.nim");
	if ((NU)(info.fileindex) >= (NU)(gsourcefiles_248036->Sup.len)) raiseIndexError();
	TMP4279 = subInt(info.line, ((NI16) 1));
	if (TMP4279 < -32768 || TMP4279 > 32767) raiseOverflow();
	if ((NU)((NI16)(TMP4279)) >= (NU)(gsourcefiles_248036->data[info.fileindex].lines->Sup.len)) raiseIndexError();
	line = gsourcefiles_248036->data[info.fileindex].lines->data[(NI16)(TMP4279)];
	nimln(88, "prettybase.nim");
	first = ((NI) (info.col));
	nimln(89, "prettybase.nim");
	{
		NI TMP4280;
		if ((NU)(first) > (NU)(line->Sup.len)) raiseIndexError();
		if (!!(((NU8)(line->data[first]) == (NU8)(35)))) goto LA3;
		TMP4280 = addInt(first, ((NI) 1));
		first = (NI)(TMP4280);
	}
	LA3: ;
	nimln(91, "prettybase.nim");
	LOC5 = 0;
	TMP4281 = subInt(first, ((NI) 1));
	LOC6 = 0;
	LOC6 = copyStrLast(line, ((NI) 0), (NI)(TMP4281));
	TMP4283 = addInt(first, ((NI) 1));
	LOC7 = 0;
	LOC7 = copyStr(line, (NI)(TMP4283));
	LOC8 = 0;
	LOC8 = nsuEscape(LOC7, ((NimStringDesc*) &TMP4284), ((NimStringDesc*) &TMP4284));
	LOC5 = rawNewString(LOC6->Sup.len + LOC8->Sup.len + 8);
appendString(LOC5, LOC6);
appendString(LOC5, ((NimStringDesc*) &TMP4282));
appendString(LOC5, LOC8);
	x = LOC5;
	nimln(92, "prettybase.nim");
	if ((NU)(info.fileindex) >= (NU)(gsourcefiles_248036->Sup.len)) raiseIndexError();
	TMP4285 = subInt(info.line, ((NI16) 1));
	if (TMP4285 < -32768 || TMP4285 > 32767) raiseOverflow();
	if ((NU)((NI16)(TMP4285)) >= (NU)(gsourcefiles_248036->data[info.fileindex].lines->Sup.len)) raiseIndexError();
	asgnRefNoCycle((void**) (&gsourcefiles_248036->data[info.fileindex].lines->data[(NI16)(TMP4285)]), x);
	nimln(93, "prettybase.nim");
	if ((NU)(info.fileindex) >= (NU)(gsourcefiles_248036->Sup.len)) raiseIndexError();
	gsourcefiles_248036->data[info.fileindex].dirty = NIM_TRUE;
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseInit)(void) {
	nimfr("prettybase", "prettybase.nim")
	nimln(21, "prettybase.nim");
	if (gsourcefiles_248036) nimGCunrefNoCycle(gsourcefiles_248036);
	gsourcefiles_248036 = (TY248019*) newSeqRC1((&NTI248019), 0);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseDatInit)(void) {
static TNimNode* TMP4259[6];
static TNimNode TMP4215[7];
NTI248008.size = sizeof(Tsourcefile248008);
NTI248008.kind = 18;
NTI248008.base = 0;
NTI248008.flags = 2;
TMP4259[0] = &TMP4215[1];
TMP4215[1].kind = 1;
TMP4215[1].offset = offsetof(Tsourcefile248008, lines);
TMP4215[1].typ = (&NTI13806);
TMP4215[1].name = "lines";
TMP4259[1] = &TMP4215[2];
TMP4215[2].kind = 1;
TMP4215[2].offset = offsetof(Tsourcefile248008, dirty);
TMP4215[2].typ = (&NTI138);
TMP4215[2].name = "dirty";
TMP4259[2] = &TMP4215[3];
TMP4215[3].kind = 1;
TMP4215[3].offset = offsetof(Tsourcefile248008, isnimfixfile);
TMP4215[3].typ = (&NTI138);
TMP4215[3].name = "isNimfixFile";
TMP4259[3] = &TMP4215[4];
TMP4215[4].kind = 1;
TMP4215[4].offset = offsetof(Tsourcefile248008, fullpath);
TMP4215[4].typ = (&NTI149);
TMP4215[4].name = "fullpath";
TMP4259[4] = &TMP4215[5];
TMP4215[5].kind = 1;
TMP4215[5].offset = offsetof(Tsourcefile248008, newline);
TMP4215[5].typ = (&NTI149);
TMP4215[5].name = "newline";
TMP4259[5] = &TMP4215[6];
TMP4215[6].kind = 1;
TMP4215[6].offset = offsetof(Tsourcefile248008, fileidx);
TMP4215[6].typ = (&NTI114);
TMP4215[6].name = "fileIdx";
TMP4215[0].len = 6; TMP4215[0].kind = 2; TMP4215[0].sons = &TMP4259[0];
NTI248008.node = &TMP4215[0];
NTI248019.size = sizeof(TY248019*);
NTI248019.kind = 24;
NTI248019.base = (&NTI248008);
NTI248019.flags = 2;
NTI248019.marker = TMP4260;
}

