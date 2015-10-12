/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include "winsock2.h"
typedef struct Tguid107614 Tguid107614;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct Tfiletime105248 Tfiletime105248;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tsecurityattributes105242 Tsecurityattributes105242;
typedef struct Tstartupinfo105244 Tstartupinfo105244;
typedef struct Tprocessinformation105246 Tprocessinformation105246;
typedef struct Twin32finddata106219 Twin32finddata106219;
typedef struct Addrinfo106868 Addrinfo106868;
typedef struct Servent106860 Servent106860;
typedef struct Hostent106862 Hostent106862;
typedef struct Tfdset106864 Tfdset106864;
typedef struct Timeval106866 Timeval106866;
typedef struct Tbyhandlefileinformation105250 Tbyhandlefileinformation105250;
typedef NI8 TY107627[8];
struct  Tguid107614  {
NI32 D1;
NI16 D2;
NI16 D3;
TY107627 D4;
};
typedef NI8 TY107712[8];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_STDCALL_PTR(void, TY106625) (Tfiletime105248* lpsystemtimeasfiletime);
struct  Tfiletime105248  {
NI32 dwlowdatetime;
NI32 dwhighdatetime;
};
typedef N_STDCALL_PTR(NI16*, TY106435) (void);
typedef N_STDCALL_PTR(NI32, TY106437) (NI16* para1);
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
typedef N_STDCALL_PTR(void, TY106632) (NI32 dwmilliseconds);
typedef N_STDCALL_PTR(NI32, TY105431) (NI hfile, void* Buffer, NI32 nnumberofbytestoread, NI32* lpnumberofbytesread, void* lpoverlapped);
typedef N_STDCALL_PTR(NI32, TY105663) (NI32 dwflags, void* lpsource, NI32 dwmessageid, NI32 dwlanguageid, void* lpbuffer, NI32 nsize, void* Arguments);
typedef N_STDCALL_PTR(void, TY105805) (void* p);
typedef N_STDCALL_PTR(NI32, TY105658) (void);
typedef N_STDCALL_PTR(NI32, TY105442) (NI hfile, void* Buffer, NI32 nnumberofbytestowrite, NI32* lpnumberofbyteswritten, void* lpoverlapped);
typedef N_STDCALL_PTR(NI32, TY105453) (NI* hreadpipe, NI* hwritepipe, Tsecurityattributes105242* lppipeattributes, NI32 nsize);
typedef N_STDCALL_PTR(NI32, TY105425) (NI hobject);
typedef N_STDCALL_PTR(NI, TY105639) (NI32 nstdhandle);
typedef N_STDCALL_PTR(NI32, TY105464) (NI16* lpapplicationname, NI16* lpcommandline, Tsecurityattributes105242* lpprocessattributes, Tsecurityattributes105242* lpthreadattributes, NI32 binherithandles, NI32 dwcreationflags, NI16* lpenvironment, NI16* lpcurrentdirectory, Tstartupinfo105244* lpstartupinfo, Tprocessinformation105246* lpprocessinformation);
typedef N_STDCALL_PTR(NI32, TY105605) (NI hthread);
typedef N_STDCALL_PTR(NI32, TY105611) (NI hthread);
typedef N_STDCALL_PTR(NI32, TY105617) (NI hhandle, NI32 dwmilliseconds);
typedef N_STDCALL_PTR(NI32, TY105624) (NI hprocess, NI uexitcode);
typedef N_STDCALL_PTR(NI32, TY105631) (NI hprocess, NI32* lpexitcode);
typedef N_STDCALL_PTR(NI32, TY107281) (NI32 ncount, NI* lphandles, NI32 bwaitall, NI32 dwmilliseconds);
typedef N_STDCALL_PTR(NI32, TY105829) (NI handle, NI16* buf, NI32 size);
typedef N_STDCALL_PTR(NI32, TY106411) (NI16* lpfilename, NI32 nbufferlength, NI16* lpbuffer, NI16** lpfilepart);
typedef N_STDCALL_PTR(NI, TY106240) (NI16* lpfilename, Twin32finddata106219* lpfindfiledata);
typedef N_STDCALL_PTR(NI32, TY106245) (NI hfindfile, Twin32finddata106219* lpfindfiledata);
typedef N_STDCALL_PTR(void, TY106405) (NI hfindfile);
typedef N_STDCALL_PTR(NI32, TY105818) (NI16* pathname, void* security);
typedef N_STDCALL_PTR(NI32, TY106418) (NI16* lpfilename);
typedef N_STDCALL_PTR(NI16*, TY106440) (void);
typedef N_STDCALL_PTR(NI32, TY105825) (NI16* lpname, NI16* lpvalue);
typedef N_STDCALL_PTR(NI32, TY105811) (NI32 nbufferlength, NI16* lpbuffer);
typedef N_STDCALL_PTR(void*, TY107429) (NI hfilemappingobject, NI32 dwdesiredaccess, NI32 dwfileoffsethigh, NI32 dwfileoffsetlow, NI32 dwnumberofbytestomap, void* lpbaseaddress);
typedef N_STDCALL_PTR(NI32, TY107602) (void* lpbaseaddress);
typedef N_STDCALL_PTR(NI, TY107318) (NI16* lpfilename, NI32 dwdesiredaccess, NI32 dwsharemode, void* lpsecurityattributes, NI32 dwcreationdisposition, NI32 dwflagsandattributes, NI htemplatefile);
typedef N_STDCALL_PTR(NI32, TY107411) (NI hfile, NI32 ldistancetomove, NI32* lpdistancetomovehigh, NI32 dwmovemethod);
typedef N_STDCALL_PTR(NI32, TY107405) (NI hfile);
typedef N_STDCALL_PTR(NI, TY107440) (NI hfile, void* lpfilemappingattributes, NI32 flprotect, NI32 dwmaximumsizehigh, NI32 dwmaximumsizelow, void* lpname);
typedef N_STDCALL_PTR(NI32, TY107421) (NI hfile, NI32* lpfilesizehigh);
typedef N_STDCALL_PTR(NI, TY107024) (int af, int typ, int protocol);
typedef N_STDCALL_PTR(int, TY107032) (NI s);
typedef N_STDCALL_PTR(int, TY107048) (NI s, SOCKADDR* name, unsigned int namelen);
typedef N_STDCALL_PTR(int, TY107097) (NI s, int backlog);
typedef N_STDCALL_PTR(int, TY107244) (NCSTRING nodename, NCSTRING servname, Addrinfo106868* hints, Addrinfo106868** res);
typedef N_STDCALL_PTR(void, TY107256) (Addrinfo106868* ai);
typedef N_STDCALL_PTR(Servent106860*, TY106991) (NCSTRING name, NCSTRING proto);
typedef N_STDCALL_PTR(Servent106860*, TY106999) (int port, NCSTRING proto);
typedef N_STDCALL_PTR(NI32, TY107179) (NCSTRING cp);
typedef N_STDCALL_PTR(Hostent106862*, TY107007) (IN_ADDR* ip, unsigned int len, int thetype);
typedef N_STDCALL_PTR(Hostent106862*, TY107017) (NCSTRING name);
typedef N_STDCALL_PTR(int, TY107066) (NI s, SOCKADDR* name, unsigned int* namelen);
typedef N_STDCALL_PTR(int, TY107076) (NI s, int level, int optname, void* optval, unsigned int* optlen);
typedef N_STDCALL_PTR(int, TY107087) (NI s, int level, int optname, void* optval, unsigned int optlen);
typedef NI TY106915[64];
struct  Tfdset106864  {
int fdcount;
TY106915 fdarray;
};
typedef N_STDCALL_PTR(NIM_BOOL, TY107185) (NI s, Tfdset106864* set);
typedef N_STDCALL_PTR(int, TY107126) (int nfds, Tfdset106864* readfds, Tfdset106864* writefds, Tfdset106864* exceptfds, Timeval106866* timeout);
typedef N_STDCALL_PTR(int, TY107236) (NI16 wversionrequired, WSADATA* Wsdata);
typedef N_STDCALL_PTR(int, TY107138) (NI s, void* buf, int len, int flags);
typedef N_STDCALL_PTR(NI, TY107038) (NI s, SOCKADDR* a, unsigned int* addrlen);
typedef N_STDCALL_PTR(NCSTRING, TY107263) (IN_ADDR i);
typedef N_STDCALL_PTR(int, TY107104) (NI s, void* buf, int len, int flags);
typedef N_STDCALL_PTR(NI32, TY106805) (NI hfile, Tbyhandlefileinformation105250* lpfileinformation);
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tsecurityattributes105242  {
NI32 nlength;
void* lpsecuritydescriptor;
NI32 binherithandle;
};
struct  Tstartupinfo105244  {
NI32 cb;
NCSTRING lpreserved;
NCSTRING lpdesktop;
NCSTRING lptitle;
NI32 dwx;
NI32 dwy;
NI32 dwxsize;
NI32 dwysize;
NI32 dwxcountchars;
NI32 dwycountchars;
NI32 dwfillattribute;
NI32 dwflags;
NI16 wshowwindow;
NI16 cbreserved2;
void* lpreserved2;
NI hstdinput;
NI hstdoutput;
NI hstderror;
};
struct  Tprocessinformation105246  {
NI hprocess;
NI hthread;
NI32 dwprocessid;
NI32 dwthreadid;
};
typedef NI16 TY106228[260];
typedef NI16 TY106232[14];
struct  Twin32finddata106219  {
NI32 dwfileattributes;
Tfiletime105248 ftcreationtime;
Tfiletime105248 ftlastaccesstime;
Tfiletime105248 ftlastwritetime;
NI32 nfilesizehigh;
NI32 nfilesizelow;
NI32 dwreserved0;
NI32 dwreserved1;
TY106228 cfilename;
TY106232 calternatefilename;
};
typedef NIM_CHAR TY106883[14];
struct  Addrinfo106868  {
int aiflags;
int aifamily;
int aisocktype;
int aiprotocol;
NI aiaddrlen;
NCSTRING aicanonname;
SOCKADDR* aiaddr;
Addrinfo106868* ainext;
};
struct  Servent106860  {
NCSTRING sname;
NCSTRING* saliases;
NCSTRING sproto;
NI16 sport;
};
struct  Hostent106862  {
NCSTRING hname;
NCSTRING* haliases;
NI16 haddrtype;
NI16 hlength;
NCSTRING* haddrlist;
};
struct  Timeval106866  {
NI32 tvsec;
NI32 tvusec;
};
typedef NIM_CHAR TY106873[257];
typedef NIM_CHAR TY106876[129];
struct  Tbyhandlefileinformation105250  {
NI32 dwfileattributes;
Tfiletime105248 ftcreationtime;
Tfiletime105248 ftlastaccesstime;
Tfiletime105248 ftlastwritetime;
NI32 dwvolumeserialnumber;
NI32 nfilesizehigh;
NI32 nfilesizelow;
NI32 nnumberoflinks;
NI32 nfileindexhigh;
NI32 nfileindexlow;
};
N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_NOINLINE(void, nimLoadLibraryError)(NimStringDesc* path);
N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
NIM_CONST TY107712 TMP153 = {((NI8) -114),
((NI8) -23),
((NI8) 118),
((NI8) -27),
((NI8) -116),
((NI8) 116),
((NI8) 6),
((NI8) 62)}
;
NIM_CONST TY107712 TMP154 = {((NI8) -107),
((NI8) -54),
((NI8) 0),
((NI8) -128),
((NI8) 95),
((NI8) 72),
((NI8) -95),
((NI8) -110)}
;
STRING_LITERAL(TMP191, "kernel32", 8);
STRING_LITERAL(TMP192, "kernel32", 8);
STRING_LITERAL(TMP10598, "Ws2_32.dll", 10);
STRING_LITERAL(TMP10599, "Ws2_32.dll", 10);
Tguid107614 Wsaidconnectex_107714;
Tguid107614 Wsaidacceptex_107718;
Tguid107614 Wsaidgetacceptexsockaddrs_107722;
static void* TMP190;
TY106625 Dl_106624;
extern TFrame* frameptr_17042;
TY106435 Dl_106434;
TY106437 Dl_106436;
TNimType NTI105222; /* THandle */
TY106632 Dl_106631;
TY105431 Dl_105430;
TY105663 Dl_105662;
TY105805 Dl_105804;
TY105658 Dl_105657;
TY105442 Dl_105441;
TY105453 Dl_105452;
TY105425 Dl_105424;
TY105639 Dl_105638;
TY105464 Dl_105463;
TY105605 Dl_105604;
TY105611 Dl_105610;
TY105617 Dl_105616;
TY105624 Dl_105623;
TY105631 Dl_105630;
TY107281 Dl_107280;
TY105829 Dl_105828;
TY106411 Dl_106410;
TY106240 Dl_106239;
TY106245 Dl_106244;
TY106405 Dl_106404;
TY105818 Dl_105817;
TY106418 Dl_106417;
TY106440 Dl_106439;
TY105825 Dl_105824;
TY105811 Dl_105810;
TY107429 Dl_107428;
TY107602 Dl_107601;
TY107318 Dl_107317;
TY107411 Dl_107410;
TY107405 Dl_107404;
TY107440 Dl_107439;
TY107421 Dl_107420;
static void* TMP10597;
TY107024 Dl_107023;
TY107032 Dl_107031;
TY107048 Dl_107047;
TY107097 Dl_107096;
TY107244 Dl_107243;
TY107256 Dl_107255;
TY106991 Dl_106990;
TY106999 Dl_106998;
TY107179 Dl_107178;
TY107007 Dl_107006;
TY107017 Dl_107016;
TY107066 Dl_107065;
TY107076 Dl_107075;
TY107087 Dl_107086;
TY107185 Dl_107184;
TY107126 Dl_107125;
TY107236 Dl_107235;
TY107138 Dl_107137;
TY107038 Dl_107037;
TY107263 Dl_107262;
TY107104 Dl_107103;
TY106805 Dl_106804;

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

N_NIMCALL(NI64, rdfiletime_106604)(Tfiletime105248 f) {
	NI64 result;
	nimfr("rdFileTime", "winlean.nim")
	result = 0;
	nimln(330, "winlean.nim");
	result = (NI64)(((NI64)(NU64)(NU32)(f.dwlowdatetime)) | (NI64)((NU64)(((NI64)(NU64)(NU32)(f.dwhighdatetime))) << (NU64)(IL64(32))));
	popFrame();
	return result;
}

N_NIMCALL(void, Fdzero_107225)(Tfdset106864* s) {
	nimfr("FD_ZERO", "winlean.nim")
	nimln(555, "winlean.nim");
	(*s).fdcount = ((int) 0);
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

N_NIMCALL(void, Fdset_107204)(NI socket, Tfdset106864* s) {
	nimfr("FD_SET", "winlean.nim")
	nimln(550, "winlean.nim");
	{
		NI TMP10605;
		if (!((*s).fdcount < ((NI32) 64))) goto LA3;
		nimln(551, "winlean.nim");
		if ((NU)(((NI) ((*s).fdcount))) > (NU)(63)) raiseIndexError();
		(*s).fdarray[(((NI) ((*s).fdcount)))- 0] = socket;
		nimln(552, "winlean.nim");
		TMP10605 = addInt((*s).fdcount, ((NI) 1));
		if (TMP10605 < (-2147483647 -1) || TMP10605 > 2147483647) raiseOverflow();
		(*s).fdcount = (int)(TMP10605);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(int, Fdisset_107192)(NI socket, Tfdset106864* set) {
	int result;
	nimfr("FD_ISSET", "winlean.nim")
	result = 0;
	nimln(547, "winlean.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = Dl_107184(socket, set);
		if (!LOC3) goto LA4;
		result = ((NI32) 1);
	}
	goto LA1;
	LA4: ;
	{
		result = ((NI32) 0);
	}
	LA1: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_winleanInit)(void) {
	Tguid107614 LOC1;
	Tguid107614 LOC2;
	Tguid107614 LOC3;
	nimfr("winlean", "winlean.nim")
	nimln(720, "winlean.nim");
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.D1 = ((NI32) 631375801);
	LOC1.D2 = ((NI16) -8717);
	LOC1.D3 = ((NI16) 18016);
	memcpy((void*)LOC1.D4, (NIM_CONST void*)TMP153, sizeof(LOC1.D4));
	Wsaidconnectex_107714 = LOC1;
	nimln(722, "winlean.nim");
	memset((void*)(&LOC2), 0, sizeof(LOC2));
	LOC2.D1 = ((NI32) -1254720015);
	LOC2.D2 = ((NI16) -13396);
	LOC2.D3 = ((NI16) 4559);
	memcpy((void*)LOC2.D4, (NIM_CONST void*)TMP154, sizeof(LOC2.D4));
	Wsaidacceptex_107718 = LOC2;
	nimln(724, "winlean.nim");
	memset((void*)(&LOC3), 0, sizeof(LOC3));
	LOC3.D1 = ((NI32) -1254720014);
	LOC3.D2 = ((NI16) -13396);
	LOC3.D3 = ((NI16) 4559);
	memcpy((void*)LOC3.D4, (NIM_CONST void*)TMP154, sizeof(LOC3.D4));
	Wsaidgetacceptexsockaddrs_107722 = LOC3;
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_winleanDatInit)(void) {
NTI105222.size = sizeof(NI);
NTI105222.kind = 31;
NTI105222.base = 0;
NTI105222.flags = 3;
if (!((TMP190 = nimLoadLibrary((NimStringDesc*) &TMP191))
)) nimLoadLibraryError((NimStringDesc*) &TMP192);
	Dl_106624 = (TY106625) nimGetProcAddr(TMP190, "GetSystemTimeAsFileTime");
	Dl_106434 = (TY106435) nimGetProcAddr(TMP190, "GetEnvironmentStringsW");
	Dl_106436 = (TY106437) nimGetProcAddr(TMP190, "FreeEnvironmentStringsW");
	Dl_106631 = (TY106632) nimGetProcAddr(TMP190, "Sleep");
	Dl_105430 = (TY105431) nimGetProcAddr(TMP190, "ReadFile");
	Dl_105662 = (TY105663) nimGetProcAddr(TMP190, "FormatMessageW");
	Dl_105804 = (TY105805) nimGetProcAddr(TMP190, "LocalFree");
	Dl_105657 = (TY105658) nimGetProcAddr(TMP190, "GetLastError");
	Dl_105441 = (TY105442) nimGetProcAddr(TMP190, "WriteFile");
	Dl_105452 = (TY105453) nimGetProcAddr(TMP190, "CreatePipe");
	Dl_105424 = (TY105425) nimGetProcAddr(TMP190, "CloseHandle");
	Dl_105638 = (TY105639) nimGetProcAddr(TMP190, "GetStdHandle");
	Dl_105463 = (TY105464) nimGetProcAddr(TMP190, "CreateProcessW");
	Dl_105604 = (TY105605) nimGetProcAddr(TMP190, "SuspendThread");
	Dl_105610 = (TY105611) nimGetProcAddr(TMP190, "ResumeThread");
	Dl_105616 = (TY105617) nimGetProcAddr(TMP190, "WaitForSingleObject");
	Dl_105623 = (TY105624) nimGetProcAddr(TMP190, "TerminateProcess");
	Dl_105630 = (TY105631) nimGetProcAddr(TMP190, "GetExitCodeProcess");
	Dl_107280 = (TY107281) nimGetProcAddr(TMP190, "WaitForMultipleObjects");
	Dl_105828 = (TY105829) nimGetProcAddr(TMP190, "GetModuleFileNameW");
	Dl_106410 = (TY106411) nimGetProcAddr(TMP190, "GetFullPathNameW");
	Dl_106239 = (TY106240) nimGetProcAddr(TMP190, "FindFirstFileW");
	Dl_106244 = (TY106245) nimGetProcAddr(TMP190, "FindNextFileW");
	Dl_106404 = (TY106405) nimGetProcAddr(TMP190, "FindClose");
	Dl_105817 = (TY105818) nimGetProcAddr(TMP190, "CreateDirectoryW");
	Dl_106417 = (TY106418) nimGetProcAddr(TMP190, "GetFileAttributesW");
	Dl_106439 = (TY106440) nimGetProcAddr(TMP190, "GetCommandLineW");
	Dl_105824 = (TY105825) nimGetProcAddr(TMP190, "SetEnvironmentVariableW");
	Dl_105810 = (TY105811) nimGetProcAddr(TMP190, "GetCurrentDirectoryW");
	Dl_107428 = (TY107429) nimGetProcAddr(TMP190, "MapViewOfFileEx");
	Dl_107601 = (TY107602) nimGetProcAddr(TMP190, "UnmapViewOfFile");
	Dl_107317 = (TY107318) nimGetProcAddr(TMP190, "CreateFileW");
	Dl_107410 = (TY107411) nimGetProcAddr(TMP190, "SetFilePointer");
	Dl_107404 = (TY107405) nimGetProcAddr(TMP190, "SetEndOfFile");
	Dl_107439 = (TY107440) nimGetProcAddr(TMP190, "CreateFileMappingW");
	Dl_107420 = (TY107421) nimGetProcAddr(TMP190, "GetFileSize");
if (!((TMP10597 = nimLoadLibrary((NimStringDesc*) &TMP10598))
)) nimLoadLibraryError((NimStringDesc*) &TMP10599);
	Dl_107023 = (TY107024) nimGetProcAddr(TMP10597, "socket");
	Dl_107031 = (TY107032) nimGetProcAddr(TMP10597, "closesocket");
	Dl_107047 = (TY107048) nimGetProcAddr(TMP10597, "bind");
	Dl_107096 = (TY107097) nimGetProcAddr(TMP10597, "listen");
	Dl_107243 = (TY107244) nimGetProcAddr(TMP10597, "getaddrinfo");
	Dl_107255 = (TY107256) nimGetProcAddr(TMP10597, "freeaddrinfo");
	Dl_106990 = (TY106991) nimGetProcAddr(TMP10597, "getservbyname");
	Dl_106998 = (TY106999) nimGetProcAddr(TMP10597, "getservbyport");
	Dl_107178 = (TY107179) nimGetProcAddr(TMP10597, "inet_addr");
	Dl_107006 = (TY107007) nimGetProcAddr(TMP10597, "gethostbyaddr");
	Dl_107016 = (TY107017) nimGetProcAddr(TMP10597, "gethostbyname");
	Dl_107065 = (TY107066) nimGetProcAddr(TMP10597, "getsockname");
	Dl_107075 = (TY107076) nimGetProcAddr(TMP10597, "getsockopt");
	Dl_107086 = (TY107087) nimGetProcAddr(TMP10597, "setsockopt");
	Dl_107184 = (TY107185) nimGetProcAddr(TMP10597, "__WSAFDIsSet");
	Dl_107125 = (TY107126) nimGetProcAddr(TMP10597, "select");
	Dl_107235 = (TY107236) nimGetProcAddr(TMP10597, "WSAStartup");
	Dl_107137 = (TY107138) nimGetProcAddr(TMP10597, "send");
	Dl_107037 = (TY107038) nimGetProcAddr(TMP10597, "accept");
	Dl_107262 = (TY107263) nimGetProcAddr(TMP10597, "inet_ntoa");
	Dl_107103 = (TY107104) nimGetProcAddr(TMP10597, "recv");
	Dl_106804 = (TY106805) nimGetProcAddr(TMP190, "GetFileInformationByHandle");
}

