/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Tnode191813 Tnode191813;
typedef struct Ttype191849 Ttype191849;
typedef struct Intset188056 Intset188056;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym191843 Tsym191843;
typedef struct Tident167021 Tident167021;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Tidobj167015 Tidobj167015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tlib191831 Tlib191831;
typedef struct Ttrunk188052 Ttrunk188052;
typedef struct Ttrunkseq188054 Ttrunkseq188054;
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
struct  Intset188056  {
NI counter;
NI max;
Ttrunk188052* head;
Ttrunkseq188054* data;
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
struct  Tscope191837  {
NI depthlevel;
Tstrtable191817 symbols;
Tnodeseq191807* usingsyms;
Tscope191837* parent;
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
typedef NI TY27820[16];
struct  Ttrunk188052  {
Ttrunk188052* next;
NI key;
TY27820 bits;
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
struct Ttrunkseq188054 {
  TGenericSeq Sup;
  Ttrunk188052* data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NU8, ispartofaux_400029)(Tnode191813* n, Ttype191849* b, Intset188056* marker);
N_NIMCALL(NI, sonslen_194403)(Tnode191813* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, failedassertimpl_87017)(NimStringDesc* msg);
N_NIMCALL(Tnode191813*, lastson_194431)(Tnode191813* n);
N_NIMCALL(void, internalerror_165218)(NimStringDesc* errmsg);
N_NIMCALL(void, internalerror_165199)(Tlineinfo163338 info, NimStringDesc* errmsg);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NU8, ispartofaux_400020)(Ttype191849* a, Ttype191849* b, Intset188056* marker);
N_NIMCALL(NIM_BOOL, containsorincl_188898)(Intset188056* s, NI key);
N_NIMCALL(NIM_BOOL, comparetypes_228047)(Ttype191849* x, Ttype191849* y, NU8 cmp, NU8 flags);
N_NIMCALL(Ttype191849*, lastson_194442)(Ttype191849* n);
N_NIMCALL(NI, sonslen_194351)(Ttype191849* n);
N_NIMCALL(NU8, ispartof_400362)(Ttype191849* a, Ttype191849* b);
N_NIMCALL(void, initintset_188927)(Intset188056* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NU8, ispartof_400375)(Tnode191813* a, Tnode191813* b);
static N_INLINE(Tnode191813*, HEX5BHEX5D_192244)(Tnode191813* n, NI i);
static N_INLINE(NI, len_192097)(Tnode191813* n);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_220459)(Tnode191813* n);
N_NIMCALL(NIM_BOOL, samevalue_199324)(Tnode191813* a, Tnode191813* b);
static NIM_CONST TY192031 TMP7916 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP7917, "sons", 4);
STRING_LITERAL(TMP7919, "n.sons[0].kind == nkSym ", 24);
STRING_LITERAL(TMP7921, "isPartOfAux(record case branch)", 31);
static NIM_CONST TY192031 TMP7923 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP7924, "sym", 3);
STRING_LITERAL(TMP7925, "isPartOfAux()", 13);
NIM_CONST NU32 varkinds_400389 = 4384;
NIM_CONST TY192031 Ix0kinds_400508 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00,
0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY192031 Ix1kinds_400510 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY192031 Derefkinds_400512 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00,
0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
extern TFrame* frameptr_17042;

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

N_NIMCALL(NU8, ispartofaux_400029)(Tnode191813* n, Ttype191849* b, Intset188056* marker) {
	NU8 result;
	nimfr("isPartOfAux", "aliases.nim")
{	result = 0;
	nimln(22, "aliases.nim");
	result = ((NU8) 0);
	nimln(23, "aliases.nim");
	switch ((*n).kind) {
	case ((NU8) 138):
	{
		{
			NI i_400048;
			NI HEX3Atmp_400238;
			NI LOC3;
			NI TMP7915;
			NI res_400241;
			i_400048 = 0;
			HEX3Atmp_400238 = 0;
			nimln(25, "aliases.nim");
			LOC3 = 0;
			LOC3 = sonslen_194403(n);
			TMP7915 = subInt(LOC3, ((NI) 1));
			HEX3Atmp_400238 = (NI)(TMP7915);
			nimln(1598, "system.nim");
			res_400241 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					NI TMP7918;
					if (!(res_400241 <= HEX3Atmp_400238)) goto LA5;
					nimln(1600, "system.nim");
					i_400048 = res_400241;
					nimln(26, "aliases.nim");
					if (((TMP7916[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7917));
					if ((NU)(i_400048) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
					result = ispartofaux_400029((*n).kindU.S6.sons->data[i_400048], b, marker);
					nimln(27, "aliases.nim");
					{
						if (!(result == ((NU8) 2))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					nimln(1614, "system.nim");
					TMP7918 = addInt(res_400241, ((NI) 1));
					res_400241 = (NI)(TMP7918);
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 139):
	{
		nimln(29, "aliases.nim");
		{
			if (((TMP7916[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7917));
			if ((NU)(((NI) 0)) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
			if (!!(((*(*n).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 3)))) goto LA13;
			failedassertimpl_87017(((NimStringDesc*) &TMP7919));
		}
		LA13: ;
		nimln(30, "aliases.nim");
		if (((TMP7916[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7917));
		if ((NU)(((NI) 0)) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
		result = ispartofaux_400029((*n).kindU.S6.sons->data[((NI) 0)], b, marker);
		nimln(31, "aliases.nim");
		{
			if (!(result == ((NU8) 2))) goto LA17;
			goto BeforeRet;
		}
		LA17: ;
		{
			NI i_400223;
			NI HEX3Atmp_400246;
			NI LOC20;
			NI TMP7920;
			NI res_400249;
			i_400223 = 0;
			HEX3Atmp_400246 = 0;
			nimln(32, "aliases.nim");
			LOC20 = 0;
			LOC20 = sonslen_194403(n);
			TMP7920 = subInt(LOC20, ((NI) 1));
			HEX3Atmp_400246 = (NI)(TMP7920);
			nimln(1598, "system.nim");
			res_400249 = ((NI) 1);
			{
				nimln(1599, "system.nim");
				while (1) {
					NI TMP7922;
					if (!(res_400249 <= HEX3Atmp_400246)) goto LA22;
					nimln(1600, "system.nim");
					i_400223 = res_400249;
					nimln(33, "aliases.nim");
					if (((TMP7916[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7917));
					if ((NU)(i_400223) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
					switch ((*(*n).kindU.S6.sons->data[i_400223]).kind) {
					case ((NU8) 85):
					case ((NU8) 88):
					{
						Tnode191813* LOC24;
						nimln(35, "aliases.nim");
						if (((TMP7916[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7917));
						if ((NU)(i_400223) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
						LOC24 = 0;
						LOC24 = lastson_194431((*n).kindU.S6.sons->data[i_400223]);
						result = ispartofaux_400029(LOC24, b, marker);
						nimln(36, "aliases.nim");
						{
							if (!(result == ((NU8) 2))) goto LA27;
							goto BeforeRet;
						}
						LA27: ;
					}
					break;
					default:
					{
						nimln(37, "aliases.nim");
						internalerror_165218(((NimStringDesc*) &TMP7921));
					}
					break;
					}
					nimln(1614, "system.nim");
					TMP7922 = addInt(res_400249, ((NI) 1));
					res_400249 = (NI)(TMP7922);
				} LA22: ;
			}
		}
	}
	break;
	case ((NU8) 3):
	{
		nimln(39, "aliases.nim");
		if (!(((TMP7923[(*n).kind/8] &(1<<((*n).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP7924));
		result = ispartofaux_400020((*(*n).kindU.S4.sym).typ, b, marker);
	}
	break;
	default:
	{
		nimln(40, "aliases.nim");
		internalerror_165199((*n).info, ((NimStringDesc*) &TMP7925));
	}
	break;
	}
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NU8, ispartofaux_400020)(Ttype191849* a, Ttype191849* b, Intset188056* marker) {
	NU8 result;
	nimfr("isPartOfAux", "aliases.nim")
{	result = 0;
	nimln(43, "aliases.nim");
	result = ((NU8) 0);
	nimln(44, "aliases.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (a == NIM_NIL);
		if (LOC3) goto LA4;
		LOC3 = (b == NIM_NIL);
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	nimln(45, "aliases.nim");
	{
		NIM_BOOL LOC9;
		LOC9 = 0;
		LOC9 = containsorincl_188898(marker, (*a).Sup.id);
		if (!LOC9) goto LA10;
		goto BeforeRet;
	}
	LA10: ;
	nimln(46, "aliases.nim");
	{
		NIM_BOOL LOC14;
		LOC14 = 0;
		LOC14 = comparetypes_228047(a, b, ((NU8) 1), 0);
		if (!LOC14) goto LA15;
		result = ((NU8) 2);
		goto BeforeRet;
	}
	LA15: ;
	nimln(47, "aliases.nim");
	switch ((*a).kind) {
	case ((NU8) 17):
	{
		nimln(49, "aliases.nim");
		if ((NU)(((NI) 0)) >= (NU)((*a).sons->Sup.len)) raiseIndexError();
		result = ispartofaux_400020((*a).sons->data[((NI) 0)], b, marker);
		nimln(50, "aliases.nim");
		{
			if (!(result == ((NU8) 0))) goto LA20;
			result = ispartofaux_400029((*a).n, b, marker);
		}
		LA20: ;
	}
	break;
	case ((NU8) 11):
	case ((NU8) 13):
	{
		Ttype191849* LOC23;
		nimln(52, "aliases.nim");
		LOC23 = 0;
		LOC23 = lastson_194442(a);
		result = ispartofaux_400020(LOC23, b, marker);
	}
	break;
	case ((NU8) 16):
	case ((NU8) 4):
	case ((NU8) 19):
	case ((NU8) 18):
	{
		{
			NI i_400329;
			NI HEX3Atmp_400340;
			NI LOC26;
			NI TMP7926;
			NI res_400343;
			i_400329 = 0;
			HEX3Atmp_400340 = 0;
			nimln(54, "aliases.nim");
			LOC26 = 0;
			LOC26 = sonslen_194351(a);
			TMP7926 = subInt(LOC26, ((NI) 1));
			HEX3Atmp_400340 = (NI)(TMP7926);
			nimln(1598, "system.nim");
			res_400343 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					NI TMP7927;
					if (!(res_400343 <= HEX3Atmp_400340)) goto LA28;
					nimln(1600, "system.nim");
					i_400329 = res_400343;
					nimln(55, "aliases.nim");
					if ((NU)(i_400329) >= (NU)((*a).sons->Sup.len)) raiseIndexError();
					result = ispartofaux_400020((*a).sons->data[i_400329], b, marker);
					nimln(56, "aliases.nim");
					{
						if (!(result == ((NU8) 2))) goto LA31;
						goto BeforeRet;
					}
					LA31: ;
					nimln(1614, "system.nim");
					TMP7927 = addInt(res_400343, ((NI) 1));
					res_400343 = (NI)(TMP7927);
				} LA28: ;
			}
		}
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

N_NIMCALL(NU8, ispartof_400362)(Ttype191849* a, Ttype191849* b) {
	NU8 result;
	Intset188056 marker;
	nimfr("isPartOf", "aliases.nim")
	result = 0;
	memset((void*)(&marker), 0, sizeof(marker));
	nimln(61, "aliases.nim");
	chckNil((void*)(&marker));
	memset((void*)(&marker), 0, sizeof(marker));
	initintset_188927((&marker));
	nimln(63, "aliases.nim");
	result = ispartofaux_400020(b, a, (&marker));
	popFrame();
	return result;
}

static N_INLINE(Tnode191813*, HEX5BHEX5D_192244)(Tnode191813* n, NI i) {
	Tnode191813* result;
	nimfr("[]", "ast.nim")
	result = 0;
	nimln(948, "ast.nim");
	if (((TMP7916[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7917));
	if ((NU)(i) >= (NU)((*n).kindU.S6.sons->Sup.len)) raiseIndexError();
	result = (*n).kindU.S6.sons->data[i];
	popFrame();
	return result;
}

static N_INLINE(NI, len_192097)(Tnode191813* n) {
	NI result;
	nimfr("len", "ast.nim")
	result = 0;
	nimln(934, "ast.nim");
	{
		if (((TMP7916[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7917));
		if (!(*n).kindU.S6.sons == 0) goto LA3;
		result = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		nimln(935, "ast.nim");
		if (((TMP7916[(*n).kind/8] &(1<<((*n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7917));
		result = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NU8, ispartof_400375)(Tnode191813* a, Tnode191813* b) {
	NU8 result;
	nimfr("isPartOf", "aliases.nim")
	result = 0;
	nimln(94, "aliases.nim");
	{
		if (!((*a).kind == (*b).kind)) goto LA3;
		nimln(95, "aliases.nim");
		switch ((*a).kind) {
		case ((NU8) 3):
		{
			nimln(99, "aliases.nim");
			{
				if (!(((TMP7923[(*a).kind/8] &(1<<((*a).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP7924));
				if (!(((TMP7923[(*b).kind/8] &(1<<((*b).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP7924));
				if (!((*(*a).kindU.S4.sym).Sup.id == (*(*b).kindU.S4.sym).Sup.id)) goto LA8;
				result = ((NU8) 2);
			}
			goto LA6;
			LA8: ;
			{
				NIM_BOOL LOC11;
				nimln(100, "aliases.nim");
				LOC11 = 0;
				if (!(((TMP7923[(*a).kind/8] &(1<<((*a).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP7924));
				LOC11 = ((4384 &(1<<(((*(*a).kindU.S4.sym).kind)&31)))!=0);
				if (LOC11) goto LA12;
				if (!(((TMP7923[(*b).kind/8] &(1<<((*b).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP7924));
				LOC11 = ((4384 &(1<<(((*(*b).kindU.S4.sym).kind)&31)))!=0);
				LA12: ;
				if (!LOC11) goto LA13;
				nimln(103, "aliases.nim");
				result = ((NU8) 0);
			}
			goto LA6;
			LA13: ;
			{
				nimln(106, "aliases.nim");
				{
					NU8 LOC18;
					if (!(((TMP7923[(*a).kind/8] &(1<<((*a).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP7924));
					if (!(((TMP7923[(*b).kind/8] &(1<<((*b).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP7924));
					LOC18 = 0;
					LOC18 = ispartof_400362((*(*a).kindU.S4.sym).typ, (*(*b).kindU.S4.sym).typ);
					if (!!((LOC18 == ((NU8) 0)))) goto LA19;
					nimln(107, "aliases.nim");
					result = ((NU8) 1);
				}
				LA19: ;
			}
			LA6: ;
		}
		break;
		case ((NU8) 42):
		{
			Tnode191813* LOC22;
			Tnode191813* LOC23;
			nimln(109, "aliases.nim");
			LOC22 = 0;
			LOC22 = HEX5BHEX5D_192244(a, ((NI) 0));
			LOC23 = 0;
			LOC23 = HEX5BHEX5D_192244(b, ((NI) 0));
			result = ispartof_400375(LOC22, LOC23);
			nimln(110, "aliases.nim");
			{
				NIM_BOOL LOC26;
				NI LOC27;
				NI LOC29;
				LOC26 = 0;
				LOC27 = 0;
				LOC27 = len_192097(a);
				LOC26 = (((NI) 2) <= LOC27);
				if (!(LOC26)) goto LA28;
				LOC29 = 0;
				LOC29 = len_192097(b);
				LOC26 = (((NI) 2) <= LOC29);
				LA28: ;
				if (!LOC26) goto LA30;
				nimln(112, "aliases.nim");
				{
					NIM_BOOL LOC34;
					NIM_BOOL LOC35;
					Tnode191813* LOC37;
					Tnode191813* LOC39;
					Tnode191813* x;
					Tnode191813* y;
					LOC34 = 0;
					LOC35 = 0;
					LOC35 = (result == ((NU8) 2));
					if (!(LOC35)) goto LA36;
					LOC37 = 0;
					LOC37 = HEX5BHEX5D_192244(a, ((NI) 1));
					LOC35 = isdeepconstexpr_220459(LOC37);
					LA36: ;
					LOC34 = LOC35;
					if (!(LOC34)) goto LA38;
					LOC39 = 0;
					LOC39 = HEX5BHEX5D_192244(b, ((NI) 1));
					LOC34 = isdeepconstexpr_220459(LOC39);
					LA38: ;
					if (!LOC34) goto LA40;
					nimln(115, "aliases.nim");
					{
						Tnode191813* LOC44;
						Tnode191813* LOC47;
						LOC44 = 0;
						LOC44 = HEX5BHEX5D_192244(a, ((NI) 1));
						if (!((*LOC44).kind == ((NU8) 58))) goto LA45;
						LOC47 = 0;
						LOC47 = HEX5BHEX5D_192244(a, ((NI) 1));
						x = HEX5BHEX5D_192244(LOC47, ((NI) 1));
					}
					goto LA42;
					LA45: ;
					{
						x = HEX5BHEX5D_192244(a, ((NI) 1));
					}
					LA42: ;
					nimln(116, "aliases.nim");
					{
						Tnode191813* LOC51;
						Tnode191813* LOC54;
						LOC51 = 0;
						LOC51 = HEX5BHEX5D_192244(b, ((NI) 1));
						if (!((*LOC51).kind == ((NU8) 58))) goto LA52;
						LOC54 = 0;
						LOC54 = HEX5BHEX5D_192244(b, ((NI) 1));
						y = HEX5BHEX5D_192244(LOC54, ((NI) 1));
					}
					goto LA49;
					LA52: ;
					{
						y = HEX5BHEX5D_192244(b, ((NI) 1));
					}
					LA49: ;
					nimln(118, "aliases.nim");
					{
						NIM_BOOL LOC58;
						LOC58 = 0;
						LOC58 = samevalue_199324(x, y);
						if (!LOC58) goto LA59;
						result = ((NU8) 2);
					}
					goto LA56;
					LA59: ;
					{
						nimln(119, "aliases.nim");
						result = ((NU8) 0);
					}
					LA56: ;
				}
				LA40: ;
			}
			goto LA24;
			LA30: ;
			{
				nimln(123, "aliases.nim");
				{
					if (!!((result == ((NU8) 2)))) goto LA65;
					nimln(124, "aliases.nim");
					{
						NU8 LOC69;
						LOC69 = 0;
						LOC69 = ispartof_400362((*a).typ, (*b).typ);
						if (!!((LOC69 == ((NU8) 0)))) goto LA70;
						result = ((NU8) 1);
					}
					LA70: ;
				}
				LA65: ;
			}
			LA24: ;
		}
		break;
		case ((NU8) 45):
		{
			Tnode191813* LOC73;
			Tnode191813* LOC74;
			nimln(127, "aliases.nim");
			LOC73 = 0;
			LOC73 = HEX5BHEX5D_192244(a, ((NI) 0));
			LOC74 = 0;
			LOC74 = HEX5BHEX5D_192244(b, ((NI) 0));
			result = ispartof_400375(LOC73, LOC74);
			nimln(128, "aliases.nim");
			{
				if (!!((result == ((NU8) 0)))) goto LA77;
				nimln(130, "aliases.nim");
				{
					Tnode191813* LOC81;
					Tnode191813* LOC82;
					LOC81 = 0;
					LOC81 = HEX5BHEX5D_192244(a, ((NI) 1));
					if (!(((TMP7923[(*LOC81).kind/8] &(1<<((*LOC81).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP7924));
					LOC82 = 0;
					LOC82 = HEX5BHEX5D_192244(b, ((NI) 1));
					if (!(((TMP7923[(*LOC82).kind/8] &(1<<((*LOC82).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP7924));
					if (!!(((*(*LOC81).kindU.S4.sym).Sup.id == (*(*LOC82).kindU.S4.sym).Sup.id))) goto LA83;
					nimln(131, "aliases.nim");
					result = ((NU8) 0);
				}
				LA83: ;
			}
			LA77: ;
		}
		break;
		case ((NU8) 65):
		case ((NU8) 47):
		{
			Tnode191813* LOC86;
			Tnode191813* LOC87;
			nimln(134, "aliases.nim");
			LOC86 = 0;
			LOC86 = HEX5BHEX5D_192244(a, ((NI) 0));
			LOC87 = 0;
			LOC87 = HEX5BHEX5D_192244(b, ((NI) 0));
			result = ispartof_400375(LOC86, LOC87);
			nimln(136, "aliases.nim");
			{
				if (!!((result == ((NU8) 2)))) goto LA90;
				nimln(137, "aliases.nim");
				{
					NU8 LOC94;
					LOC94 = 0;
					LOC94 = ispartof_400362((*a).typ, (*b).typ);
					if (!!((LOC94 == ((NU8) 0)))) goto LA95;
					result = ((NU8) 1);
				}
				LA95: ;
			}
			LA90: ;
		}
		break;
		case ((NU8) 58):
		case ((NU8) 59):
		case ((NU8) 60):
		{
			Tnode191813* LOC98;
			Tnode191813* LOC99;
			nimln(140, "aliases.nim");
			LOC98 = 0;
			LOC98 = HEX5BHEX5D_192244(a, ((NI) 1));
			LOC99 = 0;
			LOC99 = HEX5BHEX5D_192244(b, ((NI) 1));
			result = ispartof_400375(LOC98, LOC99);
		}
		break;
		case ((NU8) 67):
		case ((NU8) 66):
		case ((NU8) 46):
		{
			Tnode191813* LOC101;
			Tnode191813* LOC102;
			nimln(142, "aliases.nim");
			LOC101 = 0;
			LOC101 = HEX5BHEX5D_192244(a, ((NI) 0));
			LOC102 = 0;
			LOC102 = HEX5BHEX5D_192244(b, ((NI) 0));
			result = ispartof_400375(LOC101, LOC102);
		}
		break;
		default:
		{
		}
		break;
		}
	}
	goto LA1;
	LA3: ;
	{
		nimln(152, "aliases.nim");
		switch ((*b).kind) {
		case ((NU8) 45):
		case ((NU8) 42):
		case ((NU8) 67):
		case ((NU8) 66):
		case ((NU8) 46):
		{
			Tnode191813* LOC106;
			nimln(155, "aliases.nim");
			LOC106 = 0;
			LOC106 = HEX5BHEX5D_192244(b, ((NI) 0));
			result = ispartof_400375(a, LOC106);
		}
		break;
		case ((NU8) 65):
		case ((NU8) 47):
		{
			nimln(159, "aliases.nim");
			{
				NU8 LOC110;
				Tnode191813* LOC113;
				LOC110 = 0;
				LOC110 = ispartof_400362((*a).typ, (*b).typ);
				if (!!((LOC110 == ((NU8) 0)))) goto LA111;
				nimln(160, "aliases.nim");
				LOC113 = 0;
				LOC113 = HEX5BHEX5D_192244(b, ((NI) 0));
				result = ispartof_400375(a, LOC113);
				nimln(161, "aliases.nim");
				{
					if (!(result == ((NU8) 0))) goto LA116;
					result = ((NU8) 1);
				}
				LA116: ;
			}
			LA111: ;
		}
		break;
		case ((NU8) 58):
		case ((NU8) 59):
		case ((NU8) 60):
		{
			Tnode191813* LOC119;
			nimln(165, "aliases.nim");
			LOC119 = 0;
			LOC119 = HEX5BHEX5D_192244(b, ((NI) 1));
			result = ispartof_400375(a, LOC119);
		}
		break;
		case ((NU8) 3):
		{
			nimln(169, "aliases.nim");
			switch ((*a).kind) {
			case ((NU8) 45):
			case ((NU8) 42):
			case ((NU8) 67):
			case ((NU8) 66):
			case ((NU8) 46):
			{
				Tnode191813* LOC122;
				nimln(172, "aliases.nim");
				LOC122 = 0;
				LOC122 = HEX5BHEX5D_192244(a, ((NI) 0));
				result = ispartof_400375(LOC122, b);
			}
			break;
			case ((NU8) 58):
			case ((NU8) 59):
			case ((NU8) 60):
			{
				Tnode191813* LOC124;
				nimln(174, "aliases.nim");
				LOC124 = 0;
				LOC124 = HEX5BHEX5D_192244(a, ((NI) 1));
				result = ispartof_400375(LOC124, b);
			}
			break;
			case ((NU8) 65):
			case ((NU8) 47):
			{
				nimln(177, "aliases.nim");
				{
					NU8 LOC128;
					Tnode191813* LOC131;
					LOC128 = 0;
					LOC128 = ispartof_400362((*a).typ, (*b).typ);
					if (!!((LOC128 == ((NU8) 0)))) goto LA129;
					nimln(178, "aliases.nim");
					LOC131 = 0;
					LOC131 = HEX5BHEX5D_192244(a, ((NI) 0));
					result = ispartof_400375(LOC131, b);
					nimln(179, "aliases.nim");
					{
						if (!(result == ((NU8) 0))) goto LA134;
						result = ((NU8) 1);
					}
					LA134: ;
				}
				LA129: ;
			}
			break;
			default:
			{
			}
			break;
			}
		}
		break;
		default:
		{
		}
		break;
		}
	}
	LA1: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_aliasesInit)(void) {
	nimfr("aliases", "aliases.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_aliasesDatInit)(void) {
}

