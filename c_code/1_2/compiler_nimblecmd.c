/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tlineinfo165338 Tlineinfo165338;
typedef struct Tlinkedlist133028 Tlinkedlist133028;
typedef struct Tlistentry133022 Tlistentry133022;
typedef struct Stringtableobj137012 Stringtableobj137012;
typedef struct Twin32finddata106219 Twin32finddata106219;
typedef struct Tfiletime105248 Tfiletime105248;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Keyvaluepairseq137010 Keyvaluepairseq137010;
typedef struct TY108548 TY108548;
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
struct  Tlinkedlist133028  {
Tlistentry133022* head;
Tlistentry133022* tail;
NI counter;
};
struct  Tfiletime105248  {
NI32 dwlowdatetime;
NI32 dwhighdatetime;
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
typedef N_STDCALL_PTR(NI32, TY106245) (NI hfindfile, Twin32finddata106219* lpfindfiledata);
typedef N_STDCALL_PTR(void, TY106405) (NI hfindfile);
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
struct  Stringtableobj137012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq137010* data;
NU8 mode;
};
struct TY108548 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Tlistentry133022  {
  TNimObject Sup;
Tlistentry133022* prev;
Tlistentry133022* next;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct Keyvaluepairseq137010 {
  TGenericSeq Sup;
  TY108548 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, addpath_175012)(NimStringDesc* path, Tlineinfo165338 info);
N_NIMCALL(NIM_BOOL, contains_133219)(Tlinkedlist133028* list, NimStringDesc* data);
N_NIMCALL(void, prependstr_133419)(Tlinkedlist133028* list, NimStringDesc* data);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NI, versionsplitpos_175023)(NimStringDesc* s);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, HEX3CHEX2E_175064)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, addpackage_175126)(Stringtableobj137012* packages, NimStringDesc* p);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76643, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NimStringDesc*, nstGet)(Stringtableobj137012* t, NimStringDesc* key);
N_NIMCALL(void, nstPut)(Stringtableobj137012* t, NimStringDesc* key, NimStringDesc* val);
N_NIMCALL(void, addnimblepath_175175)(NimStringDesc* p, Tlineinfo165338 info);
N_NIMCALL(void, message_167188)(Tlineinfo165338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, addpathwithnimfiles_175186)(NimStringDesc* p, Tlineinfo165338 info);
N_NIMCALL(NIM_BOOL, hasnimfile_175190)(NimStringDesc* dir);
N_NIMCALL(NI, findfirstfile_116416)(NimStringDesc* a, Twin32finddata106219* b);
N_NIMCALL(NimStringDesc*, HEX2F_119492)(NimStringDesc* head, NimStringDesc* tail);
static N_INLINE(NIM_BOOL, skipfinddata_116436)(Twin32finddata106219* f);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, HEX24_81389)(NI16* s);
N_NIMCALL(NIM_BOOL, nsuEndsWith)(NimStringDesc* s, NimStringDesc* suffix);
N_NIMCALL(void, addpathrec_175252)(NimStringDesc* dir, Tlineinfo165338 info);
N_NIMCALL(Stringtableobj137012*, nstnewStringTable)(NU8 mode);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, nimblepath_175347)(NimStringDesc* path, Tlineinfo165338 info);
STRING_LITERAL(TMP1778, "head", 4);
STRING_LITERAL(TMP1785, "*", 1);
STRING_LITERAL(TMP1791, ".nim", 4);
extern Tlinkedlist133028 searchpaths_156132;
extern TFrame* frameptr_17042;
extern NI gverbosity_156137;
extern Tlinkedlist133028 lazypaths_156133;
extern TY106245 Dl_106244;
extern TY106405 Dl_106404;

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

N_NIMCALL(void, addpath_175012)(NimStringDesc* path, Tlineinfo165338 info) {
	nimfr("addPath", "nimblecmd.nim")
	nimln(15, "nimblecmd.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_133219((&searchpaths_156132), path);
		if (!!(LOC3)) goto LA4;
		nimln(16, "nimblecmd.nim");
		prependstr_133419((&searchpaths_156132), path);
	}
	LA4: ;
	popFrame();
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

N_NIMCALL(NI, versionsplitpos_175023)(NimStringDesc* s) {
	NI result;
	NI TMP1776;
	nimfr("versionSplitPos", "nimblecmd.nim")
	result = 0;
	nimln(19, "nimblecmd.nim");
	TMP1776 = subInt((s ? s->Sup.len : 0), ((NI) 2));
	result = (NI)(TMP1776);
	{
		nimln(20, "nimblecmd.nim");
		while (1) {
			NIM_BOOL LOC3;
			NI TMP1777;
			LOC3 = 0;
			LOC3 = (((NI) 1) < result);
			if (!(LOC3)) goto LA4;
			if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
			LOC3 = (((NU8)(s->data[result])) >= ((NU8)(48)) && ((NU8)(s->data[result])) <= ((NU8)(57)) || ((NU8)(s->data[result])) == ((NU8)(46)));
			LA4: ;
			if (!LOC3) goto LA2;
			TMP1777 = subInt(result, ((NI) 1));
			result = (NI)(TMP1777);
		} LA2: ;
	}
	nimln(21, "nimblecmd.nim");
	{
		if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
		if (!!(((NU8)(s->data[result]) == (NU8)(45)))) goto LA7;
		result = (s ? s->Sup.len : 0);
	}
	LA7: ;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
{	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (*a).Sup.len);
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
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

N_NIMCALL(NIM_BOOL, HEX3CHEX2E_175064)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI i;
	NI j;
	NI vera;
	NI verb;
	nimfr("<.", "nimblecmd.nim")
{	result = 0;
	nimln(28, "nimblecmd.nim");
	{
		if (!eqStrings(a, ((NimStringDesc*) &TMP1778))) goto LA3;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	nimln(29, "nimblecmd.nim");
	i = ((NI) 0);
	nimln(30, "nimblecmd.nim");
	j = ((NI) 0);
	nimln(31, "nimblecmd.nim");
	vera = ((NI) 0);
	nimln(32, "nimblecmd.nim");
	verb = ((NI) 0);
	{
		nimln(33, "nimblecmd.nim");
		while (1) {
			NI ii;
			NI jj;
			NI TMP1779;
			NI TMP1780;
			nimln(34, "nimblecmd.nim");
			ii = npuParseInt(a, (&vera), i);
			nimln(35, "nimblecmd.nim");
			jj = npuParseInt(b, (&verb), j);
			nimln(37, "nimblecmd.nim");
			{
				NIM_BOOL LOC9;
				LOC9 = 0;
				LOC9 = (ii <= ((NI) 0));
				if (LOC9) goto LA10;
				LOC9 = (jj <= ((NI) 0));
				LA10: ;
				if (!LOC9) goto LA11;
				result = (((NI) 0) < jj);
				goto BeforeRet;
			}
			LA11: ;
			nimln(38, "nimblecmd.nim");
			{
				if (!(vera < verb)) goto LA15;
				result = NIM_TRUE;
				goto BeforeRet;
			}
			goto LA13;
			LA15: ;
			{
				nimln(39, "nimblecmd.nim");
				if (!(verb < vera)) goto LA18;
				result = NIM_FALSE;
				goto BeforeRet;
			}
			goto LA13;
			LA18: ;
			LA13: ;
			nimln(41, "nimblecmd.nim");
			TMP1779 = addInt(i, ii);
			i = (NI)(TMP1779);
			nimln(42, "nimblecmd.nim");
			TMP1780 = addInt(j, jj);
			j = (NI)(TMP1780);
			nimln(43, "nimblecmd.nim");
			{
				NI TMP1781;
				if ((NU)(i) > (NU)(a->Sup.len)) raiseIndexError();
				if (!((NU8)(a->data[i]) == (NU8)(46))) goto LA22;
				TMP1781 = addInt(i, ((NI) 1));
				i = (NI)(TMP1781);
			}
			LA22: ;
			nimln(44, "nimblecmd.nim");
			{
				NI TMP1782;
				if ((NU)(j) > (NU)(b->Sup.len)) raiseIndexError();
				if (!((NU8)(b->data[j]) == (NU8)(46))) goto LA26;
				TMP1782 = addInt(j, ((NI) 1));
				j = (NI)(TMP1782);
			}
			LA26: ;
		}
	}
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, addpackage_175126)(Stringtableobj137012* packages, NimStringDesc* p) {
	NI x;
	NimStringDesc* name;
	NI TMP1783;
	nimfr("addPackage", "nimblecmd.nim")
	nimln(47, "nimblecmd.nim");
	x = versionsplitpos_175023(p);
	nimln(48, "nimblecmd.nim");
	TMP1783 = subInt(x, ((NI) 1));
	name = copyStrLast(p, ((NI) 0), (NI)(TMP1783));
	nimln(49, "nimblecmd.nim");
	{
		NimStringDesc* version;
		NI TMP1784;
		if (!(x < (p ? p->Sup.len : 0))) goto LA3;
		nimln(50, "nimblecmd.nim");
		TMP1784 = addInt(x, ((NI) 1));
		version = copyStr(p, (NI)(TMP1784));
		nimln(51, "nimblecmd.nim");
		{
			NimStringDesc* LOC7;
			NIM_BOOL LOC8;
			LOC7 = 0;
			LOC7 = nstGet(packages, name);
			LOC8 = 0;
			LOC8 = HEX3CHEX2E_175064(LOC7, version);
			if (!LOC8) goto LA9;
			nimln(52, "nimblecmd.nim");
			nstPut(packages, name, version);
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		nimln(54, "nimblecmd.nim");
		nstPut(packages, name, ((NimStringDesc*) &TMP1778));
	}
	LA1: ;
	popFrame();
}

N_NIMCALL(void, addnimblepath_175175)(NimStringDesc* p, Tlineinfo165338 info) {
	nimfr("addNimblePath", "nimblecmd.nim")
	nimln(62, "nimblecmd.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_133219((&searchpaths_156132), p);
		if (!!(LOC3)) goto LA4;
		nimln(63, "nimblecmd.nim");
		{
			if (!(((NI) 1) <= gverbosity_156137)) goto LA8;
			message_167188(info, ((NU16) 273), p);
		}
		LA8: ;
		nimln(64, "nimblecmd.nim");
		prependstr_133419((&lazypaths_156133), p);
	}
	LA4: ;
	popFrame();
}

static N_INLINE(NIM_BOOL, skipfinddata_116436)(Twin32finddata106219* f) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	NIM_BOOL LOC3;
	NIM_BOOL LOC5;
	nimfr("skipFindData", "os.nim")
	result = 0;
	nimln(379, "os.nim");
	LOC1 = 0;
	LOC1 = (((NI) ((*f).cfilename[(((NI) 0))- 0])) == ((NI) 46));
	if (!(LOC1)) goto LA2;
	LOC3 = 0;
	LOC3 = (((NI) ((*f).cfilename[(((NI) 1))- 0])) == ((NI) 0));
	if (LOC3) goto LA4;
	nimln(380, "os.nim");
	LOC5 = 0;
	LOC5 = (((NI) ((*f).cfilename[(((NI) 1))- 0])) == ((NI) 46));
	if (!(LOC5)) goto LA6;
	LOC5 = (((NI) ((*f).cfilename[(((NI) 2))- 0])) == ((NI) 0));
	LA6: ;
	LOC3 = LOC5;
	LA4: ;
	LOC1 = LOC3;
	LA2: ;
	result = LOC1;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, hasnimfile_175190)(NimStringDesc* dir) {
	NIM_BOOL result;
	nimfr("hasNimFile", "nimblecmd.nim")
	result = 0;
	{
		NU8 kind_175194;
		NimStringDesc* path_175195;
		Twin32finddata106219 f_175208;
		NI h_175210;
		NimStringDesc* LOC2;
		kind_175194 = 0;
		path_175195 = 0;
		memset((void*)(&f_175208), 0, sizeof(f_175208));
		nimln(1280, "os.nim");
		LOC2 = 0;
		LOC2 = HEX2F_119492(dir, ((NimStringDesc*) &TMP1785));
		h_175210 = findfirstfile_116416(LOC2, (&f_175208));
		nimln(1281, "os.nim");
		{
			if (!!((h_175210 == ((NI) -1)))) goto LA5;
			{
				nimln(1282, "os.nim");
				while (1) {
					NU8 k_175212;
					nimln(1283, "os.nim");
					k_175212 = ((NU8) 0);
					nimln(1284, "os.nim");
					{
						NIM_BOOL LOC11;
						NimStringDesc* LOC22;
						NimStringDesc* LOC23;
						LOC11 = 0;
						LOC11 = skipfinddata_116436((&f_175208));
						if (!!(LOC11)) goto LA12;
						nimln(1285, "os.nim");
						{
							if (!!(((NI32)(f_175208.dwfileattributes & ((NI32) 16)) == ((NI32) 0)))) goto LA16;
							nimln(1286, "os.nim");
							k_175212 = ((NU8) 2);
						}
						LA16: ;
						nimln(1287, "os.nim");
						{
							NI TMP1786;
							if (!!(((NI32)(f_175208.dwfileattributes & ((NI32) 1024)) == ((NI32) 0)))) goto LA20;
							nimln(1288, "os.nim");
							TMP1786 = addInt(k_175212, ((NI) 1));
							if (TMP1786 < 0 || TMP1786 > 3) raiseOverflow();
							k_175212 = (NU8)(TMP1786);
						}
						LA20: ;
						nimln(1283, "os.nim");
						kind_175194 = k_175212;
						nimln(1289, "os.nim");
						LOC22 = 0;
						LOC22 = HEX24_81389(((NI16*) ((&f_175208.cfilename[(((NI) 0))- 0]))));
						LOC23 = 0;
						LOC23 = nosextractFilename(LOC22);
						path_175195 = HEX2F_119492(dir, LOC23);
						nimln(69, "nimblecmd.nim");
						{
							NIM_BOOL LOC26;
							LOC26 = 0;
							LOC26 = (kind_175194 == ((NU8) 0));
							if (!(LOC26)) goto LA27;
							LOC26 = nsuEndsWith(path_175195, ((NimStringDesc*) &TMP1791));
							LA27: ;
							if (!LOC26) goto LA28;
							nimln(70, "nimblecmd.nim");
							result = NIM_TRUE;
							nimln(71, "nimblecmd.nim");
							goto LA1;
						}
						LA28: ;
					}
					LA12: ;
					nimln(1290, "os.nim");
					{
						NI32 LOC32;
						LOC32 = 0;
						LOC32 = Dl_106244(h_175210, (&f_175208));
						if (!(LOC32 == ((NI32) 0))) goto LA33;
						goto LA7;
					}
					LA33: ;
				}
			} LA7: ;
			nimln(1291, "os.nim");
			Dl_106404(h_175210);
		}
		LA5: ;
	} LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, addpathwithnimfiles_175186)(NimStringDesc* p, Tlineinfo165338 info) {
	nimfr("addPathWithNimFiles", "nimblecmd.nim")
	nimln(72, "nimblecmd.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = hasnimfile_175190(p);
		if (!LOC3) goto LA4;
		nimln(73, "nimblecmd.nim");
		addnimblepath_175175(p, info);
	}
	goto LA1;
	LA4: ;
	{
		{
			NU8 kind_175214;
			NimStringDesc* p2_175215;
			Twin32finddata106219 f_175219;
			NI h_175221;
			NimStringDesc* LOC8;
			kind_175214 = 0;
			p2_175215 = 0;
			memset((void*)(&f_175219), 0, sizeof(f_175219));
			nimln(1280, "os.nim");
			LOC8 = 0;
			LOC8 = HEX2F_119492(p, ((NimStringDesc*) &TMP1785));
			h_175221 = findfirstfile_116416(LOC8, (&f_175219));
			nimln(1281, "os.nim");
			{
				if (!!((h_175221 == ((NI) -1)))) goto LA11;
				{
					nimln(1282, "os.nim");
					while (1) {
						NU8 k_175223;
						nimln(1283, "os.nim");
						k_175223 = ((NU8) 0);
						nimln(1284, "os.nim");
						{
							NIM_BOOL LOC17;
							NimStringDesc* LOC28;
							NimStringDesc* LOC29;
							LOC17 = 0;
							LOC17 = skipfinddata_116436((&f_175219));
							if (!!(LOC17)) goto LA18;
							nimln(1285, "os.nim");
							{
								if (!!(((NI32)(f_175219.dwfileattributes & ((NI32) 16)) == ((NI32) 0)))) goto LA22;
								nimln(1286, "os.nim");
								k_175223 = ((NU8) 2);
							}
							LA22: ;
							nimln(1287, "os.nim");
							{
								NI TMP1792;
								if (!!(((NI32)(f_175219.dwfileattributes & ((NI32) 1024)) == ((NI32) 0)))) goto LA26;
								nimln(1288, "os.nim");
								TMP1792 = addInt(k_175223, ((NI) 1));
								if (TMP1792 < 0 || TMP1792 > 3) raiseOverflow();
								k_175223 = (NU8)(TMP1792);
							}
							LA26: ;
							nimln(1283, "os.nim");
							kind_175214 = k_175223;
							nimln(1289, "os.nim");
							LOC28 = 0;
							LOC28 = HEX24_81389(((NI16*) ((&f_175219.cfilename[(((NI) 0))- 0]))));
							LOC29 = 0;
							LOC29 = nosextractFilename(LOC28);
							p2_175215 = HEX2F_119492(p, LOC29);
							nimln(76, "nimblecmd.nim");
							{
								NIM_BOOL LOC32;
								LOC32 = 0;
								LOC32 = hasnimfile_175190(p2_175215);
								if (!LOC32) goto LA33;
								addnimblepath_175175(p2_175215, info);
							}
							LA33: ;
						}
						LA18: ;
						nimln(1290, "os.nim");
						{
							NI32 LOC37;
							LOC37 = 0;
							LOC37 = Dl_106244(h_175221, (&f_175219));
							if (!(LOC37 == ((NI32) 0))) goto LA38;
							goto LA13;
						}
						LA38: ;
					}
				} LA13: ;
				nimln(1291, "os.nim");
				Dl_106404(h_175221);
			}
			LA11: ;
		}
	}
	LA1: ;
	popFrame();
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(void, addpathrec_175252)(NimStringDesc* dir, Tlineinfo165338 info) {
	Stringtableobj137012* packages;
	NI pos;
	NI TMP1793;
	nimfr("addPathRec", "nimblecmd.nim")
	nimln(79, "nimblecmd.nim");
	packages = nstnewStringTable(((NU8) 2));
	nimln(80, "nimblecmd.nim");
	TMP1793 = subInt((dir ? dir->Sup.len : 0), ((NI) 1));
	pos = (NI)(TMP1793);
	nimln(81, "nimblecmd.nim");
	{
		NI TMP1794;
		if ((NU)(pos) > (NU)(dir->Sup.len)) raiseIndexError();
		if (!(((NU8)(dir->data[pos])) == ((NU8)(92)) || ((NU8)(dir->data[pos])) == ((NU8)(47)))) goto LA3;
		TMP1794 = addInt(pos, ((NI) 1));
		pos = (NI)(TMP1794);
	}
	LA3: ;
	{
		NU8 k_175278;
		NimStringDesc* p_175279;
		Twin32finddata106219 f_175293;
		NI h_175295;
		NimStringDesc* LOC6;
		k_175278 = 0;
		p_175279 = 0;
		memset((void*)(&f_175293), 0, sizeof(f_175293));
		nimln(1280, "os.nim");
		LOC6 = 0;
		LOC6 = HEX2F_119492(dir, ((NimStringDesc*) &TMP1785));
		h_175295 = findfirstfile_116416(LOC6, (&f_175293));
		nimln(1281, "os.nim");
		{
			if (!!((h_175295 == ((NI) -1)))) goto LA9;
			{
				nimln(1282, "os.nim");
				while (1) {
					NU8 k_175297;
					nimln(1283, "os.nim");
					k_175297 = ((NU8) 0);
					nimln(1284, "os.nim");
					{
						NIM_BOOL LOC15;
						NimStringDesc* LOC26;
						NimStringDesc* LOC27;
						LOC15 = 0;
						LOC15 = skipfinddata_116436((&f_175293));
						if (!!(LOC15)) goto LA16;
						nimln(1285, "os.nim");
						{
							if (!!(((NI32)(f_175293.dwfileattributes & ((NI32) 16)) == ((NI32) 0)))) goto LA20;
							nimln(1286, "os.nim");
							k_175297 = ((NU8) 2);
						}
						LA20: ;
						nimln(1287, "os.nim");
						{
							NI TMP1795;
							if (!!(((NI32)(f_175293.dwfileattributes & ((NI32) 1024)) == ((NI32) 0)))) goto LA24;
							nimln(1288, "os.nim");
							TMP1795 = addInt(k_175297, ((NI) 1));
							if (TMP1795 < 0 || TMP1795 > 3) raiseOverflow();
							k_175297 = (NU8)(TMP1795);
						}
						LA24: ;
						nimln(1283, "os.nim");
						k_175278 = k_175297;
						nimln(1289, "os.nim");
						LOC26 = 0;
						LOC26 = HEX24_81389(((NI16*) ((&f_175293.cfilename[(((NI) 0))- 0]))));
						LOC27 = 0;
						LOC27 = nosextractFilename(LOC26);
						p_175279 = HEX2F_119492(dir, LOC27);
						nimln(83, "nimblecmd.nim");
						{
							NIM_BOOL LOC30;
							LOC30 = 0;
							LOC30 = (k_175278 == ((NU8) 2));
							if (!(LOC30)) goto LA31;
							if ((NU)(pos) > (NU)(p_175279->Sup.len)) raiseIndexError();
							LOC30 = !(((NU8)(p_175279->data[pos]) == (NU8)(46)));
							LA31: ;
							if (!LOC30) goto LA32;
							nimln(84, "nimblecmd.nim");
							addpackage_175126(packages, p_175279);
						}
						LA32: ;
					}
					LA16: ;
					nimln(1290, "os.nim");
					{
						NI32 LOC36;
						LOC36 = 0;
						LOC36 = Dl_106244(h_175295, (&f_175293));
						if (!(LOC36 == ((NI32) 0))) goto LA37;
						goto LA11;
					}
					LA37: ;
				}
			} LA11: ;
			nimln(1291, "os.nim");
			Dl_106404(h_175295);
		}
		LA9: ;
	}
	{
		NimStringDesc* p_175289;
		p_175289 = 0;
		{
			NimStringDesc* key_175304;
			NimStringDesc* val_175306;
			key_175304 = 0;
			val_175306 = 0;
			{
				NI h_175308;
				NI HEX3Atmp_175310;
				NI res_175312;
				h_175308 = 0;
				HEX3Atmp_175310 = 0;
				nimln(43, "strtabs.nim");
				HEX3Atmp_175310 = ((*packages).data ? ((*packages).data->Sup.len-1) : -1);
				nimln(1598, "system.nim");
				res_175312 = ((NI) 0);
				{
					nimln(1599, "system.nim");
					while (1) {
						NI TMP1796;
						if (!(res_175312 <= HEX3Atmp_175310)) goto LA43;
						nimln(1600, "system.nim");
						h_175308 = res_175312;
						nimln(44, "strtabs.nim");
						{
							NimStringDesc* res_175316;
							if ((NU)(h_175308) >= (NU)((*packages).data->Sup.len)) raiseIndexError();
							if (!!((*packages).data->data[h_175308].Field0 == 0)) goto LA46;
							nimln(45, "strtabs.nim");
							if ((NU)(h_175308) >= (NU)((*packages).data->Sup.len)) raiseIndexError();
							key_175304 = (*packages).data->data[h_175308].Field0;
							if ((NU)(h_175308) >= (NU)((*packages).data->Sup.len)) raiseIndexError();
							val_175306 = (*packages).data->data[h_175308].Field1;
							nimln(58, "nimblecmd.nim");
							{
								if (!eqStrings(val_175306, ((NimStringDesc*) &TMP1778))) goto LA50;
								res_175316 = key_175304;
							}
							goto LA48;
							LA50: ;
							{
								NimStringDesc* LOC53;
								LOC53 = 0;
								LOC53 = rawNewString(key_175304->Sup.len + val_175306->Sup.len + 1);
appendString(LOC53, key_175304);
appendChar(LOC53, 45);
appendString(LOC53, val_175306);
								res_175316 = LOC53;
							}
							LA48: ;
							p_175289 = res_175316;
							nimln(86, "nimblecmd.nim");
							addnimblepath_175175(p_175289, info);
						}
						LA46: ;
						nimln(1619, "system.nim");
						TMP1796 = addInt(res_175312, ((NI) 1));
						res_175312 = (NI)(TMP1796);
					} LA43: ;
				}
			}
		}
	}
	popFrame();
}

N_NIMCALL(void, nimblepath_175347)(NimStringDesc* path, Tlineinfo165338 info) {
	nimfr("nimblePath", "nimblecmd.nim")
	nimln(89, "nimblecmd.nim");
	addpathrec_175252(path, info);
	nimln(90, "nimblecmd.nim");
	addnimblepath_175175(path, info);
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdInit)(void) {
	nimfr("nimblecmd", "nimblecmd.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdDatInit)(void) {
}

