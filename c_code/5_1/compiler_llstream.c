/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <stdio.h>

#include <stdlib.h>

#include <string.h>
typedef struct Tllstream178204 Tllstream178204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
struct  Tllstream178204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
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
typedef NU8 TY77659[32];
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
N_NIMCALL(Tllstream178204*, llstreamopen_178220)(NimStringDesc* data);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP2087)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_51804)(Tcell46747* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46763* s, Tcell46747* c);
N_NIMCALL(Tllstream178204*, llstreamopen_178238)(FILE* f);
N_NIMCALL(Tllstream178204*, llstreamopen_178256)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(NIM_BOOL, open_13203)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(Tllstream178204*, llstreamopen_178276)(void);
N_NIMCALL(Tllstream178204*, llstreamopenstdin_178293)(void);
N_NIMCALL(void, llstreamclose_178310)(Tllstream178204* s);
N_NIMCALL(NIM_BOOL, readlinefromstdin_178319)(NimStringDesc* prompt, NimStringDesc** line);
N_NIMCALL(void, write_13457)(FILE* f, NimStringDesc* s);
N_NIMCALL(NIM_BOOL, readline_13481)(FILE* f, NimStringDesc** line);
N_NIMCALL(NIM_BOOL, endswith_178404)(NimStringDesc* x, TY77659 s);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, endswithopr_178450)(NimStringDesc* x);
static N_INLINE(NIM_BOOL, continueline_178460)(NimStringDesc* line, NIM_BOOL intriplestring);
N_NIMCALL(NI, counttriples_178483)(NimStringDesc* s);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NI, llreadfromstdin_178528)(Tllstream178204* s, void* buf, NI buflen);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NI, llstreamread_178584)(Tllstream178204* s, void* buf, NI buflen);
N_NIMCALL(NI, readbuffer_13515)(FILE* f, void* buffer, NI len);
N_NIMCALL(NIM_BOOL, llstreamreadline_178610)(Tllstream178204* s, NimStringDesc** line);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, llstreamwrite_178665)(Tllstream178204* s, NimStringDesc* data);
N_NIMCALL(void, llstreamwriteln_178686)(Tllstream178204* s, NimStringDesc* data);
N_NIMCALL(void, llstreamwrite_178696)(Tllstream178204* s, NIM_CHAR data);
N_NIMCALL(NI, writebuffer_13537)(FILE* f, void* buffer, NI len);
N_NIMCALL(void, llstreamwrite_178718)(Tllstream178204* s, void* buf, NI buflen);
N_NIMCALL(NimStringDesc*, llstreamreadall_178739)(Tllstream178204* s);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
STRING_LITERAL(TMP2088, "", 0);
STRING_LITERAL(TMP2089, "\012", 1);
NIM_CONST TY77659 Linecontinuationoprs_178443 = {
0x00, 0x00, 0x00, 0x00, 0x72, 0xBC, 0x00, 0xD0,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY77659 Additionallinecontinuationoprs_178445 = {
0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST TY77659 TMP2092 = {
0x00, 0x00, 0x00, 0x00, 0x72, 0xBC, 0x00, 0xD0,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST TY77659 TMP2093 = {
0x00, 0x00, 0x00, 0x00, 0x7A, 0xBC, 0x00, 0xF4,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2099, ">>> ", 4);
STRING_LITERAL(TMP2100, "... ", 4);
extern TNimType NTI3411; /* RootObj */
TNimType NTI178204; /* TLLStream */
TNimType NTI178202; /* TLLStreamKind */
extern TNimType NTI13004; /* File */
extern TNimType NTI149; /* string */
extern TNimType NTI108; /* int */
TNimType NTI178206; /* PLLStream */
extern TFrame* frameptr_17042;
extern Tgcheap48616 gch_48644;
N_NIMCALL(void, TMP2087)(void* p, NI op) {
	Tllstream178204* a;
	a = (Tllstream178204*)p;
	nimGCvisit((void*)(*a).s, op);
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

N_NIMCALL(Tllstream178204*, llstreamopen_178220)(NimStringDesc* data) {
	Tllstream178204* result;
	NimStringDesc* LOC1;
	nimfr("llStreamOpen", "llstream.nim")
	result = 0;
	nimln(34, "llstream.nim");
	result = (Tllstream178204*) newObj((&NTI178206), sizeof(Tllstream178204));
	(*result).Sup.m_type = (&NTI178204);
	nimln(35, "llstream.nim");
	LOC1 = 0;
	LOC1 = (*result).s; (*result).s = copyStringRC1(data);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	nimln(36, "llstream.nim");
	(*result).kind = ((NU8) 1);
	popFrame();
	return result;
}

N_NIMCALL(Tllstream178204*, llstreamopen_178238)(FILE* f) {
	Tllstream178204* result;
	nimfr("llStreamOpen", "llstream.nim")
	result = 0;
	nimln(39, "llstream.nim");
	result = (Tllstream178204*) newObj((&NTI178206), sizeof(Tllstream178204));
	(*result).Sup.m_type = (&NTI178204);
	nimln(40, "llstream.nim");
	(*result).f = f;
	nimln(41, "llstream.nim");
	(*result).kind = ((NU8) 2);
	popFrame();
	return result;
}

N_NIMCALL(Tllstream178204*, llstreamopen_178256)(NimStringDesc* filename, NU8 mode) {
	Tllstream178204* result;
	nimfr("llStreamOpen", "llstream.nim")
	result = 0;
	nimln(44, "llstream.nim");
	result = (Tllstream178204*) newObj((&NTI178206), sizeof(Tllstream178204));
	(*result).Sup.m_type = (&NTI178204);
	nimln(45, "llstream.nim");
	(*result).kind = ((NU8) 2);
	nimln(46, "llstream.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_13203(&(*result).f, filename, mode, ((NI) -1));
		if (!!(LOC3)) goto LA4;
		result = NIM_NIL;
	}
	LA4: ;
	popFrame();
	return result;
}

N_NIMCALL(Tllstream178204*, llstreamopen_178276)(void) {
	Tllstream178204* result;
	nimfr("llStreamOpen", "llstream.nim")
	result = 0;
	nimln(49, "llstream.nim");
	result = (Tllstream178204*) newObj((&NTI178206), sizeof(Tllstream178204));
	(*result).Sup.m_type = (&NTI178204);
	nimln(50, "llstream.nim");
	(*result).kind = ((NU8) 0);
	popFrame();
	return result;
}

N_NIMCALL(Tllstream178204*, llstreamopenstdin_178293)(void) {
	Tllstream178204* result;
	NimStringDesc* LOC1;
	nimfr("llStreamOpenStdIn", "llstream.nim")
	result = 0;
	nimln(53, "llstream.nim");
	result = (Tllstream178204*) newObj((&NTI178206), sizeof(Tllstream178204));
	(*result).Sup.m_type = (&NTI178204);
	nimln(54, "llstream.nim");
	(*result).kind = ((NU8) 3);
	nimln(55, "llstream.nim");
	LOC1 = 0;
	LOC1 = (*result).s; (*result).s = copyStringRC1(((NimStringDesc*) &TMP2088));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	nimln(56, "llstream.nim");
	(*result).lineoffset = ((NI) -1);
	popFrame();
	return result;
}

N_NIMCALL(void, llstreamclose_178310)(Tllstream178204* s) {
	nimfr("llStreamClose", "llstream.nim")
	nimln(59, "llstream.nim");
	switch ((*s).kind) {
	case ((NU8) 0):
	case ((NU8) 1):
	case ((NU8) 3):
	{
	}
	break;
	case ((NU8) 2):
	{
		nimln(63, "llstream.nim");
		fclose((*s).f);
	}
	break;
	}
	popFrame();
}

N_NIMCALL(NIM_BOOL, readlinefromstdin_178319)(NimStringDesc* prompt, NimStringDesc** line) {
	NIM_BOOL result;
	nimfr("readLineFromStdin", "llstream.nim")
	result = 0;
	nimln(68, "llstream.nim");
	write_13457(stdout, prompt);
	nimln(69, "llstream.nim");
	result = readline_13481(stdin, line);
	nimln(70, "llstream.nim");
	{
		if (!!(result)) goto LA3;
		nimln(71, "llstream.nim");
		write_13457(stdout, ((NimStringDesc*) &TMP2089));
		nimln(72, "llstream.nim");
		exit(((NI) 0));
	}
	LA3: ;
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

N_NIMCALL(NIM_BOOL, endswith_178404)(NimStringDesc* x, TY77659 s) {
	NIM_BOOL result;
	NI i;
	NI TMP2090;
	nimfr("endsWith", "llstream.nim")
	result = 0;
	nimln(75, "llstream.nim");
	TMP2090 = subInt((x ? x->Sup.len : 0), ((NI) 1));
	i = (NI)(TMP2090);
	{
		nimln(76, "llstream.nim");
		while (1) {
			NIM_BOOL LOC3;
			NI TMP2091;
			LOC3 = 0;
			LOC3 = (((NI) 0) <= i);
			if (!(LOC3)) goto LA4;
			if ((NU)(i) > (NU)(x->Sup.len)) raiseIndexError();
			LOC3 = ((NU8)(x->data[i]) == (NU8)(32));
			LA4: ;
			if (!LOC3) goto LA2;
			TMP2091 = subInt(i, ((NI) 1));
			i = (NI)(TMP2091);
		} LA2: ;
	}
	nimln(77, "llstream.nim");
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (((NI) 0) <= i);
		if (!(LOC7)) goto LA8;
		if ((NU)(i) > (NU)(x->Sup.len)) raiseIndexError();
		LOC7 = ((s[((NU8)(x->data[i]))/8] &(1<<(((NU8)(x->data[i]))%8)))!=0);
		LA8: ;
		if (!LOC7) goto LA9;
		nimln(78, "llstream.nim");
		result = NIM_TRUE;
	}
	LA9: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, endswithopr_178450)(NimStringDesc* x) {
	NIM_BOOL result;
	nimfr("endsWithOpr", "llstream.nim")
	result = 0;
	nimln(87, "llstream.nim");
	result = endswith_178404(x, TMP2092);
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, continueline_178460)(NimStringDesc* line, NIM_BOOL intriplestring) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	NIM_BOOL LOC2;
	nimfr("continueLine", "llstream.nim")
	result = 0;
	nimln(90, "llstream.nim");
	nimln(91, "llstream.nim");
	LOC1 = 0;
	nimln(90, "llstream.nim");
	LOC2 = 0;
	LOC2 = intriplestring;
	if (LOC2) goto LA3;
	nimln(91, "llstream.nim");
	if ((NU)(((NI) 0)) > (NU)(line->Sup.len)) raiseIndexError();
	LOC2 = ((NU8)(line->data[((NI) 0)]) == (NU8)(32));
	LA3: ;
	LOC1 = LOC2;
	if (LOC1) goto LA4;
	nimln(92, "llstream.nim");
	LOC1 = endswith_178404(line, TMP2093);
	LA4: ;
	result = LOC1;
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

N_NIMCALL(NI, counttriples_178483)(NimStringDesc* s) {
	NI result;
	NI i;
	nimfr("countTriples", "llstream.nim")
	result = 0;
	nimln(95, "llstream.nim");
	i = ((NI) 0);
	{
		nimln(96, "llstream.nim");
		while (1) {
			NI TMP2098;
			if (!(i < (s ? s->Sup.len : 0))) goto LA2;
			nimln(97, "llstream.nim");
			{
				NIM_BOOL LOC5;
				NIM_BOOL LOC6;
				NI TMP2094;
				NI TMP2095;
				NI TMP2096;
				NI TMP2097;
				LOC5 = 0;
				LOC6 = 0;
				if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
				LOC6 = ((NU8)(s->data[i]) == (NU8)(34));
				if (!(LOC6)) goto LA7;
				TMP2094 = addInt(i, ((NI) 1));
				if ((NU)((NI)(TMP2094)) > (NU)(s->Sup.len)) raiseIndexError();
				LOC6 = ((NU8)(s->data[(NI)(TMP2094)]) == (NU8)(34));
				LA7: ;
				LOC5 = LOC6;
				if (!(LOC5)) goto LA8;
				TMP2095 = addInt(i, ((NI) 2));
				if ((NU)((NI)(TMP2095)) > (NU)(s->Sup.len)) raiseIndexError();
				LOC5 = ((NU8)(s->data[(NI)(TMP2095)]) == (NU8)(34));
				LA8: ;
				if (!LOC5) goto LA9;
				nimln(98, "llstream.nim");
				TMP2096 = addInt(result, ((NI) 1));
				result = (NI)(TMP2096);
				nimln(99, "llstream.nim");
				TMP2097 = addInt(i, ((NI) 2));
				i = (NI)(TMP2097);
			}
			LA9: ;
			nimln(100, "llstream.nim");
			TMP2098 = addInt(i, ((NI) 1));
			i = (NI)(TMP2098);
		} LA2: ;
	}
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
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

N_NIMCALL(NI, llreadfromstdin_178528)(Tllstream178204* s, void* buf, NI buflen) {
	NI result;
	NimStringDesc* LOC1;
	NimStringDesc* line;
	NI triples;
	NI TMP2102;
	NI TMP2103;
	nimfr("llReadFromStdin", "llstream.nim")
	result = 0;
	nimln(103, "llstream.nim");
	LOC1 = 0;
	LOC1 = (*s).s; (*s).s = copyStringRC1(((NimStringDesc*) &TMP2088));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	nimln(104, "llstream.nim");
	(*s).rd = ((NI) 0);
	nimln(105, "llstream.nim");
	line = rawNewString(((NI) 120));
	nimln(106, "llstream.nim");
	triples = ((NI) 0);
	{
		nimln(107, "llstream.nim");
		while (1) {
			NimStringDesc* LOC4;
			NIM_BOOL LOC10;
			NI LOC11;
			NI TMP2101;
			LOC4 = 0;
			{
				if (!(((*s).s ? (*s).s->Sup.len : 0) == ((NI) 0))) goto LA7;
				LOC4 = copyString(((NimStringDesc*) &TMP2099));
			}
			goto LA5;
			LA7: ;
			{
				LOC4 = copyString(((NimStringDesc*) &TMP2100));
			}
			LA5: ;
			LOC10 = 0;
			LOC10 = readlinefromstdin_178319(LOC4, (&line));
			if (!LOC10) goto LA3;
			nimln(108, "llstream.nim");
			(*s).s = resizeString((*s).s, line->Sup.len + 0);
appendString((*s).s, line);
			nimln(109, "llstream.nim");
			(*s).s = resizeString((*s).s, 1);
appendString((*s).s, ((NimStringDesc*) &TMP2089));
			nimln(110, "llstream.nim");
			LOC11 = 0;
			LOC11 = counttriples_178483(line);
			TMP2101 = addInt(triples, LOC11);
			triples = (NI)(TMP2101);
			nimln(111, "llstream.nim");
			{
				NIM_BOOL LOC14;
				LOC14 = 0;
				LOC14 = continueline_178460(line, (((NI) ((NI)(triples & ((NI) 1)))) == ((NI) 1)));
				if (!!(LOC14)) goto LA15;
				goto LA2;
			}
			LA15: ;
		} LA3: ;
	} LA2: ;
	nimln(112, "llstream.nim");
	TMP2102 = addInt((*s).lineoffset, ((NI) 1));
	(*s).lineoffset = (NI)(TMP2102);
	nimln(113, "llstream.nim");
	TMP2103 = subInt(((*s).s ? (*s).s->Sup.len : 0), (*s).rd);
	result = ((buflen <= (NI)(TMP2103)) ? buflen : (NI)(TMP2103));
	nimln(114, "llstream.nim");
	{
		NI TMP2104;
		if (!(((NI) 0) < result)) goto LA19;
		nimln(115, "llstream.nim");
		if ((NU)((*s).rd) > (NU)((*s).s->Sup.len)) raiseIndexError();
		memcpy(buf, ((void*) ((&(*s).s->data[(*s).rd]))), ((NI)chckRange(result, ((NI) 0), ((NI) 2147483647))));
		nimln(116, "llstream.nim");
		TMP2104 = addInt((*s).rd, result);
		(*s).rd = (NI)(TMP2104);
	}
	LA19: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, llstreamread_178584)(Tllstream178204* s, void* buf, NI buflen) {
	NI result;
	nimfr("llStreamRead", "llstream.nim")
	result = 0;
	nimln(119, "llstream.nim");
	switch ((*s).kind) {
	case ((NU8) 0):
	{
		nimln(121, "llstream.nim");
		result = ((NI) 0);
	}
	break;
	case ((NU8) 1):
	{
		NI TMP2105;
		nimln(123, "llstream.nim");
		TMP2105 = subInt(((*s).s ? (*s).s->Sup.len : 0), (*s).rd);
		result = ((buflen <= (NI)(TMP2105)) ? buflen : (NI)(TMP2105));
		nimln(124, "llstream.nim");
		{
			NI TMP2106;
			NI TMP2107;
			if (!(((NI) 0) < result)) goto LA5;
			nimln(125, "llstream.nim");
			TMP2106 = addInt(((NI) 0), (*s).rd);
			if ((NU)((NI)(TMP2106)) > (NU)((*s).s->Sup.len)) raiseIndexError();
			memcpy(buf, ((void*) ((&(*s).s->data[(NI)(TMP2106)]))), ((NI)chckRange(result, ((NI) 0), ((NI) 2147483647))));
			nimln(126, "llstream.nim");
			TMP2107 = addInt((*s).rd, result);
			(*s).rd = (NI)(TMP2107);
		}
		LA5: ;
	}
	break;
	case ((NU8) 2):
	{
		nimln(128, "llstream.nim");
		result = readbuffer_13515((*s).f, buf, ((NI)chckRange(buflen, ((NI) 0), ((NI) 2147483647))));
	}
	break;
	case ((NU8) 3):
	{
		nimln(130, "llstream.nim");
		result = llreadfromstdin_178528(s, buf, buflen);
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, llstreamreadline_178610)(Tllstream178204* s, NimStringDesc** line) {
	NIM_BOOL result;
	nimfr("llStreamReadLine", "llstream.nim")
	result = 0;
	nimln(133, "llstream.nim");
	(*line) = setLengthStr((*line), ((NI) 0));
	nimln(134, "llstream.nim");
	switch ((*s).kind) {
	case ((NU8) 0):
	{
		nimln(136, "llstream.nim");
		result = NIM_TRUE;
	}
	break;
	case ((NU8) 1):
	{
		NIM_BOOL LOC12;
		{
			nimln(138, "llstream.nim");
			while (1) {
				if (!((*s).rd < ((*s).s ? (*s).s->Sup.len : 0))) goto LA4;
				nimln(139, "llstream.nim");
				if ((NU)((*s).rd) > (NU)((*s).s->Sup.len)) raiseIndexError();
				switch (((NU8)((*s).s->data[(*s).rd]))) {
				case 13:
				{
					NI TMP2108;
					nimln(141, "llstream.nim");
					TMP2108 = addInt((*s).rd, ((NI) 1));
					(*s).rd = (NI)(TMP2108);
					nimln(142, "llstream.nim");
					{
						NI TMP2109;
						if ((NU)((*s).rd) > (NU)((*s).s->Sup.len)) raiseIndexError();
						if (!((NU8)((*s).s->data[(*s).rd]) == (NU8)(10))) goto LA8;
						TMP2109 = addInt((*s).rd, ((NI) 1));
						(*s).rd = (NI)(TMP2109);
					}
					LA8: ;
					nimln(143, "llstream.nim");
					goto LA3;
				}
				break;
				case 10:
				{
					NI TMP2110;
					nimln(145, "llstream.nim");
					TMP2110 = addInt((*s).rd, ((NI) 1));
					(*s).rd = (NI)(TMP2110);
					nimln(146, "llstream.nim");
					goto LA3;
				}
				break;
				default:
				{
					NI TMP2111;
					nimln(148, "llstream.nim");
					if ((NU)((*s).rd) > (NU)((*s).s->Sup.len)) raiseIndexError();
					(*line) = addChar((*line), (*s).s->data[(*s).rd]);
					nimln(149, "llstream.nim");
					TMP2111 = addInt((*s).rd, ((NI) 1));
					(*s).rd = (NI)(TMP2111);
				}
				break;
				}
			} LA4: ;
		} LA3: ;
		nimln(150, "llstream.nim");
		LOC12 = 0;
		LOC12 = (((NI) 0) < ((*line) ? (*line)->Sup.len : 0));
		if (LOC12) goto LA13;
		LOC12 = ((*s).rd < ((*s).s ? (*s).s->Sup.len : 0));
		LA13: ;
		result = LOC12;
	}
	break;
	case ((NU8) 2):
	{
		nimln(152, "llstream.nim");
		result = readline_13481((*s).f, line);
	}
	break;
	case ((NU8) 3):
	{
		nimln(154, "llstream.nim");
		result = readline_13481(stdin, line);
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(void, llstreamwrite_178665)(Tllstream178204* s, NimStringDesc* data) {
	nimfr("llStreamWrite", "llstream.nim")
	nimln(157, "llstream.nim");
	switch ((*s).kind) {
	case ((NU8) 0):
	case ((NU8) 3):
	{
	}
	break;
	case ((NU8) 1):
	{
		NI TMP2112;
		nimln(161, "llstream.nim");
		(*s).s = resizeString((*s).s, data->Sup.len + 0);
appendString((*s).s, data);
		nimln(162, "llstream.nim");
		TMP2112 = addInt((*s).wr, (data ? data->Sup.len : 0));
		(*s).wr = (NI)(TMP2112);
	}
	break;
	case ((NU8) 2):
	{
		nimln(164, "llstream.nim");
		write_13457((*s).f, data);
	}
	break;
	}
	popFrame();
}

N_NIMCALL(void, llstreamwriteln_178686)(Tllstream178204* s, NimStringDesc* data) {
	nimfr("llStreamWriteln", "llstream.nim")
	nimln(167, "llstream.nim");
	llstreamwrite_178665(s, data);
	nimln(168, "llstream.nim");
	llstreamwrite_178665(s, ((NimStringDesc*) &TMP2089));
	popFrame();
}

N_NIMCALL(void, llstreamwrite_178696)(Tllstream178204* s, NIM_CHAR data) {
	NIM_CHAR c;
	nimfr("llStreamWrite", "llstream.nim")
	c = 0;
	nimln(172, "llstream.nim");
	switch ((*s).kind) {
	case ((NU8) 0):
	case ((NU8) 3):
	{
	}
	break;
	case ((NU8) 1):
	{
		NI TMP2113;
		nimln(176, "llstream.nim");
		(*s).s = addChar((*s).s, data);
		nimln(177, "llstream.nim");
		TMP2113 = addInt((*s).wr, ((NI) 1));
		(*s).wr = (NI)(TMP2113);
	}
	break;
	case ((NU8) 2):
	{
		NI LOC4;
		nimln(179, "llstream.nim");
		c = data;
		nimln(180, "llstream.nim");
		LOC4 = 0;
		LOC4 = writebuffer_13537((*s).f, ((void*) ((&c))), ((NI) 1));
	}
	break;
	}
	popFrame();
}

N_NIMCALL(void, llstreamwrite_178718)(Tllstream178204* s, void* buf, NI buflen) {
	nimfr("llStreamWrite", "llstream.nim")
	nimln(183, "llstream.nim");
	switch ((*s).kind) {
	case ((NU8) 0):
	case ((NU8) 3):
	{
	}
	break;
	case ((NU8) 1):
	{
		nimln(187, "llstream.nim");
		{
			NI TMP2114;
			NI TMP2115;
			NI TMP2116;
			if (!(((NI) 0) < buflen)) goto LA5;
			nimln(188, "llstream.nim");
			TMP2114 = addInt(((*s).s ? (*s).s->Sup.len : 0), buflen);
			(*s).s = setLengthStr((*s).s, ((NI)chckRange((NI)(TMP2114), ((NI) 0), ((NI) 2147483647))));
			nimln(189, "llstream.nim");
			TMP2115 = addInt(((NI) 0), (*s).wr);
			if ((NU)((NI)(TMP2115)) > (NU)((*s).s->Sup.len)) raiseIndexError();
			memcpy(((void*) ((&(*s).s->data[(NI)(TMP2115)]))), buf, ((NI)chckRange(buflen, ((NI) 0), ((NI) 2147483647))));
			nimln(190, "llstream.nim");
			TMP2116 = addInt((*s).wr, buflen);
			(*s).wr = (NI)(TMP2116);
		}
		LA5: ;
	}
	break;
	case ((NU8) 2):
	{
		NI LOC8;
		nimln(192, "llstream.nim");
		LOC8 = 0;
		LOC8 = writebuffer_13537((*s).f, buf, ((NI)chckRange(buflen, ((NI) 0), ((NI) 2147483647))));
	}
	break;
	}
	popFrame();
}

N_NIMCALL(NimStringDesc*, llstreamreadall_178739)(Tllstream178204* s) {
	NimStringDesc* result;
	nimfr("llStreamReadAll", "llstream.nim")
	result = 0;
	nimln(197, "llstream.nim");
	switch ((*s).kind) {
	case ((NU8) 0):
	case ((NU8) 3):
	{
		nimln(199, "llstream.nim");
		result = copyString(((NimStringDesc*) &TMP2088));
	}
	break;
	case ((NU8) 1):
	{
		nimln(201, "llstream.nim");
		{
			if (!((*s).rd == ((NI) 0))) goto LA5;
			result = copyString((*s).s);
		}
		goto LA3;
		LA5: ;
		{
			nimln(202, "llstream.nim");
			result = copyStr((*s).s, (*s).rd);
		}
		LA3: ;
		nimln(203, "llstream.nim");
		(*s).rd = ((*s).s ? (*s).s->Sup.len : 0);
	}
	break;
	case ((NU8) 2):
	{
		NI bytes;
		NI i;
		nimln(205, "llstream.nim");
		result = mnewString(((NI) 2048));
		nimln(206, "llstream.nim");
		if ((NU)(((NI) 0)) > (NU)(result->Sup.len)) raiseIndexError();
		bytes = readbuffer_13515((*s).f, ((void*) ((&result->data[((NI) 0)]))), ((NI) 2048));
		nimln(207, "llstream.nim");
		i = bytes;
		{
			nimln(208, "llstream.nim");
			while (1) {
				NI TMP2117;
				NI TMP2118;
				NI TMP2119;
				if (!(bytes == ((NI) 2048))) goto LA10;
				nimln(209, "llstream.nim");
				TMP2117 = addInt(i, ((NI) 2048));
				result = setLengthStr(result, ((NI)chckRange((NI)(TMP2117), ((NI) 0), ((NI) 2147483647))));
				nimln(210, "llstream.nim");
				TMP2118 = addInt(i, ((NI) 0));
				if ((NU)((NI)(TMP2118)) > (NU)(result->Sup.len)) raiseIndexError();
				bytes = readbuffer_13515((*s).f, ((void*) ((&result->data[(NI)(TMP2118)]))), ((NI) 2048));
				nimln(211, "llstream.nim");
				TMP2119 = addInt(i, bytes);
				i = (NI)(TMP2119);
			} LA10: ;
		}
		nimln(212, "llstream.nim");
		result = setLengthStr(result, ((NI)chckRange(i, ((NI) 0), ((NI) 2147483647))));
	}
	break;
	}
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_llstreamInit)(void) {
	nimfr("llstream", "llstream.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_llstreamDatInit)(void) {
static TNimNode* TMP2083[6];
static TNimNode* TMP2084[4];
NI TMP2086;
static char* NIM_CONST TMP2085[4] = {
"llsNone", 
"llsString", 
"llsFile", 
"llsStdIn"};
static TNimNode TMP2081[12];
NTI178204.size = sizeof(Tllstream178204);
NTI178204.kind = 17;
NTI178204.base = (&NTI3411);
TMP2083[0] = &TMP2081[1];
NTI178202.size = sizeof(NU8);
NTI178202.kind = 14;
NTI178202.base = 0;
NTI178202.flags = 3;
for (TMP2086 = 0; TMP2086 < 4; TMP2086++) {
TMP2081[TMP2086+2].kind = 1;
TMP2081[TMP2086+2].offset = TMP2086;
TMP2081[TMP2086+2].name = TMP2085[TMP2086];
TMP2084[TMP2086] = &TMP2081[TMP2086+2];
}
TMP2081[6].len = 4; TMP2081[6].kind = 2; TMP2081[6].sons = &TMP2084[0];
NTI178202.node = &TMP2081[6];
TMP2081[1].kind = 1;
TMP2081[1].offset = offsetof(Tllstream178204, kind);
TMP2081[1].typ = (&NTI178202);
TMP2081[1].name = "kind";
TMP2083[1] = &TMP2081[7];
TMP2081[7].kind = 1;
TMP2081[7].offset = offsetof(Tllstream178204, f);
TMP2081[7].typ = (&NTI13004);
TMP2081[7].name = "f";
TMP2083[2] = &TMP2081[8];
TMP2081[8].kind = 1;
TMP2081[8].offset = offsetof(Tllstream178204, s);
TMP2081[8].typ = (&NTI149);
TMP2081[8].name = "s";
TMP2083[3] = &TMP2081[9];
TMP2081[9].kind = 1;
TMP2081[9].offset = offsetof(Tllstream178204, rd);
TMP2081[9].typ = (&NTI108);
TMP2081[9].name = "rd";
TMP2083[4] = &TMP2081[10];
TMP2081[10].kind = 1;
TMP2081[10].offset = offsetof(Tllstream178204, wr);
TMP2081[10].typ = (&NTI108);
TMP2081[10].name = "wr";
TMP2083[5] = &TMP2081[11];
TMP2081[11].kind = 1;
TMP2081[11].offset = offsetof(Tllstream178204, lineoffset);
TMP2081[11].typ = (&NTI108);
TMP2081[11].name = "lineOffset";
TMP2081[0].len = 6; TMP2081[0].kind = 2; TMP2081[0].sons = &TMP2083[0];
NTI178204.node = &TMP2081[0];
NTI178206.size = sizeof(Tllstream178204*);
NTI178206.kind = 22;
NTI178206.base = (&NTI178204);
NTI178206.marker = TMP2087;
}

