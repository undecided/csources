/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode189813 Tnode189813;
typedef struct Ttype189849 Ttype189849;
typedef struct Tlineinfo161338 Tlineinfo161338;
typedef struct Tsym189843 Tsym189843;
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
typedef struct TY13606 TY13606;
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
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct TY189933 TY189933;
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
struct  Tident165021  {
  Tidobj165015 Sup;
NimStringDesc* s;
Tident165021* next;
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
struct TY13606 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
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
N_NIMCALL(NimStringDesc*, renderplainsymbolname_336013)(Tnode189813* n);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(NI, len_190097)(Tnode189813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(Tnode189813*, HEX5BHEX5D_190244)(Tnode189813* n, NI i);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, renderdefinitionname_211154)(Tsym189843* s, NIM_BOOL noquotes);
N_NIMCALL(void, internalerror_163199)(Tlineinfo161338 info, NimStringDesc* errmsg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_82929, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, failedassertimpl_87017)(NimStringDesc* msg);
N_NIMCALL(NimStringDesc*, rendertype_336224)(Tnode189813* n);
N_NIMCALL(NimStringDesc*, typetostring_219032)(Ttype189849* typ, NU8 prefer);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, renderparamtypes_338275)(TY13606** found, Tnode189813* n);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr);
static N_INLINE(void, rtladdzct_51804)(Tcell46747* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46763* s, Tcell46747* c);
N_NIMCALL(NimStringDesc*, renderparamtypes_338658)(Tnode189813* n, NimStringDesc* sep);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, nsuJoinSep)(NimStringDesc** a, NI aLen0, NimStringDesc* sep);
STRING_LITERAL(TMP6603, "", 0);
static NIM_CONST TY190031 TMP6604 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP6605, "sons", 4);
static NIM_CONST TY190031 TMP6607 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP6608, "ident", 5);
STRING_LITERAL(TMP6609, "*", 1);
static NIM_CONST TY190031 TMP6610 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP6611, "sym", 3);
STRING_LITERAL(TMP6612, "renderPlainSymbolName() with ", 29);
STRING_LITERAL(TMP6613, "not isNil(result) ", 18);
STRING_LITERAL(TMP6614, "len(n) == 1 ", 12);
STRING_LITERAL(TMP6615, "ref.", 4);
STRING_LITERAL(TMP6616, "ptr.", 4);
STRING_LITERAL(TMP6617, "1 < len(n) ", 11);
STRING_LITERAL(TMP6618, "params.kind == nkFormalParams ", 30);
STRING_LITERAL(TMP6619, "0 < len(params) ", 16);
STRING_LITERAL(TMP6620, "proc(", 5);
STRING_LITERAL(TMP6622, "3 <= len(n) ", 12);
STRING_LITERAL(TMP6624, "[](n, i).kind == nkIdent ", 25);
STRING_LITERAL(TMP6626, "tuple[", 6);
STRING_LITERAL(TMP6628, "2 <= len(n) ", 12);
STRING_LITERAL(TMP6632, "0 < typePos ", 12);
STRING_LITERAL(TMP6635, "[](n, i).kind == nkIdent or [](n, i).kind == nkAccQuoted ", 57);
STRING_LITERAL(TMP6637, "renderParamTypes(found,n) with ", 31);
extern TFrame* frameptr_17042;
extern TNimType NTI189029; /* TNodeKind */
extern Tgcheap48616 gch_48644;
extern TNimType NTI13606; /* seq[string] */

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

static N_INLINE(NI, len_190097)(Tnode189813* n) {
	NI result;
	nimfr("len", "ast.nim")
	result = 0;
	nimln(934, "ast.nim");
	{
		if (((TMP6604[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6605));
		if (!(*n).kindU.S6.sons == 0) goto LA3;
		result = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		nimln(935, "ast.nim");
		if (((TMP6604[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6605));
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

static N_INLINE(Tnode189813*, HEX5BHEX5D_190244)(Tnode189813* n, NI i) {
	Tnode189813* result;
	nimfr("[]", "ast.nim")
	result = 0;
	nimln(948, "ast.nim");
	if (((TMP6604[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6605));
	if ((NU)(i) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
	result = (*n).kindU.S6.sons->data[i];
	popFrame();
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

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, renderplainsymbolname_336013)(Tnode189813* n) {
	NimStringDesc* result;
	nimfr("renderPlainSymbolName", "typesrenderer.nim")
{	result = 0;
	nimln(20, "typesrenderer.nim");
	result = copyString(((NimStringDesc*) &TMP6603));
	nimln(21, "typesrenderer.nim");
	switch ((*n).kind) {
	case ((NU8) 31):
	{
		{
			NI i_336036;
			NI HEX3Atmp_336202;
			NI LOC3;
			NI res_336205;
			i_336036 = 0;
			HEX3Atmp_336202 = 0;
			nimln(23, "typesrenderer.nim");
			LOC3 = 0;
			LOC3 = len_190097(n);
			HEX3Atmp_336202 = subInt(LOC3, 1);
			nimln(1598, "system.nim");
			res_336205 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					NI LOC6;
					Tnode189813* LOC7;
					NI TMP6606;
					if (!(res_336205 <= HEX3Atmp_336202)) goto LA5;
					nimln(1600, "system.nim");
					i_336036 = res_336205;
					nimln(24, "typesrenderer.nim");
					LOC6 = 0;
					LOC6 = len_190097(n);
					LOC7 = 0;
					LOC7 = HEX5BHEX5D_190244(n, subInt(LOC6, 1));
					result = renderplainsymbolname_336013(LOC7);
					nimln(25, "typesrenderer.nim");
					{
						if (!(((NI) 0) < (result ? result->Sup.len : 0))) goto LA10;
						nimln(26, "typesrenderer.nim");
						goto BeforeRet;
					}
					LA10: ;
					nimln(1619, "system.nim");
					TMP6606 = addInt(res_336205, ((NI) 1));
					res_336205 = (NI)(TMP6606);
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 2):
	{
		nimln(28, "typesrenderer.nim");
		{
			if (!(((TMP6607[(*n).kind/8] &(1<<((*n).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP6608));
			if (!!(eqStrings((*(*n).kindU.S5.ident).s, ((NimStringDesc*) &TMP6609)))) goto LA15;
			nimln(29, "typesrenderer.nim");
			if (!(((TMP6607[(*n).kind/8] &(1<<((*n).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP6608));
			result = copyString((*(*n).kindU.S5.ident).s);
		}
		LA15: ;
	}
	break;
	case ((NU8) 3):
	{
		nimln(31, "typesrenderer.nim");
		if (!(((TMP6610[(*n).kind/8] &(1<<((*n).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP6611));
		result = renderdefinitionname_211154((*n).kindU.S4.sym, NIM_TRUE);
	}
	break;
	case ((NU8) 43):
	{
		Tnode189813* LOC19;
		nimln(33, "typesrenderer.nim");
		LOC19 = 0;
		LOC19 = HEX5BHEX5D_190244(n, ((NI) 0));
		result = renderplainsymbolname_336013(LOC19);
	}
	break;
	case ((NU8) 53):
	{
		NI LOC21;
		Tnode189813* LOC22;
		nimln(35, "typesrenderer.nim");
		LOC21 = 0;
		LOC21 = len_190097(n);
		LOC22 = 0;
		LOC22 = HEX5BHEX5D_190244(n, subInt(LOC21, 1));
		result = renderplainsymbolname_336013(LOC22);
	}
	break;
	default:
	{
		NimStringDesc* LOC24;
		nimln(37, "typesrenderer.nim");
		LOC24 = 0;
		LOC24 = rawNewString(reprEnum((*n).kind, (&NTI189029))->Sup.len + 29);
appendString(LOC24, ((NimStringDesc*) &TMP6612));
appendString(LOC24, reprEnum((*n).kind, (&NTI189029)));
		internalerror_163199((*n).info, LOC24);
	}
	break;
	}
	nimln(38, "typesrenderer.nim");
	{
		if (!!(!(result == 0))) goto LA27;
		failedassertimpl_87017(((NimStringDesc*) &TMP6613));
	}
	LA27: ;
	}BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(NimStringDesc*, rendertype_336224)(Tnode189813* n) {
	NimStringDesc* result;
	nimfr("renderType", "typesrenderer.nim")
	result = 0;
	nimln(42, "typesrenderer.nim");
	switch ((*n).kind) {
	case ((NU8) 2):
	{
		nimln(43, "typesrenderer.nim");
		if (!(((TMP6607[(*n).kind/8] &(1<<((*n).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP6608));
		result = copyString((*(*n).kindU.S5.ident).s);
	}
	break;
	case ((NU8) 3):
	{
		nimln(44, "typesrenderer.nim");
		if (!(((TMP6610[(*n).kind/8] &(1<<((*n).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP6611));
		result = typetostring_219032((*(*n).kindU.S4.sym).typ, ((NU8) 0));
	}
	break;
	case ((NU8) 143):
	{
		Tnode189813* LOC9;
		nimln(46, "typesrenderer.nim");
		{
			NI LOC6;
			LOC6 = 0;
			LOC6 = len_190097(n);
			if (!!((LOC6 == ((NI) 1)))) goto LA7;
			failedassertimpl_87017(((NimStringDesc*) &TMP6614));
		}
		LA7: ;
		nimln(47, "typesrenderer.nim");
		LOC9 = 0;
		LOC9 = HEX5BHEX5D_190244(n, ((NI) 0));
		result = rendertype_336224(LOC9);
	}
	break;
	case ((NU8) 141):
	{
		NimStringDesc* LOC16;
		Tnode189813* LOC17;
		NimStringDesc* LOC18;
		nimln(49, "typesrenderer.nim");
		{
			NI LOC13;
			LOC13 = 0;
			LOC13 = len_190097(n);
			if (!!((LOC13 == ((NI) 1)))) goto LA14;
			failedassertimpl_87017(((NimStringDesc*) &TMP6614));
		}
		LA14: ;
		nimln(50, "typesrenderer.nim");
		LOC16 = 0;
		LOC17 = 0;
		LOC17 = HEX5BHEX5D_190244(n, ((NI) 0));
		LOC18 = 0;
		LOC18 = rendertype_336224(LOC17);
		LOC16 = rawNewString(LOC18->Sup.len + 4);
appendString(LOC16, ((NimStringDesc*) &TMP6615));
appendString(LOC16, LOC18);
		result = LOC16;
	}
	break;
	case ((NU8) 142):
	{
		NimStringDesc* LOC25;
		Tnode189813* LOC26;
		NimStringDesc* LOC27;
		nimln(52, "typesrenderer.nim");
		{
			NI LOC22;
			LOC22 = 0;
			LOC22 = len_190097(n);
			if (!!((LOC22 == ((NI) 1)))) goto LA23;
			failedassertimpl_87017(((NimStringDesc*) &TMP6614));
		}
		LA23: ;
		nimln(53, "typesrenderer.nim");
		LOC25 = 0;
		LOC26 = 0;
		LOC26 = HEX5BHEX5D_190244(n, ((NI) 0));
		LOC27 = 0;
		LOC27 = rendertype_336224(LOC26);
		LOC25 = rawNewString(LOC27->Sup.len + 4);
appendString(LOC25, ((NimStringDesc*) &TMP6616));
appendString(LOC25, LOC27);
		result = LOC25;
	}
	break;
	case ((NU8) 147):
	{
		Tnode189813* params;
		nimln(55, "typesrenderer.nim");
		{
			NI LOC31;
			LOC31 = 0;
			LOC31 = len_190097(n);
			if (!!((((NI) 1) < LOC31))) goto LA32;
			failedassertimpl_87017(((NimStringDesc*) &TMP6617));
		}
		LA32: ;
		nimln(56, "typesrenderer.nim");
		params = HEX5BHEX5D_190244(n, ((NI) 0));
		nimln(57, "typesrenderer.nim");
		{
			if (!!(((*params).kind == ((NU8) 76)))) goto LA36;
			failedassertimpl_87017(((NimStringDesc*) &TMP6618));
		}
		LA36: ;
		nimln(58, "typesrenderer.nim");
		{
			NI LOC40;
			LOC40 = 0;
			LOC40 = len_190097(params);
			if (!!((((NI) 0) < LOC40))) goto LA41;
			failedassertimpl_87017(((NimStringDesc*) &TMP6619));
		}
		LA41: ;
		nimln(59, "typesrenderer.nim");
		result = copyString(((NimStringDesc*) &TMP6620));
		{
			NI i_337419;
			NI HEX3Atmp_338202;
			NI LOC44;
			NI res_338205;
			i_337419 = 0;
			HEX3Atmp_338202 = 0;
			nimln(60, "typesrenderer.nim");
			LOC44 = 0;
			LOC44 = len_190097(params);
			HEX3Atmp_338202 = subInt(LOC44, 1);
			nimln(1598, "system.nim");
			res_338205 = ((NI) 1);
			{
				nimln(1599, "system.nim");
				while (1) {
					NimStringDesc* LOC47;
					Tnode189813* LOC48;
					NimStringDesc* LOC49;
					NI TMP6621;
					if (!(res_338205 <= HEX3Atmp_338202)) goto LA46;
					nimln(1600, "system.nim");
					i_337419 = res_338205;
					nimln(60, "typesrenderer.nim");
					LOC47 = 0;
					LOC48 = 0;
					LOC48 = HEX5BHEX5D_190244(params, i_337419);
					LOC49 = 0;
					LOC49 = rendertype_336224(LOC48);
					LOC47 = rawNewString(LOC49->Sup.len + 1);
appendString(LOC47, LOC49);
appendChar(LOC47, 44);
					result = resizeString(result, LOC47->Sup.len + 0);
appendString(result, LOC47);
					nimln(1619, "system.nim");
					TMP6621 = addInt(res_338205, ((NI) 1));
					res_338205 = (NI)(TMP6621);
				} LA46: ;
			}
		}
		nimln(61, "typesrenderer.nim");
		if ((NU)(subInt((result ? result->Sup.len : 0), 1)) > (NU)(result->Sup.len)) raiseIndexError();
		result->data[subInt((result ? result->Sup.len : 0), 1)] = 41;
	}
	break;
	case ((NU8) 35):
	{
		NI typepos;
		NI LOC56;
		NI TMP6623;
		NimStringDesc* typestr;
		Tnode189813* LOC57;
		nimln(63, "typesrenderer.nim");
		{
			NI LOC53;
			LOC53 = 0;
			LOC53 = len_190097(n);
			if (!!((((NI) 3) <= LOC53))) goto LA54;
			failedassertimpl_87017(((NimStringDesc*) &TMP6622));
		}
		LA54: ;
		nimln(64, "typesrenderer.nim");
		LOC56 = 0;
		LOC56 = len_190097(n);
		TMP6623 = subInt(LOC56, ((NI) 2));
		typepos = (NI)(TMP6623);
		nimln(65, "typesrenderer.nim");
		LOC57 = 0;
		LOC57 = HEX5BHEX5D_190244(n, typepos);
		typestr = rendertype_336224(LOC57);
		nimln(66, "typesrenderer.nim");
		result = copyString(typestr);
		{
			NI i_337621;
			NI HEX3Atmp_338210;
			NI res_338213;
			i_337621 = 0;
			HEX3Atmp_338210 = 0;
			nimln(67, "typesrenderer.nim");
			HEX3Atmp_338210 = subInt(typepos, 1);
			nimln(1598, "system.nim");
			res_338213 = ((NI) 1);
			{
				nimln(1599, "system.nim");
				while (1) {
					NimStringDesc* LOC66;
					NI TMP6625;
					if (!(res_338213 <= HEX3Atmp_338210)) goto LA60;
					nimln(1600, "system.nim");
					i_337621 = res_338213;
					nimln(68, "typesrenderer.nim");
					{
						Tnode189813* LOC63;
						LOC63 = 0;
						LOC63 = HEX5BHEX5D_190244(n, i_337621);
						if (!!(((*LOC63).kind == ((NU8) 2)))) goto LA64;
						failedassertimpl_87017(((NimStringDesc*) &TMP6624));
					}
					LA64: ;
					nimln(69, "typesrenderer.nim");
					LOC66 = 0;
					LOC66 = rawNewString(typestr->Sup.len + 1);
appendChar(LOC66, 44);
appendString(LOC66, typestr);
					result = resizeString(result, LOC66->Sup.len + 0);
appendString(result, LOC66);
					nimln(1619, "system.nim");
					TMP6625 = addInt(res_338213, ((NI) 1));
					res_338213 = (NI)(TMP6625);
				} LA60: ;
			}
		}
	}
	break;
	case ((NU8) 134):
	{
		nimln(71, "typesrenderer.nim");
		result = copyString(((NimStringDesc*) &TMP6626));
		{
			NI i_337819;
			NI HEX3Atmp_338218;
			NI LOC69;
			NI res_338221;
			i_337819 = 0;
			HEX3Atmp_338218 = 0;
			nimln(72, "typesrenderer.nim");
			LOC69 = 0;
			LOC69 = len_190097(n);
			HEX3Atmp_338218 = subInt(LOC69, 1);
			nimln(1598, "system.nim");
			res_338221 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					NimStringDesc* LOC72;
					Tnode189813* LOC73;
					NimStringDesc* LOC74;
					NI TMP6627;
					if (!(res_338221 <= HEX3Atmp_338218)) goto LA71;
					nimln(1600, "system.nim");
					i_337819 = res_338221;
					nimln(72, "typesrenderer.nim");
					LOC72 = 0;
					LOC73 = 0;
					LOC73 = HEX5BHEX5D_190244(n, i_337819);
					LOC74 = 0;
					LOC74 = rendertype_336224(LOC73);
					LOC72 = rawNewString(LOC74->Sup.len + 1);
appendString(LOC72, LOC74);
appendChar(LOC72, 44);
					result = resizeString(result, LOC72->Sup.len + 0);
appendString(result, LOC72);
					nimln(1619, "system.nim");
					TMP6627 = addInt(res_338221, ((NI) 1));
					res_338221 = (NI)(TMP6627);
				} LA71: ;
			}
		}
		nimln(73, "typesrenderer.nim");
		if ((NU)(subInt((result ? result->Sup.len : 0), 1)) > (NU)(result->Sup.len)) raiseIndexError();
		result->data[subInt((result ? result->Sup.len : 0), 1)] = 93;
	}
	break;
	case ((NU8) 42):
	{
		NimStringDesc* LOC81;
		Tnode189813* LOC82;
		NimStringDesc* LOC83;
		nimln(75, "typesrenderer.nim");
		{
			NI LOC78;
			LOC78 = 0;
			LOC78 = len_190097(n);
			if (!!((((NI) 2) <= LOC78))) goto LA79;
			failedassertimpl_87017(((NimStringDesc*) &TMP6628));
		}
		LA79: ;
		nimln(76, "typesrenderer.nim");
		LOC81 = 0;
		LOC82 = 0;
		LOC82 = HEX5BHEX5D_190244(n, ((NI) 0));
		LOC83 = 0;
		LOC83 = rendertype_336224(LOC82);
		LOC81 = rawNewString(LOC83->Sup.len + 1);
appendString(LOC81, LOC83);
appendChar(LOC81, 91);
		result = LOC81;
		{
			NI i_338019;
			NI HEX3Atmp_338226;
			NI LOC85;
			NI res_338229;
			i_338019 = 0;
			HEX3Atmp_338226 = 0;
			nimln(77, "typesrenderer.nim");
			LOC85 = 0;
			LOC85 = len_190097(n);
			HEX3Atmp_338226 = subInt(LOC85, 1);
			nimln(1598, "system.nim");
			res_338229 = ((NI) 1);
			{
				nimln(1599, "system.nim");
				while (1) {
					NimStringDesc* LOC88;
					Tnode189813* LOC89;
					NimStringDesc* LOC90;
					NI TMP6629;
					if (!(res_338229 <= HEX3Atmp_338226)) goto LA87;
					nimln(1600, "system.nim");
					i_338019 = res_338229;
					nimln(77, "typesrenderer.nim");
					LOC88 = 0;
					LOC89 = 0;
					LOC89 = HEX5BHEX5D_190244(n, i_338019);
					LOC90 = 0;
					LOC90 = rendertype_336224(LOC89);
					LOC88 = rawNewString(LOC90->Sup.len + 1);
appendString(LOC88, LOC90);
appendChar(LOC88, 44);
					result = resizeString(result, LOC88->Sup.len + 0);
appendString(result, LOC88);
					nimln(1619, "system.nim");
					TMP6629 = addInt(res_338229, ((NI) 1));
					res_338229 = (NI)(TMP6629);
				} LA87: ;
			}
		}
		nimln(78, "typesrenderer.nim");
		if ((NU)(subInt((result ? result->Sup.len : 0), 1)) > (NU)(result->Sup.len)) raiseIndexError();
		result->data[subInt((result ? result->Sup.len : 0), 1)] = 93;
	}
	break;
	default:
	{
		nimln(79, "typesrenderer.nim");
		result = copyString(((NimStringDesc*) &TMP6603));
	}
	break;
	}
	nimln(80, "typesrenderer.nim");
	{
		if (!!(!(result == 0))) goto LA94;
		failedassertimpl_87017(((NimStringDesc*) &TMP6613));
	}
	LA94: ;
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

N_NIMCALL(void, renderparamtypes_338275)(TY13606** found, Tnode189813* n) {
	nimfr("renderParamTypes", "typesrenderer.nim")
{	nimln(89, "typesrenderer.nim");
	switch ((*n).kind) {
	case ((NU8) 76):
	{
		{
			NI i_338299;
			NI HEX3Atmp_338619;
			NI LOC3;
			NI res_338622;
			i_338299 = 0;
			HEX3Atmp_338619 = 0;
			nimln(91, "typesrenderer.nim");
			LOC3 = 0;
			LOC3 = len_190097(n);
			HEX3Atmp_338619 = subInt(LOC3, 1);
			nimln(1598, "system.nim");
			res_338622 = ((NI) 1);
			{
				nimln(1599, "system.nim");
				while (1) {
					Tnode189813* LOC6;
					NI TMP6630;
					if (!(res_338622 <= HEX3Atmp_338619)) goto LA5;
					nimln(1600, "system.nim");
					i_338299 = res_338622;
					nimln(91, "typesrenderer.nim");
					LOC6 = 0;
					LOC6 = HEX5BHEX5D_190244(n, i_338299);
					renderparamtypes_338275(found, LOC6);
					nimln(1619, "system.nim");
					TMP6630 = addInt(res_338622, ((NI) 1));
					res_338622 = (NI)(TMP6630);
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 35):
	{
		NI typepos;
		NI LOC8;
		NI TMP6631;
		NimStringDesc* typestr;
		Tnode189813* LOC13;
		nimln(94, "typesrenderer.nim");
		LOC8 = 0;
		LOC8 = len_190097(n);
		TMP6631 = subInt(LOC8, ((NI) 2));
		typepos = (NI)(TMP6631);
		nimln(95, "typesrenderer.nim");
		{
			if (!!((((NI) 0) < typepos))) goto LA11;
			failedassertimpl_87017(((NimStringDesc*) &TMP6632));
		}
		LA11: ;
		nimln(96, "typesrenderer.nim");
		LOC13 = 0;
		LOC13 = HEX5BHEX5D_190244(n, typepos);
		typestr = rendertype_336224(LOC13);
		nimln(97, "typesrenderer.nim");
		{
			NIM_BOOL LOC16;
			NI TMP6633;
			Tnode189813* LOC18;
			Ttype189849* typ;
			NI TMP6634;
			Tnode189813* LOC21;
			LOC16 = 0;
			LOC16 = ((typestr ? typestr->Sup.len : 0) < ((NI) 1));
			if (!(LOC16)) goto LA17;
			TMP6633 = addInt(typepos, ((NI) 1));
			LOC18 = 0;
			LOC18 = HEX5BHEX5D_190244(n, (NI)(TMP6633));
			LOC16 = !(((*LOC18).kind == ((NU8) 1)));
			LA17: ;
			if (!LOC16) goto LA19;
			nimln(99, "typesrenderer.nim");
			TMP6634 = addInt(typepos, ((NI) 1));
			LOC21 = 0;
			LOC21 = HEX5BHEX5D_190244(n, (NI)(TMP6634));
			typ = (*LOC21).typ;
			nimln(100, "typesrenderer.nim");
			{
				if (!!(typ == 0)) goto LA24;
				typestr = typetostring_219032(typ, ((NU8) 2));
			}
			LA24: ;
			nimln(101, "typesrenderer.nim");
			{
				if (!((typestr ? typestr->Sup.len : 0) < ((NI) 1))) goto LA28;
				goto BeforeRet;
			}
			LA28: ;
		}
		LA19: ;
		{
			NI i_338438;
			NI HEX3Atmp_338627;
			NI res_338630;
			i_338438 = 0;
			HEX3Atmp_338627 = 0;
			nimln(102, "typesrenderer.nim");
			HEX3Atmp_338627 = subInt(typepos, 1);
			nimln(1598, "system.nim");
			res_338630 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					NimStringDesc* LOC41;
					NI TMP6636;
					if (!(res_338630 <= HEX3Atmp_338627)) goto LA32;
					nimln(1600, "system.nim");
					i_338438 = res_338630;
					nimln(103, "typesrenderer.nim");
					{
						NIM_BOOL LOC35;
						Tnode189813* LOC36;
						Tnode189813* LOC38;
						LOC35 = 0;
						LOC36 = 0;
						LOC36 = HEX5BHEX5D_190244(n, i_338438);
						LOC35 = ((*LOC36).kind == ((NU8) 2));
						if (LOC35) goto LA37;
						LOC38 = 0;
						LOC38 = HEX5BHEX5D_190244(n, i_338438);
						LOC35 = ((*LOC38).kind == ((NU8) 53));
						LA37: ;
						if (!!(LOC35)) goto LA39;
						failedassertimpl_87017(((NimStringDesc*) &TMP6635));
					}
					LA39: ;
					nimln(104, "typesrenderer.nim");
					(*found) = (TY13606*) incrSeq(&((*found))->Sup, sizeof(NimStringDesc*));
					LOC41 = 0;
					LOC41 = (*found)->data[(*found)->Sup.len-1]; (*found)->data[(*found)->Sup.len-1] = copyStringRC1(typestr);
					if (LOC41) nimGCunrefNoCycle(LOC41);
					nimln(1619, "system.nim");
					TMP6636 = addInt(res_338630, ((NI) 1));
					res_338630 = (NI)(TMP6636);
				} LA32: ;
			}
		}
	}
	break;
	default:
	{
		NimStringDesc* LOC43;
		nimln(106, "typesrenderer.nim");
		LOC43 = 0;
		LOC43 = rawNewString(reprEnum((*n).kind, (&NTI189029))->Sup.len + 31);
appendString(LOC43, ((NimStringDesc*) &TMP6637));
appendString(LOC43, reprEnum((*n).kind, (&NTI189029)));
		internalerror_163199((*n).info, LOC43);
	}
	break;
	}
	}BeforeRet: ;
	popFrame();
}

N_NIMCALL(NimStringDesc*, renderparamtypes_338658)(Tnode189813* n, NimStringDesc* sep) {
	NimStringDesc* result;
	TY13606* found;
	nimfr("renderParamTypes", "typesrenderer.nim")
	result = 0;
	nimln(115, "typesrenderer.nim");
	result = copyString(((NimStringDesc*) &TMP6603));
	nimln(116, "typesrenderer.nim");
	found = (TY13606*) newSeq((&NTI13606), 0);
	nimln(117, "typesrenderer.nim");
	renderparamtypes_338275((&found), n);
	nimln(118, "typesrenderer.nim");
	{
		if (!(((NI) 0) < (found ? found->Sup.len : 0))) goto LA3;
		nimln(119, "typesrenderer.nim");
		result = nsuJoinSep(found->data, found->Sup.len, sep);
	}
	LA3: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_typesrendererInit)(void) {
	nimfr("typesrenderer", "typesrenderer.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_typesrendererDatInit)(void) {
}

