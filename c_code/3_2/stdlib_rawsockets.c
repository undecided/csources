/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
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
typedef struct Servent509613 Servent509613;
typedef struct TY13806 TY13806;
typedef struct Hostent509615 Hostent509615;
typedef struct TY512647 TY512647;
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
struct  Servent509613  {
NimStringDesc* name;
TY13806* aliases;
NU16 port;
NimStringDesc* proto;
};
struct  Hostent509615  {
NimStringDesc* name;
TY13806* aliases;
NU8 addrtype;
NI length;
TY13806* addrlist;
};
typedef NIM_CHAR TY107379[256];
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
struct  Tfreecell28030  {
Tfreecell28030* next;
NI zerofield;
};
struct TY13806 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY512647 {
  TGenericSeq Sup;
  int data[SEQ_DECL_SIZE];
};
N_NIMCALL(int, toint_509829)(NU8 domain);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20201)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(int, toint_509835)(NU8 typ);
N_NIMCALL(int, toint_509841)(NU8 p);
N_NIMCALL(int, newrawsocket_510004)(NU8 domain, NU8 typ, NU8 protocol);
N_NIMCALL(int, newrawsocket_510016)(int domain, int typ, int protocol);
N_NIMCALL(void, close_510028)(int socket);
N_NIMCALL(int, bindaddr_510214)(int socket, struct sockaddr* name, socklen_t namelen);
N_NIMCALL(int, listen_510227)(int socket, int backlog);
N_NIMCALL(struct addrinfo*, getaddrinfo_510408)(NimStringDesc* address, NU16 port, NU8 af, NU8 typ, NU8 prot);
N_NIMCALL(NimStringDesc*, HEX24_6401)(NU64 x);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46947*, usrtocell_50446)(void* usr);
static N_INLINE(void, rtladdzct_52004)(Tcell46947* c);
N_NOINLINE(void, addzct_50417)(Tcellseq46963* s, Tcell46947* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(void, dealloc_510621)(struct addrinfo* ai);
N_NIMCALL(NI32, ntohl_510631)(NI32 x);
N_NIMCALL(NI16, ntohs_510807)(NI16 x);
N_NIMCALL(NI32, htonl_511007)(NI32 x);
N_NIMCALL(NI16, htons_511017)(NI16 x);
N_NIMCALL(void, getservbyname_511027)(NimStringDesc* name, NimStringDesc* proto, Servent509613* Result);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(TY13806*, cstringarraytoseq_14043)(NCSTRING* a);
N_NIMCALL(void, getservbyport_511233)(NU16 port, NimStringDesc* proto, Servent509613* Result);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(void, gethostbyaddr_511433)(NimStringDesc* ip, Hostent509615* Result);
N_NIMCALL(void, gethostbyname_511824)(NimStringDesc* name, Hostent509615* Result);
N_NIMCALL(void, raiseoserror_117009)(NI32 errorcode);
N_NIMCALL(NI32, oslasterror_117033)(void);
N_NIMCALL(NU16, getsockname_512221)(int socket);
N_NIMCALL(NI, getsockoptint_512413)(int socket, NI level, NI optname);
N_NIMCALL(void, setsockoptint_512431)(int socket, NI level, NI optname, NI optval);
N_NIMCALL(void, setblocking_512445)(int s, NIM_BOOL blocking);
N_NIMCALL(struct timeval, timevalfrommilliseconds_512628)(NI timeout);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(void, createfdset_512643)(fd_set* fd, TY512647* s, NI* m);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, failedassertimpl_87217)(NimStringDesc* msg);
N_NIMCALL(void, prunesocketset_512846)(TY512647** s, fd_set* fd);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(NI, select_512913)(TY512647** readfds, NI timeout);
N_NIMCALL(NI, selectwrite_512970)(TY512647** writefds, NI timeout);
N_NIMCALL(void, TMP10652)(void* p, NI op);
STRING_LITERAL(TMP10604, "Service not found.", 18);
STRING_LITERAL(TMP10605, "unknown h_addrtype", 18);
STRING_LITERAL(TMP10611, "len(a) == L seq modified while iterating over it", 48);
int osinvalidsocket_509654;
extern TFrame* frameptr_17242;
extern TNimType NTI117012; /* ref OSError */
extern TNimType NTI3433; /* OSError */
extern Tgcheap48816 gch_48844;
extern TNimType NTI5811; /* cint */
TNimType NTI512647; /* seq[SocketHandle] */

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

N_NIMCALL(int, toint_509829)(NU8 domain) {
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

N_NIMCALL(int, toint_509835)(NU8 typ) {
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

N_NIMCALL(int, toint_509841)(NU8 p) {
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

N_NIMCALL(int, newrawsocket_510004)(NU8 domain, NU8 typ, NU8 protocol) {
	int result;
	int LOC1;
	int LOC2;
	int LOC3;
	nimfr("newRawSocket", "rawsockets.nim")
	result = 0;
	nimln(156, "rawsockets.nim");
	nimln(157, "rawsockets.nim");
	LOC1 = 0;
	LOC1 = toint_509829(domain);
	LOC2 = 0;
	LOC2 = toint_509835(typ);
	LOC3 = 0;
	LOC3 = toint_509841(protocol);
	result = socket(LOC1, LOC2, LOC3);
	popFrame();
	return result;
}

N_NIMCALL(int, newrawsocket_510016)(int domain, int typ, int protocol) {
	int result;
	nimfr("newRawSocket", "rawsockets.nim")
	result = 0;
	nimln(160, "rawsockets.nim");
	nimln(164, "rawsockets.nim");
	result = socket(domain, typ, protocol);
	popFrame();
	return result;
}

N_NIMCALL(void, close_510028)(int socket) {
	int LOC1;
	nimfr("close", "rawsockets.nim")
	nimln(171, "rawsockets.nim");
	LOC1 = 0;
	LOC1 = close(socket);
	popFrame();
}

N_NIMCALL(int, bindaddr_510214)(int socket, struct sockaddr* name, socklen_t namelen) {
	int result;
	nimfr("bindAddr", "rawsockets.nim")
	result = 0;
	nimln(176, "rawsockets.nim");
	result = bind(socket, name, namelen);
	popFrame();
	return result;
}

N_NIMCALL(int, listen_510227)(int socket, int backlog) {
	int result;
	nimfr("listen", "rawsockets.nim")
	result = 0;
	nimln(185, "rawsockets.nim");
	result = listen(socket, backlog);
	popFrame();
	return result;
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

N_NIMCALL(struct addrinfo*, getaddrinfo_510408)(NimStringDesc* address, NU16 port, NU8 af, NU8 typ, NU8 prot) {
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
	hints.ai_family = toint_509829(af);
	nimln(195, "rawsockets.nim");
	hints.ai_socktype = toint_509835(typ);
	nimln(196, "rawsockets.nim");
	hints.ai_protocol = toint_509841(prot);
	nimln(197, "rawsockets.nim");
	LOC1 = 0;
	LOC1 = HEX24_6401(port);
	gairesult = getaddrinfo(address->data, LOC1->data, (&hints), &result);
	nimln(198, "rawsockets.nim");
	{
		Oserror3433* e_510603;
		NCSTRING LOC6;
		if (!!((gairesult == ((NI32) 0)))) goto LA4;
		e_510603 = 0;
		nimln(2265, "system.nim");
		e_510603 = (Oserror3433*) newObj((&NTI117012), sizeof(Oserror3433));
		(*e_510603).Sup.Sup.Sup.m_type = (&NTI3433);
		nimln(2266, "system.nim");
		nimln(202, "rawsockets.nim");
		LOC6 = 0;
		LOC6 = gai_strerror(gairesult);
		asgnRefNoCycle((void**) (&(*e_510603).Sup.Sup.message), cstrToNimstr(LOC6));
		raiseException((Exception*)e_510603, "OSError");
	}
	LA4: ;
	popFrame();
	return result;
}

N_NIMCALL(void, dealloc_510621)(struct addrinfo* ai) {
	nimfr("dealloc", "rawsockets.nim")
	nimln(205, "rawsockets.nim");
	freeaddrinfo(ai);
	popFrame();
}

N_NIMCALL(NI32, ntohl_510631)(NI32 x) {
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

N_NIMCALL(NI16, ntohs_510807)(NI16 x) {
	NI16 result;
	nimfr("ntohs", "rawsockets.nim")
	result = 0;
	nimln(222, "rawsockets.nim");
	result = (NI16)((NI16)((NU16)(x) >> (NU16)(((NI16) 8))) | (NI16)((NU16)(x) << (NU16)(((NI16) 8))));
	popFrame();
	return result;
}

N_NIMCALL(NI32, htonl_511007)(NI32 x) {
	NI32 result;
	nimfr("htonl", "rawsockets.nim")
	result = 0;
	nimln(228, "rawsockets.nim");
	result = ntohl_510631(x);
	popFrame();
	return result;
}

N_NIMCALL(NI16, htons_511017)(NI16 x) {
	NI16 result;
	nimfr("htons", "rawsockets.nim")
	result = 0;
	nimln(234, "rawsockets.nim");
	result = ntohs_510807(x);
	popFrame();
	return result;
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

N_NIMCALL(void, getservbyname_511027)(NimStringDesc* name, NimStringDesc* proto, Servent509613* Result) {
	struct servent* s;
	nimfr("getServByName", "rawsockets.nim")
	nimln(245, "rawsockets.nim");
	s = getservbyname(name->data, proto->data);
	nimln(246, "rawsockets.nim");
	{
		Oserror3433* e_511216;
		NimStringDesc* LOC5;
		if (!(s == NIM_NIL)) goto LA3;
		e_511216 = 0;
		nimln(2265, "system.nim");
		e_511216 = (Oserror3433*) newObj((&NTI117012), sizeof(Oserror3433));
		(*e_511216).Sup.Sup.Sup.m_type = (&NTI3433);
		nimln(2266, "system.nim");
		LOC5 = 0;
		LOC5 = (*e_511216).Sup.Sup.message; (*e_511216).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP10604));
		if (LOC5) nimGCunrefNoCycle(LOC5);
		nimln(246, "rawsockets.nim");
		raiseException((Exception*)e_511216, "OSError");
	}
	LA3: ;
	nimln(247, "rawsockets.nim");
	unsureAsgnRef((void**) (&(*Result).name), cstrToNimstr((*s).s_name));
	nimln(248, "rawsockets.nim");
	unsureAsgnRef((void**) (&(*Result).aliases), cstringarraytoseq_14043((*s).s_aliases));
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

N_NIMCALL(void, getservbyport_511233)(NU16 port, NimStringDesc* proto, Servent509613* Result) {
	struct servent* s;
	nimfr("getServByPort", "rawsockets.nim")
	nimln(261, "rawsockets.nim");
	s = getservbyport(((int)chckRange(((NI)(NU)(NU16)(((NI16)chckRange(port, ((NI16) -32768), ((NI16) 32767))))), ((int) (-2147483647 -1)), ((int) 2147483647))), proto->data);
	nimln(262, "rawsockets.nim");
	{
		Oserror3433* e_511416;
		NimStringDesc* LOC5;
		if (!(s == NIM_NIL)) goto LA3;
		e_511416 = 0;
		nimln(2265, "system.nim");
		e_511416 = (Oserror3433*) newObj((&NTI117012), sizeof(Oserror3433));
		(*e_511416).Sup.Sup.Sup.m_type = (&NTI3433);
		nimln(2266, "system.nim");
		LOC5 = 0;
		LOC5 = (*e_511416).Sup.Sup.message; (*e_511416).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP10604));
		if (LOC5) nimGCunrefNoCycle(LOC5);
		nimln(262, "rawsockets.nim");
		raiseException((Exception*)e_511416, "OSError");
	}
	LA3: ;
	nimln(263, "rawsockets.nim");
	unsureAsgnRef((void**) (&(*Result).name), cstrToNimstr((*s).s_name));
	nimln(264, "rawsockets.nim");
	unsureAsgnRef((void**) (&(*Result).aliases), cstringarraytoseq_14043((*s).s_aliases));
	nimln(265, "rawsockets.nim");
	(*Result).port = ((NU16) ((*s).s_port));
	nimln(266, "rawsockets.nim");
	unsureAsgnRef((void**) (&(*Result).proto), cstrToNimstr((*s).s_proto));
	popFrame();
}

N_NIMCALL(void, gethostbyaddr_511433)(NimStringDesc* ip, Hostent509615* Result) {
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
		Oserror3433* e_511617;
		NCSTRING LOC5;
		if (!(s == NIM_NIL)) goto LA3;
		e_511617 = 0;
		nimln(2265, "system.nim");
		e_511617 = (Oserror3433*) newObj((&NTI117012), sizeof(Oserror3433));
		(*e_511617).Sup.Sup.Sup.m_type = (&NTI3433);
		nimln(2266, "system.nim");
		nimln(281, "rawsockets.nim");
		LOC5 = 0;
		LOC5 = hstrerror(h_errno);
		asgnRefNoCycle((void**) (&(*e_511617).Sup.Sup.message), cstrToNimstr(LOC5));
		raiseException((Exception*)e_511617, "OSError");
	}
	LA3: ;
	nimln(283, "rawsockets.nim");
	unsureAsgnRef((void**) (&(*Result).name), cstrToNimstr((*s).h_name));
	nimln(284, "rawsockets.nim");
	unsureAsgnRef((void**) (&(*Result).aliases), cstringarraytoseq_14043((*s).h_aliases));
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
		Oserror3433* e_511803;
		NimStringDesc* LOC14;
		e_511803 = 0;
		nimln(2265, "system.nim");
		e_511803 = (Oserror3433*) newObj((&NTI117012), sizeof(Oserror3433));
		(*e_511803).Sup.Sup.Sup.m_type = (&NTI3433);
		nimln(2266, "system.nim");
		LOC14 = 0;
		LOC14 = (*e_511803).Sup.Sup.message; (*e_511803).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP10605));
		if (LOC14) nimGCunrefNoCycle(LOC14);
		nimln(293, "rawsockets.nim");
		raiseException((Exception*)e_511803, "OSError");
	}
	LA6: ;
	nimln(294, "rawsockets.nim");
	unsureAsgnRef((void**) (&(*Result).addrlist), cstringarraytoseq_14043((*s).h_addr_list));
	nimln(295, "rawsockets.nim");
	(*Result).length = ((NI) ((*s).h_length));
	popFrame();
}

N_NIMCALL(void, gethostbyname_511824)(NimStringDesc* name, Hostent509615* Result) {
	struct hostent* s;
	nimfr("getHostByName", "rawsockets.nim")
	nimln(302, "rawsockets.nim");
	s = gethostbyname(name->data);
	nimln(303, "rawsockets.nim");
	{
		NI32 LOC5;
		if (!(s == NIM_NIL)) goto LA3;
		LOC5 = 0;
		LOC5 = oslasterror_117033();
		raiseoserror_117009(LOC5);
	}
	LA3: ;
	nimln(304, "rawsockets.nim");
	unsureAsgnRef((void**) (&(*Result).name), cstrToNimstr((*s).h_name));
	nimln(305, "rawsockets.nim");
	unsureAsgnRef((void**) (&(*Result).aliases), cstringarraytoseq_14043((*s).h_aliases));
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
		Oserror3433* e_512203;
		NimStringDesc* LOC14;
		e_512203 = 0;
		nimln(2265, "system.nim");
		e_512203 = (Oserror3433*) newObj((&NTI117012), sizeof(Oserror3433));
		(*e_512203).Sup.Sup.Sup.m_type = (&NTI3433);
		nimln(2266, "system.nim");
		LOC14 = 0;
		LOC14 = (*e_512203).Sup.Sup.message; (*e_512203).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP10605));
		if (LOC14) nimGCunrefNoCycle(LOC14);
		nimln(314, "rawsockets.nim");
		raiseException((Exception*)e_512203, "OSError");
	}
	LA6: ;
	nimln(315, "rawsockets.nim");
	unsureAsgnRef((void**) (&(*Result).addrlist), cstringarraytoseq_14043((*s).h_addr_list));
	nimln(316, "rawsockets.nim");
	(*Result).length = ((NI) ((*s).h_length));
	popFrame();
}

N_NIMCALL(NU16, getsockname_512221)(int socket) {
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
		LOC6 = oslasterror_117033();
		raiseoserror_117009(LOC6);
	}
	LA4: ;
	nimln(331, "rawsockets.nim");
	LOC7 = 0;
	LOC7 = ntohs_510807(name.sin_port);
	result = ((NU16) (LOC7));
	popFrame();
	return result;
}

N_NIMCALL(NI, getsockoptint_512413)(int socket, NI level, NI optname) {
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
		LOC3 = getsockopt(socket, ((int)chckRange(level, ((int) (-2147483647 -1)), ((int) 2147483647))), ((int)chckRange(optname, ((int) (-2147483647 -1)), ((int) 2147483647))), ((void*) ((&res))), (&size));
		if (!(LOC3 < ((NI32) 0))) goto LA4;
		nimln(340, "rawsockets.nim");
		LOC6 = 0;
		LOC6 = oslasterror_117033();
		raiseoserror_117009(LOC6);
	}
	LA4: ;
	nimln(341, "rawsockets.nim");
	result = ((NI) (res));
	popFrame();
	return result;
}

N_NIMCALL(void, setsockoptint_512431)(int socket, NI level, NI optname, NI optval) {
	int value;
	nimfr("setSockOptInt", "rawsockets.nim")
	nimln(346, "rawsockets.nim");
	value = ((int)chckRange(optval, ((int) (-2147483647 -1)), ((int) 2147483647)));
	nimln(347, "rawsockets.nim");
	{
		int LOC3;
		NI32 LOC6;
		nimln(348, "rawsockets.nim");
		nimln(347, "rawsockets.nim");
		LOC3 = 0;
		LOC3 = setsockopt(socket, ((int)chckRange(level, ((int) (-2147483647 -1)), ((int) 2147483647))), ((int)chckRange(optname, ((int) (-2147483647 -1)), ((int) 2147483647))), ((void*) ((&value))), ((socklen_t) 4));
		if (!(LOC3 < ((NI32) 0))) goto LA4;
		nimln(349, "rawsockets.nim");
		LOC6 = 0;
		LOC6 = oslasterror_117033();
		raiseoserror_117009(LOC6);
	}
	LA4: ;
	popFrame();
}

N_NIMCALL(void, setblocking_512445)(int s, NIM_BOOL blocking) {
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
		LOC6 = oslasterror_117033();
		raiseoserror_117009(LOC6);
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
			LOC18 = oslasterror_117033();
			raiseoserror_117009(LOC18);
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
		LOC7 = (a == ((NI) (IL64(-9223372036854775807) - IL64(1))));
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

N_NIMCALL(struct timeval, timevalfrommilliseconds_512628)(NI timeout) {
	struct timeval result;
	nimfr("timeValFromMilliseconds", "rawsockets.nim")
	memset((void*)(&result), 0, sizeof(result));
	nimln(369, "rawsockets.nim");
	{
		NI seconds;
		NI TMP10606;
		NI TMP10607;
		NI TMP10608;
		NI TMP10609;
		if (!!((timeout == ((NI) -1)))) goto LA3;
		nimln(370, "rawsockets.nim");
		TMP10606 = divInt(timeout, ((NI) 1000));
		seconds = (NI)(TMP10606);
		nimln(371, "rawsockets.nim");
		result.tv_sec = ((NI) (((NI32)chckRange(seconds, ((NI32) (-2147483647 -1)), ((NI32) 2147483647)))));
		nimln(372, "rawsockets.nim");
		TMP10607 = mulInt(seconds, ((NI) 1000));
		TMP10608 = subInt(timeout, (NI)(TMP10607));
		TMP10609 = mulInt((NI)(TMP10608), ((NI) 1000));
		result.tv_usec = ((NI) (((NI32)chckRange((NI)(TMP10609), ((NI32) (-2147483647 -1)), ((NI32) 2147483647)))));
	}
	LA3: ;
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

N_NIMCALL(void, createfdset_512643)(fd_set* fd, TY512647* s, NI* m) {
	nimfr("createFdSet", "rawsockets.nim")
	nimln(375, "rawsockets.nim");
	FD_ZERO(fd);
	{
		int i_512811;
		NI i_512828;
		NI L_512830;
		i_512811 = 0;
		nimln(3084, "system.nim");
		i_512828 = ((NI) 0);
		nimln(3085, "system.nim");
		L_512830 = (s ? s->Sup.len : 0);
		{
			nimln(3086, "system.nim");
			while (1) {
				NI TMP10610;
				if (!(i_512828 < L_512830)) goto LA3;
				nimln(3087, "system.nim");
				if ((NU)(i_512828) >= (NU)(s->Sup.len)) raiseIndexError();
				i_512811 = s->data[i_512828];
				nimln(377, "rawsockets.nim");
				(*m) = (((*m) >= ((NI) (i_512811))) ? (*m) : ((NI) (i_512811)));
				nimln(378, "rawsockets.nim");
				FD_SET(i_512811, fd);
				nimln(3088, "system.nim");
				TMP10610 = addInt(i_512828, ((NI) 1));
				i_512828 = (NI)(TMP10610);
				nimln(3089, "system.nim");
				{
					if (!!(((s ? s->Sup.len : 0) == L_512830))) goto LA6;
					failedassertimpl_87217(((NimStringDesc*) &TMP10611));
				}
				LA6: ;
			} LA3: ;
		}
	}
	popFrame();
}

N_NIMCALL(void, prunesocketset_512846)(TY512647** s, fd_set* fd) {
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
				NI TMP10612;
				NI TMP10613;
				if ((NU)(i) >= (NU)((*s)->Sup.len)) raiseIndexError();
				LOC5 = 0;
				LOC5 = FD_ISSET((*s)->data[i], fd);
				if (!(LOC5 == ((NI32) 0))) goto LA6;
				nimln(385, "rawsockets.nim");
				if ((NU)(i) >= (NU)((*s)->Sup.len)) raiseIndexError();
				TMP10612 = subInt(L, ((NI) 1));
				if ((NU)((NI)(TMP10612)) >= (NU)((*s)->Sup.len)) raiseIndexError();
				(*s)->data[i] = (*s)->data[(NI)(TMP10612)];
				nimln(386, "rawsockets.nim");
				TMP10613 = subInt(L, ((NI) 1));
				L = (NI)(TMP10613);
			}
			goto LA3;
			LA6: ;
			{
				NI TMP10614;
				nimln(388, "rawsockets.nim");
				TMP10614 = addInt(i, ((NI) 1));
				i = (NI)(TMP10614);
			}
			LA3: ;
		} LA2: ;
	}
	nimln(389, "rawsockets.nim");
	(*s) = (TY512647*) setLengthSeq(&((*s))->Sup, sizeof(int), ((NI)chckRange(L, ((NI) 0), ((NI) IL64(9223372036854775807)))));
	popFrame();
}

N_NIMCALL(NI, select_512913)(TY512647** readfds, NI timeout) {
	NI result;
	struct timeval tv;
	fd_set rd;
	NI m;
	nimfr("select", "rawsockets.nim")
	result = 0;
	nimln(399, "rawsockets.nim");
	tv = timevalfrommilliseconds_512628(timeout);
	memset((void*)(&rd), 0, sizeof(rd));
	nimln(402, "rawsockets.nim");
	m = ((NI) 0);
	nimln(403, "rawsockets.nim");
	createfdset_512643((&rd), (*readfds), (&m));
	nimln(405, "rawsockets.nim");
	{
		NI TMP10615;
		int LOC5;
		if (!!((timeout == ((NI) -1)))) goto LA3;
		nimln(406, "rawsockets.nim");
		TMP10615 = addInt(m, ((NI) 1));
		LOC5 = 0;
		LOC5 = select(((int)chckRange((NI)(TMP10615), ((int) (-2147483647 -1)), ((int) 2147483647))), (&rd), NIM_NIL, NIM_NIL, (&tv));
		result = ((NI) (LOC5));
	}
	goto LA1;
	LA3: ;
	{
		NI TMP10616;
		int LOC7;
		nimln(408, "rawsockets.nim");
		TMP10616 = addInt(m, ((NI) 1));
		LOC7 = 0;
		LOC7 = select(((int)chckRange((NI)(TMP10616), ((int) (-2147483647 -1)), ((int) 2147483647))), (&rd), NIM_NIL, NIM_NIL, NIM_NIL);
		result = ((NI) (LOC7));
	}
	LA1: ;
	nimln(410, "rawsockets.nim");
	prunesocketset_512846(readfds, (&rd));
	popFrame();
	return result;
}

N_NIMCALL(NI, selectwrite_512970)(TY512647** writefds, NI timeout) {
	NI result;
	struct timeval tv;
	fd_set wr;
	NI m;
	nimfr("selectWrite", "rawsockets.nim")
	result = 0;
	nimln(421, "rawsockets.nim");
	tv = timevalfrommilliseconds_512628(timeout);
	memset((void*)(&wr), 0, sizeof(wr));
	nimln(424, "rawsockets.nim");
	m = ((NI) 0);
	nimln(425, "rawsockets.nim");
	createfdset_512643((&wr), (*writefds), (&m));
	nimln(427, "rawsockets.nim");
	{
		NI TMP10617;
		int LOC5;
		if (!!((timeout == ((NI) -1)))) goto LA3;
		nimln(428, "rawsockets.nim");
		TMP10617 = addInt(m, ((NI) 1));
		LOC5 = 0;
		LOC5 = select(((int)chckRange((NI)(TMP10617), ((int) (-2147483647 -1)), ((int) 2147483647))), NIM_NIL, (&wr), NIM_NIL, (&tv));
		result = ((NI) (LOC5));
	}
	goto LA1;
	LA3: ;
	{
		NI TMP10618;
		int LOC7;
		nimln(430, "rawsockets.nim");
		TMP10618 = addInt(m, ((NI) 1));
		LOC7 = 0;
		LOC7 = select(((int)chckRange((NI)(TMP10618), ((int) (-2147483647 -1)), ((int) 2147483647))), NIM_NIL, (&wr), NIM_NIL, NIM_NIL);
		result = ((NI) (LOC7));
	}
	LA1: ;
	nimln(432, "rawsockets.nim");
	prunesocketset_512846(writefds, (&wr));
	popFrame();
	return result;
}
N_NIMCALL(void, TMP10652)(void* p, NI op) {
	TY512647* a;
	NI LOC1;
	a = (TY512647*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
NIM_EXTERNC N_NOINLINE(void, stdlib_rawsocketsInit)(void) {
	nimfr("rawsockets", "rawsockets.nim")
	nimln(100, "rawsockets.nim");
	osinvalidsocket_509654 = ((int) -1);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_rawsocketsDatInit)(void) {
NTI512647.size = sizeof(TY512647*);
NTI512647.kind = 24;
NTI512647.base = (&NTI5811);
NTI512647.flags = 2;
NTI512647.marker = TMP10652;
}

