/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>

#include <stdlib.h>

#include <sys/socket.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tcell46747 Tcell46747;
typedef struct TNimType TNimType;
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
typedef struct Optparser174011 Optparser174011;
typedef struct TNimObject TNimObject;
typedef struct TNimNode TNimNode;
typedef struct TY521426 TY521426;
typedef struct Socketimpl513407 Socketimpl513407;
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
struct  Optparser174011  {
  TNimObject Sup;
NimStringDesc* cmd;
NI pos;
NIM_BOOL inshortstate;
NU8 kind;
NimStringDesc* key;
NimStringDesc* val;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NimStringDesc* TY143637[1];
typedef N_NIMCALL_PTR(void, TY521256) (void);
struct  TY521426  {
NI HEX3Astate;
Socketimpl513407* stdoutsocket521408;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (NimStringDesc* output, void* ClEnv);
void* ClEnv;
} TY163054;
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
typedef NIM_CHAR TY513420[4001];
struct  Socketimpl513407  {
int fd;
NIM_BOOL isbuffered;
union{
struct {TY513420 buffer;
NI currpos;
NI buflen;
} S1;
} isbufferedU;
NI32 lasterror;
};
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_51804)(Tcell46747* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46763* s, Tcell46747* c);
N_NIMCALL(void, processcmdline_521209)(NU8 pass, NimStringDesc* cmd);
N_NIMCALL(void, initoptparser_174030)(NimStringDesc* cmdline, Optparser174011* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, nponext)(Optparser174011* p);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, processargument_176738)(NU8 pass, Optparser174011* p, NI* argscount);
N_NIMCALL(void, processswitch_176725)(NU8 pass, Optparser174011* p);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(void, rawmessage_163888)(NU16 msg, NimStringDesc** args, NI argsLen0);
N_NIMCALL(void, serve_521254)(TY521256 action);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP10639)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, getconfigvar_153334)(NimStringDesc* key);
N_NIMCALL(NimStringDesc*, readline_13478)(FILE* f);
N_NIMCALL(Socketimpl513407*, newsocket_513830)(NU8 domain, NU8 typ, NU8 protocol, NIM_BOOL buffered);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s);
N_NIMCALL(void, bindaddr_514620)(Socketimpl513407* socket, NU16 port, NimStringDesc* address);
N_NIMCALL(void, listen_514610)(Socketimpl513407* socket, int backlog);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_CLOSURE(void, HEX3Aanonymous_521409)(NimStringDesc* line, void* ClEnv);
N_NIMCALL(void, send_518208)(Socketimpl513407* socket, NimStringDesc* data, NU8 flags);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52622)(Tcell46747* c);
static N_INLINE(NIM_BOOL, canbecycleroot_50267)(Tcell46747* c);
static N_INLINE(void, rtladdcycleroot_51023)(Tcell46747* c);
N_NOINLINE(void, incl_47465)(Tcellset46759* s, Tcell46747* cell);
static N_INLINE(void, decref_52204)(Tcell46747* c);
N_NIMCALL(void, accept_515401)(Socketimpl513407* server, Socketimpl513407** client, NU8 flags);
N_NIMCALL(void, readline_517608)(Socketimpl513407* socket, NimStringDesc** line, NI timeout, NU8 flags);
N_NIMCALL(void, close_515417)(Socketimpl513407* socket);
N_NIMCALL(void, msgquit_163104)(NI8 x);
STRING_LITERAL(TMP10627, "", 0);
STRING_LITERAL(TMP10632, " ", 1);
STRING_LITERAL(TMP10633, "-", 1);
STRING_LITERAL(TMP10634, "run", 3);
STRING_LITERAL(TMP10640, "server.type", 11);
STRING_LITERAL(TMP10641, "stdin", 5);
STRING_LITERAL(TMP10642, "tcp", 3);
STRING_LITERAL(TMP10643, "quit", 4);
STRING_LITERAL(TMP10646, "server.port", 11);
STRING_LITERAL(TMP10647, "server.address", 14);
STRING_LITERAL(TMP10650, "\015\012", 2);
STRING_LITERAL(TMP10673, "Invalid server.type:", 20);
NimStringDesc* curcaascmd_521204;
extern TFrame* frameptr_17042;
extern Tgcheap48616 gch_48644;
NimStringDesc* lastcaascmd_521205;
extern TNimType NTI174011; /* OptParser */
extern NU32 gglobaloptions_153128;
extern NimStringDesc* arguments_176721;
extern NimStringDesc* command_153239;
TNimType NTI521426; /* object */
extern TNimType NTI170807; /* range -1..0(int) */
extern TNimType NTI513409; /* Socket */
TNimType NTI521448; /* ref object */
extern NI gerrorcounter_163012;
extern TY163054 writelnhook_163057;

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
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_51804(c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
{	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (*a).Sup.len);
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, processcmdline_521209)(NU8 pass, NimStringDesc* cmd) {
	Optparser174011 p;
	NI argscount;
	nimfr("processCmdLine", "service.nim")
	memset((void*)(&p), 0, sizeof(p));
	p.Sup.m_type = (&NTI174011);
	nimln(30, "service.nim");
	chckNil((void*)(&p));
	memset((void*)(&p), 0, sizeof(p));
	p.Sup.m_type = (&NTI174011);
	initoptparser_174030(cmd, (&p));
	nimln(31, "service.nim");
	argscount = ((NI) 0);
	{
		nimln(32, "service.nim");
		while (1) {
			nimln(33, "service.nim");
			nponext((&p));
			nimln(34, "service.nim");
			switch (p.kind) {
			case ((NU8) 0):
			{
				nimln(35, "service.nim");
				goto LA1;
			}
			break;
			case ((NU8) 2):
			case ((NU8) 3):
			{
				nimln(37, "service.nim");
				{
					if (!eqStrings(p.key, ((NimStringDesc*) &TMP10632))) goto LA7;
					nimln(38, "service.nim");
					p.key = copyString(((NimStringDesc*) &TMP10633));
					nimln(39, "service.nim");
					{
						NIM_BOOL LOC11;
						LOC11 = 0;
						LOC11 = processargument_176738(pass, (&p), (&argscount));
						if (!LOC11) goto LA12;
						goto LA1;
					}
					LA12: ;
				}
				goto LA5;
				LA7: ;
				{
					nimln(41, "service.nim");
					processswitch_176725(pass, (&p));
				}
				LA5: ;
			}
			break;
			case ((NU8) 1):
			{
				nimln(43, "service.nim");
				{
					NIM_BOOL LOC18;
					LOC18 = 0;
					LOC18 = processargument_176738(pass, (&p), (&argscount));
					if (!LOC18) goto LA19;
					goto LA1;
				}
				LA19: ;
			}
			break;
			}
		}
	} LA1: ;
	nimln(44, "service.nim");
	{
		if (!(pass == ((NU8) 1))) goto LA23;
		nimln(45, "service.nim");
		{
			NIM_BOOL LOC27;
			NIM_BOOL LOC28;
			NimStringDesc* LOC31;
			TY143637 LOC34;
			LOC27 = 0;
			LOC28 = 0;
			LOC28 = !(((gglobaloptions_153128 &(1<<((((NU8) 13))&31)))!=0));
			if (!(LOC28)) goto LA29;
			LOC28 = !(((arguments_176721) && (arguments_176721)->Sup.len == 0));
			LA29: ;
			LOC27 = LOC28;
			if (!(LOC27)) goto LA30;
			LOC31 = 0;
			LOC31 = nsuNormalize(command_153239);
			LOC27 = !(eqStrings(LOC31, ((NimStringDesc*) &TMP10634)));
			LA30: ;
			if (!LOC27) goto LA32;
			nimln(46, "service.nim");
			memset((void*)LOC34, 0, sizeof(LOC34));
			rawmessage_163888(((NU16) 57), LOC34, 0);
		}
		LA32: ;
	}
	LA23: ;
	popFrame();
}
N_NIMCALL(void, TMP10639)(void* p, NI op) {
	TY521426* a;
	a = (TY521426*)p;
	nimGCvisit((void*)(*a).stdoutsocket521408, op);
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

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_CLOSURE(void, HEX3Aanonymous_521409)(NimStringDesc* line, void* ClEnv) {
	TY521426* HEX3Aenvp_521438;
	NimStringDesc* LOC1;
	nimfr(":anonymous", "service.nim")
	HEX3Aenvp_521438 = (TY521426*) ClEnv;
	nimln(75, "service.nim");
	LOC1 = 0;
	LOC1 = rawNewString(line->Sup.len + 2);
appendString(LOC1, line);
appendString(LOC1, ((NimStringDesc*) &TMP10650));
	send_518208((*HEX3Aenvp_521438).stdoutsocket521408, LOC1, 2);
	popFrame();
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

N_NIMCALL(void, serve_521254)(TY521256 action) {
	TY521426* HEX3Aenv_521447;
	NimStringDesc* typ;
	nimfr("serve", "service.nim")
	HEX3Aenv_521447 = 0;
	nimln(180, "system.nim");
	HEX3Aenv_521447 = (TY521426*) newObj((&NTI521448), sizeof(TY521426));
	nimln(55, "service.nim");
	typ = getconfigvar_153334(((NimStringDesc*) &TMP10640));
	nimln(56, "service.nim");
	if (eqStrings(typ, ((NimStringDesc*) &TMP10641))) goto LA1;
	if (eqStrings(typ, ((NimStringDesc*) &TMP10642))) goto LA2;
	if (eqStrings(typ, ((NimStringDesc*) &TMP10627))) goto LA2;
	goto LA3;
	LA1: ;
	{
		{
			nimln(58, "service.nim");
			while (1) {
				NimStringDesc* line;
				NimStringDesc* LOC12;
				nimln(59, "service.nim");
				line = readline_13478(stdin);
				nimln(60, "service.nim");
				{
					if (!eqStrings(line, ((NimStringDesc*) &TMP10643))) goto LA10;
					exit(((NI) 0));
				}
				LA10: ;
				nimln(50, "service.nim");
				LOC12 = 0;
				LOC12 = curcaascmd_521204; curcaascmd_521204 = copyStringRC1(line);
				if (LOC12) nimGCunrefNoCycle(LOC12);
				nimln(51, "service.nim");
				processcmdline_521209(((NU8) 1), line);
				nimln(52, "service.nim");
				action();
				nimln(53, "service.nim");
				gerrorcounter_163012 = ((NI) 0);
				nimln(62, "service.nim");
				printf("%s\012", ((NimStringDesc*) &TMP10627)? (((NimStringDesc*) &TMP10627))->data:"nil");
				nimln(63, "service.nim");
				fflush(stdout);
			}
		}
	}
	goto LA4;
	LA2: ;
	{
		Socketimpl513407* server;
		NimStringDesc* p;
		NU16 port;
		NimStringDesc* LOC20;
		NimStringDesc* inp;
		TY163054 LOC21;
		nimln(67, "service.nim");
		server = newsocket_513830(((NU8) 2), ((NU8) 1), ((NU8) 6), NIM_TRUE);
		nimln(68, "service.nim");
		p = getconfigvar_153334(((NimStringDesc*) &TMP10646));
		nimln(69, "service.nim");
		{
			NI LOC18;
			if (!(((NI) 0) < (p ? p->Sup.len : 0))) goto LA16;
			LOC18 = 0;
			LOC18 = nsuParseInt(p);
			port = ((NU16) (LOC18));
		}
		goto LA14;
		LA16: ;
		{
			port = ((NU16) 6000);
		}
		LA14: ;
		nimln(70, "service.nim");
		LOC20 = 0;
		LOC20 = getconfigvar_153334(((NimStringDesc*) &TMP10647));
		bindaddr_514620(server, port, LOC20);
		nimln(71, "service.nim");
		inp = copyString(((NimStringDesc*) &TMP10627));
		nimln(72, "service.nim");
		listen_514610(server, SOMAXCONN);
		nimln(73, "service.nim");
		asgnRefNoCycle((void**) (&(*HEX3Aenv_521447).stdoutsocket521408), newsocket_513830(((NU8) 2), ((NU8) 1), ((NU8) 6), NIM_TRUE));
		nimln(74, "service.nim");
		memset((void*)(&LOC21), 0, sizeof(LOC21));
		LOC21.ClPrc = HEX3Aanonymous_521409; LOC21.ClEnv = HEX3Aenv_521447;
		asgnRef((void**) (&writelnhook_163057.ClEnv), LOC21.ClEnv);
		writelnhook_163057.ClPrc = LOC21.ClPrc;
		{
			nimln(77, "service.nim");
			while (1) {
				NimStringDesc* LOC24;
				nimln(78, "service.nim");
				accept_515401(server, &(*HEX3Aenv_521447).stdoutsocket521408, 2);
				nimln(79, "service.nim");
				readline_517608((*HEX3Aenv_521447).stdoutsocket521408, (&inp), ((NI) -1), 2);
				nimln(50, "service.nim");
				LOC24 = 0;
				LOC24 = curcaascmd_521204; curcaascmd_521204 = copyStringRC1(inp);
				if (LOC24) nimGCunrefNoCycle(LOC24);
				nimln(51, "service.nim");
				processcmdline_521209(((NU8) 1), inp);
				nimln(52, "service.nim");
				action();
				nimln(53, "service.nim");
				gerrorcounter_163012 = ((NI) 0);
				nimln(81, "service.nim");
				send_518208((*HEX3Aenv_521447).stdoutsocket521408, ((NimStringDesc*) &TMP10650), 2);
				nimln(82, "service.nim");
				close_515417((*HEX3Aenv_521447).stdoutsocket521408);
			}
		}
	}
	goto LA4;
	LA3: ;
	{
		nimln(86, "service.nim");
		printf("%s%s\012", ((NimStringDesc*) &TMP10673)? (((NimStringDesc*) &TMP10673))->data:"nil", typ? (typ)->data:"nil");
		nimln(87, "service.nim");
		msgquit_163104(((NI8) 1));
	}
	LA4: ;
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, compiler_serviceInit)(void) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	nimfr("service", "service.nim")
	nimln(24, "service.nim");
	LOC1 = 0;
	LOC1 = curcaascmd_521204; curcaascmd_521204 = copyStringRC1(((NimStringDesc*) &TMP10627));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	nimln(25, "service.nim");
	LOC2 = 0;
	LOC2 = lastcaascmd_521205; lastcaascmd_521205 = copyStringRC1(((NimStringDesc*) &TMP10627));
	if (LOC2) nimGCunrefNoCycle(LOC2);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_serviceDatInit)(void) {
static TNimNode* TMP10635[2];
static TNimNode TMP10606[3];
NTI521426.size = sizeof(TY521426);
NTI521426.kind = 18;
NTI521426.base = 0;
NTI521426.flags = 2;
TMP10635[0] = &TMP10606[1];
TMP10606[1].kind = 1;
TMP10606[1].offset = offsetof(TY521426, HEX3Astate);
TMP10606[1].typ = (&NTI170807);
TMP10606[1].name = ":state";
TMP10635[1] = &TMP10606[2];
TMP10606[2].kind = 1;
TMP10606[2].offset = offsetof(TY521426, stdoutsocket521408);
TMP10606[2].typ = (&NTI513409);
TMP10606[2].name = "stdoutSocket521408";
TMP10606[0].len = 2; TMP10606[0].kind = 2; TMP10606[0].sons = &TMP10635[0];
NTI521426.node = &TMP10606[0];
NTI521448.size = sizeof(TY521426*);
NTI521448.kind = 22;
NTI521448.base = (&NTI521426);
NTI521448.flags = 2;
NTI521448.marker = TMP10639;
}

