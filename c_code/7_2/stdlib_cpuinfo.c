/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef int TY141201[4];
#include <sys/param.h>
#include <sys/sysctl.h>
N_NIMCALL(NI, ncpicountProcessors)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
extern TFrame* frameptr_17042;

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

N_NIMCALL(NI, ncpicountProcessors)(void) {
	NI result;
	TY141201 mib;
	NI numcpu;
	size_t len;
	int LOC1;
	nimfr("countProcessors", "cpuinfo.nim")
	result = 0;
	memset((void*)mib, 0, sizeof(mib));
	numcpu = 0;
	len = 0;
	nimln(51, "cpuinfo.nim");
	mib[(((NI) 0))- 0] = ((int) 6);
	nimln(52, "cpuinfo.nim");
	mib[(((NI) 1))- 0] = ((int) 25);
	nimln(53, "cpuinfo.nim");
	len = ((NI) 8);
	nimln(54, "cpuinfo.nim");
	LOC1 = 0;
	LOC1 = sysctl(mib, ((int) 2), ((void*) ((&numcpu))), (&len), NIM_NIL, ((NI) 0));
	nimln(55, "cpuinfo.nim");
	{
		int LOC6;
		if (!(numcpu < ((NI) 1))) goto LA4;
		nimln(56, "cpuinfo.nim");
		mib[(((NI) 1))- 0] = ((int) 3);
		nimln(57, "cpuinfo.nim");
		LOC6 = 0;
		LOC6 = sysctl(mib, ((int) 2), ((void*) ((&numcpu))), (&len), NIM_NIL, ((NI) 0));
	}
	LA4: ;
	nimln(58, "cpuinfo.nim");
	result = numcpu;
	nimln(66, "cpuinfo.nim");
	{
		if (!(result <= ((NI) 0))) goto LA9;
		result = ((NI) 1);
	}
	LA9: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoInit)(void) {
	nimfr("cpuinfo", "cpuinfo.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoDatInit)(void) {
}

