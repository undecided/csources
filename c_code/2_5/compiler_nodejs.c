/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, findnodejs_527009)(void);
N_NIMCALL(NimStringDesc*, findexe_127616)(NimStringDesc* exe);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
STRING_LITERAL(TMP10791, "nodejs", 6);
STRING_LITERAL(TMP10792, "node", 4);
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

N_NIMCALL(NimStringDesc*, findnodejs_527009)(void) {
	NimStringDesc* result;
	nimfr("findNodeJs", "nodejs.nim")
	result = 0;
	nimln(4, "nodejs.nim");
	result = findexe_127616(((NimStringDesc*) &TMP10791));
	nimln(5, "nodejs.nim");
	{
		if (!((result) && (result)->Sup.len == 0)) goto LA3;
		nimln(6, "nodejs.nim");
		result = findexe_127616(((NimStringDesc*) &TMP10792));
	}
	LA3: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_nodejsInit)(void) {
	nimfr("nodejs", "nodejs.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_nodejsDatInit)(void) {
}

