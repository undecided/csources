/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct Tindexentry313396 Tindexentry313396;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY313897 TY313897;
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
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (Tindexentry313396 x_314696, Tindexentry313396 y_314698, void* ClEnv);
void* ClEnv;
} TY314694;
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
typedef N_CLOSURE_PTR(NI, TMP5966) (Tindexentry313396 x_314751, Tindexentry313396 y_314753);
typedef N_CLOSURE_PTR(NI, TMP5970) (Tindexentry313396 x_314751, Tindexentry313396 y_314753);
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (NimStringDesc* x_316310, NimStringDesc* y_316312, void* ClEnv);
void* ClEnv;
} TY316308;
typedef N_CLOSURE_PTR(NI, TMP6012) (NimStringDesc* x_316365, NimStringDesc* y_316367);
typedef N_CLOSURE_PTR(NI, TMP6015) (NimStringDesc* x_316365, NimStringDesc* y_316367);
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (Tsym191843* x_352527, Tsym191843* y_352529, void* ClEnv);
void* ClEnv;
} TY352525;
typedef N_CLOSURE_PTR(NI, TMP6972) (Tsym191843* x_352582, Tsym191843* y_352584);
typedef N_CLOSURE_PTR(NI, TMP6975) (Tsym191843* x_352582, Tsym191843* y_352584);
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
N_NIMCALL(void, failedassertimpl_87217)(NimStringDesc* msg);
N_NIMCALL(void, HEX3CHEX2D_313807)(Tindexentry313396* a, Tindexentry313396 b);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(void, merge_316346)(NimStringDesc** a, NI aLen0, NimStringDesc** b, NI bLen0, NI lo, NI m, NI hi, TY316308 cmp, NU8 order);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(void, merge_352563)(Tsym191843** a, NI aLen0, Tsym191843** b, NI bLen0, NI lo, NI m, NI hi, TY352525 cmp, NU8 order);
STRING_LITERAL(TMP5967, "j <= m ", 7);
extern TFrame* frameptr_17042;
extern TNimType NTI313897; /* seq[TIndexEntry] */
extern TNimType NTI13606; /* seq[string] */
extern TNimType NTI191815; /* TSymSeq */

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
	NI TMP5849;
	NI TMP5850;
	nimfr("*", "algorithm.nim")
	result = 0;
	nimln(24, "algorithm.nim");
	TMP5849 = subInt(((NI) (order)), ((NI) 1));
	y = (NI)(TMP5849);
	nimln(25, "algorithm.nim");
	TMP5850 = subInt((NI)(x ^ ((NI) (y))), ((NI) (y)));
	result = (NI)(TMP5850);
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
		LOC7 = (a == ((NI) (-2147483647 -1)));
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

N_NIMCALL(void, merge_314732)(Tindexentry313396* a, NI aLen0, Tindexentry313396* b, NI bLen0, NI lo, NI m, NI hi, TY314694 cmp, NU8 order) {
	NI j;
	NI bb;
	NI i;
	NI k;
	nimfr("merge", "algorithm.nim")
{	nimln(119, "algorithm.nim");
	{
		NI TMP5965;
		NI LOC3;
		NI LOC4;
		if ((NU)(m) >= (NU)(aLen0)) raiseIndexError();
		TMP5965 = addInt(m, ((NI) 1));
		if ((NU)((NI)(TMP5965)) >= (NU)(aLen0)) raiseIndexError();
		LOC3 = 0;
		LOC3 = cmp.ClEnv? cmp.ClPrc(a[m], a[(NI)(TMP5965)], cmp.ClEnv):((TMP5966)(cmp.ClPrc))(a[m], a[(NI)(TMP5965)]);
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
		failedassertimpl_87217(((NimStringDesc*) &TMP5967));
	}
	LA9: ;
	nimln(124, "algorithm.nim");
	bb = ((NI) 0);
	{
		nimln(125, "algorithm.nim");
		while (1) {
			NI TMP5968;
			NI TMP5969;
			if (!(j <= m)) goto LA12;
			nimln(126, "algorithm.nim");
			if ((NU)(bb) >= (NU)(bLen0)) raiseIndexError();
			if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
			HEX3CHEX2D_313807((&b[bb]), a[j]);
			nimln(127, "algorithm.nim");
			TMP5968 = addInt(bb, ((NI) 1));
			bb = (NI)(TMP5968);
			nimln(128, "algorithm.nim");
			TMP5969 = addInt(j, ((NI) 1));
			j = (NI)(TMP5969);
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
			NI TMP5973;
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
				NI TMP5971;
				if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
				if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
				LOC19 = 0;
				LOC19 = cmp.ClEnv? cmp.ClPrc(b[i], a[j], cmp.ClEnv):((TMP5970)(cmp.ClPrc))(b[i], a[j]);
				LOC20 = 0;
				LOC20 = HEX2A_311020(LOC19, order);
				if (!(LOC20 <= ((NI) 0))) goto LA21;
				nimln(137, "algorithm.nim");
				if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
				if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
				HEX3CHEX2D_313807((&a[k]), b[i]);
				nimln(138, "algorithm.nim");
				TMP5971 = addInt(i, ((NI) 1));
				i = (NI)(TMP5971);
			}
			goto LA17;
			LA21: ;
			{
				NI TMP5972;
				nimln(140, "algorithm.nim");
				if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
				if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
				HEX3CHEX2D_313807((&a[k]), a[j]);
				nimln(141, "algorithm.nim");
				TMP5972 = addInt(j, ((NI) 1));
				j = (NI)(TMP5972);
			}
			LA17: ;
			nimln(142, "algorithm.nim");
			TMP5973 = addInt(k, ((NI) 1));
			k = (NI)(TMP5973);
		} LA14: ;
	}
	{
		nimln(145, "algorithm.nim");
		while (1) {
			NI TMP5974;
			NI TMP5975;
			if (!(k < j)) goto LA25;
			nimln(146, "algorithm.nim");
			if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
			if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
			HEX3CHEX2D_313807((&a[k]), b[i]);
			nimln(147, "algorithm.nim");
			TMP5974 = addInt(k, ((NI) 1));
			k = (NI)(TMP5974);
			nimln(148, "algorithm.nim");
			TMP5975 = addInt(i, ((NI) 1));
			i = (NI)(TMP5975);
		} LA25: ;
	}
	}BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, sort_314687)(Tindexentry313396* a, NI aLen0, TY314694 cmp, NU8 order) {
	NI n;
	TY313897* b;
	NI TMP5960;
	NI s;
	nimfr("sort", "algorithm.nim")
	nimln(180, "algorithm.nim");
	n = aLen0;
	b = 0;
	nimln(182, "algorithm.nim");
	TMP5960 = divInt(n, ((NI) 2));
	b = (TY313897*) newSeq((&NTI313897), ((NI)chckRange((NI)(TMP5960), ((NI) 0), ((NI) 2147483647))));
	nimln(183, "algorithm.nim");
	s = ((NI) 1);
	{
		nimln(184, "algorithm.nim");
		while (1) {
			NI m;
			NI TMP5963;
			NI TMP5964;
			NI TMP5981;
			if (!(s < n)) goto LA2;
			nimln(185, "algorithm.nim");
			TMP5963 = subInt(n, ((NI) 1));
			TMP5964 = subInt((NI)(TMP5963), s);
			m = (NI)(TMP5964);
			{
				nimln(186, "algorithm.nim");
				while (1) {
					NI TMP5976;
					NI TMP5977;
					NI TMP5978;
					NI TMP5979;
					NI TMP5980;
					if (!(((NI) 0) <= m)) goto LA4;
					nimln(187, "algorithm.nim");
					TMP5976 = subInt(m, s);
					TMP5977 = addInt((NI)(TMP5976), ((NI) 1));
					TMP5978 = addInt(m, s);
					merge_314732(a, aLen0, b->data, b->Sup.len, (((NI)(TMP5977) >= ((NI) 0)) ? (NI)(TMP5977) : ((NI) 0)), m, (NI)(TMP5978), cmp, order);
					nimln(188, "algorithm.nim");
					TMP5979 = mulInt(s, ((NI) 2));
					TMP5980 = subInt(m, (NI)(TMP5979));
					m = (NI)(TMP5980);
				} LA4: ;
			}
			nimln(189, "algorithm.nim");
			TMP5981 = mulInt(s, ((NI) 2));
			s = (NI)(TMP5981);
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
		NI TMP6011;
		NI LOC3;
		NI LOC4;
		if ((NU)(m) >= (NU)(aLen0)) raiseIndexError();
		TMP6011 = addInt(m, ((NI) 1));
		if ((NU)((NI)(TMP6011)) >= (NU)(aLen0)) raiseIndexError();
		LOC3 = 0;
		LOC3 = cmp.ClEnv? cmp.ClPrc(a[m], a[(NI)(TMP6011)], cmp.ClEnv):((TMP6012)(cmp.ClPrc))(a[m], a[(NI)(TMP6011)]);
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
		failedassertimpl_87217(((NimStringDesc*) &TMP5967));
	}
	LA9: ;
	nimln(124, "algorithm.nim");
	bb = ((NI) 0);
	{
		nimln(125, "algorithm.nim");
		while (1) {
			NI TMP6013;
			NI TMP6014;
			if (!(j <= m)) goto LA12;
			nimln(112, "algorithm.nim");
			if ((NU)(bb) >= (NU)(bLen0)) raiseIndexError();
			if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
			unsureAsgnRef((void**) (&b[bb]), a[j]);
			nimln(127, "algorithm.nim");
			TMP6013 = addInt(bb, ((NI) 1));
			bb = (NI)(TMP6013);
			nimln(128, "algorithm.nim");
			TMP6014 = addInt(j, ((NI) 1));
			j = (NI)(TMP6014);
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
			NI TMP6018;
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
				NI TMP6016;
				if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
				if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
				LOC19 = 0;
				LOC19 = cmp.ClEnv? cmp.ClPrc(b[i], a[j], cmp.ClEnv):((TMP6015)(cmp.ClPrc))(b[i], a[j]);
				LOC20 = 0;
				LOC20 = HEX2A_311020(LOC19, order);
				if (!(LOC20 <= ((NI) 0))) goto LA21;
				nimln(112, "algorithm.nim");
				if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
				if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
				unsureAsgnRef((void**) (&a[k]), b[i]);
				nimln(138, "algorithm.nim");
				TMP6016 = addInt(i, ((NI) 1));
				i = (NI)(TMP6016);
			}
			goto LA17;
			LA21: ;
			{
				NI TMP6017;
				nimln(112, "algorithm.nim");
				if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
				if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
				unsureAsgnRef((void**) (&a[k]), a[j]);
				nimln(141, "algorithm.nim");
				TMP6017 = addInt(j, ((NI) 1));
				j = (NI)(TMP6017);
			}
			LA17: ;
			nimln(142, "algorithm.nim");
			TMP6018 = addInt(k, ((NI) 1));
			k = (NI)(TMP6018);
		} LA14: ;
	}
	{
		nimln(145, "algorithm.nim");
		while (1) {
			NI TMP6019;
			NI TMP6020;
			if (!(k < j)) goto LA25;
			nimln(112, "algorithm.nim");
			if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
			if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
			unsureAsgnRef((void**) (&a[k]), b[i]);
			nimln(147, "algorithm.nim");
			TMP6019 = addInt(k, ((NI) 1));
			k = (NI)(TMP6019);
			nimln(148, "algorithm.nim");
			TMP6020 = addInt(i, ((NI) 1));
			i = (NI)(TMP6020);
		} LA25: ;
	}
	}BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, sort_316301)(NimStringDesc** a, NI aLen0, TY316308 cmp, NU8 order) {
	NI n;
	TY13606* b;
	NI TMP6008;
	NI s;
	nimfr("sort", "algorithm.nim")
	nimln(180, "algorithm.nim");
	n = aLen0;
	b = 0;
	nimln(182, "algorithm.nim");
	TMP6008 = divInt(n, ((NI) 2));
	b = (TY13606*) newSeq((&NTI13606), ((NI)chckRange((NI)(TMP6008), ((NI) 0), ((NI) 2147483647))));
	nimln(183, "algorithm.nim");
	s = ((NI) 1);
	{
		nimln(184, "algorithm.nim");
		while (1) {
			NI m;
			NI TMP6009;
			NI TMP6010;
			NI TMP6026;
			if (!(s < n)) goto LA2;
			nimln(185, "algorithm.nim");
			TMP6009 = subInt(n, ((NI) 1));
			TMP6010 = subInt((NI)(TMP6009), s);
			m = (NI)(TMP6010);
			{
				nimln(186, "algorithm.nim");
				while (1) {
					NI TMP6021;
					NI TMP6022;
					NI TMP6023;
					NI TMP6024;
					NI TMP6025;
					if (!(((NI) 0) <= m)) goto LA4;
					nimln(187, "algorithm.nim");
					TMP6021 = subInt(m, s);
					TMP6022 = addInt((NI)(TMP6021), ((NI) 1));
					TMP6023 = addInt(m, s);
					merge_316346(a, aLen0, b->data, b->Sup.len, (((NI)(TMP6022) >= ((NI) 0)) ? (NI)(TMP6022) : ((NI) 0)), m, (NI)(TMP6023), cmp, order);
					nimln(188, "algorithm.nim");
					TMP6024 = mulInt(s, ((NI) 2));
					TMP6025 = subInt(m, (NI)(TMP6024));
					m = (NI)(TMP6025);
				} LA4: ;
			}
			nimln(189, "algorithm.nim");
			TMP6026 = mulInt(s, ((NI) 2));
			s = (NI)(TMP6026);
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
		NI TMP6971;
		NI LOC3;
		NI LOC4;
		if ((NU)(m) >= (NU)(aLen0)) raiseIndexError();
		TMP6971 = addInt(m, ((NI) 1));
		if ((NU)((NI)(TMP6971)) >= (NU)(aLen0)) raiseIndexError();
		LOC3 = 0;
		LOC3 = cmp.ClEnv? cmp.ClPrc(a[m], a[(NI)(TMP6971)], cmp.ClEnv):((TMP6972)(cmp.ClPrc))(a[m], a[(NI)(TMP6971)]);
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
		failedassertimpl_87217(((NimStringDesc*) &TMP5967));
	}
	LA9: ;
	nimln(124, "algorithm.nim");
	bb = ((NI) 0);
	{
		nimln(125, "algorithm.nim");
		while (1) {
			NI TMP6973;
			NI TMP6974;
			if (!(j <= m)) goto LA12;
			nimln(112, "algorithm.nim");
			if ((NU)(bb) >= (NU)(bLen0)) raiseIndexError();
			if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
			unsureAsgnRef((void**) (&b[bb]), a[j]);
			nimln(127, "algorithm.nim");
			TMP6973 = addInt(bb, ((NI) 1));
			bb = (NI)(TMP6973);
			nimln(128, "algorithm.nim");
			TMP6974 = addInt(j, ((NI) 1));
			j = (NI)(TMP6974);
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
			NI TMP6978;
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
				NI TMP6976;
				if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
				if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
				LOC19 = 0;
				LOC19 = cmp.ClEnv? cmp.ClPrc(b[i], a[j], cmp.ClEnv):((TMP6975)(cmp.ClPrc))(b[i], a[j]);
				LOC20 = 0;
				LOC20 = HEX2A_311020(LOC19, order);
				if (!(LOC20 <= ((NI) 0))) goto LA21;
				nimln(112, "algorithm.nim");
				if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
				if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
				unsureAsgnRef((void**) (&a[k]), b[i]);
				nimln(138, "algorithm.nim");
				TMP6976 = addInt(i, ((NI) 1));
				i = (NI)(TMP6976);
			}
			goto LA17;
			LA21: ;
			{
				NI TMP6977;
				nimln(112, "algorithm.nim");
				if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
				if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
				unsureAsgnRef((void**) (&a[k]), a[j]);
				nimln(141, "algorithm.nim");
				TMP6977 = addInt(j, ((NI) 1));
				j = (NI)(TMP6977);
			}
			LA17: ;
			nimln(142, "algorithm.nim");
			TMP6978 = addInt(k, ((NI) 1));
			k = (NI)(TMP6978);
		} LA14: ;
	}
	{
		nimln(145, "algorithm.nim");
		while (1) {
			NI TMP6979;
			NI TMP6980;
			if (!(k < j)) goto LA25;
			nimln(112, "algorithm.nim");
			if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
			if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
			unsureAsgnRef((void**) (&a[k]), b[i]);
			nimln(147, "algorithm.nim");
			TMP6979 = addInt(k, ((NI) 1));
			k = (NI)(TMP6979);
			nimln(148, "algorithm.nim");
			TMP6980 = addInt(i, ((NI) 1));
			i = (NI)(TMP6980);
		} LA25: ;
	}
	}BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, sort_352518)(Tsym191843** a, NI aLen0, TY352525 cmp, NU8 order) {
	NI n;
	Tsymseq191815* b;
	NI TMP6968;
	NI s;
	nimfr("sort", "algorithm.nim")
	nimln(180, "algorithm.nim");
	n = aLen0;
	b = 0;
	nimln(182, "algorithm.nim");
	TMP6968 = divInt(n, ((NI) 2));
	b = (Tsymseq191815*) newSeq((&NTI191815), ((NI)chckRange((NI)(TMP6968), ((NI) 0), ((NI) 2147483647))));
	nimln(183, "algorithm.nim");
	s = ((NI) 1);
	{
		nimln(184, "algorithm.nim");
		while (1) {
			NI m;
			NI TMP6969;
			NI TMP6970;
			NI TMP6986;
			if (!(s < n)) goto LA2;
			nimln(185, "algorithm.nim");
			TMP6969 = subInt(n, ((NI) 1));
			TMP6970 = subInt((NI)(TMP6969), s);
			m = (NI)(TMP6970);
			{
				nimln(186, "algorithm.nim");
				while (1) {
					NI TMP6981;
					NI TMP6982;
					NI TMP6983;
					NI TMP6984;
					NI TMP6985;
					if (!(((NI) 0) <= m)) goto LA4;
					nimln(187, "algorithm.nim");
					TMP6981 = subInt(m, s);
					TMP6982 = addInt((NI)(TMP6981), ((NI) 1));
					TMP6983 = addInt(m, s);
					merge_352563(a, aLen0, b->data, b->Sup.len, (((NI)(TMP6982) >= ((NI) 0)) ? (NI)(TMP6982) : ((NI) 0)), m, (NI)(TMP6983), cmp, order);
					nimln(188, "algorithm.nim");
					TMP6984 = mulInt(s, ((NI) 2));
					TMP6985 = subInt(m, (NI)(TMP6984));
					m = (NI)(TMP6985);
				} LA4: ;
			}
			nimln(189, "algorithm.nim");
			TMP6986 = mulInt(s, ((NI) 2));
			s = (NI)(TMP6986);
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

