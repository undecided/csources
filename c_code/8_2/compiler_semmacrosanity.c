/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Tsym191843 Tsym191843;
typedef struct Tnode191813 Tnode191813;
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
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj161009 Ropeobj161009;
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
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Tlib191831 Tlib191831;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TY191933 TY191933;
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
struct  Tloc191827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype191849* t;
Ropeobj161009* r;
Ropeobj161009* heaproot;
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
struct  Tstrtable191817  {
NI counter;
Tsymseq191815* data;
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
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Ropeobj161009  {
  TNimObject Sup;
Ropeobj161009* left;
Ropeobj161009* right;
NI length;
NimStringDesc* data;
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
struct  Tscope191837  {
NI depthlevel;
Tstrtable191817 symbols;
Tnodeseq191807* usingsyms;
Tscope191837* parent;
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
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
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
N_NIMCALL(Tsym191843*, ithfield_403012)(Tnode191813* n, NI field);
N_NIMCALL(NI, sonslen_194403)(Tnode191813* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, internalerror_165199)(Tlineinfo163338 info, NimStringDesc* errmsg);
N_NIMCALL(Tnode191813*, lastson_194431)(Tnode191813* n);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, annotatetype_403134)(Tnode191813* n, Ttype191849* t);
N_NIMCALL(Ttype191849*, skiptypes_195167)(Ttype191849* t, NU64 kinds);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr);
static N_INLINE(void, rtladdzct_51804)(Tcell46747* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46763* s, Tcell46747* c);
static N_INLINE(NI, len_192097)(Tnode191813* n);
N_NIMCALL(void, globalerror_165145)(Tlineinfo163338 info, NimStringDesc* arg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NI, len_194377)(Ttype191849* n);
N_NIMCALL(Ttype191849*, elemtype_221522)(Ttype191849* t);
static NIM_CONST TY192031 TMP7979 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP7980, "sons", 4);
STRING_LITERAL(TMP7983, "ithField", 8);
STRING_LITERAL(TMP7987, "ithField(record case branch)", 28);
static NIM_CONST TY192031 TMP7989 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP7990, "sym", 3);
STRING_LITERAL(TMP7991, "invalid field at index ", 23);
STRING_LITERAL(TMP7994, "() must have an object or tuple type", 36);
STRING_LITERAL(TMP7996, "[] must have some form of array type", 36);
STRING_LITERAL(TMP7998, "{} must have the set type", 25);
STRING_LITERAL(TMP7999, "float literal must have some float type", 39);
STRING_LITERAL(TMP8000, "integer literal must have some int type", 39);
STRING_LITERAL(TMP8001, "string literal must be of some string type", 42);
STRING_LITERAL(TMP8002, "nil literal must be of some pointer type", 40);
extern TFrame* frameptr_17042;
extern Tgcheap48616 gch_48644;

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

N_NIMCALL(Tsym191843*, ithfield_403012)(Tnode191813* n, NI field) {
	Tsym191843* result;
	nimfr("ithField", "semmacrosanity.nim")
{	result = 0;
	nimln(16, "semmacrosanity.nim");
	result = NIM_NIL;
	nimln(17, "semmacrosanity.nim");
	switch ((*n).kind) {
	case ((NU8) 138):
	{
		{
			NI i_403029;
			NI HEX3Atmp_403095;
			NI LOC3;
			NI TMP7978;
			NI res_403098;
			i_403029 = 0;
			HEX3Atmp_403095 = 0;
			nimln(19, "semmacrosanity.nim");
			LOC3 = 0;
			LOC3 = sonslen_194403(n);
			TMP7978 = subInt(LOC3, ((NI) 1));
			HEX3Atmp_403095 = (NI)(TMP7978);
			nimln(1598, "system.nim");
			res_403098 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					NI TMP7981;
					NI TMP7982;
					if (!(res_403098 <= HEX3Atmp_403095)) goto LA5;
					nimln(1600, "system.nim");
					i_403029 = res_403098;
					nimln(20, "semmacrosanity.nim");
					if (((TMP7979[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7980));
					if ((NU)(i_403029) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
					TMP7981 = subInt(field, i_403029);
					result = ithfield_403012((*n).kindU.S6.sons->data[i_403029], (NI)(TMP7981));
					nimln(21, "semmacrosanity.nim");
					{
						if (!!((result == NIM_NIL))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					nimln(1614, "system.nim");
					TMP7982 = addInt(res_403098, ((NI) 1));
					res_403098 = (NI)(TMP7982);
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 139):
	{
		NI TMP7984;
		nimln(23, "semmacrosanity.nim");
		{
			if (((TMP7979[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7980));
			if ((NU)(((NI) 0)) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
			if (!!(((*(*n).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 3)))) goto LA13;
			internalerror_165199((*n).info, ((NimStringDesc*) &TMP7983));
		}
		LA13: ;
		nimln(24, "semmacrosanity.nim");
		if (((TMP7979[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7980));
		if ((NU)(((NI) 0)) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
		TMP7984 = subInt(field, ((NI) 1));
		result = ithfield_403012((*n).kindU.S6.sons->data[((NI) 0)], (NI)(TMP7984));
		nimln(25, "semmacrosanity.nim");
		{
			if (!!((result == NIM_NIL))) goto LA17;
			goto BeforeRet;
		}
		LA17: ;
		{
			NI i_403078;
			NI HEX3Atmp_403103;
			NI LOC20;
			NI TMP7985;
			NI res_403106;
			i_403078 = 0;
			HEX3Atmp_403103 = 0;
			nimln(26, "semmacrosanity.nim");
			LOC20 = 0;
			LOC20 = sonslen_194403(n);
			TMP7985 = subInt(LOC20, ((NI) 1));
			HEX3Atmp_403103 = (NI)(TMP7985);
			nimln(1598, "system.nim");
			res_403106 = ((NI) 1);
			{
				nimln(1599, "system.nim");
				while (1) {
					NI TMP7988;
					if (!(res_403106 <= HEX3Atmp_403103)) goto LA22;
					nimln(1600, "system.nim");
					i_403078 = res_403106;
					nimln(27, "semmacrosanity.nim");
					if (((TMP7979[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7980));
					if ((NU)(i_403078) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
					switch ((*(*n).kindU.S6.sons->data[i_403078]).kind) {
					case ((NU8) 85):
					case ((NU8) 88):
					{
						Tnode191813* LOC24;
						NI TMP7986;
						nimln(29, "semmacrosanity.nim");
						if (((TMP7979[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7980));
						if ((NU)(i_403078) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
						LOC24 = 0;
						LOC24 = lastson_194431((*n).kindU.S6.sons->data[i_403078]);
						TMP7986 = subInt(field, ((NI) 1));
						result = ithfield_403012(LOC24, (NI)(TMP7986));
						nimln(30, "semmacrosanity.nim");
						{
							if (!!((result == NIM_NIL))) goto LA27;
							goto BeforeRet;
						}
						LA27: ;
					}
					break;
					default:
					{
						nimln(31, "semmacrosanity.nim");
						internalerror_165199((*n).info, ((NimStringDesc*) &TMP7987));
					}
					break;
					}
					nimln(1614, "system.nim");
					TMP7988 = addInt(res_403106, ((NI) 1));
					res_403106 = (NI)(TMP7988);
				} LA22: ;
			}
		}
	}
	break;
	case ((NU8) 3):
	{
		nimln(33, "semmacrosanity.nim");
		{
			if (!(field == ((NI) 0))) goto LA33;
			if (!(((TMP7989[(*n).kind/8] &(1<<((*n).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP7990));
			result = (*n).kindU.S4.sym;
		}
		LA33: ;
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

static N_INLINE(NI, len_192097)(Tnode191813* n) {
	NI result;
	nimfr("len", "ast.nim")
	result = 0;
	nimln(934, "ast.nim");
	{
		if (((TMP7979[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7980));
		if (!(*n).kindU.S6.sons == 0) goto LA3;
		result = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		nimln(935, "ast.nim");
		if (((TMP7979[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7980));
		result = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, annotatetype_403134)(Tnode191813* n, Ttype191849* t) {
	Ttype191849* x;
	nimfr("annotateType", "semmacrosanity.nim")
	nimln(37, "semmacrosanity.nim");
	x = skiptypes_195167(t, IL64(211106233624832));
	nimln(40, "semmacrosanity.nim");
	switch ((*n).kind) {
	case ((NU8) 37):
	{
		nimln(42, "semmacrosanity.nim");
		{
			if (!((*x).kind == ((NU8) 17))) goto LA4;
			nimln(43, "semmacrosanity.nim");
			asgnRefNoCycle((void**) (&(*n).typ), t);
			{
				NI i_403180;
				NI HEX3Atmp_403310;
				NI LOC7;
				NI res_403313;
				i_403180 = 0;
				HEX3Atmp_403310 = 0;
				nimln(44, "semmacrosanity.nim");
				LOC7 = 0;
				LOC7 = len_192097(n);
				HEX3Atmp_403310 = subInt(LOC7, 1);
				nimln(1598, "system.nim");
				res_403313 = ((NI) 0);
				{
					nimln(1599, "system.nim");
					while (1) {
						Tsym191843* field;
						NI TMP7992;
						if (!(res_403313 <= HEX3Atmp_403310)) goto LA9;
						nimln(1600, "system.nim");
						i_403180 = res_403313;
						nimln(45, "semmacrosanity.nim");
						field = ithfield_403012((*x).n, i_403180);
						nimln(46, "semmacrosanity.nim");
						{
							NimStringDesc* LOC14;
							NimStringDesc* LOC15;
							if (!field == 0) goto LA12;
							LOC14 = 0;
							LOC15 = 0;
							LOC15 = nimIntToStr(i_403180);
							LOC14 = rawNewString(LOC15->Sup.len + 23);
appendString(LOC14, ((NimStringDesc*) &TMP7991));
appendString(LOC14, LOC15);
							globalerror_165145((*n).info, LOC14);
						}
						goto LA10;
						LA12: ;
						{
							nimln(47, "semmacrosanity.nim");
							if (((TMP7979[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7980));
							if ((NU)(i_403180) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
							annotatetype_403134((*n).kindU.S6.sons->data[i_403180], (*field).typ);
						}
						LA10: ;
						nimln(1619, "system.nim");
						TMP7992 = addInt(res_403313, ((NI) 1));
						res_403313 = (NI)(TMP7992);
					} LA9: ;
				}
			}
		}
		goto LA2;
		LA4: ;
		{
			nimln(48, "semmacrosanity.nim");
			if (!((*x).kind == ((NU8) 18))) goto LA18;
			nimln(49, "semmacrosanity.nim");
			asgnRefNoCycle((void**) (&(*n).typ), t);
			{
				NI i_403222;
				NI HEX3Atmp_403318;
				NI LOC21;
				NI res_403321;
				i_403222 = 0;
				HEX3Atmp_403318 = 0;
				nimln(50, "semmacrosanity.nim");
				LOC21 = 0;
				LOC21 = len_192097(n);
				HEX3Atmp_403318 = subInt(LOC21, 1);
				nimln(1598, "system.nim");
				res_403321 = ((NI) 0);
				{
					nimln(1599, "system.nim");
					while (1) {
						NI TMP7993;
						if (!(res_403321 <= HEX3Atmp_403318)) goto LA23;
						nimln(1600, "system.nim");
						i_403222 = res_403321;
						nimln(51, "semmacrosanity.nim");
						{
							NI LOC26;
							NimStringDesc* LOC29;
							NimStringDesc* LOC30;
							LOC26 = 0;
							LOC26 = len_194377(x);
							if (!(LOC26 <= i_403222)) goto LA27;
							LOC29 = 0;
							LOC30 = 0;
							LOC30 = nimIntToStr(i_403222);
							LOC29 = rawNewString(LOC30->Sup.len + 23);
appendString(LOC29, ((NimStringDesc*) &TMP7991));
appendString(LOC29, LOC30);
							globalerror_165145((*n).info, LOC29);
						}
						goto LA24;
						LA27: ;
						{
							nimln(52, "semmacrosanity.nim");
							if (((TMP7979[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7980));
							if ((NU)(i_403222) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
							if ((NU)(i_403222) >= (NU)((*x).sons->Sup.len)) raiseIndexError();
							annotatetype_403134((*n).kindU.S6.sons->data[i_403222], (*x).sons->data[i_403222]);
						}
						LA24: ;
						nimln(1619, "system.nim");
						TMP7993 = addInt(res_403321, ((NI) 1));
						res_403321 = (NI)(TMP7993);
					} LA23: ;
				}
			}
		}
		goto LA2;
		LA18: ;
		{
			NIM_BOOL LOC33;
			nimln(53, "semmacrosanity.nim");
			LOC33 = 0;
			LOC33 = ((*x).kind == ((NU8) 25));
			if (!(LOC33)) goto LA34;
			LOC33 = ((*x).callconv == ((NU8) 8));
			LA34: ;
			if (!LOC33) goto LA35;
			nimln(54, "semmacrosanity.nim");
			asgnRefNoCycle((void**) (&(*n).typ), t);
		}
		goto LA2;
		LA35: ;
		{
			nimln(56, "semmacrosanity.nim");
			globalerror_165145((*n).info, ((NimStringDesc*) &TMP7994));
		}
		LA2: ;
	}
	break;
	case ((NU8) 41):
	{
		nimln(58, "semmacrosanity.nim");
		{
			if (!((151060496 &(IL64(1)<<(((*x).kind)&IL64(63))))!=0)) goto LA41;
			nimln(59, "semmacrosanity.nim");
			asgnRefNoCycle((void**) (&(*n).typ), t);
			{
				Tnode191813* m_403253;
				m_403253 = 0;
				{
					NI i_403329;
					NI HEX3Atmp_403331;
					NI LOC45;
					NI res_403333;
					i_403329 = 0;
					HEX3Atmp_403331 = 0;
					nimln(1537, "ast.nim");
					LOC45 = 0;
					LOC45 = len_192097(n);
					HEX3Atmp_403331 = subInt(LOC45, 1);
					nimln(1598, "system.nim");
					res_403333 = ((NI) 0);
					{
						nimln(1599, "system.nim");
						while (1) {
							Ttype191849* LOC48;
							NI TMP7995;
							if (!(res_403333 <= HEX3Atmp_403331)) goto LA47;
							nimln(1600, "system.nim");
							i_403329 = res_403333;
							nimln(1537, "ast.nim");
							if (((TMP7979[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7980));
							if ((NU)(i_403329) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
							m_403253 = (*n).kindU.S6.sons->data[i_403329];
							nimln(60, "semmacrosanity.nim");
							LOC48 = 0;
							LOC48 = elemtype_221522(x);
							annotatetype_403134(m_403253, LOC48);
							nimln(1619, "system.nim");
							TMP7995 = addInt(res_403333, ((NI) 1));
							res_403333 = (NI)(TMP7995);
						} LA47: ;
					}
				}
			}
		}
		goto LA39;
		LA41: ;
		{
			nimln(62, "semmacrosanity.nim");
			globalerror_165145((*n).info, ((NimStringDesc*) &TMP7996));
		}
		LA39: ;
	}
	break;
	case ((NU8) 39):
	{
		nimln(64, "semmacrosanity.nim");
		{
			if (!((524288 &(IL64(1)<<(((*x).kind)&IL64(63))))!=0)) goto LA53;
			nimln(65, "semmacrosanity.nim");
			asgnRefNoCycle((void**) (&(*n).typ), t);
			{
				Tnode191813* m_403265;
				m_403265 = 0;
				{
					NI i_403340;
					NI HEX3Atmp_403342;
					NI LOC57;
					NI res_403344;
					i_403340 = 0;
					HEX3Atmp_403342 = 0;
					nimln(1537, "ast.nim");
					LOC57 = 0;
					LOC57 = len_192097(n);
					HEX3Atmp_403342 = subInt(LOC57, 1);
					nimln(1598, "system.nim");
					res_403344 = ((NI) 0);
					{
						nimln(1599, "system.nim");
						while (1) {
							Ttype191849* LOC60;
							NI TMP7997;
							if (!(res_403344 <= HEX3Atmp_403342)) goto LA59;
							nimln(1600, "system.nim");
							i_403340 = res_403344;
							nimln(1537, "ast.nim");
							if (((TMP7979[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7980));
							if ((NU)(i_403340) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
							m_403265 = (*n).kindU.S6.sons->data[i_403340];
							nimln(66, "semmacrosanity.nim");
							LOC60 = 0;
							LOC60 = elemtype_221522(x);
							annotatetype_403134(m_403265, LOC60);
							nimln(1619, "system.nim");
							TMP7997 = addInt(res_403344, ((NI) 1));
							res_403344 = (NI)(TMP7997);
						} LA59: ;
					}
				}
			}
		}
		goto LA51;
		LA53: ;
		{
			nimln(68, "semmacrosanity.nim");
			globalerror_165145((*n).info, ((NimStringDesc*) &TMP7998));
		}
		LA51: ;
	}
	break;
	case ((NU8) 16) ... ((NU8) 19):
	{
		nimln(70, "semmacrosanity.nim");
		{
			if (!((IL64(1030792151040) &(IL64(1)<<(((*x).kind)&IL64(63))))!=0)) goto LA65;
			nimln(71, "semmacrosanity.nim");
			asgnRefNoCycle((void**) (&(*n).typ), t);
		}
		goto LA63;
		LA65: ;
		{
			nimln(73, "semmacrosanity.nim");
			globalerror_165145((*n).info, ((NimStringDesc*) &TMP7999));
		}
		LA63: ;
	}
	break;
	case ((NU8) 5) ... ((NU8) 15):
	{
		nimln(75, "semmacrosanity.nim");
		{
			if (!((IL64(35182224621574) &(IL64(1)<<(((*x).kind)&IL64(63))))!=0)) goto LA71;
			nimln(76, "semmacrosanity.nim");
			asgnRefNoCycle((void**) (&(*n).typ), t);
		}
		goto LA69;
		LA71: ;
		{
			nimln(78, "semmacrosanity.nim");
			globalerror_165145((*n).info, ((NimStringDesc*) &TMP8000));
		}
		LA69: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		nimln(80, "semmacrosanity.nim");
		{
			if (!((805306368 &(IL64(1)<<(((*x).kind)&IL64(63))))!=0)) goto LA77;
			nimln(81, "semmacrosanity.nim");
			asgnRefNoCycle((void**) (&(*n).typ), t);
		}
		goto LA75;
		LA77: ;
		{
			nimln(83, "semmacrosanity.nim");
			globalerror_165145((*n).info, ((NimStringDesc*) &TMP8001));
		}
		LA75: ;
	}
	break;
	case ((NU8) 23):
	{
		nimln(85, "semmacrosanity.nim");
		{
			if (!((IL64(1125900835880960) &(IL64(1)<<(((*x).kind)&IL64(63))))!=0)) goto LA83;
			nimln(86, "semmacrosanity.nim");
			asgnRefNoCycle((void**) (&(*n).typ), t);
		}
		goto LA81;
		LA83: ;
		{
			nimln(88, "semmacrosanity.nim");
			globalerror_165145((*n).info, ((NimStringDesc*) &TMP8002));
		}
		LA81: ;
	}
	break;
	default:
	{
	}
	break;
	}
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, compiler_semmacrosanityInit)(void) {
	nimfr("semmacrosanity", "semmacrosanity.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_semmacrosanityDatInit)(void) {
}

