/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct Tindexentry311396 Tindexentry311396;
typedef struct TY311897 TY311897;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY13606 TY13606;
typedef struct Tsym189843 Tsym189843;
typedef struct Tsymseq189815 Tsymseq189815;
typedef struct Tidobj165015 Tidobj165015;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq189845 Ttypeseq189845;
typedef struct Tscope189837 Tscope189837;
typedef struct TY189944 TY189944;
typedef struct Tstrtable189817 Tstrtable189817;
typedef struct Ttype189849 Ttype189849;
typedef struct Tident165021 Tident165021;
typedef struct Tlineinfo161338 Tlineinfo161338;
typedef struct Tnode189813 Tnode189813;
typedef struct Tloc189827 Tloc189827;
typedef struct Ropeobj159009 Ropeobj159009;
typedef struct Tlib189831 Tlib189831;
typedef struct Tnodeseq189807 Tnodeseq189807;
typedef struct Tinstantiation189833 Tinstantiation189833;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct TY189933 TY189933;
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (Tindexentry311396* x_312696, Tindexentry311396* y_312698, void* ClEnv);
void* ClEnv;
} TY312694;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tindexentry311396  {
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
typedef N_CLOSURE_PTR(NI, TMP5962) (Tindexentry311396* x_312751, Tindexentry311396* y_312753);
typedef N_CLOSURE_PTR(NI, TMP5966) (Tindexentry311396* x_312751, Tindexentry311396* y_312753);
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (NimStringDesc* x_314310, NimStringDesc* y_314312, void* ClEnv);
void* ClEnv;
} TY314308;
typedef N_CLOSURE_PTR(NI, TMP6008) (NimStringDesc* x_314365, NimStringDesc* y_314367);
typedef N_CLOSURE_PTR(NI, TMP6011) (NimStringDesc* x_314365, NimStringDesc* y_314367);
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (Tsym189843* x_350527, Tsym189843* y_350529, void* ClEnv);
void* ClEnv;
} TY350525;
typedef N_CLOSURE_PTR(NI, TMP6968) (Tsym189843* x_350582, Tsym189843* y_350584);
typedef N_CLOSURE_PTR(NI, TMP6971) (Tsym189843* x_350582, Tsym189843* y_350584);
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj165015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable189817  {
NI counter;
Tsymseq189815* data;
};
struct  Tlineinfo161338  {
NI16 line;
NI16 col;
NI32 fileindex;
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
struct  Tscope189837  {
NI depthlevel;
Tstrtable189817 symbols;
Tnodeseq189807* usingsyms;
Tscope189837* parent;
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
struct  Tident165021  {
  Tidobj165015 Sup;
NimStringDesc* s;
Tident165021* next;
NI h;
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
struct  Tinstantiation189833  {
Tsym189843* sym;
Ttypeseq189845* concretetypes;
TY189933* usedby;
};
struct TY311897 {
  TGenericSeq Sup;
  Tindexentry311396 data[SEQ_DECL_SIZE];
};
struct TY13606 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct Tsymseq189815 {
  TGenericSeq Sup;
  Tsym189843* data[SEQ_DECL_SIZE];
};
struct Ttypeseq189845 {
  TGenericSeq Sup;
  Ttype189849* data[SEQ_DECL_SIZE];
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
static N_INLINE(NI, HEX2A_309020)(NI x, NU8 order);
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
N_NIMCALL(void, merge_312732)(Tindexentry311396* a, NI aLen0, Tindexentry311396* b, NI bLen0, NI lo, NI m, NI hi, TY312694 cmp, NU8 order);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, failedassertimpl_87017)(NimStringDesc* msg);
N_NIMCALL(void, HEX3CHEX2D_311807)(Tindexentry311396* a, Tindexentry311396* b);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(void, merge_314346)(NimStringDesc** a, NI aLen0, NimStringDesc** b, NI bLen0, NI lo, NI m, NI hi, TY314308 cmp, NU8 order);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(void, merge_350563)(Tsym189843** a, NI aLen0, Tsym189843** b, NI bLen0, NI lo, NI m, NI hi, TY350525 cmp, NU8 order);
STRING_LITERAL(TMP5963, "j <= m ", 7);
extern TFrame* frameptr_17042;
extern TNimType NTI311897; /* seq[TIndexEntry] */
extern TNimType NTI13606; /* seq[string] */
extern TNimType NTI189815; /* TSymSeq */

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

static N_INLINE(NI, HEX2A_309020)(NI x, NU8 order) {
	NI result;
	NI y;
	NI TMP5845;
	NI TMP5846;
	nimfr("*", "algorithm.nim")
	result = 0;
	nimln(24, "algorithm.nim");
	TMP5845 = subInt(((NI) (order)), ((NI) 1));
	y = (NI)(TMP5845);
	nimln(25, "algorithm.nim");
	TMP5846 = subInt((NI)(x ^ ((NI) (y))), ((NI) (y)));
	result = (NI)(TMP5846);
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

N_NIMCALL(void, merge_312732)(Tindexentry311396* a, NI aLen0, Tindexentry311396* b, NI bLen0, NI lo, NI m, NI hi, TY312694 cmp, NU8 order) {
	NI j;
	NI bb;
	NI i;
	NI k;
	nimfr("merge", "algorithm.nim")
{	nimln(119, "algorithm.nim");
	{
		NI TMP5961;
		NI LOC3;
		NI LOC4;
		if ((NU)(m) >= (NU)(aLen0)) raiseIndexError();
		TMP5961 = addInt(m, ((NI) 1));
		if ((NU)((NI)(TMP5961)) >= (NU)(aLen0)) raiseIndexError();
		LOC3 = 0;
		LOC3 = cmp.ClEnv? cmp.ClPrc((&a[m]), (&a[(NI)(TMP5961)]), cmp.ClEnv):((TMP5962)(cmp.ClPrc))((&a[m]), (&a[(NI)(TMP5961)]));
		LOC4 = 0;
		LOC4 = HEX2A_309020(LOC3, order);
		if (!(LOC4 <= ((NI) 0))) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	nimln(120, "algorithm.nim");
	j = lo;
	nimln(122, "algorithm.nim");
	{
		if (!!((j <= m))) goto LA9;
		failedassertimpl_87017(((NimStringDesc*) &TMP5963));
	}
	LA9: ;
	nimln(124, "algorithm.nim");
	bb = ((NI) 0);
	{
		nimln(125, "algorithm.nim");
		while (1) {
			NI TMP5964;
			NI TMP5965;
			if (!(j <= m)) goto LA12;
			nimln(126, "algorithm.nim");
			if ((NU)(bb) >= (NU)(bLen0)) raiseIndexError();
			if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
			HEX3CHEX2D_311807((&b[bb]), (&a[j]));
			nimln(127, "algorithm.nim");
			TMP5964 = addInt(bb, ((NI) 1));
			bb = (NI)(TMP5964);
			nimln(128, "algorithm.nim");
			TMP5965 = addInt(j, ((NI) 1));
			j = (NI)(TMP5965);
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
			NI TMP5969;
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
				NI TMP5967;
				if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
				if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
				LOC19 = 0;
				LOC19 = cmp.ClEnv? cmp.ClPrc((&b[i]), (&a[j]), cmp.ClEnv):((TMP5966)(cmp.ClPrc))((&b[i]), (&a[j]));
				LOC20 = 0;
				LOC20 = HEX2A_309020(LOC19, order);
				if (!(LOC20 <= ((NI) 0))) goto LA21;
				nimln(137, "algorithm.nim");
				if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
				if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
				HEX3CHEX2D_311807((&a[k]), (&b[i]));
				nimln(138, "algorithm.nim");
				TMP5967 = addInt(i, ((NI) 1));
				i = (NI)(TMP5967);
			}
			goto LA17;
			LA21: ;
			{
				NI TMP5968;
				nimln(140, "algorithm.nim");
				if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
				if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
				HEX3CHEX2D_311807((&a[k]), (&a[j]));
				nimln(141, "algorithm.nim");
				TMP5968 = addInt(j, ((NI) 1));
				j = (NI)(TMP5968);
			}
			LA17: ;
			nimln(142, "algorithm.nim");
			TMP5969 = addInt(k, ((NI) 1));
			k = (NI)(TMP5969);
		} LA14: ;
	}
	{
		nimln(145, "algorithm.nim");
		while (1) {
			NI TMP5970;
			NI TMP5971;
			if (!(k < j)) goto LA25;
			nimln(146, "algorithm.nim");
			if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
			if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
			HEX3CHEX2D_311807((&a[k]), (&b[i]));
			nimln(147, "algorithm.nim");
			TMP5970 = addInt(k, ((NI) 1));
			k = (NI)(TMP5970);
			nimln(148, "algorithm.nim");
			TMP5971 = addInt(i, ((NI) 1));
			i = (NI)(TMP5971);
		} LA25: ;
	}
	}BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, sort_312687)(Tindexentry311396* a, NI aLen0, TY312694 cmp, NU8 order) {
	NI n;
	TY311897* b;
	NI TMP5956;
	NI s;
	nimfr("sort", "algorithm.nim")
	nimln(180, "algorithm.nim");
	n = aLen0;
	b = 0;
	nimln(182, "algorithm.nim");
	TMP5956 = divInt(n, ((NI) 2));
	b = (TY311897*) newSeq((&NTI311897), ((NI)chckRange((NI)(TMP5956), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	nimln(183, "algorithm.nim");
	s = ((NI) 1);
	{
		nimln(184, "algorithm.nim");
		while (1) {
			NI m;
			NI TMP5959;
			NI TMP5960;
			NI TMP5977;
			if (!(s < n)) goto LA2;
			nimln(185, "algorithm.nim");
			TMP5959 = subInt(n, ((NI) 1));
			TMP5960 = subInt((NI)(TMP5959), s);
			m = (NI)(TMP5960);
			{
				nimln(186, "algorithm.nim");
				while (1) {
					NI TMP5972;
					NI TMP5973;
					NI TMP5974;
					NI TMP5975;
					NI TMP5976;
					if (!(((NI) 0) <= m)) goto LA4;
					nimln(187, "algorithm.nim");
					TMP5972 = subInt(m, s);
					TMP5973 = addInt((NI)(TMP5972), ((NI) 1));
					TMP5974 = addInt(m, s);
					merge_312732(a, aLen0, b->data, b->Sup.len, (((NI)(TMP5973) >= ((NI) 0)) ? (NI)(TMP5973) : ((NI) 0)), m, (NI)(TMP5974), cmp, order);
					nimln(188, "algorithm.nim");
					TMP5975 = mulInt(s, ((NI) 2));
					TMP5976 = subInt(m, (NI)(TMP5975));
					m = (NI)(TMP5976);
				} LA4: ;
			}
			nimln(189, "algorithm.nim");
			TMP5977 = mulInt(s, ((NI) 2));
			s = (NI)(TMP5977);
		} LA2: ;
	}
	popFrame();
}

N_NIMCALL(void, merge_314346)(NimStringDesc** a, NI aLen0, NimStringDesc** b, NI bLen0, NI lo, NI m, NI hi, TY314308 cmp, NU8 order) {
	NI j;
	NI bb;
	NI i;
	NI k;
	nimfr("merge", "algorithm.nim")
{	nimln(119, "algorithm.nim");
	{
		NI TMP6007;
		NI LOC3;
		NI LOC4;
		if ((NU)(m) >= (NU)(aLen0)) raiseIndexError();
		TMP6007 = addInt(m, ((NI) 1));
		if ((NU)((NI)(TMP6007)) >= (NU)(aLen0)) raiseIndexError();
		LOC3 = 0;
		LOC3 = cmp.ClEnv? cmp.ClPrc(a[m], a[(NI)(TMP6007)], cmp.ClEnv):((TMP6008)(cmp.ClPrc))(a[m], a[(NI)(TMP6007)]);
		LOC4 = 0;
		LOC4 = HEX2A_309020(LOC3, order);
		if (!(LOC4 <= ((NI) 0))) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	nimln(120, "algorithm.nim");
	j = lo;
	nimln(122, "algorithm.nim");
	{
		if (!!((j <= m))) goto LA9;
		failedassertimpl_87017(((NimStringDesc*) &TMP5963));
	}
	LA9: ;
	nimln(124, "algorithm.nim");
	bb = ((NI) 0);
	{
		nimln(125, "algorithm.nim");
		while (1) {
			NI TMP6009;
			NI TMP6010;
			if (!(j <= m)) goto LA12;
			nimln(112, "algorithm.nim");
			if ((NU)(bb) >= (NU)(bLen0)) raiseIndexError();
			if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
			unsureAsgnRef((void**) (&b[bb]), a[j]);
			nimln(127, "algorithm.nim");
			TMP6009 = addInt(bb, ((NI) 1));
			bb = (NI)(TMP6009);
			nimln(128, "algorithm.nim");
			TMP6010 = addInt(j, ((NI) 1));
			j = (NI)(TMP6010);
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
			NI TMP6014;
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
				NI TMP6012;
				if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
				if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
				LOC19 = 0;
				LOC19 = cmp.ClEnv? cmp.ClPrc(b[i], a[j], cmp.ClEnv):((TMP6011)(cmp.ClPrc))(b[i], a[j]);
				LOC20 = 0;
				LOC20 = HEX2A_309020(LOC19, order);
				if (!(LOC20 <= ((NI) 0))) goto LA21;
				nimln(112, "algorithm.nim");
				if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
				if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
				unsureAsgnRef((void**) (&a[k]), b[i]);
				nimln(138, "algorithm.nim");
				TMP6012 = addInt(i, ((NI) 1));
				i = (NI)(TMP6012);
			}
			goto LA17;
			LA21: ;
			{
				NI TMP6013;
				nimln(112, "algorithm.nim");
				if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
				if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
				unsureAsgnRef((void**) (&a[k]), a[j]);
				nimln(141, "algorithm.nim");
				TMP6013 = addInt(j, ((NI) 1));
				j = (NI)(TMP6013);
			}
			LA17: ;
			nimln(142, "algorithm.nim");
			TMP6014 = addInt(k, ((NI) 1));
			k = (NI)(TMP6014);
		} LA14: ;
	}
	{
		nimln(145, "algorithm.nim");
		while (1) {
			NI TMP6015;
			NI TMP6016;
			if (!(k < j)) goto LA25;
			nimln(112, "algorithm.nim");
			if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
			if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
			unsureAsgnRef((void**) (&a[k]), b[i]);
			nimln(147, "algorithm.nim");
			TMP6015 = addInt(k, ((NI) 1));
			k = (NI)(TMP6015);
			nimln(148, "algorithm.nim");
			TMP6016 = addInt(i, ((NI) 1));
			i = (NI)(TMP6016);
		} LA25: ;
	}
	}BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, sort_314301)(NimStringDesc** a, NI aLen0, TY314308 cmp, NU8 order) {
	NI n;
	TY13606* b;
	NI TMP6004;
	NI s;
	nimfr("sort", "algorithm.nim")
	nimln(180, "algorithm.nim");
	n = aLen0;
	b = 0;
	nimln(182, "algorithm.nim");
	TMP6004 = divInt(n, ((NI) 2));
	b = (TY13606*) newSeq((&NTI13606), ((NI)chckRange((NI)(TMP6004), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	nimln(183, "algorithm.nim");
	s = ((NI) 1);
	{
		nimln(184, "algorithm.nim");
		while (1) {
			NI m;
			NI TMP6005;
			NI TMP6006;
			NI TMP6022;
			if (!(s < n)) goto LA2;
			nimln(185, "algorithm.nim");
			TMP6005 = subInt(n, ((NI) 1));
			TMP6006 = subInt((NI)(TMP6005), s);
			m = (NI)(TMP6006);
			{
				nimln(186, "algorithm.nim");
				while (1) {
					NI TMP6017;
					NI TMP6018;
					NI TMP6019;
					NI TMP6020;
					NI TMP6021;
					if (!(((NI) 0) <= m)) goto LA4;
					nimln(187, "algorithm.nim");
					TMP6017 = subInt(m, s);
					TMP6018 = addInt((NI)(TMP6017), ((NI) 1));
					TMP6019 = addInt(m, s);
					merge_314346(a, aLen0, b->data, b->Sup.len, (((NI)(TMP6018) >= ((NI) 0)) ? (NI)(TMP6018) : ((NI) 0)), m, (NI)(TMP6019), cmp, order);
					nimln(188, "algorithm.nim");
					TMP6020 = mulInt(s, ((NI) 2));
					TMP6021 = subInt(m, (NI)(TMP6020));
					m = (NI)(TMP6021);
				} LA4: ;
			}
			nimln(189, "algorithm.nim");
			TMP6022 = mulInt(s, ((NI) 2));
			s = (NI)(TMP6022);
		} LA2: ;
	}
	popFrame();
}

N_NIMCALL(void, merge_350563)(Tsym189843** a, NI aLen0, Tsym189843** b, NI bLen0, NI lo, NI m, NI hi, TY350525 cmp, NU8 order) {
	NI j;
	NI bb;
	NI i;
	NI k;
	nimfr("merge", "algorithm.nim")
{	nimln(119, "algorithm.nim");
	{
		NI TMP6967;
		NI LOC3;
		NI LOC4;
		if ((NU)(m) >= (NU)(aLen0)) raiseIndexError();
		TMP6967 = addInt(m, ((NI) 1));
		if ((NU)((NI)(TMP6967)) >= (NU)(aLen0)) raiseIndexError();
		LOC3 = 0;
		LOC3 = cmp.ClEnv? cmp.ClPrc(a[m], a[(NI)(TMP6967)], cmp.ClEnv):((TMP6968)(cmp.ClPrc))(a[m], a[(NI)(TMP6967)]);
		LOC4 = 0;
		LOC4 = HEX2A_309020(LOC3, order);
		if (!(LOC4 <= ((NI) 0))) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	nimln(120, "algorithm.nim");
	j = lo;
	nimln(122, "algorithm.nim");
	{
		if (!!((j <= m))) goto LA9;
		failedassertimpl_87017(((NimStringDesc*) &TMP5963));
	}
	LA9: ;
	nimln(124, "algorithm.nim");
	bb = ((NI) 0);
	{
		nimln(125, "algorithm.nim");
		while (1) {
			NI TMP6969;
			NI TMP6970;
			if (!(j <= m)) goto LA12;
			nimln(112, "algorithm.nim");
			if ((NU)(bb) >= (NU)(bLen0)) raiseIndexError();
			if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
			unsureAsgnRef((void**) (&b[bb]), a[j]);
			nimln(127, "algorithm.nim");
			TMP6969 = addInt(bb, ((NI) 1));
			bb = (NI)(TMP6969);
			nimln(128, "algorithm.nim");
			TMP6970 = addInt(j, ((NI) 1));
			j = (NI)(TMP6970);
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
			NI TMP6974;
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
				NI TMP6972;
				if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
				if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
				LOC19 = 0;
				LOC19 = cmp.ClEnv? cmp.ClPrc(b[i], a[j], cmp.ClEnv):((TMP6971)(cmp.ClPrc))(b[i], a[j]);
				LOC20 = 0;
				LOC20 = HEX2A_309020(LOC19, order);
				if (!(LOC20 <= ((NI) 0))) goto LA21;
				nimln(112, "algorithm.nim");
				if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
				if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
				unsureAsgnRef((void**) (&a[k]), b[i]);
				nimln(138, "algorithm.nim");
				TMP6972 = addInt(i, ((NI) 1));
				i = (NI)(TMP6972);
			}
			goto LA17;
			LA21: ;
			{
				NI TMP6973;
				nimln(112, "algorithm.nim");
				if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
				if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
				unsureAsgnRef((void**) (&a[k]), a[j]);
				nimln(141, "algorithm.nim");
				TMP6973 = addInt(j, ((NI) 1));
				j = (NI)(TMP6973);
			}
			LA17: ;
			nimln(142, "algorithm.nim");
			TMP6974 = addInt(k, ((NI) 1));
			k = (NI)(TMP6974);
		} LA14: ;
	}
	{
		nimln(145, "algorithm.nim");
		while (1) {
			NI TMP6975;
			NI TMP6976;
			if (!(k < j)) goto LA25;
			nimln(112, "algorithm.nim");
			if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
			if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
			unsureAsgnRef((void**) (&a[k]), b[i]);
			nimln(147, "algorithm.nim");
			TMP6975 = addInt(k, ((NI) 1));
			k = (NI)(TMP6975);
			nimln(148, "algorithm.nim");
			TMP6976 = addInt(i, ((NI) 1));
			i = (NI)(TMP6976);
		} LA25: ;
	}
	}BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, sort_350518)(Tsym189843** a, NI aLen0, TY350525 cmp, NU8 order) {
	NI n;
	Tsymseq189815* b;
	NI TMP6964;
	NI s;
	nimfr("sort", "algorithm.nim")
	nimln(180, "algorithm.nim");
	n = aLen0;
	b = 0;
	nimln(182, "algorithm.nim");
	TMP6964 = divInt(n, ((NI) 2));
	b = (Tsymseq189815*) newSeq((&NTI189815), ((NI)chckRange((NI)(TMP6964), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	nimln(183, "algorithm.nim");
	s = ((NI) 1);
	{
		nimln(184, "algorithm.nim");
		while (1) {
			NI m;
			NI TMP6965;
			NI TMP6966;
			NI TMP6982;
			if (!(s < n)) goto LA2;
			nimln(185, "algorithm.nim");
			TMP6965 = subInt(n, ((NI) 1));
			TMP6966 = subInt((NI)(TMP6965), s);
			m = (NI)(TMP6966);
			{
				nimln(186, "algorithm.nim");
				while (1) {
					NI TMP6977;
					NI TMP6978;
					NI TMP6979;
					NI TMP6980;
					NI TMP6981;
					if (!(((NI) 0) <= m)) goto LA4;
					nimln(187, "algorithm.nim");
					TMP6977 = subInt(m, s);
					TMP6978 = addInt((NI)(TMP6977), ((NI) 1));
					TMP6979 = addInt(m, s);
					merge_350563(a, aLen0, b->data, b->Sup.len, (((NI)(TMP6978) >= ((NI) 0)) ? (NI)(TMP6978) : ((NI) 0)), m, (NI)(TMP6979), cmp, order);
					nimln(188, "algorithm.nim");
					TMP6980 = mulInt(s, ((NI) 2));
					TMP6981 = subInt(m, (NI)(TMP6980));
					m = (NI)(TMP6981);
				} LA4: ;
			}
			nimln(189, "algorithm.nim");
			TMP6982 = mulInt(s, ((NI) 2));
			s = (NI)(TMP6982);
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

