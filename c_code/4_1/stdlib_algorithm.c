/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct Tindexentry312396 Tindexentry312396;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY312897 TY312897;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY13606 TY13606;
typedef struct Tsym190843 Tsym190843;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Tidobj166015 Tidobj166015;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Ttype190849 Ttype190849;
typedef struct Tident166021 Tident166021;
typedef struct Tlineinfo162338 Tlineinfo162338;
typedef struct Tnode190813 Tnode190813;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj160009 Ropeobj160009;
typedef struct Tlib190831 Tlib190831;
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
struct  Tindexentry312396  {
NimStringDesc* keyword;
NimStringDesc* link;
NimStringDesc* linktitle;
NimStringDesc* linkdesc;
};
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (Tindexentry312396 x_313696, Tindexentry312396 y_313698, void* ClEnv);
void* ClEnv;
} TY313694;
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
typedef N_CLOSURE_PTR(NI, TMP5961) (Tindexentry312396 x_313751, Tindexentry312396 y_313753);
typedef N_CLOSURE_PTR(NI, TMP5965) (Tindexentry312396 x_313751, Tindexentry312396 y_313753);
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (NimStringDesc* x_315310, NimStringDesc* y_315312, void* ClEnv);
void* ClEnv;
} TY315308;
typedef N_CLOSURE_PTR(NI, TMP6007) (NimStringDesc* x_315365, NimStringDesc* y_315367);
typedef N_CLOSURE_PTR(NI, TMP6010) (NimStringDesc* x_315365, NimStringDesc* y_315367);
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (Tsym190843* x_351527, Tsym190843* y_351529, void* ClEnv);
void* ClEnv;
} TY351525;
typedef N_CLOSURE_PTR(NI, TMP6959) (Tsym190843* x_351582, Tsym190843* y_351584);
typedef N_CLOSURE_PTR(NI, TMP6962) (Tsym190843* x_351582, Tsym190843* y_351584);
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj166015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable190817  {
NI counter;
Tsymseq190815* data;
};
struct  Tlineinfo162338  {
NI16 line;
NI16 col;
NI32 fileindex;
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
struct  Tident166021  {
  Tidobj166015 Sup;
NimStringDesc* s;
Tident166021* next;
NI h;
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
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct TY312897 {
  TGenericSeq Sup;
  Tindexentry312396 data[SEQ_DECL_SIZE];
};
struct TY13606 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct Tsymseq190815 {
  TGenericSeq Sup;
  Tsym190843* data[SEQ_DECL_SIZE];
};
struct Ttypeseq190845 {
  TGenericSeq Sup;
  Ttype190849* data[SEQ_DECL_SIZE];
};
struct TY190944 {
  TGenericSeq Sup;
  Tinstantiation190833* data[SEQ_DECL_SIZE];
};
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
};
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
static N_INLINE(NI, HEX2A_310020)(NI x, NU8 order);
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
N_NIMCALL(void, merge_313732)(Tindexentry312396* a, NI aLen0, Tindexentry312396* b, NI bLen0, NI lo, NI m, NI hi, TY313694 cmp, NU8 order);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, failedassertimpl_87017)(NimStringDesc* msg);
N_NIMCALL(void, HEX3CHEX2D_312807)(Tindexentry312396* a, Tindexentry312396 b);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(void, merge_315346)(NimStringDesc** a, NI aLen0, NimStringDesc** b, NI bLen0, NI lo, NI m, NI hi, TY315308 cmp, NU8 order);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(void, merge_351563)(Tsym190843** a, NI aLen0, Tsym190843** b, NI bLen0, NI lo, NI m, NI hi, TY351525 cmp, NU8 order);
STRING_LITERAL(TMP5962, "j <= m ", 7);
extern TFrame* frameptr_17042;
extern TNimType NTI312897; /* seq[TIndexEntry] */
extern TNimType NTI13606; /* seq[string] */
extern TNimType NTI190815; /* TSymSeq */

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

static N_INLINE(NI, HEX2A_310020)(NI x, NU8 order) {
	NI result;
	NI y;
	NI TMP5844;
	NI TMP5845;
	nimfr("*", "algorithm.nim")
	result = 0;
	nimln(24, "algorithm.nim");
	TMP5844 = subInt(((NI) (order)), ((NI) 1));
	y = (NI)(TMP5844);
	nimln(25, "algorithm.nim");
	TMP5845 = subInt((NI)(x ^ ((NI) (y))), ((NI) (y)));
	result = (NI)(TMP5845);
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

N_NIMCALL(void, merge_313732)(Tindexentry312396* a, NI aLen0, Tindexentry312396* b, NI bLen0, NI lo, NI m, NI hi, TY313694 cmp, NU8 order) {
	NI j;
	NI bb;
	NI i;
	NI k;
	nimfr("merge", "algorithm.nim")
{	nimln(119, "algorithm.nim");
	{
		NI TMP5960;
		NI LOC3;
		NI LOC4;
		if ((NU)(m) >= (NU)(aLen0)) raiseIndexError();
		TMP5960 = addInt(m, ((NI) 1));
		if ((NU)((NI)(TMP5960)) >= (NU)(aLen0)) raiseIndexError();
		LOC3 = 0;
		LOC3 = cmp.ClEnv? cmp.ClPrc(a[m], a[(NI)(TMP5960)], cmp.ClEnv):((TMP5961)(cmp.ClPrc))(a[m], a[(NI)(TMP5960)]);
		LOC4 = 0;
		LOC4 = HEX2A_310020(LOC3, order);
		if (!(LOC4 <= ((NI) 0))) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	nimln(120, "algorithm.nim");
	j = lo;
	nimln(122, "algorithm.nim");
	{
		if (!!((j <= m))) goto LA9;
		failedassertimpl_87017(((NimStringDesc*) &TMP5962));
	}
	LA9: ;
	nimln(124, "algorithm.nim");
	bb = ((NI) 0);
	{
		nimln(125, "algorithm.nim");
		while (1) {
			NI TMP5963;
			NI TMP5964;
			if (!(j <= m)) goto LA12;
			nimln(126, "algorithm.nim");
			if ((NU)(bb) >= (NU)(bLen0)) raiseIndexError();
			if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
			HEX3CHEX2D_312807((&b[bb]), a[j]);
			nimln(127, "algorithm.nim");
			TMP5963 = addInt(bb, ((NI) 1));
			bb = (NI)(TMP5963);
			nimln(128, "algorithm.nim");
			TMP5964 = addInt(j, ((NI) 1));
			j = (NI)(TMP5964);
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
			NI TMP5968;
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
				NI TMP5966;
				if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
				if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
				LOC19 = 0;
				LOC19 = cmp.ClEnv? cmp.ClPrc(b[i], a[j], cmp.ClEnv):((TMP5965)(cmp.ClPrc))(b[i], a[j]);
				LOC20 = 0;
				LOC20 = HEX2A_310020(LOC19, order);
				if (!(LOC20 <= ((NI) 0))) goto LA21;
				nimln(137, "algorithm.nim");
				if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
				if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
				HEX3CHEX2D_312807((&a[k]), b[i]);
				nimln(138, "algorithm.nim");
				TMP5966 = addInt(i, ((NI) 1));
				i = (NI)(TMP5966);
			}
			goto LA17;
			LA21: ;
			{
				NI TMP5967;
				nimln(140, "algorithm.nim");
				if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
				if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
				HEX3CHEX2D_312807((&a[k]), a[j]);
				nimln(141, "algorithm.nim");
				TMP5967 = addInt(j, ((NI) 1));
				j = (NI)(TMP5967);
			}
			LA17: ;
			nimln(142, "algorithm.nim");
			TMP5968 = addInt(k, ((NI) 1));
			k = (NI)(TMP5968);
		} LA14: ;
	}
	{
		nimln(145, "algorithm.nim");
		while (1) {
			NI TMP5969;
			NI TMP5970;
			if (!(k < j)) goto LA25;
			nimln(146, "algorithm.nim");
			if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
			if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
			HEX3CHEX2D_312807((&a[k]), b[i]);
			nimln(147, "algorithm.nim");
			TMP5969 = addInt(k, ((NI) 1));
			k = (NI)(TMP5969);
			nimln(148, "algorithm.nim");
			TMP5970 = addInt(i, ((NI) 1));
			i = (NI)(TMP5970);
		} LA25: ;
	}
	}BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, sort_313687)(Tindexentry312396* a, NI aLen0, TY313694 cmp, NU8 order) {
	NI n;
	TY312897* b;
	NI TMP5955;
	NI s;
	nimfr("sort", "algorithm.nim")
	nimln(180, "algorithm.nim");
	n = aLen0;
	b = 0;
	nimln(182, "algorithm.nim");
	TMP5955 = divInt(n, ((NI) 2));
	b = (TY312897*) newSeq((&NTI312897), ((NI)chckRange((NI)(TMP5955), ((NI) 0), ((NI) 2147483647))));
	nimln(183, "algorithm.nim");
	s = ((NI) 1);
	{
		nimln(184, "algorithm.nim");
		while (1) {
			NI m;
			NI TMP5958;
			NI TMP5959;
			NI TMP5976;
			if (!(s < n)) goto LA2;
			nimln(185, "algorithm.nim");
			TMP5958 = subInt(n, ((NI) 1));
			TMP5959 = subInt((NI)(TMP5958), s);
			m = (NI)(TMP5959);
			{
				nimln(186, "algorithm.nim");
				while (1) {
					NI TMP5971;
					NI TMP5972;
					NI TMP5973;
					NI TMP5974;
					NI TMP5975;
					if (!(((NI) 0) <= m)) goto LA4;
					nimln(187, "algorithm.nim");
					TMP5971 = subInt(m, s);
					TMP5972 = addInt((NI)(TMP5971), ((NI) 1));
					TMP5973 = addInt(m, s);
					merge_313732(a, aLen0, b->data, b->Sup.len, (((NI)(TMP5972) >= ((NI) 0)) ? (NI)(TMP5972) : ((NI) 0)), m, (NI)(TMP5973), cmp, order);
					nimln(188, "algorithm.nim");
					TMP5974 = mulInt(s, ((NI) 2));
					TMP5975 = subInt(m, (NI)(TMP5974));
					m = (NI)(TMP5975);
				} LA4: ;
			}
			nimln(189, "algorithm.nim");
			TMP5976 = mulInt(s, ((NI) 2));
			s = (NI)(TMP5976);
		} LA2: ;
	}
	popFrame();
}

N_NIMCALL(void, merge_315346)(NimStringDesc** a, NI aLen0, NimStringDesc** b, NI bLen0, NI lo, NI m, NI hi, TY315308 cmp, NU8 order) {
	NI j;
	NI bb;
	NI i;
	NI k;
	nimfr("merge", "algorithm.nim")
{	nimln(119, "algorithm.nim");
	{
		NI TMP6006;
		NI LOC3;
		NI LOC4;
		if ((NU)(m) >= (NU)(aLen0)) raiseIndexError();
		TMP6006 = addInt(m, ((NI) 1));
		if ((NU)((NI)(TMP6006)) >= (NU)(aLen0)) raiseIndexError();
		LOC3 = 0;
		LOC3 = cmp.ClEnv? cmp.ClPrc(a[m], a[(NI)(TMP6006)], cmp.ClEnv):((TMP6007)(cmp.ClPrc))(a[m], a[(NI)(TMP6006)]);
		LOC4 = 0;
		LOC4 = HEX2A_310020(LOC3, order);
		if (!(LOC4 <= ((NI) 0))) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	nimln(120, "algorithm.nim");
	j = lo;
	nimln(122, "algorithm.nim");
	{
		if (!!((j <= m))) goto LA9;
		failedassertimpl_87017(((NimStringDesc*) &TMP5962));
	}
	LA9: ;
	nimln(124, "algorithm.nim");
	bb = ((NI) 0);
	{
		nimln(125, "algorithm.nim");
		while (1) {
			NI TMP6008;
			NI TMP6009;
			if (!(j <= m)) goto LA12;
			nimln(112, "algorithm.nim");
			if ((NU)(bb) >= (NU)(bLen0)) raiseIndexError();
			if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
			unsureAsgnRef((void**) (&b[bb]), a[j]);
			nimln(127, "algorithm.nim");
			TMP6008 = addInt(bb, ((NI) 1));
			bb = (NI)(TMP6008);
			nimln(128, "algorithm.nim");
			TMP6009 = addInt(j, ((NI) 1));
			j = (NI)(TMP6009);
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
			NI TMP6013;
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
				NI TMP6011;
				if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
				if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
				LOC19 = 0;
				LOC19 = cmp.ClEnv? cmp.ClPrc(b[i], a[j], cmp.ClEnv):((TMP6010)(cmp.ClPrc))(b[i], a[j]);
				LOC20 = 0;
				LOC20 = HEX2A_310020(LOC19, order);
				if (!(LOC20 <= ((NI) 0))) goto LA21;
				nimln(112, "algorithm.nim");
				if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
				if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
				unsureAsgnRef((void**) (&a[k]), b[i]);
				nimln(138, "algorithm.nim");
				TMP6011 = addInt(i, ((NI) 1));
				i = (NI)(TMP6011);
			}
			goto LA17;
			LA21: ;
			{
				NI TMP6012;
				nimln(112, "algorithm.nim");
				if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
				if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
				unsureAsgnRef((void**) (&a[k]), a[j]);
				nimln(141, "algorithm.nim");
				TMP6012 = addInt(j, ((NI) 1));
				j = (NI)(TMP6012);
			}
			LA17: ;
			nimln(142, "algorithm.nim");
			TMP6013 = addInt(k, ((NI) 1));
			k = (NI)(TMP6013);
		} LA14: ;
	}
	{
		nimln(145, "algorithm.nim");
		while (1) {
			NI TMP6014;
			NI TMP6015;
			if (!(k < j)) goto LA25;
			nimln(112, "algorithm.nim");
			if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
			if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
			unsureAsgnRef((void**) (&a[k]), b[i]);
			nimln(147, "algorithm.nim");
			TMP6014 = addInt(k, ((NI) 1));
			k = (NI)(TMP6014);
			nimln(148, "algorithm.nim");
			TMP6015 = addInt(i, ((NI) 1));
			i = (NI)(TMP6015);
		} LA25: ;
	}
	}BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, sort_315301)(NimStringDesc** a, NI aLen0, TY315308 cmp, NU8 order) {
	NI n;
	TY13606* b;
	NI TMP6003;
	NI s;
	nimfr("sort", "algorithm.nim")
	nimln(180, "algorithm.nim");
	n = aLen0;
	b = 0;
	nimln(182, "algorithm.nim");
	TMP6003 = divInt(n, ((NI) 2));
	b = (TY13606*) newSeq((&NTI13606), ((NI)chckRange((NI)(TMP6003), ((NI) 0), ((NI) 2147483647))));
	nimln(183, "algorithm.nim");
	s = ((NI) 1);
	{
		nimln(184, "algorithm.nim");
		while (1) {
			NI m;
			NI TMP6004;
			NI TMP6005;
			NI TMP6021;
			if (!(s < n)) goto LA2;
			nimln(185, "algorithm.nim");
			TMP6004 = subInt(n, ((NI) 1));
			TMP6005 = subInt((NI)(TMP6004), s);
			m = (NI)(TMP6005);
			{
				nimln(186, "algorithm.nim");
				while (1) {
					NI TMP6016;
					NI TMP6017;
					NI TMP6018;
					NI TMP6019;
					NI TMP6020;
					if (!(((NI) 0) <= m)) goto LA4;
					nimln(187, "algorithm.nim");
					TMP6016 = subInt(m, s);
					TMP6017 = addInt((NI)(TMP6016), ((NI) 1));
					TMP6018 = addInt(m, s);
					merge_315346(a, aLen0, b->data, b->Sup.len, (((NI)(TMP6017) >= ((NI) 0)) ? (NI)(TMP6017) : ((NI) 0)), m, (NI)(TMP6018), cmp, order);
					nimln(188, "algorithm.nim");
					TMP6019 = mulInt(s, ((NI) 2));
					TMP6020 = subInt(m, (NI)(TMP6019));
					m = (NI)(TMP6020);
				} LA4: ;
			}
			nimln(189, "algorithm.nim");
			TMP6021 = mulInt(s, ((NI) 2));
			s = (NI)(TMP6021);
		} LA2: ;
	}
	popFrame();
}

N_NIMCALL(void, merge_351563)(Tsym190843** a, NI aLen0, Tsym190843** b, NI bLen0, NI lo, NI m, NI hi, TY351525 cmp, NU8 order) {
	NI j;
	NI bb;
	NI i;
	NI k;
	nimfr("merge", "algorithm.nim")
{	nimln(119, "algorithm.nim");
	{
		NI TMP6958;
		NI LOC3;
		NI LOC4;
		if ((NU)(m) >= (NU)(aLen0)) raiseIndexError();
		TMP6958 = addInt(m, ((NI) 1));
		if ((NU)((NI)(TMP6958)) >= (NU)(aLen0)) raiseIndexError();
		LOC3 = 0;
		LOC3 = cmp.ClEnv? cmp.ClPrc(a[m], a[(NI)(TMP6958)], cmp.ClEnv):((TMP6959)(cmp.ClPrc))(a[m], a[(NI)(TMP6958)]);
		LOC4 = 0;
		LOC4 = HEX2A_310020(LOC3, order);
		if (!(LOC4 <= ((NI) 0))) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	nimln(120, "algorithm.nim");
	j = lo;
	nimln(122, "algorithm.nim");
	{
		if (!!((j <= m))) goto LA9;
		failedassertimpl_87017(((NimStringDesc*) &TMP5962));
	}
	LA9: ;
	nimln(124, "algorithm.nim");
	bb = ((NI) 0);
	{
		nimln(125, "algorithm.nim");
		while (1) {
			NI TMP6960;
			NI TMP6961;
			if (!(j <= m)) goto LA12;
			nimln(112, "algorithm.nim");
			if ((NU)(bb) >= (NU)(bLen0)) raiseIndexError();
			if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
			unsureAsgnRef((void**) (&b[bb]), a[j]);
			nimln(127, "algorithm.nim");
			TMP6960 = addInt(bb, ((NI) 1));
			bb = (NI)(TMP6960);
			nimln(128, "algorithm.nim");
			TMP6961 = addInt(j, ((NI) 1));
			j = (NI)(TMP6961);
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
			NI TMP6965;
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
				NI TMP6963;
				if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
				if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
				LOC19 = 0;
				LOC19 = cmp.ClEnv? cmp.ClPrc(b[i], a[j], cmp.ClEnv):((TMP6962)(cmp.ClPrc))(b[i], a[j]);
				LOC20 = 0;
				LOC20 = HEX2A_310020(LOC19, order);
				if (!(LOC20 <= ((NI) 0))) goto LA21;
				nimln(112, "algorithm.nim");
				if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
				if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
				unsureAsgnRef((void**) (&a[k]), b[i]);
				nimln(138, "algorithm.nim");
				TMP6963 = addInt(i, ((NI) 1));
				i = (NI)(TMP6963);
			}
			goto LA17;
			LA21: ;
			{
				NI TMP6964;
				nimln(112, "algorithm.nim");
				if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
				if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
				unsureAsgnRef((void**) (&a[k]), a[j]);
				nimln(141, "algorithm.nim");
				TMP6964 = addInt(j, ((NI) 1));
				j = (NI)(TMP6964);
			}
			LA17: ;
			nimln(142, "algorithm.nim");
			TMP6965 = addInt(k, ((NI) 1));
			k = (NI)(TMP6965);
		} LA14: ;
	}
	{
		nimln(145, "algorithm.nim");
		while (1) {
			NI TMP6966;
			NI TMP6967;
			if (!(k < j)) goto LA25;
			nimln(112, "algorithm.nim");
			if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
			if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
			unsureAsgnRef((void**) (&a[k]), b[i]);
			nimln(147, "algorithm.nim");
			TMP6966 = addInt(k, ((NI) 1));
			k = (NI)(TMP6966);
			nimln(148, "algorithm.nim");
			TMP6967 = addInt(i, ((NI) 1));
			i = (NI)(TMP6967);
		} LA25: ;
	}
	}BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, sort_351518)(Tsym190843** a, NI aLen0, TY351525 cmp, NU8 order) {
	NI n;
	Tsymseq190815* b;
	NI TMP6955;
	NI s;
	nimfr("sort", "algorithm.nim")
	nimln(180, "algorithm.nim");
	n = aLen0;
	b = 0;
	nimln(182, "algorithm.nim");
	TMP6955 = divInt(n, ((NI) 2));
	b = (Tsymseq190815*) newSeq((&NTI190815), ((NI)chckRange((NI)(TMP6955), ((NI) 0), ((NI) 2147483647))));
	nimln(183, "algorithm.nim");
	s = ((NI) 1);
	{
		nimln(184, "algorithm.nim");
		while (1) {
			NI m;
			NI TMP6956;
			NI TMP6957;
			NI TMP6973;
			if (!(s < n)) goto LA2;
			nimln(185, "algorithm.nim");
			TMP6956 = subInt(n, ((NI) 1));
			TMP6957 = subInt((NI)(TMP6956), s);
			m = (NI)(TMP6957);
			{
				nimln(186, "algorithm.nim");
				while (1) {
					NI TMP6968;
					NI TMP6969;
					NI TMP6970;
					NI TMP6971;
					NI TMP6972;
					if (!(((NI) 0) <= m)) goto LA4;
					nimln(187, "algorithm.nim");
					TMP6968 = subInt(m, s);
					TMP6969 = addInt((NI)(TMP6968), ((NI) 1));
					TMP6970 = addInt(m, s);
					merge_351563(a, aLen0, b->data, b->Sup.len, (((NI)(TMP6969) >= ((NI) 0)) ? (NI)(TMP6969) : ((NI) 0)), m, (NI)(TMP6970), cmp, order);
					nimln(188, "algorithm.nim");
					TMP6971 = mulInt(s, ((NI) 2));
					TMP6972 = subInt(m, (NI)(TMP6971));
					m = (NI)(TMP6972);
				} LA4: ;
			}
			nimln(189, "algorithm.nim");
			TMP6973 = mulInt(s, ((NI) 2));
			s = (NI)(TMP6973);
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

