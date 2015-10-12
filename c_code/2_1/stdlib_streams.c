/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
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
typedef struct Tcell46747 Tcell46747;
typedef struct Tcellseq46763 Tcellseq46763;
typedef struct Tgcheap48616 Tgcheap48616;
typedef struct Tcellset46759 Tcellset46759;
typedef struct Tpagedesc46755 Tpagedesc46755;
typedef struct Tmemregion28610 Tmemregion28610;
typedef struct Tsmallchunk27840 Tsmallchunk27840;
typedef struct Tllchunk28604 Tllchunk28604;
typedef struct Tbigchunk27842 Tbigchunk27842;
typedef struct Tintset27817 Tintset27817;
typedef struct Ttrunk27813 Ttrunk27813;
typedef struct Tavlnode28608 Tavlnode28608;
typedef struct Tgcstat48614 Tgcstat48614;
typedef struct Streamobj138027 Streamobj138027;
typedef struct Stringstreamobj138554 Stringstreamobj138554;
typedef struct Filestreamobj138692 Filestreamobj138692;
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
struct  Stringstreamobj138554  {
  Streamobj138027 Sup;
NimStringDesc* data;
NI pos;
};
struct  Filestreamobj138692  {
  Streamobj138027 Sup;
FILE* f;
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
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
N_NIMCALL(Ioerror3431*, neweio_138005)(NimStringDesc* msg);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_51804)(Tcell46747* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46763* s, Tcell46747* c);
N_NIMCALL(void, flush_138069)(Streamobj138027* s);
N_NIMCALL(void, close_138085)(Streamobj138027* s);
N_NIMCALL(void, close_138101)(Streamobj138027* s, Streamobj138027* unused);
N_NIMCALL(NIM_BOOL, atend_138111)(Streamobj138027* s);
N_NIMCALL(NIM_BOOL, atend_138121)(Streamobj138027* s, Streamobj138027* unused);
N_NIMCALL(void, setposition_138132)(Streamobj138027* s, NI pos);
N_NIMCALL(void, setposition_138142)(Streamobj138027* s, Streamobj138027* unused, NI pos);
N_NIMCALL(NI, getposition_138153)(Streamobj138027* s);
N_NIMCALL(NI, getposition_138163)(Streamobj138027* s, Streamobj138027* unused);
N_NIMCALL(NI, readdata_138174)(Streamobj138027* s, void* buffer, NI buflen);
N_NIMCALL(NI, readdata_138186)(Streamobj138027* s, Streamobj138027* unused, void* buffer, NI buflen);
N_NIMCALL(void, writedata_138199)(Streamobj138027* s, void* buffer, NI buflen);
N_NIMCALL(void, writedata_138210)(Streamobj138027* s, Streamobj138027* unused, void* buffer, NI buflen);
N_NIMCALL(void, write_138233)(Streamobj138027* s, NimStringDesc* x);
N_NIMCALL(void, writeln_138243)(Streamobj138027* s, NimStringDesc** args, NI argsLen0);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NIM_CHAR, readchar_138287)(Streamobj138027* s);
N_NIMCALL(void, read_138303)(Streamobj138027* s, NIM_BOOL* result);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(NIM_BOOL, readbool_138298)(Streamobj138027* s);
N_NIMCALL(void, read_138331)(Streamobj138027* s, NI8* result);
N_NIMCALL(NI8, readint8_138326)(Streamobj138027* s);
N_NIMCALL(void, read_138359)(Streamobj138027* s, NI16* result);
N_NIMCALL(NI16, readint16_138354)(Streamobj138027* s);
N_NIMCALL(void, read_138387)(Streamobj138027* s, NI32* result);
N_NIMCALL(NI32, readint32_138382)(Streamobj138027* s);
N_NIMCALL(void, read_138415)(Streamobj138027* s, NI64* result);
N_NIMCALL(NI64, readint64_138410)(Streamobj138027* s);
N_NIMCALL(void, read_138443)(Streamobj138027* s, NF32* result);
N_NIMCALL(NF32, readfloat32_138438)(Streamobj138027* s);
N_NIMCALL(void, read_138471)(Streamobj138027* s, NF* result);
N_NIMCALL(NF, readfloat64_138466)(Streamobj138027* s);
N_NIMCALL(NimStringDesc*, readstr_138494)(Streamobj138027* s, NI length);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NIM_BOOL, readline_138509)(Streamobj138027* s, NimStringDesc** line);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, readline_138531)(Streamobj138027* s);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, ssatend_138565)(Streamobj138027* s_138567);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(NI, clamp_138582)(NI x, NI a, NI b);
N_NIMCALL(void, sssetposition_138576)(Streamobj138027* s_138578, NI pos);
N_NIMCALL(NI, ssgetposition_138601)(Streamobj138027* s_138603);
N_NIMCALL(NI, ssreaddata_138612)(Streamobj138027* s_138614, void* buffer, NI buflen);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(void, sswritedata_138639)(Streamobj138027* s_138641, void* buffer, NI buflen);
N_NIMCALL(void, ssclose_138661)(Streamobj138027* s_138663);
N_NIMCALL(Stringstreamobj138554*, newstringstream_138671)(NimStringDesc* s);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP554)(void* p, NI op);
N_NIMCALL(void, fsclose_138696)(Streamobj138027* s);
N_NIMCALL(void, fsflush_138714)(Streamobj138027* s);
N_NIMCALL(NIM_BOOL, fsatend_138720)(Streamobj138027* s);
N_NIMCALL(NIM_BOOL, endoffile_13422)(FILE* f);
N_NIMCALL(void, fssetposition_138727)(Streamobj138027* s, NI pos);
N_NIMCALL(void, setfilepos_13542)(FILE* f, NI64 pos);
N_NIMCALL(NI, fsgetposition_138734)(Streamobj138027* s);
N_NIMCALL(NI64, getfilepos_13546)(FILE* f);
N_NIMCALL(NI64, chckRange64)(NI64 i, NI64 a, NI64 b);
N_NIMCALL(NI, fsreaddata_138741)(Streamobj138027* s, void* buffer, NI buflen);
N_NIMCALL(NI, readbuffer_13515)(FILE* f, void* buffer, NI len);
N_NIMCALL(void, fswritedata_138750)(Streamobj138027* s, void* buffer, NI buflen);
N_NIMCALL(NI, writebuffer_13537)(FILE* f, void* buffer, NI len);
N_NIMCALL(Filestreamobj138692*, newfilestream_138758)(FILE* f);
N_NIMCALL(void, TMP556)(void* p, NI op);
N_NIMCALL(Filestreamobj138692*, newfilestream_138773)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(NIM_BOOL, open_13203)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(void, TMP591)(void* p, NI op);
STRING_LITERAL(TMP544, "\012", 1);
STRING_LITERAL(TMP545, "cannot read from stream", 23);
STRING_LITERAL(TMP546, "", 0);
STRING_LITERAL(TMP555, "cannot write to stream", 22);
extern TNimType NTI13401; /* ref IOError */
extern TNimType NTI3431; /* IOError */
extern TFrame* frameptr_17042;
extern Tgcheap48616 gch_48644;
extern TNimType NTI3411; /* RootObj */
TNimType NTI138027; /* StreamObj */
TNimType NTI138028; /* proc (s: Stream){.gcsafe.} */
TNimType NTI138032; /* proc (s: Stream): bool{.gcsafe.} */
TNimType NTI138036; /* proc (s: Stream, pos: int){.gcsafe.} */
TNimType NTI138041; /* proc (s: Stream): int{.gcsafe.} */
TNimType NTI138045; /* proc (s: Stream, buffer: pointer, bufLen: int): int{.gcsafe.} */
TNimType NTI138051; /* proc (s: Stream, buffer: pointer, bufLen: int){.gcsafe.} */
TNimType NTI138057; /* proc (s: Stream){.gcsafe.} */
TNimType NTI138554; /* StringStreamObj */
extern TNimType NTI149; /* string */
extern TNimType NTI108; /* int */
TNimType NTI138552; /* StringStream */
TNimType NTI138692; /* FileStreamObj */
extern TNimType NTI13004; /* File */
TNimType NTI138690; /* FileStream */
TNimType NTI138025; /* Stream */

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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46747* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_50246(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).refcount -= ((NI) 8);
		nimln(168, "gc.nim");
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_51804(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(Ioerror3431*, neweio_138005)(NimStringDesc* msg) {
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

N_NIMCALL(void, flush_138069)(Streamobj138027* s) {
	nimfr("flush", "streams.nim")
	nimln(42, "streams.nim");
	{
		if (!!((*s).flushimpl == 0)) goto LA3;
		(*s).flushimpl(s);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, close_138085)(Streamobj138027* s) {
	nimfr("close", "streams.nim")
	nimln(46, "streams.nim");
	{
		if (!!((*s).closeimpl == 0)) goto LA3;
		(*s).closeimpl(s);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, close_138101)(Streamobj138027* s, Streamobj138027* unused) {
	nimfr("close", "streams.nim")
	nimln(50, "streams.nim");
	(*s).closeimpl(s);
	popFrame();
}

N_NIMCALL(NIM_BOOL, atend_138111)(Streamobj138027* s) {
	NIM_BOOL result;
	nimfr("atEnd", "streams.nim")
	result = 0;
	nimln(55, "streams.nim");
	result = (*s).atendimpl(s);
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, atend_138121)(Streamobj138027* s, Streamobj138027* unused) {
	NIM_BOOL result;
	nimfr("atEnd", "streams.nim")
	result = 0;
	nimln(60, "streams.nim");
	result = (*s).atendimpl(s);
	popFrame();
	return result;
}

N_NIMCALL(void, setposition_138132)(Streamobj138027* s, NI pos) {
	nimfr("setPosition", "streams.nim")
	nimln(64, "streams.nim");
	(*s).setpositionimpl(s, pos);
	popFrame();
}

N_NIMCALL(void, setposition_138142)(Streamobj138027* s, Streamobj138027* unused, NI pos) {
	nimfr("setPosition", "streams.nim")
	nimln(68, "streams.nim");
	(*s).setpositionimpl(s, pos);
	popFrame();
}

N_NIMCALL(NI, getposition_138153)(Streamobj138027* s) {
	NI result;
	nimfr("getPosition", "streams.nim")
	result = 0;
	nimln(72, "streams.nim");
	result = (*s).getpositionimpl(s);
	popFrame();
	return result;
}

N_NIMCALL(NI, getposition_138163)(Streamobj138027* s, Streamobj138027* unused) {
	NI result;
	nimfr("getPosition", "streams.nim")
	result = 0;
	nimln(76, "streams.nim");
	result = (*s).getpositionimpl(s);
	popFrame();
	return result;
}

N_NIMCALL(NI, readdata_138174)(Streamobj138027* s, void* buffer, NI buflen) {
	NI result;
	nimfr("readData", "streams.nim")
	result = 0;
	nimln(80, "streams.nim");
	result = (*s).readdataimpl(s, buffer, buflen);
	popFrame();
	return result;
}

N_NIMCALL(NI, readdata_138186)(Streamobj138027* s, Streamobj138027* unused, void* buffer, NI buflen) {
	NI result;
	nimfr("readData", "streams.nim")
	result = 0;
	nimln(85, "streams.nim");
	result = (*s).readdataimpl(s, buffer, buflen);
	popFrame();
	return result;
}

N_NIMCALL(void, writedata_138199)(Streamobj138027* s, void* buffer, NI buflen) {
	nimfr("writeData", "streams.nim")
	nimln(90, "streams.nim");
	(*s).writedataimpl(s, buffer, buflen);
	popFrame();
}

N_NIMCALL(void, writedata_138210)(Streamobj138027* s, Streamobj138027* unused, void* buffer, NI buflen) {
	nimfr("writeData", "streams.nim")
	nimln(96, "streams.nim");
	(*s).writedataimpl(s, buffer, buflen);
	popFrame();
}

N_NIMCALL(void, write_138233)(Streamobj138027* s, NimStringDesc* x) {
	nimfr("write", "streams.nim")
	nimln(111, "streams.nim");
	writedata_138199(s, ((void*) (x->data)), (x ? x->Sup.len : 0));
	popFrame();
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

N_NIMCALL(void, writeln_138243)(Streamobj138027* s, NimStringDesc** args, NI argsLen0) {
	nimfr("writeln", "streams.nim")
	{
		NimStringDesc* str_138256;
		NI i_138260;
		str_138256 = 0;
		nimln(1689, "system.nim");
		i_138260 = ((NI) 0);
		{
			nimln(1690, "system.nim");
			while (1) {
				NI TMP543;
				if (!(i_138260 < argsLen0)) goto LA3;
				nimln(1691, "system.nim");
				if ((NU)(i_138260) >= (NU)(argsLen0)) raiseIndexError();
				str_138256 = args[i_138260];
				nimln(116, "streams.nim");
				write_138233(s, str_138256);
				nimln(1692, "system.nim");
				TMP543 = addInt(i_138260, ((NI) 1));
				i_138260 = (NI)(TMP543);
			} LA3: ;
		}
	}
	nimln(117, "streams.nim");
	write_138233(s, ((NimStringDesc*) &TMP544));
	popFrame();
}

N_NIMCALL(NIM_CHAR, readchar_138287)(Streamobj138027* s) {
	NIM_CHAR result;
	nimfr("readChar", "streams.nim")
	result = 0;
	nimln(127, "streams.nim");
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = readdata_138174(s, ((void*) ((&result))), ((NI) 1));
		if (!!((LOC3 == ((NI) 1)))) goto LA4;
		result = 0;
	}
	LA4: ;
	popFrame();
	return result;
}

N_NIMCALL(void, read_138303)(Streamobj138027* s, NIM_BOOL* result) {
	nimfr("read", "streams.nim")
	nimln(121, "streams.nim");
	{
		NI LOC3;
		Ioerror3431* LOC6;
		LOC3 = 0;
		LOC3 = readdata_138174(s, ((void*) (result)), ((NI) 1));
		if (!!((LOC3 == ((NI) 1)))) goto LA4;
		nimln(122, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_138005(((NimStringDesc*) &TMP545));
		raiseException((Exception*)LOC6, "IOError");
	}
	LA4: ;
	popFrame();
}

N_NIMCALL(NIM_BOOL, readbool_138298)(Streamobj138027* s) {
	NIM_BOOL result;
	nimfr("readBool", "streams.nim")
	result = 0;
	nimln(131, "streams.nim");
	read_138303(s, (&result));
	popFrame();
	return result;
}

N_NIMCALL(void, read_138331)(Streamobj138027* s, NI8* result) {
	nimfr("read", "streams.nim")
	nimln(121, "streams.nim");
	{
		NI LOC3;
		Ioerror3431* LOC6;
		LOC3 = 0;
		LOC3 = readdata_138174(s, ((void*) (result)), ((NI) 1));
		if (!!((LOC3 == ((NI) 1)))) goto LA4;
		nimln(122, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_138005(((NimStringDesc*) &TMP545));
		raiseException((Exception*)LOC6, "IOError");
	}
	LA4: ;
	popFrame();
}

N_NIMCALL(NI8, readint8_138326)(Streamobj138027* s) {
	NI8 result;
	nimfr("readInt8", "streams.nim")
	result = 0;
	nimln(135, "streams.nim");
	read_138331(s, (&result));
	popFrame();
	return result;
}

N_NIMCALL(void, read_138359)(Streamobj138027* s, NI16* result) {
	nimfr("read", "streams.nim")
	nimln(121, "streams.nim");
	{
		NI LOC3;
		Ioerror3431* LOC6;
		LOC3 = 0;
		LOC3 = readdata_138174(s, ((void*) (result)), ((NI) 2));
		if (!!((LOC3 == ((NI) 2)))) goto LA4;
		nimln(122, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_138005(((NimStringDesc*) &TMP545));
		raiseException((Exception*)LOC6, "IOError");
	}
	LA4: ;
	popFrame();
}

N_NIMCALL(NI16, readint16_138354)(Streamobj138027* s) {
	NI16 result;
	nimfr("readInt16", "streams.nim")
	result = 0;
	nimln(139, "streams.nim");
	read_138359(s, (&result));
	popFrame();
	return result;
}

N_NIMCALL(void, read_138387)(Streamobj138027* s, NI32* result) {
	nimfr("read", "streams.nim")
	nimln(121, "streams.nim");
	{
		NI LOC3;
		Ioerror3431* LOC6;
		LOC3 = 0;
		LOC3 = readdata_138174(s, ((void*) (result)), ((NI) 4));
		if (!!((LOC3 == ((NI) 4)))) goto LA4;
		nimln(122, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_138005(((NimStringDesc*) &TMP545));
		raiseException((Exception*)LOC6, "IOError");
	}
	LA4: ;
	popFrame();
}

N_NIMCALL(NI32, readint32_138382)(Streamobj138027* s) {
	NI32 result;
	nimfr("readInt32", "streams.nim")
	result = 0;
	nimln(143, "streams.nim");
	read_138387(s, (&result));
	popFrame();
	return result;
}

N_NIMCALL(void, read_138415)(Streamobj138027* s, NI64* result) {
	nimfr("read", "streams.nim")
	nimln(121, "streams.nim");
	{
		NI LOC3;
		Ioerror3431* LOC6;
		LOC3 = 0;
		LOC3 = readdata_138174(s, ((void*) (result)), ((NI) 8));
		if (!!((LOC3 == ((NI) 8)))) goto LA4;
		nimln(122, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_138005(((NimStringDesc*) &TMP545));
		raiseException((Exception*)LOC6, "IOError");
	}
	LA4: ;
	popFrame();
}

N_NIMCALL(NI64, readint64_138410)(Streamobj138027* s) {
	NI64 result;
	nimfr("readInt64", "streams.nim")
	result = 0;
	nimln(147, "streams.nim");
	read_138415(s, (&result));
	popFrame();
	return result;
}

N_NIMCALL(void, read_138443)(Streamobj138027* s, NF32* result) {
	nimfr("read", "streams.nim")
	nimln(121, "streams.nim");
	{
		NI LOC3;
		Ioerror3431* LOC6;
		LOC3 = 0;
		LOC3 = readdata_138174(s, ((void*) (result)), ((NI) 4));
		if (!!((LOC3 == ((NI) 4)))) goto LA4;
		nimln(122, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_138005(((NimStringDesc*) &TMP545));
		raiseException((Exception*)LOC6, "IOError");
	}
	LA4: ;
	popFrame();
}

N_NIMCALL(NF32, readfloat32_138438)(Streamobj138027* s) {
	NF32 result;
	nimfr("readFloat32", "streams.nim")
	result = 0;
	nimln(151, "streams.nim");
	read_138443(s, (&result));
	popFrame();
	return result;
}

N_NIMCALL(void, read_138471)(Streamobj138027* s, NF* result) {
	nimfr("read", "streams.nim")
	nimln(121, "streams.nim");
	{
		NI LOC3;
		Ioerror3431* LOC6;
		LOC3 = 0;
		LOC3 = readdata_138174(s, ((void*) (result)), ((NI) 8));
		if (!!((LOC3 == ((NI) 8)))) goto LA4;
		nimln(122, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_138005(((NimStringDesc*) &TMP545));
		raiseException((Exception*)LOC6, "IOError");
	}
	LA4: ;
	popFrame();
}

N_NIMCALL(NF, readfloat64_138466)(Streamobj138027* s) {
	NF result;
	nimfr("readFloat64", "streams.nim")
	result = 0;
	nimln(155, "streams.nim");
	read_138471(s, (&result));
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

N_NIMCALL(NimStringDesc*, readstr_138494)(Streamobj138027* s, NI length) {
	NimStringDesc* result;
	NI L;
	nimfr("readStr", "streams.nim")
	result = 0;
	nimln(160, "streams.nim");
	result = mnewString(((NI)chckRange(length, ((NI) 0), ((NI) 2147483647))));
	nimln(161, "streams.nim");
	if ((NU)(((NI) 0)) > (NU)(result->Sup.len)) raiseIndexError();
	L = readdata_138174(s, ((void*) ((&result->data[((NI) 0)]))), length);
	nimln(162, "streams.nim");
	{
		if (!!((L == length))) goto LA3;
		result = setLengthStr(result, ((NI)chckRange(L, ((NI) 0), ((NI) 2147483647))));
	}
	LA3: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, readline_138509)(Streamobj138027* s, NimStringDesc** line) {
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
			c = readchar_138287(s);
			nimln(174, "streams.nim");
			{
				if (!((NU8)(c) == (NU8)(13))) goto LA5;
				nimln(175, "streams.nim");
				c = readchar_138287(s);
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

N_NIMCALL(NimStringDesc*, readline_138531)(Streamobj138027* s) {
	NimStringDesc* result;
	nimfr("readLine", "streams.nim")
	result = 0;
	nimln(187, "streams.nim");
	result = copyString(((NimStringDesc*) &TMP546));
	{
		nimln(188, "streams.nim");
		while (1) {
			NIM_CHAR c;
			nimln(189, "streams.nim");
			c = readchar_138287(s);
			nimln(190, "streams.nim");
			{
				if (!((NU8)(c) == (NU8)(13))) goto LA5;
				nimln(191, "streams.nim");
				c = readchar_138287(s);
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

N_NIMCALL(NIM_BOOL, ssatend_138565)(Streamobj138027* s_138567) {
	NIM_BOOL result;
	Stringstreamobj138554* s;
	nimfr("ssAtEnd", "streams.nim")
{	result = 0;
	nimln(207, "streams.nim");
	if (s_138567) chckObj((*s_138567).Sup.m_type, (&NTI138554));
	s = ((Stringstreamobj138554*) (s_138567));
	nimln(208, "streams.nim");
	result = (((*s).data ? (*s).data->Sup.len : 0) <= (*s).pos);
	goto BeforeRet;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, sssetposition_138576)(Streamobj138027* s_138578, NI pos) {
	Stringstreamobj138554* s;
	nimfr("ssSetPosition", "streams.nim")
	nimln(211, "streams.nim");
	if (s_138578) chckObj((*s_138578).Sup.m_type, (&NTI138554));
	s = ((Stringstreamobj138554*) (s_138578));
	nimln(212, "streams.nim");
	(*s).pos = clamp_138582(pos, ((NI) 0), ((*s).data ? ((*s).data->Sup.len-1) : -1));
	popFrame();
}

N_NIMCALL(NI, ssgetposition_138601)(Streamobj138027* s_138603) {
	NI result;
	Stringstreamobj138554* s;
	nimfr("ssGetPosition", "streams.nim")
{	result = 0;
	nimln(215, "streams.nim");
	if (s_138603) chckObj((*s_138603).Sup.m_type, (&NTI138554));
	s = ((Stringstreamobj138554*) (s_138603));
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

N_NIMCALL(NI, ssreaddata_138612)(Streamobj138027* s_138614, void* buffer, NI buflen) {
	NI result;
	Stringstreamobj138554* s;
	NI TMP549;
	nimfr("ssReadData", "streams.nim")
	result = 0;
	nimln(219, "streams.nim");
	if (s_138614) chckObj((*s_138614).Sup.m_type, (&NTI138554));
	s = ((Stringstreamobj138554*) (s_138614));
	nimln(220, "streams.nim");
	TMP549 = subInt(((*s).data ? (*s).data->Sup.len : 0), (*s).pos);
	result = ((buflen <= (NI)(TMP549)) ? buflen : (NI)(TMP549));
	nimln(221, "streams.nim");
	{
		NI TMP550;
		if (!(((NI) 0) < result)) goto LA3;
		nimln(222, "streams.nim");
		if ((NU)((*s).pos) > (NU)((*s).data->Sup.len)) raiseIndexError();
		memcpy(buffer, ((void*) ((&(*s).data->data[(*s).pos]))), ((NI)chckRange(result, ((NI) 0), ((NI) 2147483647))));
		nimln(223, "streams.nim");
		TMP550 = addInt((*s).pos, result);
		(*s).pos = (NI)(TMP550);
	}
	LA3: ;
	popFrame();
	return result;
}

N_NIMCALL(void, sswritedata_138639)(Streamobj138027* s_138641, void* buffer, NI buflen) {
	Stringstreamobj138554* s;
	NI TMP553;
	nimfr("ssWriteData", "streams.nim")
{	nimln(226, "streams.nim");
	if (s_138641) chckObj((*s_138641).Sup.m_type, (&NTI138554));
	s = ((Stringstreamobj138554*) (s_138641));
	nimln(227, "streams.nim");
	{
		if (!(buflen <= ((NI) 0))) goto LA3;
		nimln(228, "streams.nim");
		goto BeforeRet;
	}
	LA3: ;
	nimln(229, "streams.nim");
	{
		NI TMP551;
		NI TMP552;
		TMP551 = addInt((*s).pos, buflen);
		if (!(((*s).data ? (*s).data->Sup.len : 0) < (NI)(TMP551))) goto LA7;
		nimln(230, "streams.nim");
		TMP552 = addInt((*s).pos, buflen);
		(*s).data = setLengthStr((*s).data, ((NI)chckRange((NI)(TMP552), ((NI) 0), ((NI) 2147483647))));
	}
	LA7: ;
	nimln(231, "streams.nim");
	if ((NU)((*s).pos) > (NU)((*s).data->Sup.len)) raiseIndexError();
	memcpy(((void*) ((&(*s).data->data[(*s).pos]))), buffer, ((NI)chckRange(buflen, ((NI) 0), ((NI) 2147483647))));
	nimln(232, "streams.nim");
	TMP553 = addInt((*s).pos, buflen);
	(*s).pos = (NI)(TMP553);
	}BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, ssclose_138661)(Streamobj138027* s_138663) {
	Stringstreamobj138554* s;
	NimStringDesc* LOC1;
	nimfr("ssClose", "streams.nim")
	nimln(235, "streams.nim");
	if (s_138663) chckObj((*s_138663).Sup.m_type, (&NTI138554));
	s = ((Stringstreamobj138554*) (s_138663));
	nimln(236, "streams.nim");
	LOC1 = 0;
	LOC1 = (*s).data; (*s).data = copyStringRC1(NIM_NIL);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	popFrame();
}
N_NIMCALL(void, TMP554)(void* p, NI op) {
	Stringstreamobj138554* a;
	a = (Stringstreamobj138554*)p;
	nimGCvisit((void*)(*a).data, op);
}

N_NIMCALL(Stringstreamobj138554*, newstringstream_138671)(NimStringDesc* s) {
	Stringstreamobj138554* result;
	NimStringDesc* LOC1;
	nimfr("newStringStream", "streams.nim")
	result = 0;
	nimln(240, "streams.nim");
	result = (Stringstreamobj138554*) newObj((&NTI138552), sizeof(Stringstreamobj138554));
	(*result).Sup.Sup.m_type = (&NTI138554);
	nimln(241, "streams.nim");
	LOC1 = 0;
	LOC1 = (*result).data; (*result).data = copyStringRC1(s);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	nimln(242, "streams.nim");
	(*result).pos = ((NI) 0);
	nimln(243, "streams.nim");
	(*result).Sup.closeimpl = ssclose_138661;
	nimln(244, "streams.nim");
	(*result).Sup.atendimpl = ssatend_138565;
	nimln(245, "streams.nim");
	(*result).Sup.setpositionimpl = sssetposition_138576;
	nimln(246, "streams.nim");
	(*result).Sup.getpositionimpl = ssgetposition_138601;
	nimln(247, "streams.nim");
	(*result).Sup.readdataimpl = ssreaddata_138612;
	nimln(248, "streams.nim");
	(*result).Sup.writedataimpl = sswritedata_138639;
	popFrame();
	return result;
}

N_NIMCALL(void, fsclose_138696)(Streamobj138027* s) {
	nimfr("fsClose", "streams.nim")
	nimln(259, "streams.nim");
	{
		if (s) chckObj((*s).Sup.m_type, (&NTI138692));
		if (!!(((*((Filestreamobj138692*) (s))).f == NIM_NIL))) goto LA3;
		nimln(260, "streams.nim");
		if (s) chckObj((*s).Sup.m_type, (&NTI138692));
		fclose((*((Filestreamobj138692*) (s))).f);
		nimln(261, "streams.nim");
		if (s) chckObj((*s).Sup.m_type, (&NTI138692));
		(*((Filestreamobj138692*) (s))).f = NIM_NIL;
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, fsflush_138714)(Streamobj138027* s) {
	nimfr("fsFlush", "streams.nim")
	nimln(262, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI138692));
	fflush((*((Filestreamobj138692*) (s))).f);
	popFrame();
}

N_NIMCALL(NIM_BOOL, fsatend_138720)(Streamobj138027* s) {
	NIM_BOOL result;
	nimfr("fsAtEnd", "streams.nim")
{	result = 0;
	nimln(263, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI138692));
	result = endoffile_13422((*((Filestreamobj138692*) (s))).f);
	goto BeforeRet;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, fssetposition_138727)(Streamobj138027* s, NI pos) {
	nimfr("fsSetPosition", "streams.nim")
	nimln(264, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI138692));
	setfilepos_13542((*((Filestreamobj138692*) (s))).f, ((NI64) (pos)));
	popFrame();
}

N_NIMCALL(NI, fsgetposition_138734)(Streamobj138027* s) {
	NI result;
	NI64 LOC1;
	nimfr("fsGetPosition", "streams.nim")
{	result = 0;
	nimln(265, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI138692));
	LOC1 = 0;
	LOC1 = getfilepos_13546((*((Filestreamobj138692*) (s))).f);
	result = ((NI)chckRange64(LOC1, ((NI) (-2147483647 -1)), ((NI) 2147483647)));
	goto BeforeRet;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, fsreaddata_138741)(Streamobj138027* s, void* buffer, NI buflen) {
	NI result;
	nimfr("fsReadData", "streams.nim")
	result = 0;
	nimln(268, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI138692));
	result = readbuffer_13515((*((Filestreamobj138692*) (s))).f, buffer, ((NI)chckRange(buflen, ((NI) 0), ((NI) 2147483647))));
	popFrame();
	return result;
}

N_NIMCALL(void, fswritedata_138750)(Streamobj138027* s, void* buffer, NI buflen) {
	nimfr("fsWriteData", "streams.nim")
	nimln(271, "streams.nim");
	{
		NI LOC3;
		Ioerror3431* LOC6;
		if (s) chckObj((*s).Sup.m_type, (&NTI138692));
		LOC3 = 0;
		LOC3 = writebuffer_13537((*((Filestreamobj138692*) (s))).f, buffer, ((NI)chckRange(buflen, ((NI) 0), ((NI) 2147483647))));
		if (!!((LOC3 == buflen))) goto LA4;
		nimln(272, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_138005(((NimStringDesc*) &TMP555));
		raiseException((Exception*)LOC6, "IOError");
	}
	LA4: ;
	popFrame();
}
N_NIMCALL(void, TMP556)(void* p, NI op) {
	Filestreamobj138692* a;
	a = (Filestreamobj138692*)p;
}

N_NIMCALL(Filestreamobj138692*, newfilestream_138758)(FILE* f) {
	Filestreamobj138692* result;
	nimfr("newFileStream", "streams.nim")
	result = 0;
	nimln(276, "streams.nim");
	result = (Filestreamobj138692*) newObj((&NTI138690), sizeof(Filestreamobj138692));
	(*result).Sup.Sup.m_type = (&NTI138692);
	nimln(277, "streams.nim");
	(*result).f = f;
	nimln(278, "streams.nim");
	(*result).Sup.closeimpl = fsclose_138696;
	nimln(279, "streams.nim");
	(*result).Sup.atendimpl = fsatend_138720;
	nimln(280, "streams.nim");
	(*result).Sup.setpositionimpl = fssetposition_138727;
	nimln(281, "streams.nim");
	(*result).Sup.getpositionimpl = fsgetposition_138734;
	nimln(282, "streams.nim");
	(*result).Sup.readdataimpl = fsreaddata_138741;
	nimln(283, "streams.nim");
	(*result).Sup.writedataimpl = fswritedata_138750;
	nimln(284, "streams.nim");
	(*result).Sup.flushimpl = fsflush_138714;
	popFrame();
	return result;
}

N_NIMCALL(Filestreamobj138692*, newfilestream_138773)(NimStringDesc* filename, NU8 mode) {
	Filestreamobj138692* result;
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
		result = newfilestream_138758(f);
	}
	LA4: ;
	popFrame();
	return result;
}
N_NIMCALL(void, TMP591)(void* p, NI op) {
	Streamobj138027* a;
	a = (Streamobj138027*)p;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsInit)(void) {
	nimfr("streams", "streams.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_streamsDatInit)(void) {
static TNimNode* TMP547[7];
static TNimNode* TMP548[2];
static TNimNode TMP541[12];
NTI138027.size = sizeof(Streamobj138027);
NTI138027.kind = 17;
NTI138027.base = (&NTI3411);
NTI138027.flags = 1;
TMP547[0] = &TMP541[1];
NTI138028.size = sizeof(TY138028);
NTI138028.kind = 25;
NTI138028.base = 0;
NTI138028.flags = 3;
TMP541[1].kind = 1;
TMP541[1].offset = offsetof(Streamobj138027, closeimpl);
TMP541[1].typ = (&NTI138028);
TMP541[1].name = "closeImpl";
TMP547[1] = &TMP541[2];
NTI138032.size = sizeof(TY138032);
NTI138032.kind = 25;
NTI138032.base = 0;
NTI138032.flags = 3;
TMP541[2].kind = 1;
TMP541[2].offset = offsetof(Streamobj138027, atendimpl);
TMP541[2].typ = (&NTI138032);
TMP541[2].name = "atEndImpl";
TMP547[2] = &TMP541[3];
NTI138036.size = sizeof(TY138036);
NTI138036.kind = 25;
NTI138036.base = 0;
NTI138036.flags = 3;
TMP541[3].kind = 1;
TMP541[3].offset = offsetof(Streamobj138027, setpositionimpl);
TMP541[3].typ = (&NTI138036);
TMP541[3].name = "setPositionImpl";
TMP547[3] = &TMP541[4];
NTI138041.size = sizeof(TY138041);
NTI138041.kind = 25;
NTI138041.base = 0;
NTI138041.flags = 3;
TMP541[4].kind = 1;
TMP541[4].offset = offsetof(Streamobj138027, getpositionimpl);
TMP541[4].typ = (&NTI138041);
TMP541[4].name = "getPositionImpl";
TMP547[4] = &TMP541[5];
NTI138045.size = sizeof(TY138045);
NTI138045.kind = 25;
NTI138045.base = 0;
NTI138045.flags = 3;
TMP541[5].kind = 1;
TMP541[5].offset = offsetof(Streamobj138027, readdataimpl);
TMP541[5].typ = (&NTI138045);
TMP541[5].name = "readDataImpl";
TMP547[5] = &TMP541[6];
NTI138051.size = sizeof(TY138051);
NTI138051.kind = 25;
NTI138051.base = 0;
NTI138051.flags = 3;
TMP541[6].kind = 1;
TMP541[6].offset = offsetof(Streamobj138027, writedataimpl);
TMP541[6].typ = (&NTI138051);
TMP541[6].name = "writeDataImpl";
TMP547[6] = &TMP541[7];
NTI138057.size = sizeof(TY138057);
NTI138057.kind = 25;
NTI138057.base = 0;
NTI138057.flags = 3;
TMP541[7].kind = 1;
TMP541[7].offset = offsetof(Streamobj138027, flushimpl);
TMP541[7].typ = (&NTI138057);
TMP541[7].name = "flushImpl";
TMP541[0].len = 7; TMP541[0].kind = 2; TMP541[0].sons = &TMP547[0];
NTI138027.node = &TMP541[0];
NTI138554.size = sizeof(Stringstreamobj138554);
NTI138554.kind = 17;
NTI138554.base = (&NTI138027);
TMP548[0] = &TMP541[9];
TMP541[9].kind = 1;
TMP541[9].offset = offsetof(Stringstreamobj138554, data);
TMP541[9].typ = (&NTI149);
TMP541[9].name = "data";
TMP548[1] = &TMP541[10];
TMP541[10].kind = 1;
TMP541[10].offset = offsetof(Stringstreamobj138554, pos);
TMP541[10].typ = (&NTI108);
TMP541[10].name = "pos";
TMP541[8].len = 2; TMP541[8].kind = 2; TMP541[8].sons = &TMP548[0];
NTI138554.node = &TMP541[8];
NTI138552.size = sizeof(Stringstreamobj138554*);
NTI138552.kind = 22;
NTI138552.base = (&NTI138554);
NTI138552.marker = TMP554;
NTI138692.size = sizeof(Filestreamobj138692);
NTI138692.kind = 17;
NTI138692.base = (&NTI138027);
NTI138692.flags = 1;
TMP541[11].kind = 1;
TMP541[11].offset = offsetof(Filestreamobj138692, f);
TMP541[11].typ = (&NTI13004);
TMP541[11].name = "f";
NTI138692.node = &TMP541[11];
NTI138690.size = sizeof(Filestreamobj138692*);
NTI138690.kind = 22;
NTI138690.base = (&NTI138692);
NTI138690.marker = TMP556;
NTI138025.size = sizeof(Streamobj138027*);
NTI138025.kind = 22;
NTI138025.base = (&NTI138027);
NTI138025.marker = TMP591;
}

