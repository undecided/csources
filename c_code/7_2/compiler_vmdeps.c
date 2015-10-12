/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <setjmp.h>

#include <sys/types.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Processobj142402 Processobj142402;
typedef struct Streamobj137027 Streamobj137027;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TSafePoint TSafePoint;
typedef struct Stringtableobj133012 Stringtableobj133012;
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
typedef struct Tlineinfo161338 Tlineinfo161338;
typedef struct Tsym189843 Tsym189843;
typedef struct Tnode189813 Tnode189813;
typedef struct Tnodeseq189807 Tnodeseq189807;
typedef struct Ttype189849 Ttype189849;
typedef struct Tident165021 Tident165021;
typedef struct Tidobj165015 Tidobj165015;
typedef struct Ttypeseq189845 Ttypeseq189845;
typedef struct Tloc189827 Tloc189827;
typedef struct Ropeobj159009 Ropeobj159009;
typedef struct Tscope189837 Tscope189837;
typedef struct TY189944 TY189944;
typedef struct Tstrtable189817 Tstrtable189817;
typedef struct Tsymseq189815 Tsymseq189815;
typedef struct Tlib189831 Tlib189831;
typedef struct Keyvaluepairseq133010 Keyvaluepairseq133010;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
typedef struct Tinstantiation189833 Tinstantiation189833;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct TY103553 TY103553;
typedef struct TY189933 TY189933;
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
typedef NimStringDesc* TY142637[1];
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
struct  Tlineinfo161338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef Tnode189813* TY190931[1];
struct  Tidobj165015  {
  TNimObject Sup;
NI id;
};
struct  Tloc189827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype189849* t;
Ropeobj159009* r;
Ropeobj159009* heaproot;
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
struct  Tstrtable189817  {
NI counter;
Tsymseq189815* data;
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
struct  Tident165021  {
  Tidobj165015 Sup;
NimStringDesc* s;
Tident165021* next;
NI h;
};
typedef NU8 TY190031[20];
struct  Processobj142402  {
  TNimObject Sup;
int inhandle;
int outhandle;
int errhandle;
Streamobj137027* instream;
Streamobj137027* outstream;
Streamobj137027* errstream;
pid_t id;
int exitcode;
};
typedef N_NIMCALL_PTR(void, TY137028) (Streamobj137027* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY137032) (Streamobj137027* s);
typedef N_NIMCALL_PTR(void, TY137036) (Streamobj137027* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY137041) (Streamobj137027* s);
typedef N_NIMCALL_PTR(NI, TY137045) (Streamobj137027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY137051) (Streamobj137027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY137057) (Streamobj137027* s);
struct  Streamobj137027  {
  TNimObject Sup;
TY137028 closeimpl;
TY137032 atendimpl;
TY137036 setpositionimpl;
TY137041 getpositionimpl;
TY137045 readdataimpl;
TY137051 writedataimpl;
TY137057 flushimpl;
};
struct  Stringtableobj133012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq133010* data;
NU8 mode;
};
typedef NI TY27820[8];
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
struct  Ropeobj159009  {
  TNimObject Sup;
Ropeobj159009* left;
Ropeobj159009* right;
NI length;
NimStringDesc* data;
};
struct  Tscope189837  {
NI depthlevel;
Tstrtable189817 symbols;
Tnodeseq189807* usingsyms;
Tscope189837* parent;
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
struct TY103553 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
struct  Tinstantiation189833  {
Tsym189843* sym;
Ttypeseq189845* concretetypes;
TY189933* usedby;
};
struct Tnodeseq189807 {
  TGenericSeq Sup;
  Tnode189813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq189845 {
  TGenericSeq Sup;
  Ttype189849* data[SEQ_DECL_SIZE];
};
struct TY189944 {
  TGenericSeq Sup;
  Tinstantiation189833* data[SEQ_DECL_SIZE];
};
struct Tsymseq189815 {
  TGenericSeq Sup;
  Tsym189843* data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq133010 {
  TGenericSeq Sup;
  TY103553 data[SEQ_DECL_SIZE];
};
struct TY189933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, readoutput_379009)(Processobj142402* p);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(Streamobj137027*, nospoutputStream)(Processobj142402* p);
N_NIMCALL(NIM_BOOL, atend_137111)(Streamobj137027* s);
N_NIMCALL(NimStringDesc*, readline_137531)(Streamobj137027* s);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NI, nospwaitForExit)(Processobj142402* p, NI timeout);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NimStringDesc*, opgorge_379027)(NimStringDesc* cmd, NimStringDesc* input);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(Processobj142402*, nospstartProcess)(NimStringDesc* command, NimStringDesc* workingdir, NimStringDesc** args, NI argsLen0, Stringtableobj133012* env, NU8 options);
N_NIMCALL(void, write_137233)(Streamobj137027* s, NimStringDesc* x);
N_NIMCALL(Streamobj137027*, nospinputStream)(Processobj142402* p);
N_NIMCALL(void, close_137085)(Streamobj137027* s);
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
N_NIMCALL(NimStringDesc*, opslurp_379040)(NimStringDesc* file, Tlineinfo161338 info, Tsym189843* module);
N_NIMCALL(NimStringDesc*, findfile_153339)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, readfile_13434)(NimStringDesc* filename);
N_NIMCALL(void, appendtomodule_190911)(Tsym189843* m, Tnode189813* n);
N_NIMCALL(Tnode189813*, newnode_191607)(NU8 kind, Tlineinfo161338 info, Tnodeseq189807* sons, Ttype189849* typ);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(Tnode189813*, newstrnode_190643)(NU8 kind, NimStringDesc* strval);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, localerror_163155)(Tlineinfo161338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tnode189813*, atomictypex_379066)(NimStringDesc* name, Ttype189849* t, Tlineinfo161338 info);
N_NIMCALL(Tsym189843*, newsym_190655)(NU8 symkind, Tident165021* name, Tsym189843* owner, Tlineinfo161338 info);
N_NIMCALL(Tident165021*, getident_165463)(NimStringDesc* identifier);
N_NIMCALL(Tnode189813*, newsymnode_191325)(Tsym189843* sym);
N_NIMCALL(Tnode189813*, maptypetobracket_379088)(NimStringDesc* name, Ttype189849* t, Tlineinfo161338 info);
N_NIMCALL(Tnode189813*, newnodeit_191807)(NU8 kind, Tlineinfo161338 info, Ttype189849* typ);
N_NIMCALL(void, add_190164)(Tnode189813* father, Tnode189813* son);
N_NIMCALL(NI, len_192377)(Ttype189849* n);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(Ttype189849*, newtype_192140)(NU8 kind, Tsym189843* owner);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(Tnode189813*, maptypetoast_379080)(Ttype189849* t, Tlineinfo161338 info, NIM_BOOL allowrecursion);
N_NIMCALL(Ttype189849*, base_219039)(Ttype189849* t);
N_NIMCALL(Ttype189849*, lastson_192442)(Ttype189849* n);
N_NIMCALL(Tnode189813*, copytree_194028)(Tnode189813* src);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NIMCALL(Tnode189813*, opmaptypetoast_379265)(Ttype189849* t, Tlineinfo161338 info);
STRING_LITERAL(TMP7479, "", 0);
STRING_LITERAL(TMP7480, "\012", 1);
STRING_LITERAL(TMP7484, "void", 4);
STRING_LITERAL(TMP7486, "none", 4);
STRING_LITERAL(TMP7487, "bool", 4);
STRING_LITERAL(TMP7488, "char", 4);
STRING_LITERAL(TMP7489, "nil", 3);
STRING_LITERAL(TMP7490, "expr", 4);
STRING_LITERAL(TMP7491, "stmt", 4);
STRING_LITERAL(TMP7492, "void", 4);
STRING_LITERAL(TMP7493, "array", 5);
STRING_LITERAL(TMP7494, "typeDesc", 8);
STRING_LITERAL(TMP7495, "typeDesc", 8);
STRING_LITERAL(TMP7497, "distinct", 8);
STRING_LITERAL(TMP7498, "tuple", 5);
STRING_LITERAL(TMP7499, "set", 3);
STRING_LITERAL(TMP7500, "ptr", 3);
STRING_LITERAL(TMP7501, "ref", 3);
STRING_LITERAL(TMP7502, "var", 3);
STRING_LITERAL(TMP7503, "seq", 3);
STRING_LITERAL(TMP7504, "proc", 4);
STRING_LITERAL(TMP7505, "openArray", 9);
STRING_LITERAL(TMP7506, "range", 5);
static NIM_CONST TY190031 TMP7507 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP7508, "sons", 4);
STRING_LITERAL(TMP7509, "pointer", 7);
STRING_LITERAL(TMP7510, "string", 6);
STRING_LITERAL(TMP7511, "cstring", 7);
STRING_LITERAL(TMP7512, "int", 3);
STRING_LITERAL(TMP7513, "int8", 4);
STRING_LITERAL(TMP7514, "int16", 5);
STRING_LITERAL(TMP7515, "int32", 5);
STRING_LITERAL(TMP7516, "int64", 5);
STRING_LITERAL(TMP7517, "float", 5);
STRING_LITERAL(TMP7518, "float32", 7);
STRING_LITERAL(TMP7519, "float64", 7);
STRING_LITERAL(TMP7520, "float128", 8);
STRING_LITERAL(TMP7521, "uint", 4);
STRING_LITERAL(TMP7522, "uint8", 5);
STRING_LITERAL(TMP7523, "uint16", 6);
STRING_LITERAL(TMP7524, "uint32", 6);
STRING_LITERAL(TMP7525, "uint64", 6);
STRING_LITERAL(TMP7526, "bignum", 6);
STRING_LITERAL(TMP7527, "const", 5);
STRING_LITERAL(TMP7528, "mutable", 7);
STRING_LITERAL(TMP7529, "varargs", 7);
STRING_LITERAL(TMP7530, "iter", 4);
STRING_LITERAL(TMP7531, "error", 5);
STRING_LITERAL(TMP7532, "builtinTypeClass", 16);
STRING_LITERAL(TMP7533, "concept", 7);
STRING_LITERAL(TMP7534, "compositeTypeClass", 18);
STRING_LITERAL(TMP7535, "and", 3);
STRING_LITERAL(TMP7536, "or", 2);
STRING_LITERAL(TMP7537, "not", 3);
STRING_LITERAL(TMP7538, "anything", 8);
STRING_LITERAL(TMP7539, "static", 6);
extern TFrame* frameptr_17042;
extern TSafePoint* exchandler_17043;
extern TNimType NTI3431; /* IOError */
extern Exception* currexception_17045;
extern TNimType NTI3433; /* OSError */
extern Tgcheap48616 gch_48644;
extern TNimType NTI189807; /* TNodeSeq */
extern Tnode189813* emptynode_190807;

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

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

N_NIMCALL(NimStringDesc*, readoutput_379009)(Processobj142402* p) {
	NimStringDesc* result;
	Streamobj137027* output;
	NI TMP7481;
	NI LOC5;
	nimfr("readOutput", "vmdeps.nim")
	result = 0;
	nimln(13, "vmdeps.nim");
	result = copyString(((NimStringDesc*) &TMP7479));
	nimln(14, "vmdeps.nim");
	output = nospoutputStream(p);
	{
		nimln(15, "vmdeps.nim");
		while (1) {
			NIM_BOOL LOC3;
			NimStringDesc* LOC4;
			LOC3 = 0;
			LOC3 = atend_137111(output);
			if (!!(LOC3)) goto LA2;
			nimln(16, "vmdeps.nim");
			LOC4 = 0;
			LOC4 = readline_137531(output);
			result = resizeString(result, LOC4->Sup.len + 0);
appendString(result, LOC4);
			nimln(17, "vmdeps.nim");
			result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP7480));
		} LA2: ;
	}
	nimln(18, "vmdeps.nim");
	TMP7481 = subInt((result ? result->Sup.len : 0), ((NI) 1));
	result = setLengthStr(result, ((NI)chckRange((NI)(TMP7481), ((NI) 0), ((NI) IL64(9223372036854775807)))));
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
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
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
	result = ((Tcell46747*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46747))))));
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
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
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

N_NIMCALL(NimStringDesc*, opgorge_379027)(NimStringDesc* cmd, NimStringDesc* input) {
	NimStringDesc* volatile result;
	TSafePoint TMP7482;
	nimfr("opGorge", "vmdeps.nim")
	result = 0;
	nimln(22, "vmdeps.nim");
	pushSafePoint(&TMP7482);
	TMP7482.status = _setjmp(TMP7482.context);
	if (TMP7482.status == 0) {
		Processobj142402* p;
		TY142637 LOC2;
		nimln(23, "vmdeps.nim");
		memset((void*)LOC2, 0, sizeof(LOC2));
		p = nospstartProcess(cmd, ((NimStringDesc*) &TMP7479), LOC2, 0, NIM_NIL, 4);
		nimln(24, "vmdeps.nim");
		{
			Streamobj137027* LOC7;
			Streamobj137027* LOC8;
			if (!!(((input ? input->Sup.len : 0) == ((NI) 0)))) goto LA5;
			nimln(25, "vmdeps.nim");
			LOC7 = 0;
			LOC7 = nospinputStream(p);
			write_137233(LOC7, input);
			nimln(26, "vmdeps.nim");
			LOC8 = 0;
			LOC8 = nospinputStream(p);
			close_137085(LOC8);
		}
		LA5: ;
		nimln(27, "vmdeps.nim");
		result = readoutput_379009(p);
		popSafePoint();
	}
	else {
		popSafePoint();
		setFrame((TFrame*)&FR);
		if (isObj(getCurrentException()->Sup.m_type, (&NTI3431))||isObj(getCurrentException()->Sup.m_type, (&NTI3433))) {
			TMP7482.status = 0;
			nimln(29, "vmdeps.nim");
			result = copyString(((NimStringDesc*) &TMP7479));
			popCurrentException();
		}
	}
	if (TMP7482.status != 0) reraiseException();
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
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
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

N_NIMCALL(NimStringDesc*, opslurp_379040)(NimStringDesc* file, Tlineinfo161338 info, Tsym189843* module) {
	NimStringDesc* volatile result;
	TSafePoint TMP7483;
	nimfr("opSlurp", "vmdeps.nim")
	result = 0;
	nimln(32, "vmdeps.nim");
	pushSafePoint(&TMP7483);
	TMP7483.status = _setjmp(TMP7483.context);
	if (TMP7483.status == 0) {
		NimStringDesc* filename;
		Tnodeseq189807* LOC2;
		TY190931 LOC3;
		Tnode189813* LOC4;
		nimln(33, "vmdeps.nim");
		filename = findfile_153339(file);
		nimln(34, "vmdeps.nim");
		result = readfile_13434(filename);
		nimln(37, "vmdeps.nim");
		LOC2 = 0;
		LOC2 = (Tnodeseq189807*) newSeq((&NTI189807), 1);
		memset((void*)LOC3, 0, sizeof(LOC3));
		nimln(38, "vmdeps.nim");
		LOC3[0] = newstrnode_190643(((NU8) 20), filename);
		asgnRefNoCycle((void**) (&LOC2->data[0]), LOC3[0]);
		LOC4 = 0;
		LOC4 = newnode_191607(((NU8) 121), info, LOC2, NIM_NIL);
		appendtomodule_190911(module, LOC4);
		popSafePoint();
	}
	else {
		popSafePoint();
		setFrame((TFrame*)&FR);
		if (isObj(getCurrentException()->Sup.m_type, (&NTI3431))) {
			TMP7483.status = 0;
			nimln(40, "vmdeps.nim");
			localerror_163155(info, ((NU16) 3), file);
			nimln(41, "vmdeps.nim");
			result = copyString(((NimStringDesc*) &TMP7479));
			popCurrentException();
		}
	}
	if (TMP7483.status != 0) reraiseException();
	popFrame();
	return result;
}

N_NIMCALL(Tnode189813*, atomictypex_379066)(NimStringDesc* name, Ttype189849* t, Tlineinfo161338 info) {
	Tnode189813* result;
	Tsym189843* sym;
	Tident165021* LOC1;
	nimfr("atomicTypeX", "vmdeps.nim")
	result = 0;
	nimln(44, "vmdeps.nim");
	LOC1 = 0;
	LOC1 = getident_165463(name);
	sym = newsym_190655(((NU8) 7), LOC1, (*t).owner, info);
	nimln(45, "vmdeps.nim");
	asgnRefNoCycle((void**) (&(*sym).typ), t);
	nimln(46, "vmdeps.nim");
	result = newsymnode_191325(sym);
	nimln(47, "vmdeps.nim");
	asgnRefNoCycle((void**) (&(*result).typ), t);
	popFrame();
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

N_NIMCALL(Tnode189813*, maptypetobracket_379088)(NimStringDesc* name, Ttype189849* t, Tlineinfo161338 info) {
	Tnode189813* result;
	Tnode189813* LOC1;
	nimfr("mapTypeToBracket", "vmdeps.nim")
	result = 0;
	nimln(52, "vmdeps.nim");
	result = newnodeit_191807(((NU8) 42), info, t);
	nimln(53, "vmdeps.nim");
	LOC1 = 0;
	LOC1 = atomictypex_379066(name, t, info);
	add_190164(result, LOC1);
	{
		NI i_379113;
		NI HEX3Atmp_379130;
		NI LOC3;
		NI res_379133;
		i_379113 = 0;
		HEX3Atmp_379130 = 0;
		nimln(54, "vmdeps.nim");
		LOC3 = 0;
		LOC3 = len_192377(t);
		HEX3Atmp_379130 = subInt(LOC3, 1);
		nimln(1598, "system.nim");
		res_379133 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP7485;
				if (!(res_379133 <= HEX3Atmp_379130)) goto LA5;
				nimln(1600, "system.nim");
				i_379113 = res_379133;
				nimln(55, "vmdeps.nim");
				{
					Tnode189813* void_379126;
					if ((NU)(i_379113) >= (NU)((*t).sons->Sup.len)) raiseIndexError();
					if (!((*t).sons->data[i_379113] == NIM_NIL)) goto LA8;
					nimln(56, "vmdeps.nim");
					void_379126 = atomictypex_379066(((NimStringDesc*) &TMP7484), t, info);
					nimln(57, "vmdeps.nim");
					asgnRefNoCycle((void**) (&(*void_379126).typ), newtype_192140(((NU8) 3), (*t).owner));
					nimln(58, "vmdeps.nim");
					add_190164(result, void_379126);
				}
				goto LA6;
				LA8: ;
				{
					Tnode189813* LOC11;
					nimln(60, "vmdeps.nim");
					if ((NU)(i_379113) >= (NU)((*t).sons->Sup.len)) raiseIndexError();
					LOC11 = 0;
					LOC11 = maptypetoast_379080((*t).sons->data[i_379113], info, NIM_FALSE);
					add_190164(result, LOC11);
				}
				LA6: ;
				nimln(1619, "system.nim");
				TMP7485 = addInt(res_379133, ((NI) 1));
				res_379133 = (NI)(TMP7485);
			} LA5: ;
		}
	}
	popFrame();
	return result;
}

N_NIMCALL(Tnode189813*, maptypetoast_379080)(Ttype189849* t, Tlineinfo161338 info, NIM_BOOL allowrecursion) {
	Tnode189813* result;
	nimfr("mapTypeToAst", "vmdeps.nim")
	result = 0;
	nimln(65, "vmdeps.nim");
	switch ((*t).kind) {
	case ((NU8) 0):
	{
		nimln(66, "vmdeps.nim");
		result = atomictypex_379066(((NimStringDesc*) &TMP7486), t, info);
	}
	break;
	case ((NU8) 1):
	{
		nimln(67, "vmdeps.nim");
		result = atomictypex_379066(((NimStringDesc*) &TMP7487), t, info);
	}
	break;
	case ((NU8) 2):
	{
		nimln(68, "vmdeps.nim");
		result = atomictypex_379066(((NimStringDesc*) &TMP7488), t, info);
	}
	break;
	case ((NU8) 5):
	{
		nimln(69, "vmdeps.nim");
		result = atomictypex_379066(((NimStringDesc*) &TMP7489), t, info);
	}
	break;
	case ((NU8) 6):
	{
		nimln(70, "vmdeps.nim");
		result = atomictypex_379066(((NimStringDesc*) &TMP7490), t, info);
	}
	break;
	case ((NU8) 7):
	{
		nimln(71, "vmdeps.nim");
		result = atomictypex_379066(((NimStringDesc*) &TMP7491), t, info);
	}
	break;
	case ((NU8) 3):
	{
		nimln(72, "vmdeps.nim");
		result = atomictypex_379066(((NimStringDesc*) &TMP7492), t, info);
	}
	break;
	case ((NU8) 4):
	case ((NU8) 16):
	{
		Tnode189813* LOC9;
		Tnode189813* LOC10;
		Tnode189813* LOC11;
		nimln(74, "vmdeps.nim");
		result = newnodeit_191807(((NU8) 42), info, t);
		nimln(75, "vmdeps.nim");
		LOC9 = 0;
		LOC9 = atomictypex_379066(((NimStringDesc*) &TMP7493), t, info);
		add_190164(result, LOC9);
		nimln(76, "vmdeps.nim");
		if ((NU)(((NI) 0)) >= (NU)((*t).sons->Sup.len)) raiseIndexError();
		LOC10 = 0;
		LOC10 = maptypetoast_379080((*t).sons->data[((NI) 0)], info, NIM_FALSE);
		add_190164(result, LOC10);
		nimln(77, "vmdeps.nim");
		if ((NU)(((NI) 1)) >= (NU)((*t).sons->Sup.len)) raiseIndexError();
		LOC11 = 0;
		LOC11 = maptypetoast_379080((*t).sons->data[((NI) 1)], info, NIM_FALSE);
		add_190164(result, LOC11);
	}
	break;
	case ((NU8) 8):
	{
		nimln(79, "vmdeps.nim");
		{
			Ttype189849* LOC15;
			Tnode189813* LOC18;
			Ttype189849* LOC19;
			Tnode189813* LOC20;
			LOC15 = 0;
			LOC15 = base_219039(t);
			if (!!((LOC15 == NIM_NIL))) goto LA16;
			nimln(80, "vmdeps.nim");
			result = newnodeit_191807(((NU8) 42), info, t);
			nimln(81, "vmdeps.nim");
			LOC18 = 0;
			LOC18 = atomictypex_379066(((NimStringDesc*) &TMP7494), t, info);
			add_190164(result, LOC18);
			nimln(82, "vmdeps.nim");
			LOC19 = 0;
			LOC19 = base_219039(t);
			LOC20 = 0;
			LOC20 = maptypetoast_379080(LOC19, info, NIM_FALSE);
			add_190164(result, LOC20);
		}
		goto LA13;
		LA16: ;
		{
			nimln(84, "vmdeps.nim");
			result = atomictypex_379066(((NimStringDesc*) &TMP7495), t, info);
		}
		LA13: ;
	}
	break;
	case ((NU8) 9):
	{
		nimln(86, "vmdeps.nim");
		result = newnodeit_191807(((NU8) 42), info, t);
		{
			NI i_379197;
			NI HEX3Atmp_379243;
			NI LOC24;
			NI res_379246;
			i_379197 = 0;
			HEX3Atmp_379243 = 0;
			nimln(87, "vmdeps.nim");
			LOC24 = 0;
			LOC24 = len_192377(t);
			HEX3Atmp_379243 = subInt(LOC24, 1);
			nimln(1598, "system.nim");
			res_379246 = ((NI) 0);
			{
				nimln(1599, "system.nim");
				while (1) {
					Tnode189813* LOC27;
					NI TMP7496;
					if (!(res_379246 <= HEX3Atmp_379243)) goto LA26;
					nimln(1600, "system.nim");
					i_379197 = res_379246;
					nimln(88, "vmdeps.nim");
					if ((NU)(i_379197) >= (NU)((*t).sons->Sup.len)) raiseIndexError();
					LOC27 = 0;
					LOC27 = maptypetoast_379080((*t).sons->data[i_379197], info, NIM_FALSE);
					add_190164(result, LOC27);
					nimln(1619, "system.nim");
					TMP7496 = addInt(res_379246, ((NI) 1));
					res_379246 = (NI)(TMP7496);
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
		Ttype189849* LOC29;
		nimln(90, "vmdeps.nim");
		LOC29 = 0;
		LOC29 = lastson_192442(t);
		result = maptypetoast_379080(LOC29, info, NIM_FALSE);
	}
	break;
	case ((NU8) 13):
	{
		nimln(92, "vmdeps.nim");
		{
			if (!allowrecursion) goto LA33;
			nimln(93, "vmdeps.nim");
			result = maptypetobracket_379088(((NimStringDesc*) &TMP7497), t, info);
		}
		goto LA31;
		LA33: ;
		{
			nimln(95, "vmdeps.nim");
			result = atomictypex_379066((*(*(*t).sym).name).s, t, info);
		}
		LA31: ;
	}
	break;
	case ((NU8) 12):
	case ((NU8) 30):
	{
		nimln(96, "vmdeps.nim");
		result = atomictypex_379066((*(*(*t).sym).name).s, t, info);
	}
	break;
	case ((NU8) 17):
	{
		nimln(98, "vmdeps.nim");
		{
			Tnode189813* LOC48;
			if (!allowrecursion) goto LA40;
			nimln(99, "vmdeps.nim");
			result = newnodeit_191807(((NU8) 133), info, t);
			nimln(100, "vmdeps.nim");
			{
				if ((NU)(((NI) 0)) >= (NU)((*t).sons->Sup.len)) raiseIndexError();
				if (!((*t).sons->data[((NI) 0)] == NIM_NIL)) goto LA44;
				nimln(101, "vmdeps.nim");
				add_190164(result, emptynode_190807);
			}
			goto LA42;
			LA44: ;
			{
				Tnode189813* LOC47;
				nimln(103, "vmdeps.nim");
				if ((NU)(((NI) 0)) >= (NU)((*t).sons->Sup.len)) raiseIndexError();
				LOC47 = 0;
				LOC47 = maptypetoast_379080((*t).sons->data[((NI) 0)], info, NIM_FALSE);
				add_190164(result, LOC47);
			}
			LA42: ;
			nimln(104, "vmdeps.nim");
			LOC48 = 0;
			LOC48 = copytree_194028((*t).n);
			add_190164(result, LOC48);
		}
		goto LA38;
		LA40: ;
		{
			nimln(106, "vmdeps.nim");
			result = atomictypex_379066((*(*(*t).sym).name).s, t, info);
		}
		LA38: ;
	}
	break;
	case ((NU8) 14):
	{
		Tnode189813* LOC51;
		nimln(108, "vmdeps.nim");
		result = newnodeit_191807(((NU8) 150), info, t);
		nimln(109, "vmdeps.nim");
		LOC51 = 0;
		LOC51 = copytree_194028((*t).n);
		add_190164(result, LOC51);
	}
	break;
	case ((NU8) 18):
	{
		nimln(110, "vmdeps.nim");
		result = maptypetobracket_379088(((NimStringDesc*) &TMP7498), t, info);
	}
	break;
	case ((NU8) 19):
	{
		nimln(111, "vmdeps.nim");
		result = maptypetobracket_379088(((NimStringDesc*) &TMP7499), t, info);
	}
	break;
	case ((NU8) 21):
	{
		nimln(112, "vmdeps.nim");
		result = maptypetobracket_379088(((NimStringDesc*) &TMP7500), t, info);
	}
	break;
	case ((NU8) 22):
	{
		nimln(113, "vmdeps.nim");
		result = maptypetobracket_379088(((NimStringDesc*) &TMP7501), t, info);
	}
	break;
	case ((NU8) 23):
	{
		nimln(114, "vmdeps.nim");
		result = maptypetobracket_379088(((NimStringDesc*) &TMP7502), t, info);
	}
	break;
	case ((NU8) 24):
	{
		nimln(115, "vmdeps.nim");
		result = maptypetobracket_379088(((NimStringDesc*) &TMP7503), t, info);
	}
	break;
	case ((NU8) 25):
	{
		nimln(116, "vmdeps.nim");
		result = maptypetobracket_379088(((NimStringDesc*) &TMP7504), t, info);
	}
	break;
	case ((NU8) 27):
	{
		nimln(117, "vmdeps.nim");
		result = maptypetobracket_379088(((NimStringDesc*) &TMP7505), t, info);
	}
	break;
	case ((NU8) 20):
	{
		Tnode189813* LOC61;
		Tnode189813* LOC62;
		Tnode189813* LOC63;
		nimln(119, "vmdeps.nim");
		result = newnodeit_191807(((NU8) 42), info, t);
		nimln(120, "vmdeps.nim");
		LOC61 = 0;
		LOC61 = atomictypex_379066(((NimStringDesc*) &TMP7506), t, info);
		add_190164(result, LOC61);
		nimln(121, "vmdeps.nim");
		if (((TMP7507[(*(*t).n).kind/8] &(1<<((*(*t).n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7508));
		if ((NU)(((NI) 0)) >= (NU)((*(*t).n).kindU.S6.sons->Sup.len)) raiseIndexError();
		LOC62 = 0;
		LOC62 = copytree_194028((*(*t).n).kindU.S6.sons->data[((NI) 0)]);
		add_190164(result, LOC62);
		nimln(122, "vmdeps.nim");
		if (((TMP7507[(*(*t).n).kind/8] &(1<<((*(*t).n).kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7508));
		if ((NU)(((NI) 1)) >= (NU)((*(*t).n).kindU.S6.sons->Sup.len)) raiseIndexError();
		LOC63 = 0;
		LOC63 = copytree_194028((*(*t).n).kindU.S6.sons->data[((NI) 1)]);
		add_190164(result, LOC63);
	}
	break;
	case ((NU8) 26):
	{
		nimln(123, "vmdeps.nim");
		result = atomictypex_379066(((NimStringDesc*) &TMP7509), t, info);
	}
	break;
	case ((NU8) 28):
	{
		nimln(124, "vmdeps.nim");
		result = atomictypex_379066(((NimStringDesc*) &TMP7510), t, info);
	}
	break;
	case ((NU8) 29):
	{
		nimln(125, "vmdeps.nim");
		result = atomictypex_379066(((NimStringDesc*) &TMP7511), t, info);
	}
	break;
	case ((NU8) 31):
	{
		nimln(126, "vmdeps.nim");
		result = atomictypex_379066(((NimStringDesc*) &TMP7512), t, info);
	}
	break;
	case ((NU8) 32):
	{
		nimln(127, "vmdeps.nim");
		result = atomictypex_379066(((NimStringDesc*) &TMP7513), t, info);
	}
	break;
	case ((NU8) 33):
	{
		nimln(128, "vmdeps.nim");
		result = atomictypex_379066(((NimStringDesc*) &TMP7514), t, info);
	}
	break;
	case ((NU8) 34):
	{
		nimln(129, "vmdeps.nim");
		result = atomictypex_379066(((NimStringDesc*) &TMP7515), t, info);
	}
	break;
	case ((NU8) 35):
	{
		nimln(130, "vmdeps.nim");
		result = atomictypex_379066(((NimStringDesc*) &TMP7516), t, info);
	}
	break;
	case ((NU8) 36):
	{
		nimln(131, "vmdeps.nim");
		result = atomictypex_379066(((NimStringDesc*) &TMP7517), t, info);
	}
	break;
	case ((NU8) 37):
	{
		nimln(132, "vmdeps.nim");
		result = atomictypex_379066(((NimStringDesc*) &TMP7518), t, info);
	}
	break;
	case ((NU8) 38):
	{
		nimln(133, "vmdeps.nim");
		result = atomictypex_379066(((NimStringDesc*) &TMP7519), t, info);
	}
	break;
	case ((NU8) 39):
	{
		nimln(134, "vmdeps.nim");
		result = atomictypex_379066(((NimStringDesc*) &TMP7520), t, info);
	}
	break;
	case ((NU8) 40):
	{
		nimln(135, "vmdeps.nim");
		result = atomictypex_379066(((NimStringDesc*) &TMP7521), t, info);
	}
	break;
	case ((NU8) 41):
	{
		nimln(136, "vmdeps.nim");
		result = atomictypex_379066(((NimStringDesc*) &TMP7522), t, info);
	}
	break;
	case ((NU8) 42):
	{
		nimln(137, "vmdeps.nim");
		result = atomictypex_379066(((NimStringDesc*) &TMP7523), t, info);
	}
	break;
	case ((NU8) 43):
	{
		nimln(138, "vmdeps.nim");
		result = atomictypex_379066(((NimStringDesc*) &TMP7524), t, info);
	}
	break;
	case ((NU8) 44):
	{
		nimln(139, "vmdeps.nim");
		result = atomictypex_379066(((NimStringDesc*) &TMP7525), t, info);
	}
	break;
	case ((NU8) 45):
	{
		nimln(140, "vmdeps.nim");
		result = atomictypex_379066(((NimStringDesc*) &TMP7526), t, info);
	}
	break;
	case ((NU8) 46):
	{
		nimln(141, "vmdeps.nim");
		result = maptypetobracket_379088(((NimStringDesc*) &TMP7527), t, info);
	}
	break;
	case ((NU8) 47):
	{
		nimln(142, "vmdeps.nim");
		result = maptypetobracket_379088(((NimStringDesc*) &TMP7528), t, info);
	}
	break;
	case ((NU8) 48):
	{
		nimln(143, "vmdeps.nim");
		result = maptypetobracket_379088(((NimStringDesc*) &TMP7529), t, info);
	}
	break;
	case ((NU8) 49):
	{
		nimln(144, "vmdeps.nim");
		result = maptypetobracket_379088(((NimStringDesc*) &TMP7530), t, info);
	}
	break;
	case ((NU8) 50):
	{
		nimln(145, "vmdeps.nim");
		result = atomictypex_379066(((NimStringDesc*) &TMP7531), t, info);
	}
	break;
	case ((NU8) 51):
	{
		nimln(146, "vmdeps.nim");
		result = maptypetobracket_379088(((NimStringDesc*) &TMP7532), t, info);
	}
	break;
	case ((NU8) 52):
	{
		Tnode189813* LOC89;
		nimln(148, "vmdeps.nim");
		result = maptypetobracket_379088(((NimStringDesc*) &TMP7533), t, info);
		nimln(149, "vmdeps.nim");
		LOC89 = 0;
		LOC89 = copytree_194028((*t).n);
		add_190164(result, LOC89);
	}
	break;
	case ((NU8) 54):
	{
		nimln(150, "vmdeps.nim");
		result = maptypetobracket_379088(((NimStringDesc*) &TMP7534), t, info);
	}
	break;
	case ((NU8) 55):
	{
		nimln(151, "vmdeps.nim");
		result = maptypetobracket_379088(((NimStringDesc*) &TMP7535), t, info);
	}
	break;
	case ((NU8) 56):
	{
		nimln(152, "vmdeps.nim");
		result = maptypetobracket_379088(((NimStringDesc*) &TMP7536), t, info);
	}
	break;
	case ((NU8) 57):
	{
		nimln(153, "vmdeps.nim");
		result = maptypetobracket_379088(((NimStringDesc*) &TMP7537), t, info);
	}
	break;
	case ((NU8) 58):
	{
		nimln(154, "vmdeps.nim");
		result = atomictypex_379066(((NimStringDesc*) &TMP7538), t, info);
	}
	break;
	case ((NU8) 59):
	case ((NU8) 60):
	case ((NU8) 61):
	{
		Tnode189813* LOC96;
		nimln(156, "vmdeps.nim");
		result = newnodeit_191807(((NU8) 42), info, t);
		nimln(157, "vmdeps.nim");
		LOC96 = 0;
		LOC96 = atomictypex_379066(((NimStringDesc*) &TMP7539), t, info);
		add_190164(result, LOC96);
		nimln(158, "vmdeps.nim");
		{
			Tnode189813* LOC101;
			if (!!(((*t).n == NIM_NIL))) goto LA99;
			nimln(159, "vmdeps.nim");
			LOC101 = 0;
			LOC101 = copytree_194028((*t).n);
			add_190164(result, LOC101);
		}
		LA99: ;
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(Tnode189813*, opmaptypetoast_379265)(Ttype189849* t, Tlineinfo161338 info) {
	Tnode189813* result;
	nimfr("opMapTypeToAst", "vmdeps.nim")
	result = 0;
	nimln(162, "vmdeps.nim");
	result = maptypetoast_379080(t, info, NIM_TRUE);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_vmdepsInit)(void) {
	nimfr("vmdeps", "vmdeps.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_vmdepsDatInit)(void) {
}

