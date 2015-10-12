/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <setjmp.h>

#include <sys/types.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Processobj143402 Processobj143402;
typedef struct Streamobj138027 Streamobj138027;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TSafePoint TSafePoint;
typedef struct Stringtableobj134012 Stringtableobj134012;
typedef struct Tcell46747 Tcell46747;
typedef struct Tcellset46759 Tcellset46759;
typedef struct Tgcheap48616 Tgcheap48616;
typedef struct Tcellseq46763 Tcellseq46763;
typedef struct Tpagedesc46755 Tpagedesc46755;
typedef struct Tmemregion28610 Tmemregion28610;
typedef struct Tsmallchunk27840 Tsmallchunk27840;
typedef struct Tllchunk28604 Tllchunk28604;
typedef struct Tbigchunk27842 Tbigchunk27842;
typedef struct Tintset27817 Tintset27817;
typedef struct Ttrunk27813 Ttrunk27813;
typedef struct Tavlnode28608 Tavlnode28608;
typedef struct Tgcstat48614 Tgcstat48614;
typedef struct Tlineinfo162338 Tlineinfo162338;
typedef struct Tsym190843 Tsym190843;
typedef struct Tnode190813 Tnode190813;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Ttype190849 Ttype190849;
typedef struct Tident166021 Tident166021;
typedef struct Tidobj166015 Tidobj166015;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj160009 Ropeobj160009;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Tlib190831 Tlib190831;
typedef struct Keyvaluepairseq134010 Keyvaluepairseq134010;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TY103552 TY103552;
typedef struct TY190933 TY190933;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e, void* ClEnv);
void* ClEnv;
} TY15609;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY15609 raiseAction;
};
typedef NimStringDesc* TY143637[1];
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  Tlineinfo162338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef Tnode190813* TY191931[1];
struct  Tidobj166015  {
  TNimObject Sup;
NI id;
};
struct  Tloc190827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype190849* t;
Ropeobj160009* r;
Ropeobj160009* heaproot;
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
struct  Tstrtable190817  {
NI counter;
Tsymseq190815* data;
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
struct  Tident166021  {
  Tidobj166015 Sup;
NimStringDesc* s;
Tident166021* next;
NI h;
};
typedef NU8 TY191031[20];
struct  Processobj143402  {
  TNimObject Sup;
int inhandle;
int outhandle;
int errhandle;
Streamobj138027* instream;
Streamobj138027* outstream;
Streamobj138027* errstream;
pid_t id;
int exitcode;
};
typedef N_NIMCALL_PTR(void, TY138028) (Streamobj138027* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY138032) (Streamobj138027* s);
typedef N_NIMCALL_PTR(void, TY138036) (Streamobj138027* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY138041) (Streamobj138027* s);
typedef N_NIMCALL_PTR(NI, TY138045) (Streamobj138027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY138051) (Streamobj138027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY138057) (Streamobj138027* s);
struct  Streamobj138027  {
  TNimObject Sup;
TY138028 closeimpl;
TY138032 atendimpl;
TY138036 setpositionimpl;
TY138041 getpositionimpl;
TY138045 readdataimpl;
TY138051 writedataimpl;
TY138057 flushimpl;
};
struct  Stringtableobj134012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq134010* data;
NU8 mode;
};
typedef NI TY27820[16];
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
struct  Ropeobj160009  {
  TNimObject Sup;
Ropeobj160009* left;
Ropeobj160009* right;
NI length;
NimStringDesc* data;
};
struct  Tscope190837  {
NI depthlevel;
Tstrtable190817 symbols;
Tnodeseq190807* usingsyms;
Tscope190837* parent;
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
struct TY103552 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
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
struct Keyvaluepairseq134010 {
  TGenericSeq Sup;
  TY103552 data[SEQ_DECL_SIZE];
};
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, readoutput_380009)(Processobj143402* p);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(Streamobj138027*, nospoutputStream)(Processobj143402* p);
N_NIMCALL(NIM_BOOL, atend_138111)(Streamobj138027* s);
N_NIMCALL(NimStringDesc*, readline_138531)(Streamobj138027* s);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NI, nospwaitForExit)(Processobj143402* p, NI timeout);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NimStringDesc*, opgorge_380027)(NimStringDesc* cmd, NimStringDesc* input);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(Processobj143402*, nospstartProcess)(NimStringDesc* command, NimStringDesc* workingdir, NimStringDesc** args, NI argsLen0, Stringtableobj134012* env, NU8 options);
N_NIMCALL(void, write_138233)(Streamobj138027* s, NimStringDesc* x);
N_NIMCALL(Streamobj138027*, nospinputStream)(Processobj143402* p);
N_NIMCALL(void, close_138085)(Streamobj138027* s);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(void, setFrame)(TFrame* s);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52622)(Tcell46747* c);
static N_INLINE(NIM_BOOL, canbecycleroot_50267)(Tcell46747* c);
static N_INLINE(void, rtladdcycleroot_51023)(Tcell46747* c);
N_NOINLINE(void, incl_47465)(Tcellset46759* s, Tcell46747* cell);
static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr);
static N_INLINE(void, decref_52204)(Tcell46747* c);
static N_INLINE(void, rtladdzct_51804)(Tcell46747* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46763* s, Tcell46747* c);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(NimStringDesc*, opslurp_380040)(NimStringDesc* file, Tlineinfo162338 info, Tsym190843* module);
N_NIMCALL(NimStringDesc*, findfile_154339)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, readfile_13434)(NimStringDesc* filename);
N_NIMCALL(void, appendtomodule_191911)(Tsym190843* m, Tnode190813* n);
N_NIMCALL(Tnode190813*, newnode_192607)(NU8 kind, Tlineinfo162338 info, Tnodeseq190807* sons, Ttype190849* typ);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(Tnode190813*, newstrnode_191644)(NU8 kind, NimStringDesc* strval);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, localerror_164155)(Tlineinfo162338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tnode190813*, atomictypex_380066)(NimStringDesc* name, Ttype190849* t, Tlineinfo162338 info);
N_NIMCALL(Tsym190843*, newsym_191656)(NU8 symkind, Tident166021* name, Tsym190843* owner, Tlineinfo162338 info);
N_NIMCALL(Tident166021*, getident_166463)(NimStringDesc* identifier);
N_NIMCALL(Tnode190813*, newsymnode_192325)(Tsym190843* sym);
N_NIMCALL(Tnode190813*, maptypetobracket_380088)(NimStringDesc* name, Ttype190849* t, Tlineinfo162338 info);
N_NIMCALL(Tnode190813*, newnodeit_192807)(NU8 kind, Tlineinfo162338 info, Ttype190849* typ);
N_NIMCALL(void, add_191164)(Tnode190813* father, Tnode190813* son);
N_NIMCALL(NI, len_193377)(Ttype190849* n);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(Ttype190849*, newtype_193140)(NU8 kind, Tsym190843* owner);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(Tnode190813*, maptypetoast_380080)(Ttype190849* t, Tlineinfo162338 info, NIM_BOOL allowrecursion);
N_NIMCALL(Ttype190849*, base_220039)(Ttype190849* t);
N_NIMCALL(Ttype190849*, lastson_193442)(Ttype190849* n);
N_NIMCALL(Tnode190813*, copytree_195028)(Tnode190813* src);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NIMCALL(Tnode190813*, opmaptypetoast_380265)(Ttype190849* t, Tlineinfo162338 info);
STRING_LITERAL(TMP7481, "", 0);
STRING_LITERAL(TMP7482, "\012", 1);
STRING_LITERAL(TMP7486, "void", 4);
STRING_LITERAL(TMP7488, "none", 4);
STRING_LITERAL(TMP7489, "bool", 4);
STRING_LITERAL(TMP7490, "char", 4);
STRING_LITERAL(TMP7491, "nil", 3);
STRING_LITERAL(TMP7492, "expr", 4);
STRING_LITERAL(TMP7493, "stmt", 4);
STRING_LITERAL(TMP7494, "void", 4);
STRING_LITERAL(TMP7495, "array", 5);
STRING_LITERAL(TMP7496, "typeDesc", 8);
STRING_LITERAL(TMP7497, "typeDesc", 8);
STRING_LITERAL(TMP7499, "distinct", 8);
STRING_LITERAL(TMP7500, "tuple", 5);
STRING_LITERAL(TMP7501, "set", 3);
STRING_LITERAL(TMP7502, "ptr", 3);
STRING_LITERAL(TMP7503, "ref", 3);
STRING_LITERAL(TMP7504, "var", 3);
STRING_LITERAL(TMP7505, "seq", 3);
STRING_LITERAL(TMP7506, "proc", 4);
STRING_LITERAL(TMP7507, "openArray", 9);
STRING_LITERAL(TMP7508, "range", 5);
static NIM_CONST TY191031 TMP7509 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP7510, "sons", 4);
STRING_LITERAL(TMP7511, "pointer", 7);
STRING_LITERAL(TMP7512, "string", 6);
STRING_LITERAL(TMP7513, "cstring", 7);
STRING_LITERAL(TMP7514, "int", 3);
STRING_LITERAL(TMP7515, "int8", 4);
STRING_LITERAL(TMP7516, "int16", 5);
STRING_LITERAL(TMP7517, "int32", 5);
STRING_LITERAL(TMP7518, "int64", 5);
STRING_LITERAL(TMP7519, "float", 5);
STRING_LITERAL(TMP7520, "float32", 7);
STRING_LITERAL(TMP7521, "float64", 7);
STRING_LITERAL(TMP7522, "float128", 8);
STRING_LITERAL(TMP7523, "uint", 4);
STRING_LITERAL(TMP7524, "uint8", 5);
STRING_LITERAL(TMP7525, "uint16", 6);
STRING_LITERAL(TMP7526, "uint32", 6);
STRING_LITERAL(TMP7527, "uint64", 6);
STRING_LITERAL(TMP7528, "bignum", 6);
STRING_LITERAL(TMP7529, "const", 5);
STRING_LITERAL(TMP7530, "mutable", 7);
STRING_LITERAL(TMP7531, "varargs", 7);
STRING_LITERAL(TMP7532, "iter", 4);
STRING_LITERAL(TMP7533, "error", 5);
STRING_LITERAL(TMP7534, "builtinTypeClass", 16);
STRING_LITERAL(TMP7535, "concept", 7);
STRING_LITERAL(TMP7536, "compositeTypeClass", 18);
STRING_LITERAL(TMP7537, "and", 3);
STRING_LITERAL(TMP7538, "or", 2);
STRING_LITERAL(TMP7539, "not", 3);
STRING_LITERAL(TMP7540, "anything", 8);
STRING_LITERAL(TMP7541, "static", 6);
extern TFrame* frameptr_17042;
extern TSafePoint* exchandler_17043;
extern TNimType NTI3431; /* IOError */
extern Exception* currexception_17045;
extern TNimType NTI3433; /* OSError */
extern Tgcheap48616 gch_48644;
extern TNimType NTI190807; /* TNodeSeq */
extern Tnode190813* emptynode_191807;

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

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

N_NIMCALL(NimStringDesc*, readoutput_380009)(Processobj143402* p) {
	NimStringDesc* result;
	Streamobj138027* output;
	NI TMP7483;
	NI LOC5;
	nimfr("readOutput", "vmdeps.nim")
	result = 0;
	nimln(13, "vmdeps.nim");
	result = copyString(((NimStringDesc*) &TMP7481));
	nimln(14, "vmdeps.nim");
	output = nospoutputStream(p);
	{
		nimln(15, "vmdeps.nim");
		while (1) {
			NIM_BOOL LOC3;
			NimStringDesc* LOC4;
			LOC3 = 0;
			LOC3 = atend_138111(output);
			if (!!(LOC3)) goto LA2;
			nimln(16, "vmdeps.nim");
			LOC4 = 0;
			LOC4 = readline_138531(output);
			result = resizeString(result, LOC4->Sup.len + 0);
appendString(result, LOC4);
			nimln(17, "vmdeps.nim");
			result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP7482));
		} LA2: ;
	}
	nimln(18, "vmdeps.nim");
	TMP7483 = subInt((result ? result->Sup.len : 0), ((NI) 1));
	result = setLengthStr(result, ((NI)chckRange((NI)(TMP7483), ((NI) 0), ((NI) 2147483647))));
	nimln(19, "vmdeps.nim");
	LOC5 = 0;
	LOC5 = nospwaitForExit(p, ((NI) -1));
	popFrame();
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_17043;
	exchandler_17043 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_17043 = (*exchandler_17043).prev;
}

static N_INLINE(void, setFrame)(TFrame* s) {
	frameptr_17042 = s;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	nimfr("getCurrentException", "system.nim")
	result = 0;
	nimln(2726, "system.nim");
	result = currexception_17045;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_50267)(Tcell46747* c) {
	NIM_BOOL result;
	nimfr("canBeCycleRoot", "gc.nim")
	result = 0;
	nimln(121, "gc.nim");
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdcycleroot_51023)(Tcell46747* c) {
	nimfr("rtlAddCycleRoot", "gc.nim")
	nimln(189, "gc.nim");
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		nimln(139, "gc.nim");
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		nimln(191, "gc.nim");
		incl_47465((&gch_48644.cycleroots), c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(void, incref_52622)(Tcell46747* c) {
	nimfr("incRef", "gc.nim")
	nimln(216, "gc.nim");
	(*c).refcount = (NI)((NU32)((*c).refcount) + (NU32)(((NI) 8)));
	nimln(219, "gc.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_50267(c);
		if (!LOC3) goto LA4;
		nimln(220, "gc.nim");
		rtladdcycleroot_51023(c);
	}
	LA4: ;
	popFrame();
}

static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr) {
	Tcell46747* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	result = ((Tcell46747*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46747))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_51804)(Tcell46747* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_50217((&gch_48644.zct), c);
	popFrame();
}

static N_INLINE(void, decref_52204)(Tcell46747* c) {
	nimfr("decRef", "gc.nim")
	nimln(206, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).refcount -= ((NI) 8);
		nimln(168, "gc.nim");
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		nimln(207, "gc.nim");
		rtladdzct_51804(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(208, "gc.nim");
		LOC6 = 0;
		LOC6 = canbecycleroot_50267(c);
		if (!LOC6) goto LA7;
		nimln(211, "gc.nim");
		rtladdcycleroot_51023(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
	popFrame();
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr("asgnRef", "gc.nim")
	nimln(244, "gc.nim");
	{
		Tcell46747* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_50246(src);
		incref_52622(LOC5);
	}
	LA3: ;
	nimln(245, "gc.nim");
	{
		Tcell46747* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_50246((*dest));
		decref_52204(LOC10);
	}
	LA8: ;
	nimln(246, "gc.nim");
	(*dest) = src;
	popFrame();
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_17045), (*currexception_17045).parent);
}

N_NIMCALL(NimStringDesc*, opgorge_380027)(NimStringDesc* cmd, NimStringDesc* input) {
	NimStringDesc* volatile result;
	TSafePoint TMP7484;
	nimfr("opGorge", "vmdeps.nim")
	result = 0;
	nimln(22, "vmdeps.nim");
	pushSafePoint(&TMP7484);
	TMP7484.status = _setjmp(TMP7484.context);
	if (TMP7484.status == 0) {
		Processobj143402* p;
		TY143637 LOC2;
		nimln(23, "vmdeps.nim");
		memset((void*)LOC2, 0, sizeof(LOC2));
		p = nospstartProcess(cmd, ((NimStringDesc*) &TMP7481), LOC2, 0, NIM_NIL, 4);
		nimln(24, "vmdeps.nim");
		{
			Streamobj138027* LOC7;
			Streamobj138027* LOC8;
			if (!!(((input ? input->Sup.len : 0) == ((NI) 0)))) goto LA5;
			nimln(25, "vmdeps.nim");
			LOC7 = 0;
			LOC7 = nospinputStream(p);
			write_138233(LOC7, input);
			nimln(26, "vmdeps.nim");
			LOC8 = 0;
			LOC8 = nospinputStream(p);
			close_138085(LOC8);
		}
		LA5: ;
		nimln(27, "vmdeps.nim");
		result = readoutput_380009(p);
		popSafePoint();
	}
	else {
		popSafePoint();
		setFrame((TFrame*)&FR);
		if (isObj(getCurrentException()->Sup.m_type, (&NTI3431))||isObj(getCurrentException()->Sup.m_type, (&NTI3433))) {
			TMP7484.status = 0;
			nimln(29, "vmdeps.nim");
			result = copyString(((NimStringDesc*) &TMP7481));
			popCurrentException();
		}
	}
	if (TMP7484.status != 0) reraiseException();
	popFrame();
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		Tcell46747* c;
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(252, "gc.nim");
		c = usrtocell_50246(src);
		nimln(169, "gc.nim");
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	nimln(254, "gc.nim");
	{
		Tcell46747* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(255, "gc.nim");
		c = usrtocell_50246((*dest));
		nimln(256, "gc.nim");
		{
			nimln(167, "gc.nim");
			(*c).refcount -= ((NI) 8);
			nimln(168, "gc.nim");
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			nimln(257, "gc.nim");
			rtladdzct_51804(c);
		}
		LA11: ;
	}
	LA7: ;
	nimln(258, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(NimStringDesc*, opslurp_380040)(NimStringDesc* file, Tlineinfo162338 info, Tsym190843* module) {
	NimStringDesc* volatile result;
	TSafePoint TMP7485;
	nimfr("opSlurp", "vmdeps.nim")
	result = 0;
	nimln(32, "vmdeps.nim");
	pushSafePoint(&TMP7485);
	TMP7485.status = _setjmp(TMP7485.context);
	if (TMP7485.status == 0) {
		NimStringDesc* filename;
		Tnodeseq190807* LOC2;
		TY191931 LOC3;
		Tnode190813* LOC4;
		nimln(33, "vmdeps.nim");
		filename = findfile_154339(file);
		nimln(34, "vmdeps.nim");
		result = readfile_13434(filename);
		nimln(37, "vmdeps.nim");
		LOC2 = 0;
		LOC2 = (Tnodeseq190807*) newSeq((&NTI190807), 1);
		memset((void*)LOC3, 0, sizeof(LOC3));
		nimln(38, "vmdeps.nim");
		LOC3[0] = newstrnode_191644(((NU8) 20), filename);
		asgnRefNoCycle((void**) (&LOC2->data[0]), LOC3[0]);
		LOC4 = 0;
		LOC4 = newnode_192607(((NU8) 121), info, LOC2, NIM_NIL);
		appendtomodule_191911(module, LOC4);
		popSafePoint();
	}
	else {
		popSafePoint();
		setFrame((TFrame*)&FR);
		if (isObj(getCurrentException()->Sup.m_type, (&NTI3431))) {
			TMP7485.status = 0;
			nimln(40, "vmdeps.nim");
			localerror_164155(info, ((NU16) 3), file);
			nimln(41, "vmdeps.nim");
			result = copyString(((NimStringDesc*) &TMP7481));
			popCurrentException();
		}
	}
	if (TMP7485.status != 0) reraiseException();
	popFrame();
	return result;
}

N_NIMCALL(Tnode190813*, atomictypex_380066)(NimStringDesc* name, Ttype190849* t, Tlineinfo162338 info) {
	Tnode190813* result;
	Tsym190843* sym;
	Tident166021* LOC1;
	nimfr("atomicTypeX", "vmdeps.nim")
	result = 0;
	nimln(44, "vmdeps.nim");
	LOC1 = 0;
	LOC1 = getident_166463(name);
	sym = newsym_191656(((NU8) 7), LOC1, (*t).owner, info);
	nimln(45, "vmdeps.nim");
	asgnRefNoCycle((void**) (&(*sym).typ), t);
	nimln(46, "vmdeps.nim");
	result = newsymnode_192325(sym);
	nimln(47, "vmdeps.nim");
	asgnRefNoCycle((void**) (&(*result).typ), t);
	popFrame();
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

N_NIMCALL(Tnode190813*, maptypetobracket_380088)(NimStringDesc* name, Ttype190849* t, Tlineinfo162338 info) {
	Tnode190813* result;
	Tnode190813* LOC1;
	nimfr("mapTypeToBracket", "vmdeps.nim")
	result = 0;
	nimln(52, "vmdeps.nim");
	result = newnodeit_192807(((NU8) 42), info, t);
	nimln(53, "vmdeps.nim");
	LOC1 = 0;
	LOC1 = atomictypex_380066(name, t, info);
	add_191164(result, LOC1);
	{
		NI i_380113;
		NI HEX3Atmp_380130;
		NI LOC3;
		NI res_380133;
		i_380113 = 0;
		HEX3Atmp_380130 = 0;
		nimln(54, "vmdeps.nim");
		LOC3 = 0;
		LOC3 = len_193377(t);
		HEX3Atmp_380130 = subInt(LOC3, 1);
		nimln(1598, "system.nim");
		res_380133 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP7487;
				if (!(res_380133 <= HEX3Atmp_380130)) goto LA5;
				nimln(1600, "system.nim");
				i_380113 = res_380133;
				nimln(55, "vmdeps.nim");
				{
					Tnode190813* void_380126;
					if ((NU)(i_380113) >= (NU)((*t).sons->Sup.len)) raiseIndexError();
					if (!((*t).sons->data[i_380113] == NIM_NIL)) goto LA8;
					nimln(56, "vmdeps.nim");
					void_380126 = atomictypex_380066(((NimStringDesc*) &TMP7486), t, info);
					nimln(57, "vmdeps.nim");
					asgnRefNoCycle((void**) (&(*void_380126).typ), newtype_193140(((NU8) 3), (*t).owner));
					nimln(58, "vmdeps.nim");
					add_191164(result, void_380126);
				}
				goto LA6;
				LA8: ;
				{
					Tnode190813* LOC11;
					nimln(60, "vmdeps.nim");
					if ((NU)(i_380113) >= (NU)((*t).sons->Sup.len)) raiseIndexError();
					LOC11 = 0;
					LOC11 = maptypetoast_380080((*t).sons->data[i_380113], info, NIM_FALSE);
					add_191164(result, LOC11);
				}
				LA6: ;
				nimln(1619, "system.nim");
				TMP7487 = addInt(res_380133, ((NI) 1));
				res_380133 = (NI)(TMP7487);
			} LA5: ;
		}
	}
	popFrame();
	return result;
}

N_NIMCALL(Tnode190813*, maptypetoast_380080)(Ttype190849* t, Tlineinfo162338 info, NIM_BOOL allowrecursion) {
	Tnode190813* result;
	nimfr("mapTypeToAst", "vmdeps.nim")
	result = 0;
	nimln(65, "vmdeps.nim");
	switch ((*t).kind) {
	case ((NU8) 0):
	{
		nimln(66, "vmdeps.nim");
		result = atomictypex_380066(((NimStringDesc*) &TMP7488), t, info);
	}
	break;
	case ((NU8) 1):
	{
		nimln(67, "vmdeps.nim");
		result = atomictypex_380066(((NimStringDesc*) &TMP7489), t, info);
	}
	break;
	case ((NU8) 2):
	{
		nimln(68, "vmdeps.nim");
		result = atomictypex_380066(((NimStringDesc*) &TMP7490), t, info);
	}
	break;
	case ((NU8) 5):
	{
		nimln(69, "vmdeps.nim");
		result = atomictypex_380066(((NimStringDesc*) &TMP7491), t, info);
	}
	break;
	case ((NU8) 6):
	{
		nimln(70, "vmdeps.nim");
		result = atomictypex_380066(((NimStringDesc*) &TMP7492), t, info);
	}
	break;
	case ((NU8) 7):
	{
		nimln(71, "vmdeps.nim");
		result = atomictypex_380066(((NimStringDesc*) &TMP7493), t, info);
	}
	break;
	case ((NU8) 3):
	{
		nimln(72, "vmdeps.nim");
		result = atomictypex_380066(((NimStringDesc*) &TMP7494), t, info);
	}
	break;
	case ((NU8) 4):
	case ((NU8) 16):
	{
		Tnode190813* LOC9;
		Tnode190813* LOC10;
		Tnode190813* LOC11;
		nimln(74, "vmdeps.nim");
		result = newnodeit_192807(((NU8) 42), info, t);
		nimln(75, "vmdeps.nim");
		LOC9 = 0;
		LOC9 = atomictypex_380066(((NimStringDesc*) &TMP7495), t, info);
		add_191164(result, LOC9);
		nimln(76, "vmdeps.nim");
		if ((NU)(((NI) 0)) >= (NU)((*t).sons->Sup.len)) raiseIndexError();
		LOC10 = 0;
		LOC10 = maptypetoast_380080((*t).sons->data[((NI) 0)], info, NIM_FALSE);
		add_191164(result, LOC10);
		nimln(77, "vmdeps.nim");
		if ((NU)(((NI) 1)) >= (NU)((*t).sons->Sup.len)) raiseIndexError();
		LOC11 = 0;
		LOC11 = maptypetoast_380080((*t).sons->data[((NI) 1)], info, NIM_FALSE);
		add_191164(result, LOC11);
	}
	break;
	case ((NU8) 8):
	{
		nimln(79, "vmdeps.nim");
		{
			Ttype190849* LOC15;
			Tnode190813* LOC18;
			Ttype190849* LOC19;
			Tnode190813* LOC20;
			LOC15 = 0;
			LOC15 = base_220039(t);
			if (!!((LOC15 == NIM_NIL))) goto LA16;
			nimln(80, "vmdeps.nim");
			result = newnodeit_192807(((NU8) 42), info, t);
			nimln(81, "vmdeps.nim");
			LOC18 = 0;
			LOC18 = atomictypex_380066(((NimStringDesc*) &TMP7496), t, info);
			add_191164(result, LOC18);
			nimln(82, "vmdeps.nim");
			LOC19 = 0;
			LOC19 = base_220039(t);
			LOC20 = 0;
			LOC20 = maptypetoast_380080(LOC19, info, NIM_FALSE);
			add_191164(result, LOC20);
		}
		goto LA13;
		LA16: ;
		{
			nimln(84, "vmdeps.nim");
			result = atomictypex_380066(((NimStringDesc*) &TMP7497), t, info);
		}
		LA13: ;
	}
	break;
	case ((NU8) 9):
	{
		nimln(86, "vmdeps.nim");
		result = newnodeit_192807(((NU8) 42), info, t);
		{
			NI i_380197;
			NI HEX3Atmp_380243;
			NI LOC24;
			NI res_380246;
			i_380197 = 0;
			HEX3Atmp_380243 = 0;
			nimln(87, "vmdeps.nim");
			LOC24 = 0;
			LOC24 = len_193377(t);
			HEX3Atmp_380243 = subInt(LOC24, 1);
			nimln(1598, "system.nim");
			res_380246 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					Tnode190813* LOC27;
					NI TMP7498;
					if (!(res_380246 <= HEX3Atmp_380243)) goto LA26;
					nimln(1600, "system.nim");
					i_380197 = res_380246;
					nimln(88, "vmdeps.nim");
					if ((NU)(i_380197) >= (NU)((*t).sons->Sup.len)) raiseIndexError();
					LOC27 = 0;
					LOC27 = maptypetoast_380080((*t).sons->data[i_380197], info, NIM_FALSE);
					add_191164(result, LOC27);
					nimln(1619, "system.nim");
					TMP7498 = addInt(res_380246, ((NI) 1));
					res_380246 = (NI)(TMP7498);
				} LA26: ;
			}
		}
	}
	break;
	case ((NU8) 11):
	case ((NU8) 10):
	case ((NU8) 15):
	case ((NU8) 53):
	{
		Ttype190849* LOC29;
		nimln(90, "vmdeps.nim");
		LOC29 = 0;
		LOC29 = lastson_193442(t);
		result = maptypetoast_380080(LOC29, info, NIM_FALSE);
	}
	break;
	case ((NU8) 13):
	{
		nimln(92, "vmdeps.nim");
		{
			if (!allowrecursion) goto LA33;
			nimln(93, "vmdeps.nim");
			result = maptypetobracket_380088(((NimStringDesc*) &TMP7499), t, info);
		}
		goto LA31;
		LA33: ;
		{
			nimln(95, "vmdeps.nim");
			result = atomictypex_380066((*(*(*t).sym).name).s, t, info);
		}
		LA31: ;
	}
	break;
	case ((NU8) 12):
	case ((NU8) 30):
	{
		nimln(96, "vmdeps.nim");
		result = atomictypex_380066((*(*(*t).sym).name).s, t, info);
	}
	break;
	case ((NU8) 17):
	{
		nimln(98, "vmdeps.nim");
		{
			Tnode190813* LOC48;
			if (!allowrecursion) goto LA40;
			nimln(99, "vmdeps.nim");
			result = newnodeit_192807(((NU8) 133), info, t);
			nimln(100, "vmdeps.nim");
			{
				if ((NU)(((NI) 0)) >= (NU)((*t).sons->Sup.len)) raiseIndexError();
				if (!((*t).sons->data[((NI) 0)] == NIM_NIL)) goto LA44;
				nimln(101, "vmdeps.nim");
				add_191164(result, emptynode_191807);
			}
			goto LA42;
			LA44: ;
			{
				Tnode190813* LOC47;
				nimln(103, "vmdeps.nim");
				if ((NU)(((NI) 0)) >= (NU)((*t).sons->Sup.len)) raiseIndexError();
				LOC47 = 0;
				LOC47 = maptypetoast_380080((*t).sons->data[((NI) 0)], info, NIM_FALSE);
				add_191164(result, LOC47);
			}
			LA42: ;
			nimln(104, "vmdeps.nim");
			LOC48 = 0;
			LOC48 = copytree_195028((*t).n);
			add_191164(result, LOC48);
		}
		goto LA38;
		LA40: ;
		{
			nimln(106, "vmdeps.nim");
			result = atomictypex_380066((*(*(*t).sym).name).s, t, info);
		}
		LA38: ;
	}
	break;
	case ((NU8) 14):
	{
		Tnode190813* LOC51;
		nimln(108, "vmdeps.nim");
		result = newnodeit_192807(((NU8) 150), info, t);
		nimln(109, "vmdeps.nim");
		LOC51 = 0;
		LOC51 = copytree_195028((*t).n);
		add_191164(result, LOC51);
	}
	break;
	case ((NU8) 18):
	{
		nimln(110, "vmdeps.nim");
		result = maptypetobracket_380088(((NimStringDesc*) &TMP7500), t, info);
	}
	break;
	case ((NU8) 19):
	{
		nimln(111, "vmdeps.nim");
		result = maptypetobracket_380088(((NimStringDesc*) &TMP7501), t, info);
	}
	break;
	case ((NU8) 21):
	{
		nimln(112, "vmdeps.nim");
		result = maptypetobracket_380088(((NimStringDesc*) &TMP7502), t, info);
	}
	break;
	case ((NU8) 22):
	{
		nimln(113, "vmdeps.nim");
		result = maptypetobracket_380088(((NimStringDesc*) &TMP7503), t, info);
	}
	break;
	case ((NU8) 23):
	{
		nimln(114, "vmdeps.nim");
		result = maptypetobracket_380088(((NimStringDesc*) &TMP7504), t, info);
	}
	break;
	case ((NU8) 24):
	{
		nimln(115, "vmdeps.nim");
		result = maptypetobracket_380088(((NimStringDesc*) &TMP7505), t, info);
	}
	break;
	case ((NU8) 25):
	{
		nimln(116, "vmdeps.nim");
		result = maptypetobracket_380088(((NimStringDesc*) &TMP7506), t, info);
	}
	break;
	case ((NU8) 27):
	{
		nimln(117, "vmdeps.nim");
		result = maptypetobracket_380088(((NimStringDesc*) &TMP7507), t, info);
	}
	break;
	case ((NU8) 20):
	{
		Tnode190813* LOC61;
		Tnode190813* LOC62;
		Tnode190813* LOC63;
		nimln(119, "vmdeps.nim");
		result = newnodeit_192807(((NU8) 42), info, t);
		nimln(120, "vmdeps.nim");
		LOC61 = 0;
		LOC61 = atomictypex_380066(((NimStringDesc*) &TMP7508), t, info);
		add_191164(result, LOC61);
		nimln(121, "vmdeps.nim");
		if (((TMP7509[(*(*t).n).kind/8] &(1<<((*(*t).n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7510));
		if ((NU)(((NI) 0)) >= (NU)((*(*t).n).kindU.S6.sons->Sup.len)) raiseIndexError();
		LOC62 = 0;
		LOC62 = copytree_195028((*(*t).n).kindU.S6.sons->data[((NI) 0)]);
		add_191164(result, LOC62);
		nimln(122, "vmdeps.nim");
		if (((TMP7509[(*(*t).n).kind/8] &(1<<((*(*t).n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7510));
		if ((NU)(((NI) 1)) >= (NU)((*(*t).n).kindU.S6.sons->Sup.len)) raiseIndexError();
		LOC63 = 0;
		LOC63 = copytree_195028((*(*t).n).kindU.S6.sons->data[((NI) 1)]);
		add_191164(result, LOC63);
	}
	break;
	case ((NU8) 26):
	{
		nimln(123, "vmdeps.nim");
		result = atomictypex_380066(((NimStringDesc*) &TMP7511), t, info);
	}
	break;
	case ((NU8) 28):
	{
		nimln(124, "vmdeps.nim");
		result = atomictypex_380066(((NimStringDesc*) &TMP7512), t, info);
	}
	break;
	case ((NU8) 29):
	{
		nimln(125, "vmdeps.nim");
		result = atomictypex_380066(((NimStringDesc*) &TMP7513), t, info);
	}
	break;
	case ((NU8) 31):
	{
		nimln(126, "vmdeps.nim");
		result = atomictypex_380066(((NimStringDesc*) &TMP7514), t, info);
	}
	break;
	case ((NU8) 32):
	{
		nimln(127, "vmdeps.nim");
		result = atomictypex_380066(((NimStringDesc*) &TMP7515), t, info);
	}
	break;
	case ((NU8) 33):
	{
		nimln(128, "vmdeps.nim");
		result = atomictypex_380066(((NimStringDesc*) &TMP7516), t, info);
	}
	break;
	case ((NU8) 34):
	{
		nimln(129, "vmdeps.nim");
		result = atomictypex_380066(((NimStringDesc*) &TMP7517), t, info);
	}
	break;
	case ((NU8) 35):
	{
		nimln(130, "vmdeps.nim");
		result = atomictypex_380066(((NimStringDesc*) &TMP7518), t, info);
	}
	break;
	case ((NU8) 36):
	{
		nimln(131, "vmdeps.nim");
		result = atomictypex_380066(((NimStringDesc*) &TMP7519), t, info);
	}
	break;
	case ((NU8) 37):
	{
		nimln(132, "vmdeps.nim");
		result = atomictypex_380066(((NimStringDesc*) &TMP7520), t, info);
	}
	break;
	case ((NU8) 38):
	{
		nimln(133, "vmdeps.nim");
		result = atomictypex_380066(((NimStringDesc*) &TMP7521), t, info);
	}
	break;
	case ((NU8) 39):
	{
		nimln(134, "vmdeps.nim");
		result = atomictypex_380066(((NimStringDesc*) &TMP7522), t, info);
	}
	break;
	case ((NU8) 40):
	{
		nimln(135, "vmdeps.nim");
		result = atomictypex_380066(((NimStringDesc*) &TMP7523), t, info);
	}
	break;
	case ((NU8) 41):
	{
		nimln(136, "vmdeps.nim");
		result = atomictypex_380066(((NimStringDesc*) &TMP7524), t, info);
	}
	break;
	case ((NU8) 42):
	{
		nimln(137, "vmdeps.nim");
		result = atomictypex_380066(((NimStringDesc*) &TMP7525), t, info);
	}
	break;
	case ((NU8) 43):
	{
		nimln(138, "vmdeps.nim");
		result = atomictypex_380066(((NimStringDesc*) &TMP7526), t, info);
	}
	break;
	case ((NU8) 44):
	{
		nimln(139, "vmdeps.nim");
		result = atomictypex_380066(((NimStringDesc*) &TMP7527), t, info);
	}
	break;
	case ((NU8) 45):
	{
		nimln(140, "vmdeps.nim");
		result = atomictypex_380066(((NimStringDesc*) &TMP7528), t, info);
	}
	break;
	case ((NU8) 46):
	{
		nimln(141, "vmdeps.nim");
		result = maptypetobracket_380088(((NimStringDesc*) &TMP7529), t, info);
	}
	break;
	case ((NU8) 47):
	{
		nimln(142, "vmdeps.nim");
		result = maptypetobracket_380088(((NimStringDesc*) &TMP7530), t, info);
	}
	break;
	case ((NU8) 48):
	{
		nimln(143, "vmdeps.nim");
		result = maptypetobracket_380088(((NimStringDesc*) &TMP7531), t, info);
	}
	break;
	case ((NU8) 49):
	{
		nimln(144, "vmdeps.nim");
		result = maptypetobracket_380088(((NimStringDesc*) &TMP7532), t, info);
	}
	break;
	case ((NU8) 50):
	{
		nimln(145, "vmdeps.nim");
		result = atomictypex_380066(((NimStringDesc*) &TMP7533), t, info);
	}
	break;
	case ((NU8) 51):
	{
		nimln(146, "vmdeps.nim");
		result = maptypetobracket_380088(((NimStringDesc*) &TMP7534), t, info);
	}
	break;
	case ((NU8) 52):
	{
		Tnode190813* LOC89;
		nimln(148, "vmdeps.nim");
		result = maptypetobracket_380088(((NimStringDesc*) &TMP7535), t, info);
		nimln(149, "vmdeps.nim");
		LOC89 = 0;
		LOC89 = copytree_195028((*t).n);
		add_191164(result, LOC89);
	}
	break;
	case ((NU8) 54):
	{
		nimln(150, "vmdeps.nim");
		result = maptypetobracket_380088(((NimStringDesc*) &TMP7536), t, info);
	}
	break;
	case ((NU8) 55):
	{
		nimln(151, "vmdeps.nim");
		result = maptypetobracket_380088(((NimStringDesc*) &TMP7537), t, info);
	}
	break;
	case ((NU8) 56):
	{
		nimln(152, "vmdeps.nim");
		result = maptypetobracket_380088(((NimStringDesc*) &TMP7538), t, info);
	}
	break;
	case ((NU8) 57):
	{
		nimln(153, "vmdeps.nim");
		result = maptypetobracket_380088(((NimStringDesc*) &TMP7539), t, info);
	}
	break;
	case ((NU8) 58):
	{
		nimln(154, "vmdeps.nim");
		result = atomictypex_380066(((NimStringDesc*) &TMP7540), t, info);
	}
	break;
	case ((NU8) 59):
	case ((NU8) 60):
	case ((NU8) 61):
	{
		Tnode190813* LOC96;
		nimln(156, "vmdeps.nim");
		result = newnodeit_192807(((NU8) 42), info, t);
		nimln(157, "vmdeps.nim");
		LOC96 = 0;
		LOC96 = atomictypex_380066(((NimStringDesc*) &TMP7541), t, info);
		add_191164(result, LOC96);
		nimln(158, "vmdeps.nim");
		{
			Tnode190813* LOC101;
			if (!!(((*t).n == NIM_NIL))) goto LA99;
			nimln(159, "vmdeps.nim");
			LOC101 = 0;
			LOC101 = copytree_195028((*t).n);
			add_191164(result, LOC101);
		}
		LA99: ;
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(Tnode190813*, opmaptypetoast_380265)(Ttype190849* t, Tlineinfo162338 info) {
	Tnode190813* result;
	nimfr("opMapTypeToAst", "vmdeps.nim")
	result = 0;
	nimln(162, "vmdeps.nim");
	result = maptypetoast_380080(t, info, NIM_TRUE);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_vmdepsInit)(void) {
	nimfr("vmdeps", "vmdeps.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_vmdepsDatInit)(void) {
}

