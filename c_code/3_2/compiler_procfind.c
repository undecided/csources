/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Tnode190813 Tnode190813;
typedef struct Ttype190849 Ttype190849;
typedef struct Tlineinfo162338 Tlineinfo162338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym190843 Tsym190843;
typedef struct Tident166021 Tident166021;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tidobj166015 Tidobj166015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj160009 Ropeobj160009;
typedef struct Tlib190831 Tlib190831;
typedef struct Tcontext244023 Tcontext244023;
typedef struct Tidentiter198141 Tidentiter198141;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tpasscontext241005 Tpasscontext241005;
typedef struct Tproccon244011 Tproccon244011;
typedef struct Intset187056 Intset187056;
typedef struct Ttrunk187052 Ttrunk187052;
typedef struct Ttrunkseq187054 Ttrunkseq187054;
typedef struct Tlinkedlist130028 Tlinkedlist130028;
typedef struct Tidtable190861 Tidtable190861;
typedef struct Tidpairseq190859 Tidpairseq190859;
typedef struct Tctx243048 Tctx243048;
typedef struct TY244141 TY244141;
typedef struct TY190933 TY190933;
typedef struct Tidpair190857 Tidpair190857;
typedef struct TY243253 TY243253;
typedef struct TY163033 TY163033;
typedef struct PprocHEX3Aobjecttype243232 PprocHEX3Aobjecttype243232;
typedef struct TY243272 TY243272;
typedef struct Tinstantiationpair244013 Tinstantiationpair244013;
typedef struct TY243233 TY243233;
typedef struct TY243239 TY243239;
typedef struct TY243273 TY243273;
typedef struct Vmargs243042 Vmargs243042;
typedef struct Tblock243030 Tblock243030;
typedef struct TY243213 TY243213;
struct  Tlineinfo162338  {
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
typedef NU8 TY191031[20];
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
struct  Tidobj166015  {
  TNimObject Sup;
NI id;
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
struct  Tident166021  {
  Tidobj166015 Sup;
NimStringDesc* s;
Tident166021* next;
NI h;
};
struct  Tidentiter198141  {
NI h;
Tident166021* name;
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
typedef NimStringDesc* TY153965[2];
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  Tpasscontext241005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Intset187056  {
NI counter;
NI max;
Ttrunk187052* head;
Ttrunkseq187054* data;
};
struct  Tlinkedlist130028  {
Tlistentry130022* head;
Tlistentry130022* tail;
NI counter;
};
struct  Tidtable190861  {
NI counter;
Tidpairseq190859* data;
};
typedef N_NIMCALL_PTR(Tnode190813*, TY244072) (Tcontext244023* c, Tnode190813* n);
typedef N_NIMCALL_PTR(Tnode190813*, TY244077) (Tcontext244023* c, Tnode190813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode190813*, TY244085) (Tcontext244023* c, Tnode190813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode190813*, TY244093) (Tcontext244023* c, Tnode190813* n);
typedef N_NIMCALL_PTR(Tnode190813*, TY244098) (Tcontext244023* c, Tnode190813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode190813*, TY244106) (Tcontext244023* c, Tnode190813* n);
typedef N_NIMCALL_PTR(Tnode190813*, TY244111) (Tcontext244023* c, Tnode190813* n, Tnode190813* norig, NU32 filter);
typedef N_NIMCALL_PTR(Ttype190849*, TY244118) (Tcontext244023* c, Tnode190813* n, Ttype190849* prev);
typedef struct {
N_NIMCALL_PTR(Tnode190813*, ClPrc) (Tcontext244023* c, Tidtable190861 pt, Tnode190813* n, void* ClEnv);
void* ClEnv;
} TY244124;
typedef struct {
N_NIMCALL_PTR(Tsym190843*, ClPrc) (Tcontext244023* c, Tsym190843* fn, Tidtable190861 pt, Tlineinfo162338 info, void* ClEnv);
void* ClEnv;
} TY244130;
typedef N_NIMCALL_PTR(Tsym190843*, TY244146) (Tcontext244023* c, Tsym190843* dc, Ttype190849* t, Tlineinfo162338 info, NU8 op);
struct  Tcontext244023  {
  Tpasscontext241005 Sup;
Tsym190843* module;
Tscope190837* currentscope;
Tscope190837* importtable;
Tscope190837* toplevelscope;
Tproccon244011* p;
Tsymseq190815* friendmodules;
NI instcounter;
Intset187056 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI incompilescontext;
NI ingenericinst;
Tsymseq190815* converters;
Tsymseq190815* patterns;
Tlinkedlist130028 optionstack;
Tidtable190861 symmapping;
Tlinkedlist130028 libs;
TY244072 semconstexpr;
TY244077 semexpr;
TY244085 semtryexpr;
TY244093 semtryconstexpr;
TY244098 semoperand;
TY244106 semconstboolexpr;
TY244111 semoverloadedcall;
TY244118 semtypenode;
TY244124 seminferredlambda;
TY244130 semgenerateinstance;
Intset187056 includedfiles;
Tstrtable190817 userpragmas;
Tctx243048* evalcontext;
Intset187056 unknownidents;
TY244141* generics;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY244146 insttypeboundop;
};
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct  Tproccon244011  {
Tsym190843* owner;
Tsym190843* resultsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon244011* next;
NIM_BOOL wasforwarded;
Tnode190813* bracketexpr;
};
typedef NI TY28020[8];
struct  Ttrunk187052  {
Ttrunk187052* next;
NI key;
TY28020 bits;
};
struct  Tidpair190857  {
Tidobj166015* key;
TNimObject* val;
};
struct  Tctx243048  {
  Tpasscontext241005 Sup;
TY243253* code;
TY163033* debug;
Tnode190813* globals;
Tnode190813* constants;
Ttypeseq190845* types;
Tnode190813* currentexceptiona;
Tnode190813* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype243232* prc;
Tsym190843* module;
Tnode190813* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo162338 comesfromheuristic;
TY243272* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair244013  {
Tsym190843* genericsym;
Tinstantiation190833* inst;
};
struct TY243239 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY243239 TY243236[256];
struct  PprocHEX3Aobjecttype243232  {
TY243233* blocks;
Tsym190843* sym;
TY243236 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs243042* args, void* ClEnv);
void* ClEnv;
} Vmcallback243044;
struct TY243273 {
NimStringDesc* Field0;
Vmcallback243044 Field1;
};
struct  Tblock243030  {
Tsym190843* label;
TY243213* fixups;
};
struct  Vmargs243042  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode190813* currentexception;
};
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
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
struct Ttrunkseq187054 {
  TGenericSeq Sup;
  Ttrunk187052* data[SEQ_DECL_SIZE];
};
struct Tidpairseq190859 {
  TGenericSeq Sup;
  Tidpair190857 data[SEQ_DECL_SIZE];
};
struct TY244141 {
  TGenericSeq Sup;
  Tinstantiationpair244013 data[SEQ_DECL_SIZE];
};
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY243253 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY163033 {
  TGenericSeq Sup;
  Tlineinfo162338 data[SEQ_DECL_SIZE];
};
struct TY243272 {
  TGenericSeq Sup;
  TY243273 data[SEQ_DECL_SIZE];
};
struct TY243233 {
  TGenericSeq Sup;
  Tblock243030 data[SEQ_DECL_SIZE];
};
struct TY243213 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, equalgenericparams_259009)(Tnode190813* proca, Tnode190813* procb);
N_NIMCALL(NI, sonslen_193403)(Tnode190813* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, internalerror_164199)(Tlineinfo162338 info, NimStringDesc* errmsg);
N_NIMCALL(NIM_BOOL, sametypeornil_225108)(Ttype190849* a, Ttype190849* b, NU8 flags);
N_NIMCALL(NIM_BOOL, exprstructuralequivalent_219149)(Tnode190813* a, Tnode190813* b);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20201)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(Tsym190843*, searchforprocold_259109)(Tcontext244023* c, Tscope190837* scope, Tsym190843* fn);
N_NIMCALL(Tsym190843*, initidentiter_198147)(Tidentiter198141* ti, Tstrtable190817 tab, Tident166021* s);
N_NIMCALL(NIM_BOOL, isgenericroutine_195652)(Tsym190843* s);
N_NIMCALL(Tsym190843*, nextidentiter_198156)(Tidentiter198141* ti, Tstrtable190817 tab);
N_NIMCALL(NU8, equalparams_220086)(Tnode190813* a, Tnode190813* b);
N_NIMCALL(void, localerror_164155)(Tlineinfo162338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tsym190843*, searchforprocnew_259197)(Tcontext244023* c, Tscope190837* scope, Tsym190843* fn);
N_NIMCALL(NIM_BOOL, sametype_225092)(Ttype190849* a, Ttype190849* b, NU8 flags);
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* formatstr, NimStringDesc** a, NI aLen0);
N_NIMCALL(NimStringDesc*, getprocheader_220447)(Tsym190843* sym, NU8 prefer);
N_NIMCALL(NimStringDesc*, HEX24_163479)(Tlineinfo162338 info);
N_NIMCALL(Tsym190843*, searchforproc_259278)(Tcontext244023* c, Tscope190837* scope, Tsym190843* fn);
static NIM_CONST TY191031 TMP4503 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4504, "sons", 4);
STRING_LITERAL(TMP4505, "equalGenericParams", 18);
static NIM_CONST TY191031 TMP4506 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4507, "sym", 3);
NIM_CONST NU8 flags_259203 = 30;
STRING_LITERAL(TMP4509, "public implementation \'$1\' has non-public forward declaration i"
"n $2", 67);
extern TFrame* frameptr_17242;

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

N_NIMCALL(NIM_BOOL, equalgenericparams_259009)(Tnode190813* proca, Tnode190813* procb) {
	NIM_BOOL result;
	nimfr("equalGenericParams", "procfind.nim")
{	result = 0;
	nimln(17, "procfind.nim");
	{
		NI LOC3;
		NI LOC4;
		LOC3 = 0;
		LOC3 = sonslen_193403(proca);
		LOC4 = 0;
		LOC4 = sonslen_193403(procb);
		if (!!((LOC3 == LOC4))) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	{
		NI i_259026;
		NI HEX3Atmp_259087;
		NI LOC8;
		NI TMP4502;
		NI res_259090;
		i_259026 = 0;
		HEX3Atmp_259087 = 0;
		nimln(18, "procfind.nim");
		LOC8 = 0;
		LOC8 = sonslen_193403(proca);
		TMP4502 = subInt(LOC8, ((NI) 1));
		HEX3Atmp_259087 = (NI)(TMP4502);
		nimln(1598, "system.nim");
		res_259090 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				Tsym190843* a;
				Tsym190843* b;
				NI TMP4508;
				if (!(res_259090 <= HEX3Atmp_259087)) goto LA10;
				nimln(1600, "system.nim");
				i_259026 = res_259090;
				nimln(19, "procfind.nim");
				{
					if (((TMP4503[(*proca).kind/8] &(1<<((*proca).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4504));
					if ((NU)(i_259026) >= (NU)((*proca).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (!!(((*(*proca).kindU.S6.sons->data[i_259026]).kind == ((NU8) 3)))) goto LA13;
					nimln(20, "procfind.nim");
					internalerror_164199((*proca).info, ((NimStringDesc*) &TMP4505));
					nimln(21, "procfind.nim");
					goto BeforeRet;
				}
				LA13: ;
				nimln(22, "procfind.nim");
				{
					if (((TMP4503[(*procb).kind/8] &(1<<((*procb).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4504));
					if ((NU)(i_259026) >= (NU)((*procb).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (!!(((*(*procb).kindU.S6.sons->data[i_259026]).kind == ((NU8) 3)))) goto LA17;
					nimln(23, "procfind.nim");
					internalerror_164199((*procb).info, ((NimStringDesc*) &TMP4505));
					nimln(24, "procfind.nim");
					goto BeforeRet;
				}
				LA17: ;
				nimln(25, "procfind.nim");
				if (((TMP4503[(*proca).kind/8] &(1<<((*proca).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4504));
				if ((NU)(i_259026) >= (NU)((*proca).kindU.S6.sons->Sup.len)) raiseIndexError();
				if (!(((TMP4506[(*(*proca).kindU.S6.sons->data[i_259026]).kind/8] &(1<<((*(*proca).kindU.S6.sons->data[i_259026]).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4507));
				a = (*(*proca).kindU.S6.sons->data[i_259026]).kindU.S4.sym;
				nimln(26, "procfind.nim");
				if (((TMP4503[(*procb).kind/8] &(1<<((*procb).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4504));
				if ((NU)(i_259026) >= (NU)((*procb).kindU.S6.sons->Sup.len)) raiseIndexError();
				if (!(((TMP4506[(*(*procb).kindU.S6.sons->data[i_259026]).kind/8] &(1<<((*(*procb).kindU.S6.sons->data[i_259026]).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4507));
				b = (*(*procb).kindU.S6.sons->data[i_259026]).kindU.S4.sym;
				nimln(27, "procfind.nim");
				{
					NIM_BOOL LOC21;
					NIM_BOOL LOC23;
					LOC21 = 0;
					LOC21 = !(((*(*a).name).Sup.id == (*(*b).name).Sup.id));
					if (LOC21) goto LA22;
					nimln(28, "procfind.nim");
					LOC23 = 0;
					LOC23 = sametypeornil_225108((*a).typ, (*b).typ, 4);
					LOC21 = !(LOC23);
					LA22: ;
					if (!LOC21) goto LA24;
					goto BeforeRet;
				}
				LA24: ;
				nimln(29, "procfind.nim");
				{
					NIM_BOOL LOC28;
					LOC28 = 0;
					LOC28 = !(((*a).ast == NIM_NIL));
					if (!(LOC28)) goto LA29;
					LOC28 = !(((*b).ast == NIM_NIL));
					LA29: ;
					if (!LOC28) goto LA30;
					nimln(30, "procfind.nim");
					{
						NIM_BOOL LOC34;
						LOC34 = 0;
						LOC34 = exprstructuralequivalent_219149((*a).ast, (*b).ast);
						if (!!(LOC34)) goto LA35;
						goto BeforeRet;
					}
					LA35: ;
				}
				LA30: ;
				nimln(1614, "system.nim");
				TMP4508 = addInt(res_259090, ((NI) 1));
				res_259090 = (NI)(TMP4508);
			} LA10: ;
		}
	}
	nimln(31, "procfind.nim");
	result = NIM_TRUE;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(Tsym190843*, searchforprocold_259109)(Tcontext244023* c, Tscope190837* scope, Tsym190843* fn) {
	Tsym190843* result;
	Tidentiter198141 it;
	nimfr("searchForProcOld", "procfind.nim")
{	result = 0;
	memset((void*)(&it), 0, sizeof(it));
	nimln(38, "procfind.nim");
	result = initidentiter_198147((&it), (*scope).symbols, (*fn).name);
	nimln(39, "procfind.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = isgenericroutine_195652(fn);
		if (!LOC3) goto LA4;
		{
			nimln(43, "procfind.nim");
			while (1) {
				if (!!((result == NIM_NIL))) goto LA7;
				nimln(44, "procfind.nim");
				{
					NIM_BOOL LOC10;
					Tnode190813* genr;
					Tnode190813* genf;
					LOC10 = 0;
					LOC10 = ((*result).kind == (*fn).kind);
					if (!(LOC10)) goto LA11;
					LOC10 = isgenericroutine_195652(result);
					LA11: ;
					if (!LOC10) goto LA12;
					nimln(45, "procfind.nim");
					if (((TMP4503[(*(*result).ast).kind/8] &(1<<((*(*result).ast).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4504));
					if ((NU)(((NI) 2)) >= (NU)((*(*result).ast).kindU.S6.sons->Sup.len)) raiseIndexError();
					genr = (*(*result).ast).kindU.S6.sons->data[((NI) 2)];
					nimln(46, "procfind.nim");
					if (((TMP4503[(*(*fn).ast).kind/8] &(1<<((*(*fn).ast).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4504));
					if ((NU)(((NI) 2)) >= (NU)((*(*fn).ast).kindU.S6.sons->Sup.len)) raiseIndexError();
					genf = (*(*fn).ast).kindU.S6.sons->data[((NI) 2)];
					nimln(47, "procfind.nim");
					{
						NIM_BOOL LOC16;
						NIM_BOOL LOC17;
						nimln(49, "procfind.nim");
						LOC16 = 0;
						nimln(47, "procfind.nim");
						LOC17 = 0;
						LOC17 = exprstructuralequivalent_219149(genr, genf);
						if (!(LOC17)) goto LA18;
						nimln(48, "procfind.nim");
						if (((TMP4503[(*(*result).ast).kind/8] &(1<<((*(*result).ast).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4504));
						if ((NU)(((NI) 3)) >= (NU)((*(*result).ast).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP4503[(*(*fn).ast).kind/8] &(1<<((*(*fn).ast).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4504));
						if ((NU)(((NI) 3)) >= (NU)((*(*fn).ast).kindU.S6.sons->Sup.len)) raiseIndexError();
						LOC17 = exprstructuralequivalent_219149((*(*result).ast).kindU.S6.sons->data[((NI) 3)], (*(*fn).ast).kindU.S6.sons->data[((NI) 3)]);
						LA18: ;
						LOC16 = LOC17;
						if (!(LOC16)) goto LA19;
						nimln(50, "procfind.nim");
						LOC16 = equalgenericparams_259009(genr, genf);
						LA19: ;
						if (!LOC16) goto LA20;
						nimln(51, "procfind.nim");
						goto BeforeRet;
					}
					LA20: ;
				}
				LA12: ;
				nimln(52, "procfind.nim");
				result = nextidentiter_198156((&it), (*scope).symbols);
			} LA7: ;
		}
	}
	goto LA1;
	LA4: ;
	{
		{
			nimln(54, "procfind.nim");
			while (1) {
				if (!!((result == NIM_NIL))) goto LA24;
				nimln(55, "procfind.nim");
				{
					NIM_BOOL LOC27;
					NIM_BOOL LOC29;
					NU8 LOC32;
					LOC27 = 0;
					LOC27 = ((*result).kind == (*fn).kind);
					if (!(LOC27)) goto LA28;
					LOC29 = 0;
					LOC29 = isgenericroutine_195652(result);
					LOC27 = !(LOC29);
					LA28: ;
					if (!LOC27) goto LA30;
					nimln(56, "procfind.nim");
					LOC32 = 0;
					LOC32 = equalparams_220086((*(*result).typ).n, (*(*fn).typ).n);
					switch (LOC32) {
					case ((NU8) 1):
					{
						nimln(58, "procfind.nim");
						goto BeforeRet;
					}
					break;
					case ((NU8) 2):
					{
						nimln(60, "procfind.nim");
						localerror_164155((*fn).info, ((NU16) 66), (*(*fn).name).s);
						nimln(61, "procfind.nim");
						goto BeforeRet;
					}
					break;
					case ((NU8) 0):
					{
					}
					break;
					}
				}
				LA30: ;
				nimln(64, "procfind.nim");
				result = nextidentiter_198156((&it), (*scope).symbols);
			} LA24: ;
		}
	}
	LA1: ;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(Tsym190843*, searchforprocnew_259197)(Tcontext244023* c, Tscope190837* scope, Tsym190843* fn) {
	Tsym190843* result;
	Tidentiter198141 it;
	nimfr("searchForProcNew", "procfind.nim")
{	result = 0;
	memset((void*)(&it), 0, sizeof(it));
	nimln(72, "procfind.nim");
	result = initidentiter_198147((&it), (*scope).symbols, (*fn).name);
	{
		nimln(73, "procfind.nim");
		while (1) {
			if (!!((result == NIM_NIL))) goto LA2;
			nimln(74, "procfind.nim");
			{
				NIM_BOOL LOC5;
				NU8 LOC9;
				LOC5 = 0;
				LOC5 = ((520192 &(1<<(((*result).kind)&31)))!=0);
				if (!(LOC5)) goto LA6;
				LOC5 = sametype_225092((*result).typ, (*fn).typ, 30);
				LA6: ;
				if (!LOC5) goto LA7;
				nimln(75, "procfind.nim");
				LOC9 = 0;
				LOC9 = equalparams_220086((*(*result).typ).n, (*(*fn).typ).n);
				switch (LOC9) {
				case ((NU8) 1):
				{
					nimln(77, "procfind.nim");
					{
						NIM_BOOL LOC13;
						NimStringDesc* message;
						TY153965 LOC17;
						LOC13 = 0;
						LOC13 = !((((*result).flags &(1<<((((NU8) 1))&31)))!=0));
						if (!(LOC13)) goto LA14;
						LOC13 = (((*fn).flags &(1<<((((NU8) 1))&31)))!=0);
						LA14: ;
						if (!LOC13) goto LA15;
						nimln(78, "procfind.nim");
						memset((void*)LOC17, 0, sizeof(LOC17));
						nimln(80, "procfind.nim");
						LOC17[0] = getprocheader_220447(result, ((NU8) 0));
						LOC17[1] = HEX24_163479((*result).info);
						message = nsuFormatOpenArray(((NimStringDesc*) &TMP4509), LOC17, 2);
						nimln(81, "procfind.nim");
						localerror_164155((*fn).info, ((NU16) 4), message);
					}
					LA15: ;
					nimln(82, "procfind.nim");
					goto BeforeRet;
				}
				break;
				case ((NU8) 2):
				{
					nimln(84, "procfind.nim");
					localerror_164155((*fn).info, ((NU16) 66), (*(*fn).name).s);
					nimln(85, "procfind.nim");
					goto BeforeRet;
				}
				break;
				case ((NU8) 0):
				{
				}
				break;
				}
			}
			LA7: ;
			nimln(89, "procfind.nim");
			result = nextidentiter_198156((&it), (*scope).symbols);
		} LA2: ;
	}
	nimln(91, "procfind.nim");
	result = NIM_NIL;
	goto BeforeRet;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(Tsym190843*, searchforproc_259278)(Tcontext244023* c, Tscope190837* scope, Tsym190843* fn) {
	Tsym190843* result;
	nimfr("searchForProc", "procfind.nim")
	result = 0;
	nimln(94, "procfind.nim");
	result = searchforprocnew_259197(c, scope, fn);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_procfindInit)(void) {
	nimfr("procfind", "procfind.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_procfindDatInit)(void) {
}

