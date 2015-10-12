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
typedef struct Tcell46947 Tcell46947;
typedef struct TNimType TNimType;
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
typedef struct Optparser174011 Optparser174011;
typedef struct TNimObject TNimObject;
typedef struct TNimNode TNimNode;
typedef struct TY521426 TY521426;
typedef struct Socketimpl513407 Socketimpl513407;
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
typedef NI TY28020[8];
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
struct  Tfreecell28030  {
Tfreecell28030* next;
NI zerofield;
};
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46947*, usrtocell_50446)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20201)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_52004)(Tcell46947* c);
N_NOINLINE(void, addzct_50417)(Tcellseq46963* s, Tcell46947* c);
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
N_NIMCALL(void, TMP10632)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, getconfigvar_153334)(NimStringDesc* key);
N_NIMCALL(NimStringDesc*, readline_13678)(FILE* f);
N_NIMCALL(Socketimpl513407*, newsocket_513830)(NU8 domain, NU8 typ, NU8 protocol, NIM_BOOL buffered);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s);
N_NIMCALL(void, bindaddr_514620)(Socketimpl513407* socket, NU16 port, NimStringDesc* address);
N_NIMCALL(void, listen_514610)(Socketimpl513407* socket, int backlog);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_CLOSURE(void, HEX3Aanonymous_521409)(NimStringDesc* line, void* ClEnv);
N_NIMCALL(void, send_518007)(Socketimpl513407* socket, NimStringDesc* data, NU8 flags);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52822)(Tcell46947* c);
static N_INLINE(NIM_BOOL, canbecycleroot_50467)(Tcell46947* c);
static N_INLINE(void, rtladdcycleroot_51223)(Tcell46947* c);
N_NOINLINE(void, incl_47665)(Tcellset46959* s, Tcell46947* cell);
static N_INLINE(void, decref_52404)(Tcell46947* c);
N_NIMCALL(void, accept_515401)(Socketimpl513407* server, Socketimpl513407** client, NU8 flags);
N_NIMCALL(void, readline_517608)(Socketimpl513407* socket, NimStringDesc** line, NI timeout, NU8 flags);
N_NIMCALL(void, close_515417)(Socketimpl513407* socket);
N_NIMCALL(void, msgquit_163104)(NI8 x);
STRING_LITERAL(TMP10620, "", 0);
STRING_LITERAL(TMP10625, " ", 1);
STRING_LITERAL(TMP10626, "-", 1);
STRING_LITERAL(TMP10627, "run", 3);
STRING_LITERAL(TMP10633, "server.type", 11);
STRING_LITERAL(TMP10634, "stdin", 5);
STRING_LITERAL(TMP10635, "tcp", 3);
STRING_LITERAL(TMP10636, "quit", 4);
STRING_LITERAL(TMP10639, "server.port", 11);
STRING_LITERAL(TMP10640, "server.address", 14);
STRING_LITERAL(TMP10643, "\015\012", 2);
STRING_LITERAL(TMP10666, "Invalid server.type:", 20);
NimStringDesc* curcaascmd_521204;
extern TFrame* frameptr_17242;
extern Tgcheap48816 gch_48844;
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
	result = ((Tcell46947*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46947))))));
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
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_52004(c);
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
					if (!eqStrings(p.key, ((NimStringDesc*) &TMP10625))) goto LA7;
					nimln(38, "service.nim");
					p.key = copyString(((NimStringDesc*) &TMP10626));
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
			LOC27 = !(eqStrings(LOC31, ((NimStringDesc*) &TMP10627)));
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
N_NIMCALL(void, TMP10632)(void* p, NI op) {
	TY521426* a;
	a = (TY521426*)p;
	nimGCvisit((void*)(*a).stdoutsocket521408, op);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		Tcell46947* c;
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(252, "gc.nim");
		c = usrtocell_50446(src);
		nimln(169, "gc.nim");
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	nimln(254, "gc.nim");
	{
		Tcell46947* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(255, "gc.nim");
		c = usrtocell_50446((*dest));
		nimln(256, "gc.nim");
		{
			nimln(167, "gc.nim");
			(*c).refcount -= ((NI) 8);
			nimln(168, "gc.nim");
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			nimln(257, "gc.nim");
			rtladdzct_52004(c);
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
appendString(LOC1, ((NimStringDesc*) &TMP10643));
	send_518007((*HEX3Aenvp_521438).stdoutsocket521408, LOC1, 2);
	popFrame();
}

static N_INLINE(NIM_BOOL, canbecycleroot_50467)(Tcell46947* c) {
	NIM_BOOL result;
	nimfr("canBeCycleRoot", "gc.nim")
	result = 0;
	nimln(121, "gc.nim");
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdcycleroot_51223)(Tcell46947* c) {
	nimfr("rtlAddCycleRoot", "gc.nim")
	nimln(189, "gc.nim");
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		nimln(139, "gc.nim");
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		nimln(191, "gc.nim");
		incl_47665((&gch_48844.cycleroots), c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(void, incref_52822)(Tcell46947* c) {
	nimfr("incRef", "gc.nim")
	nimln(216, "gc.nim");
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	nimln(219, "gc.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_50467(c);
		if (!LOC3) goto LA4;
		nimln(220, "gc.nim");
		rtladdcycleroot_51223(c);
	}
	LA4: ;
	popFrame();
}

static N_INLINE(void, decref_52404)(Tcell46947* c) {
	nimfr("decRef", "gc.nim")
	nimln(206, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).refcount -= ((NI) 8);
		nimln(168, "gc.nim");
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		nimln(207, "gc.nim");
		rtladdzct_52004(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(208, "gc.nim");
		LOC6 = 0;
		LOC6 = canbecycleroot_50467(c);
		if (!LOC6) goto LA7;
		nimln(211, "gc.nim");
		rtladdcycleroot_51223(c);
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
		Tcell46947* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_50446(src);
		incref_52822(LOC5);
	}
	LA3: ;
	nimln(245, "gc.nim");
	{
		Tcell46947* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_50446((*dest));
		decref_52404(LOC10);
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
	typ = getconfigvar_153334(((NimStringDesc*) &TMP10633));
	nimln(56, "service.nim");
	if (eqStrings(typ, ((NimStringDesc*) &TMP10634))) goto LA1;
	if (eqStrings(typ, ((NimStringDesc*) &TMP10635))) goto LA2;
	if (eqStrings(typ, ((NimStringDesc*) &TMP10620))) goto LA2;
	goto LA3;
	LA1: ;
	{
		{
			nimln(58, "service.nim");
			while (1) {
				NimStringDesc* line;
				NimStringDesc* LOC12;
				nimln(59, "service.nim");
				line = readline_13678(stdin);
				nimln(60, "service.nim");
				{
					if (!eqStrings(line, ((NimStringDesc*) &TMP10636))) goto LA10;
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
				printf("%s\012", ((NimStringDesc*) &TMP10620)? (((NimStringDesc*) &TMP10620))->data:"nil");
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
		p = getconfigvar_153334(((NimStringDesc*) &TMP10639));
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
		LOC20 = getconfigvar_153334(((NimStringDesc*) &TMP10640));
		bindaddr_514620(server, port, LOC20);
		nimln(71, "service.nim");
		inp = copyString(((NimStringDesc*) &TMP10620));
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
				send_518007((*HEX3Aenv_521447).stdoutsocket521408, ((NimStringDesc*) &TMP10643), 2);
				nimln(82, "service.nim");
				close_515417((*HEX3Aenv_521447).stdoutsocket521408);
			}
		}
	}
	goto LA4;
	LA3: ;
	{
		nimln(86, "service.nim");
		printf("%s%s\012", ((NimStringDesc*) &TMP10666)? (((NimStringDesc*) &TMP10666))->data:"nil", typ? (typ)->data:"nil");
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
	LOC1 = curcaascmd_521204; curcaascmd_521204 = copyStringRC1(((NimStringDesc*) &TMP10620));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	nimln(25, "service.nim");
	LOC2 = 0;
	LOC2 = lastcaascmd_521205; lastcaascmd_521205 = copyStringRC1(((NimStringDesc*) &TMP10620));
	if (LOC2) nimGCunrefNoCycle(LOC2);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_serviceDatInit)(void) {
static TNimNode* TMP10628[2];
static TNimNode TMP10599[3];
NTI521426.size = sizeof(TY521426);
NTI521426.kind = 18;
NTI521426.base = 0;
NTI521426.flags = 2;
TMP10628[0] = &TMP10599[1];
TMP10599[1].kind = 1;
TMP10599[1].offset = offsetof(TY521426, HEX3Astate);
TMP10599[1].typ = (&NTI170807);
TMP10599[1].name = ":state";
TMP10628[1] = &TMP10599[2];
TMP10599[2].kind = 1;
TMP10599[2].offset = offsetof(TY521426, stdoutsocket521408);
TMP10599[2].typ = (&NTI513409);
TMP10599[2].name = "stdoutSocket521408";
TMP10599[0].len = 2; TMP10599[0].kind = 2; TMP10599[0].sons = &TMP10628[0];
NTI521426.node = &TMP10599[0];
NTI521448.size = sizeof(TY521426*);
NTI521448.kind = 22;
NTI521448.base = (&NTI521426);
NTI521448.flags = 2;
NTI521448.marker = TMP10632;
}

