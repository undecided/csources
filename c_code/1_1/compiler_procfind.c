/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Tnode193813 Tnode193813;
typedef struct Ttype193849 Ttype193849;
typedef struct Tlineinfo165338 Tlineinfo165338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym193843 Tsym193843;
typedef struct Tident169021 Tident169021;
typedef struct Tnodeseq193807 Tnodeseq193807;
typedef struct Tidobj169015 Tidobj169015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq193845 Ttypeseq193845;
typedef struct Tscope193837 Tscope193837;
typedef struct TY193944 TY193944;
typedef struct Tstrtable193817 Tstrtable193817;
typedef struct Tsymseq193815 Tsymseq193815;
typedef struct Tloc193827 Tloc193827;
typedef struct Ropeobj163009 Ropeobj163009;
typedef struct Tlib193831 Tlib193831;
typedef struct Tcontext247023 Tcontext247023;
typedef struct Tidentiter201141 Tidentiter201141;
typedef struct Tinstantiation193833 Tinstantiation193833;
typedef struct Tlistentry133022 Tlistentry133022;
typedef struct Tpasscontext244005 Tpasscontext244005;
typedef struct Tproccon247011 Tproccon247011;
typedef struct Intset190056 Intset190056;
typedef struct Ttrunk190052 Ttrunk190052;
typedef struct Ttrunkseq190054 Ttrunkseq190054;
typedef struct Tlinkedlist133028 Tlinkedlist133028;
typedef struct Tidtable193861 Tidtable193861;
typedef struct Tidpairseq193859 Tidpairseq193859;
typedef struct Tctx246048 Tctx246048;
typedef struct TY247141 TY247141;
typedef struct TY193933 TY193933;
typedef struct Tidpair193857 Tidpair193857;
typedef struct TY246253 TY246253;
typedef struct TY166036 TY166036;
typedef struct PprocHEX3Aobjecttype246232 PprocHEX3Aobjecttype246232;
typedef struct TY246272 TY246272;
typedef struct Tinstantiationpair247013 Tinstantiationpair247013;
typedef struct TY246233 TY246233;
typedef struct TY246239 TY246239;
typedef struct TY246273 TY246273;
typedef struct Vmargs246042 Vmargs246042;
typedef struct Tblock246030 Tblock246030;
typedef struct TY246213 TY246213;
struct  Tlineinfo165338  {
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
struct  Tnode193813  {
Ttype193849* typ;
Tlineinfo165338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym193843* sym;
} S4;
struct {Tident169021* ident;
} S5;
struct {Tnodeseq193807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef NU8 TY194031[20];
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
struct  Tidobj169015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable193817  {
NI counter;
Tsymseq193815* data;
};
struct  Tloc193827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype193849* t;
Ropeobj163009* r;
Ropeobj163009* heaproot;
};
struct  Tsym193843  {
  Tidobj169015 Sup;
NU8 kind;
union{
struct {Ttypeseq193845* typeinstcache;
Tscope193837* typscope;
} S1;
struct {TY193944* procinstcache;
Tsym193843* gcunsafetyreason;
} S2;
struct {TY193944* usedgenerics;
Tstrtable193817 tab;
} S3;
struct {Tsym193843* guard;
} S4;
} kindU;
NU16 magic;
Ttype193849* typ;
Tident169021* name;
Tlineinfo165338 info;
Tsym193843* owner;
NU32 flags;
Tnode193813* ast;
NU32 options;
NI position;
NI offset;
Tloc193827 loc;
Tlib193831* annex;
Tnode193813* constraint;
};
struct  Tident169021  {
  Tidobj169015 Sup;
NimStringDesc* s;
Tident169021* next;
NI h;
};
struct  Tidentiter201141  {
NI h;
Tident169021* name;
};
struct  Tscope193837  {
NI depthlevel;
Tstrtable193817 symbols;
Tnodeseq193807* usingsyms;
Tscope193837* parent;
};
struct  Ttype193849  {
  Tidobj169015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq193845* sons;
Tnode193813* n;
Tsym193843* owner;
Tsym193843* sym;
Tsym193843* destructor;
Tsym193843* deepcopy;
Tsym193843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc193827 loc;
};
typedef NimStringDesc* TY156943[2];
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Ropeobj163009  {
  TNimObject Sup;
Ropeobj163009* left;
Ropeobj163009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry133022  {
  TNimObject Sup;
Tlistentry133022* prev;
Tlistentry133022* next;
};
struct  Tlib193831  {
  Tlistentry133022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj163009* name;
Tnode193813* path;
};
struct  Tpasscontext244005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Intset190056  {
NI counter;
NI max;
Ttrunk190052* head;
Ttrunkseq190054* data;
};
struct  Tlinkedlist133028  {
Tlistentry133022* head;
Tlistentry133022* tail;
NI counter;
};
struct  Tidtable193861  {
NI counter;
Tidpairseq193859* data;
};
typedef N_NIMCALL_PTR(Tnode193813*, TY247072) (Tcontext247023* c, Tnode193813* n);
typedef N_NIMCALL_PTR(Tnode193813*, TY247077) (Tcontext247023* c, Tnode193813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode193813*, TY247085) (Tcontext247023* c, Tnode193813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode193813*, TY247093) (Tcontext247023* c, Tnode193813* n);
typedef N_NIMCALL_PTR(Tnode193813*, TY247098) (Tcontext247023* c, Tnode193813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode193813*, TY247106) (Tcontext247023* c, Tnode193813* n);
typedef N_NIMCALL_PTR(Tnode193813*, TY247111) (Tcontext247023* c, Tnode193813* n, Tnode193813* norig, NU32 filter);
typedef N_NIMCALL_PTR(Ttype193849*, TY247118) (Tcontext247023* c, Tnode193813* n, Ttype193849* prev);
typedef struct {
N_NIMCALL_PTR(Tnode193813*, ClPrc) (Tcontext247023* c, Tidtable193861 pt, Tnode193813* n, void* ClEnv);
void* ClEnv;
} TY247124;
typedef struct {
N_NIMCALL_PTR(Tsym193843*, ClPrc) (Tcontext247023* c, Tsym193843* fn, Tidtable193861 pt, Tlineinfo165338 info, void* ClEnv);
void* ClEnv;
} TY247130;
typedef N_NIMCALL_PTR(Tsym193843*, TY247146) (Tcontext247023* c, Tsym193843* dc, Ttype193849* t, Tlineinfo165338 info, NU8 op);
struct  Tcontext247023  {
  Tpasscontext244005 Sup;
Tsym193843* module;
Tscope193837* currentscope;
Tscope193837* importtable;
Tscope193837* toplevelscope;
Tproccon247011* p;
Tsymseq193815* friendmodules;
NI instcounter;
Intset190056 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI incompilescontext;
NI ingenericinst;
Tsymseq193815* converters;
Tsymseq193815* patterns;
Tlinkedlist133028 optionstack;
Tidtable193861 symmapping;
Tlinkedlist133028 libs;
TY247072 semconstexpr;
TY247077 semexpr;
TY247085 semtryexpr;
TY247093 semtryconstexpr;
TY247098 semoperand;
TY247106 semconstboolexpr;
TY247111 semoverloadedcall;
TY247118 semtypenode;
TY247124 seminferredlambda;
TY247130 semgenerateinstance;
Intset190056 includedfiles;
Tstrtable193817 userpragmas;
Tctx246048* evalcontext;
Intset190056 unknownidents;
TY247141* generics;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY247146 insttypeboundop;
};
struct  Tinstantiation193833  {
Tsym193843* sym;
Ttypeseq193845* concretetypes;
TY193933* usedby;
};
struct  Tproccon247011  {
Tsym193843* owner;
Tsym193843* resultsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon247011* next;
NIM_BOOL wasforwarded;
Tnode193813* bracketexpr;
};
typedef NI TY27820[16];
struct  Ttrunk190052  {
Ttrunk190052* next;
NI key;
TY27820 bits;
};
struct  Tidpair193857  {
Tidobj169015* key;
TNimObject* val;
};
struct  Tctx246048  {
  Tpasscontext244005 Sup;
TY246253* code;
TY166036* debug;
Tnode193813* globals;
Tnode193813* constants;
Ttypeseq193845* types;
Tnode193813* currentexceptiona;
Tnode193813* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype246232* prc;
Tsym193843* module;
Tnode193813* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo165338 comesfromheuristic;
TY246272* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair247013  {
Tsym193843* genericsym;
Tinstantiation193833* inst;
};
struct TY246239 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY246239 TY246236[256];
struct  PprocHEX3Aobjecttype246232  {
TY246233* blocks;
Tsym193843* sym;
TY246236 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs246042* args, void* ClEnv);
void* ClEnv;
} Vmcallback246044;
struct TY246273 {
NimStringDesc* Field0;
Vmcallback246044 Field1;
};
struct  Tblock246030  {
Tsym193843* label;
TY246213* fixups;
};
struct  Vmargs246042  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode193813* currentexception;
};
struct Tnodeseq193807 {
  TGenericSeq Sup;
  Tnode193813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq193845 {
  TGenericSeq Sup;
  Ttype193849* data[SEQ_DECL_SIZE];
};
struct TY193944 {
  TGenericSeq Sup;
  Tinstantiation193833* data[SEQ_DECL_SIZE];
};
struct Tsymseq193815 {
  TGenericSeq Sup;
  Tsym193843* data[SEQ_DECL_SIZE];
};
struct Ttrunkseq190054 {
  TGenericSeq Sup;
  Ttrunk190052* data[SEQ_DECL_SIZE];
};
struct Tidpairseq193859 {
  TGenericSeq Sup;
  Tidpair193857 data[SEQ_DECL_SIZE];
};
struct TY247141 {
  TGenericSeq Sup;
  Tinstantiationpair247013 data[SEQ_DECL_SIZE];
};
struct TY193933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY246253 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY166036 {
  TGenericSeq Sup;
  Tlineinfo165338 data[SEQ_DECL_SIZE];
};
struct TY246272 {
  TGenericSeq Sup;
  TY246273 data[SEQ_DECL_SIZE];
};
struct TY246233 {
  TGenericSeq Sup;
  Tblock246030 data[SEQ_DECL_SIZE];
};
struct TY246213 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, equalgenericparams_262009)(Tnode193813* proca, Tnode193813* procb);
N_NIMCALL(NI, sonslen_196403)(Tnode193813* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, internalerror_167199)(Tlineinfo165338 info, NimStringDesc* errmsg);
N_NIMCALL(NIM_BOOL, sametypeornil_228108)(Ttype193849* a, Ttype193849* b, NU8 flags);
N_NIMCALL(NIM_BOOL, exprstructuralequivalent_222149)(Tnode193813* a, Tnode193813* b);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(Tsym193843*, searchforprocold_262109)(Tcontext247023* c, Tscope193837* scope, Tsym193843* fn);
N_NIMCALL(Tsym193843*, initidentiter_201147)(Tidentiter201141* ti, Tstrtable193817 tab, Tident169021* s);
N_NIMCALL(NIM_BOOL, isgenericroutine_198651)(Tsym193843* s);
N_NIMCALL(Tsym193843*, nextidentiter_201156)(Tidentiter201141* ti, Tstrtable193817 tab);
N_NIMCALL(NU8, equalparams_223086)(Tnode193813* a, Tnode193813* b);
N_NIMCALL(void, localerror_167155)(Tlineinfo165338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tsym193843*, searchforprocnew_262197)(Tcontext247023* c, Tscope193837* scope, Tsym193843* fn);
N_NIMCALL(NIM_BOOL, sametype_228092)(Ttype193849* a, Ttype193849* b, NU8 flags);
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* formatstr, NimStringDesc** a, NI aLen0);
N_NIMCALL(NimStringDesc*, getprocheader_223447)(Tsym193843* sym, NU8 prefer);
N_NIMCALL(NimStringDesc*, HEX24_166479)(Tlineinfo165338 info);
N_NIMCALL(Tsym193843*, searchforproc_262278)(Tcontext247023* c, Tscope193837* scope, Tsym193843* fn);
static NIM_CONST TY194031 TMP4494 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4495, "sons", 4);
STRING_LITERAL(TMP4496, "equalGenericParams", 18);
static NIM_CONST TY194031 TMP4497 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4498, "sym", 3);
NIM_CONST NU8 flags_262203 = 30;
STRING_LITERAL(TMP4500, "public implementation \'$1\' has non-public forward declaration i"
"n $2", 67);
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

N_NIMCALL(NIM_BOOL, equalgenericparams_262009)(Tnode193813* proca, Tnode193813* procb) {
	NIM_BOOL result;
	nimfr("equalGenericParams", "procfind.nim")
{	result = 0;
	nimln(17, "procfind.nim");
	{
		NI LOC3;
		NI LOC4;
		LOC3 = 0;
		LOC3 = sonslen_196403(proca);
		LOC4 = 0;
		LOC4 = sonslen_196403(procb);
		if (!!((LOC3 == LOC4))) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	{
		NI i_262026;
		NI HEX3Atmp_262087;
		NI LOC8;
		NI TMP4493;
		NI res_262090;
		i_262026 = 0;
		HEX3Atmp_262087 = 0;
		nimln(18, "procfind.nim");
		LOC8 = 0;
		LOC8 = sonslen_196403(proca);
		TMP4493 = subInt(LOC8, ((NI) 1));
		HEX3Atmp_262087 = (NI)(TMP4493);
		nimln(1598, "system.nim");
		res_262090 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				Tsym193843* a;
				Tsym193843* b;
				NI TMP4499;
				if (!(res_262090 <= HEX3Atmp_262087)) goto LA10;
				nimln(1600, "system.nim");
				i_262026 = res_262090;
				nimln(19, "procfind.nim");
				{
					if (((TMP4494[(*proca).kind/8] &(1<<((*proca).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4495));
					if ((NU)(i_262026) >= (NU)((*proca).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (!!(((*(*proca).kindU.S6.sons->data[i_262026]).kind == ((NU8) 3)))) goto LA13;
					nimln(20, "procfind.nim");
					internalerror_167199((*proca).info, ((NimStringDesc*) &TMP4496));
					nimln(21, "procfind.nim");
					goto BeforeRet;
				}
				LA13: ;
				nimln(22, "procfind.nim");
				{
					if (((TMP4494[(*procb).kind/8] &(1<<((*procb).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4495));
					if ((NU)(i_262026) >= (NU)((*procb).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (!!(((*(*procb).kindU.S6.sons->data[i_262026]).kind == ((NU8) 3)))) goto LA17;
					nimln(23, "procfind.nim");
					internalerror_167199((*procb).info, ((NimStringDesc*) &TMP4496));
					nimln(24, "procfind.nim");
					goto BeforeRet;
				}
				LA17: ;
				nimln(25, "procfind.nim");
				if (((TMP4494[(*proca).kind/8] &(1<<((*proca).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4495));
				if ((NU)(i_262026) >= (NU)((*proca).kindU.S6.sons->Sup.len)) raiseIndexError();
				if (!(((TMP4497[(*(*proca).kindU.S6.sons->data[i_262026]).kind/8] &(1<<((*(*proca).kindU.S6.sons->data[i_262026]).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4498));
				a = (*(*proca).kindU.S6.sons->data[i_262026]).kindU.S4.sym;
				nimln(26, "procfind.nim");
				if (((TMP4494[(*procb).kind/8] &(1<<((*procb).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4495));
				if ((NU)(i_262026) >= (NU)((*procb).kindU.S6.sons->Sup.len)) raiseIndexError();
				if (!(((TMP4497[(*(*procb).kindU.S6.sons->data[i_262026]).kind/8] &(1<<((*(*procb).kindU.S6.sons->data[i_262026]).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4498));
				b = (*(*procb).kindU.S6.sons->data[i_262026]).kindU.S4.sym;
				nimln(27, "procfind.nim");
				{
					NIM_BOOL LOC21;
					NIM_BOOL LOC23;
					LOC21 = 0;
					LOC21 = !(((*(*a).name).Sup.id == (*(*b).name).Sup.id));
					if (LOC21) goto LA22;
					nimln(28, "procfind.nim");
					LOC23 = 0;
					LOC23 = sametypeornil_228108((*a).typ, (*b).typ, 4);
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
						LOC34 = exprstructuralequivalent_222149((*a).ast, (*b).ast);
						if (!!(LOC34)) goto LA35;
						goto BeforeRet;
					}
					LA35: ;
				}
				LA30: ;
				nimln(1614, "system.nim");
				TMP4499 = addInt(res_262090, ((NI) 1));
				res_262090 = (NI)(TMP4499);
			} LA10: ;
		}
	}
	nimln(31, "procfind.nim");
	result = NIM_TRUE;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(Tsym193843*, searchforprocold_262109)(Tcontext247023* c, Tscope193837* scope, Tsym193843* fn) {
	Tsym193843* result;
	Tidentiter201141 it;
	nimfr("searchForProcOld", "procfind.nim")
{	result = 0;
	memset((void*)(&it), 0, sizeof(it));
	nimln(38, "procfind.nim");
	result = initidentiter_201147((&it), (*scope).symbols, (*fn).name);
	nimln(39, "procfind.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = isgenericroutine_198651(fn);
		if (!LOC3) goto LA4;
		{
			nimln(43, "procfind.nim");
			while (1) {
				if (!!((result == NIM_NIL))) goto LA7;
				nimln(44, "procfind.nim");
				{
					NIM_BOOL LOC10;
					Tnode193813* genr;
					Tnode193813* genf;
					LOC10 = 0;
					LOC10 = ((*result).kind == (*fn).kind);
					if (!(LOC10)) goto LA11;
					LOC10 = isgenericroutine_198651(result);
					LA11: ;
					if (!LOC10) goto LA12;
					nimln(45, "procfind.nim");
					if (((TMP4494[(*(*result).ast).kind/8] &(1<<((*(*result).ast).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4495));
					if ((NU)(((NI) 2)) >= (NU)((*(*result).ast).kindU.S6.sons->Sup.len)) raiseIndexError();
					genr = (*(*result).ast).kindU.S6.sons->data[((NI) 2)];
					nimln(46, "procfind.nim");
					if (((TMP4494[(*(*fn).ast).kind/8] &(1<<((*(*fn).ast).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4495));
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
						LOC17 = exprstructuralequivalent_222149(genr, genf);
						if (!(LOC17)) goto LA18;
						nimln(48, "procfind.nim");
						if (((TMP4494[(*(*result).ast).kind/8] &(1<<((*(*result).ast).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4495));
						if ((NU)(((NI) 3)) >= (NU)((*(*result).ast).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP4494[(*(*fn).ast).kind/8] &(1<<((*(*fn).ast).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4495));
						if ((NU)(((NI) 3)) >= (NU)((*(*fn).ast).kindU.S6.sons->Sup.len)) raiseIndexError();
						LOC17 = exprstructuralequivalent_222149((*(*result).ast).kindU.S6.sons->data[((NI) 3)], (*(*fn).ast).kindU.S6.sons->data[((NI) 3)]);
						LA18: ;
						LOC16 = LOC17;
						if (!(LOC16)) goto LA19;
						nimln(50, "procfind.nim");
						LOC16 = equalgenericparams_262009(genr, genf);
						LA19: ;
						if (!LOC16) goto LA20;
						nimln(51, "procfind.nim");
						goto BeforeRet;
					}
					LA20: ;
				}
				LA12: ;
				nimln(52, "procfind.nim");
				result = nextidentiter_201156((&it), (*scope).symbols);
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
					LOC29 = isgenericroutine_198651(result);
					LOC27 = !(LOC29);
					LA28: ;
					if (!LOC27) goto LA30;
					nimln(56, "procfind.nim");
					LOC32 = 0;
					LOC32 = equalparams_223086((*(*result).typ).n, (*(*fn).typ).n);
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
						localerror_167155((*fn).info, ((NU16) 66), (*(*fn).name).s);
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
				result = nextidentiter_201156((&it), (*scope).symbols);
			} LA24: ;
		}
	}
	LA1: ;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(Tsym193843*, searchforprocnew_262197)(Tcontext247023* c, Tscope193837* scope, Tsym193843* fn) {
	Tsym193843* result;
	Tidentiter201141 it;
	nimfr("searchForProcNew", "procfind.nim")
{	result = 0;
	memset((void*)(&it), 0, sizeof(it));
	nimln(72, "procfind.nim");
	result = initidentiter_201147((&it), (*scope).symbols, (*fn).name);
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
				LOC5 = sametype_228092((*result).typ, (*fn).typ, 30);
				LA6: ;
				if (!LOC5) goto LA7;
				nimln(75, "procfind.nim");
				LOC9 = 0;
				LOC9 = equalparams_223086((*(*result).typ).n, (*(*fn).typ).n);
				switch (LOC9) {
				case ((NU8) 1):
				{
					nimln(77, "procfind.nim");
					{
						NIM_BOOL LOC13;
						NimStringDesc* message;
						TY156943 LOC17;
						LOC13 = 0;
						LOC13 = !((((*result).flags &(1<<((((NU8) 1))&31)))!=0));
						if (!(LOC13)) goto LA14;
						LOC13 = (((*fn).flags &(1<<((((NU8) 1))&31)))!=0);
						LA14: ;
						if (!LOC13) goto LA15;
						nimln(78, "procfind.nim");
						memset((void*)LOC17, 0, sizeof(LOC17));
						nimln(80, "procfind.nim");
						LOC17[0] = getprocheader_223447(result, ((NU8) 0));
						LOC17[1] = HEX24_166479((*result).info);
						message = nsuFormatOpenArray(((NimStringDesc*) &TMP4500), LOC17, 2);
						nimln(81, "procfind.nim");
						localerror_167155((*fn).info, ((NU16) 4), message);
					}
					LA15: ;
					nimln(82, "procfind.nim");
					goto BeforeRet;
				}
				break;
				case ((NU8) 2):
				{
					nimln(84, "procfind.nim");
					localerror_167155((*fn).info, ((NU16) 66), (*(*fn).name).s);
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
			result = nextidentiter_201156((&it), (*scope).symbols);
		} LA2: ;
	}
	nimln(91, "procfind.nim");
	result = NIM_NIL;
	goto BeforeRet;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(Tsym193843*, searchforproc_262278)(Tcontext247023* c, Tscope193837* scope, Tsym193843* fn) {
	Tsym193843* result;
	nimfr("searchForProc", "procfind.nim")
	result = 0;
	nimln(94, "procfind.nim");
	result = searchforprocnew_262197(c, scope, fn);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_procfindInit)(void) {
	nimfr("procfind", "procfind.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_procfindDatInit)(void) {
}

