/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct Tindexentry313396 Tindexentry313396;
typedef struct TY313897 TY313897;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY13606 TY13606;
typedef struct Tsym191843 Tsym191843;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Tidobj167015 Tidobj167015;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Ttype191849 Ttype191849;
typedef struct Tident167021 Tident167021;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct Tnode191813 Tnode191813;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tlib191831 Tlib191831;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TY191933 TY191933;
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (Tindexentry313396* x_314696, Tindexentry313396* y_314698, void* ClEnv);
void* ClEnv;
} TY314694;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tindexentry313396  {
NimStringDesc* keyword;
NimStringDesc* link;
NimStringDesc* linktitle;
NimStringDesc* linkdesc;
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
typedef N_CLOSURE_PTR(NI, TMP5963) (Tindexentry313396* x_314751, Tindexentry313396* y_314753);
typedef N_CLOSURE_PTR(NI, TMP5967) (Tindexentry313396* x_314751, Tindexentry313396* y_314753);
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (NimStringDesc* x_316310, NimStringDesc* y_316312, void* ClEnv);
void* ClEnv;
} TY316308;
typedef N_CLOSURE_PTR(NI, TMP6009) (NimStringDesc* x_316365, NimStringDesc* y_316367);
typedef N_CLOSURE_PTR(NI, TMP6012) (NimStringDesc* x_316365, NimStringDesc* y_316367);
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (Tsym191843* x_352527, Tsym191843* y_352529, void* ClEnv);
void* ClEnv;
} TY352525;
typedef N_CLOSURE_PTR(NI, TMP6969) (Tsym191843* x_352582, Tsym191843* y_352584);
typedef N_CLOSURE_PTR(NI, TMP6972) (Tsym191843* x_352582, Tsym191843* y_352584);
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
struct  Tlineinfo163338  {
NI16 line;
NI16 col;
NI32 fileindex;
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
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
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
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
};
struct TY313897 {
  TGenericSeq Sup;
  Tindexentry313396 data[SEQ_DECL_SIZE];
};
struct TY13606 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct Tsymseq191815 {
  TGenericSeq Sup;
  Tsym191843* data[SEQ_DECL_SIZE];
};
struct Ttypeseq191845 {
  TGenericSeq Sup;
  Ttype191849* data[SEQ_DECL_SIZE];
};
struct TY191944 {
  TGenericSeq Sup;
  Tinstantiation191833* data[SEQ_DECL_SIZE];
};
struct Tnodeseq191807 {
  TGenericSeq Sup;
  Tnode191813* data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
static N_INLINE(NI, HEX2A_311020)(NI x, NU8 order);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, merge_314732)(Tindexentry313396* a, NI aLen0, Tindexentry313396* b, NI bLen0, NI lo, NI m, NI hi, TY314694 cmp, NU8 order);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, failedassertimpl_87017)(NimStringDesc* msg);
N_NIMCALL(void, HEX3CHEX2D_313807)(Tindexentry313396* a, Tindexentry313396* b);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(void, merge_316346)(NimStringDesc** a, NI aLen0, NimStringDesc** b, NI bLen0, NI lo, NI m, NI hi, TY316308 cmp, NU8 order);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(void, merge_352563)(Tsym191843** a, NI aLen0, Tsym191843** b, NI bLen0, NI lo, NI m, NI hi, TY352525 cmp, NU8 order);
STRING_LITERAL(TMP5964, "j <= m ", 7);
extern TFrame* frameptr_17042;
extern TNimType NTI313897; /* seq[TIndexEntry] */
extern TNimType NTI13606; /* seq[string] */
extern TNimType NTI191815; /* TSymSeq */

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

static N_INLINE(NI, HEX2A_311020)(NI x, NU8 order) {
	NI result;
	NI y;
	NI TMP5846;
	NI TMP5847;
	nimfr("*", "algorithm.nim")
	result = 0;
	nimln(24, "algorithm.nim");
	TMP5846 = subInt(((NI) (order)), ((NI) 1));
	y = (NI)(TMP5846);
	nimln(25, "algorithm.nim");
	TMP5847 = subInt((NI)(x ^ ((NI) (y))), ((NI) (y)));
	result = (NI)(TMP5847);
	popFrame();
	return result;
}

static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
{	result = 0;
	{
		if (!(b == ((NI) 0))) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == ((NI) (IL64(-9223372036854775807) - IL64(1))));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == ((NI) -1));
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();
	}
	LA9: ;
	result = (NI)(a / b);
	goto BeforeRet;
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

N_NIMCALL(void, merge_314732)(Tindexentry313396* a, NI aLen0, Tindexentry313396* b, NI bLen0, NI lo, NI m, NI hi, TY314694 cmp, NU8 order) {
	NI j;
	NI bb;
	NI i;
	NI k;
	nimfr("merge", "algorithm.nim")
{	nimln(119, "algorithm.nim");
	{
		NI TMP5962;
		NI LOC3;
		NI LOC4;
		if ((NU)(m) >= (NU)(aLen0)) raiseIndexError();
		TMP5962 = addInt(m, ((NI) 1));
		if ((NU)((NI)(TMP5962)) >= (NU)(aLen0)) raiseIndexError();
		LOC3 = 0;
		LOC3 = cmp.ClEnv? cmp.ClPrc((&a[m]), (&a[(NI)(TMP5962)]), cmp.ClEnv):((TMP5963)(cmp.ClPrc))((&a[m]), (&a[(NI)(TMP5962)]));
		LOC4 = 0;
		LOC4 = HEX2A_311020(LOC3, order);
		if (!(LOC4 <= ((NI) 0))) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	nimln(120, "algorithm.nim");
	j = lo;
	nimln(122, "algorithm.nim");
	{
		if (!!((j <= m))) goto LA9;
		failedassertimpl_87017(((NimStringDesc*) &TMP5964));
	}
	LA9: ;
	nimln(124, "algorithm.nim");
	bb = ((NI) 0);
	{
		nimln(125, "algorithm.nim");
		while (1) {
			NI TMP5965;
			NI TMP5966;
			if (!(j <= m)) goto LA12;
			nimln(126, "algorithm.nim");
			if ((NU)(bb) >= (NU)(bLen0)) raiseIndexError();
			if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
			HEX3CHEX2D_313807((&b[bb]), (&a[j]));
			nimln(127, "algorithm.nim");
			TMP5965 = addInt(bb, ((NI) 1));
			bb = (NI)(TMP5965);
			nimln(128, "algorithm.nim");
			TMP5966 = addInt(j, ((NI) 1));
			j = (NI)(TMP5966);
		} LA12: ;
	}
	nimln(132, "algorithm.nim");
	i = ((NI) 0);
	nimln(133, "algorithm.nim");
	k = lo;
	{
		nimln(135, "algorithm.nim");
		while (1) {
			NIM_BOOL LOC15;
			NI TMP5970;
			LOC15 = 0;
			LOC15 = (k < j);
			if (!(LOC15)) goto LA16;
			LOC15 = (j <= hi);
			LA16: ;
			if (!LOC15) goto LA14;
			nimln(136, "algorithm.nim");
			{
				NI LOC19;
				NI LOC20;
				NI TMP5968;
				if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
				if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
				LOC19 = 0;
				LOC19 = cmp.ClEnv? cmp.ClPrc((&b[i]), (&a[j]), cmp.ClEnv):((TMP5967)(cmp.ClPrc))((&b[i]), (&a[j]));
				LOC20 = 0;
				LOC20 = HEX2A_311020(LOC19, order);
				if (!(LOC20 <= ((NI) 0))) goto LA21;
				nimln(137, "algorithm.nim");
				if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
				if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
				HEX3CHEX2D_313807((&a[k]), (&b[i]));
				nimln(138, "algorithm.nim");
				TMP5968 = addInt(i, ((NI) 1));
				i = (NI)(TMP5968);
			}
			goto LA17;
			LA21: ;
			{
				NI TMP5969;
				nimln(140, "algorithm.nim");
				if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
				if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
				HEX3CHEX2D_313807((&a[k]), (&a[j]));
				nimln(141, "algorithm.nim");
				TMP5969 = addInt(j, ((NI) 1));
				j = (NI)(TMP5969);
			}
			LA17: ;
			nimln(142, "algorithm.nim");
			TMP5970 = addInt(k, ((NI) 1));
			k = (NI)(TMP5970);
		} LA14: ;
	}
	{
		nimln(145, "algorithm.nim");
		while (1) {
			NI TMP5971;
			NI TMP5972;
			if (!(k < j)) goto LA25;
			nimln(146, "algorithm.nim");
			if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
			if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
			HEX3CHEX2D_313807((&a[k]), (&b[i]));
			nimln(147, "algorithm.nim");
			TMP5971 = addInt(k, ((NI) 1));
			k = (NI)(TMP5971);
			nimln(148, "algorithm.nim");
			TMP5972 = addInt(i, ((NI) 1));
			i = (NI)(TMP5972);
		} LA25: ;
	}
	}BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, sort_314687)(Tindexentry313396* a, NI aLen0, TY314694 cmp, NU8 order) {
	NI n;
	TY313897* b;
	NI TMP5957;
	NI s;
	nimfr("sort", "algorithm.nim")
	nimln(180, "algorithm.nim");
	n = aLen0;
	b = 0;
	nimln(182, "algorithm.nim");
	TMP5957 = divInt(n, ((NI) 2));
	b = (TY313897*) newSeq((&NTI313897), ((NI)chckRange((NI)(TMP5957), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	nimln(183, "algorithm.nim");
	s = ((NI) 1);
	{
		nimln(184, "algorithm.nim");
		while (1) {
			NI m;
			NI TMP5960;
			NI TMP5961;
			NI TMP5978;
			if (!(s < n)) goto LA2;
			nimln(185, "algorithm.nim");
			TMP5960 = subInt(n, ((NI) 1));
			TMP5961 = subInt((NI)(TMP5960), s);
			m = (NI)(TMP5961);
			{
				nimln(186, "algorithm.nim");
				while (1) {
					NI TMP5973;
					NI TMP5974;
					NI TMP5975;
					NI TMP5976;
					NI TMP5977;
					if (!(((NI) 0) <= m)) goto LA4;
					nimln(187, "algorithm.nim");
					TMP5973 = subInt(m, s);
					TMP5974 = addInt((NI)(TMP5973), ((NI) 1));
					TMP5975 = addInt(m, s);
					merge_314732(a, aLen0, b->data, b->Sup.len, (((NI)(TMP5974) >= ((NI) 0)) ? (NI)(TMP5974) : ((NI) 0)), m, (NI)(TMP5975), cmp, order);
					nimln(188, "algorithm.nim");
					TMP5976 = mulInt(s, ((NI) 2));
					TMP5977 = subInt(m, (NI)(TMP5976));
					m = (NI)(TMP5977);
				} LA4: ;
			}
			nimln(189, "algorithm.nim");
			TMP5978 = mulInt(s, ((NI) 2));
			s = (NI)(TMP5978);
		} LA2: ;
	}
	popFrame();
}

N_NIMCALL(void, merge_316346)(NimStringDesc** a, NI aLen0, NimStringDesc** b, NI bLen0, NI lo, NI m, NI hi, TY316308 cmp, NU8 order) {
	NI j;
	NI bb;
	NI i;
	NI k;
	nimfr("merge", "algorithm.nim")
{	nimln(119, "algorithm.nim");
	{
		NI TMP6008;
		NI LOC3;
		NI LOC4;
		if ((NU)(m) >= (NU)(aLen0)) raiseIndexError();
		TMP6008 = addInt(m, ((NI) 1));
		if ((NU)((NI)(TMP6008)) >= (NU)(aLen0)) raiseIndexError();
		LOC3 = 0;
		LOC3 = cmp.ClEnv? cmp.ClPrc(a[m], a[(NI)(TMP6008)], cmp.ClEnv):((TMP6009)(cmp.ClPrc))(a[m], a[(NI)(TMP6008)]);
		LOC4 = 0;
		LOC4 = HEX2A_311020(LOC3, order);
		if (!(LOC4 <= ((NI) 0))) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	nimln(120, "algorithm.nim");
	j = lo;
	nimln(122, "algorithm.nim");
	{
		if (!!((j <= m))) goto LA9;
		failedassertimpl_87017(((NimStringDesc*) &TMP5964));
	}
	LA9: ;
	nimln(124, "algorithm.nim");
	bb = ((NI) 0);
	{
		nimln(125, "algorithm.nim");
		while (1) {
			NI TMP6010;
			NI TMP6011;
			if (!(j <= m)) goto LA12;
			nimln(112, "algorithm.nim");
			if ((NU)(bb) >= (NU)(bLen0)) raiseIndexError();
			if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
			unsureAsgnRef((void**) (&b[bb]), a[j]);
			nimln(127, "algorithm.nim");
			TMP6010 = addInt(bb, ((NI) 1));
			bb = (NI)(TMP6010);
			nimln(128, "algorithm.nim");
			TMP6011 = addInt(j, ((NI) 1));
			j = (NI)(TMP6011);
		} LA12: ;
	}
	nimln(132, "algorithm.nim");
	i = ((NI) 0);
	nimln(133, "algorithm.nim");
	k = lo;
	{
		nimln(135, "algorithm.nim");
		while (1) {
			NIM_BOOL LOC15;
			NI TMP6015;
			LOC15 = 0;
			LOC15 = (k < j);
			if (!(LOC15)) goto LA16;
			LOC15 = (j <= hi);
			LA16: ;
			if (!LOC15) goto LA14;
			nimln(136, "algorithm.nim");
			{
				NI LOC19;
				NI LOC20;
				NI TMP6013;
				if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
				if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
				LOC19 = 0;
				LOC19 = cmp.ClEnv? cmp.ClPrc(b[i], a[j], cmp.ClEnv):((TMP6012)(cmp.ClPrc))(b[i], a[j]);
				LOC20 = 0;
				LOC20 = HEX2A_311020(LOC19, order);
				if (!(LOC20 <= ((NI) 0))) goto LA21;
				nimln(112, "algorithm.nim");
				if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
				if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
				unsureAsgnRef((void**) (&a[k]), b[i]);
				nimln(138, "algorithm.nim");
				TMP6013 = addInt(i, ((NI) 1));
				i = (NI)(TMP6013);
			}
			goto LA17;
			LA21: ;
			{
				NI TMP6014;
				nimln(112, "algorithm.nim");
				if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
				if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
				unsureAsgnRef((void**) (&a[k]), a[j]);
				nimln(141, "algorithm.nim");
				TMP6014 = addInt(j, ((NI) 1));
				j = (NI)(TMP6014);
			}
			LA17: ;
			nimln(142, "algorithm.nim");
			TMP6015 = addInt(k, ((NI) 1));
			k = (NI)(TMP6015);
		} LA14: ;
	}
	{
		nimln(145, "algorithm.nim");
		while (1) {
			NI TMP6016;
			NI TMP6017;
			if (!(k < j)) goto LA25;
			nimln(112, "algorithm.nim");
			if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
			if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
			unsureAsgnRef((void**) (&a[k]), b[i]);
			nimln(147, "algorithm.nim");
			TMP6016 = addInt(k, ((NI) 1));
			k = (NI)(TMP6016);
			nimln(148, "algorithm.nim");
			TMP6017 = addInt(i, ((NI) 1));
			i = (NI)(TMP6017);
		} LA25: ;
	}
	}BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, sort_316301)(NimStringDesc** a, NI aLen0, TY316308 cmp, NU8 order) {
	NI n;
	TY13606* b;
	NI TMP6005;
	NI s;
	nimfr("sort", "algorithm.nim")
	nimln(180, "algorithm.nim");
	n = aLen0;
	b = 0;
	nimln(182, "algorithm.nim");
	TMP6005 = divInt(n, ((NI) 2));
	b = (TY13606*) newSeq((&NTI13606), ((NI)chckRange((NI)(TMP6005), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	nimln(183, "algorithm.nim");
	s = ((NI) 1);
	{
		nimln(184, "algorithm.nim");
		while (1) {
			NI m;
			NI TMP6006;
			NI TMP6007;
			NI TMP6023;
			if (!(s < n)) goto LA2;
			nimln(185, "algorithm.nim");
			TMP6006 = subInt(n, ((NI) 1));
			TMP6007 = subInt((NI)(TMP6006), s);
			m = (NI)(TMP6007);
			{
				nimln(186, "algorithm.nim");
				while (1) {
					NI TMP6018;
					NI TMP6019;
					NI TMP6020;
					NI TMP6021;
					NI TMP6022;
					if (!(((NI) 0) <= m)) goto LA4;
					nimln(187, "algorithm.nim");
					TMP6018 = subInt(m, s);
					TMP6019 = addInt((NI)(TMP6018), ((NI) 1));
					TMP6020 = addInt(m, s);
					merge_316346(a, aLen0, b->data, b->Sup.len, (((NI)(TMP6019) >= ((NI) 0)) ? (NI)(TMP6019) : ((NI) 0)), m, (NI)(TMP6020), cmp, order);
					nimln(188, "algorithm.nim");
					TMP6021 = mulInt(s, ((NI) 2));
					TMP6022 = subInt(m, (NI)(TMP6021));
					m = (NI)(TMP6022);
				} LA4: ;
			}
			nimln(189, "algorithm.nim");
			TMP6023 = mulInt(s, ((NI) 2));
			s = (NI)(TMP6023);
		} LA2: ;
	}
	popFrame();
}

N_NIMCALL(void, merge_352563)(Tsym191843** a, NI aLen0, Tsym191843** b, NI bLen0, NI lo, NI m, NI hi, TY352525 cmp, NU8 order) {
	NI j;
	NI bb;
	NI i;
	NI k;
	nimfr("merge", "algorithm.nim")
{	nimln(119, "algorithm.nim");
	{
		NI TMP6968;
		NI LOC3;
		NI LOC4;
		if ((NU)(m) >= (NU)(aLen0)) raiseIndexError();
		TMP6968 = addInt(m, ((NI) 1));
		if ((NU)((NI)(TMP6968)) >= (NU)(aLen0)) raiseIndexError();
		LOC3 = 0;
		LOC3 = cmp.ClEnv? cmp.ClPrc(a[m], a[(NI)(TMP6968)], cmp.ClEnv):((TMP6969)(cmp.ClPrc))(a[m], a[(NI)(TMP6968)]);
		LOC4 = 0;
		LOC4 = HEX2A_311020(LOC3, order);
		if (!(LOC4 <= ((NI) 0))) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	nimln(120, "algorithm.nim");
	j = lo;
	nimln(122, "algorithm.nim");
	{
		if (!!((j <= m))) goto LA9;
		failedassertimpl_87017(((NimStringDesc*) &TMP5964));
	}
	LA9: ;
	nimln(124, "algorithm.nim");
	bb = ((NI) 0);
	{
		nimln(125, "algorithm.nim");
		while (1) {
			NI TMP6970;
			NI TMP6971;
			if (!(j <= m)) goto LA12;
			nimln(112, "algorithm.nim");
			if ((NU)(bb) >= (NU)(bLen0)) raiseIndexError();
			if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
			unsureAsgnRef((void**) (&b[bb]), a[j]);
			nimln(127, "algorithm.nim");
			TMP6970 = addInt(bb, ((NI) 1));
			bb = (NI)(TMP6970);
			nimln(128, "algorithm.nim");
			TMP6971 = addInt(j, ((NI) 1));
			j = (NI)(TMP6971);
		} LA12: ;
	}
	nimln(132, "algorithm.nim");
	i = ((NI) 0);
	nimln(133, "algorithm.nim");
	k = lo;
	{
		nimln(135, "algorithm.nim");
		while (1) {
			NIM_BOOL LOC15;
			NI TMP6975;
			LOC15 = 0;
			LOC15 = (k < j);
			if (!(LOC15)) goto LA16;
			LOC15 = (j <= hi);
			LA16: ;
			if (!LOC15) goto LA14;
			nimln(136, "algorithm.nim");
			{
				NI LOC19;
				NI LOC20;
				NI TMP6973;
				if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
				if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
				LOC19 = 0;
				LOC19 = cmp.ClEnv? cmp.ClPrc(b[i], a[j], cmp.ClEnv):((TMP6972)(cmp.ClPrc))(b[i], a[j]);
				LOC20 = 0;
				LOC20 = HEX2A_311020(LOC19, order);
				if (!(LOC20 <= ((NI) 0))) goto LA21;
				nimln(112, "algorithm.nim");
				if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
				if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
				unsureAsgnRef((void**) (&a[k]), b[i]);
				nimln(138, "algorithm.nim");
				TMP6973 = addInt(i, ((NI) 1));
				i = (NI)(TMP6973);
			}
			goto LA17;
			LA21: ;
			{
				NI TMP6974;
				nimln(112, "algorithm.nim");
				if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
				if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
				unsureAsgnRef((void**) (&a[k]), a[j]);
				nimln(141, "algorithm.nim");
				TMP6974 = addInt(j, ((NI) 1));
				j = (NI)(TMP6974);
			}
			LA17: ;
			nimln(142, "algorithm.nim");
			TMP6975 = addInt(k, ((NI) 1));
			k = (NI)(TMP6975);
		} LA14: ;
	}
	{
		nimln(145, "algorithm.nim");
		while (1) {
			NI TMP6976;
			NI TMP6977;
			if (!(k < j)) goto LA25;
			nimln(112, "algorithm.nim");
			if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
			if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
			unsureAsgnRef((void**) (&a[k]), b[i]);
			nimln(147, "algorithm.nim");
			TMP6976 = addInt(k, ((NI) 1));
			k = (NI)(TMP6976);
			nimln(148, "algorithm.nim");
			TMP6977 = addInt(i, ((NI) 1));
			i = (NI)(TMP6977);
		} LA25: ;
	}
	}BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, sort_352518)(Tsym191843** a, NI aLen0, TY352525 cmp, NU8 order) {
	NI n;
	Tsymseq191815* b;
	NI TMP6965;
	NI s;
	nimfr("sort", "algorithm.nim")
	nimln(180, "algorithm.nim");
	n = aLen0;
	b = 0;
	nimln(182, "algorithm.nim");
	TMP6965 = divInt(n, ((NI) 2));
	b = (Tsymseq191815*) newSeq((&NTI191815), ((NI)chckRange((NI)(TMP6965), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	nimln(183, "algorithm.nim");
	s = ((NI) 1);
	{
		nimln(184, "algorithm.nim");
		while (1) {
			NI m;
			NI TMP6966;
			NI TMP6967;
			NI TMP6983;
			if (!(s < n)) goto LA2;
			nimln(185, "algorithm.nim");
			TMP6966 = subInt(n, ((NI) 1));
			TMP6967 = subInt((NI)(TMP6966), s);
			m = (NI)(TMP6967);
			{
				nimln(186, "algorithm.nim");
				while (1) {
					NI TMP6978;
					NI TMP6979;
					NI TMP6980;
					NI TMP6981;
					NI TMP6982;
					if (!(((NI) 0) <= m)) goto LA4;
					nimln(187, "algorithm.nim");
					TMP6978 = subInt(m, s);
					TMP6979 = addInt((NI)(TMP6978), ((NI) 1));
					TMP6980 = addInt(m, s);
					merge_352563(a, aLen0, b->data, b->Sup.len, (((NI)(TMP6979) >= ((NI) 0)) ? (NI)(TMP6979) : ((NI) 0)), m, (NI)(TMP6980), cmp, order);
					nimln(188, "algorithm.nim");
					TMP6981 = mulInt(s, ((NI) 2));
					TMP6982 = subInt(m, (NI)(TMP6981));
					m = (NI)(TMP6982);
				} LA4: ;
			}
			nimln(189, "algorithm.nim");
			TMP6983 = mulInt(s, ((NI) 2));
			s = (NI)(TMP6983);
		} LA2: ;
	}
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmInit)(void) {
	nimfr("algorithm", "algorithm.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmDatInit)(void) {
}

