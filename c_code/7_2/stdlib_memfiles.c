/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <sys/mman.h>

#include <sys/types.h>

#include <string.h>

#include <fcntl.h>

#include <sys/stat.h>

#include <unistd.h>

#include <time.h>
typedef struct Memfile230208 Memfile230208;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Memfile230208  {
void* mem;
NI size;
int handle;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(void*, mapmem_230219)(Memfile230208* m, NU8 mode, NI mappedsize, NI offset);
N_NIMCALL(void, failedassertimpl_87017)(NimStringDesc* msg);
N_NIMCALL(void, raiseoserror_115809)(NI32 errorcode);
N_NIMCALL(NI32, oslasterror_115833)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, unmapmem_230608)(Memfile230208* f, void* p, NI size);
N_NIMCALL(Memfile230208, open_230807)(NimStringDesc* filename, NU8 mode, NI mappedsize, NI offset, NI newfilesize);
N_NIMCALL(void, close_231249)(Memfile230208* f);
STRING_LITERAL(TMP3731, "0 < mappedSize ", 15);
STRING_LITERAL(TMP3732, "newFileSize == -1 or not (mode == fmRead) ", 42);
extern int Mappopulate_109116;
extern TFrame* frameptr_17042;
TNimType NTI230208; /* MemFile */
extern TNimType NTI153; /* pointer */
extern TNimType NTI108; /* int */
extern TNimType NTI5811; /* cint */

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

N_NIMCALL(void*, mapmem_230219)(Memfile230208* m, NU8 mode, NI mappedsize, NI offset) {
	void* result;
	NIM_BOOL readonly;
	int LOC5;
	NI32 LOC11;
	nimfr("mapMem", "memfiles.nim")
	result = 0;
	nimln(41, "memfiles.nim");
	readonly = (mode == ((NU8) 0));
	nimln(53, "memfiles.nim");
	{
		if (!!((((NI) 0) < mappedsize))) goto LA3;
		failedassertimpl_87017(((NimStringDesc*) &TMP3731));
	}
	LA3: ;
	nimln(54, "memfiles.nim");
	LOC5 = 0;
	nimln(57, "memfiles.nim");
	{
		if (!readonly) goto LA8;
		LOC5 = PROT_READ;
	}
	goto LA6;
	LA8: ;
	{
		LOC5 = (NI32)(PROT_READ | PROT_WRITE);
	}
	LA6: ;
	LOC11 = 0;
	nimln(58, "memfiles.nim");
	{
		if (!readonly) goto LA14;
		LOC11 = (NI32)(MAP_PRIVATE | Mappopulate_109116);
	}
	goto LA12;
	LA14: ;
	{
		LOC11 = (NI32)(MAP_SHARED | Mappopulate_109116);
	}
	LA12: ;
	result = mmap(NIM_NIL, mappedsize, LOC5, LOC11, (*m).handle, ((off_t) (offset)));
	nimln(60, "memfiles.nim");
	{
		NI32 LOC21;
		if (!(result == ((void*) (MAP_FAILED)))) goto LA19;
		nimln(61, "memfiles.nim");
		LOC21 = 0;
		LOC21 = oslasterror_115833();
		raiseoserror_115809(LOC21);
	}
	LA19: ;
	popFrame();
	return result;
}

N_NIMCALL(void, unmapmem_230608)(Memfile230208* f, void* p, NI size) {
	nimfr("unmapMem", "memfiles.nim")
	nimln(72, "memfiles.nim");
	{
		int LOC3;
		NI32 LOC6;
		LOC3 = 0;
		LOC3 = munmap(p, size);
		if (!!((LOC3 == ((NI32) 0)))) goto LA4;
		LOC6 = 0;
		LOC6 = oslasterror_115833();
		raiseoserror_115809(LOC6);
	}
	LA4: ;
	popFrame();
}

N_NIMCALL(Memfile230208, open_230807)(NimStringDesc* filename, NU8 mode, NI mappedsize, NI offset, NI newfilesize) {
	Memfile230208 result;
	NIM_BOOL readonly;
	int flags;
	int LOC59;
	NI32 LOC65;
	nimfr("open", "memfiles.nim")
	memset((void*)(&result), 0, sizeof(result));
	nimln(96, "memfiles.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (newfilesize == ((NI) -1));
		if (LOC3) goto LA4;
		LOC3 = !((mode == ((NU8) 0)));
		LA4: ;
		if (!!(LOC3)) goto LA5;
		failedassertimpl_87017(((NimStringDesc*) &TMP3732));
	}
	LA5: ;
	nimln(97, "memfiles.nim");
	readonly = (mode == ((NU8) 0));
	nimln(178, "memfiles.nim");
	{
		if (!readonly) goto LA9;
		flags = O_RDONLY;
	}
	goto LA7;
	LA9: ;
	{
		flags = O_RDWR;
	}
	LA7: ;
	nimln(180, "memfiles.nim");
	{
		NI32 permissionsmode;
		if (!!((newfilesize == ((NI) -1)))) goto LA14;
		nimln(181, "memfiles.nim");
		flags = (NI32)((NI32)(flags | O_CREAT) | O_TRUNC);
		nimln(182, "memfiles.nim");
		permissionsmode = (NI32)(S_IRUSR | S_IWUSR);
		nimln(183, "memfiles.nim");
		result.handle = open(filename->data, flags, permissionsmode);
	}
	goto LA12;
	LA14: ;
	{
		nimln(185, "memfiles.nim");
		result.handle = open(filename->data, flags);
	}
	LA12: ;
	nimln(187, "memfiles.nim");
	{
		NI32 LOC26;
		if (!(result.handle == ((NI32) -1))) goto LA19;
		nimln(100, "memfiles.nim");
		result.mem = NIM_NIL;
		nimln(101, "memfiles.nim");
		result.size = ((NI) 0);
		nimln(175, "memfiles.nim");
		{
			int LOC25;
			if (!!((result.handle == ((NI32) 0)))) goto LA23;
			LOC25 = 0;
			LOC25 = close(result.handle);
		}
		LA23: ;
		nimln(176, "memfiles.nim");
		nimln(190, "memfiles.nim");
		LOC26 = 0;
		LOC26 = oslasterror_115833();
		raiseoserror_115809(LOC26);
	}
	LA19: ;
	nimln(192, "memfiles.nim");
	{
		if (!!((newfilesize == ((NI) -1)))) goto LA29;
		nimln(193, "memfiles.nim");
		{
			int LOC33;
			NI32 LOC41;
			LOC33 = 0;
			LOC33 = ftruncate(result.handle, ((off_t) (newfilesize)));
			if (!(LOC33 == ((NI32) -1))) goto LA34;
			nimln(100, "memfiles.nim");
			result.mem = NIM_NIL;
			nimln(101, "memfiles.nim");
			result.size = ((NI) 0);
			nimln(175, "memfiles.nim");
			{
				int LOC40;
				if (!!((result.handle == ((NI32) 0)))) goto LA38;
				LOC40 = 0;
				LOC40 = close(result.handle);
			}
			LA38: ;
			nimln(176, "memfiles.nim");
			nimln(194, "memfiles.nim");
			LOC41 = 0;
			LOC41 = oslasterror_115833();
			raiseoserror_115809(LOC41);
		}
		LA34: ;
	}
	LA29: ;
	nimln(196, "memfiles.nim");
	{
		if (!!((mappedsize == ((NI) -1)))) goto LA44;
		nimln(197, "memfiles.nim");
		result.size = mappedsize;
	}
	goto LA42;
	LA44: ;
	{
		struct stat stat;
		memset((void*)(&stat), 0, sizeof(stat));
		nimln(200, "memfiles.nim");
		{
			int LOC49;
			LOC49 = 0;
			LOC49 = fstat(result.handle, (&stat));
			if (!!((LOC49 == ((NI32) -1)))) goto LA50;
			nimln(203, "memfiles.nim");
			result.size = ((NI) (stat.st_size));
		}
		goto LA47;
		LA50: ;
		{
			NI32 LOC58;
			nimln(100, "memfiles.nim");
			result.mem = NIM_NIL;
			nimln(101, "memfiles.nim");
			result.size = ((NI) 0);
			nimln(175, "memfiles.nim");
			{
				int LOC57;
				if (!!((result.handle == ((NI32) 0)))) goto LA55;
				LOC57 = 0;
				LOC57 = close(result.handle);
			}
			LA55: ;
			nimln(176, "memfiles.nim");
			nimln(205, "memfiles.nim");
			LOC58 = 0;
			LOC58 = oslasterror_115833();
			raiseoserror_115809(LOC58);
		}
		LA47: ;
	}
	LA42: ;
	nimln(207, "memfiles.nim");
	LOC59 = 0;
	nimln(210, "memfiles.nim");
	{
		if (!readonly) goto LA62;
		LOC59 = PROT_READ;
	}
	goto LA60;
	LA62: ;
	{
		LOC59 = (NI32)(PROT_READ | PROT_WRITE);
	}
	LA60: ;
	LOC65 = 0;
	nimln(211, "memfiles.nim");
	{
		if (!readonly) goto LA68;
		LOC65 = (NI32)(MAP_PRIVATE | Mappopulate_109116);
	}
	goto LA66;
	LA68: ;
	{
		LOC65 = (NI32)(MAP_SHARED | Mappopulate_109116);
	}
	LA66: ;
	result.mem = mmap(NIM_NIL, result.size, LOC59, LOC65, result.handle, ((off_t) (offset)));
	nimln(215, "memfiles.nim");
	{
		NI32 LOC80;
		if (!(result.mem == ((void*) (MAP_FAILED)))) goto LA73;
		nimln(100, "memfiles.nim");
		result.mem = NIM_NIL;
		nimln(101, "memfiles.nim");
		result.size = ((NI) 0);
		nimln(175, "memfiles.nim");
		{
			int LOC79;
			if (!!((result.handle == ((NI32) 0)))) goto LA77;
			LOC79 = 0;
			LOC79 = close(result.handle);
		}
		LA77: ;
		nimln(176, "memfiles.nim");
		nimln(216, "memfiles.nim");
		LOC80 = 0;
		LOC80 = oslasterror_115833();
		raiseoserror_115809(LOC80);
	}
	LA73: ;
	popFrame();
	return result;
}

N_NIMCALL(void, close_231249)(Memfile230208* f) {
	NIM_BOOL error;
	NI32 lasterr;
	nimfr("close", "memfiles.nim")
	nimln(222, "memfiles.nim");
	error = NIM_FALSE;
	lasterr = 0;
	nimln(232, "memfiles.nim");
	{
		int LOC5;
		NIM_BOOL LOC6;
		int LOC7;
		if (!!(((*f).handle == ((NI32) 0)))) goto LA3;
		nimln(233, "memfiles.nim");
		LOC5 = 0;
		LOC5 = munmap((*f).mem, (*f).size);
		error = !((LOC5 == ((NI32) 0)));
		nimln(234, "memfiles.nim");
		lasterr = oslasterror_115833();
		nimln(235, "memfiles.nim");
		LOC6 = 0;
		LOC7 = 0;
		LOC7 = close((*f).handle);
		LOC6 = !((LOC7 == ((NI32) 0)));
		if (LOC6) goto LA8;
		LOC6 = error;
		LA8: ;
		error = LOC6;
	}
	LA3: ;
	nimln(237, "memfiles.nim");
	(*f).size = ((NI) 0);
	nimln(238, "memfiles.nim");
	(*f).mem = NIM_NIL;
	nimln(244, "memfiles.nim");
	(*f).handle = ((int) 0);
	nimln(246, "memfiles.nim");
	{
		if (!error) goto LA11;
		raiseoserror_115809(lasterr);
	}
	LA11: ;
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, stdlib_memfilesInit)(void) {
	nimfr("memfiles", "memfiles.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_memfilesDatInit)(void) {
static TNimNode* TMP3906[3];
static TNimNode TMP3729[4];
NTI230208.size = sizeof(Memfile230208);
NTI230208.kind = 18;
NTI230208.base = 0;
NTI230208.flags = 3;
TMP3906[0] = &TMP3729[1];
TMP3729[1].kind = 1;
TMP3729[1].offset = offsetof(Memfile230208, mem);
TMP3729[1].typ = (&NTI153);
TMP3729[1].name = "mem";
TMP3906[1] = &TMP3729[2];
TMP3729[2].kind = 1;
TMP3729[2].offset = offsetof(Memfile230208, size);
TMP3729[2].typ = (&NTI108);
TMP3729[2].name = "size";
TMP3906[2] = &TMP3729[3];
TMP3729[3].kind = 1;
TMP3729[3].offset = offsetof(Memfile230208, handle);
TMP3729[3].typ = (&NTI5811);
TMP3729[3].name = "handle";
TMP3729[0].len = 3; TMP3729[0].kind = 2; TMP3729[0].sons = &TMP3906[0];
NTI230208.node = &TMP3729[0];
}

