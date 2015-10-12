/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <sys/socket.h>

#include <netinet/in.h>

#include <unistd.h>

#include <netdb.h>

#include <string.h>

#include <arpa/inet.h>

#include <fcntl.h>

#include <sys/select.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Oserror3433 Oserror3433;
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
typedef struct Servent510610 Servent510610;
typedef struct TY13606 TY13606;
typedef struct Hostent510612 Hostent510612;
typedef struct TY513649 TY513649;
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
struct  Oserror3433  {
  Systemerror3429 Sup;
NI32 errorcode;
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
struct  Servent510610  {
NimStringDesc* name;
TY13606* aliases;
NU16 port;
NimStringDesc* proto;
};
struct  Hostent510612  {
NimStringDesc* name;
TY13606* aliases;
NU8 addrtype;
NI length;
TY13606* addrlist;
};
typedef NIM_CHAR TY107380[256];
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
struct TY13606 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY513649 {
  TGenericSeq Sup;
  int data[SEQ_DECL_SIZE];
};
N_NIMCALL(int, toint_510829)(NU8 domain);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(int, toint_510835)(NU8 typ);
N_NIMCALL(int, toint_510841)(NU8 p);
N_NIMCALL(int, newrawsocket_511004)(NU8 domain, NU8 typ, NU8 protocol);
N_NIMCALL(int, newrawsocket_511016)(int domain, int typ, int protocol);
N_NIMCALL(void, close_511028)(int socket);
N_NIMCALL(int, bindaddr_511214)(int socket, struct sockaddr* name, socklen_t namelen);
N_NIMCALL(int, listen_511227)(int socket, int backlog);
N_NIMCALL(struct addrinfo*, getaddrinfo_511408)(NimStringDesc* address, NU16 port, NU8 af, NU8 typ, NU8 prot);
N_NIMCALL(NimStringDesc*, HEX24_6401)(NU64 x);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr);
static N_INLINE(void, rtladdzct_51804)(Tcell46747* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46763* s, Tcell46747* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(void, dealloc_511621)(struct addrinfo* ai);
N_NIMCALL(NI32, ntohl_511631)(NI32 x);
N_NIMCALL(NI16, ntohs_511807)(NI16 x);
N_NIMCALL(NI32, htonl_512007)(NI32 x);
N_NIMCALL(NI16, htons_512017)(NI16 x);
N_NIMCALL(void, getservbyname_512027)(NimStringDesc* name, NimStringDesc* proto, Servent510610* Result);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(TY13606*, cstringarraytoseq_13843)(NCSTRING* a);
N_NIMCALL(void, getservbyport_512233)(NU16 port, NimStringDesc* proto, Servent510610* Result);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(void, gethostbyaddr_512434)(NimStringDesc* ip, Hostent510612* Result);
N_NIMCALL(void, gethostbyname_512824)(NimStringDesc* name, Hostent510612* Result);
N_NIMCALL(void, raiseoserror_116809)(NI32 errorcode);
N_NIMCALL(NI32, oslasterror_116833)(void);
N_NIMCALL(NU16, getsockname_513221)(int socket);
N_NIMCALL(NI, getsockoptint_513413)(int socket, NI level, NI optname);
N_NIMCALL(void, setsockoptint_513433)(int socket, NI level, NI optname, NI optval);
N_NIMCALL(void, setblocking_513450)(int s, NIM_BOOL blocking);
N_NIMCALL(struct timeval, timevalfrommilliseconds_513628)(NI timeout);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(void, createfdset_513645)(fd_set* fd, TY513649* s, NI* m);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, failedassertimpl_87017)(NimStringDesc* msg);
N_NIMCALL(void, prunesocketset_513846)(TY513649** s, fd_set* fd);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(NI, select_513913)(TY513649** readfds, NI timeout);
N_NIMCALL(NI, selectwrite_513972)(TY513649** writefds, NI timeout);
N_NIMCALL(void, TMP10664)(void* p, NI op);
STRING_LITERAL(TMP10616, "Service not found.", 18);
STRING_LITERAL(TMP10617, "unknown h_addrtype", 18);
STRING_LITERAL(TMP10623, "len(a) == L seq modified while iterating over it", 48);
int osinvalidsocket_510651;
extern TFrame* frameptr_17042;
extern TNimType NTI116812; /* ref OSError */
extern TNimType NTI3433; /* OSError */
extern Tgcheap48616 gch_48644;
extern TNimType NTI5811; /* cint */
TNimType NTI513649; /* seq[SocketHandle] */

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

N_NIMCALL(int, toint_510829)(NU8 domain) {
	int result;
	nimfr("toInt", "rawsockets.nim")
	result = 0;
	nimln(119, "rawsockets.nim");
	switch (domain) {
	case ((NU8) 0):
	{
		nimln(120, "rawsockets.nim");
		result = AF_UNIX;
	}
	break;
	case ((NU8) 2):
	{
		nimln(121, "rawsockets.nim");
		result = AF_INET;
	}
	break;
	case ((NU8) 23):
	{
		nimln(122, "rawsockets.nim");
		result = AF_INET6;
	}
	break;
	default:
	{
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(int, toint_510835)(NU8 typ) {
	int result;
	nimfr("toInt", "rawsockets.nim")
	result = 0;
	nimln(126, "rawsockets.nim");
	switch (typ) {
	case ((NU8) 1):
	{
		nimln(127, "rawsockets.nim");
		result = SOCK_STREAM;
	}
	break;
	case ((NU8) 2):
	{
		nimln(128, "rawsockets.nim");
		result = SOCK_DGRAM;
	}
	break;
	case ((NU8) 5):
	{
		nimln(129, "rawsockets.nim");
		result = SOCK_SEQPACKET;
	}
	break;
	case ((NU8) 3):
	{
		nimln(130, "rawsockets.nim");
		result = SOCK_RAW;
	}
	break;
	default:
	{
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(int, toint_510841)(NU8 p) {
	int result;
	nimfr("toInt", "rawsockets.nim")
	result = 0;
	nimln(134, "rawsockets.nim");
	switch (p) {
	case ((NU8) 6):
	{
		nimln(135, "rawsockets.nim");
		result = IPPROTO_TCP;
	}
	break;
	case ((NU8) 17):
	{
		nimln(136, "rawsockets.nim");
		result = IPPROTO_UDP;
	}
	break;
	case ((NU8) 18):
	{
		nimln(137, "rawsockets.nim");
		result = IPPROTO_IP;
	}
	break;
	case ((NU8) 19):
	{
		nimln(138, "rawsockets.nim");
		result = IPPROTO_IPV6;
	}
	break;
	case ((NU8) 20):
	{
		nimln(139, "rawsockets.nim");
		result = IPPROTO_RAW;
	}
	break;
	case ((NU8) 21):
	{
		nimln(140, "rawsockets.nim");
		result = IPPROTO_ICMP;
	}
	break;
	default:
	{
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(int, newrawsocket_511004)(NU8 domain, NU8 typ, NU8 protocol) {
	int result;
	int LOC1;
	int LOC2;
	int LOC3;
	nimfr("newRawSocket", "rawsockets.nim")
	result = 0;
	nimln(156, "rawsockets.nim");
	nimln(157, "rawsockets.nim");
	LOC1 = 0;
	LOC1 = toint_510829(domain);
	LOC2 = 0;
	LOC2 = toint_510835(typ);
	LOC3 = 0;
	LOC3 = toint_510841(protocol);
	result = socket(LOC1, LOC2, LOC3);
	popFrame();
	return result;
}

N_NIMCALL(int, newrawsocket_511016)(int domain, int typ, int protocol) {
	int result;
	nimfr("newRawSocket", "rawsockets.nim")
	result = 0;
	nimln(160, "rawsockets.nim");
	nimln(164, "rawsockets.nim");
	result = socket(domain, typ, protocol);
	popFrame();
	return result;
}

N_NIMCALL(void, close_511028)(int socket) {
	int LOC1;
	nimfr("close", "rawsockets.nim")
	nimln(171, "rawsockets.nim");
	LOC1 = 0;
	LOC1 = close(socket);
	popFrame();
}

N_NIMCALL(int, bindaddr_511214)(int socket, struct sockaddr* name, socklen_t namelen) {
	int result;
	nimfr("bindAddr", "rawsockets.nim")
	result = 0;
	nimln(176, "rawsockets.nim");
	result = bind(socket, name, namelen);
	popFrame();
	return result;
}

N_NIMCALL(int, listen_511227)(int socket, int backlog) {
	int result;
	nimfr("listen", "rawsockets.nim")
	result = 0;
	nimln(185, "rawsockets.nim");
	result = listen(socket, backlog);
	popFrame();
	return result;
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

N_NIMCALL(struct addrinfo*, getaddrinfo_511408)(NimStringDesc* address, NU16 port, NU8 af, NU8 typ, NU8 prot) {
	struct addrinfo* result;
	struct addrinfo hints;
	int gairesult;
	NimStringDesc* LOC1;
	nimfr("getAddrInfo", "rawsockets.nim")
	result = 0;
	memset((void*)(&hints), 0, sizeof(hints));
	nimln(193, "rawsockets.nim");
	result = NIM_NIL;
	nimln(194, "rawsockets.nim");
	hints.ai_family = toint_510829(af);
	nimln(195, "rawsockets.nim");
	hints.ai_socktype = toint_510835(typ);
	nimln(196, "rawsockets.nim");
	hints.ai_protocol = toint_510841(prot);
	nimln(197, "rawsockets.nim");
	LOC1 = 0;
	LOC1 = HEX24_6401(port);
	gairesult = getaddrinfo(address->data, LOC1->data, (&hints), &result);
	nimln(198, "rawsockets.nim");
	{
		Oserror3433* e_511603;
		NCSTRING LOC6;
		if (!!((gairesult == ((NI32) 0)))) goto LA4;
		e_511603 = 0;
		nimln(2265, "system.nim");
		e_511603 = (Oserror3433*) newObj((&NTI116812), sizeof(Oserror3433));
		(*e_511603).Sup.Sup.Sup.m_type = (&NTI3433);
		nimln(2266, "system.nim");
		nimln(202, "rawsockets.nim");
		LOC6 = 0;
		LOC6 = gai_strerror(gairesult);
		asgnRefNoCycle((void**) (&(*e_511603).Sup.Sup.message), cstrToNimstr(LOC6));
		raiseException((Exception*)e_511603, "OSError");
	}
	LA4: ;
	popFrame();
	return result;
}

N_NIMCALL(void, dealloc_511621)(struct addrinfo* ai) {
	nimfr("dealloc", "rawsockets.nim")
	nimln(205, "rawsockets.nim");
	freeaddrinfo(ai);
	popFrame();
}

N_NIMCALL(NI32, ntohl_511631)(NI32 x) {
	NI32 result;
	nimfr("ntohl", "rawsockets.nim")
	result = 0;
	nimln(212, "rawsockets.nim");
	nimln(214, "rawsockets.nim");
	nimln(213, "rawsockets.nim");
	nimln(212, "rawsockets.nim");
	nimln(213, "rawsockets.nim");
	nimln(214, "rawsockets.nim");
	nimln(215, "rawsockets.nim");
	result = (NI32)((NI32)((NI32)((NI32)((NU32)(x) >> (NU32)(((NI32) 24))) | (NI32)((NI32)((NU32)(x) >> (NU32)(((NI32) 8))) & ((NI32) 65280))) | (NI32)((NI32)((NU32)(x) << (NU32)(((NI32) 8))) & ((NI32) 16711680))) | (NI32)((NU32)(x) << (NU32)(((NI32) 24))));
	popFrame();
	return result;
}

N_NIMCALL(NI16, ntohs_511807)(NI16 x) {
	NI16 result;
	nimfr("ntohs", "rawsockets.nim")
	result = 0;
	nimln(222, "rawsockets.nim");
	result = (NI16)((NI16)((NU16)(x) >> (NU16)(((NI16) 8))) | (NI16)((NU16)(x) << (NU16)(((NI16) 8))));
	popFrame();
	return result;
}

N_NIMCALL(NI32, htonl_512007)(NI32 x) {
	NI32 result;
	nimfr("htonl", "rawsockets.nim")
	result = 0;
	nimln(228, "rawsockets.nim");
	result = ntohl_511631(x);
	popFrame();
	return result;
}

N_NIMCALL(NI16, htons_512017)(NI16 x) {
	NI16 result;
	nimfr("htons", "rawsockets.nim")
	result = 0;
	nimln(234, "rawsockets.nim");
	result = ntohs_511807(x);
	popFrame();
	return result;
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

N_NIMCALL(void, getservbyname_512027)(NimStringDesc* name, NimStringDesc* proto, Servent510610* Result) {
	struct servent* s;
	nimfr("getServByName", "rawsockets.nim")
	nimln(245, "rawsockets.nim");
	s = getservbyname(name->data, proto->data);
	nimln(246, "rawsockets.nim");
	{
		Oserror3433* e_512216;
		NimStringDesc* LOC5;
		if (!(s == NIM_NIL)) goto LA3;
		e_512216 = 0;
		nimln(2265, "system.nim");
		e_512216 = (Oserror3433*) newObj((&NTI116812), sizeof(Oserror3433));
		(*e_512216).Sup.Sup.Sup.m_type = (&NTI3433);
		nimln(2266, "system.nim");
		LOC5 = 0;
		LOC5 = (*e_512216).Sup.Sup.message; (*e_512216).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP10616));
		if (LOC5) nimGCunrefNoCycle(LOC5);
		nimln(246, "rawsockets.nim");
		raiseException((Exception*)e_512216, "OSError");
	}
	LA3: ;
	nimln(247, "rawsockets.nim");
	unsureAsgnRef((void**) (&(*Result).name), cstrToNimstr((*s).s_name));
	nimln(248, "rawsockets.nim");
	unsureAsgnRef((void**) (&(*Result).aliases), cstringarraytoseq_13843((*s).s_aliases));
	nimln(249, "rawsockets.nim");
	(*Result).port = ((NU16) ((*s).s_port));
	nimln(250, "rawsockets.nim");
	unsureAsgnRef((void**) (&(*Result).proto), cstrToNimstr((*s).s_proto));
	popFrame();
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

N_NIMCALL(void, getservbyport_512233)(NU16 port, NimStringDesc* proto, Servent510610* Result) {
	struct servent* s;
	nimfr("getServByPort", "rawsockets.nim")
	nimln(261, "rawsockets.nim");
	s = getservbyport(((int) (((NI)(NU)(NU16)(((NI16)chckRange(port, ((NI16) -32768), ((NI16) 32767))))))), proto->data);
	nimln(262, "rawsockets.nim");
	{
		Oserror3433* e_512416;
		NimStringDesc* LOC5;
		if (!(s == NIM_NIL)) goto LA3;
		e_512416 = 0;
		nimln(2265, "system.nim");
		e_512416 = (Oserror3433*) newObj((&NTI116812), sizeof(Oserror3433));
		(*e_512416).Sup.Sup.Sup.m_type = (&NTI3433);
		nimln(2266, "system.nim");
		LOC5 = 0;
		LOC5 = (*e_512416).Sup.Sup.message; (*e_512416).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP10616));
		if (LOC5) nimGCunrefNoCycle(LOC5);
		nimln(262, "rawsockets.nim");
		raiseException((Exception*)e_512416, "OSError");
	}
	LA3: ;
	nimln(263, "rawsockets.nim");
	unsureAsgnRef((void**) (&(*Result).name), cstrToNimstr((*s).s_name));
	nimln(264, "rawsockets.nim");
	unsureAsgnRef((void**) (&(*Result).aliases), cstringarraytoseq_13843((*s).s_aliases));
	nimln(265, "rawsockets.nim");
	(*Result).port = ((NU16) ((*s).s_port));
	nimln(266, "rawsockets.nim");
	unsureAsgnRef((void**) (&(*Result).proto), cstrToNimstr((*s).s_proto));
	popFrame();
}

N_NIMCALL(void, gethostbyaddr_512434)(NimStringDesc* ip, Hostent510612* Result) {
	struct in_addr myaddr;
	struct hostent* s;
	nimfr("getHostByAddr", "rawsockets.nim")
	memset((void*)(&myaddr), 0, sizeof(myaddr));
	nimln(271, "rawsockets.nim");
	myaddr.s_addr = inet_addr(ip->data);
	nimln(278, "rawsockets.nim");
	s = gethostbyaddr(((void*) ((&myaddr))), ((socklen_t) (((NI)sizeof(struct in_addr)))), AF_INET);
	nimln(280, "rawsockets.nim");
	{
		Oserror3433* e_512617;
		NCSTRING LOC5;
		if (!(s == NIM_NIL)) goto LA3;
		e_512617 = 0;
		nimln(2265, "system.nim");
		e_512617 = (Oserror3433*) newObj((&NTI116812), sizeof(Oserror3433));
		(*e_512617).Sup.Sup.Sup.m_type = (&NTI3433);
		nimln(2266, "system.nim");
		nimln(281, "rawsockets.nim");
		LOC5 = 0;
		LOC5 = hstrerror(h_errno);
		asgnRefNoCycle((void**) (&(*e_512617).Sup.Sup.message), cstrToNimstr(LOC5));
		raiseException((Exception*)e_512617, "OSError");
	}
	LA3: ;
	nimln(283, "rawsockets.nim");
	unsureAsgnRef((void**) (&(*Result).name), cstrToNimstr((*s).h_name));
	nimln(284, "rawsockets.nim");
	unsureAsgnRef((void**) (&(*Result).aliases), cstringarraytoseq_13843((*s).h_aliases));
	nimln(288, "rawsockets.nim");
	{
		if (!((*s).h_addrtype == AF_INET)) goto LA8;
		nimln(289, "rawsockets.nim");
		(*Result).addrtype = ((NU8) 2);
	}
	goto LA6;
	LA8: ;
	{
		nimln(290, "rawsockets.nim");
		if (!((*s).h_addrtype == AF_INET6)) goto LA11;
		nimln(291, "rawsockets.nim");
		(*Result).addrtype = ((NU8) 23);
	}
	goto LA6;
	LA11: ;
	{
		Oserror3433* e_512803;
		NimStringDesc* LOC14;
		e_512803 = 0;
		nimln(2265, "system.nim");
		e_512803 = (Oserror3433*) newObj((&NTI116812), sizeof(Oserror3433));
		(*e_512803).Sup.Sup.Sup.m_type = (&NTI3433);
		nimln(2266, "system.nim");
		LOC14 = 0;
		LOC14 = (*e_512803).Sup.Sup.message; (*e_512803).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP10617));
		if (LOC14) nimGCunrefNoCycle(LOC14);
		nimln(293, "rawsockets.nim");
		raiseException((Exception*)e_512803, "OSError");
	}
	LA6: ;
	nimln(294, "rawsockets.nim");
	unsureAsgnRef((void**) (&(*Result).addrlist), cstringarraytoseq_13843((*s).h_addr_list));
	nimln(295, "rawsockets.nim");
	(*Result).length = ((NI) ((*s).h_length));
	popFrame();
}

N_NIMCALL(void, gethostbyname_512824)(NimStringDesc* name, Hostent510612* Result) {
	struct hostent* s;
	nimfr("getHostByName", "rawsockets.nim")
	nimln(302, "rawsockets.nim");
	s = gethostbyname(name->data);
	nimln(303, "rawsockets.nim");
	{
		NI32 LOC5;
		if (!(s == NIM_NIL)) goto LA3;
		LOC5 = 0;
		LOC5 = oslasterror_116833();
		raiseoserror_116809(LOC5);
	}
	LA3: ;
	nimln(304, "rawsockets.nim");
	unsureAsgnRef((void**) (&(*Result).name), cstrToNimstr((*s).h_name));
	nimln(305, "rawsockets.nim");
	unsureAsgnRef((void**) (&(*Result).aliases), cstringarraytoseq_13843((*s).h_aliases));
	nimln(309, "rawsockets.nim");
	{
		if (!((*s).h_addrtype == AF_INET)) goto LA8;
		nimln(310, "rawsockets.nim");
		(*Result).addrtype = ((NU8) 2);
	}
	goto LA6;
	LA8: ;
	{
		nimln(311, "rawsockets.nim");
		if (!((*s).h_addrtype == AF_INET6)) goto LA11;
		nimln(312, "rawsockets.nim");
		(*Result).addrtype = ((NU8) 23);
	}
	goto LA6;
	LA11: ;
	{
		Oserror3433* e_513203;
		NimStringDesc* LOC14;
		e_513203 = 0;
		nimln(2265, "system.nim");
		e_513203 = (Oserror3433*) newObj((&NTI116812), sizeof(Oserror3433));
		(*e_513203).Sup.Sup.Sup.m_type = (&NTI3433);
		nimln(2266, "system.nim");
		LOC14 = 0;
		LOC14 = (*e_513203).Sup.Sup.message; (*e_513203).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP10617));
		if (LOC14) nimGCunrefNoCycle(LOC14);
		nimln(314, "rawsockets.nim");
		raiseException((Exception*)e_513203, "OSError");
	}
	LA6: ;
	nimln(315, "rawsockets.nim");
	unsureAsgnRef((void**) (&(*Result).addrlist), cstringarraytoseq_13843((*s).h_addr_list));
	nimln(316, "rawsockets.nim");
	(*Result).length = ((NI) ((*s).h_length));
	popFrame();
}

N_NIMCALL(NU16, getsockname_513221)(int socket) {
	NU16 result;
	struct sockaddr_in name;
	socklen_t namelen;
	NI16 LOC7;
	nimfr("getSockName", "rawsockets.nim")
	result = 0;
	memset((void*)(&name), 0, sizeof(name));
	nimln(324, "rawsockets.nim");
	name.sin_family = AF_INET;
	nimln(327, "rawsockets.nim");
	namelen = ((socklen_t) (((NI)sizeof(struct sockaddr_in))));
	nimln(328, "rawsockets.nim");
	{
		int LOC3;
		NI32 LOC6;
		nimln(329, "rawsockets.nim");
		nimln(328, "rawsockets.nim");
		LOC3 = 0;
		LOC3 = getsockname(socket, ((struct sockaddr*) ((&name))), (&namelen));
		if (!(LOC3 == ((NI32) -1))) goto LA4;
		nimln(330, "rawsockets.nim");
		LOC6 = 0;
		LOC6 = oslasterror_116833();
		raiseoserror_116809(LOC6);
	}
	LA4: ;
	nimln(331, "rawsockets.nim");
	LOC7 = 0;
	LOC7 = ntohs_511807(name.sin_port);
	result = ((NU16) (LOC7));
	popFrame();
	return result;
}

N_NIMCALL(NI, getsockoptint_513413)(int socket, NI level, NI optname) {
	NI result;
	int res;
	socklen_t size;
	nimfr("getSockOptInt", "rawsockets.nim")
	result = 0;
	res = 0;
	nimln(337, "rawsockets.nim");
	size = ((socklen_t) 4);
	nimln(338, "rawsockets.nim");
	{
		int LOC3;
		NI32 LOC6;
		nimln(339, "rawsockets.nim");
		nimln(338, "rawsockets.nim");
		LOC3 = 0;
		LOC3 = getsockopt(socket, ((int) (level)), ((int) (optname)), ((void*) ((&res))), (&size));
		if (!(LOC3 < ((NI32) 0))) goto LA4;
		nimln(340, "rawsockets.nim");
		LOC6 = 0;
		LOC6 = oslasterror_116833();
		raiseoserror_116809(LOC6);
	}
	LA4: ;
	nimln(341, "rawsockets.nim");
	result = ((NI) (res));
	popFrame();
	return result;
}

N_NIMCALL(void, setsockoptint_513433)(int socket, NI level, NI optname, NI optval) {
	int value;
	nimfr("setSockOptInt", "rawsockets.nim")
	nimln(346, "rawsockets.nim");
	value = ((int) (optval));
	nimln(347, "rawsockets.nim");
	{
		int LOC3;
		NI32 LOC6;
		nimln(348, "rawsockets.nim");
		nimln(347, "rawsockets.nim");
		LOC3 = 0;
		LOC3 = setsockopt(socket, ((int) (level)), ((int) (optname)), ((void*) ((&value))), ((socklen_t) 4));
		if (!(LOC3 < ((NI32) 0))) goto LA4;
		nimln(349, "rawsockets.nim");
		LOC6 = 0;
		LOC6 = oslasterror_116833();
		raiseoserror_116809(LOC6);
	}
	LA4: ;
	popFrame();
}

N_NIMCALL(void, setblocking_513450)(int s, NIM_BOOL blocking) {
	NI x;
	int LOC1;
	nimfr("setBlocking", "rawsockets.nim")
	nimln(360, "rawsockets.nim");
	LOC1 = 0;
	LOC1 = fcntl(s, F_GETFL, ((NI) 0));
	x = ((NI) (LOC1));
	nimln(361, "rawsockets.nim");
	{
		NI32 LOC6;
		if (!(x == ((NI) -1))) goto LA4;
		nimln(362, "rawsockets.nim");
		LOC6 = 0;
		LOC6 = oslasterror_116833();
		raiseoserror_116809(LOC6);
	}
	goto LA2;
	LA4: ;
	{
		NI mode;
		nimln(364, "rawsockets.nim");
		{
			if (!blocking) goto LA10;
			mode = (NI)(x & ((NI) ((NI32)((NU32) ~(O_NONBLOCK)))));
		}
		goto LA8;
		LA10: ;
		{
			mode = (NI)(x | ((NI) (O_NONBLOCK)));
		}
		LA8: ;
		nimln(365, "rawsockets.nim");
		{
			int LOC15;
			NI32 LOC18;
			LOC15 = 0;
			LOC15 = fcntl(s, F_SETFL, mode);
			if (!(LOC15 == ((NI32) -1))) goto LA16;
			nimln(366, "rawsockets.nim");
			LOC18 = 0;
			LOC18 = oslasterror_116833();
			raiseoserror_116809(LOC18);
		}
		LA16: ;
	}
	LA2: ;
	popFrame();
}

static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
{	result = 0;
	{
		if (!(b == ((NI) 0))) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == ((NI) (-2147483647 -1)));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == ((NI) -1));
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();
	}
	LA9: ;
	result = (NI)(a / b);
	goto BeforeRet;
	}BeforeRet: ;
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

N_NIMCALL(struct timeval, timevalfrommilliseconds_513628)(NI timeout) {
	struct timeval result;
	nimfr("timeValFromMilliseconds", "rawsockets.nim")
	memset((void*)(&result), 0, sizeof(result));
	nimln(369, "rawsockets.nim");
	{
		NI seconds;
		NI TMP10618;
		NI TMP10619;
		NI TMP10620;
		NI TMP10621;
		if (!!((timeout == ((NI) -1)))) goto LA3;
		nimln(370, "rawsockets.nim");
		TMP10618 = divInt(timeout, ((NI) 1000));
		seconds = (NI)(TMP10618);
		nimln(371, "rawsockets.nim");
		result.tv_sec = ((NI) (((NI32) (seconds))));
		nimln(372, "rawsockets.nim");
		TMP10619 = mulInt(seconds, ((NI) 1000));
		TMP10620 = subInt(timeout, (NI)(TMP10619));
		TMP10621 = mulInt((NI)(TMP10620), ((NI) 1000));
		result.tv_usec = ((NI) (((NI32) ((NI)(TMP10621)))));
	}
	LA3: ;
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

N_NIMCALL(void, createfdset_513645)(fd_set* fd, TY513649* s, NI* m) {
	nimfr("createFdSet", "rawsockets.nim")
	nimln(375, "rawsockets.nim");
	FD_ZERO(fd);
	{
		int i_513811;
		NI i_513828;
		NI L_513830;
		i_513811 = 0;
		nimln(3084, "system.nim");
		i_513828 = ((NI) 0);
		nimln(3085, "system.nim");
		L_513830 = (s ? s->Sup.len : 0);
		{
			nimln(3086, "system.nim");
			while (1) {
				NI TMP10622;
				if (!(i_513828 < L_513830)) goto LA3;
				nimln(3087, "system.nim");
				if ((NU)(i_513828) >= (NU)(s->Sup.len)) raiseIndexError();
				i_513811 = s->data[i_513828];
				nimln(377, "rawsockets.nim");
				(*m) = (((*m) >= ((NI) (i_513811))) ? (*m) : ((NI) (i_513811)));
				nimln(378, "rawsockets.nim");
				FD_SET(i_513811, fd);
				nimln(3088, "system.nim");
				TMP10622 = addInt(i_513828, ((NI) 1));
				i_513828 = (NI)(TMP10622);
				nimln(3089, "system.nim");
				{
					if (!!(((s ? s->Sup.len : 0) == L_513830))) goto LA6;
					failedassertimpl_87017(((NimStringDesc*) &TMP10623));
				}
				LA6: ;
			} LA3: ;
		}
	}
	popFrame();
}

N_NIMCALL(void, prunesocketset_513846)(TY513649** s, fd_set* fd) {
	NI i;
	NI L;
	nimfr("pruneSocketSet", "rawsockets.nim")
	nimln(381, "rawsockets.nim");
	i = ((NI) 0);
	nimln(382, "rawsockets.nim");
	L = ((*s) ? (*s)->Sup.len : 0);
	{
		nimln(383, "rawsockets.nim");
		while (1) {
			if (!(i < L)) goto LA2;
			nimln(384, "rawsockets.nim");
			{
				int LOC5;
				NI TMP10624;
				NI TMP10625;
				if ((NU)(i) >= (NU)((*s)->Sup.len)) raiseIndexError();
				LOC5 = 0;
				LOC5 = FD_ISSET((*s)->data[i], fd);
				if (!(LOC5 == ((NI32) 0))) goto LA6;
				nimln(385, "rawsockets.nim");
				if ((NU)(i) >= (NU)((*s)->Sup.len)) raiseIndexError();
				TMP10624 = subInt(L, ((NI) 1));
				if ((NU)((NI)(TMP10624)) >= (NU)((*s)->Sup.len)) raiseIndexError();
				(*s)->data[i] = (*s)->data[(NI)(TMP10624)];
				nimln(386, "rawsockets.nim");
				TMP10625 = subInt(L, ((NI) 1));
				L = (NI)(TMP10625);
			}
			goto LA3;
			LA6: ;
			{
				NI TMP10626;
				nimln(388, "rawsockets.nim");
				TMP10626 = addInt(i, ((NI) 1));
				i = (NI)(TMP10626);
			}
			LA3: ;
		} LA2: ;
	}
	nimln(389, "rawsockets.nim");
	(*s) = (TY513649*) setLengthSeq(&((*s))->Sup, sizeof(int), ((NI)chckRange(L, ((NI) 0), ((NI) 2147483647))));
	popFrame();
}

N_NIMCALL(NI, select_513913)(TY513649** readfds, NI timeout) {
	NI result;
	struct timeval tv;
	fd_set rd;
	NI m;
	nimfr("select", "rawsockets.nim")
	result = 0;
	nimln(399, "rawsockets.nim");
	tv = timevalfrommilliseconds_513628(timeout);
	memset((void*)(&rd), 0, sizeof(rd));
	nimln(402, "rawsockets.nim");
	m = ((NI) 0);
	nimln(403, "rawsockets.nim");
	createfdset_513645((&rd), (*readfds), (&m));
	nimln(405, "rawsockets.nim");
	{
		NI TMP10627;
		int LOC5;
		if (!!((timeout == ((NI) -1)))) goto LA3;
		nimln(406, "rawsockets.nim");
		TMP10627 = addInt(m, ((NI) 1));
		LOC5 = 0;
		LOC5 = select(((int) ((NI)(TMP10627))), (&rd), NIM_NIL, NIM_NIL, (&tv));
		result = ((NI) (LOC5));
	}
	goto LA1;
	LA3: ;
	{
		NI TMP10628;
		int LOC7;
		nimln(408, "rawsockets.nim");
		TMP10628 = addInt(m, ((NI) 1));
		LOC7 = 0;
		LOC7 = select(((int) ((NI)(TMP10628))), (&rd), NIM_NIL, NIM_NIL, NIM_NIL);
		result = ((NI) (LOC7));
	}
	LA1: ;
	nimln(410, "rawsockets.nim");
	prunesocketset_513846(readfds, (&rd));
	popFrame();
	return result;
}

N_NIMCALL(NI, selectwrite_513972)(TY513649** writefds, NI timeout) {
	NI result;
	struct timeval tv;
	fd_set wr;
	NI m;
	nimfr("selectWrite", "rawsockets.nim")
	result = 0;
	nimln(421, "rawsockets.nim");
	tv = timevalfrommilliseconds_513628(timeout);
	memset((void*)(&wr), 0, sizeof(wr));
	nimln(424, "rawsockets.nim");
	m = ((NI) 0);
	nimln(425, "rawsockets.nim");
	createfdset_513645((&wr), (*writefds), (&m));
	nimln(427, "rawsockets.nim");
	{
		NI TMP10629;
		int LOC5;
		if (!!((timeout == ((NI) -1)))) goto LA3;
		nimln(428, "rawsockets.nim");
		TMP10629 = addInt(m, ((NI) 1));
		LOC5 = 0;
		LOC5 = select(((int) ((NI)(TMP10629))), NIM_NIL, (&wr), NIM_NIL, (&tv));
		result = ((NI) (LOC5));
	}
	goto LA1;
	LA3: ;
	{
		NI TMP10630;
		int LOC7;
		nimln(430, "rawsockets.nim");
		TMP10630 = addInt(m, ((NI) 1));
		LOC7 = 0;
		LOC7 = select(((int) ((NI)(TMP10630))), NIM_NIL, (&wr), NIM_NIL, NIM_NIL);
		result = ((NI) (LOC7));
	}
	LA1: ;
	nimln(432, "rawsockets.nim");
	prunesocketset_513846(writefds, (&wr));
	popFrame();
	return result;
}
N_NIMCALL(void, TMP10664)(void* p, NI op) {
	TY513649* a;
	NI LOC1;
	a = (TY513649*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
NIM_EXTERNC N_NOINLINE(void, stdlib_rawsocketsInit)(void) {
	nimfr("rawsockets", "rawsockets.nim")
	nimln(100, "rawsockets.nim");
	osinvalidsocket_510651 = ((int) -1);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_rawsocketsDatInit)(void) {
NTI513649.size = sizeof(TY513649*);
NTI513649.kind = 24;
NTI513649.base = (&NTI5811);
NTI513649.flags = 2;
NTI513649.marker = TMP10664;
}

