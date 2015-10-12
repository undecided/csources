/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tidobj166015 Tidobj166015;
typedef struct TNimObject TNimObject;
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
typedef NimStringDesc* TY145201[1];
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
struct  Tidobj166015  {
  TNimObject Sup;
NI id;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
static N_INLINE(NI, getid_189404)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, backendid_189422)(void);
static N_INLINE(void, setid_189440)(NI id);
N_NIMCALL(void, idsynchronizationpoint_189453)(NI idrange);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NimStringDesc*, togid_189462)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, completegeneratedfilepath_154001)(NimStringDesc* f, NIM_BOOL createsubdir);
N_NIMCALL(void, savemaxids_189472)(NimStringDesc* project);
N_NIMCALL(FILE*, open_13217)(NimStringDesc* filename, NU8 mode, NI bufsize);
static N_INLINE(void, writeln_154205)(FILE* f, NimStringDesc** x, NI xLen0);
N_NIMCALL(void, write_13457)(FILE* f, NimStringDesc* s);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(void, loadmaxids_189506)(NimStringDesc* project);
N_NIMCALL(NIM_BOOL, open_13203)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readline_13481)(FILE* f, NimStringDesc** line);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s);
STRING_LITERAL(TMP2553, "nimrod.gid", 10);
STRING_LITERAL(TMP2554, "\012", 1);
NI gfrontendid_189012;
NI gbackendid_189013;
extern TFrame* frameptr_17042;

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

static N_INLINE(NI, getid_189404)(void) {
	NI result;
	NI TMP2546;
	nimfr("getID", "idgen.nim")
	result = 0;
	nimln(30, "idgen.nim");
	result = gfrontendid_189012;
	nimln(31, "idgen.nim");
	TMP2546 = addInt(gfrontendid_189012, ((NI) 1));
	gfrontendid_189012 = (NI)(TMP2546);
	popFrame();
	return result;
}

static N_INLINE(NI, backendid_189422)(void) {
	NI result;
	NI TMP2547;
	nimfr("backendId", "idgen.nim")
	result = 0;
	nimln(34, "idgen.nim");
	result = gbackendid_189013;
	nimln(35, "idgen.nim");
	TMP2547 = addInt(gbackendid_189013, ((NI) 1));
	gbackendid_189013 = (NI)(TMP2547);
	popFrame();
	return result;
}

static N_INLINE(void, setid_189440)(NI id) {
	NI TMP2548;
	nimfr("setId", "idgen.nim")
	nimln(38, "idgen.nim");
	TMP2548 = addInt(id, ((NI) 1));
	gfrontendid_189012 = ((gfrontendid_189012 >= (NI)(TMP2548)) ? gfrontendid_189012 : (NI)(TMP2548));
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

N_NIMCALL(void, idsynchronizationpoint_189453)(NI idrange) {
	NI TMP2549;
	NI TMP2550;
	NI TMP2551;
	NI TMP2552;
	nimfr("idSynchronizationPoint", "idgen.nim")
	nimln(41, "idgen.nim");
	TMP2549 = divInt(gfrontendid_189012, idrange);
	TMP2550 = addInt((NI)(TMP2549), ((NI) 1));
	TMP2551 = mulInt((NI)(TMP2550), idrange);
	TMP2552 = addInt((NI)(TMP2551), ((NI) 1));
	gfrontendid_189012 = (NI)(TMP2552);
	popFrame();
}

N_NIMCALL(NimStringDesc*, togid_189462)(NimStringDesc* f) {
	NimStringDesc* result;
	nimfr("toGid", "idgen.nim")
	result = 0;
	nimln(47, "idgen.nim");
	result = completegeneratedfilepath_154001(((NimStringDesc*) &TMP2553), NIM_TRUE);
	popFrame();
	return result;
}

static N_INLINE(void, writeln_154205)(FILE* f, NimStringDesc** x, NI xLen0) {
	nimfr("writeln", "sysio.nim")
	{
		NimStringDesc* i_154221;
		NI i_154229;
		i_154221 = 0;
		nimln(1689, "system.nim");
		i_154229 = ((NI) 0);
		{
			nimln(1690, "system.nim");
			while (1) {
				if (!(i_154229 < xLen0)) goto LA3;
				nimln(1691, "system.nim");
				i_154221 = x[i_154229];
				nimln(212, "sysio.nim");
				write_13457(f, i_154221);
				nimln(1692, "system.nim");
				i_154229 += ((NI) 1);
			} LA3: ;
		}
	}
	nimln(213, "sysio.nim");
	write_13457(f, ((NimStringDesc*) &TMP2554));
	popFrame();
}

N_NIMCALL(void, savemaxids_189472)(NimStringDesc* project) {
	FILE* f;
	NimStringDesc* LOC1;
	TY145201 LOC2;
	TY145201 LOC3;
	nimfr("saveMaxIds", "idgen.nim")
	nimln(50, "idgen.nim");
	LOC1 = 0;
	LOC1 = togid_189462(project);
	f = open_13217(LOC1, ((NU8) 1), ((NI) -1));
	nimln(51, "idgen.nim");
	memset((void*)LOC2, 0, sizeof(LOC2));
	LOC2[0] = nimIntToStr(gfrontendid_189012);
	writeln_154205(f, LOC2, 1);
	nimln(52, "idgen.nim");
	memset((void*)LOC3, 0, sizeof(LOC3));
	LOC3[0] = nimIntToStr(gbackendid_189013);
	writeln_154205(f, LOC3, 1);
	nimln(53, "idgen.nim");
	fclose(f);
	popFrame();
}

N_NIMCALL(void, loadmaxids_189506)(NimStringDesc* project) {
	FILE* f;
	nimfr("loadMaxIds", "idgen.nim")
	f = 0;
	nimln(57, "idgen.nim");
	{
		NimStringDesc* LOC3;
		NIM_BOOL LOC4;
		NimStringDesc* line;
		LOC3 = 0;
		LOC3 = togid_189462(project);
		LOC4 = 0;
		LOC4 = open_13203(&f, LOC3, ((NU8) 0), ((NI) -1));
		if (!LOC4) goto LA5;
		nimln(58, "idgen.nim");
		line = rawNewString(((NI) 20));
		nimln(59, "idgen.nim");
		{
			NIM_BOOL LOC9;
			NI frontendid;
			LOC9 = 0;
			LOC9 = readline_13481(f, (&line));
			if (!LOC9) goto LA10;
			nimln(60, "idgen.nim");
			frontendid = nsuParseInt(line);
			nimln(61, "idgen.nim");
			{
				NIM_BOOL LOC14;
				NI backendid;
				LOC14 = 0;
				LOC14 = readline_13481(f, (&line));
				if (!LOC14) goto LA15;
				nimln(62, "idgen.nim");
				backendid = nsuParseInt(line);
				nimln(63, "idgen.nim");
				gfrontendid_189012 = ((gfrontendid_189012 >= frontendid) ? gfrontendid_189012 : frontendid);
				nimln(64, "idgen.nim");
				gbackendid_189013 = ((gbackendid_189013 >= backendid) ? gbackendid_189013 : backendid);
			}
			LA15: ;
		}
		LA10: ;
		nimln(65, "idgen.nim");
		fclose(f);
	}
	LA5: ;
	popFrame();
}

N_NIMCALL(void, registerid_189201)(Tidobj166015* id) {
	nimfr("registerID", "idgen.nim")
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, compiler_idgenInit)(void) {
	nimfr("idgen", "idgen.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_idgenDatInit)(void) {
}

