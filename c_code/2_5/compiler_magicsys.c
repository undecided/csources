/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Tsym192843 Tsym192843;
typedef struct Ttype192849 Ttype192849;
typedef struct Tstrtable192817 Tstrtable192817;
typedef struct Tsymseq192815 Tsymseq192815;
typedef struct Tidobj168015 Tidobj168015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq192845 Ttypeseq192845;
typedef struct Tnode192813 Tnode192813;
typedef struct Tloc192827 Tloc192827;
typedef struct Ropeobj162009 Ropeobj162009;
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tident168021 Tident168021;
typedef struct Tscope192837 Tscope192837;
typedef struct TY192944 TY192944;
typedef struct Tlineinfo164338 Tlineinfo164338;
typedef struct Tlib192831 Tlib192831;
typedef struct Tidentiter200141 Tidentiter200141;
typedef struct Tnodeseq192807 Tnodeseq192807;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct Tinstantiation192833 Tinstantiation192833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TY192933 TY192933;
typedef Ttype192849* TY240060[62];
struct  Tstrtable192817  {
NI counter;
Tsymseq192815* data;
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
struct  Tidobj168015  {
  TNimObject Sup;
NI id;
};
struct  Tloc192827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype192849* t;
Ropeobj162009* r;
Ropeobj162009* heaproot;
};
struct  Ttype192849  {
  Tidobj168015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq192845* sons;
Tnode192813* n;
Tsym192843* owner;
Tsym192843* sym;
Tsym192843* destructor;
Tsym192843* deepcopy;
Tsym192843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc192827 loc;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo164338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tsym192843  {
  Tidobj168015 Sup;
NU8 kind;
union{
struct {Ttypeseq192845* typeinstcache;
Tscope192837* typscope;
} S1;
struct {TY192944* procinstcache;
Tsym192843* gcunsafetyreason;
} S2;
struct {TY192944* usedgenerics;
Tstrtable192817 tab;
} S3;
struct {Tsym192843* guard;
} S4;
} kindU;
NU16 magic;
Ttype192849* typ;
Tident168021* name;
Tlineinfo164338 info;
Tsym192843* owner;
NU32 flags;
Tnode192813* ast;
NU32 options;
NI position;
NI offset;
Tloc192827 loc;
Tlib192831* annex;
Tnode192813* constraint;
};
struct  Tidentiter200141  {
NI h;
Tident168021* name;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef Ttype192849* TY240295[70];
struct  Tnode192813  {
Ttype192849* typ;
Tlineinfo164338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym192843* sym;
} S4;
struct {Tident168021* ident;
} S5;
struct {Tnodeseq192807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef NU8 TY193031[20];
struct  Ropeobj162009  {
  TNimObject Sup;
Ropeobj162009* left;
Ropeobj162009* right;
NI length;
NimStringDesc* data;
};
typedef NI TY27820[16];
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
struct  Tident168021  {
  Tidobj168015 Sup;
NimStringDesc* s;
Tident168021* next;
NI h;
};
struct  Tscope192837  {
NI depthlevel;
Tstrtable192817 symbols;
Tnodeseq192807* usingsyms;
Tscope192837* parent;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tlib192831  {
  Tlistentry130022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj162009* name;
Tnode192813* path;
};
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
struct  Tinstantiation192833  {
Tsym192843* sym;
Ttypeseq192845* concretetypes;
TY192933* usedby;
};
struct Ttypeseq192845 {
  TGenericSeq Sup;
  Ttype192849* data[SEQ_DECL_SIZE];
};
struct Tsymseq192815 {
  TGenericSeq Sup;
  Tsym192843* data[SEQ_DECL_SIZE];
};
struct TY192944 {
  TGenericSeq Sup;
  Tinstantiation192833* data[SEQ_DECL_SIZE];
};
struct Tnodeseq192807 {
  TGenericSeq Sup;
  Tnode192813* data[SEQ_DECL_SIZE];
};
struct TY192933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Ttype192849*, nilorsysint_240070)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, registersystype_240024)(Ttype192849* t);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46746*, usrtocell_50246)(void* usr);
static N_INLINE(void, rtladdzct_51804)(Tcell46746* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46762* s, Tcell46746* c);
N_NIMCALL(Ttype192849*, newsystype_240100)(NU8 kind, NI size);
N_NIMCALL(Ttype192849*, newtype_195140)(NU8 kind, Tsym192843* owner);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(Tsym192843*, getsyssym_240054)(NimStringDesc* name);
N_NIMCALL(Tsym192843*, strtableget_200111)(Tstrtable192817 t, Tident168021* name);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NIMCALL(Tident168021*, getident_168463)(NimStringDesc* identifier);
N_NIMCALL(void, rawmessage_165960)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tsym192843*, newsym_193656)(NU8 symkind, Tident168021* name, Tsym192843* owner, Tlineinfo164338 info);
N_NIMCALL(void, loadstub_237639)(Tsym192843* s);
N_NIMCALL(Tsym192843*, getsysmagic_240155)(NimStringDesc* name, NU16 m);
N_NIMCALL(Tsym192843*, initidentiter_200147)(Tidentiter200141* ti, Tstrtable192817 tab, Tident168021* s);
N_NIMCALL(Tsym192843*, nextidentiter_200156)(Tidentiter200141* ti, Tstrtable192817 tab);
N_NIMCALL(Ttype192849*, systypefromname_240213)(NimStringDesc* name);
N_NIMCALL(Ttype192849*, getsystype_240030)(NU8 kind);
N_NIMCALL(void, internalerror_166218)(NimStringDesc* errmsg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_83129, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, resetsystypes_240302)(void);
N_NIMCALL(void, initstrtable_196007)(Tstrtable192817* x);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(Ttype192849*, getintlittype_240660)(Tnode192813* literal);
N_NIMCALL(NI64, chckRange64)(NI64 i, NI64 a, NI64 b);
N_NIMCALL(Ttype192849*, copytype_195549)(Ttype192849* t, Tsym192843* owner, NIM_BOOL keepid);
N_NIMCALL(Ttype192849*, getfloatlittype_240686)(Tnode192813* literal);
static N_INLINE(Ttype192849*, skipintlit_240696)(Ttype192849* t);
N_NIMCALL(void, addsonskipintlit_240729)(Ttype192849* father, Ttype192849* son);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(void, propagatetoowner_196274)(Ttype192849* owner, Ttype192849* elem);
N_NIMCALL(void, setintlittype_240774)(Tnode192813* result);
N_NIMCALL(void, internalerror_166199)(Tlineinfo164338 info, NimStringDesc* errmsg);
N_NIMCALL(Tsym192843*, getcompilerproc_240036)(NimStringDesc* name);
N_NIMCALL(Tident168021*, getident_168473)(NimStringDesc* identifier, NI h);
N_NIMCALL(NI, hashignorestyle_131887)(NimStringDesc* x);
N_NIMCALL(void, strtableadd_200103)(Tstrtable192817* t, Tsym192843* n);
N_NIMCALL(void, registercompilerproc_240042)(Tsym192843* s);
N_NIMCALL(void, finishsystem_240048)(Tstrtable192817 tab);
STRING_LITERAL(TMP4036, "tab", 3);
STRING_LITERAL(TMP4037, "int", 3);
STRING_LITERAL(TMP4038, "int8", 4);
STRING_LITERAL(TMP4039, "int16", 5);
STRING_LITERAL(TMP4040, "int32", 5);
STRING_LITERAL(TMP4041, "int64", 5);
STRING_LITERAL(TMP4042, "uint", 4);
STRING_LITERAL(TMP4043, "uint8", 5);
STRING_LITERAL(TMP4044, "uint16", 6);
STRING_LITERAL(TMP4045, "uint32", 6);
STRING_LITERAL(TMP4046, "uint64", 6);
STRING_LITERAL(TMP4047, "float", 5);
STRING_LITERAL(TMP4048, "float32", 7);
STRING_LITERAL(TMP4049, "float64", 7);
STRING_LITERAL(TMP4050, "float128", 8);
STRING_LITERAL(TMP4051, "bool", 4);
STRING_LITERAL(TMP4052, "char", 4);
STRING_LITERAL(TMP4053, "string", 6);
STRING_LITERAL(TMP4054, "cstring", 7);
STRING_LITERAL(TMP4055, "pointer", 7);
STRING_LITERAL(TMP4056, "request for typekind: ", 22);
STRING_LITERAL(TMP4057, "wanted: ", 8);
STRING_LITERAL(TMP4058, " got: ", 6);
STRING_LITERAL(TMP4059, "type not found: ", 16);
static NIM_CONST TY193031 TMP4062 = {
0xE0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4063, "intVal", 6);
STRING_LITERAL(TMP4064, "invalid int size", 16);
Tsym192843* systemmodule_240019;
TY240060 gsystypes_240063;
Tstrtable192817 compilerprocs_240064;
extern TFrame* frameptr_17042;
extern Tgcheap48616 gch_48644;
extern NI ptrsize_160625;
extern TNimType NTI192260; /* TTypeKind */
TY240295 inttypecache_240297;
extern TNimType NTI192845; /* TTypeSeq */
extern NI intsize_160623;
extern Tstrtable192817 rodcompilerprocs_235066;

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

N_NIMCALL(Ttype192849*, nilorsysint_240070)(void) {
	Ttype192849* result;
	nimfr("nilOrSysInt", "magicsys.nim")
	result = 0;
	nimln(30, "magicsys.nim");
	result = gsystypes_240063[(((NU8) 31))- 0];
	popFrame();
	return result;
}

static N_INLINE(Tcell46746*, usrtocell_50246)(void* usr) {
	Tcell46746* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	result = ((Tcell46746*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46746))))));
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

N_NIMCALL(void, registersystype_240024)(Ttype192849* t) {
	nimfr("registerSysType", "magicsys.nim")
	nimln(33, "magicsys.nim");
	{
		if (!(gsystypes_240063[((*t).kind)- 0] == NIM_NIL)) goto LA3;
		asgnRefNoCycle((void**) (&gsystypes_240063[((*t).kind)- 0]), t);
	}
	LA3: ;
	popFrame();
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

N_NIMCALL(Ttype192849*, newsystype_240100)(NU8 kind, NI size) {
	Ttype192849* result;
	nimfr("newSysType", "magicsys.nim")
	result = 0;
	nimln(36, "magicsys.nim");
	result = newtype_195140(kind, systemmodule_240019);
	nimln(37, "magicsys.nim");
	(*result).size = ((NI64) (size));
	nimln(38, "magicsys.nim");
	(*result).align = ((NI16)chckRange(size, ((NI16) -32768), ((NI16) 32767)));
	popFrame();
	return result;
}

N_NIMCALL(Tsym192843*, getsyssym_240054)(NimStringDesc* name) {
	Tsym192843* result;
	Tident168021* LOC1;
	nimfr("getSysSym", "magicsys.nim")
	result = 0;
	nimln(41, "magicsys.nim");
	if (!(((64 &(1<<(((*systemmodule_240019).kind)&31)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4036));
	LOC1 = 0;
	LOC1 = getident_168463(name);
	result = strtableget_200111((*systemmodule_240019).kindU.S3.tab, LOC1);
	nimln(42, "magicsys.nim");
	{
		Tident168021* LOC6;
		if (!(result == NIM_NIL)) goto LA4;
		nimln(43, "magicsys.nim");
		rawmessage_165960(((NU16) 64), name);
		nimln(44, "magicsys.nim");
		LOC6 = 0;
		LOC6 = getident_168463(name);
		result = newsym_193656(((NU8) 0), LOC6, systemmodule_240019, (*systemmodule_240019).info);
		nimln(45, "magicsys.nim");
		asgnRefNoCycle((void**) (&(*result).typ), newtype_195140(((NU8) 50), systemmodule_240019));
	}
	LA4: ;
	nimln(46, "magicsys.nim");
	{
		if (!((*result).kind == ((NU8) 23))) goto LA9;
		loadstub_237639(result);
	}
	LA9: ;
	nimln(47, "magicsys.nim");
	{
		if (!((*result).kind == ((NU8) 25))) goto LA13;
		result = (*result).owner;
	}
	LA13: ;
	popFrame();
	return result;
}

N_NIMCALL(Tsym192843*, getsysmagic_240155)(NimStringDesc* name, NU16 m) {
	Tsym192843* result;
	Tidentiter200141 ti;
	Tident168021* id;
	nimfr("getSysMagic", "magicsys.nim")
{	result = 0;
	memset((void*)(&ti), 0, sizeof(ti));
	nimln(51, "magicsys.nim");
	id = getident_168463(name);
	nimln(52, "magicsys.nim");
	if (!(((64 &(1<<(((*systemmodule_240019).kind)&31)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4036));
	result = initidentiter_200147((&ti), (*systemmodule_240019).kindU.S3.tab, id);
	{
		nimln(53, "magicsys.nim");
		while (1) {
			if (!!((result == NIM_NIL))) goto LA2;
			nimln(54, "magicsys.nim");
			{
				if (!((*result).kind == ((NU8) 23))) goto LA5;
				loadstub_237639(result);
			}
			LA5: ;
			nimln(55, "magicsys.nim");
			{
				if (!((*result).magic == m)) goto LA9;
				goto BeforeRet;
			}
			LA9: ;
			nimln(56, "magicsys.nim");
			if (!(((64 &(1<<(((*systemmodule_240019).kind)&31)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4036));
			result = nextidentiter_200156((&ti), (*systemmodule_240019).kindU.S3.tab);
		} LA2: ;
	}
	nimln(57, "magicsys.nim");
	rawmessage_165960(((NU16) 64), name);
	nimln(58, "magicsys.nim");
	result = newsym_193656(((NU8) 0), id, systemmodule_240019, (*systemmodule_240019).info);
	nimln(59, "magicsys.nim");
	asgnRefNoCycle((void**) (&(*result).typ), newtype_195140(((NU8) 50), systemmodule_240019));
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(Ttype192849*, systypefromname_240213)(NimStringDesc* name) {
	Ttype192849* result;
	Tsym192843* LOC1;
	nimfr("sysTypeFromName", "magicsys.nim")
	result = 0;
	nimln(62, "magicsys.nim");
	LOC1 = 0;
	LOC1 = getsyssym_240054(name);
	result = (*LOC1).typ;
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(Ttype192849*, getsystype_240030)(NU8 kind) {
	Ttype192849* result;
	nimfr("getSysType", "magicsys.nim")
{	result = 0;
	nimln(65, "magicsys.nim");
	result = gsystypes_240063[(kind)- 0];
	nimln(66, "magicsys.nim");
	{
		if (!(result == NIM_NIL)) goto LA3;
		nimln(67, "magicsys.nim");
		switch (kind) {
		case ((NU8) 31):
		{
			nimln(68, "magicsys.nim");
			result = systypefromname_240213(((NimStringDesc*) &TMP4037));
		}
		break;
		case ((NU8) 32):
		{
			nimln(69, "magicsys.nim");
			result = systypefromname_240213(((NimStringDesc*) &TMP4038));
		}
		break;
		case ((NU8) 33):
		{
			nimln(70, "magicsys.nim");
			result = systypefromname_240213(((NimStringDesc*) &TMP4039));
		}
		break;
		case ((NU8) 34):
		{
			nimln(71, "magicsys.nim");
			result = systypefromname_240213(((NimStringDesc*) &TMP4040));
		}
		break;
		case ((NU8) 35):
		{
			nimln(72, "magicsys.nim");
			result = systypefromname_240213(((NimStringDesc*) &TMP4041));
		}
		break;
		case ((NU8) 40):
		{
			nimln(73, "magicsys.nim");
			result = systypefromname_240213(((NimStringDesc*) &TMP4042));
		}
		break;
		case ((NU8) 41):
		{
			nimln(74, "magicsys.nim");
			result = systypefromname_240213(((NimStringDesc*) &TMP4043));
		}
		break;
		case ((NU8) 42):
		{
			nimln(75, "magicsys.nim");
			result = systypefromname_240213(((NimStringDesc*) &TMP4044));
		}
		break;
		case ((NU8) 43):
		{
			nimln(76, "magicsys.nim");
			result = systypefromname_240213(((NimStringDesc*) &TMP4045));
		}
		break;
		case ((NU8) 44):
		{
			nimln(77, "magicsys.nim");
			result = systypefromname_240213(((NimStringDesc*) &TMP4046));
		}
		break;
		case ((NU8) 36):
		{
			nimln(78, "magicsys.nim");
			result = systypefromname_240213(((NimStringDesc*) &TMP4047));
		}
		break;
		case ((NU8) 37):
		{
			nimln(79, "magicsys.nim");
			result = systypefromname_240213(((NimStringDesc*) &TMP4048));
		}
		break;
		case ((NU8) 38):
		{
			nimln(80, "magicsys.nim");
			result = systypefromname_240213(((NimStringDesc*) &TMP4049));
			goto BeforeRet;
		}
		break;
		case ((NU8) 39):
		{
			nimln(81, "magicsys.nim");
			result = systypefromname_240213(((NimStringDesc*) &TMP4050));
		}
		break;
		case ((NU8) 1):
		{
			nimln(82, "magicsys.nim");
			result = systypefromname_240213(((NimStringDesc*) &TMP4051));
		}
		break;
		case ((NU8) 2):
		{
			nimln(83, "magicsys.nim");
			result = systypefromname_240213(((NimStringDesc*) &TMP4052));
		}
		break;
		case ((NU8) 28):
		{
			nimln(84, "magicsys.nim");
			result = systypefromname_240213(((NimStringDesc*) &TMP4053));
		}
		break;
		case ((NU8) 29):
		{
			nimln(85, "magicsys.nim");
			result = systypefromname_240213(((NimStringDesc*) &TMP4054));
		}
		break;
		case ((NU8) 26):
		{
			nimln(86, "magicsys.nim");
			result = systypefromname_240213(((NimStringDesc*) &TMP4055));
		}
		break;
		case ((NU8) 5):
		{
			nimln(87, "magicsys.nim");
			result = newsystype_240100(((NU8) 5), ptrsize_160625);
		}
		break;
		default:
		{
			NimStringDesc* LOC26;
			nimln(88, "magicsys.nim");
			LOC26 = 0;
			LOC26 = rawNewString(reprEnum(kind, (&NTI192260))->Sup.len + 22);
appendString(LOC26, ((NimStringDesc*) &TMP4056));
appendString(LOC26, reprEnum(kind, (&NTI192260)));
			internalerror_166218(LOC26);
		}
		break;
		}
		nimln(89, "magicsys.nim");
		asgnRefNoCycle((void**) (&gsystypes_240063[(kind)- 0]), result);
	}
	LA3: ;
	nimln(90, "magicsys.nim");
	{
		NimStringDesc* LOC31;
		if (!!(((*result).kind == kind))) goto LA29;
		nimln(91, "magicsys.nim");
		LOC31 = 0;
		LOC31 = rawNewString(reprEnum(kind, (&NTI192260))->Sup.len + reprEnum((*result).kind, (&NTI192260))->Sup.len + 14);
appendString(LOC31, ((NimStringDesc*) &TMP4057));
appendString(LOC31, reprEnum(kind, (&NTI192260)));
appendString(LOC31, ((NimStringDesc*) &TMP4058));
appendString(LOC31, reprEnum((*result).kind, (&NTI192260)));
		internalerror_166218(LOC31);
	}
	LA29: ;
	nimln(92, "magicsys.nim");
	{
		NimStringDesc* LOC36;
		if (!(result == NIM_NIL)) goto LA34;
		LOC36 = 0;
		LOC36 = rawNewString(reprEnum(kind, (&NTI192260))->Sup.len + 16);
appendString(LOC36, ((NimStringDesc*) &TMP4059));
appendString(LOC36, reprEnum(kind, (&NTI192260)));
		internalerror_166218(LOC36);
	}
	LA34: ;
	}BeforeRet: ;
	popFrame();
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

N_NIMCALL(void, resetsystypes_240302)(void) {
	nimfr("resetSysTypes", "magicsys.nim")
	nimln(98, "magicsys.nim");
	asgnRefNoCycle((void**) (&systemmodule_240019), NIM_NIL);
	nimln(99, "magicsys.nim");
	initstrtable_196007((&compilerprocs_240064));
	{
		NU8 i_240423;
		NI res_240627;
		i_240423 = 0;
		nimln(1598, "system.nim");
		res_240627 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4060;
				if (!(res_240627 <= ((NI) 61))) goto LA3;
				nimln(1600, "system.nim");
				i_240423 = ((NU8)chckRange(res_240627, ((NU8) 0), ((NU8) 61)));
				nimln(101, "magicsys.nim");
				asgnRefNoCycle((void**) (&gsystypes_240063[(i_240423)- 0]), NIM_NIL);
				nimln(1619, "system.nim");
				TMP4060 = addInt(res_240627, ((NI) 1));
				res_240627 = (NI)(TMP4060);
			} LA3: ;
		}
	}
	{
		NI i_240623;
		NI res_240633;
		i_240623 = 0;
		nimln(1598, "system.nim");
		res_240633 = ((NI) -5);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4061;
				if (!(res_240633 <= ((NI) 64))) goto LA6;
				nimln(1600, "system.nim");
				i_240623 = ((NI)chckRange(res_240633, ((NI) -5), ((NI) 64)));
				nimln(104, "magicsys.nim");
				if (i_240623 < -5 || i_240623 > 64) raiseIndexError();
				asgnRefNoCycle((void**) (&inttypecache_240297[(i_240623)- -5]), NIM_NIL);
				nimln(1619, "system.nim");
				TMP4061 = addInt(res_240633, ((NI) 1));
				res_240633 = (NI)(TMP4061);
			} LA6: ;
		}
	}
	popFrame();
}

N_NIMCALL(Ttype192849*, getintlittype_240660)(Tnode192813* literal) {
	Ttype192849* result;
	NI64 value;
	nimfr("getIntLitType", "magicsys.nim")
	result = 0;
	nimln(108, "magicsys.nim");
	if (!(((TMP4062[(*literal).kind/8] &(1<<((*literal).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4063));
	value = (*literal).kindU.S1.intval;
	nimln(109, "magicsys.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (IL64(-5) <= value);
		if (!(LOC3)) goto LA4;
		LOC3 = (value <= IL64(64));
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(110, "magicsys.nim");
		if (((NI)chckRange64(value, ((NI) (-2147483647 -1)), ((NI) 2147483647))) < -5 || ((NI)chckRange64(value, ((NI) (-2147483647 -1)), ((NI) 2147483647))) > 64) raiseIndexError();
		result = inttypecache_240297[(((NI)chckRange64(value, ((NI) (-2147483647 -1)), ((NI) 2147483647))))- -5];
		nimln(111, "magicsys.nim");
		{
			Ttype192849* ti;
			if (!(result == NIM_NIL)) goto LA9;
			nimln(112, "magicsys.nim");
			ti = getsystype_240030(((NU8) 31));
			nimln(113, "magicsys.nim");
			result = copytype_195549(ti, (*ti).owner, NIM_FALSE);
			nimln(114, "magicsys.nim");
			asgnRefNoCycle((void**) (&(*result).n), literal);
			nimln(115, "magicsys.nim");
			if (((NI)chckRange64(value, ((NI) (-2147483647 -1)), ((NI) 2147483647))) < -5 || ((NI)chckRange64(value, ((NI) (-2147483647 -1)), ((NI) 2147483647))) > 64) raiseIndexError();
			asgnRefNoCycle((void**) (&inttypecache_240297[(((NI)chckRange64(value, ((NI) (-2147483647 -1)), ((NI) 2147483647))))- -5]), result);
		}
		LA9: ;
	}
	goto LA1;
	LA5: ;
	{
		Ttype192849* ti;
		nimln(117, "magicsys.nim");
		ti = getsystype_240030(((NU8) 31));
		nimln(118, "magicsys.nim");
		result = copytype_195549(ti, (*ti).owner, NIM_FALSE);
		nimln(119, "magicsys.nim");
		asgnRefNoCycle((void**) (&(*result).n), literal);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(Ttype192849*, getfloatlittype_240686)(Tnode192813* literal) {
	Ttype192849* result;
	nimfr("getFloatLitType", "magicsys.nim")
	result = 0;
	nimln(123, "magicsys.nim");
	result = newsystype_240100(((NU8) 36), ((NI) 8));
	nimln(124, "magicsys.nim");
	asgnRefNoCycle((void**) (&(*result).n), literal);
	popFrame();
	return result;
}

static N_INLINE(Ttype192849*, skipintlit_240696)(Ttype192849* t) {
	Ttype192849* result;
	nimfr("skipIntLit", "magicsys.nim")
{	result = 0;
	nimln(127, "magicsys.nim");
	{
		if (!!(((*t).n == NIM_NIL))) goto LA3;
		nimln(128, "magicsys.nim");
		{
			if (!((*t).kind == ((NU8) 31) || (*t).kind == ((NU8) 36))) goto LA7;
			nimln(129, "magicsys.nim");
			result = getsystype_240030((*t).kind);
			goto BeforeRet;
		}
		LA7: ;
	}
	LA3: ;
	nimln(130, "magicsys.nim");
	result = t;
	}BeforeRet: ;
	popFrame();
	return result;
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
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_51804(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, addsonskipintlit_240729)(Ttype192849* father, Ttype192849* son) {
	Ttype192849* s;
	nimfr("addSonSkipIntLit", "magicsys.nim")
	nimln(133, "magicsys.nim");
	{
		if (!(*father).sons == 0) goto LA3;
		if ((*father).sons) nimGCunrefNoCycle((*father).sons);
		(*father).sons = (Ttypeseq192845*) newSeqRC1((&NTI192845), 0);
	}
	LA3: ;
	nimln(134, "magicsys.nim");
	s = skipintlit_240696(son);
	nimln(135, "magicsys.nim");
	(*father).sons = (Ttypeseq192845*) incrSeq(&((*father).sons)->Sup, sizeof(Ttype192849*));
	asgnRefNoCycle((void**) (&(*father).sons->data[(*father).sons->Sup.len-1]), s);
	nimln(136, "magicsys.nim");
	propagatetoowner_196274(father, s);
	popFrame();
}

N_NIMCALL(void, setintlittype_240774)(Tnode192813* result) {
	NI64 i;
	nimfr("setIntLitType", "magicsys.nim")
	nimln(139, "magicsys.nim");
	if (!(((TMP4062[(*result).kind/8] &(1<<((*result).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4063));
	i = (*result).kindU.S1.intval;
	nimln(140, "magicsys.nim");
	switch (intsize_160623) {
	case ((NI) 8):
	{
		nimln(141, "magicsys.nim");
		asgnRefNoCycle((void**) (&(*result).typ), getintlittype_240660(result));
	}
	break;
	case ((NI) 4):
	{
		nimln(143, "magicsys.nim");
		{
			NIM_BOOL LOC5;
			LOC5 = 0;
			LOC5 = (IL64(-2147483648) <= i);
			if (!(LOC5)) goto LA6;
			LOC5 = (i <= IL64(2147483647));
			LA6: ;
			if (!LOC5) goto LA7;
			nimln(144, "magicsys.nim");
			asgnRefNoCycle((void**) (&(*result).typ), getintlittype_240660(result));
		}
		goto LA3;
		LA7: ;
		{
			nimln(146, "magicsys.nim");
			asgnRefNoCycle((void**) (&(*result).typ), getsystype_240030(((NU8) 35)));
		}
		LA3: ;
	}
	break;
	case ((NI) 2):
	{
		nimln(148, "magicsys.nim");
		{
			NIM_BOOL LOC13;
			LOC13 = 0;
			LOC13 = (IL64(-32768) <= i);
			if (!(LOC13)) goto LA14;
			LOC13 = (i <= IL64(32767));
			LA14: ;
			if (!LOC13) goto LA15;
			nimln(149, "magicsys.nim");
			asgnRefNoCycle((void**) (&(*result).typ), getintlittype_240660(result));
		}
		goto LA11;
		LA15: ;
		{
			NIM_BOOL LOC18;
			nimln(150, "magicsys.nim");
			LOC18 = 0;
			LOC18 = (IL64(-2147483648) <= i);
			if (!(LOC18)) goto LA19;
			LOC18 = (i <= IL64(2147483647));
			LA19: ;
			if (!LOC18) goto LA20;
			nimln(151, "magicsys.nim");
			asgnRefNoCycle((void**) (&(*result).typ), getsystype_240030(((NU8) 34)));
		}
		goto LA11;
		LA20: ;
		{
			nimln(153, "magicsys.nim");
			asgnRefNoCycle((void**) (&(*result).typ), getsystype_240030(((NU8) 35)));
		}
		LA11: ;
	}
	break;
	case ((NI) 1):
	{
		nimln(156, "magicsys.nim");
		{
			NIM_BOOL LOC26;
			LOC26 = 0;
			LOC26 = (IL64(-128) <= i);
			if (!(LOC26)) goto LA27;
			LOC26 = (i <= IL64(127));
			LA27: ;
			if (!LOC26) goto LA28;
			nimln(157, "magicsys.nim");
			asgnRefNoCycle((void**) (&(*result).typ), getintlittype_240660(result));
		}
		goto LA24;
		LA28: ;
		{
			NIM_BOOL LOC31;
			nimln(158, "magicsys.nim");
			LOC31 = 0;
			LOC31 = (IL64(-32768) <= i);
			if (!(LOC31)) goto LA32;
			LOC31 = (i <= IL64(32767));
			LA32: ;
			if (!LOC31) goto LA33;
			nimln(159, "magicsys.nim");
			asgnRefNoCycle((void**) (&(*result).typ), getsystype_240030(((NU8) 33)));
		}
		goto LA24;
		LA33: ;
		{
			NIM_BOOL LOC36;
			nimln(160, "magicsys.nim");
			LOC36 = 0;
			LOC36 = (IL64(-2147483648) <= i);
			if (!(LOC36)) goto LA37;
			LOC36 = (i <= IL64(2147483647));
			LA37: ;
			if (!LOC36) goto LA38;
			nimln(161, "magicsys.nim");
			asgnRefNoCycle((void**) (&(*result).typ), getsystype_240030(((NU8) 34)));
		}
		goto LA24;
		LA38: ;
		{
			nimln(163, "magicsys.nim");
			asgnRefNoCycle((void**) (&(*result).typ), getsystype_240030(((NU8) 35)));
		}
		LA24: ;
	}
	break;
	default:
	{
		nimln(164, "magicsys.nim");
		internalerror_166199((*result).info, ((NimStringDesc*) &TMP4064));
	}
	break;
	}
	popFrame();
}

N_NIMCALL(Tsym192843*, getcompilerproc_240036)(NimStringDesc* name) {
	Tsym192843* result;
	Tident168021* ident;
	NI LOC1;
	nimfr("getCompilerProc", "magicsys.nim")
	result = 0;
	nimln(167, "magicsys.nim");
	LOC1 = 0;
	LOC1 = hashignorestyle_131887(name);
	ident = getident_168473(name, LOC1);
	nimln(168, "magicsys.nim");
	result = strtableget_200111(compilerprocs_240064, ident);
	nimln(169, "magicsys.nim");
	{
		if (!(result == NIM_NIL)) goto LA4;
		nimln(170, "magicsys.nim");
		result = strtableget_200111(rodcompilerprocs_235066, ident);
		nimln(171, "magicsys.nim");
		{
			if (!!((result == NIM_NIL))) goto LA8;
			nimln(172, "magicsys.nim");
			strtableadd_200103((&compilerprocs_240064), result);
			nimln(173, "magicsys.nim");
			{
				if (!((*result).kind == ((NU8) 23))) goto LA12;
				loadstub_237639(result);
			}
			LA12: ;
			nimln(174, "magicsys.nim");
			{
				if (!((*result).kind == ((NU8) 25))) goto LA16;
				result = (*result).owner;
			}
			LA16: ;
		}
		LA8: ;
	}
	LA4: ;
	popFrame();
	return result;
}

N_NIMCALL(void, registercompilerproc_240042)(Tsym192843* s) {
	nimfr("registerCompilerProc", "magicsys.nim")
	nimln(177, "magicsys.nim");
	strtableadd_200103((&compilerprocs_240064), s);
	popFrame();
}

N_NIMCALL(void, finishsystem_240048)(Tstrtable192817 tab) {
	nimfr("finishSystem", "magicsys.nim")
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, compiler_magicsysInit)(void) {
	nimfr("magicsys", "magicsys.nim")
	nimln(181, "magicsys.nim");
	initstrtable_196007((&compilerprocs_240064));
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_magicsysDatInit)(void) {
}

