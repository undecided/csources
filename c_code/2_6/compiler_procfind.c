/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Tnode191813 Tnode191813;
typedef struct Ttype191849 Ttype191849;
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
typedef struct Tcontext245023 Tcontext245023;
typedef struct Tidentiter199141 Tidentiter199141;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tpasscontext242005 Tpasscontext242005;
typedef struct Tproccon245011 Tproccon245011;
typedef struct Intset188056 Intset188056;
typedef struct Ttrunk188052 Ttrunk188052;
typedef struct Ttrunkseq188054 Ttrunkseq188054;
typedef struct Tlinkedlist130028 Tlinkedlist130028;
typedef struct Tidtable191861 Tidtable191861;
typedef struct Tidpairseq191859 Tidpairseq191859;
typedef struct Tctx244048 Tctx244048;
typedef struct TY245141 TY245141;
typedef struct TY191933 TY191933;
typedef struct Tidpair191857 Tidpair191857;
typedef struct TY244253 TY244253;
typedef struct TY164036 TY164036;
typedef struct PprocHEX3Aobjecttype244232 PprocHEX3Aobjecttype244232;
typedef struct TY244272 TY244272;
typedef struct Tinstantiationpair245013 Tinstantiationpair245013;
typedef struct TY244233 TY244233;
typedef struct TY244239 TY244239;
typedef struct TY244273 TY244273;
typedef struct Vmargs244042 Vmargs244042;
typedef struct Tblock244030 Tblock244030;
typedef struct TY244213 TY244213;
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
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
};
struct  Tidentiter199141  {
NI h;
Tident167021* name;
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
typedef NimStringDesc* TY154965[2];
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
struct  Tpasscontext242005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Intset188056  {
NI counter;
NI max;
Ttrunk188052* head;
Ttrunkseq188054* data;
};
struct  Tlinkedlist130028  {
Tlistentry130022* head;
Tlistentry130022* tail;
NI counter;
};
struct  Tidtable191861  {
NI counter;
Tidpairseq191859* data;
};
typedef N_NIMCALL_PTR(Tnode191813*, TY245072) (Tcontext245023* c, Tnode191813* n);
typedef N_NIMCALL_PTR(Tnode191813*, TY245077) (Tcontext245023* c, Tnode191813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode191813*, TY245085) (Tcontext245023* c, Tnode191813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode191813*, TY245093) (Tcontext245023* c, Tnode191813* n);
typedef N_NIMCALL_PTR(Tnode191813*, TY245098) (Tcontext245023* c, Tnode191813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode191813*, TY245106) (Tcontext245023* c, Tnode191813* n);
typedef N_NIMCALL_PTR(Tnode191813*, TY245111) (Tcontext245023* c, Tnode191813* n, Tnode191813* norig, NU32 filter);
typedef N_NIMCALL_PTR(Ttype191849*, TY245118) (Tcontext245023* c, Tnode191813* n, Ttype191849* prev);
typedef struct {
N_NIMCALL_PTR(Tnode191813*, ClPrc) (Tcontext245023* c, Tidtable191861 pt, Tnode191813* n, void* ClEnv);
void* ClEnv;
} TY245124;
typedef struct {
N_NIMCALL_PTR(Tsym191843*, ClPrc) (Tcontext245023* c, Tsym191843* fn, Tidtable191861 pt, Tlineinfo163338 info, void* ClEnv);
void* ClEnv;
} TY245130;
typedef N_NIMCALL_PTR(Tsym191843*, TY245146) (Tcontext245023* c, Tsym191843* dc, Ttype191849* t, Tlineinfo163338 info, NU8 op);
struct  Tcontext245023  {
  Tpasscontext242005 Sup;
Tsym191843* module;
Tscope191837* currentscope;
Tscope191837* importtable;
Tscope191837* toplevelscope;
Tproccon245011* p;
Tsymseq191815* friendmodules;
NI instcounter;
Intset188056 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI incompilescontext;
NI ingenericinst;
Tsymseq191815* converters;
Tsymseq191815* patterns;
Tlinkedlist130028 optionstack;
Tidtable191861 symmapping;
Tlinkedlist130028 libs;
TY245072 semconstexpr;
TY245077 semexpr;
TY245085 semtryexpr;
TY245093 semtryconstexpr;
TY245098 semoperand;
TY245106 semconstboolexpr;
TY245111 semoverloadedcall;
TY245118 semtypenode;
TY245124 seminferredlambda;
TY245130 semgenerateinstance;
Intset188056 includedfiles;
Tstrtable191817 userpragmas;
Tctx244048* evalcontext;
Intset188056 unknownidents;
TY245141* generics;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY245146 insttypeboundop;
};
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
};
struct  Tproccon245011  {
Tsym191843* owner;
Tsym191843* resultsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon245011* next;
NIM_BOOL wasforwarded;
Tnode191813* bracketexpr;
};
typedef NI TY27820[16];
struct  Ttrunk188052  {
Ttrunk188052* next;
NI key;
TY27820 bits;
};
struct  Tidpair191857  {
Tidobj167015* key;
TNimObject* val;
};
struct  Tctx244048  {
  Tpasscontext242005 Sup;
TY244253* code;
TY164036* debug;
Tnode191813* globals;
Tnode191813* constants;
Ttypeseq191845* types;
Tnode191813* currentexceptiona;
Tnode191813* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype244232* prc;
Tsym191843* module;
Tnode191813* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo163338 comesfromheuristic;
TY244272* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair245013  {
Tsym191843* genericsym;
Tinstantiation191833* inst;
};
struct TY244239 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY244239 TY244236[256];
struct  PprocHEX3Aobjecttype244232  {
TY244233* blocks;
Tsym191843* sym;
TY244236 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs244042* args, void* ClEnv);
void* ClEnv;
} Vmcallback244044;
struct TY244273 {
NimStringDesc* Field0;
Vmcallback244044 Field1;
};
struct  Tblock244030  {
Tsym191843* label;
TY244213* fixups;
};
struct  Vmargs244042  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode191813* currentexception;
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
struct Tidpairseq191859 {
  TGenericSeq Sup;
  Tidpair191857 data[SEQ_DECL_SIZE];
};
struct TY245141 {
  TGenericSeq Sup;
  Tinstantiationpair245013 data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY244253 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY164036 {
  TGenericSeq Sup;
  Tlineinfo163338 data[SEQ_DECL_SIZE];
};
struct TY244272 {
  TGenericSeq Sup;
  TY244273 data[SEQ_DECL_SIZE];
};
struct TY244233 {
  TGenericSeq Sup;
  Tblock244030 data[SEQ_DECL_SIZE];
};
struct TY244213 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, equalgenericparams_260009)(Tnode191813* proca, Tnode191813* procb);
N_NIMCALL(NI, sonslen_194403)(Tnode191813* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, internalerror_165199)(Tlineinfo163338 info, NimStringDesc* errmsg);
N_NIMCALL(NIM_BOOL, sametypeornil_226108)(Ttype191849* a, Ttype191849* b, NU8 flags);
N_NIMCALL(NIM_BOOL, exprstructuralequivalent_220149)(Tnode191813* a, Tnode191813* b);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(Tsym191843*, searchforprocold_260109)(Tcontext245023* c, Tscope191837* scope, Tsym191843* fn);
N_NIMCALL(Tsym191843*, initidentiter_199147)(Tidentiter199141* ti, Tstrtable191817 tab, Tident167021* s);
N_NIMCALL(NIM_BOOL, isgenericroutine_196651)(Tsym191843* s);
N_NIMCALL(Tsym191843*, nextidentiter_199156)(Tidentiter199141* ti, Tstrtable191817 tab);
N_NIMCALL(NU8, equalparams_221086)(Tnode191813* a, Tnode191813* b);
N_NIMCALL(void, localerror_165155)(Tlineinfo163338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tsym191843*, searchforprocnew_260197)(Tcontext245023* c, Tscope191837* scope, Tsym191843* fn);
N_NIMCALL(NIM_BOOL, sametype_226092)(Ttype191849* a, Ttype191849* b, NU8 flags);
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* formatstr, NimStringDesc** a, NI aLen0);
N_NIMCALL(NimStringDesc*, getprocheader_221447)(Tsym191843* sym, NU8 prefer);
N_NIMCALL(NimStringDesc*, HEX24_164479)(Tlineinfo163338 info);
N_NIMCALL(Tsym191843*, searchforproc_260278)(Tcontext245023* c, Tscope191837* scope, Tsym191843* fn);
static NIM_CONST TY192031 TMP4514 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4515, "sons", 4);
STRING_LITERAL(TMP4516, "equalGenericParams", 18);
static NIM_CONST TY192031 TMP4517 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4518, "sym", 3);
NIM_CONST NU8 flags_260203 = 30;
STRING_LITERAL(TMP4520, "public implementation \'$1\' has non-public forward declaration i"
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

N_NIMCALL(NIM_BOOL, equalgenericparams_260009)(Tnode191813* proca, Tnode191813* procb) {
	NIM_BOOL result;
	nimfr("equalGenericParams", "procfind.nim")
{	result = 0;
	nimln(17, "procfind.nim");
	{
		NI LOC3;
		NI LOC4;
		LOC3 = 0;
		LOC3 = sonslen_194403(proca);
		LOC4 = 0;
		LOC4 = sonslen_194403(procb);
		if (!!((LOC3 == LOC4))) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	{
		NI i_260026;
		NI HEX3Atmp_260087;
		NI LOC8;
		NI TMP4513;
		NI res_260090;
		i_260026 = 0;
		HEX3Atmp_260087 = 0;
		nimln(18, "procfind.nim");
		LOC8 = 0;
		LOC8 = sonslen_194403(proca);
		TMP4513 = subInt(LOC8, ((NI) 1));
		HEX3Atmp_260087 = (NI)(TMP4513);
		nimln(1598, "system.nim");
		res_260090 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				Tsym191843* a;
				Tsym191843* b;
				NI TMP4519;
				if (!(res_260090 <= HEX3Atmp_260087)) goto LA10;
				nimln(1600, "system.nim");
				i_260026 = res_260090;
				nimln(19, "procfind.nim");
				{
					if (((TMP4514[(*proca).kind/8] &(1<<((*proca).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4515));
					if ((NU)(i_260026) >= (NU)((*proca).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (!!(((*(*proca).kindU.S6.sons->data[i_260026]).kind == ((NU8) 3)))) goto LA13;
					nimln(20, "procfind.nim");
					internalerror_165199((*proca).info, ((NimStringDesc*) &TMP4516));
					nimln(21, "procfind.nim");
					goto BeforeRet;
				}
				LA13: ;
				nimln(22, "procfind.nim");
				{
					if (((TMP4514[(*procb).kind/8] &(1<<((*procb).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4515));
					if ((NU)(i_260026) >= (NU)((*procb).kindU.S6.sons->Sup.len)) raiseIndexError();
					if (!!(((*(*procb).kindU.S6.sons->data[i_260026]).kind == ((NU8) 3)))) goto LA17;
					nimln(23, "procfind.nim");
					internalerror_165199((*procb).info, ((NimStringDesc*) &TMP4516));
					nimln(24, "procfind.nim");
					goto BeforeRet;
				}
				LA17: ;
				nimln(25, "procfind.nim");
				if (((TMP4514[(*proca).kind/8] &(1<<((*proca).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4515));
				if ((NU)(i_260026) >= (NU)((*proca).kindU.S6.sons->Sup.len)) raiseIndexError();
				if (!(((TMP4517[(*(*proca).kindU.S6.sons->data[i_260026]).kind/8] &(1<<((*(*proca).kindU.S6.sons->data[i_260026]).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4518));
				a = (*(*proca).kindU.S6.sons->data[i_260026]).kindU.S4.sym;
				nimln(26, "procfind.nim");
				if (((TMP4514[(*procb).kind/8] &(1<<((*procb).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4515));
				if ((NU)(i_260026) >= (NU)((*procb).kindU.S6.sons->Sup.len)) raiseIndexError();
				if (!(((TMP4517[(*(*procb).kindU.S6.sons->data[i_260026]).kind/8] &(1<<((*(*procb).kindU.S6.sons->data[i_260026]).kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4518));
				b = (*(*procb).kindU.S6.sons->data[i_260026]).kindU.S4.sym;
				nimln(27, "procfind.nim");
				{
					NIM_BOOL LOC21;
					NIM_BOOL LOC23;
					LOC21 = 0;
					LOC21 = !(((*(*a).name).Sup.id == (*(*b).name).Sup.id));
					if (LOC21) goto LA22;
					nimln(28, "procfind.nim");
					LOC23 = 0;
					LOC23 = sametypeornil_226108((*a).typ, (*b).typ, 4);
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
						LOC34 = exprstructuralequivalent_220149((*a).ast, (*b).ast);
						if (!!(LOC34)) goto LA35;
						goto BeforeRet;
					}
					LA35: ;
				}
				LA30: ;
				nimln(1614, "system.nim");
				TMP4519 = addInt(res_260090, ((NI) 1));
				res_260090 = (NI)(TMP4519);
			} LA10: ;
		}
	}
	nimln(31, "procfind.nim");
	result = NIM_TRUE;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(Tsym191843*, searchforprocold_260109)(Tcontext245023* c, Tscope191837* scope, Tsym191843* fn) {
	Tsym191843* result;
	Tidentiter199141 it;
	nimfr("searchForProcOld", "procfind.nim")
{	result = 0;
	memset((void*)(&it), 0, sizeof(it));
	nimln(38, "procfind.nim");
	result = initidentiter_199147((&it), (*scope).symbols, (*fn).name);
	nimln(39, "procfind.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = isgenericroutine_196651(fn);
		if (!LOC3) goto LA4;
		{
			nimln(43, "procfind.nim");
			while (1) {
				if (!!((result == NIM_NIL))) goto LA7;
				nimln(44, "procfind.nim");
				{
					NIM_BOOL LOC10;
					Tnode191813* genr;
					Tnode191813* genf;
					LOC10 = 0;
					LOC10 = ((*result).kind == (*fn).kind);
					if (!(LOC10)) goto LA11;
					LOC10 = isgenericroutine_196651(result);
					LA11: ;
					if (!LOC10) goto LA12;
					nimln(45, "procfind.nim");
					if (((TMP4514[(*(*result).ast).kind/8] &(1<<((*(*result).ast).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4515));
					if ((NU)(((NI) 2)) >= (NU)((*(*result).ast).kindU.S6.sons->Sup.len)) raiseIndexError();
					genr = (*(*result).ast).kindU.S6.sons->data[((NI) 2)];
					nimln(46, "procfind.nim");
					if (((TMP4514[(*(*fn).ast).kind/8] &(1<<((*(*fn).ast).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4515));
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
						LOC17 = exprstructuralequivalent_220149(genr, genf);
						if (!(LOC17)) goto LA18;
						nimln(48, "procfind.nim");
						if (((TMP4514[(*(*result).ast).kind/8] &(1<<((*(*result).ast).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4515));
						if ((NU)(((NI) 3)) >= (NU)((*(*result).ast).kindU.S6.sons->Sup.len)) raiseIndexError();
						if (((TMP4514[(*(*fn).ast).kind/8] &(1<<((*(*fn).ast).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4515));
						if ((NU)(((NI) 3)) >= (NU)((*(*fn).ast).kindU.S6.sons->Sup.len)) raiseIndexError();
						LOC17 = exprstructuralequivalent_220149((*(*result).ast).kindU.S6.sons->data[((NI) 3)], (*(*fn).ast).kindU.S6.sons->data[((NI) 3)]);
						LA18: ;
						LOC16 = LOC17;
						if (!(LOC16)) goto LA19;
						nimln(50, "procfind.nim");
						LOC16 = equalgenericparams_260009(genr, genf);
						LA19: ;
						if (!LOC16) goto LA20;
						nimln(51, "procfind.nim");
						goto BeforeRet;
					}
					LA20: ;
				}
				LA12: ;
				nimln(52, "procfind.nim");
				result = nextidentiter_199156((&it), (*scope).symbols);
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
					LOC29 = isgenericroutine_196651(result);
					LOC27 = !(LOC29);
					LA28: ;
					if (!LOC27) goto LA30;
					nimln(56, "procfind.nim");
					LOC32 = 0;
					LOC32 = equalparams_221086((*(*result).typ).n, (*(*fn).typ).n);
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
						localerror_165155((*fn).info, ((NU16) 66), (*(*fn).name).s);
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
				result = nextidentiter_199156((&it), (*scope).symbols);
			} LA24: ;
		}
	}
	LA1: ;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(Tsym191843*, searchforprocnew_260197)(Tcontext245023* c, Tscope191837* scope, Tsym191843* fn) {
	Tsym191843* result;
	Tidentiter199141 it;
	nimfr("searchForProcNew", "procfind.nim")
{	result = 0;
	memset((void*)(&it), 0, sizeof(it));
	nimln(72, "procfind.nim");
	result = initidentiter_199147((&it), (*scope).symbols, (*fn).name);
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
				LOC5 = sametype_226092((*result).typ, (*fn).typ, 30);
				LA6: ;
				if (!LOC5) goto LA7;
				nimln(75, "procfind.nim");
				LOC9 = 0;
				LOC9 = equalparams_221086((*(*result).typ).n, (*(*fn).typ).n);
				switch (LOC9) {
				case ((NU8) 1):
				{
					nimln(77, "procfind.nim");
					{
						NIM_BOOL LOC13;
						NimStringDesc* message;
						TY154965 LOC17;
						LOC13 = 0;
						LOC13 = !((((*result).flags &(1<<((((NU8) 1))&31)))!=0));
						if (!(LOC13)) goto LA14;
						LOC13 = (((*fn).flags &(1<<((((NU8) 1))&31)))!=0);
						LA14: ;
						if (!LOC13) goto LA15;
						nimln(78, "procfind.nim");
						memset((void*)LOC17, 0, sizeof(LOC17));
						nimln(80, "procfind.nim");
						LOC17[0] = getprocheader_221447(result, ((NU8) 0));
						LOC17[1] = HEX24_164479((*result).info);
						message = nsuFormatOpenArray(((NimStringDesc*) &TMP4520), LOC17, 2);
						nimln(81, "procfind.nim");
						localerror_165155((*fn).info, ((NU16) 4), message);
					}
					LA15: ;
					nimln(82, "procfind.nim");
					goto BeforeRet;
				}
				break;
				case ((NU8) 2):
				{
					nimln(84, "procfind.nim");
					localerror_165155((*fn).info, ((NU16) 66), (*(*fn).name).s);
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
			result = nextidentiter_199156((&it), (*scope).symbols);
		} LA2: ;
	}
	nimln(91, "procfind.nim");
	result = NIM_NIL;
	goto BeforeRet;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(Tsym191843*, searchforproc_260278)(Tcontext245023* c, Tscope191837* scope, Tsym191843* fn) {
	Tsym191843* result;
	nimfr("searchForProc", "procfind.nim")
	result = 0;
	nimln(94, "procfind.nim");
	result = searchforprocnew_260197(c, scope, fn);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_procfindInit)(void) {
	nimfr("procfind", "procfind.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_procfindDatInit)(void) {
}

