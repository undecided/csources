/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Tnode192813 Tnode192813;
typedef struct Ttype192849 Ttype192849;
typedef struct Tlineinfo164338 Tlineinfo164338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym192843 Tsym192843;
typedef struct Tident168021 Tident168021;
typedef struct Tnodeseq192807 Tnodeseq192807;
typedef struct Tidobj168015 Tidobj168015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq192845 Ttypeseq192845;
typedef struct Tscope192837 Tscope192837;
typedef struct TY192944 TY192944;
typedef struct Tstrtable192817 Tstrtable192817;
typedef struct Tsymseq192815 Tsymseq192815;
typedef struct Tloc192827 Tloc192827;
typedef struct Ropeobj162009 Ropeobj162009;
typedef struct Tlib192831 Tlib192831;
typedef struct Tcontext246023 Tcontext246023;
typedef struct Tidentiter200141 Tidentiter200141;
typedef struct Tinstantiation192833 Tinstantiation192833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tpasscontext243005 Tpasscontext243005;
typedef struct Tproccon246011 Tproccon246011;
typedef struct Intset189056 Intset189056;
typedef struct Ttrunk189052 Ttrunk189052;
typedef struct Ttrunkseq189054 Ttrunkseq189054;
typedef struct Tlinkedlist130028 Tlinkedlist130028;
typedef struct Tidtable192861 Tidtable192861;
typedef struct Tidpairseq192859 Tidpairseq192859;
typedef struct Tctx245048 Tctx245048;
typedef struct TY246141 TY246141;
typedef struct TY192933 TY192933;
typedef struct Tidpair192857 Tidpair192857;
typedef struct TY245253 TY245253;
typedef struct TY165033 TY165033;
typedef struct PprocHEX3Aobjecttype245232 PprocHEX3Aobjecttype245232;
typedef struct TY245272 TY245272;
typedef struct Tinstantiationpair246013 Tinstantiationpair246013;
typedef struct TY245233 TY245233;
typedef struct TY245239 TY245239;
typedef struct TY245273 TY245273;
typedef struct Vmargs245042 Vmargs245042;
typedef struct Tblock245030 Tblock245030;
typedef struct TY245213 TY245213;
struct  Tlineinfo164338  {
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
struct  Tstrtable192817  {
NI counter;
Tsymseq192815* data;
};
struct  Tloc192827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype192849* t;
Ropeobj162009* r;
Ropeobj162009* heaproot;
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
struct  Tident168021  {
  Tidobj168015 Sup;
NimStringDesc* s;
Tident168021* next;
NI h;
};
struct  Tidentiter200141  {
NI h;
Tident168021* name;
};
struct  Tscope192837  {
NI depthlevel;
Tstrtable192817 symbols;
Tnodeseq192807* usingsyms;
Tscope192837* parent;
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
typedef NimStringDesc* TY155965[2];
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Ropeobj162009  {
  TNimObject Sup;
Ropeobj162009* left;
Ropeobj162009* right;
NI length;
NimStringDesc* data;
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
struct  Tpasscontext243005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Intset189056  {
NI counter;
NI max;
Ttrunk189052* head;
Ttrunkseq189054* data;
};
struct  Tlinkedlist130028  {
Tlistentry130022* head;
Tlistentry130022* tail;
NI counter;
};
struct  Tidtable192861  {
NI counter;
Tidpairseq192859* data;
};
typedef N_NIMCALL_PTR(Tnode192813*, TY246072) (Tcontext246023* c, Tnode192813* n);
typedef N_NIMCALL_PTR(Tnode192813*, TY246077) (Tcontext246023* c, Tnode192813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode192813*, TY246085) (Tcontext246023* c, Tnode192813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode192813*, TY246093) (Tcontext246023* c, Tnode192813* n);
typedef N_NIMCALL_PTR(Tnode192813*, TY246098) (Tcontext246023* c, Tnode192813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode192813*, TY246106) (Tcontext246023* c, Tnode192813* n);
typedef N_NIMCALL_PTR(Tnode192813*, TY246111) (Tcontext246023* c, Tnode192813* n, Tnode192813* norig, NU32 filter);
typedef N_NIMCALL_PTR(Ttype192849*, TY246118) (Tcontext246023* c, Tnode192813* n, Ttype192849* prev);
typedef struct {
N_NIMCALL_PTR(Tnode192813*, ClPrc) (Tcontext246023* c, Tidtable192861 pt, Tnode192813* n, void* ClEnv);
void* ClEnv;
} TY246124;
typedef struct {
N_NIMCALL_PTR(Tsym192843*, ClPrc) (Tcontext246023* c, Tsym192843* fn, Tidtable192861 pt, Tlineinfo164338 info, void* ClEnv);
void* ClEnv;
} TY246130;
typedef N_NIMCALL_PTR(Tsym192843*, TY246146) (Tcontext246023* c, Tsym192843* dc, Ttype192849* t, Tlineinfo164338 info, NU8 op);
struct  Tcontext246023  {
  Tpasscontext243005 Sup;
Tsym192843* module;
Tscope192837* currentscope;
Tscope192837* importtable;
Tscope192837* toplevelscope;
Tproccon246011* p;
Tsymseq192815* friendmodules;
NI instcounter;
Intset189056 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI incompilescontext;
NI ingenericinst;
Tsymseq192815* converters;
Tsymseq192815* patterns;
Tlinkedlist130028 optionstack;
Tidtable192861 symmapping;
Tlinkedlist130028 libs;
TY246072 semconstexpr;
TY246077 semexpr;
TY246085 semtryexpr;
TY246093 semtryconstexpr;
TY246098 semoperand;
TY246106 semconstboolexpr;
TY246111 semoverloadedcall;
TY246118 semtypenode;
TY246124 seminferredlambda;
TY246130 semgenerateinstance;
Intset189056 includedfiles;
Tstrtable192817 userpragmas;
Tctx245048* evalcontext;
Intset189056 unknownidents;
TY246141* generics;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY246146 insttypeboundop;
};
struct  Tinstantiation192833  {
Tsym192843* sym;
Ttypeseq192845* concretetypes;
TY192933* usedby;
};
struct  Tproccon246011  {
Tsym192843* owner;
Tsym192843* resultsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon246011* next;
NIM_BOOL wasforwarded;
Tnode192813* bracketexpr;
};
typedef NI TY27820[8];
struct  Ttrunk189052  {
Ttrunk189052* next;
NI key;
TY27820 bits;
};
struct  Tidpair192857  {
Tidobj168015* key;
TNimObject* val;
};
struct  Tctx245048  {
  Tpasscontext243005 Sup;
TY245253* code;
TY165033* debug;
Tnode192813* globals;
Tnode192813* constants;
Ttypeseq192845* types;
Tnode192813* currentexceptiona;
Tnode192813* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype245232* prc;
Tsym192843* module;
Tnode192813* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo164338 comesfromheuristic;
TY245272* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair246013  {
Tsym192843* genericsym;
Tinstantiation192833* inst;
};
struct TY245239 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY245239 TY245236[256];
struct  PprocHEX3Aobjecttype245232  {
TY245233* blocks;
Tsym192843* sym;
TY245236 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs245042* args, void* ClEnv);
void* ClEnv;
} Vmcallback245044;
struct TY245273 {
NimStringDesc* Field0;
Vmcallback245044 Field1;
};
struct  Tblock245030  {
Tsym192843* label;
TY245213* fixups;
};
struct  Vmargs245042  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode192813* currentexception;
};
struct Tnodeseq192807 {
  TGenericSeq Sup;
  Tnode192813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq192845 {
  TGenericSeq Sup;
  Ttype192849* data[SEQ_DECL_SIZE];
};
struct TY192944 {
  TGenericSeq Sup;
  Tinstantiation192833* data[SEQ_DECL_SIZE];
};
struct Tsymseq192815 {
  TGenericSeq Sup;
  Tsym192843* data[SEQ_DECL_SIZE];
};
struct Ttrunkseq189054 {
  TGenericSeq Sup;
  Ttrunk189052* data[SEQ_DECL_SIZE];
};
struct Tidpairseq192859 {
  TGenericSeq Sup;
  Tidpair192857 data[SEQ_DECL_SIZE];
};
struct TY246141 {
  TGenericSeq Sup;
  Tinstantiationpair246013 data[SEQ_DECL_SIZE];
};
struct TY192933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY245253 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY165033 {
  TGenericSeq Sup;
  Tlineinfo164338 data[SEQ_DECL_SIZE];
};
struct TY245272 {
  TGenericSeq Sup;
  TY245273 data[SEQ_DECL_SIZE];
};
struct TY245233 {
  TGenericSeq Sup;
  Tblock245030 data[SEQ_DECL_SIZE];
};
struct TY245213 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, equalgenericparams_261009)(Tnode192813* proca, Tnode192813* procb);
N_NIMCALL(NI, sonslen_195403)(Tnode192813* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, internalerror_166199)(Tlineinfo164338 info, NimStringDesc* errmsg);
N_NIMCALL(NIM_BOOL, sametypeornil_227108)(Ttype192849* a, Ttype192849* b, NU8 flags);
N_NIMCALL(NIM_BOOL, exprstructuralequivalent_221149)(Tnode192813* a, Tnode192813* b);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(Tsym192843*, searchforprocold_261109)(Tcontext246023* c, Tscope192837* scope, Tsym192843* fn);
N_NIMCALL(Tsym192843*, initidentiter_200147)(Tidentiter200141* ti, Tstrtable192817 tab, Tident168021* s);
N_NIMCALL(NIM_BOOL, isgenericroutine_197652)(Tsym192843* s);
N_NIMCALL(Tsym192843*, nextidentiter_200156)(Tidentiter200141* ti, Tstrtable192817 tab);
N_NIMCALL(NU8, equalparams_222086)(Tnode192813* a, Tnode192813* b);
N_NIMCALL(void, localerror_166155)(Tlineinfo164338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tsym192843*, searchforprocnew_261197)(Tcontext246023* c, Tscope192837* scope, Tsym192843* fn);
N_NIMCALL(NIM_BOOL, sametype_227092)(Ttype192849* a, Ttype192849* b, NU8 flags);
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* formatstr, NimStringDesc** a, NI aLen0);
N_NIMCALL(NimStringDesc*, getprocheader_222447)(Tsym192843* sym, NU8 prefer);
N_NIMCALL(NimStringDesc*, HEX24_165479)(Tlineinfo164338 info);
N_NIMCALL(Tsym192843*, searchforproc_261278)(Tcontext246023* c, Tscope192837* scope, Tsym192843* fn);
static NIM_CONST TY193031 TMP4513 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4514, "sons", 4);
STRING_LITERAL(TMP4515, "equalGenericParams", 18);
static NIM_CONST TY193031 TMP4516 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4517, "sym", 3);
NIM_CONST NU8 flags_261203 = 30;
STRING_LITERAL(TMP4519, "public implementation \'$1\' has non-public forward declaration i"
"n $2", 67);
extern TFrame* frameptr_17042;

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

N_NIMCALL(NIM_BOOL, equalgenericparams_261009)(Tnode192813* proca, Tnode192813* procb) {
	NIM_BOOL result;
	nimfr("equalGenericParams", "procfind.nim")
{	result = 0;
	nimln(17, "procfind.nim");
	{
		NI LOC3;
		NI LOC4;
		LOC3 = 0;
		LOC3 = sonslen_195403(proca);
		LOC4 = 0;
		LOC4 = sonslen_195403(procb);
		if (!!((LOC3 == LOC4))) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	{
		NI i_261026;
		NI HEX3Atmp_261087;
		NI LOC8;
		NI TMP4512;
		NI res_261090;
		i_261026 = 0;
		HEX3Atmp_261087 = 0;
		nimln(18, "procfind.nim");
		LOC8 = 0;
		LOC8 = sonslen_195403(proca);
		TMP4512 = subInt(LOC8, ((NI) 1));
		HEX3Atmp_261087 = (NI)(TMP4512);
		nimln(1598, "system.nim");
		res_261090 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				Tsym192843* a;
				Tsym192843* b;
				NI TMP4518;
				if (!(res_261090 <= HEX3Atmp_261087)) goto LA10;
				nimln(1600, "system.nim");
				i_261026 = res_261090;
				nimln(19, "procfind.nim");
				{
					if (((TMP4513[(*proca).kind/8] &(1<<((*proca).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4514));
					if ((NU)(i_261026) >= (NU)((*proca).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (!!(((*(*proca).kindU.S6.sons->data[i_261026]).kind == ((NU8) 3)))) goto LA13;
					nimln(20, "procfind.nim");
					internalerror_166199((*proca).info, ((NimStringDesc*) &TMP4515));
					nimln(21, "procfind.nim");
					goto BeforeRet;
				}
				LA13: ;
				nimln(22, "procfind.nim");
				{
					if (((TMP4513[(*procb).kind/8] &(1<<((*procb).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4514));
					if ((NU)(i_261026) >= (NU)((*procb).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (!!(((*(*procb).kindU.S6.sons->data[i_261026]).kind == ((NU8) 3)))) goto LA17;
					nimln(23, "procfind.nim");
					internalerror_166199((*procb).info, ((NimStringDesc*) &TMP4515));
					nimln(24, "procfind.nim");
					goto BeforeRet;
				}
				LA17: ;
				nimln(25, "procfind.nim");
				if (((TMP4513[(*proca).kind/8] &(1<<((*proca).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4514));
				if ((NU)(i_261026) >= (NU)((*proca).kindU.S6.sons->Sup.len)) raiseIndexError();
				if (!(((TMP4516[(*(*proca).kindU.S6.sons->data[i_261026]).kind/8] &(1<<((*(*proca).kindU.S6.sons->data[i_261026]).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4517));
				a = (*(*proca).kindU.S6.sons->data[i_261026]).kindU.S4.sym;
				nimln(26, "procfind.nim");
				if (((TMP4513[(*procb).kind/8] &(1<<((*procb).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4514));
				if ((NU)(i_261026) >= (NU)((*procb).kindU.S6.sons->Sup.len)) raiseIndexError();
				if (!(((TMP4516[(*(*procb).kindU.S6.sons->data[i_261026]).kind/8] &(1<<((*(*procb).kindU.S6.sons->data[i_261026]).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4517));
				b = (*(*procb).kindU.S6.sons->data[i_261026]).kindU.S4.sym;
				nimln(27, "procfind.nim");
				{
					NIM_BOOL LOC21;
					NIM_BOOL LOC23;
					LOC21 = 0;
					LOC21 = !(((*(*a).name).Sup.id == (*(*b).name).Sup.id));
					if (LOC21) goto LA22;
					nimln(28, "procfind.nim");
					LOC23 = 0;
					LOC23 = sametypeornil_227108((*a).typ, (*b).typ, 4);
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
						LOC34 = exprstructuralequivalent_221149((*a).ast, (*b).ast);
						if (!!(LOC34)) goto LA35;
						goto BeforeRet;
					}
					LA35: ;
				}
				LA30: ;
				nimln(1614, "system.nim");
				TMP4518 = addInt(res_261090, ((NI) 1));
				res_261090 = (NI)(TMP4518);
			} LA10: ;
		}
	}
	nimln(31, "procfind.nim");
	result = NIM_TRUE;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(Tsym192843*, searchforprocold_261109)(Tcontext246023* c, Tscope192837* scope, Tsym192843* fn) {
	Tsym192843* result;
	Tidentiter200141 it;
	nimfr("searchForProcOld", "procfind.nim")
{	result = 0;
	memset((void*)(&it), 0, sizeof(it));
	nimln(38, "procfind.nim");
	result = initidentiter_200147((&it), (*scope).symbols, (*fn).name);
	nimln(39, "procfind.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = isgenericroutine_197652(fn);
		if (!LOC3) goto LA4;
		{
			nimln(43, "procfind.nim");
			while (1) {
				if (!!((result == NIM_NIL))) goto LA7;
				nimln(44, "procfind.nim");
				{
					NIM_BOOL LOC10;
					Tnode192813* genr;
					Tnode192813* genf;
					LOC10 = 0;
					LOC10 = ((*result).kind == (*fn).kind);
					if (!(LOC10)) goto LA11;
					LOC10 = isgenericroutine_197652(result);
					LA11: ;
					if (!LOC10) goto LA12;
					nimln(45, "procfind.nim");
					if (((TMP4513[(*(*result).ast).kind/8] &(1<<((*(*result).ast).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4514));
					if ((NU)(((NI) 2)) >= (NU)((*(*result).ast).kindU.S6.sons->Sup.len)) raiseIndexError();
					genr = (*(*result).ast).kindU.S6.sons->data[((NI) 2)];
					nimln(46, "procfind.nim");
					if (((TMP4513[(*(*fn).ast).kind/8] &(1<<((*(*fn).ast).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4514));
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
						LOC17 = exprstructuralequivalent_221149(genr, genf);
						if (!(LOC17)) goto LA18;
						nimln(48, "procfind.nim");
						if (((TMP4513[(*(*result).ast).kind/8] &(1<<((*(*result).ast).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4514));
						if ((NU)(((NI) 3)) >= (NU)((*(*result).ast).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP4513[(*(*fn).ast).kind/8] &(1<<((*(*fn).ast).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4514));
						if ((NU)(((NI) 3)) >= (NU)((*(*fn).ast).kindU.S6.sons->Sup.len)) raiseIndexError();
						LOC17 = exprstructuralequivalent_221149((*(*result).ast).kindU.S6.sons->data[((NI) 3)], (*(*fn).ast).kindU.S6.sons->data[((NI) 3)]);
						LA18: ;
						LOC16 = LOC17;
						if (!(LOC16)) goto LA19;
						nimln(50, "procfind.nim");
						LOC16 = equalgenericparams_261009(genr, genf);
						LA19: ;
						if (!LOC16) goto LA20;
						nimln(51, "procfind.nim");
						goto BeforeRet;
					}
					LA20: ;
				}
				LA12: ;
				nimln(52, "procfind.nim");
				result = nextidentiter_200156((&it), (*scope).symbols);
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
					LOC29 = isgenericroutine_197652(result);
					LOC27 = !(LOC29);
					LA28: ;
					if (!LOC27) goto LA30;
					nimln(56, "procfind.nim");
					LOC32 = 0;
					LOC32 = equalparams_222086((*(*result).typ).n, (*(*fn).typ).n);
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
						localerror_166155((*fn).info, ((NU16) 66), (*(*fn).name).s);
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
				result = nextidentiter_200156((&it), (*scope).symbols);
			} LA24: ;
		}
	}
	LA1: ;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(Tsym192843*, searchforprocnew_261197)(Tcontext246023* c, Tscope192837* scope, Tsym192843* fn) {
	Tsym192843* result;
	Tidentiter200141 it;
	nimfr("searchForProcNew", "procfind.nim")
{	result = 0;
	memset((void*)(&it), 0, sizeof(it));
	nimln(72, "procfind.nim");
	result = initidentiter_200147((&it), (*scope).symbols, (*fn).name);
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
				LOC5 = sametype_227092((*result).typ, (*fn).typ, 30);
				LA6: ;
				if (!LOC5) goto LA7;
				nimln(75, "procfind.nim");
				LOC9 = 0;
				LOC9 = equalparams_222086((*(*result).typ).n, (*(*fn).typ).n);
				switch (LOC9) {
				case ((NU8) 1):
				{
					nimln(77, "procfind.nim");
					{
						NIM_BOOL LOC13;
						NimStringDesc* message;
						TY155965 LOC17;
						LOC13 = 0;
						LOC13 = !((((*result).flags &(1<<((((NU8) 1))&31)))!=0));
						if (!(LOC13)) goto LA14;
						LOC13 = (((*fn).flags &(1<<((((NU8) 1))&31)))!=0);
						LA14: ;
						if (!LOC13) goto LA15;
						nimln(78, "procfind.nim");
						memset((void*)LOC17, 0, sizeof(LOC17));
						nimln(80, "procfind.nim");
						LOC17[0] = getprocheader_222447(result, ((NU8) 0));
						LOC17[1] = HEX24_165479((*result).info);
						message = nsuFormatOpenArray(((NimStringDesc*) &TMP4519), LOC17, 2);
						nimln(81, "procfind.nim");
						localerror_166155((*fn).info, ((NU16) 4), message);
					}
					LA15: ;
					nimln(82, "procfind.nim");
					goto BeforeRet;
				}
				break;
				case ((NU8) 2):
				{
					nimln(84, "procfind.nim");
					localerror_166155((*fn).info, ((NU16) 66), (*(*fn).name).s);
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
			result = nextidentiter_200156((&it), (*scope).symbols);
		} LA2: ;
	}
	nimln(91, "procfind.nim");
	result = NIM_NIL;
	goto BeforeRet;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(Tsym192843*, searchforproc_261278)(Tcontext246023* c, Tscope192837* scope, Tsym192843* fn) {
	Tsym192843* result;
	nimfr("searchForProc", "procfind.nim")
	result = 0;
	nimln(94, "procfind.nim");
	result = searchforprocnew_261197(c, scope, fn);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_procfindInit)(void) {
	nimfr("procfind", "procfind.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_procfindDatInit)(void) {
}

