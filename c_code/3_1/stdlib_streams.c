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
typedef struct Tcell46947 Tcell46947;
typedef struct Tcellseq46963 Tcellseq46963;
typedef struct Tgcheap48816 Tgcheap48816;
typedef struct Tcellset46959 Tcellset46959;
typedef struct Tpagedesc46955 Tpagedesc46955;
typedef struct Tmemregion28810 Tmemregion28810;
typedef struct Tsmallchunk28040 Tsmallchunk28040;
typedef struct Tllchunk28804 Tllchunk28804;
typedef struct Tbigchunk28042 Tbigchunk28042;
typedef struct Tintset28017 Tintset28017;
typedef struct Ttrunk28013 Ttrunk28013;
typedef struct Tavlnode28808 Tavlnode28808;
typedef struct Tgcstat48814 Tgcstat48814;
typedef struct Streamobj138027 Streamobj138027;
typedef struct Stringstreamobj138554 Stringstreamobj138554;
typedef struct Filestreamobj138692 Filestreamobj138692;
typedef struct Tbasechunk28038 Tbasechunk28038;
typedef struct Tfreecell28030 Tfreecell28030;
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
struct  Tcell46947  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46963  {
NI len;
NI cap;
Tcell46947** d;
};
struct  Tcellset46959  {
NI counter;
NI max;
Tpagedesc46955* head;
Tpagedesc46955** data;
};
typedef Tsmallchunk28040* TY28822[512];
typedef Ttrunk28013* Ttrunkbuckets28015[256];
struct  Tintset28017  {
Ttrunkbuckets28015 data;
};
struct  Tmemregion28810  {
NI minlargeobj;
NI maxlargeobj;
TY28822 freesmallchunks;
Tllchunk28804* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk28042* freechunkslist;
Tintset28017 chunkstarts;
Tavlnode28808* root;
Tavlnode28808* deleted;
Tavlnode28808* last;
Tavlnode28808* freeavlnodes;
};
struct  Tgcstat48814  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48816  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46963 zct;
Tcellseq46963 decstack;
Tcellset46959 cycleroots;
Tcellseq46963 tempstack;
NI recgclock;
Tmemregion28810 region;
Tgcstat48814 stat;
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
typedef NI TY28020[16];
struct  Tpagedesc46955  {
Tpagedesc46955* next;
NI key;
TY28020 bits;
};
struct  Tbasechunk28038  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk28040  {
  Tbasechunk28038 Sup;
Tsmallchunk28040* next;
Tsmallchunk28040* prev;
Tfreecell28030* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28804  {
NI size;
NI acc;
Tllchunk28804* next;
};
struct  Tbigchunk28042  {
  Tbasechunk28038 Sup;
Tbigchunk28042* next;
Tbigchunk28042* prev;
NI align;
NF data;
};
struct  Ttrunk28013  {
Ttrunk28013* next;
NI key;
TY28020 bits;
};
typedef Tavlnode28808* TY28814[2];
struct  Tavlnode28808  {
TY28814 link;
NI key;
NI upperbound;
NI level;
};
struct  Tfreecell28030  {
Tfreecell28030* next;
NI zerofield;
};
N_NIMCALL(Ioerror3431*, neweio_138005)(NimStringDesc* msg);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46947*, usrtocell_50446)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20201)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_52004)(Tcell46947* c);
N_NOINLINE(void, addzct_50417)(Tcellseq46963* s, Tcell46947* c);
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
N_NIMCALL(void, TMP552)(void* p, NI op);
N_NIMCALL(void, fsclose_138696)(Streamobj138027* s);
N_NIMCALL(void, fsflush_138714)(Streamobj138027* s);
N_NIMCALL(NIM_BOOL, fsatend_138720)(Streamobj138027* s);
N_NIMCALL(NIM_BOOL, endoffile_13622)(FILE* f);
N_NIMCALL(void, fssetposition_138727)(Streamobj138027* s, NI pos);
N_NIMCALL(void, setfilepos_13742)(FILE* f, NI64 pos);
N_NIMCALL(NI, fsgetposition_138734)(Streamobj138027* s);
N_NIMCALL(NI64, getfilepos_13746)(FILE* f);
N_NIMCALL(NI64, chckRange64)(NI64 i, NI64 a, NI64 b);
N_NIMCALL(NI, fsreaddata_138741)(Streamobj138027* s, void* buffer, NI buflen);
N_NIMCALL(NI, readbuffer_13715)(FILE* f, void* buffer, NI len);
N_NIMCALL(void, fswritedata_138750)(Streamobj138027* s, void* buffer, NI buflen);
N_NIMCALL(NI, writebuffer_13737)(FILE* f, void* buffer, NI len);
N_NIMCALL(Filestreamobj138692*, newfilestream_138758)(FILE* f);
N_NIMCALL(void, TMP554)(void* p, NI op);
N_NIMCALL(Filestreamobj138692*, newfilestream_138773)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(NIM_BOOL, open_13403)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(void, TMP588)(void* p, NI op);
STRING_LITERAL(TMP542, "\012", 1);
STRING_LITERAL(TMP543, "cannot read from stream", 23);
STRING_LITERAL(TMP544, "", 0);
STRING_LITERAL(TMP553, "cannot write to stream", 22);
extern TNimType NTI13601; /* ref IOError */
extern TNimType NTI3431; /* IOError */
extern TFrame* frameptr_17242;
extern Tgcheap48816 gch_48844;
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
extern TNimType NTI13204; /* File */
TNimType NTI138690; /* FileStream */
TNimType NTI138025; /* Stream */

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

static N_INLINE(Tcell46947*, usrtocell_50446)(void* usr) {
	Tcell46947* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	result = ((Tcell46947*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46947))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_52004)(Tcell46947* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_50417((&gch_48844.zct), c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46947* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_50446(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).refcount -= ((NI) 8);
		nimln(168, "gc.nim");
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_52004(c);
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
	result = (Ioerror3431*) newObj((&NTI13601), sizeof(Ioerror3431));
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
				NI TMP541;
				if (!(i_138260 < argsLen0)) goto LA3;
				nimln(1691, "system.nim");
				if ((NU)(i_138260) >= (NU)(argsLen0)) raiseIndexError();
				str_138256 = args[i_138260];
				nimln(116, "streams.nim");
				write_138233(s, str_138256);
				nimln(1692, "system.nim");
				TMP541 = addInt(i_138260, ((NI) 1));
				i_138260 = (NI)(TMP541);
			} LA3: ;
		}
	}
	nimln(117, "streams.nim");
	write_138233(s, ((NimStringDesc*) &TMP542));
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
		LOC6 = neweio_138005(((NimStringDesc*) &TMP543));
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
		LOC6 = neweio_138005(((NimStringDesc*) &TMP543));
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
		LOC6 = neweio_138005(((NimStringDesc*) &TMP543));
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
		LOC6 = neweio_138005(((NimStringDesc*) &TMP543));
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
		LOC6 = neweio_138005(((NimStringDesc*) &TMP543));
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
		LOC6 = neweio_138005(((NimStringDesc*) &TMP543));
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
		LOC6 = neweio_138005(((NimStringDesc*) &TMP543));
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
	result = copyString(((NimStringDesc*) &TMP544));
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
	NI TMP547;
	nimfr("ssReadData", "streams.nim")
	result = 0;
	nimln(219, "streams.nim");
	if (s_138614) chckObj((*s_138614).Sup.m_type, (&NTI138554));
	s = ((Stringstreamobj138554*) (s_138614));
	nimln(220, "streams.nim");
	TMP547 = subInt(((*s).data ? (*s).data->Sup.len : 0), (*s).pos);
	result = ((buflen <= (NI)(TMP547)) ? buflen : (NI)(TMP547));
	nimln(221, "streams.nim");
	{
		NI TMP548;
		if (!(((NI) 0) < result)) goto LA3;
		nimln(222, "streams.nim");
		if ((NU)((*s).pos) > (NU)((*s).data->Sup.len)) raiseIndexError();
		memcpy(buffer, ((void*) ((&(*s).data->data[(*s).pos]))), ((NI)chckRange(result, ((NI) 0), ((NI) 2147483647))));
		nimln(223, "streams.nim");
		TMP548 = addInt((*s).pos, result);
		(*s).pos = (NI)(TMP548);
	}
	LA3: ;
	popFrame();
	return result;
}

N_NIMCALL(void, sswritedata_138639)(Streamobj138027* s_138641, void* buffer, NI buflen) {
	Stringstreamobj138554* s;
	NI TMP551;
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
		NI TMP549;
		NI TMP550;
		TMP549 = addInt((*s).pos, buflen);
		if (!(((*s).data ? (*s).data->Sup.len : 0) < (NI)(TMP549))) goto LA7;
		nimln(230, "streams.nim");
		TMP550 = addInt((*s).pos, buflen);
		(*s).data = setLengthStr((*s).data, ((NI)chckRange((NI)(TMP550), ((NI) 0), ((NI) 2147483647))));
	}
	LA7: ;
	nimln(231, "streams.nim");
	if ((NU)((*s).pos) > (NU)((*s).data->Sup.len)) raiseIndexError();
	memcpy(((void*) ((&(*s).data->data[(*s).pos]))), buffer, ((NI)chckRange(buflen, ((NI) 0), ((NI) 2147483647))));
	nimln(232, "streams.nim");
	TMP551 = addInt((*s).pos, buflen);
	(*s).pos = (NI)(TMP551);
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
N_NIMCALL(void, TMP552)(void* p, NI op) {
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
	result = endoffile_13622((*((Filestreamobj138692*) (s))).f);
	goto BeforeRet;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, fssetposition_138727)(Streamobj138027* s, NI pos) {
	nimfr("fsSetPosition", "streams.nim")
	nimln(264, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI138692));
	setfilepos_13742((*((Filestreamobj138692*) (s))).f, ((NI64) (pos)));
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
	LOC1 = getfilepos_13746((*((Filestreamobj138692*) (s))).f);
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
	result = readbuffer_13715((*((Filestreamobj138692*) (s))).f, buffer, ((NI)chckRange(buflen, ((NI) 0), ((NI) 2147483647))));
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
		LOC3 = writebuffer_13737((*((Filestreamobj138692*) (s))).f, buffer, ((NI)chckRange(buflen, ((NI) 0), ((NI) 2147483647))));
		if (!!((LOC3 == buflen))) goto LA4;
		nimln(272, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_138005(((NimStringDesc*) &TMP553));
		raiseException((Exception*)LOC6, "IOError");
	}
	LA4: ;
	popFrame();
}
N_NIMCALL(void, TMP554)(void* p, NI op) {
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
		LOC3 = open_13403(&f, filename, mode, ((NI) -1));
		if (!LOC3) goto LA4;
		result = newfilestream_138758(f);
	}
	LA4: ;
	popFrame();
	return result;
}
N_NIMCALL(void, TMP588)(void* p, NI op) {
	Streamobj138027* a;
	a = (Streamobj138027*)p;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsInit)(void) {
	nimfr("streams", "streams.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_streamsDatInit)(void) {
static TNimNode* TMP545[7];
static TNimNode* TMP546[2];
static TNimNode TMP539[12];
NTI138027.size = sizeof(Streamobj138027);
NTI138027.kind = 17;
NTI138027.base = (&NTI3411);
NTI138027.flags = 1;
TMP545[0] = &TMP539[1];
NTI138028.size = sizeof(TY138028);
NTI138028.kind = 25;
NTI138028.base = 0;
NTI138028.flags = 3;
TMP539[1].kind = 1;
TMP539[1].offset = offsetof(Streamobj138027, closeimpl);
TMP539[1].typ = (&NTI138028);
TMP539[1].name = "closeImpl";
TMP545[1] = &TMP539[2];
NTI138032.size = sizeof(TY138032);
NTI138032.kind = 25;
NTI138032.base = 0;
NTI138032.flags = 3;
TMP539[2].kind = 1;
TMP539[2].offset = offsetof(Streamobj138027, atendimpl);
TMP539[2].typ = (&NTI138032);
TMP539[2].name = "atEndImpl";
TMP545[2] = &TMP539[3];
NTI138036.size = sizeof(TY138036);
NTI138036.kind = 25;
NTI138036.base = 0;
NTI138036.flags = 3;
TMP539[3].kind = 1;
TMP539[3].offset = offsetof(Streamobj138027, setpositionimpl);
TMP539[3].typ = (&NTI138036);
TMP539[3].name = "setPositionImpl";
TMP545[3] = &TMP539[4];
NTI138041.size = sizeof(TY138041);
NTI138041.kind = 25;
NTI138041.base = 0;
NTI138041.flags = 3;
TMP539[4].kind = 1;
TMP539[4].offset = offsetof(Streamobj138027, getpositionimpl);
TMP539[4].typ = (&NTI138041);
TMP539[4].name = "getPositionImpl";
TMP545[4] = &TMP539[5];
NTI138045.size = sizeof(TY138045);
NTI138045.kind = 25;
NTI138045.base = 0;
NTI138045.flags = 3;
TMP539[5].kind = 1;
TMP539[5].offset = offsetof(Streamobj138027, readdataimpl);
TMP539[5].typ = (&NTI138045);
TMP539[5].name = "readDataImpl";
TMP545[5] = &TMP539[6];
NTI138051.size = sizeof(TY138051);
NTI138051.kind = 25;
NTI138051.base = 0;
NTI138051.flags = 3;
TMP539[6].kind = 1;
TMP539[6].offset = offsetof(Streamobj138027, writedataimpl);
TMP539[6].typ = (&NTI138051);
TMP539[6].name = "writeDataImpl";
TMP545[6] = &TMP539[7];
NTI138057.size = sizeof(TY138057);
NTI138057.kind = 25;
NTI138057.base = 0;
NTI138057.flags = 3;
TMP539[7].kind = 1;
TMP539[7].offset = offsetof(Streamobj138027, flushimpl);
TMP539[7].typ = (&NTI138057);
TMP539[7].name = "flushImpl";
TMP539[0].len = 7; TMP539[0].kind = 2; TMP539[0].sons = &TMP545[0];
NTI138027.node = &TMP539[0];
NTI138554.size = sizeof(Stringstreamobj138554);
NTI138554.kind = 17;
NTI138554.base = (&NTI138027);
TMP546[0] = &TMP539[9];
TMP539[9].kind = 1;
TMP539[9].offset = offsetof(Stringstreamobj138554, data);
TMP539[9].typ = (&NTI149);
TMP539[9].name = "data";
TMP546[1] = &TMP539[10];
TMP539[10].kind = 1;
TMP539[10].offset = offsetof(Stringstreamobj138554, pos);
TMP539[10].typ = (&NTI108);
TMP539[10].name = "pos";
TMP539[8].len = 2; TMP539[8].kind = 2; TMP539[8].sons = &TMP546[0];
NTI138554.node = &TMP539[8];
NTI138552.size = sizeof(Stringstreamobj138554*);
NTI138552.kind = 22;
NTI138552.base = (&NTI138554);
NTI138552.marker = TMP552;
NTI138692.size = sizeof(Filestreamobj138692);
NTI138692.kind = 17;
NTI138692.base = (&NTI138027);
NTI138692.flags = 1;
TMP539[11].kind = 1;
TMP539[11].offset = offsetof(Filestreamobj138692, f);
TMP539[11].typ = (&NTI13204);
TMP539[11].name = "f";
NTI138692.node = &TMP539[11];
NTI138690.size = sizeof(Filestreamobj138692*);
NTI138690.kind = 22;
NTI138690.base = (&NTI138692);
NTI138690.marker = TMP554;
NTI138025.size = sizeof(Streamobj138027*);
NTI138025.kind = 22;
NTI138025.base = (&NTI138027);
NTI138025.marker = TMP588;
}

