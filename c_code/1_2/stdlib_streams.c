/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct Ioerror3431 Ioerror3431;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Systemerror3429 Systemerror3429;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tcell46746 Tcell46746;
typedef struct Tcellseq46762 Tcellseq46762;
typedef struct Tgcheap48616 Tgcheap48616;
typedef struct Tcellset46758 Tcellset46758;
typedef struct Tpagedesc46754 Tpagedesc46754;
typedef struct Tmemregion28610 Tmemregion28610;
typedef struct Tsmallchunk27840 Tsmallchunk27840;
typedef struct Tllchunk28604 Tllchunk28604;
typedef struct Tbigchunk27842 Tbigchunk27842;
typedef struct Tintset27817 Tintset27817;
typedef struct Ttrunk27813 Ttrunk27813;
typedef struct Tavlnode28608 Tavlnode28608;
typedef struct Tgcstat48614 Tgcstat48614;
typedef struct Streamobj141027 Streamobj141027;
typedef struct Stringstreamobj141554 Stringstreamobj141554;
typedef struct Filestreamobj141692 Filestreamobj141692;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
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
struct  Systemerror3429  {
  Exception Sup;
};
struct  Ioerror3431  {
  Systemerror3429 Sup;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tcell46746  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46762  {
NI len;
NI cap;
Tcell46746** d;
};
struct  Tcellset46758  {
NI counter;
NI max;
Tpagedesc46754* head;
Tpagedesc46754** data;
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
Tcellseq46762 zct;
Tcellseq46762 decstack;
Tcellset46758 cycleroots;
Tcellseq46762 tempstack;
NI recgclock;
Tmemregion28610 region;
Tgcstat48614 stat;
};
typedef N_NIMCALL_PTR(void, TY141028) (Streamobj141027* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY141032) (Streamobj141027* s);
typedef N_NIMCALL_PTR(void, TY141036) (Streamobj141027* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY141041) (Streamobj141027* s);
typedef N_NIMCALL_PTR(NI, TY141045) (Streamobj141027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY141051) (Streamobj141027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY141057) (Streamobj141027* s);
struct  Streamobj141027  {
  TNimObject Sup;
TY141028 closeimpl;
TY141032 atendimpl;
TY141036 setpositionimpl;
TY141041 getpositionimpl;
TY141045 readdataimpl;
TY141051 writedataimpl;
TY141057 flushimpl;
};
struct  Stringstreamobj141554  {
  Streamobj141027 Sup;
NimStringDesc* data;
NI pos;
};
struct  Filestreamobj141692  {
  Streamobj141027 Sup;
FILE* f;
};
typedef NI TY27820[8];
struct  Tpagedesc46754  {
Tpagedesc46754* next;
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
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
N_NIMCALL(Ioerror3431*, neweio_141005)(NimStringDesc* msg);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46746*, usrtocell_50246)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_51804)(Tcell46746* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46762* s, Tcell46746* c);
N_NIMCALL(void, flush_141069)(Streamobj141027* s);
N_NIMCALL(void, close_141085)(Streamobj141027* s);
N_NIMCALL(void, close_141101)(Streamobj141027* s, Streamobj141027* unused);
N_NIMCALL(NIM_BOOL, atend_141111)(Streamobj141027* s);
N_NIMCALL(NIM_BOOL, atend_141121)(Streamobj141027* s, Streamobj141027* unused);
N_NIMCALL(void, setposition_141132)(Streamobj141027* s, NI pos);
N_NIMCALL(void, setposition_141142)(Streamobj141027* s, Streamobj141027* unused, NI pos);
N_NIMCALL(NI, getposition_141153)(Streamobj141027* s);
N_NIMCALL(NI, getposition_141163)(Streamobj141027* s, Streamobj141027* unused);
N_NIMCALL(NI, readdata_141174)(Streamobj141027* s, void* buffer, NI buflen);
N_NIMCALL(NI, readdata_141186)(Streamobj141027* s, Streamobj141027* unused, void* buffer, NI buflen);
N_NIMCALL(void, writedata_141199)(Streamobj141027* s, void* buffer, NI buflen);
N_NIMCALL(void, writedata_141210)(Streamobj141027* s, Streamobj141027* unused, void* buffer, NI buflen);
N_NIMCALL(void, write_141233)(Streamobj141027* s, NimStringDesc* x);
N_NIMCALL(void, writeln_141243)(Streamobj141027* s, NimStringDesc** args, NI argsLen0);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NIM_CHAR, readchar_141287)(Streamobj141027* s);
N_NIMCALL(void, read_141303)(Streamobj141027* s, NIM_BOOL* result);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(NIM_BOOL, readbool_141298)(Streamobj141027* s);
N_NIMCALL(void, read_141331)(Streamobj141027* s, NI8* result);
N_NIMCALL(NI8, readint8_141326)(Streamobj141027* s);
N_NIMCALL(void, read_141359)(Streamobj141027* s, NI16* result);
N_NIMCALL(NI16, readint16_141354)(Streamobj141027* s);
N_NIMCALL(void, read_141387)(Streamobj141027* s, NI32* result);
N_NIMCALL(NI32, readint32_141382)(Streamobj141027* s);
N_NIMCALL(void, read_141415)(Streamobj141027* s, NI64* result);
N_NIMCALL(NI64, readint64_141410)(Streamobj141027* s);
N_NIMCALL(void, read_141443)(Streamobj141027* s, NF32* result);
N_NIMCALL(NF32, readfloat32_141438)(Streamobj141027* s);
N_NIMCALL(void, read_141471)(Streamobj141027* s, NF* result);
N_NIMCALL(NF, readfloat64_141466)(Streamobj141027* s);
N_NIMCALL(NimStringDesc*, readstr_141494)(Streamobj141027* s, NI length);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NIM_BOOL, readline_141509)(Streamobj141027* s, NimStringDesc** line);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, readline_141531)(Streamobj141027* s);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, ssatend_141565)(Streamobj141027* s_141567);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(NI, clamp_141582)(NI x, NI a, NI b);
N_NIMCALL(void, sssetposition_141576)(Streamobj141027* s_141578, NI pos);
N_NIMCALL(NI, ssgetposition_141601)(Streamobj141027* s_141603);
N_NIMCALL(NI, ssreaddata_141612)(Streamobj141027* s_141614, void* buffer, NI buflen);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(void, sswritedata_141639)(Streamobj141027* s_141641, void* buffer, NI buflen);
N_NIMCALL(void, ssclose_141661)(Streamobj141027* s_141663);
N_NIMCALL(Stringstreamobj141554*, newstringstream_141671)(NimStringDesc* s);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP562)(void* p, NI op);
N_NIMCALL(void, fsclose_141696)(Streamobj141027* s);
N_NIMCALL(void, fsflush_141714)(Streamobj141027* s);
N_NIMCALL(NIM_BOOL, fsatend_141720)(Streamobj141027* s);
N_NIMCALL(NIM_BOOL, endoffile_13422)(FILE* f);
N_NIMCALL(void, fssetposition_141727)(Streamobj141027* s, NI pos);
N_NIMCALL(void, setfilepos_13542)(FILE* f, NI64 pos);
N_NIMCALL(NI, fsgetposition_141734)(Streamobj141027* s);
N_NIMCALL(NI64, getfilepos_13546)(FILE* f);
N_NIMCALL(NI, fsreaddata_141742)(Streamobj141027* s, void* buffer, NI buflen);
N_NIMCALL(NI, readbuffer_13515)(FILE* f, void* buffer, NI len);
N_NIMCALL(void, fswritedata_141751)(Streamobj141027* s, void* buffer, NI buflen);
N_NIMCALL(NI, writebuffer_13537)(FILE* f, void* buffer, NI len);
N_NIMCALL(Filestreamobj141692*, newfilestream_141759)(FILE* f);
N_NIMCALL(void, TMP564)(void* p, NI op);
N_NIMCALL(Filestreamobj141692*, newfilestream_141774)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(NIM_BOOL, open_13203)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(void, TMP4253)(void* p, NI op);
STRING_LITERAL(TMP552, "\015\012", 2);
STRING_LITERAL(TMP553, "cannot read from stream", 23);
STRING_LITERAL(TMP554, "", 0);
STRING_LITERAL(TMP563, "cannot write to stream", 22);
extern TNimType NTI13401; /* ref IOError */
extern TNimType NTI3431; /* IOError */
extern TFrame* frameptr_17042;
extern Tgcheap48616 gch_48644;
extern TNimType NTI3411; /* RootObj */
TNimType NTI141027; /* StreamObj */
TNimType NTI141028; /* proc (s: Stream){.gcsafe.} */
TNimType NTI141032; /* proc (s: Stream): bool{.gcsafe.} */
TNimType NTI141036; /* proc (s: Stream, pos: int){.gcsafe.} */
TNimType NTI141041; /* proc (s: Stream): int{.gcsafe.} */
TNimType NTI141045; /* proc (s: Stream, buffer: pointer, bufLen: int): int{.gcsafe.} */
TNimType NTI141051; /* proc (s: Stream, buffer: pointer, bufLen: int){.gcsafe.} */
TNimType NTI141057; /* proc (s: Stream){.gcsafe.} */
TNimType NTI141554; /* StringStreamObj */
extern TNimType NTI149; /* string */
extern TNimType NTI108; /* int */
TNimType NTI141552; /* StringStream */
TNimType NTI141692; /* FileStreamObj */
extern TNimType NTI13004; /* File */
TNimType NTI141690; /* FileStream */
TNimType NTI141025; /* Stream */

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

static N_INLINE(Tcell46746*, usrtocell_50246)(void* usr) {
	Tcell46746* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	result = ((Tcell46746*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46746))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_51804)(Tcell46746* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_50217((&gch_48644.zct), c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46746* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_50246(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).refcount -= ((NI) 8);
		nimln(168, "gc.nim");
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_51804(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(Ioerror3431*, neweio_141005)(NimStringDesc* msg) {
	Ioerror3431* result;
	NimStringDesc* LOC1;
	nimfr("newEIO", "streams.nim")
	result = 0;
	nimln(18, "streams.nim");
	result = (Ioerror3431*) newObj((&NTI13401), sizeof(Ioerror3431));
	(*result).Sup.Sup.Sup.m_type = (&NTI3431);
	nimln(19, "streams.nim");
	LOC1 = 0;
	LOC1 = (*result).Sup.Sup.message; (*result).Sup.Sup.message = copyStringRC1(msg);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	popFrame();
	return result;
}

N_NIMCALL(void, flush_141069)(Streamobj141027* s) {
	nimfr("flush", "streams.nim")
	nimln(42, "streams.nim");
	{
		if (!!((*s).flushimpl == 0)) goto LA3;
		(*s).flushimpl(s);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, close_141085)(Streamobj141027* s) {
	nimfr("close", "streams.nim")
	nimln(46, "streams.nim");
	{
		if (!!((*s).closeimpl == 0)) goto LA3;
		(*s).closeimpl(s);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, close_141101)(Streamobj141027* s, Streamobj141027* unused) {
	nimfr("close", "streams.nim")
	nimln(50, "streams.nim");
	(*s).closeimpl(s);
	popFrame();
}

N_NIMCALL(NIM_BOOL, atend_141111)(Streamobj141027* s) {
	NIM_BOOL result;
	nimfr("atEnd", "streams.nim")
	result = 0;
	nimln(55, "streams.nim");
	result = (*s).atendimpl(s);
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, atend_141121)(Streamobj141027* s, Streamobj141027* unused) {
	NIM_BOOL result;
	nimfr("atEnd", "streams.nim")
	result = 0;
	nimln(60, "streams.nim");
	result = (*s).atendimpl(s);
	popFrame();
	return result;
}

N_NIMCALL(void, setposition_141132)(Streamobj141027* s, NI pos) {
	nimfr("setPosition", "streams.nim")
	nimln(64, "streams.nim");
	(*s).setpositionimpl(s, pos);
	popFrame();
}

N_NIMCALL(void, setposition_141142)(Streamobj141027* s, Streamobj141027* unused, NI pos) {
	nimfr("setPosition", "streams.nim")
	nimln(68, "streams.nim");
	(*s).setpositionimpl(s, pos);
	popFrame();
}

N_NIMCALL(NI, getposition_141153)(Streamobj141027* s) {
	NI result;
	nimfr("getPosition", "streams.nim")
	result = 0;
	nimln(72, "streams.nim");
	result = (*s).getpositionimpl(s);
	popFrame();
	return result;
}

N_NIMCALL(NI, getposition_141163)(Streamobj141027* s, Streamobj141027* unused) {
	NI result;
	nimfr("getPosition", "streams.nim")
	result = 0;
	nimln(76, "streams.nim");
	result = (*s).getpositionimpl(s);
	popFrame();
	return result;
}

N_NIMCALL(NI, readdata_141174)(Streamobj141027* s, void* buffer, NI buflen) {
	NI result;
	nimfr("readData", "streams.nim")
	result = 0;
	nimln(80, "streams.nim");
	result = (*s).readdataimpl(s, buffer, buflen);
	popFrame();
	return result;
}

N_NIMCALL(NI, readdata_141186)(Streamobj141027* s, Streamobj141027* unused, void* buffer, NI buflen) {
	NI result;
	nimfr("readData", "streams.nim")
	result = 0;
	nimln(85, "streams.nim");
	result = (*s).readdataimpl(s, buffer, buflen);
	popFrame();
	return result;
}

N_NIMCALL(void, writedata_141199)(Streamobj141027* s, void* buffer, NI buflen) {
	nimfr("writeData", "streams.nim")
	nimln(90, "streams.nim");
	(*s).writedataimpl(s, buffer, buflen);
	popFrame();
}

N_NIMCALL(void, writedata_141210)(Streamobj141027* s, Streamobj141027* unused, void* buffer, NI buflen) {
	nimfr("writeData", "streams.nim")
	nimln(96, "streams.nim");
	(*s).writedataimpl(s, buffer, buflen);
	popFrame();
}

N_NIMCALL(void, write_141233)(Streamobj141027* s, NimStringDesc* x) {
	nimfr("write", "streams.nim")
	nimln(111, "streams.nim");
	writedata_141199(s, ((void*) (x->data)), (x ? x->Sup.len : 0));
	popFrame();
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

N_NIMCALL(void, writeln_141243)(Streamobj141027* s, NimStringDesc** args, NI argsLen0) {
	nimfr("writeln", "streams.nim")
	{
		NimStringDesc* str_141256;
		NI i_141260;
		str_141256 = 0;
		nimln(1689, "system.nim");
		i_141260 = ((NI) 0);
		{
			nimln(1690, "system.nim");
			while (1) {
				NI TMP551;
				if (!(i_141260 < argsLen0)) goto LA3;
				nimln(1691, "system.nim");
				if ((NU)(i_141260) >= (NU)(argsLen0)) raiseIndexError();
				str_141256 = args[i_141260];
				nimln(116, "streams.nim");
				write_141233(s, str_141256);
				nimln(1692, "system.nim");
				TMP551 = addInt(i_141260, ((NI) 1));
				i_141260 = (NI)(TMP551);
			} LA3: ;
		}
	}
	nimln(117, "streams.nim");
	write_141233(s, ((NimStringDesc*) &TMP552));
	popFrame();
}

N_NIMCALL(NIM_CHAR, readchar_141287)(Streamobj141027* s) {
	NIM_CHAR result;
	nimfr("readChar", "streams.nim")
	result = 0;
	nimln(127, "streams.nim");
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = readdata_141174(s, ((void*) ((&result))), ((NI) 1));
		if (!!((LOC3 == ((NI) 1)))) goto LA4;
		result = 0;
	}
	LA4: ;
	popFrame();
	return result;
}

N_NIMCALL(void, read_141303)(Streamobj141027* s, NIM_BOOL* result) {
	nimfr("read", "streams.nim")
	nimln(121, "streams.nim");
	{
		NI LOC3;
		Ioerror3431* LOC6;
		LOC3 = 0;
		LOC3 = readdata_141174(s, ((void*) (result)), ((NI) 1));
		if (!!((LOC3 == ((NI) 1)))) goto LA4;
		nimln(122, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_141005(((NimStringDesc*) &TMP553));
		raiseException((Exception*)LOC6, "IOError");
	}
	LA4: ;
	popFrame();
}

N_NIMCALL(NIM_BOOL, readbool_141298)(Streamobj141027* s) {
	NIM_BOOL result;
	nimfr("readBool", "streams.nim")
	result = 0;
	nimln(131, "streams.nim");
	read_141303(s, (&result));
	popFrame();
	return result;
}

N_NIMCALL(void, read_141331)(Streamobj141027* s, NI8* result) {
	nimfr("read", "streams.nim")
	nimln(121, "streams.nim");
	{
		NI LOC3;
		Ioerror3431* LOC6;
		LOC3 = 0;
		LOC3 = readdata_141174(s, ((void*) (result)), ((NI) 1));
		if (!!((LOC3 == ((NI) 1)))) goto LA4;
		nimln(122, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_141005(((NimStringDesc*) &TMP553));
		raiseException((Exception*)LOC6, "IOError");
	}
	LA4: ;
	popFrame();
}

N_NIMCALL(NI8, readint8_141326)(Streamobj141027* s) {
	NI8 result;
	nimfr("readInt8", "streams.nim")
	result = 0;
	nimln(135, "streams.nim");
	read_141331(s, (&result));
	popFrame();
	return result;
}

N_NIMCALL(void, read_141359)(Streamobj141027* s, NI16* result) {
	nimfr("read", "streams.nim")
	nimln(121, "streams.nim");
	{
		NI LOC3;
		Ioerror3431* LOC6;
		LOC3 = 0;
		LOC3 = readdata_141174(s, ((void*) (result)), ((NI) 2));
		if (!!((LOC3 == ((NI) 2)))) goto LA4;
		nimln(122, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_141005(((NimStringDesc*) &TMP553));
		raiseException((Exception*)LOC6, "IOError");
	}
	LA4: ;
	popFrame();
}

N_NIMCALL(NI16, readint16_141354)(Streamobj141027* s) {
	NI16 result;
	nimfr("readInt16", "streams.nim")
	result = 0;
	nimln(139, "streams.nim");
	read_141359(s, (&result));
	popFrame();
	return result;
}

N_NIMCALL(void, read_141387)(Streamobj141027* s, NI32* result) {
	nimfr("read", "streams.nim")
	nimln(121, "streams.nim");
	{
		NI LOC3;
		Ioerror3431* LOC6;
		LOC3 = 0;
		LOC3 = readdata_141174(s, ((void*) (result)), ((NI) 4));
		if (!!((LOC3 == ((NI) 4)))) goto LA4;
		nimln(122, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_141005(((NimStringDesc*) &TMP553));
		raiseException((Exception*)LOC6, "IOError");
	}
	LA4: ;
	popFrame();
}

N_NIMCALL(NI32, readint32_141382)(Streamobj141027* s) {
	NI32 result;
	nimfr("readInt32", "streams.nim")
	result = 0;
	nimln(143, "streams.nim");
	read_141387(s, (&result));
	popFrame();
	return result;
}

N_NIMCALL(void, read_141415)(Streamobj141027* s, NI64* result) {
	nimfr("read", "streams.nim")
	nimln(121, "streams.nim");
	{
		NI LOC3;
		Ioerror3431* LOC6;
		LOC3 = 0;
		LOC3 = readdata_141174(s, ((void*) (result)), ((NI) 8));
		if (!!((LOC3 == ((NI) 8)))) goto LA4;
		nimln(122, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_141005(((NimStringDesc*) &TMP553));
		raiseException((Exception*)LOC6, "IOError");
	}
	LA4: ;
	popFrame();
}

N_NIMCALL(NI64, readint64_141410)(Streamobj141027* s) {
	NI64 result;
	nimfr("readInt64", "streams.nim")
	result = 0;
	nimln(147, "streams.nim");
	read_141415(s, (&result));
	popFrame();
	return result;
}

N_NIMCALL(void, read_141443)(Streamobj141027* s, NF32* result) {
	nimfr("read", "streams.nim")
	nimln(121, "streams.nim");
	{
		NI LOC3;
		Ioerror3431* LOC6;
		LOC3 = 0;
		LOC3 = readdata_141174(s, ((void*) (result)), ((NI) 4));
		if (!!((LOC3 == ((NI) 4)))) goto LA4;
		nimln(122, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_141005(((NimStringDesc*) &TMP553));
		raiseException((Exception*)LOC6, "IOError");
	}
	LA4: ;
	popFrame();
}

N_NIMCALL(NF32, readfloat32_141438)(Streamobj141027* s) {
	NF32 result;
	nimfr("readFloat32", "streams.nim")
	result = 0;
	nimln(151, "streams.nim");
	read_141443(s, (&result));
	popFrame();
	return result;
}

N_NIMCALL(void, read_141471)(Streamobj141027* s, NF* result) {
	nimfr("read", "streams.nim")
	nimln(121, "streams.nim");
	{
		NI LOC3;
		Ioerror3431* LOC6;
		LOC3 = 0;
		LOC3 = readdata_141174(s, ((void*) (result)), ((NI) 8));
		if (!!((LOC3 == ((NI) 8)))) goto LA4;
		nimln(122, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_141005(((NimStringDesc*) &TMP553));
		raiseException((Exception*)LOC6, "IOError");
	}
	LA4: ;
	popFrame();
}

N_NIMCALL(NF, readfloat64_141466)(Streamobj141027* s) {
	NF result;
	nimfr("readFloat64", "streams.nim")
	result = 0;
	nimln(155, "streams.nim");
	read_141471(s, (&result));
	popFrame();
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

N_NIMCALL(NimStringDesc*, readstr_141494)(Streamobj141027* s, NI length) {
	NimStringDesc* result;
	NI L;
	nimfr("readStr", "streams.nim")
	result = 0;
	nimln(160, "streams.nim");
	result = mnewString(((NI)chckRange(length, ((NI) 0), ((NI) IL64(9223372036854775807)))));
	nimln(161, "streams.nim");
	if ((NU)(((NI) 0)) > (NU)(result->Sup.len)) raiseIndexError();
	L = readdata_141174(s, ((void*) ((&result->data[((NI) 0)]))), length);
	nimln(162, "streams.nim");
	{
		if (!!((L == length))) goto LA3;
		result = setLengthStr(result, ((NI)chckRange(L, ((NI) 0), ((NI) IL64(9223372036854775807)))));
	}
	LA3: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, readline_141509)(Streamobj141027* s, NimStringDesc** line) {
	NIM_BOOL result;
	nimfr("readLine", "streams.nim")
{	result = 0;
	nimln(171, "streams.nim");
	(*line) = setLengthStr((*line), ((NI) 0));
	{
		nimln(172, "streams.nim");
		while (1) {
			NIM_CHAR c;
			nimln(173, "streams.nim");
			c = readchar_141287(s);
			nimln(174, "streams.nim");
			{
				if (!((NU8)(c) == (NU8)(13))) goto LA5;
				nimln(175, "streams.nim");
				c = readchar_141287(s);
				nimln(176, "streams.nim");
				goto LA1;
			}
			goto LA3;
			LA5: ;
			{
				nimln(177, "streams.nim");
				if (!((NU8)(c) == (NU8)(10))) goto LA8;
				goto LA1;
			}
			goto LA3;
			LA8: ;
			{
				nimln(178, "streams.nim");
				if (!((NU8)(c) == (NU8)(0))) goto LA11;
				nimln(179, "streams.nim");
				{
					if (!(((NI) 0) < ((*line) ? (*line)->Sup.len : 0))) goto LA15;
					goto LA1;
				}
				goto LA13;
				LA15: ;
				{
					nimln(180, "streams.nim");
					result = NIM_FALSE;
					goto BeforeRet;
				}
				LA13: ;
			}
			goto LA3;
			LA11: ;
			LA3: ;
			nimln(181, "streams.nim");
			(*line) = addChar((*line), c);
		}
	} LA1: ;
	nimln(182, "streams.nim");
	result = NIM_TRUE;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, readline_141531)(Streamobj141027* s) {
	NimStringDesc* result;
	nimfr("readLine", "streams.nim")
	result = 0;
	nimln(187, "streams.nim");
	result = copyString(((NimStringDesc*) &TMP554));
	{
		nimln(188, "streams.nim");
		while (1) {
			NIM_CHAR c;
			nimln(189, "streams.nim");
			c = readchar_141287(s);
			nimln(190, "streams.nim");
			{
				if (!((NU8)(c) == (NU8)(13))) goto LA5;
				nimln(191, "streams.nim");
				c = readchar_141287(s);
				nimln(192, "streams.nim");
				goto LA1;
			}
			LA5: ;
			nimln(193, "streams.nim");
			{
				NIM_BOOL LOC9;
				LOC9 = 0;
				LOC9 = ((NU8)(c) == (NU8)(10));
				if (LOC9) goto LA10;
				LOC9 = ((NU8)(c) == (NU8)(0));
				LA10: ;
				if (!LOC9) goto LA11;
				nimln(194, "streams.nim");
				goto LA1;
			}
			goto LA7;
			LA11: ;
			{
				nimln(196, "streams.nim");
				result = addChar(result, c);
			}
			LA7: ;
		}
	} LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, ssatend_141565)(Streamobj141027* s_141567) {
	NIM_BOOL result;
	Stringstreamobj141554* s;
	nimfr("ssAtEnd", "streams.nim")
{	result = 0;
	nimln(207, "streams.nim");
	if (s_141567) chckObj((*s_141567).Sup.m_type, (&NTI141554));
	s = ((Stringstreamobj141554*) (s_141567));
	nimln(208, "streams.nim");
	result = (((*s).data ? (*s).data->Sup.len : 0) <= (*s).pos);
	goto BeforeRet;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, sssetposition_141576)(Streamobj141027* s_141578, NI pos) {
	Stringstreamobj141554* s;
	nimfr("ssSetPosition", "streams.nim")
	nimln(211, "streams.nim");
	if (s_141578) chckObj((*s_141578).Sup.m_type, (&NTI141554));
	s = ((Stringstreamobj141554*) (s_141578));
	nimln(212, "streams.nim");
	(*s).pos = clamp_141582(pos, ((NI) 0), ((*s).data ? ((*s).data->Sup.len-1) : -1));
	popFrame();
}

N_NIMCALL(NI, ssgetposition_141601)(Streamobj141027* s_141603) {
	NI result;
	Stringstreamobj141554* s;
	nimfr("ssGetPosition", "streams.nim")
{	result = 0;
	nimln(215, "streams.nim");
	if (s_141603) chckObj((*s_141603).Sup.m_type, (&NTI141554));
	s = ((Stringstreamobj141554*) (s_141603));
	nimln(216, "streams.nim");
	result = (*s).pos;
	goto BeforeRet;
	}BeforeRet: ;
	popFrame();
	return result;
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

N_NIMCALL(NI, ssreaddata_141612)(Streamobj141027* s_141614, void* buffer, NI buflen) {
	NI result;
	Stringstreamobj141554* s;
	NI TMP557;
	nimfr("ssReadData", "streams.nim")
	result = 0;
	nimln(219, "streams.nim");
	if (s_141614) chckObj((*s_141614).Sup.m_type, (&NTI141554));
	s = ((Stringstreamobj141554*) (s_141614));
	nimln(220, "streams.nim");
	TMP557 = subInt(((*s).data ? (*s).data->Sup.len : 0), (*s).pos);
	result = ((buflen <= (NI)(TMP557)) ? buflen : (NI)(TMP557));
	nimln(221, "streams.nim");
	{
		NI TMP558;
		if (!(((NI) 0) < result)) goto LA3;
		nimln(222, "streams.nim");
		if ((NU)((*s).pos) > (NU)((*s).data->Sup.len)) raiseIndexError();
		memcpy(buffer, ((void*) ((&(*s).data->data[(*s).pos]))), ((NI)chckRange(result, ((NI) 0), ((NI) IL64(9223372036854775807)))));
		nimln(223, "streams.nim");
		TMP558 = addInt((*s).pos, result);
		(*s).pos = (NI)(TMP558);
	}
	LA3: ;
	popFrame();
	return result;
}

N_NIMCALL(void, sswritedata_141639)(Streamobj141027* s_141641, void* buffer, NI buflen) {
	Stringstreamobj141554* s;
	NI TMP561;
	nimfr("ssWriteData", "streams.nim")
{	nimln(226, "streams.nim");
	if (s_141641) chckObj((*s_141641).Sup.m_type, (&NTI141554));
	s = ((Stringstreamobj141554*) (s_141641));
	nimln(227, "streams.nim");
	{
		if (!(buflen <= ((NI) 0))) goto LA3;
		nimln(228, "streams.nim");
		goto BeforeRet;
	}
	LA3: ;
	nimln(229, "streams.nim");
	{
		NI TMP559;
		NI TMP560;
		TMP559 = addInt((*s).pos, buflen);
		if (!(((*s).data ? (*s).data->Sup.len : 0) < (NI)(TMP559))) goto LA7;
		nimln(230, "streams.nim");
		TMP560 = addInt((*s).pos, buflen);
		(*s).data = setLengthStr((*s).data, ((NI)chckRange((NI)(TMP560), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	}
	LA7: ;
	nimln(231, "streams.nim");
	if ((NU)((*s).pos) > (NU)((*s).data->Sup.len)) raiseIndexError();
	memcpy(((void*) ((&(*s).data->data[(*s).pos]))), buffer, ((NI)chckRange(buflen, ((NI) 0), ((NI) IL64(9223372036854775807)))));
	nimln(232, "streams.nim");
	TMP561 = addInt((*s).pos, buflen);
	(*s).pos = (NI)(TMP561);
	}BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, ssclose_141661)(Streamobj141027* s_141663) {
	Stringstreamobj141554* s;
	NimStringDesc* LOC1;
	nimfr("ssClose", "streams.nim")
	nimln(235, "streams.nim");
	if (s_141663) chckObj((*s_141663).Sup.m_type, (&NTI141554));
	s = ((Stringstreamobj141554*) (s_141663));
	nimln(236, "streams.nim");
	LOC1 = 0;
	LOC1 = (*s).data; (*s).data = copyStringRC1(NIM_NIL);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	popFrame();
}
N_NIMCALL(void, TMP562)(void* p, NI op) {
	Stringstreamobj141554* a;
	a = (Stringstreamobj141554*)p;
	nimGCvisit((void*)(*a).data, op);
}

N_NIMCALL(Stringstreamobj141554*, newstringstream_141671)(NimStringDesc* s) {
	Stringstreamobj141554* result;
	NimStringDesc* LOC1;
	nimfr("newStringStream", "streams.nim")
	result = 0;
	nimln(240, "streams.nim");
	result = (Stringstreamobj141554*) newObj((&NTI141552), sizeof(Stringstreamobj141554));
	(*result).Sup.Sup.m_type = (&NTI141554);
	nimln(241, "streams.nim");
	LOC1 = 0;
	LOC1 = (*result).data; (*result).data = copyStringRC1(s);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	nimln(242, "streams.nim");
	(*result).pos = ((NI) 0);
	nimln(243, "streams.nim");
	(*result).Sup.closeimpl = ssclose_141661;
	nimln(244, "streams.nim");
	(*result).Sup.atendimpl = ssatend_141565;
	nimln(245, "streams.nim");
	(*result).Sup.setpositionimpl = sssetposition_141576;
	nimln(246, "streams.nim");
	(*result).Sup.getpositionimpl = ssgetposition_141601;
	nimln(247, "streams.nim");
	(*result).Sup.readdataimpl = ssreaddata_141612;
	nimln(248, "streams.nim");
	(*result).Sup.writedataimpl = sswritedata_141639;
	popFrame();
	return result;
}

N_NIMCALL(void, fsclose_141696)(Streamobj141027* s) {
	nimfr("fsClose", "streams.nim")
	nimln(259, "streams.nim");
	{
		if (s) chckObj((*s).Sup.m_type, (&NTI141692));
		if (!!(((*((Filestreamobj141692*) (s))).f == NIM_NIL))) goto LA3;
		nimln(260, "streams.nim");
		if (s) chckObj((*s).Sup.m_type, (&NTI141692));
		fclose((*((Filestreamobj141692*) (s))).f);
		nimln(261, "streams.nim");
		if (s) chckObj((*s).Sup.m_type, (&NTI141692));
		(*((Filestreamobj141692*) (s))).f = NIM_NIL;
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, fsflush_141714)(Streamobj141027* s) {
	nimfr("fsFlush", "streams.nim")
	nimln(262, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI141692));
	fflush((*((Filestreamobj141692*) (s))).f);
	popFrame();
}

N_NIMCALL(NIM_BOOL, fsatend_141720)(Streamobj141027* s) {
	NIM_BOOL result;
	nimfr("fsAtEnd", "streams.nim")
{	result = 0;
	nimln(263, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI141692));
	result = endoffile_13422((*((Filestreamobj141692*) (s))).f);
	goto BeforeRet;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, fssetposition_141727)(Streamobj141027* s, NI pos) {
	nimfr("fsSetPosition", "streams.nim")
	nimln(264, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI141692));
	setfilepos_13542((*((Filestreamobj141692*) (s))).f, ((NI64) (pos)));
	popFrame();
}

N_NIMCALL(NI, fsgetposition_141734)(Streamobj141027* s) {
	NI result;
	NI64 LOC1;
	nimfr("fsGetPosition", "streams.nim")
{	result = 0;
	nimln(265, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI141692));
	LOC1 = 0;
	LOC1 = getfilepos_13546((*((Filestreamobj141692*) (s))).f);
	result = ((NI) (LOC1));
	goto BeforeRet;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, fsreaddata_141742)(Streamobj141027* s, void* buffer, NI buflen) {
	NI result;
	nimfr("fsReadData", "streams.nim")
	result = 0;
	nimln(268, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI141692));
	result = readbuffer_13515((*((Filestreamobj141692*) (s))).f, buffer, ((NI)chckRange(buflen, ((NI) 0), ((NI) IL64(9223372036854775807)))));
	popFrame();
	return result;
}

N_NIMCALL(void, fswritedata_141751)(Streamobj141027* s, void* buffer, NI buflen) {
	nimfr("fsWriteData", "streams.nim")
	nimln(271, "streams.nim");
	{
		NI LOC3;
		Ioerror3431* LOC6;
		if (s) chckObj((*s).Sup.m_type, (&NTI141692));
		LOC3 = 0;
		LOC3 = writebuffer_13537((*((Filestreamobj141692*) (s))).f, buffer, ((NI)chckRange(buflen, ((NI) 0), ((NI) IL64(9223372036854775807)))));
		if (!!((LOC3 == buflen))) goto LA4;
		nimln(272, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_141005(((NimStringDesc*) &TMP563));
		raiseException((Exception*)LOC6, "IOError");
	}
	LA4: ;
	popFrame();
}
N_NIMCALL(void, TMP564)(void* p, NI op) {
	Filestreamobj141692* a;
	a = (Filestreamobj141692*)p;
}

N_NIMCALL(Filestreamobj141692*, newfilestream_141759)(FILE* f) {
	Filestreamobj141692* result;
	nimfr("newFileStream", "streams.nim")
	result = 0;
	nimln(276, "streams.nim");
	result = (Filestreamobj141692*) newObj((&NTI141690), sizeof(Filestreamobj141692));
	(*result).Sup.Sup.m_type = (&NTI141692);
	nimln(277, "streams.nim");
	(*result).f = f;
	nimln(278, "streams.nim");
	(*result).Sup.closeimpl = fsclose_141696;
	nimln(279, "streams.nim");
	(*result).Sup.atendimpl = fsatend_141720;
	nimln(280, "streams.nim");
	(*result).Sup.setpositionimpl = fssetposition_141727;
	nimln(281, "streams.nim");
	(*result).Sup.getpositionimpl = fsgetposition_141734;
	nimln(282, "streams.nim");
	(*result).Sup.readdataimpl = fsreaddata_141742;
	nimln(283, "streams.nim");
	(*result).Sup.writedataimpl = fswritedata_141751;
	nimln(284, "streams.nim");
	(*result).Sup.flushimpl = fsflush_141714;
	popFrame();
	return result;
}

N_NIMCALL(Filestreamobj141692*, newfilestream_141774)(NimStringDesc* filename, NU8 mode) {
	Filestreamobj141692* result;
	FILE* f;
	nimfr("newFileStream", "streams.nim")
	result = 0;
	f = 0;
	nimln(291, "streams.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_13203(&f, filename, mode, ((NI) -1));
		if (!LOC3) goto LA4;
		result = newfilestream_141759(f);
	}
	LA4: ;
	popFrame();
	return result;
}
N_NIMCALL(void, TMP4253)(void* p, NI op) {
	Streamobj141027* a;
	a = (Streamobj141027*)p;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsInit)(void) {
	nimfr("streams", "streams.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_streamsDatInit)(void) {
static TNimNode* TMP555[7];
static TNimNode* TMP556[2];
static TNimNode TMP549[12];
NTI141027.size = sizeof(Streamobj141027);
NTI141027.kind = 17;
NTI141027.base = (&NTI3411);
NTI141027.flags = 1;
TMP555[0] = &TMP549[1];
NTI141028.size = sizeof(TY141028);
NTI141028.kind = 25;
NTI141028.base = 0;
NTI141028.flags = 3;
TMP549[1].kind = 1;
TMP549[1].offset = offsetof(Streamobj141027, closeimpl);
TMP549[1].typ = (&NTI141028);
TMP549[1].name = "closeImpl";
TMP555[1] = &TMP549[2];
NTI141032.size = sizeof(TY141032);
NTI141032.kind = 25;
NTI141032.base = 0;
NTI141032.flags = 3;
TMP549[2].kind = 1;
TMP549[2].offset = offsetof(Streamobj141027, atendimpl);
TMP549[2].typ = (&NTI141032);
TMP549[2].name = "atEndImpl";
TMP555[2] = &TMP549[3];
NTI141036.size = sizeof(TY141036);
NTI141036.kind = 25;
NTI141036.base = 0;
NTI141036.flags = 3;
TMP549[3].kind = 1;
TMP549[3].offset = offsetof(Streamobj141027, setpositionimpl);
TMP549[3].typ = (&NTI141036);
TMP549[3].name = "setPositionImpl";
TMP555[3] = &TMP549[4];
NTI141041.size = sizeof(TY141041);
NTI141041.kind = 25;
NTI141041.base = 0;
NTI141041.flags = 3;
TMP549[4].kind = 1;
TMP549[4].offset = offsetof(Streamobj141027, getpositionimpl);
TMP549[4].typ = (&NTI141041);
TMP549[4].name = "getPositionImpl";
TMP555[4] = &TMP549[5];
NTI141045.size = sizeof(TY141045);
NTI141045.kind = 25;
NTI141045.base = 0;
NTI141045.flags = 3;
TMP549[5].kind = 1;
TMP549[5].offset = offsetof(Streamobj141027, readdataimpl);
TMP549[5].typ = (&NTI141045);
TMP549[5].name = "readDataImpl";
TMP555[5] = &TMP549[6];
NTI141051.size = sizeof(TY141051);
NTI141051.kind = 25;
NTI141051.base = 0;
NTI141051.flags = 3;
TMP549[6].kind = 1;
TMP549[6].offset = offsetof(Streamobj141027, writedataimpl);
TMP549[6].typ = (&NTI141051);
TMP549[6].name = "writeDataImpl";
TMP555[6] = &TMP549[7];
NTI141057.size = sizeof(TY141057);
NTI141057.kind = 25;
NTI141057.base = 0;
NTI141057.flags = 3;
TMP549[7].kind = 1;
TMP549[7].offset = offsetof(Streamobj141027, flushimpl);
TMP549[7].typ = (&NTI141057);
TMP549[7].name = "flushImpl";
TMP549[0].len = 7; TMP549[0].kind = 2; TMP549[0].sons = &TMP555[0];
NTI141027.node = &TMP549[0];
NTI141554.size = sizeof(Stringstreamobj141554);
NTI141554.kind = 17;
NTI141554.base = (&NTI141027);
TMP556[0] = &TMP549[9];
TMP549[9].kind = 1;
TMP549[9].offset = offsetof(Stringstreamobj141554, data);
TMP549[9].typ = (&NTI149);
TMP549[9].name = "data";
TMP556[1] = &TMP549[10];
TMP549[10].kind = 1;
TMP549[10].offset = offsetof(Stringstreamobj141554, pos);
TMP549[10].typ = (&NTI108);
TMP549[10].name = "pos";
TMP549[8].len = 2; TMP549[8].kind = 2; TMP549[8].sons = &TMP556[0];
NTI141554.node = &TMP549[8];
NTI141552.size = sizeof(Stringstreamobj141554*);
NTI141552.kind = 22;
NTI141552.base = (&NTI141554);
NTI141552.marker = TMP562;
NTI141692.size = sizeof(Filestreamobj141692);
NTI141692.kind = 17;
NTI141692.base = (&NTI141027);
NTI141692.flags = 1;
TMP549[11].kind = 1;
TMP549[11].offset = offsetof(Filestreamobj141692, f);
TMP549[11].typ = (&NTI13004);
TMP549[11].name = "f";
NTI141692.node = &TMP549[11];
NTI141690.size = sizeof(Filestreamobj141692*);
NTI141690.kind = 22;
NTI141690.base = (&NTI141692);
NTI141690.marker = TMP564;
NTI141025.size = sizeof(Streamobj141027*);
NTI141025.kind = 22;
NTI141025.base = (&NTI141027);
NTI141025.marker = TMP4253;
}

