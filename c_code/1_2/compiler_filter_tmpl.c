/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct Ttmplparser220020 Ttmplparser220020;
typedef struct Tllstream180204 Tllstream180204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tlineinfo165338 Tlineinfo165338;
typedef struct Tnode193813 Tnode193813;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttype193849 Ttype193849;
typedef struct Tsym193843 Tsym193843;
typedef struct Tident169021 Tident169021;
typedef struct Tnodeseq193807 Tnodeseq193807;
typedef struct Tidobj169015 Tidobj169015;
typedef struct Ttypeseq193845 Ttypeseq193845;
typedef struct Tloc193827 Tloc193827;
typedef struct Ropeobj163009 Ropeobj163009;
typedef struct Tscope193837 Tscope193837;
typedef struct TY193944 TY193944;
typedef struct Tstrtable193817 Tstrtable193817;
typedef struct Tsymseq193815 Tsymseq193815;
typedef struct Tlib193831 Tlib193831;
typedef struct Tinstantiation193833 Tinstantiation193833;
typedef struct Tlistentry133022 Tlistentry133022;
typedef struct TY193933 TY193933;
typedef NU8 TY77659[32];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo165338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Ttmplparser220020  {
Tllstream180204* inp;
NU8 state;
Tlineinfo165338 info;
NI indent;
NI emitpar;
NimStringDesc* x;
Tllstream180204* outp;
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
struct  Tllstream180204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
struct  Tnode193813  {
Ttype193849* typ;
Tlineinfo165338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym193843* sym;
} S4;
struct {Tident169021* ident;
} S5;
struct {Tnodeseq193807* sons;
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
struct  Tidobj169015  {
  TNimObject Sup;
NI id;
};
struct  Tloc193827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype193849* t;
Ropeobj163009* r;
Ropeobj163009* heaproot;
};
struct  Ttype193849  {
  Tidobj169015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq193845* sons;
Tnode193813* n;
Tsym193843* owner;
Tsym193843* sym;
Tsym193843* destructor;
Tsym193843* deepcopy;
Tsym193843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc193827 loc;
};
struct  Tstrtable193817  {
NI counter;
Tsymseq193815* data;
};
struct  Tsym193843  {
  Tidobj169015 Sup;
NU8 kind;
union{
struct {Ttypeseq193845* typeinstcache;
Tscope193837* typscope;
} S1;
struct {TY193944* procinstcache;
Tsym193843* gcunsafetyreason;
} S2;
struct {TY193944* usedgenerics;
Tstrtable193817 tab;
} S3;
struct {Tsym193843* guard;
} S4;
} kindU;
NU16 magic;
Ttype193849* typ;
Tident169021* name;
Tlineinfo165338 info;
Tsym193843* owner;
NU32 flags;
Tnode193813* ast;
NU32 options;
NI position;
NI offset;
Tloc193827 loc;
Tlib193831* annex;
Tnode193813* constraint;
};
struct  Tident169021  {
  Tidobj169015 Sup;
NimStringDesc* s;
Tident169021* next;
NI h;
};
struct  Ropeobj163009  {
  TNimObject Sup;
Ropeobj163009* left;
Ropeobj163009* right;
NI length;
NimStringDesc* data;
};
struct  Tscope193837  {
NI depthlevel;
Tstrtable193817 symbols;
Tnodeseq193807* usingsyms;
Tscope193837* parent;
};
struct  Tlistentry133022  {
  TNimObject Sup;
Tlistentry133022* prev;
Tlistentry133022* next;
};
struct  Tlib193831  {
  Tlistentry133022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj163009* name;
Tnode193813* path;
};
struct  Tinstantiation193833  {
Tsym193843* sym;
Ttypeseq193845* concretetypes;
TY193933* usedby;
};
struct Tnodeseq193807 {
  TGenericSeq Sup;
  Tnode193813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq193845 {
  TGenericSeq Sup;
  Ttype193849* data[SEQ_DECL_SIZE];
};
struct TY193944 {
  TGenericSeq Sup;
  Tinstantiation193833* data[SEQ_DECL_SIZE];
};
struct Tsymseq193815 {
  TGenericSeq Sup;
  Tsym193843* data[SEQ_DECL_SIZE];
};
struct TY193933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, newline_220047)(Ttmplparser220020* p);
N_NIMCALL(void, llstreamwrite_180665)(Tllstream180204* s, NimStringDesc* data);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c, NI count);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, scanpar_220057)(Ttmplparser220020* p, NI d);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
static N_INLINE(NIM_BOOL, withinexpr_220139)(Ttmplparser220020* p);
N_NIMCALL(void, parseline_220149)(Ttmplparser220020* p);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NIM_BOOL, endswithopr_180450)(NimStringDesc* x);
N_NIMCALL(NU16, whichkeyword_174396)(NimStringDesc* id);
N_NIMCALL(void, localerror_167155)(Tlineinfo165338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NIM_BOOL, contains_101373)(NimStringDesc* s, TY77659 chars);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_NIMCALL(void, llstreamwrite_180696)(Tllstream180204* s, NIM_CHAR data);
N_NIMCALL(Tllstream180204*, filtertmpl_220009)(Tllstream180204* stdin_220011, NimStringDesc* filename, Tnode193813* call);
static N_INLINE(Tlineinfo165338, newlineinfo_165878)(NimStringDesc* filename, NI line, NI col);
N_NIMCALL(Tlineinfo165338, newlineinfo_165866)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(NI32, fileinfoidx_165853)(NimStringDesc* filename);
N_NIMCALL(Tllstream180204*, llstreamopen_180220)(NimStringDesc* data);
N_NIMCALL(NIM_CHAR, chararg_219020)(Tnode193813* n, NimStringDesc* name, NI pos, NIM_CHAR default_219025);
N_NIMCALL(NimStringDesc*, strarg_219029)(Tnode193813* n, NimStringDesc* name, NI pos, NimStringDesc* default_219034);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_180610)(Tllstream180204* s, NimStringDesc** line);
N_NIMCALL(void, llstreamclose_180310)(Tllstream180204* s);
NIM_CONST TY77659 Patternchars_220042 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xFF, 0x03,
0xFE, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}
;
STRING_LITERAL(TMP3332, "\015\012", 2);
STRING_LITERAL(TMP3343, "", 0);
STRING_LITERAL(TMP3346, "end", 3);
STRING_LITERAL(TMP3347, "#end", 4);
static NIM_CONST TY77659 TMP3350 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3353, "\"", 1);
STRING_LITERAL(TMP3354, "(\"", 2);
STRING_LITERAL(TMP3356, "\\x", 2);
STRING_LITERAL(TMP3358, "\\\\", 2);
STRING_LITERAL(TMP3360, "\\\'", 2);
STRING_LITERAL(TMP3362, "\\\"", 2);
STRING_LITERAL(TMP3366, "}", 1);
STRING_LITERAL(TMP3374, "$", 1);
STRING_LITERAL(TMP3376, "\\n\"", 3);
STRING_LITERAL(TMP3377, "subschar", 8);
STRING_LITERAL(TMP3378, "metachar", 8);
STRING_LITERAL(TMP3379, "emit", 4);
STRING_LITERAL(TMP3380, "result.add", 10);
STRING_LITERAL(TMP3381, "conc", 4);
STRING_LITERAL(TMP3382, " & ", 3);
STRING_LITERAL(TMP3383, "tostring", 8);
extern TFrame* frameptr_17042;

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

N_NIMCALL(void, newline_220047)(Ttmplparser220020* p) {
	NimStringDesc* LOC1;
	nimfr("newLine", "filter_tmpl.nim")
	nimln(40, "filter_tmpl.nim");
	LOC1 = 0;
	LOC1 = nsuRepeatChar(41, ((NI)chckRange((*p).emitpar, ((NI) 0), ((NI) IL64(9223372036854775807)))));
	llstreamwrite_180665((*p).outp, LOC1);
	nimln(41, "filter_tmpl.nim");
	(*p).emitpar = ((NI) 0);
	nimln(42, "filter_tmpl.nim");
	{
		if (!(((NI16) 1) < (*p).info.line)) goto LA4;
		llstreamwrite_180665((*p).outp, ((NimStringDesc*) &TMP3332));
	}
	LA4: ;
	nimln(43, "filter_tmpl.nim");
	{
		NimStringDesc* LOC10;
		if (!(*p).pendingexprline) goto LA8;
		nimln(44, "filter_tmpl.nim");
		LOC10 = 0;
		LOC10 = nsuRepeatChar(32, ((NI) 2));
		llstreamwrite_180665((*p).outp, LOC10);
		nimln(45, "filter_tmpl.nim");
		(*p).pendingexprline = NIM_FALSE;
	}
	LA8: ;
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

N_NIMCALL(void, scanpar_220057)(Ttmplparser220020* p, NI d) {
	NI i;
	nimfr("scanPar", "filter_tmpl.nim")
	nimln(48, "filter_tmpl.nim");
	i = d;
	{
		nimln(49, "filter_tmpl.nim");
		while (1) {
			NI TMP3339;
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
				NI TMP3333;
				nimln(52, "filter_tmpl.nim");
				TMP3333 = addInt((*p).par, ((NI) 1));
				(*p).par = (NI)(TMP3333);
			}
			break;
			case 41:
			{
				NI TMP3334;
				nimln(53, "filter_tmpl.nim");
				TMP3334 = subInt((*p).par, ((NI) 1));
				(*p).par = (NI)(TMP3334);
			}
			break;
			case 91:
			{
				NI TMP3335;
				nimln(54, "filter_tmpl.nim");
				TMP3335 = addInt((*p).bracket, ((NI) 1));
				(*p).bracket = (NI)(TMP3335);
			}
			break;
			case 93:
			{
				NI TMP3336;
				nimln(55, "filter_tmpl.nim");
				TMP3336 = subInt((*p).bracket, ((NI) 1));
				(*p).bracket = (NI)(TMP3336);
			}
			break;
			case 123:
			{
				NI TMP3337;
				nimln(56, "filter_tmpl.nim");
				TMP3337 = addInt((*p).curly, ((NI) 1));
				(*p).curly = (NI)(TMP3337);
			}
			break;
			case 125:
			{
				NI TMP3338;
				nimln(57, "filter_tmpl.nim");
				TMP3338 = subInt((*p).curly, ((NI) 1));
				(*p).curly = (NI)(TMP3338);
			}
			break;
			default:
			{
			}
			break;
			}
			nimln(59, "filter_tmpl.nim");
			TMP3339 = addInt(i, ((NI) 1));
			i = (NI)(TMP3339);
		}
	} LA1: ;
	popFrame();
}

static N_INLINE(NIM_BOOL, withinexpr_220139)(Ttmplparser220020* p) {
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

N_NIMCALL(void, parseline_220149)(Ttmplparser220020* p) {
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
			NI TMP3340;
			if ((NU)(j) > (NU)((*p).x->Sup.len)) raiseIndexError();
			if (!((NU8)((*p).x->data[j]) == (NU8)(32))) goto LA2;
			TMP3340 = addInt(j, ((NI) 1));
			j = (NI)(TMP3340);
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
		newline_220047(p);
	}
	goto LA3;
	LA7: ;
	{
		NI TMP3341;
		NIM_BOOL LOC16;
		NU16 LOC18;
		nimln(72, "filter_tmpl.nim");
		if ((NU)(j) > (NU)((*p).x->Sup.len)) raiseIndexError();
		if (!((NU8)((*p).x->data[j]) == (NU8)((*p).nimdirective))) goto LA10;
		nimln(73, "filter_tmpl.nim");
		newline_220047(p);
		nimln(74, "filter_tmpl.nim");
		TMP3341 = addInt(j, ((NI) 1));
		j = (NI)(TMP3341);
		{
			nimln(75, "filter_tmpl.nim");
			while (1) {
				NI TMP3342;
				if ((NU)(j) > (NU)((*p).x->Sup.len)) raiseIndexError();
				if (!((NU8)((*p).x->data[j]) == (NU8)(32))) goto LA13;
				TMP3342 = addInt(j, ((NI) 1));
				j = (NI)(TMP3342);
			} LA13: ;
		}
		nimln(76, "filter_tmpl.nim");
		d = j;
		nimln(77, "filter_tmpl.nim");
		keyw = copyString(((NimStringDesc*) &TMP3343));
		{
			nimln(78, "filter_tmpl.nim");
			while (1) {
				NI TMP3344;
				if ((NU)(j) > (NU)((*p).x->Sup.len)) raiseIndexError();
				if (!(((NU8)((*p).x->data[j])) >= ((NU8)(97)) && ((NU8)((*p).x->data[j])) <= ((NU8)(122)) || ((NU8)((*p).x->data[j])) >= ((NU8)(65)) && ((NU8)((*p).x->data[j])) <= ((NU8)(90)) || ((NU8)((*p).x->data[j])) >= ((NU8)(48)) && ((NU8)((*p).x->data[j])) <= ((NU8)(57)) || ((NU8)((*p).x->data[j])) >= ((NU8)(128)) && ((NU8)((*p).x->data[j])) <= ((NU8)(255)) || ((NU8)((*p).x->data[j])) == ((NU8)(46)) || ((NU8)((*p).x->data[j])) == ((NU8)(95)))) goto LA15;
				nimln(79, "filter_tmpl.nim");
				if ((NU)(j) > (NU)((*p).x->Sup.len)) raiseIndexError();
				keyw = addChar(keyw, (*p).x->data[j]);
				nimln(80, "filter_tmpl.nim");
				TMP3344 = addInt(j, ((NI) 1));
				j = (NI)(TMP3344);
			} LA15: ;
		}
		nimln(82, "filter_tmpl.nim");
		scanpar_220057(p, j);
		nimln(83, "filter_tmpl.nim");
		LOC16 = 0;
		LOC16 = withinexpr_220139((&(*p)));
		if (LOC16) goto LA17;
		LOC16 = endswithopr_180450((*p).x);
		LA17: ;
		(*p).pendingexprline = LOC16;
		nimln(84, "filter_tmpl.nim");
		LOC18 = 0;
		LOC18 = whichkeyword_174396(keyw);
		switch (LOC18) {
		case ((NU16) 22):
		{
			NimStringDesc* LOC25;
			nimln(86, "filter_tmpl.nim");
			{
				NI TMP3345;
				if (!(((NI) 2) <= (*p).indent)) goto LA22;
				nimln(87, "filter_tmpl.nim");
				TMP3345 = subInt((*p).indent, ((NI) 2));
				(*p).indent = (NI)(TMP3345);
			}
			goto LA20;
			LA22: ;
			{
				nimln(89, "filter_tmpl.nim");
				(*p).info.col = ((NI16)chckRange(j, ((NI16) -32768), ((NI16) 32767)));
				nimln(90, "filter_tmpl.nim");
				localerror_167155((*p).info, ((NU16) 163), ((NimStringDesc*) &TMP3346));
			}
			LA20: ;
			nimln(91, "filter_tmpl.nim");
			LOC25 = 0;
			LOC25 = nsuRepeatChar(32, ((NI)chckRange((*p).indent, ((NI) 0), ((NI) IL64(9223372036854775807)))));
			llstreamwrite_180665((*p).outp, LOC25);
			nimln(92, "filter_tmpl.nim");
			llstreamwrite_180665((*p).outp, ((NimStringDesc*) &TMP3347));
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
			NI TMP3348;
			nimln(95, "filter_tmpl.nim");
			LOC27 = 0;
			LOC27 = nsuRepeatChar(32, ((NI)chckRange((*p).indent, ((NI) 0), ((NI) IL64(9223372036854775807)))));
			llstreamwrite_180665((*p).outp, LOC27);
			nimln(96, "filter_tmpl.nim");
			LOC28 = 0;
			LOC28 = copyStr((*p).x, d);
			llstreamwrite_180665((*p).outp, LOC28);
			nimln(97, "filter_tmpl.nim");
			TMP3348 = addInt((*p).indent, ((NI) 2));
			(*p).indent = (NI)(TMP3348);
		}
		break;
		case ((NU16) 20):
		case ((NU16) 48):
		case ((NU16) 21):
		case ((NU16) 24):
		case ((NU16) 26):
		{
			NI TMP3349;
			NimStringDesc* LOC30;
			NimStringDesc* LOC31;
			nimln(99, "filter_tmpl.nim");
			TMP3349 = subInt((*p).indent, ((NI) 2));
			LOC30 = 0;
			LOC30 = nsuRepeatChar(32, ((NI)chckRange((NI)(TMP3349), ((NI) 0), ((NI) IL64(9223372036854775807)))));
			llstreamwrite_180665((*p).outp, LOC30);
			nimln(100, "filter_tmpl.nim");
			LOC31 = 0;
			LOC31 = copyStr((*p).x, d);
			llstreamwrite_180665((*p).outp, LOC31);
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
			LOC33 = nsuRepeatChar(32, ((NI)chckRange((*p).indent, ((NI) 0), ((NI) IL64(9223372036854775807)))));
			llstreamwrite_180665((*p).outp, LOC33);
			nimln(103, "filter_tmpl.nim");
			LOC34 = 0;
			LOC34 = copyStr((*p).x, d);
			llstreamwrite_180665((*p).outp, LOC34);
			nimln(104, "filter_tmpl.nim");
			{
				NIM_BOOL LOC37;
				NI TMP3351;
				LOC37 = 0;
				LOC37 = contains_101373((*p).x, TMP3350);
				if (!!(LOC37)) goto LA38;
				nimln(106, "filter_tmpl.nim");
				TMP3351 = addInt((*p).indent, ((NI) 2));
				(*p).indent = (NI)(TMP3351);
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
			LOC41 = nsuRepeatChar(32, ((NI)chckRange((*p).indent, ((NI) 0), ((NI) IL64(9223372036854775807)))));
			llstreamwrite_180665((*p).outp, LOC41);
			nimln(109, "filter_tmpl.nim");
			LOC42 = 0;
			LOC42 = copyStr((*p).x, d);
			llstreamwrite_180665((*p).outp, LOC42);
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
			NI TMP3352;
			NimStringDesc* LOC45;
			nimln(121, "filter_tmpl.nim");
			llstreamwrite_180665((*p).outp, (*p).conc);
			nimln(122, "filter_tmpl.nim");
			llstreamwrite_180665((*p).outp, ((NimStringDesc*) &TMP3332));
			nimln(123, "filter_tmpl.nim");
			TMP3352 = addInt((*p).indent, ((NI) 2));
			LOC45 = 0;
			LOC45 = nsuRepeatChar(32, ((NI)chckRange((NI)(TMP3352), ((NI) 0), ((NI) IL64(9223372036854775807)))));
			llstreamwrite_180665((*p).outp, LOC45);
			nimln(124, "filter_tmpl.nim");
			llstreamwrite_180665((*p).outp, ((NimStringDesc*) &TMP3353));
		}
		break;
		case ((NU8) 0):
		{
			NimStringDesc* LOC47;
			NI TMP3355;
			nimln(126, "filter_tmpl.nim");
			newline_220047(p);
			nimln(127, "filter_tmpl.nim");
			LOC47 = 0;
			LOC47 = nsuRepeatChar(32, ((NI)chckRange((*p).indent, ((NI) 0), ((NI) IL64(9223372036854775807)))));
			llstreamwrite_180665((*p).outp, LOC47);
			nimln(128, "filter_tmpl.nim");
			llstreamwrite_180665((*p).outp, (*p).emit);
			nimln(129, "filter_tmpl.nim");
			llstreamwrite_180665((*p).outp, ((NimStringDesc*) &TMP3354));
			nimln(130, "filter_tmpl.nim");
			TMP3355 = addInt((*p).emitpar, ((NI) 1));
			(*p).emitpar = (NI)(TMP3355);
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
					NI TMP3357;
					nimln(137, "filter_tmpl.nim");
					llstreamwrite_180665((*p).outp, ((NimStringDesc*) &TMP3356));
					nimln(138, "filter_tmpl.nim");
					if ((NU)(j) > (NU)((*p).x->Sup.len)) raiseIndexError();
					LOC52 = 0;
					LOC52 = nsuToHex(((NI64) (((NU8)((*p).x->data[j])))), ((NI) 2));
					llstreamwrite_180665((*p).outp, LOC52);
					nimln(139, "filter_tmpl.nim");
					TMP3357 = addInt(j, ((NI) 1));
					j = (NI)(TMP3357);
				}
				break;
				case 92:
				{
					NI TMP3359;
					nimln(141, "filter_tmpl.nim");
					llstreamwrite_180665((*p).outp, ((NimStringDesc*) &TMP3358));
					nimln(142, "filter_tmpl.nim");
					TMP3359 = addInt(j, ((NI) 1));
					j = (NI)(TMP3359);
				}
				break;
				case 39:
				{
					NI TMP3361;
					nimln(144, "filter_tmpl.nim");
					llstreamwrite_180665((*p).outp, ((NimStringDesc*) &TMP3360));
					nimln(145, "filter_tmpl.nim");
					TMP3361 = addInt(j, ((NI) 1));
					j = (NI)(TMP3361);
				}
				break;
				case 34:
				{
					NI TMP3363;
					nimln(147, "filter_tmpl.nim");
					llstreamwrite_180665((*p).outp, ((NimStringDesc*) &TMP3362));
					nimln(148, "filter_tmpl.nim");
					TMP3363 = addInt(j, ((NI) 1));
					j = (NI)(TMP3363);
				}
				break;
				default:
				{
					nimln(150, "filter_tmpl.nim");
					{
						NI TMP3364;
						if ((NU)(j) > (NU)((*p).x->Sup.len)) raiseIndexError();
						if (!((NU8)((*p).x->data[j]) == (NU8)((*p).subschar))) goto LA59;
						nimln(152, "filter_tmpl.nim");
						TMP3364 = addInt(j, ((NI) 1));
						j = (NI)(TMP3364);
						nimln(153, "filter_tmpl.nim");
						if ((NU)(j) > (NU)((*p).x->Sup.len)) raiseIndexError();
						switch (((NU8)((*p).x->data[j]))) {
						case 123:
						{
							NI TMP3365;
							nimln(155, "filter_tmpl.nim");
							(*p).info.col = ((NI16)chckRange(j, ((NI16) -32768), ((NI16) 32767)));
							nimln(156, "filter_tmpl.nim");
							llstreamwrite_180696((*p).outp, 34);
							nimln(157, "filter_tmpl.nim");
							llstreamwrite_180665((*p).outp, (*p).conc);
							nimln(158, "filter_tmpl.nim");
							llstreamwrite_180665((*p).outp, (*p).tostr);
							nimln(159, "filter_tmpl.nim");
							llstreamwrite_180696((*p).outp, 40);
							nimln(160, "filter_tmpl.nim");
							TMP3365 = addInt(j, ((NI) 1));
							j = (NI)(TMP3365);
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
										localerror_167155((*p).info, ((NU16) 188), ((NimStringDesc*) &TMP3366));
										nimln(166, "filter_tmpl.nim");
										goto LA62;
									}
									break;
									case 123:
									{
										NI TMP3367;
										NI TMP3368;
										nimln(168, "filter_tmpl.nim");
										TMP3367 = addInt(j, ((NI) 1));
										j = (NI)(TMP3367);
										nimln(169, "filter_tmpl.nim");
										TMP3368 = addInt(curly, ((NI) 1));
										curly = (NI)(TMP3368);
										nimln(170, "filter_tmpl.nim");
										llstreamwrite_180696((*p).outp, 123);
									}
									break;
									case 125:
									{
										NI TMP3369;
										nimln(172, "filter_tmpl.nim");
										TMP3369 = addInt(j, ((NI) 1));
										j = (NI)(TMP3369);
										nimln(173, "filter_tmpl.nim");
										{
											if (!(curly == ((NI) 0))) goto LA69;
											goto LA62;
										}
										LA69: ;
										nimln(174, "filter_tmpl.nim");
										{
											NI TMP3370;
											if (!(((NI) 0) < curly)) goto LA73;
											TMP3370 = subInt(curly, ((NI) 1));
											curly = (NI)(TMP3370);
										}
										LA73: ;
										nimln(175, "filter_tmpl.nim");
										llstreamwrite_180696((*p).outp, 125);
									}
									break;
									default:
									{
										NI TMP3371;
										nimln(177, "filter_tmpl.nim");
										if ((NU)(j) > (NU)((*p).x->Sup.len)) raiseIndexError();
										llstreamwrite_180696((*p).outp, (*p).x->data[j]);
										nimln(178, "filter_tmpl.nim");
										TMP3371 = addInt(j, ((NI) 1));
										j = (NI)(TMP3371);
									}
									break;
									}
								}
							} LA62: ;
							nimln(179, "filter_tmpl.nim");
							llstreamwrite_180696((*p).outp, 41);
							nimln(180, "filter_tmpl.nim");
							llstreamwrite_180665((*p).outp, (*p).conc);
							nimln(181, "filter_tmpl.nim");
							llstreamwrite_180696((*p).outp, 34);
						}
						break;
						case 97 ... 122:
						case 65 ... 90:
						case 128 ... 255:
						{
							nimln(183, "filter_tmpl.nim");
							llstreamwrite_180696((*p).outp, 34);
							nimln(184, "filter_tmpl.nim");
							llstreamwrite_180665((*p).outp, (*p).conc);
							nimln(185, "filter_tmpl.nim");
							llstreamwrite_180665((*p).outp, (*p).tostr);
							nimln(186, "filter_tmpl.nim");
							llstreamwrite_180696((*p).outp, 40);
							{
								nimln(187, "filter_tmpl.nim");
								while (1) {
									NI TMP3372;
									if ((NU)(j) > (NU)((*p).x->Sup.len)) raiseIndexError();
									if (!(((NU8)((*p).x->data[j])) >= ((NU8)(97)) && ((NU8)((*p).x->data[j])) <= ((NU8)(122)) || ((NU8)((*p).x->data[j])) >= ((NU8)(65)) && ((NU8)((*p).x->data[j])) <= ((NU8)(90)) || ((NU8)((*p).x->data[j])) >= ((NU8)(48)) && ((NU8)((*p).x->data[j])) <= ((NU8)(57)) || ((NU8)((*p).x->data[j])) >= ((NU8)(128)) && ((NU8)((*p).x->data[j])) <= ((NU8)(255)) || ((NU8)((*p).x->data[j])) == ((NU8)(46)) || ((NU8)((*p).x->data[j])) == ((NU8)(95)))) goto LA78;
									nimln(188, "filter_tmpl.nim");
									if ((NU)(j) > (NU)((*p).x->Sup.len)) raiseIndexError();
									llstreamwrite_180696((*p).outp, (*p).x->data[j]);
									nimln(189, "filter_tmpl.nim");
									TMP3372 = addInt(j, ((NI) 1));
									j = (NI)(TMP3372);
								} LA78: ;
							}
							nimln(190, "filter_tmpl.nim");
							llstreamwrite_180696((*p).outp, 41);
							nimln(191, "filter_tmpl.nim");
							llstreamwrite_180665((*p).outp, (*p).conc);
							nimln(192, "filter_tmpl.nim");
							llstreamwrite_180696((*p).outp, 34);
						}
						break;
						default:
						{
							nimln(194, "filter_tmpl.nim");
							{
								NI TMP3373;
								if ((NU)(j) > (NU)((*p).x->Sup.len)) raiseIndexError();
								if (!((NU8)((*p).x->data[j]) == (NU8)((*p).subschar))) goto LA82;
								nimln(195, "filter_tmpl.nim");
								llstreamwrite_180696((*p).outp, (*p).subschar);
								nimln(196, "filter_tmpl.nim");
								TMP3373 = addInt(j, ((NI) 1));
								j = (NI)(TMP3373);
							}
							goto LA80;
							LA82: ;
							{
								nimln(198, "filter_tmpl.nim");
								(*p).info.col = ((NI16)chckRange(j, ((NI16) -32768), ((NI16) 32767)));
								nimln(199, "filter_tmpl.nim");
								localerror_167155((*p).info, ((NU16) 167), ((NimStringDesc*) &TMP3374));
							}
							LA80: ;
						}
						break;
						}
					}
					goto LA57;
					LA59: ;
					{
						NI TMP3375;
						nimln(201, "filter_tmpl.nim");
						if ((NU)(j) > (NU)((*p).x->Sup.len)) raiseIndexError();
						llstreamwrite_180696((*p).outp, (*p).x->data[j]);
						nimln(202, "filter_tmpl.nim");
						TMP3375 = addInt(j, ((NI) 1));
						j = (NI)(TMP3375);
					}
					LA57: ;
				}
				break;
				}
			}
		} LA48: ;
		nimln(203, "filter_tmpl.nim");
		llstreamwrite_180665((*p).outp, ((NimStringDesc*) &TMP3376));
	}
	LA3: ;
	popFrame();
}

static N_INLINE(Tlineinfo165338, newlineinfo_165878)(NimStringDesc* filename, NI line, NI col) {
	Tlineinfo165338 result;
	NI32 LOC1;
	nimfr("newLineInfo", "msgs.nim")
	memset((void*)(&result), 0, sizeof(result));
	nimln(556, "msgs.nim");
	LOC1 = 0;
	LOC1 = fileinfoidx_165853(filename);
	result = newlineinfo_165866(LOC1, line, col);
	popFrame();
	return result;
}

N_NIMCALL(Tllstream180204*, filtertmpl_220009)(Tllstream180204* stdin_220011, NimStringDesc* filename, Tnode193813* call) {
	Tllstream180204* result;
	Ttmplparser220020 p;
	nimfr("filterTmpl", "filter_tmpl.nim")
	result = 0;
	memset((void*)(&p), 0, sizeof(p));
	nimln(207, "filter_tmpl.nim");
	p.info = newlineinfo_165878(filename, ((NI) 0), ((NI) 0));
	nimln(208, "filter_tmpl.nim");
	p.outp = llstreamopen_180220(((NimStringDesc*) &TMP3343));
	nimln(209, "filter_tmpl.nim");
	p.inp = stdin_220011;
	nimln(210, "filter_tmpl.nim");
	p.subschar = chararg_219020(call, ((NimStringDesc*) &TMP3377), ((NI) 1), 36);
	nimln(211, "filter_tmpl.nim");
	p.nimdirective = chararg_219020(call, ((NimStringDesc*) &TMP3378), ((NI) 2), 35);
	nimln(212, "filter_tmpl.nim");
	p.emit = strarg_219029(call, ((NimStringDesc*) &TMP3379), ((NI) 3), ((NimStringDesc*) &TMP3380));
	nimln(213, "filter_tmpl.nim");
	p.conc = strarg_219029(call, ((NimStringDesc*) &TMP3381), ((NI) 4), ((NimStringDesc*) &TMP3382));
	nimln(214, "filter_tmpl.nim");
	p.tostr = strarg_219029(call, ((NimStringDesc*) &TMP3383), ((NI) 5), ((NimStringDesc*) &TMP3374));
	nimln(215, "filter_tmpl.nim");
	p.x = rawNewString(((NI) 120));
	{
		nimln(216, "filter_tmpl.nim");
		while (1) {
			NIM_BOOL LOC3;
			NI TMP3384;
			LOC3 = 0;
			LOC3 = llstreamreadline_180610(p.inp, (&p.x));
			if (!LOC3) goto LA2;
			nimln(217, "filter_tmpl.nim");
			TMP3384 = addInt(p.info.line, ((NI16) 1));
			if (TMP3384 < -32768 || TMP3384 > 32767) raiseOverflow();
			p.info.line = (NI16)(TMP3384);
			nimln(218, "filter_tmpl.nim");
			parseline_220149((&p));
		} LA2: ;
	}
	nimln(219, "filter_tmpl.nim");
	newline_220047((&p));
	nimln(220, "filter_tmpl.nim");
	result = p.outp;
	nimln(221, "filter_tmpl.nim");
	llstreamclose_180310(p.inp);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_filter_tmplInit)(void) {
	nimfr("filter_tmpl", "filter_tmpl.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_filter_tmplDatInit)(void) {
}

