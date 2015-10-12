/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef NU8 TY285282[20];
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(NimStringDesc*, HEX24_286507)(TY285282 x);
N_NIMCALL(NimStringDesc*, collectiontostring_286515)(TY285282 x, NimStringDesc* b, NimStringDesc* e);
N_NIMCALL(NI, cmpignorestyle_288418)(NCSTRING a, NCSTRING b);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NIM_CHAR, tolower_288423)(NIM_CHAR c);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(NIM_BOOL, eqident_288551)(NimStringDesc* a, NimStringDesc* b);
NIM_CONST TY285282 nnkliterals_285281 = {
0xE0, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY285282 nnkcallkinds_285283 = {
0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY285282 Routinenodes_286482 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00,
0x00, 0x80, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY285282 Atomicnodes_286484 = {
0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY285282 Callnodes_286486 = {
0x00, 0x00, 0x00, 0xFC, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
TNimType NTI285012; /* NimNodeKind */
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

static N_INLINE(NIM_CHAR, tolower_288423)(NIM_CHAR c) {
	NIM_CHAR result;
	nimfr("toLower", "macros.nim")
	result = 0;
	nimln(791, "macros.nim");
	{
		NI TMP4826;
		if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA3;
		TMP4826 = addInt(((NI) (((NU8)(c)))), ((NI) 32));
		result = ((NIM_CHAR) (((NI)chckRange((NI)(TMP4826), ((NI) 0), ((NI) 255)))));
	}
	goto LA1;
	LA3: ;
	{
		nimln(792, "macros.nim");
		result = c;
	}
	LA1: ;
	popFrame();
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

N_NIMCALL(NI, cmpignorestyle_288418)(NCSTRING a, NCSTRING b) {
	NI result;
	NI i;
	NI j;
	nimfr("cmpIgnoreStyle", "macros.nim")
	result = 0;
	nimln(793, "macros.nim");
	i = ((NI) 0);
	nimln(794, "macros.nim");
	j = ((NI) 0);
	{
		nimln(795, "macros.nim");
		while (1) {
			NIM_CHAR aa;
			NIM_CHAR bb;
			NI TMP4827;
			NI TMP4828;
			NI TMP4829;
			{
				nimln(796, "macros.nim");
				while (1) {
					NI TMP4824;
					if (!((NU8)(a[i]) == (NU8)(95))) goto LA4;
					TMP4824 = addInt(i, ((NI) 1));
					i = (NI)(TMP4824);
				} LA4: ;
			}
			{
				nimln(797, "macros.nim");
				while (1) {
					NI TMP4825;
					if (!((NU8)(b[j]) == (NU8)(95))) goto LA6;
					TMP4825 = addInt(j, ((NI) 1));
					j = (NI)(TMP4825);
				} LA6: ;
			}
			nimln(798, "macros.nim");
			aa = tolower_288423(a[i]);
			nimln(799, "macros.nim");
			bb = tolower_288423(b[j]);
			nimln(800, "macros.nim");
			TMP4827 = subInt(((NI) (((NU8)(aa)))), ((NI) (((NU8)(bb)))));
			result = (NI)(TMP4827);
			nimln(801, "macros.nim");
			{
				NIM_BOOL LOC9;
				LOC9 = 0;
				LOC9 = !((result == ((NI) 0)));
				if (LOC9) goto LA10;
				LOC9 = ((NU8)(aa) == (NU8)(0));
				LA10: ;
				if (!LOC9) goto LA11;
				goto LA1;
			}
			LA11: ;
			nimln(802, "macros.nim");
			TMP4828 = addInt(i, ((NI) 1));
			i = (NI)(TMP4828);
			nimln(803, "macros.nim");
			TMP4829 = addInt(j, ((NI) 1));
			j = (NI)(TMP4829);
		}
	} LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, eqident_288551)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI LOC1;
	nimfr("eqIdent", "macros.nim")
	result = 0;
	nimln(805, "macros.nim");
	LOC1 = 0;
	LOC1 = cmpignorestyle_288418(a->data, b->data);
	result = (LOC1 == ((NI) 0));
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosInit)(void) {
	nimfr("macros", "macros.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_macrosDatInit)(void) {
static TNimNode* TMP4820[155];
NI TMP4822;
static char* NIM_CONST TMP4821[155] = {
"nnkNone", 
"nnkEmpty", 
"nnkIdent", 
"nnkSym", 
"nnkType", 
"nnkCharLit", 
"nnkIntLit", 
"nnkInt8Lit", 
"nnkInt16Lit", 
"nnkInt32Lit", 
"nnkInt64Lit", 
"nnkUIntLit", 
"nnkUInt8Lit", 
"nnkUInt16Lit", 
"nnkUInt32Lit", 
"nnkUInt64Lit", 
"nnkFloatLit", 
"nnkFloat32Lit", 
"nnkFloat64Lit", 
"nnkFloat128Lit", 
"nnkStrLit", 
"nnkRStrLit", 
"nnkTripleStrLit", 
"nnkNilLit", 
"nnkMetaNode", 
"nnkDotCall", 
"nnkCommand", 
"nnkCall", 
"nnkCallStrLit", 
"nnkInfix", 
"nnkPrefix", 
"nnkPostfix", 
"nnkHiddenCallConv", 
"nnkExprEqExpr", 
"nnkExprColonExpr", 
"nnkIdentDefs", 
"nnkVarTuple", 
"nnkPar", 
"nnkObjConstr", 
"nnkCurly", 
"nnkCurlyExpr", 
"nnkBracket", 
"nnkBracketExpr", 
"nnkPragmaExpr", 
"nnkRange", 
"nnkDotExpr", 
"nnkCheckedFieldExpr", 
"nnkDerefExpr", 
"nnkIfExpr", 
"nnkElifExpr", 
"nnkElseExpr", 
"nnkLambda", 
"nnkDo", 
"nnkAccQuoted", 
"nnkTableConstr", 
"nnkBind", 
"nnkClosedSymChoice", 
"nnkOpenSymChoice", 
"nnkHiddenStdConv", 
"nnkHiddenSubConv", 
"nnkConv", 
"nnkCast", 
"nnkStaticExpr", 
"nnkAddr", 
"nnkHiddenAddr", 
"nnkHiddenDeref", 
"nnkObjDownConv", 
"nnkObjUpConv", 
"nnkChckRangeF", 
"nnkChckRange64", 
"nnkChckRange", 
"nnkStringToCString", 
"nnkCStringToString", 
"nnkAsgn", 
"nnkFastAsgn", 
"nnkGenericParams", 
"nnkFormalParams", 
"nnkOfInherit", 
"nnkImportAs", 
"nnkProcDef", 
"nnkMethodDef", 
"nnkConverterDef", 
"nnkMacroDef", 
"nnkTemplateDef", 
"nnkIteratorDef", 
"nnkOfBranch", 
"nnkElifBranch", 
"nnkExceptBranch", 
"nnkElse", 
"nnkAsmStmt", 
"nnkPragma", 
"nnkPragmaBlock", 
"nnkIfStmt", 
"nnkWhenStmt", 
"nnkForStmt", 
"nnkParForStmt", 
"nnkWhileStmt", 
"nnkCaseStmt", 
"nnkTypeSection", 
"nnkVarSection", 
"nnkLetSection", 
"nnkConstSection", 
"nnkConstDef", 
"nnkTypeDef", 
"nnkYieldStmt", 
"nnkDefer", 
"nnkTryStmt", 
"nnkFinally", 
"nnkRaiseStmt", 
"nnkReturnStmt", 
"nnkBreakStmt", 
"nnkContinueStmt", 
"nnkBlockStmt", 
"nnkStaticStmt", 
"nnkDiscardStmt", 
"nnkStmtList", 
"nnkImportStmt", 
"nnkImportExceptStmt", 
"nnkExportStmt", 
"nnkExportExceptStmt", 
"nnkFromStmt", 
"nnkIncludeStmt", 
"nnkBindStmt", 
"nnkMixinStmt", 
"nnkUsingStmt", 
"nnkCommentStmt", 
"nnkStmtListExpr", 
"nnkBlockExpr", 
"nnkStmtListType", 
"nnkBlockType", 
"nnkWith", 
"nnkWithout", 
"nnkTypeOfExpr", 
"nnkObjectTy", 
"nnkTupleTy", 
"nnkTupleClassTy", 
"nnkTypeClassTy", 
"nnkStaticTy", 
"nnkRecList", 
"nnkRecCase", 
"nnkRecWhen", 
"nnkRefTy", 
"nnkPtrTy", 
"nnkVarTy", 
"nnkConstTy", 
"nnkMutableTy", 
"nnkDistinctTy", 
"nnkProcTy", 
"nnkIteratorTy", 
"nnkSharedTy", 
"nnkEnumTy", 
"nnkEnumFieldDef", 
"nnkArglist", 
"nnkPattern", 
"nnkReturnToken"};
static TNimNode TMP4818[156];
NTI285012.size = sizeof(NU8);
NTI285012.kind = 14;
NTI285012.base = 0;
NTI285012.flags = 3;
for (TMP4822 = 0; TMP4822 < 155; TMP4822++) {
TMP4818[TMP4822+0].kind = 1;
TMP4818[TMP4822+0].offset = TMP4822;
TMP4818[TMP4822+0].name = TMP4821[TMP4822];
TMP4820[TMP4822] = &TMP4818[TMP4822+0];
}
TMP4818[155].len = 155; TMP4818[155].kind = 2; TMP4818[155].sons = &TMP4820[0];
NTI285012.node = &TMP4818[155];
}

