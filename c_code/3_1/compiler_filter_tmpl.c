/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct Ttmplparser217020 Ttmplparser217020;
typedef struct Tllstream177204 Tllstream177204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tlineinfo162338 Tlineinfo162338;
typedef struct Tnode190813 Tnode190813;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttype190849 Ttype190849;
typedef struct Tsym190843 Tsym190843;
typedef struct Tident166021 Tident166021;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tidobj166015 Tidobj166015;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj160009 Ropeobj160009;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Tlib190831 Tlib190831;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TY190933 TY190933;
typedef NU8 TY77859[32];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo162338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Ttmplparser217020  {
Tllstream177204* inp;
NU8 state;
Tlineinfo162338 info;
NI indent;
NI emitpar;
NimStringDesc* x;
Tllstream177204* outp;
NIM_CHAR subschar;
NIM_CHAR nimdirective;
NimStringDesc* emit;
NimStringDesc* conc;
NimStringDesc* tostr;
NI curly;
NI bracket;
NI par;
NIM_BOOL pendingexprline;
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
struct  Tllstream177204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
struct  Tnode190813  {
Ttype190849* typ;
Tlineinfo162338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym190843* sym;
} S4;
struct {Tident166021* ident;
} S5;
struct {Tnodeseq190807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tidobj166015  {
  TNimObject Sup;
NI id;
};
struct  Tloc190827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype190849* t;
Ropeobj160009* r;
Ropeobj160009* heaproot;
};
struct  Ttype190849  {
  Tidobj166015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq190845* sons;
Tnode190813* n;
Tsym190843* owner;
Tsym190843* sym;
Tsym190843* destructor;
Tsym190843* deepcopy;
Tsym190843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc190827 loc;
};
struct  Tstrtable190817  {
NI counter;
Tsymseq190815* data;
};
struct  Tsym190843  {
  Tidobj166015 Sup;
NU8 kind;
union{
struct {Ttypeseq190845* typeinstcache;
Tscope190837* typscope;
} S1;
struct {TY190944* procinstcache;
Tsym190843* gcunsafetyreason;
} S2;
struct {TY190944* usedgenerics;
Tstrtable190817 tab;
} S3;
struct {Tsym190843* guard;
} S4;
} kindU;
NU16 magic;
Ttype190849* typ;
Tident166021* name;
Tlineinfo162338 info;
Tsym190843* owner;
NU32 flags;
Tnode190813* ast;
NU32 options;
NI position;
NI offset;
Tloc190827 loc;
Tlib190831* annex;
Tnode190813* constraint;
};
struct  Tident166021  {
  Tidobj166015 Sup;
NimStringDesc* s;
Tident166021* next;
NI h;
};
struct  Ropeobj160009  {
  TNimObject Sup;
Ropeobj160009* left;
Ropeobj160009* right;
NI length;
NimStringDesc* data;
};
struct  Tscope190837  {
NI depthlevel;
Tstrtable190817 symbols;
Tnodeseq190807* usingsyms;
Tscope190837* parent;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tlib190831  {
  Tlistentry130022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj160009* name;
Tnode190813* path;
};
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq190845 {
  TGenericSeq Sup;
  Ttype190849* data[SEQ_DECL_SIZE];
};
struct TY190944 {
  TGenericSeq Sup;
  Tinstantiation190833* data[SEQ_DECL_SIZE];
};
struct Tsymseq190815 {
  TGenericSeq Sup;
  Tsym190843* data[SEQ_DECL_SIZE];
};
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, newline_217047)(Ttmplparser217020* p);
N_NIMCALL(void, llstreamwrite_177665)(Tllstream177204* s, NimStringDesc* data);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c, NI count);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20201)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, scanpar_217057)(Ttmplparser217020* p, NI d);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
static N_INLINE(NIM_BOOL, withinexpr_217139)(Ttmplparser217020* p);
N_NIMCALL(void, parseline_217149)(Ttmplparser217020* p);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NIM_BOOL, endswithopr_177450)(NimStringDesc* x);
N_NIMCALL(NU16, whichkeyword_171396)(NimStringDesc* id);
N_NIMCALL(void, localerror_164155)(Tlineinfo162338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NIM_BOOL, contains_99373)(NimStringDesc* s, TY77859 chars);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_NIMCALL(void, llstreamwrite_177696)(Tllstream177204* s, NIM_CHAR data);
N_NIMCALL(Tllstream177204*, filtertmpl_217009)(Tllstream177204* stdin_217011, NimStringDesc* filename, Tnode190813* call);
static N_INLINE(Tlineinfo162338, newlineinfo_162879)(NimStringDesc* filename, NI line, NI col);
N_NIMCALL(Tlineinfo162338, newlineinfo_162867)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(NI32, fileinfoidx_162854)(NimStringDesc* filename);
N_NIMCALL(Tllstream177204*, llstreamopen_177220)(NimStringDesc* data);
N_NIMCALL(NIM_CHAR, chararg_216020)(Tnode190813* n, NimStringDesc* name, NI pos, NIM_CHAR default_216025);
N_NIMCALL(NimStringDesc*, strarg_216029)(Tnode190813* n, NimStringDesc* name, NI pos, NimStringDesc* default_216034);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_177610)(Tllstream177204* s, NimStringDesc** line);
N_NIMCALL(void, llstreamclose_177310)(Tllstream177204* s);
NIM_CONST TY77859 Patternchars_217042 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xFF, 0x03,
0xFE, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}
;
STRING_LITERAL(TMP3339, "\012", 1);
STRING_LITERAL(TMP3350, "", 0);
STRING_LITERAL(TMP3353, "end", 3);
STRING_LITERAL(TMP3354, "#end", 4);
static NIM_CONST TY77859 TMP3357 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3360, "\"", 1);
STRING_LITERAL(TMP3361, "(\"", 2);
STRING_LITERAL(TMP3363, "\\x", 2);
STRING_LITERAL(TMP3365, "\\\\", 2);
STRING_LITERAL(TMP3367, "\\\'", 2);
STRING_LITERAL(TMP3369, "\\\"", 2);
STRING_LITERAL(TMP3373, "}", 1);
STRING_LITERAL(TMP3381, "$", 1);
STRING_LITERAL(TMP3383, "\\n\"", 3);
STRING_LITERAL(TMP3384, "subschar", 8);
STRING_LITERAL(TMP3385, "metachar", 8);
STRING_LITERAL(TMP3386, "emit", 4);
STRING_LITERAL(TMP3387, "result.add", 10);
STRING_LITERAL(TMP3388, "conc", 4);
STRING_LITERAL(TMP3389, " & ", 3);
STRING_LITERAL(TMP3390, "tostring", 8);
extern TFrame* frameptr_17242;

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

N_NIMCALL(void, newline_217047)(Ttmplparser217020* p) {
	NimStringDesc* LOC1;
	nimfr("newLine", "filter_tmpl.nim")
	nimln(40, "filter_tmpl.nim");
	LOC1 = 0;
	LOC1 = nsuRepeatChar(41, ((NI)chckRange((*p).emitpar, ((NI) 0), ((NI) 2147483647))));
	llstreamwrite_177665((*p).outp, LOC1);
	nimln(41, "filter_tmpl.nim");
	(*p).emitpar = ((NI) 0);
	nimln(42, "filter_tmpl.nim");
	{
		if (!(((NI16) 1) < (*p).info.line)) goto LA4;
		llstreamwrite_177665((*p).outp, ((NimStringDesc*) &TMP3339));
	}
	LA4: ;
	nimln(43, "filter_tmpl.nim");
	{
		NimStringDesc* LOC10;
		if (!(*p).pendingexprline) goto LA8;
		nimln(44, "filter_tmpl.nim");
		LOC10 = 0;
		LOC10 = nsuRepeatChar(32, ((NI) 2));
		llstreamwrite_177665((*p).outp, LOC10);
		nimln(45, "filter_tmpl.nim");
		(*p).pendingexprline = NIM_FALSE;
	}
	LA8: ;
	popFrame();
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

N_NIMCALL(void, scanpar_217057)(Ttmplparser217020* p, NI d) {
	NI i;
	nimfr("scanPar", "filter_tmpl.nim")
	nimln(48, "filter_tmpl.nim");
	i = d;
	{
		nimln(49, "filter_tmpl.nim");
		while (1) {
			NI TMP3346;
			nimln(50, "filter_tmpl.nim");
			if ((NU)(i) > (NU)((*p).x->Sup.len)) raiseIndexError();
			switch (((NU8)((*p).x->data[i]))) {
			case 0:
			{
				nimln(51, "filter_tmpl.nim");
				goto LA1;
			}
			break;
			case 40:
			{
				NI TMP3340;
				nimln(52, "filter_tmpl.nim");
				TMP3340 = addInt((*p).par, ((NI) 1));
				(*p).par = (NI)(TMP3340);
			}
			break;
			case 41:
			{
				NI TMP3341;
				nimln(53, "filter_tmpl.nim");
				TMP3341 = subInt((*p).par, ((NI) 1));
				(*p).par = (NI)(TMP3341);
			}
			break;
			case 91:
			{
				NI TMP3342;
				nimln(54, "filter_tmpl.nim");
				TMP3342 = addInt((*p).bracket, ((NI) 1));
				(*p).bracket = (NI)(TMP3342);
			}
			break;
			case 93:
			{
				NI TMP3343;
				nimln(55, "filter_tmpl.nim");
				TMP3343 = subInt((*p).bracket, ((NI) 1));
				(*p).bracket = (NI)(TMP3343);
			}
			break;
			case 123:
			{
				NI TMP3344;
				nimln(56, "filter_tmpl.nim");
				TMP3344 = addInt((*p).curly, ((NI) 1));
				(*p).curly = (NI)(TMP3344);
			}
			break;
			case 125:
			{
				NI TMP3345;
				nimln(57, "filter_tmpl.nim");
				TMP3345 = subInt((*p).curly, ((NI) 1));
				(*p).curly = (NI)(TMP3345);
			}
			break;
			default:
			{
			}
			break;
			}
			nimln(59, "filter_tmpl.nim");
			TMP3346 = addInt(i, ((NI) 1));
			i = (NI)(TMP3346);
		}
	} LA1: ;
	popFrame();
}

static N_INLINE(NIM_BOOL, withinexpr_217139)(Ttmplparser217020* p) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	NIM_BOOL LOC2;
	nimfr("withInExpr", "filter_tmpl.nim")
	result = 0;
	nimln(62, "filter_tmpl.nim");
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = (((NI) 0) < (*p).par);
	if (LOC2) goto LA3;
	LOC2 = (((NI) 0) < (*p).bracket);
	LA3: ;
	LOC1 = LOC2;
	if (LOC1) goto LA4;
	LOC1 = (((NI) 0) < (*p).curly);
	LA4: ;
	result = LOC1;
	popFrame();
	return result;
}

N_NIMCALL(void, parseline_217149)(Ttmplparser217020* p) {
	NI d;
	NI j;
	NI curly;
	NimStringDesc* keyw;
	nimfr("parseLine", "filter_tmpl.nim")
	d = 0;
	j = 0;
	curly = 0;
	keyw = 0;
	nimln(68, "filter_tmpl.nim");
	j = ((NI) 0);
	{
		nimln(69, "filter_tmpl.nim");
		while (1) {
			NI TMP3347;
			if ((NU)(j) > (NU)((*p).x->Sup.len)) raiseIndexError();
			if (!((NU8)((*p).x->data[j]) == (NU8)(32))) goto LA2;
			TMP3347 = addInt(j, ((NI) 1));
			j = (NI)(TMP3347);
		} LA2: ;
	}
	nimln(70, "filter_tmpl.nim");
	{
		NIM_BOOL LOC5;
		LOC5 = 0;
		if ((NU)(((NI) 0)) > (NU)((*p).x->Sup.len)) raiseIndexError();
		LOC5 = ((NU8)((*p).x->data[((NI) 0)]) == (NU8)((*p).nimdirective));
		if (!(LOC5)) goto LA6;
		if ((NU)(((NI) 1)) > (NU)((*p).x->Sup.len)) raiseIndexError();
		LOC5 = ((NU8)((*p).x->data[((NI) 1)]) == (NU8)(33));
		LA6: ;
		if (!LOC5) goto LA7;
		nimln(71, "filter_tmpl.nim");
		newline_217047(p);
	}
	goto LA3;
	LA7: ;
	{
		NI TMP3348;
		NIM_BOOL LOC16;
		NU16 LOC18;
		nimln(72, "filter_tmpl.nim");
		if ((NU)(j) > (NU)((*p).x->Sup.len)) raiseIndexError();
		if (!((NU8)((*p).x->data[j]) == (NU8)((*p).nimdirective))) goto LA10;
		nimln(73, "filter_tmpl.nim");
		newline_217047(p);
		nimln(74, "filter_tmpl.nim");
		TMP3348 = addInt(j, ((NI) 1));
		j = (NI)(TMP3348);
		{
			nimln(75, "filter_tmpl.nim");
			while (1) {
				NI TMP3349;
				if ((NU)(j) > (NU)((*p).x->Sup.len)) raiseIndexError();
				if (!((NU8)((*p).x->data[j]) == (NU8)(32))) goto LA13;
				TMP3349 = addInt(j, ((NI) 1));
				j = (NI)(TMP3349);
			} LA13: ;
		}
		nimln(76, "filter_tmpl.nim");
		d = j;
		nimln(77, "filter_tmpl.nim");
		keyw = copyString(((NimStringDesc*) &TMP3350));
		{
			nimln(78, "filter_tmpl.nim");
			while (1) {
				NI TMP3351;
				if ((NU)(j) > (NU)((*p).x->Sup.len)) raiseIndexError();
				if (!(((NU8)((*p).x->data[j])) >= ((NU8)(97)) && ((NU8)((*p).x->data[j])) <= ((NU8)(122)) || ((NU8)((*p).x->data[j])) >= ((NU8)(65)) && ((NU8)((*p).x->data[j])) <= ((NU8)(90)) || ((NU8)((*p).x->data[j])) >= ((NU8)(48)) && ((NU8)((*p).x->data[j])) <= ((NU8)(57)) || ((NU8)((*p).x->data[j])) >= ((NU8)(128)) && ((NU8)((*p).x->data[j])) <= ((NU8)(255)) || ((NU8)((*p).x->data[j])) == ((NU8)(46)) || ((NU8)((*p).x->data[j])) == ((NU8)(95)))) goto LA15;
				nimln(79, "filter_tmpl.nim");
				if ((NU)(j) > (NU)((*p).x->Sup.len)) raiseIndexError();
				keyw = addChar(keyw, (*p).x->data[j]);
				nimln(80, "filter_tmpl.nim");
				TMP3351 = addInt(j, ((NI) 1));
				j = (NI)(TMP3351);
			} LA15: ;
		}
		nimln(82, "filter_tmpl.nim");
		scanpar_217057(p, j);
		nimln(83, "filter_tmpl.nim");
		LOC16 = 0;
		LOC16 = withinexpr_217139((&(*p)));
		if (LOC16) goto LA17;
		LOC16 = endswithopr_177450((*p).x);
		LA17: ;
		(*p).pendingexprline = LOC16;
		nimln(84, "filter_tmpl.nim");
		LOC18 = 0;
		LOC18 = whichkeyword_171396(keyw);
		switch (LOC18) {
		case ((NU16) 22):
		{
			NimStringDesc* LOC25;
			nimln(86, "filter_tmpl.nim");
			{
				NI TMP3352;
				if (!(((NI) 2) <= (*p).indent)) goto LA22;
				nimln(87, "filter_tmpl.nim");
				TMP3352 = subInt((*p).indent, ((NI) 2));
				(*p).indent = (NI)(TMP3352);
			}
			goto LA20;
			LA22: ;
			{
				nimln(89, "filter_tmpl.nim");
				(*p).info.col = ((NI16)chckRange(j, ((NI16) -32768), ((NI16) 32767)));
				nimln(90, "filter_tmpl.nim");
				localerror_164155((*p).info, ((NU16) 163), ((NimStringDesc*) &TMP3353));
			}
			LA20: ;
			nimln(91, "filter_tmpl.nim");
			LOC25 = 0;
			LOC25 = nsuRepeatChar(32, ((NI)chckRange((*p).indent, ((NI) 0), ((NI) 2147483647))));
			llstreamwrite_177665((*p).outp, LOC25);
			nimln(92, "filter_tmpl.nim");
			llstreamwrite_177665((*p).outp, ((NimStringDesc*) &TMP3354));
		}
		break;
		case ((NU16) 31):
		case ((NU16) 65):
		case ((NU16) 60):
		case ((NU16) 66):
		case ((NU16) 27):
		case ((NU16) 7):
		case ((NU16) 9):
		case ((NU16) 51):
		case ((NU16) 38):
		case ((NU16) 14):
		case ((NU16) 40):
		case ((NU16) 59):
		case ((NU16) 41):
		{
			NimStringDesc* LOC27;
			NimStringDesc* LOC28;
			NI TMP3355;
			nimln(95, "filter_tmpl.nim");
			LOC27 = 0;
			LOC27 = nsuRepeatChar(32, ((NI)chckRange((*p).indent, ((NI) 0), ((NI) 2147483647))));
			llstreamwrite_177665((*p).outp, LOC27);
			nimln(96, "filter_tmpl.nim");
			LOC28 = 0;
			LOC28 = copyStr((*p).x, d);
			llstreamwrite_177665((*p).outp, LOC28);
			nimln(97, "filter_tmpl.nim");
			TMP3355 = addInt((*p).indent, ((NI) 2));
			(*p).indent = (NI)(TMP3355);
		}
		break;
		case ((NU16) 20):
		case ((NU16) 48):
		case ((NU16) 21):
		case ((NU16) 24):
		case ((NU16) 26):
		{
			NI TMP3356;
			NimStringDesc* LOC30;
			NimStringDesc* LOC31;
			nimln(99, "filter_tmpl.nim");
			TMP3356 = subInt((*p).indent, ((NI) 2));
			LOC30 = 0;
			LOC30 = nsuRepeatChar(32, ((NI)chckRange((NI)(TMP3356), ((NI) 0), ((NI) 2147483647))));
			llstreamwrite_177665((*p).outp, LOC30);
			nimln(100, "filter_tmpl.nim");
			LOC31 = 0;
			LOC31 = copyStr((*p).x, d);
			llstreamwrite_177665((*p).outp, LOC31);
		}
		break;
		case ((NU16) 39):
		case ((NU16) 64):
		case ((NU16) 12):
		case ((NU16) 62):
		{
			NimStringDesc* LOC33;
			NimStringDesc* LOC34;
			nimln(102, "filter_tmpl.nim");
			LOC33 = 0;
			LOC33 = nsuRepeatChar(32, ((NI)chckRange((*p).indent, ((NI) 0), ((NI) 2147483647))));
			llstreamwrite_177665((*p).outp, LOC33);
			nimln(103, "filter_tmpl.nim");
			LOC34 = 0;
			LOC34 = copyStr((*p).x, d);
			llstreamwrite_177665((*p).outp, LOC34);
			nimln(104, "filter_tmpl.nim");
			{
				NIM_BOOL LOC37;
				NI TMP3358;
				LOC37 = 0;
				LOC37 = contains_99373((*p).x, TMP3357);
				if (!!(LOC37)) goto LA38;
				nimln(106, "filter_tmpl.nim");
				TMP3358 = addInt((*p).indent, ((NI) 2));
				(*p).indent = (NI)(TMP3358);
			}
			LA38: ;
		}
		break;
		default:
		{
			NimStringDesc* LOC41;
			NimStringDesc* LOC42;
			nimln(108, "filter_tmpl.nim");
			LOC41 = 0;
			LOC41 = nsuRepeatChar(32, ((NI)chckRange((*p).indent, ((NI) 0), ((NI) 2147483647))));
			llstreamwrite_177665((*p).outp, LOC41);
			nimln(109, "filter_tmpl.nim");
			LOC42 = 0;
			LOC42 = copyStr((*p).x, d);
			llstreamwrite_177665((*p).outp, LOC42);
		}
		break;
		}
		nimln(110, "filter_tmpl.nim");
		(*p).state = ((NU8) 0);
	}
	goto LA3;
	LA10: ;
	{
		nimln(114, "filter_tmpl.nim");
		(*p).par = ((NI) 0);
		nimln(115, "filter_tmpl.nim");
		(*p).curly = ((NI) 0);
		nimln(116, "filter_tmpl.nim");
		(*p).bracket = ((NI) 0);
		nimln(117, "filter_tmpl.nim");
		j = ((NI) 0);
		nimln(118, "filter_tmpl.nim");
		switch ((*p).state) {
		case ((NU8) 1):
		{
			NI TMP3359;
			NimStringDesc* LOC45;
			nimln(121, "filter_tmpl.nim");
			llstreamwrite_177665((*p).outp, (*p).conc);
			nimln(122, "filter_tmpl.nim");
			llstreamwrite_177665((*p).outp, ((NimStringDesc*) &TMP3339));
			nimln(123, "filter_tmpl.nim");
			TMP3359 = addInt((*p).indent, ((NI) 2));
			LOC45 = 0;
			LOC45 = nsuRepeatChar(32, ((NI)chckRange((NI)(TMP3359), ((NI) 0), ((NI) 2147483647))));
			llstreamwrite_177665((*p).outp, LOC45);
			nimln(124, "filter_tmpl.nim");
			llstreamwrite_177665((*p).outp, ((NimStringDesc*) &TMP3360));
		}
		break;
		case ((NU8) 0):
		{
			NimStringDesc* LOC47;
			NI TMP3362;
			nimln(126, "filter_tmpl.nim");
			newline_217047(p);
			nimln(127, "filter_tmpl.nim");
			LOC47 = 0;
			LOC47 = nsuRepeatChar(32, ((NI)chckRange((*p).indent, ((NI) 0), ((NI) 2147483647))));
			llstreamwrite_177665((*p).outp, LOC47);
			nimln(128, "filter_tmpl.nim");
			llstreamwrite_177665((*p).outp, (*p).emit);
			nimln(129, "filter_tmpl.nim");
			llstreamwrite_177665((*p).outp, ((NimStringDesc*) &TMP3361));
			nimln(130, "filter_tmpl.nim");
			TMP3362 = addInt((*p).emitpar, ((NI) 1));
			(*p).emitpar = (NI)(TMP3362);
		}
		break;
		}
		nimln(131, "filter_tmpl.nim");
		(*p).state = ((NU8) 1);
		{
			nimln(132, "filter_tmpl.nim");
			while (1) {
				nimln(133, "filter_tmpl.nim");
				if ((NU)(j) > (NU)((*p).x->Sup.len)) raiseIndexError();
				switch (((NU8)((*p).x->data[j]))) {
				case 0:
				{
					nimln(135, "filter_tmpl.nim");
					goto LA48;
				}
				break;
				case 1 ... 31:
				case 128 ... 255:
				{
					NimStringDesc* LOC52;
					NI TMP3364;
					nimln(137, "filter_tmpl.nim");
					llstreamwrite_177665((*p).outp, ((NimStringDesc*) &TMP3363));
					nimln(138, "filter_tmpl.nim");
					if ((NU)(j) > (NU)((*p).x->Sup.len)) raiseIndexError();
					LOC52 = 0;
					LOC52 = nsuToHex(((NI64) (((NU8)((*p).x->data[j])))), ((NI) 2));
					llstreamwrite_177665((*p).outp, LOC52);
					nimln(139, "filter_tmpl.nim");
					TMP3364 = addInt(j, ((NI) 1));
					j = (NI)(TMP3364);
				}
				break;
				case 92:
				{
					NI TMP3366;
					nimln(141, "filter_tmpl.nim");
					llstreamwrite_177665((*p).outp, ((NimStringDesc*) &TMP3365));
					nimln(142, "filter_tmpl.nim");
					TMP3366 = addInt(j, ((NI) 1));
					j = (NI)(TMP3366);
				}
				break;
				case 39:
				{
					NI TMP3368;
					nimln(144, "filter_tmpl.nim");
					llstreamwrite_177665((*p).outp, ((NimStringDesc*) &TMP3367));
					nimln(145, "filter_tmpl.nim");
					TMP3368 = addInt(j, ((NI) 1));
					j = (NI)(TMP3368);
				}
				break;
				case 34:
				{
					NI TMP3370;
					nimln(147, "filter_tmpl.nim");
					llstreamwrite_177665((*p).outp, ((NimStringDesc*) &TMP3369));
					nimln(148, "filter_tmpl.nim");
					TMP3370 = addInt(j, ((NI) 1));
					j = (NI)(TMP3370);
				}
				break;
				default:
				{
					nimln(150, "filter_tmpl.nim");
					{
						NI TMP3371;
						if ((NU)(j) > (NU)((*p).x->Sup.len)) raiseIndexError();
						if (!((NU8)((*p).x->data[j]) == (NU8)((*p).subschar))) goto LA59;
						nimln(152, "filter_tmpl.nim");
						TMP3371 = addInt(j, ((NI) 1));
						j = (NI)(TMP3371);
						nimln(153, "filter_tmpl.nim");
						if ((NU)(j) > (NU)((*p).x->Sup.len)) raiseIndexError();
						switch (((NU8)((*p).x->data[j]))) {
						case 123:
						{
							NI TMP3372;
							nimln(155, "filter_tmpl.nim");
							(*p).info.col = ((NI16)chckRange(j, ((NI16) -32768), ((NI16) 32767)));
							nimln(156, "filter_tmpl.nim");
							llstreamwrite_177696((*p).outp, 34);
							nimln(157, "filter_tmpl.nim");
							llstreamwrite_177665((*p).outp, (*p).conc);
							nimln(158, "filter_tmpl.nim");
							llstreamwrite_177665((*p).outp, (*p).tostr);
							nimln(159, "filter_tmpl.nim");
							llstreamwrite_177696((*p).outp, 40);
							nimln(160, "filter_tmpl.nim");
							TMP3372 = addInt(j, ((NI) 1));
							j = (NI)(TMP3372);
							nimln(161, "filter_tmpl.nim");
							curly = ((NI) 0);
							{
								nimln(162, "filter_tmpl.nim");
								while (1) {
									nimln(163, "filter_tmpl.nim");
									if ((NU)(j) > (NU)((*p).x->Sup.len)) raiseIndexError();
									switch (((NU8)((*p).x->data[j]))) {
									case 0:
									{
										nimln(165, "filter_tmpl.nim");
										localerror_164155((*p).info, ((NU16) 188), ((NimStringDesc*) &TMP3373));
										nimln(166, "filter_tmpl.nim");
										goto LA62;
									}
									break;
									case 123:
									{
										NI TMP3374;
										NI TMP3375;
										nimln(168, "filter_tmpl.nim");
										TMP3374 = addInt(j, ((NI) 1));
										j = (NI)(TMP3374);
										nimln(169, "filter_tmpl.nim");
										TMP3375 = addInt(curly, ((NI) 1));
										curly = (NI)(TMP3375);
										nimln(170, "filter_tmpl.nim");
										llstreamwrite_177696((*p).outp, 123);
									}
									break;
									case 125:
									{
										NI TMP3376;
										nimln(172, "filter_tmpl.nim");
										TMP3376 = addInt(j, ((NI) 1));
										j = (NI)(TMP3376);
										nimln(173, "filter_tmpl.nim");
										{
											if (!(curly == ((NI) 0))) goto LA69;
											goto LA62;
										}
										LA69: ;
										nimln(174, "filter_tmpl.nim");
										{
											NI TMP3377;
											if (!(((NI) 0) < curly)) goto LA73;
											TMP3377 = subInt(curly, ((NI) 1));
											curly = (NI)(TMP3377);
										}
										LA73: ;
										nimln(175, "filter_tmpl.nim");
										llstreamwrite_177696((*p).outp, 125);
									}
									break;
									default:
									{
										NI TMP3378;
										nimln(177, "filter_tmpl.nim");
										if ((NU)(j) > (NU)((*p).x->Sup.len)) raiseIndexError();
										llstreamwrite_177696((*p).outp, (*p).x->data[j]);
										nimln(178, "filter_tmpl.nim");
										TMP3378 = addInt(j, ((NI) 1));
										j = (NI)(TMP3378);
									}
									break;
									}
								}
							} LA62: ;
							nimln(179, "filter_tmpl.nim");
							llstreamwrite_177696((*p).outp, 41);
							nimln(180, "filter_tmpl.nim");
							llstreamwrite_177665((*p).outp, (*p).conc);
							nimln(181, "filter_tmpl.nim");
							llstreamwrite_177696((*p).outp, 34);
						}
						break;
						case 97 ... 122:
						case 65 ... 90:
						case 128 ... 255:
						{
							nimln(183, "filter_tmpl.nim");
							llstreamwrite_177696((*p).outp, 34);
							nimln(184, "filter_tmpl.nim");
							llstreamwrite_177665((*p).outp, (*p).conc);
							nimln(185, "filter_tmpl.nim");
							llstreamwrite_177665((*p).outp, (*p).tostr);
							nimln(186, "filter_tmpl.nim");
							llstreamwrite_177696((*p).outp, 40);
							{
								nimln(187, "filter_tmpl.nim");
								while (1) {
									NI TMP3379;
									if ((NU)(j) > (NU)((*p).x->Sup.len)) raiseIndexError();
									if (!(((NU8)((*p).x->data[j])) >= ((NU8)(97)) && ((NU8)((*p).x->data[j])) <= ((NU8)(122)) || ((NU8)((*p).x->data[j])) >= ((NU8)(65)) && ((NU8)((*p).x->data[j])) <= ((NU8)(90)) || ((NU8)((*p).x->data[j])) >= ((NU8)(48)) && ((NU8)((*p).x->data[j])) <= ((NU8)(57)) || ((NU8)((*p).x->data[j])) >= ((NU8)(128)) && ((NU8)((*p).x->data[j])) <= ((NU8)(255)) || ((NU8)((*p).x->data[j])) == ((NU8)(46)) || ((NU8)((*p).x->data[j])) == ((NU8)(95)))) goto LA78;
									nimln(188, "filter_tmpl.nim");
									if ((NU)(j) > (NU)((*p).x->Sup.len)) raiseIndexError();
									llstreamwrite_177696((*p).outp, (*p).x->data[j]);
									nimln(189, "filter_tmpl.nim");
									TMP3379 = addInt(j, ((NI) 1));
									j = (NI)(TMP3379);
								} LA78: ;
							}
							nimln(190, "filter_tmpl.nim");
							llstreamwrite_177696((*p).outp, 41);
							nimln(191, "filter_tmpl.nim");
							llstreamwrite_177665((*p).outp, (*p).conc);
							nimln(192, "filter_tmpl.nim");
							llstreamwrite_177696((*p).outp, 34);
						}
						break;
						default:
						{
							nimln(194, "filter_tmpl.nim");
							{
								NI TMP3380;
								if ((NU)(j) > (NU)((*p).x->Sup.len)) raiseIndexError();
								if (!((NU8)((*p).x->data[j]) == (NU8)((*p).subschar))) goto LA82;
								nimln(195, "filter_tmpl.nim");
								llstreamwrite_177696((*p).outp, (*p).subschar);
								nimln(196, "filter_tmpl.nim");
								TMP3380 = addInt(j, ((NI) 1));
								j = (NI)(TMP3380);
							}
							goto LA80;
							LA82: ;
							{
								nimln(198, "filter_tmpl.nim");
								(*p).info.col = ((NI16)chckRange(j, ((NI16) -32768), ((NI16) 32767)));
								nimln(199, "filter_tmpl.nim");
								localerror_164155((*p).info, ((NU16) 167), ((NimStringDesc*) &TMP3381));
							}
							LA80: ;
						}
						break;
						}
					}
					goto LA57;
					LA59: ;
					{
						NI TMP3382;
						nimln(201, "filter_tmpl.nim");
						if ((NU)(j) > (NU)((*p).x->Sup.len)) raiseIndexError();
						llstreamwrite_177696((*p).outp, (*p).x->data[j]);
						nimln(202, "filter_tmpl.nim");
						TMP3382 = addInt(j, ((NI) 1));
						j = (NI)(TMP3382);
					}
					LA57: ;
				}
				break;
				}
			}
		} LA48: ;
		nimln(203, "filter_tmpl.nim");
		llstreamwrite_177665((*p).outp, ((NimStringDesc*) &TMP3383));
	}
	LA3: ;
	popFrame();
}

static N_INLINE(Tlineinfo162338, newlineinfo_162879)(NimStringDesc* filename, NI line, NI col) {
	Tlineinfo162338 result;
	NI32 LOC1;
	nimfr("newLineInfo", "msgs.nim")
	memset((void*)(&result), 0, sizeof(result));
	nimln(556, "msgs.nim");
	LOC1 = 0;
	LOC1 = fileinfoidx_162854(filename);
	result = newlineinfo_162867(LOC1, line, col);
	popFrame();
	return result;
}

N_NIMCALL(Tllstream177204*, filtertmpl_217009)(Tllstream177204* stdin_217011, NimStringDesc* filename, Tnode190813* call) {
	Tllstream177204* result;
	Ttmplparser217020 p;
	nimfr("filterTmpl", "filter_tmpl.nim")
	result = 0;
	memset((void*)(&p), 0, sizeof(p));
	nimln(207, "filter_tmpl.nim");
	p.info = newlineinfo_162879(filename, ((NI) 0), ((NI) 0));
	nimln(208, "filter_tmpl.nim");
	p.outp = llstreamopen_177220(((NimStringDesc*) &TMP3350));
	nimln(209, "filter_tmpl.nim");
	p.inp = stdin_217011;
	nimln(210, "filter_tmpl.nim");
	p.subschar = chararg_216020(call, ((NimStringDesc*) &TMP3384), ((NI) 1), 36);
	nimln(211, "filter_tmpl.nim");
	p.nimdirective = chararg_216020(call, ((NimStringDesc*) &TMP3385), ((NI) 2), 35);
	nimln(212, "filter_tmpl.nim");
	p.emit = strarg_216029(call, ((NimStringDesc*) &TMP3386), ((NI) 3), ((NimStringDesc*) &TMP3387));
	nimln(213, "filter_tmpl.nim");
	p.conc = strarg_216029(call, ((NimStringDesc*) &TMP3388), ((NI) 4), ((NimStringDesc*) &TMP3389));
	nimln(214, "filter_tmpl.nim");
	p.tostr = strarg_216029(call, ((NimStringDesc*) &TMP3390), ((NI) 5), ((NimStringDesc*) &TMP3381));
	nimln(215, "filter_tmpl.nim");
	p.x = rawNewString(((NI) 120));
	{
		nimln(216, "filter_tmpl.nim");
		while (1) {
			NIM_BOOL LOC3;
			NI TMP3391;
			LOC3 = 0;
			LOC3 = llstreamreadline_177610(p.inp, (&p.x));
			if (!LOC3) goto LA2;
			nimln(217, "filter_tmpl.nim");
			TMP3391 = addInt(p.info.line, ((NI16) 1));
			if (TMP3391 < -32768 || TMP3391 > 32767) raiseOverflow();
			p.info.line = (NI16)(TMP3391);
			nimln(218, "filter_tmpl.nim");
			parseline_217149((&p));
		} LA2: ;
	}
	nimln(219, "filter_tmpl.nim");
	newline_217047((&p));
	nimln(220, "filter_tmpl.nim");
	result = p.outp;
	nimln(221, "filter_tmpl.nim");
	llstreamclose_177310(p.inp);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_filter_tmplInit)(void) {
	nimfr("filter_tmpl", "filter_tmpl.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_filter_tmplDatInit)(void) {
}

