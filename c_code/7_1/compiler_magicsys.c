/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Tsym189843 Tsym189843;
typedef struct Ttype189849 Ttype189849;
typedef struct Tstrtable189817 Tstrtable189817;
typedef struct Tsymseq189815 Tsymseq189815;
typedef struct Tidobj165015 Tidobj165015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq189845 Ttypeseq189845;
typedef struct Tnode189813 Tnode189813;
typedef struct Tloc189827 Tloc189827;
typedef struct Ropeobj159009 Ropeobj159009;
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tident165021 Tident165021;
typedef struct Tscope189837 Tscope189837;
typedef struct TY189944 TY189944;
typedef struct Tlineinfo161338 Tlineinfo161338;
typedef struct Tlib189831 Tlib189831;
typedef struct Tidentiter197141 Tidentiter197141;
typedef struct Tnodeseq189807 Tnodeseq189807;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct Tinstantiation189833 Tinstantiation189833;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct TY189933 TY189933;
typedef Ttype189849* TY237060[62];
struct  Tstrtable189817  {
NI counter;
Tsymseq189815* data;
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
struct  Tloc189827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype189849* t;
Ropeobj159009* r;
Ropeobj159009* heaproot;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo161338  {
NI16 line;
NI16 col;
NI32 fileindex;
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
struct  Tidentiter197141  {
NI h;
Tident165021* name;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef Ttype189849* TY237295[70];
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
struct  Ropeobj159009  {
  TNimObject Sup;
Ropeobj159009* left;
Ropeobj159009* right;
NI length;
NimStringDesc* data;
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
struct Ttypeseq189845 {
  TGenericSeq Sup;
  Ttype189849* data[SEQ_DECL_SIZE];
};
struct Tsymseq189815 {
  TGenericSeq Sup;
  Tsym189843* data[SEQ_DECL_SIZE];
};
struct TY189944 {
  TGenericSeq Sup;
  Tinstantiation189833* data[SEQ_DECL_SIZE];
};
struct Tnodeseq189807 {
  TGenericSeq Sup;
  Tnode189813* data[SEQ_DECL_SIZE];
};
struct TY189933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Ttype189849*, nilorsysint_237070)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, registersystype_237024)(Ttype189849* t);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr);
static N_INLINE(void, rtladdzct_51804)(Tcell46747* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46763* s, Tcell46747* c);
N_NIMCALL(Ttype189849*, newsystype_237100)(NU8 kind, NI size);
N_NIMCALL(Ttype189849*, newtype_192140)(NU8 kind, Tsym189843* owner);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(Tsym189843*, getsyssym_237054)(NimStringDesc* name);
N_NIMCALL(Tsym189843*, strtableget_197111)(Tstrtable189817 t, Tident165021* name);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NIMCALL(Tident165021*, getident_165463)(NimStringDesc* identifier);
N_NIMCALL(void, rawmessage_162960)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tsym189843*, newsym_190656)(NU8 symkind, Tident165021* name, Tsym189843* owner, Tlineinfo161338 info);
N_NIMCALL(void, loadstub_234639)(Tsym189843* s);
N_NIMCALL(Tsym189843*, getsysmagic_237155)(NimStringDesc* name, NU16 m);
N_NIMCALL(Tsym189843*, initidentiter_197147)(Tidentiter197141* ti, Tstrtable189817 tab, Tident165021* s);
N_NIMCALL(Tsym189843*, nextidentiter_197156)(Tidentiter197141* ti, Tstrtable189817 tab);
N_NIMCALL(Ttype189849*, systypefromname_237213)(NimStringDesc* name);
N_NIMCALL(Ttype189849*, getsystype_237030)(NU8 kind);
N_NIMCALL(void, internalerror_163218)(NimStringDesc* errmsg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_82929, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, resetsystypes_237302)(void);
N_NIMCALL(void, initstrtable_193007)(Tstrtable189817* x);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(Ttype189849*, getintlittype_237660)(Tnode189813* literal);
N_NIMCALL(NI64, chckRange64)(NI64 i, NI64 a, NI64 b);
N_NIMCALL(Ttype189849*, copytype_192549)(Ttype189849* t, Tsym189843* owner, NIM_BOOL keepid);
N_NIMCALL(Ttype189849*, getfloatlittype_237686)(Tnode189813* literal);
static N_INLINE(Ttype189849*, skipintlit_237696)(Ttype189849* t);
N_NIMCALL(void, addsonskipintlit_237729)(Ttype189849* father, Ttype189849* son);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(void, propagatetoowner_193274)(Ttype189849* owner, Ttype189849* elem);
N_NIMCALL(void, setintlittype_237774)(Tnode189813* result);
N_NIMCALL(void, internalerror_163199)(Tlineinfo161338 info, NimStringDesc* errmsg);
N_NIMCALL(Tsym189843*, getcompilerproc_237036)(NimStringDesc* name);
N_NIMCALL(Tident165021*, getident_165473)(NimStringDesc* identifier, NI h);
N_NIMCALL(NI, hashignorestyle_130887)(NimStringDesc* x);
N_NIMCALL(void, strtableadd_197103)(Tstrtable189817* t, Tsym189843* n);
N_NIMCALL(void, registercompilerproc_237042)(Tsym189843* s);
N_NIMCALL(void, finishsystem_237048)(Tstrtable189817 tab);
STRING_LITERAL(TMP4033, "tab", 3);
STRING_LITERAL(TMP4034, "int", 3);
STRING_LITERAL(TMP4035, "int8", 4);
STRING_LITERAL(TMP4036, "int16", 5);
STRING_LITERAL(TMP4037, "int32", 5);
STRING_LITERAL(TMP4038, "int64", 5);
STRING_LITERAL(TMP4039, "uint", 4);
STRING_LITERAL(TMP4040, "uint8", 5);
STRING_LITERAL(TMP4041, "uint16", 6);
STRING_LITERAL(TMP4042, "uint32", 6);
STRING_LITERAL(TMP4043, "uint64", 6);
STRING_LITERAL(TMP4044, "float", 5);
STRING_LITERAL(TMP4045, "float32", 7);
STRING_LITERAL(TMP4046, "float64", 7);
STRING_LITERAL(TMP4047, "float128", 8);
STRING_LITERAL(TMP4048, "bool", 4);
STRING_LITERAL(TMP4049, "char", 4);
STRING_LITERAL(TMP4050, "string", 6);
STRING_LITERAL(TMP4051, "cstring", 7);
STRING_LITERAL(TMP4052, "pointer", 7);
STRING_LITERAL(TMP4053, "request for typekind: ", 22);
STRING_LITERAL(TMP4054, "wanted: ", 8);
STRING_LITERAL(TMP4055, " got: ", 6);
STRING_LITERAL(TMP4056, "type not found: ", 16);
static NIM_CONST TY190031 TMP4059 = {
0xE0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4060, "intVal", 6);
STRING_LITERAL(TMP4061, "invalid int size", 16);
Tsym189843* systemmodule_237019;
TY237060 gsystypes_237063;
Tstrtable189817 compilerprocs_237064;
extern TFrame* frameptr_17042;
extern Tgcheap48616 gch_48644;
extern NI ptrsize_157625;
extern TNimType NTI189260; /* TTypeKind */
TY237295 inttypecache_237297;
extern TNimType NTI189845; /* TTypeSeq */
extern NI intsize_157623;
extern Tstrtable189817 rodcompilerprocs_232066;

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

N_NIMCALL(Ttype189849*, nilorsysint_237070)(void) {
	Ttype189849* result;
	nimfr("nilOrSysInt", "magicsys.nim")
	result = 0;
	nimln(30, "magicsys.nim");
	result = gsystypes_237063[(((NU8) 31))- 0];
	popFrame();
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

N_NIMCALL(void, registersystype_237024)(Ttype189849* t) {
	nimfr("registerSysType", "magicsys.nim")
	nimln(33, "magicsys.nim");
	{
		if (!(gsystypes_237063[((*t).kind)- 0] == NIM_NIL)) goto LA3;
		asgnRefNoCycle((void**) (&gsystypes_237063[((*t).kind)- 0]), t);
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

N_NIMCALL(Ttype189849*, newsystype_237100)(NU8 kind, NI size) {
	Ttype189849* result;
	nimfr("newSysType", "magicsys.nim")
	result = 0;
	nimln(36, "magicsys.nim");
	result = newtype_192140(kind, systemmodule_237019);
	nimln(37, "magicsys.nim");
	(*result).size = ((NI64) (size));
	nimln(38, "magicsys.nim");
	(*result).align = ((NI16)chckRange(size, ((NI16) -32768), ((NI16) 32767)));
	popFrame();
	return result;
}

N_NIMCALL(Tsym189843*, getsyssym_237054)(NimStringDesc* name) {
	Tsym189843* result;
	Tident165021* LOC1;
	nimfr("getSysSym", "magicsys.nim")
	result = 0;
	nimln(41, "magicsys.nim");
	if (!(((64 &(1<<(((*systemmodule_237019).kind)&31)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4033));
	LOC1 = 0;
	LOC1 = getident_165463(name);
	result = strtableget_197111((*systemmodule_237019).kindU.S3.tab, LOC1);
	nimln(42, "magicsys.nim");
	{
		Tident165021* LOC6;
		if (!(result == NIM_NIL)) goto LA4;
		nimln(43, "magicsys.nim");
		rawmessage_162960(((NU16) 64), name);
		nimln(44, "magicsys.nim");
		LOC6 = 0;
		LOC6 = getident_165463(name);
		result = newsym_190656(((NU8) 0), LOC6, systemmodule_237019, (*systemmodule_237019).info);
		nimln(45, "magicsys.nim");
		asgnRefNoCycle((void**) (&(*result).typ), newtype_192140(((NU8) 50), systemmodule_237019));
	}
	LA4: ;
	nimln(46, "magicsys.nim");
	{
		if (!((*result).kind == ((NU8) 23))) goto LA9;
		loadstub_234639(result);
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

N_NIMCALL(Tsym189843*, getsysmagic_237155)(NimStringDesc* name, NU16 m) {
	Tsym189843* result;
	Tidentiter197141 ti;
	Tident165021* id;
	nimfr("getSysMagic", "magicsys.nim")
{	result = 0;
	memset((void*)(&ti), 0, sizeof(ti));
	nimln(51, "magicsys.nim");
	id = getident_165463(name);
	nimln(52, "magicsys.nim");
	if (!(((64 &(1<<(((*systemmodule_237019).kind)&31)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4033));
	result = initidentiter_197147((&ti), (*systemmodule_237019).kindU.S3.tab, id);
	{
		nimln(53, "magicsys.nim");
		while (1) {
			if (!!((result == NIM_NIL))) goto LA2;
			nimln(54, "magicsys.nim");
			{
				if (!((*result).kind == ((NU8) 23))) goto LA5;
				loadstub_234639(result);
			}
			LA5: ;
			nimln(55, "magicsys.nim");
			{
				if (!((*result).magic == m)) goto LA9;
				goto BeforeRet;
			}
			LA9: ;
			nimln(56, "magicsys.nim");
			if (!(((64 &(1<<(((*systemmodule_237019).kind)&31)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4033));
			result = nextidentiter_197156((&ti), (*systemmodule_237019).kindU.S3.tab);
		} LA2: ;
	}
	nimln(57, "magicsys.nim");
	rawmessage_162960(((NU16) 64), name);
	nimln(58, "magicsys.nim");
	result = newsym_190656(((NU8) 0), id, systemmodule_237019, (*systemmodule_237019).info);
	nimln(59, "magicsys.nim");
	asgnRefNoCycle((void**) (&(*result).typ), newtype_192140(((NU8) 50), systemmodule_237019));
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(Ttype189849*, systypefromname_237213)(NimStringDesc* name) {
	Ttype189849* result;
	Tsym189843* LOC1;
	nimfr("sysTypeFromName", "magicsys.nim")
	result = 0;
	nimln(62, "magicsys.nim");
	LOC1 = 0;
	LOC1 = getsyssym_237054(name);
	result = (*LOC1).typ;
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(Ttype189849*, getsystype_237030)(NU8 kind) {
	Ttype189849* result;
	nimfr("getSysType", "magicsys.nim")
{	result = 0;
	nimln(65, "magicsys.nim");
	result = gsystypes_237063[(kind)- 0];
	nimln(66, "magicsys.nim");
	{
		if (!(result == NIM_NIL)) goto LA3;
		nimln(67, "magicsys.nim");
		switch (kind) {
		case ((NU8) 31):
		{
			nimln(68, "magicsys.nim");
			result = systypefromname_237213(((NimStringDesc*) &TMP4034));
		}
		break;
		case ((NU8) 32):
		{
			nimln(69, "magicsys.nim");
			result = systypefromname_237213(((NimStringDesc*) &TMP4035));
		}
		break;
		case ((NU8) 33):
		{
			nimln(70, "magicsys.nim");
			result = systypefromname_237213(((NimStringDesc*) &TMP4036));
		}
		break;
		case ((NU8) 34):
		{
			nimln(71, "magicsys.nim");
			result = systypefromname_237213(((NimStringDesc*) &TMP4037));
		}
		break;
		case ((NU8) 35):
		{
			nimln(72, "magicsys.nim");
			result = systypefromname_237213(((NimStringDesc*) &TMP4038));
		}
		break;
		case ((NU8) 40):
		{
			nimln(73, "magicsys.nim");
			result = systypefromname_237213(((NimStringDesc*) &TMP4039));
		}
		break;
		case ((NU8) 41):
		{
			nimln(74, "magicsys.nim");
			result = systypefromname_237213(((NimStringDesc*) &TMP4040));
		}
		break;
		case ((NU8) 42):
		{
			nimln(75, "magicsys.nim");
			result = systypefromname_237213(((NimStringDesc*) &TMP4041));
		}
		break;
		case ((NU8) 43):
		{
			nimln(76, "magicsys.nim");
			result = systypefromname_237213(((NimStringDesc*) &TMP4042));
		}
		break;
		case ((NU8) 44):
		{
			nimln(77, "magicsys.nim");
			result = systypefromname_237213(((NimStringDesc*) &TMP4043));
		}
		break;
		case ((NU8) 36):
		{
			nimln(78, "magicsys.nim");
			result = systypefromname_237213(((NimStringDesc*) &TMP4044));
		}
		break;
		case ((NU8) 37):
		{
			nimln(79, "magicsys.nim");
			result = systypefromname_237213(((NimStringDesc*) &TMP4045));
		}
		break;
		case ((NU8) 38):
		{
			nimln(80, "magicsys.nim");
			result = systypefromname_237213(((NimStringDesc*) &TMP4046));
			goto BeforeRet;
		}
		break;
		case ((NU8) 39):
		{
			nimln(81, "magicsys.nim");
			result = systypefromname_237213(((NimStringDesc*) &TMP4047));
		}
		break;
		case ((NU8) 1):
		{
			nimln(82, "magicsys.nim");
			result = systypefromname_237213(((NimStringDesc*) &TMP4048));
		}
		break;
		case ((NU8) 2):
		{
			nimln(83, "magicsys.nim");
			result = systypefromname_237213(((NimStringDesc*) &TMP4049));
		}
		break;
		case ((NU8) 28):
		{
			nimln(84, "magicsys.nim");
			result = systypefromname_237213(((NimStringDesc*) &TMP4050));
		}
		break;
		case ((NU8) 29):
		{
			nimln(85, "magicsys.nim");
			result = systypefromname_237213(((NimStringDesc*) &TMP4051));
		}
		break;
		case ((NU8) 26):
		{
			nimln(86, "magicsys.nim");
			result = systypefromname_237213(((NimStringDesc*) &TMP4052));
		}
		break;
		case ((NU8) 5):
		{
			nimln(87, "magicsys.nim");
			result = newsystype_237100(((NU8) 5), ptrsize_157625);
		}
		break;
		default:
		{
			NimStringDesc* LOC26;
			nimln(88, "magicsys.nim");
			LOC26 = 0;
			LOC26 = rawNewString(reprEnum(kind, (&NTI189260))->Sup.len + 22);
appendString(LOC26, ((NimStringDesc*) &TMP4053));
appendString(LOC26, reprEnum(kind, (&NTI189260)));
			internalerror_163218(LOC26);
		}
		break;
		}
		nimln(89, "magicsys.nim");
		asgnRefNoCycle((void**) (&gsystypes_237063[(kind)- 0]), result);
	}
	LA3: ;
	nimln(90, "magicsys.nim");
	{
		NimStringDesc* LOC31;
		if (!!(((*result).kind == kind))) goto LA29;
		nimln(91, "magicsys.nim");
		LOC31 = 0;
		LOC31 = rawNewString(reprEnum(kind, (&NTI189260))->Sup.len + reprEnum((*result).kind, (&NTI189260))->Sup.len + 14);
appendString(LOC31, ((NimStringDesc*) &TMP4054));
appendString(LOC31, reprEnum(kind, (&NTI189260)));
appendString(LOC31, ((NimStringDesc*) &TMP4055));
appendString(LOC31, reprEnum((*result).kind, (&NTI189260)));
		internalerror_163218(LOC31);
	}
	LA29: ;
	nimln(92, "magicsys.nim");
	{
		NimStringDesc* LOC36;
		if (!(result == NIM_NIL)) goto LA34;
		LOC36 = 0;
		LOC36 = rawNewString(reprEnum(kind, (&NTI189260))->Sup.len + 16);
appendString(LOC36, ((NimStringDesc*) &TMP4056));
appendString(LOC36, reprEnum(kind, (&NTI189260)));
		internalerror_163218(LOC36);
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

N_NIMCALL(void, resetsystypes_237302)(void) {
	nimfr("resetSysTypes", "magicsys.nim")
	nimln(98, "magicsys.nim");
	asgnRefNoCycle((void**) (&systemmodule_237019), NIM_NIL);
	nimln(99, "magicsys.nim");
	initstrtable_193007((&compilerprocs_237064));
	{
		NU8 i_237423;
		NI res_237627;
		i_237423 = 0;
		nimln(1598, "system.nim");
		res_237627 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4057;
				if (!(res_237627 <= ((NI) 61))) goto LA3;
				nimln(1600, "system.nim");
				i_237423 = ((NU8)chckRange(res_237627, ((NU8) 0), ((NU8) 61)));
				nimln(101, "magicsys.nim");
				asgnRefNoCycle((void**) (&gsystypes_237063[(i_237423)- 0]), NIM_NIL);
				nimln(1619, "system.nim");
				TMP4057 = addInt(res_237627, ((NI) 1));
				res_237627 = (NI)(TMP4057);
			} LA3: ;
		}
	}
	{
		NI i_237623;
		NI res_237633;
		i_237623 = 0;
		nimln(1598, "system.nim");
		res_237633 = ((NI) -5);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP4058;
				if (!(res_237633 <= ((NI) 64))) goto LA6;
				nimln(1600, "system.nim");
				i_237623 = ((NI)chckRange(res_237633, ((NI) -5), ((NI) 64)));
				nimln(104, "magicsys.nim");
				if (i_237623 < -5 || i_237623 > 64) raiseIndexError();
				asgnRefNoCycle((void**) (&inttypecache_237297[(i_237623)- -5]), NIM_NIL);
				nimln(1619, "system.nim");
				TMP4058 = addInt(res_237633, ((NI) 1));
				res_237633 = (NI)(TMP4058);
			} LA6: ;
		}
	}
	popFrame();
}

N_NIMCALL(Ttype189849*, getintlittype_237660)(Tnode189813* literal) {
	Ttype189849* result;
	NI64 value;
	nimfr("getIntLitType", "magicsys.nim")
	result = 0;
	nimln(108, "magicsys.nim");
	if (!(((TMP4059[(*literal).kind/8] &(1<<((*literal).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4060));
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
		result = inttypecache_237297[(((NI)chckRange64(value, ((NI) (-2147483647 -1)), ((NI) 2147483647))))- -5];
		nimln(111, "magicsys.nim");
		{
			Ttype189849* ti;
			if (!(result == NIM_NIL)) goto LA9;
			nimln(112, "magicsys.nim");
			ti = getsystype_237030(((NU8) 31));
			nimln(113, "magicsys.nim");
			result = copytype_192549(ti, (*ti).owner, NIM_FALSE);
			nimln(114, "magicsys.nim");
			asgnRefNoCycle((void**) (&(*result).n), literal);
			nimln(115, "magicsys.nim");
			if (((NI)chckRange64(value, ((NI) (-2147483647 -1)), ((NI) 2147483647))) < -5 || ((NI)chckRange64(value, ((NI) (-2147483647 -1)), ((NI) 2147483647))) > 64) raiseIndexError();
			asgnRefNoCycle((void**) (&inttypecache_237297[(((NI)chckRange64(value, ((NI) (-2147483647 -1)), ((NI) 2147483647))))- -5]), result);
		}
		LA9: ;
	}
	goto LA1;
	LA5: ;
	{
		Ttype189849* ti;
		nimln(117, "magicsys.nim");
		ti = getsystype_237030(((NU8) 31));
		nimln(118, "magicsys.nim");
		result = copytype_192549(ti, (*ti).owner, NIM_FALSE);
		nimln(119, "magicsys.nim");
		asgnRefNoCycle((void**) (&(*result).n), literal);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(Ttype189849*, getfloatlittype_237686)(Tnode189813* literal) {
	Ttype189849* result;
	nimfr("getFloatLitType", "magicsys.nim")
	result = 0;
	nimln(123, "magicsys.nim");
	result = newsystype_237100(((NU8) 36), ((NI) 8));
	nimln(124, "magicsys.nim");
	asgnRefNoCycle((void**) (&(*result).n), literal);
	popFrame();
	return result;
}

static N_INLINE(Ttype189849*, skipintlit_237696)(Ttype189849* t) {
	Ttype189849* result;
	nimfr("skipIntLit", "magicsys.nim")
{	result = 0;
	nimln(127, "magicsys.nim");
	{
		if (!!(((*t).n == NIM_NIL))) goto LA3;
		nimln(128, "magicsys.nim");
		{
			if (!((*t).kind == ((NU8) 31) || (*t).kind == ((NU8) 36))) goto LA7;
			nimln(129, "magicsys.nim");
			result = getsystype_237030((*t).kind);
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
	Tcell46747* c;
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

N_NIMCALL(void, addsonskipintlit_237729)(Ttype189849* father, Ttype189849* son) {
	Ttype189849* s;
	nimfr("addSonSkipIntLit", "magicsys.nim")
	nimln(133, "magicsys.nim");
	{
		if (!(*father).sons == 0) goto LA3;
		if ((*father).sons) nimGCunrefNoCycle((*father).sons);
		(*father).sons = (Ttypeseq189845*) newSeqRC1((&NTI189845), 0);
	}
	LA3: ;
	nimln(134, "magicsys.nim");
	s = skipintlit_237696(son);
	nimln(135, "magicsys.nim");
	(*father).sons = (Ttypeseq189845*) incrSeq(&((*father).sons)->Sup, sizeof(Ttype189849*));
	asgnRefNoCycle((void**) (&(*father).sons->data[(*father).sons->Sup.len-1]), s);
	nimln(136, "magicsys.nim");
	propagatetoowner_193274(father, s);
	popFrame();
}

N_NIMCALL(void, setintlittype_237774)(Tnode189813* result) {
	NI64 i;
	nimfr("setIntLitType", "magicsys.nim")
	nimln(139, "magicsys.nim");
	if (!(((TMP4059[(*result).kind/8] &(1<<((*result).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4060));
	i = (*result).kindU.S1.intval;
	nimln(140, "magicsys.nim");
	switch (intsize_157623) {
	case ((NI) 8):
	{
		nimln(141, "magicsys.nim");
		asgnRefNoCycle((void**) (&(*result).typ), getintlittype_237660(result));
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
			asgnRefNoCycle((void**) (&(*result).typ), getintlittype_237660(result));
		}
		goto LA3;
		LA7: ;
		{
			nimln(146, "magicsys.nim");
			asgnRefNoCycle((void**) (&(*result).typ), getsystype_237030(((NU8) 35)));
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
			asgnRefNoCycle((void**) (&(*result).typ), getintlittype_237660(result));
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
			asgnRefNoCycle((void**) (&(*result).typ), getsystype_237030(((NU8) 34)));
		}
		goto LA11;
		LA20: ;
		{
			nimln(153, "magicsys.nim");
			asgnRefNoCycle((void**) (&(*result).typ), getsystype_237030(((NU8) 35)));
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
			asgnRefNoCycle((void**) (&(*result).typ), getintlittype_237660(result));
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
			asgnRefNoCycle((void**) (&(*result).typ), getsystype_237030(((NU8) 33)));
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
			asgnRefNoCycle((void**) (&(*result).typ), getsystype_237030(((NU8) 34)));
		}
		goto LA24;
		LA38: ;
		{
			nimln(163, "magicsys.nim");
			asgnRefNoCycle((void**) (&(*result).typ), getsystype_237030(((NU8) 35)));
		}
		LA24: ;
	}
	break;
	default:
	{
		nimln(164, "magicsys.nim");
		internalerror_163199((*result).info, ((NimStringDesc*) &TMP4061));
	}
	break;
	}
	popFrame();
}

N_NIMCALL(Tsym189843*, getcompilerproc_237036)(NimStringDesc* name) {
	Tsym189843* result;
	Tident165021* ident;
	NI LOC1;
	nimfr("getCompilerProc", "magicsys.nim")
	result = 0;
	nimln(167, "magicsys.nim");
	LOC1 = 0;
	LOC1 = hashignorestyle_130887(name);
	ident = getident_165473(name, LOC1);
	nimln(168, "magicsys.nim");
	result = strtableget_197111(compilerprocs_237064, ident);
	nimln(169, "magicsys.nim");
	{
		if (!(result == NIM_NIL)) goto LA4;
		nimln(170, "magicsys.nim");
		result = strtableget_197111(rodcompilerprocs_232066, ident);
		nimln(171, "magicsys.nim");
		{
			if (!!((result == NIM_NIL))) goto LA8;
			nimln(172, "magicsys.nim");
			strtableadd_197103((&compilerprocs_237064), result);
			nimln(173, "magicsys.nim");
			{
				if (!((*result).kind == ((NU8) 23))) goto LA12;
				loadstub_234639(result);
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

N_NIMCALL(void, registercompilerproc_237042)(Tsym189843* s) {
	nimfr("registerCompilerProc", "magicsys.nim")
	nimln(177, "magicsys.nim");
	strtableadd_197103((&compilerprocs_237064), s);
	popFrame();
}

N_NIMCALL(void, finishsystem_237048)(Tstrtable189817 tab) {
	nimfr("finishSystem", "magicsys.nim")
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, compiler_magicsysInit)(void) {
	nimfr("magicsys", "magicsys.nim")
	nimln(181, "magicsys.nim");
	initstrtable_193007((&compilerprocs_237064));
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_magicsysDatInit)(void) {
}

