/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <dirent.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <time.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct Tlinkedlist130028 Tlinkedlist130028;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Stringtableobj134012 Stringtableobj134012;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Keyvaluepairseq134010 Keyvaluepairseq134010;
typedef struct TY103553 TY103553;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo163338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tlinkedlist130028  {
Tlistentry130022* head;
Tlistentry130022* tail;
NI counter;
};
typedef NIM_CHAR TY107380[256];
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
struct  Stringtableobj134012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq134010* data;
NU8 mode;
};
struct TY103553 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct Keyvaluepairseq134010 {
  TGenericSeq Sup;
  TY103553 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, addpath_173012)(NimStringDesc* path, Tlineinfo163338 info);
N_NIMCALL(NIM_BOOL, contains_130219)(Tlinkedlist130028* list, NimStringDesc* data);
N_NIMCALL(void, prependstr_130419)(Tlinkedlist130028* list, NimStringDesc* data);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NI, versionsplitpos_173023)(NimStringDesc* s);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, HEX3CHEX2E_173064)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, addpackage_173126)(Stringtableobj134012* packages, NimStringDesc* p);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76643, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NimStringDesc*, nstGet)(Stringtableobj134012* t, NimStringDesc* key);
N_NIMCALL(void, nstPut)(Stringtableobj134012* t, NimStringDesc* key, NimStringDesc* val);
N_NIMCALL(void, addnimblepath_173175)(NimStringDesc* p, Tlineinfo163338 info);
N_NIMCALL(void, message_165188)(Tlineinfo163338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, addpathwithnimfiles_173186)(NimStringDesc* p, Tlineinfo163338 info);
N_NIMCALL(NIM_BOOL, hasnimfile_173190)(NimStringDesc* dir);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(NimStringDesc*, HEX2F_119292)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NIM_BOOL, nsuEndsWith)(NimStringDesc* s, NimStringDesc* suffix);
N_NIMCALL(void, addpathrec_173266)(NimStringDesc* dir, Tlineinfo163338 info);
N_NIMCALL(Stringtableobj134012*, nstnewStringTable)(NU8 mode);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, nimblepath_173368)(NimStringDesc* path, Tlineinfo163338 info);
STRING_LITERAL(TMP1805, "head", 4);
STRING_LITERAL(TMP1812, ".", 1);
STRING_LITERAL(TMP1813, "..", 2);
STRING_LITERAL(TMP1819, ".nim", 4);
extern Tlinkedlist130028 searchpaths_154132;
extern TFrame* frameptr_17042;
extern NI gverbosity_154137;
extern Tlinkedlist130028 lazypaths_154133;

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

N_NIMCALL(void, addpath_173012)(NimStringDesc* path, Tlineinfo163338 info) {
	nimfr("addPath", "nimblecmd.nim")
	nimln(15, "nimblecmd.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_130219((&searchpaths_154132), path);
		if (!!(LOC3)) goto LA4;
		nimln(16, "nimblecmd.nim");
		prependstr_130419((&searchpaths_154132), path);
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

N_NIMCALL(NI, versionsplitpos_173023)(NimStringDesc* s) {
	NI result;
	NI TMP1803;
	nimfr("versionSplitPos", "nimblecmd.nim")
	result = 0;
	nimln(19, "nimblecmd.nim");
	TMP1803 = subInt((s ? s->Sup.len : 0), ((NI) 2));
	result = (NI)(TMP1803);
	{
		nimln(20, "nimblecmd.nim");
		while (1) {
			NIM_BOOL LOC3;
			NI TMP1804;
			LOC3 = 0;
			LOC3 = (((NI) 1) < result);
			if (!(LOC3)) goto LA4;
			if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
			LOC3 = (((NU8)(s->data[result])) >= ((NU8)(48)) && ((NU8)(s->data[result])) <= ((NU8)(57)) || ((NU8)(s->data[result])) == ((NU8)(46)));
			LA4: ;
			if (!LOC3) goto LA2;
			TMP1804 = subInt(result, ((NI) 1));
			result = (NI)(TMP1804);
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

N_NIMCALL(NIM_BOOL, HEX3CHEX2E_173064)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI i;
	NI j;
	NI vera;
	NI verb;
	nimfr("<.", "nimblecmd.nim")
{	result = 0;
	nimln(28, "nimblecmd.nim");
	{
		if (!eqStrings(a, ((NimStringDesc*) &TMP1805))) goto LA3;
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
			NI TMP1806;
			NI TMP1807;
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
			TMP1806 = addInt(i, ii);
			i = (NI)(TMP1806);
			nimln(42, "nimblecmd.nim");
			TMP1807 = addInt(j, jj);
			j = (NI)(TMP1807);
			nimln(43, "nimblecmd.nim");
			{
				NI TMP1808;
				if ((NU)(i) > (NU)(a->Sup.len)) raiseIndexError();
				if (!((NU8)(a->data[i]) == (NU8)(46))) goto LA22;
				TMP1808 = addInt(i, ((NI) 1));
				i = (NI)(TMP1808);
			}
			LA22: ;
			nimln(44, "nimblecmd.nim");
			{
				NI TMP1809;
				if ((NU)(j) > (NU)(b->Sup.len)) raiseIndexError();
				if (!((NU8)(b->data[j]) == (NU8)(46))) goto LA26;
				TMP1809 = addInt(j, ((NI) 1));
				j = (NI)(TMP1809);
			}
			LA26: ;
		}
	}
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, addpackage_173126)(Stringtableobj134012* packages, NimStringDesc* p) {
	NI x;
	NimStringDesc* name;
	NI TMP1810;
	nimfr("addPackage", "nimblecmd.nim")
	nimln(47, "nimblecmd.nim");
	x = versionsplitpos_173023(p);
	nimln(48, "nimblecmd.nim");
	TMP1810 = subInt(x, ((NI) 1));
	name = copyStrLast(p, ((NI) 0), (NI)(TMP1810));
	nimln(49, "nimblecmd.nim");
	{
		NimStringDesc* version;
		NI TMP1811;
		if (!(x < (p ? p->Sup.len : 0))) goto LA3;
		nimln(50, "nimblecmd.nim");
		TMP1811 = addInt(x, ((NI) 1));
		version = copyStr(p, (NI)(TMP1811));
		nimln(51, "nimblecmd.nim");
		{
			NimStringDesc* LOC7;
			NIM_BOOL LOC8;
			LOC7 = 0;
			LOC7 = nstGet(packages, name);
			LOC8 = 0;
			LOC8 = HEX3CHEX2E_173064(LOC7, version);
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
		nstPut(packages, name, ((NimStringDesc*) &TMP1805));
	}
	LA1: ;
	popFrame();
}

N_NIMCALL(void, addnimblepath_173175)(NimStringDesc* p, Tlineinfo163338 info) {
	nimfr("addNimblePath", "nimblecmd.nim")
	nimln(62, "nimblecmd.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_130219((&searchpaths_154132), p);
		if (!!(LOC3)) goto LA4;
		nimln(63, "nimblecmd.nim");
		{
			if (!(((NI) 1) <= gverbosity_154137)) goto LA8;
			message_165188(info, ((NU16) 273), p);
		}
		LA8: ;
		nimln(64, "nimblecmd.nim");
		prependstr_130419((&lazypaths_154133), p);
	}
	LA4: ;
	popFrame();
}

N_NIMCALL(NIM_BOOL, hasnimfile_173190)(NimStringDesc* dir) {
	NIM_BOOL result;
	nimfr("hasNimFile", "nimblecmd.nim")
	result = 0;
	{
		NU8 kind_173194;
		NimStringDesc* path_173195;
		DIR* d_173209;
		kind_173194 = 0;
		path_173195 = 0;
		nimln(1293, "os.nim");
		d_173209 = opendir(dir->data);
		nimln(1294, "os.nim");
		{
			int LOC58;
			if (!!((d_173209 == NIM_NIL))) goto LA4;
			{
				nimln(1295, "os.nim");
				while (1) {
					{
						struct dirent* x_173211;
						NimStringDesc* y_173213;
						nimln(1296, "os.nim");
						x_173211 = readdir(d_173209);
						nimln(1297, "os.nim");
						{
							if (!(x_173211 == NIM_NIL)) goto LA11;
							goto LA6;
						}
						LA11: ;
						nimln(1298, "os.nim");
						y_173213 = cstrToNimstr(((NCSTRING) ((*x_173211).d_name)));
						nimln(1299, "os.nim");
						{
							NIM_BOOL LOC15;
							struct stat s_173215;
							NU8 k_173217;
							LOC15 = 0;
							LOC15 = !(eqStrings(y_173213, ((NimStringDesc*) &TMP1812)));
							if (!(LOC15)) goto LA16;
							LOC15 = !(eqStrings(y_173213, ((NimStringDesc*) &TMP1813)));
							LA16: ;
							if (!LOC15) goto LA17;
							memset((void*)(&s_173215), 0, sizeof(s_173215));
							nimln(1301, "os.nim");
							y_173213 = HEX2F_119292(dir, y_173213);
							nimln(1302, "os.nim");
							k_173217 = ((NU8) 0);
							nimln(1305, "os.nim");
							{
								if (!!(((*x_173211).d_type == ((NI8) 0)))) goto LA21;
								nimln(1306, "os.nim");
								{
									if (!((*x_173211).d_type == ((NI8) 4))) goto LA25;
									k_173217 = ((NU8) 2);
								}
								LA25: ;
								nimln(1307, "os.nim");
								{
									NI TMP1814;
									if (!((*x_173211).d_type == ((NI8) 10))) goto LA29;
									TMP1814 = addInt(k_173217, ((NI) 1));
									if (TMP1814 < 0 || TMP1814 > 3) raiseOverflow();
									k_173217 = (NU8)(TMP1814);
								}
								LA29: ;
								nimln(1302, "os.nim");
								kind_173194 = k_173217;
								nimln(1298, "os.nim");
								path_173195 = y_173213;
								nimln(69, "nimblecmd.nim");
								{
									NIM_BOOL LOC33;
									LOC33 = 0;
									LOC33 = (kind_173194 == ((NU8) 0));
									if (!(LOC33)) goto LA34;
									LOC33 = nsuEndsWith(path_173195, ((NimStringDesc*) &TMP1819));
									LA34: ;
									if (!LOC33) goto LA35;
									nimln(70, "nimblecmd.nim");
									result = NIM_TRUE;
									nimln(71, "nimblecmd.nim");
									goto LA1;
								}
								LA35: ;
								nimln(1309, "os.nim");
								goto LA8;
							}
							LA21: ;
							nimln(1311, "os.nim");
							{
								int LOC39;
								LOC39 = 0;
								LOC39 = lstat(y_173213->data, (&s_173215));
								if (!(LOC39 < ((NI32) 0))) goto LA40;
								goto LA6;
							}
							LA40: ;
							nimln(1312, "os.nim");
							{
								NIM_BOOL LOC44;
								LOC44 = 0;
								LOC44 = S_ISDIR(s_173215.st_mode);
								if (!LOC44) goto LA45;
								k_173217 = ((NU8) 2);
							}
							LA45: ;
							nimln(1313, "os.nim");
							{
								NIM_BOOL LOC49;
								NI TMP1820;
								LOC49 = 0;
								LOC49 = S_ISLNK(s_173215.st_mode);
								if (!LOC49) goto LA50;
								TMP1820 = addInt(k_173217, ((NI) 1));
								if (TMP1820 < 0 || TMP1820 > 3) raiseOverflow();
								k_173217 = (NU8)(TMP1820);
							}
							LA50: ;
							nimln(1302, "os.nim");
							kind_173194 = k_173217;
							nimln(1298, "os.nim");
							path_173195 = y_173213;
							nimln(69, "nimblecmd.nim");
							{
								NIM_BOOL LOC54;
								LOC54 = 0;
								LOC54 = (kind_173194 == ((NU8) 0));
								if (!(LOC54)) goto LA55;
								LOC54 = nsuEndsWith(path_173195, ((NimStringDesc*) &TMP1819));
								LA55: ;
								if (!LOC54) goto LA56;
								nimln(70, "nimblecmd.nim");
								result = NIM_TRUE;
								nimln(71, "nimblecmd.nim");
								goto LA1;
							}
							LA56: ;
						}
						LA17: ;
					} LA8: ;
				}
			} LA6: ;
			nimln(1315, "os.nim");
			LOC58 = 0;
			LOC58 = closedir(d_173209);
		}
		LA4: ;
	} LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, addpathwithnimfiles_173186)(NimStringDesc* p, Tlineinfo163338 info) {
	nimfr("addPathWithNimFiles", "nimblecmd.nim")
	nimln(72, "nimblecmd.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = hasnimfile_173190(p);
		if (!LOC3) goto LA4;
		nimln(73, "nimblecmd.nim");
		addnimblepath_173175(p, info);
	}
	goto LA1;
	LA4: ;
	{
		{
			NU8 kind_173218;
			NimStringDesc* p2_173219;
			DIR* d_173224;
			kind_173218 = 0;
			p2_173219 = 0;
			nimln(1293, "os.nim");
			d_173224 = opendir(p->data);
			nimln(1294, "os.nim");
			{
				int LOC62;
				if (!!((d_173224 == NIM_NIL))) goto LA10;
				{
					nimln(1295, "os.nim");
					while (1) {
						{
							struct dirent* x_173226;
							NimStringDesc* y_173228;
							nimln(1296, "os.nim");
							x_173226 = readdir(d_173224);
							nimln(1297, "os.nim");
							{
								if (!(x_173226 == NIM_NIL)) goto LA17;
								goto LA12;
							}
							LA17: ;
							nimln(1298, "os.nim");
							y_173228 = cstrToNimstr(((NCSTRING) ((*x_173226).d_name)));
							nimln(1299, "os.nim");
							{
								NIM_BOOL LOC21;
								struct stat s_173230;
								NU8 k_173232;
								LOC21 = 0;
								LOC21 = !(eqStrings(y_173228, ((NimStringDesc*) &TMP1812)));
								if (!(LOC21)) goto LA22;
								LOC21 = !(eqStrings(y_173228, ((NimStringDesc*) &TMP1813)));
								LA22: ;
								if (!LOC21) goto LA23;
								memset((void*)(&s_173230), 0, sizeof(s_173230));
								nimln(1301, "os.nim");
								y_173228 = HEX2F_119292(p, y_173228);
								nimln(1302, "os.nim");
								k_173232 = ((NU8) 0);
								nimln(1305, "os.nim");
								{
									if (!!(((*x_173226).d_type == ((NI8) 0)))) goto LA27;
									nimln(1306, "os.nim");
									{
										if (!((*x_173226).d_type == ((NI8) 4))) goto LA31;
										k_173232 = ((NU8) 2);
									}
									LA31: ;
									nimln(1307, "os.nim");
									{
										NI TMP1821;
										if (!((*x_173226).d_type == ((NI8) 10))) goto LA35;
										TMP1821 = addInt(k_173232, ((NI) 1));
										if (TMP1821 < 0 || TMP1821 > 3) raiseOverflow();
										k_173232 = (NU8)(TMP1821);
									}
									LA35: ;
									nimln(1302, "os.nim");
									kind_173218 = k_173232;
									nimln(1298, "os.nim");
									p2_173219 = y_173228;
									nimln(76, "nimblecmd.nim");
									{
										NIM_BOOL LOC39;
										LOC39 = 0;
										LOC39 = hasnimfile_173190(p2_173219);
										if (!LOC39) goto LA40;
										addnimblepath_173175(p2_173219, info);
									}
									LA40: ;
									nimln(1309, "os.nim");
									goto LA14;
								}
								LA27: ;
								nimln(1311, "os.nim");
								{
									int LOC44;
									LOC44 = 0;
									LOC44 = lstat(y_173228->data, (&s_173230));
									if (!(LOC44 < ((NI32) 0))) goto LA45;
									goto LA12;
								}
								LA45: ;
								nimln(1312, "os.nim");
								{
									NIM_BOOL LOC49;
									LOC49 = 0;
									LOC49 = S_ISDIR(s_173230.st_mode);
									if (!LOC49) goto LA50;
									k_173232 = ((NU8) 2);
								}
								LA50: ;
								nimln(1313, "os.nim");
								{
									NIM_BOOL LOC54;
									NI TMP1822;
									LOC54 = 0;
									LOC54 = S_ISLNK(s_173230.st_mode);
									if (!LOC54) goto LA55;
									TMP1822 = addInt(k_173232, ((NI) 1));
									if (TMP1822 < 0 || TMP1822 > 3) raiseOverflow();
									k_173232 = (NU8)(TMP1822);
								}
								LA55: ;
								nimln(1302, "os.nim");
								kind_173218 = k_173232;
								nimln(1298, "os.nim");
								p2_173219 = y_173228;
								nimln(76, "nimblecmd.nim");
								{
									NIM_BOOL LOC59;
									LOC59 = 0;
									LOC59 = hasnimfile_173190(p2_173219);
									if (!LOC59) goto LA60;
									addnimblepath_173175(p2_173219, info);
								}
								LA60: ;
							}
							LA23: ;
						} LA14: ;
					}
				} LA12: ;
				nimln(1315, "os.nim");
				LOC62 = 0;
				LOC62 = closedir(d_173224);
			}
			LA10: ;
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

N_NIMCALL(void, addpathrec_173266)(NimStringDesc* dir, Tlineinfo163338 info) {
	Stringtableobj134012* packages;
	NI pos;
	NI TMP1823;
	nimfr("addPathRec", "nimblecmd.nim")
	nimln(79, "nimblecmd.nim");
	packages = nstnewStringTable(((NU8) 2));
	nimln(80, "nimblecmd.nim");
	TMP1823 = subInt((dir ? dir->Sup.len : 0), ((NI) 1));
	pos = (NI)(TMP1823);
	nimln(81, "nimblecmd.nim");
	{
		NI TMP1824;
		if ((NU)(pos) > (NU)(dir->Sup.len)) raiseIndexError();
		if (!(((NU8)(dir->data[pos])) == ((NU8)(47)) || ((NU8)(dir->data[pos])) == ((NU8)(47)))) goto LA3;
		TMP1824 = addInt(pos, ((NI) 1));
		pos = (NI)(TMP1824);
	}
	LA3: ;
	{
		NU8 k_173292;
		NimStringDesc* p_173293;
		DIR* d_173308;
		k_173292 = 0;
		p_173293 = 0;
		nimln(1293, "os.nim");
		d_173308 = opendir(dir->data);
		nimln(1294, "os.nim");
		{
			int LOC62;
			if (!!((d_173308 == NIM_NIL))) goto LA8;
			{
				nimln(1295, "os.nim");
				while (1) {
					{
						struct dirent* x_173310;
						NimStringDesc* y_173312;
						nimln(1296, "os.nim");
						x_173310 = readdir(d_173308);
						nimln(1297, "os.nim");
						{
							if (!(x_173310 == NIM_NIL)) goto LA15;
							goto LA10;
						}
						LA15: ;
						nimln(1298, "os.nim");
						y_173312 = cstrToNimstr(((NCSTRING) ((*x_173310).d_name)));
						nimln(1299, "os.nim");
						{
							NIM_BOOL LOC19;
							struct stat s_173314;
							NU8 k_173316;
							LOC19 = 0;
							LOC19 = !(eqStrings(y_173312, ((NimStringDesc*) &TMP1812)));
							if (!(LOC19)) goto LA20;
							LOC19 = !(eqStrings(y_173312, ((NimStringDesc*) &TMP1813)));
							LA20: ;
							if (!LOC19) goto LA21;
							memset((void*)(&s_173314), 0, sizeof(s_173314));
							nimln(1301, "os.nim");
							y_173312 = HEX2F_119292(dir, y_173312);
							nimln(1302, "os.nim");
							k_173316 = ((NU8) 0);
							nimln(1305, "os.nim");
							{
								if (!!(((*x_173310).d_type == ((NI8) 0)))) goto LA25;
								nimln(1306, "os.nim");
								{
									if (!((*x_173310).d_type == ((NI8) 4))) goto LA29;
									k_173316 = ((NU8) 2);
								}
								LA29: ;
								nimln(1307, "os.nim");
								{
									NI TMP1825;
									if (!((*x_173310).d_type == ((NI8) 10))) goto LA33;
									TMP1825 = addInt(k_173316, ((NI) 1));
									if (TMP1825 < 0 || TMP1825 > 3) raiseOverflow();
									k_173316 = (NU8)(TMP1825);
								}
								LA33: ;
								nimln(1302, "os.nim");
								k_173292 = k_173316;
								nimln(1298, "os.nim");
								p_173293 = y_173312;
								nimln(83, "nimblecmd.nim");
								{
									NIM_BOOL LOC37;
									LOC37 = 0;
									LOC37 = (k_173292 == ((NU8) 2));
									if (!(LOC37)) goto LA38;
									if ((NU)(pos) > (NU)(p_173293->Sup.len)) raiseIndexError();
									LOC37 = !(((NU8)(p_173293->data[pos]) == (NU8)(46)));
									LA38: ;
									if (!LOC37) goto LA39;
									nimln(84, "nimblecmd.nim");
									addpackage_173126(packages, p_173293);
								}
								LA39: ;
								nimln(1309, "os.nim");
								goto LA12;
							}
							LA25: ;
							nimln(1311, "os.nim");
							{
								int LOC43;
								LOC43 = 0;
								LOC43 = lstat(y_173312->data, (&s_173314));
								if (!(LOC43 < ((NI32) 0))) goto LA44;
								goto LA10;
							}
							LA44: ;
							nimln(1312, "os.nim");
							{
								NIM_BOOL LOC48;
								LOC48 = 0;
								LOC48 = S_ISDIR(s_173314.st_mode);
								if (!LOC48) goto LA49;
								k_173316 = ((NU8) 2);
							}
							LA49: ;
							nimln(1313, "os.nim");
							{
								NIM_BOOL LOC53;
								NI TMP1826;
								LOC53 = 0;
								LOC53 = S_ISLNK(s_173314.st_mode);
								if (!LOC53) goto LA54;
								TMP1826 = addInt(k_173316, ((NI) 1));
								if (TMP1826 < 0 || TMP1826 > 3) raiseOverflow();
								k_173316 = (NU8)(TMP1826);
							}
							LA54: ;
							nimln(1302, "os.nim");
							k_173292 = k_173316;
							nimln(1298, "os.nim");
							p_173293 = y_173312;
							nimln(83, "nimblecmd.nim");
							{
								NIM_BOOL LOC58;
								LOC58 = 0;
								LOC58 = (k_173292 == ((NU8) 2));
								if (!(LOC58)) goto LA59;
								if ((NU)(pos) > (NU)(p_173293->Sup.len)) raiseIndexError();
								LOC58 = !(((NU8)(p_173293->data[pos]) == (NU8)(46)));
								LA59: ;
								if (!LOC58) goto LA60;
								nimln(84, "nimblecmd.nim");
								addpackage_173126(packages, p_173293);
							}
							LA60: ;
						}
						LA21: ;
					} LA12: ;
				}
			} LA10: ;
			nimln(1315, "os.nim");
			LOC62 = 0;
			LOC62 = closedir(d_173308);
		}
		LA8: ;
	}
	{
		NimStringDesc* p_173303;
		p_173303 = 0;
		{
			NimStringDesc* key_173322;
			NimStringDesc* val_173324;
			key_173322 = 0;
			val_173324 = 0;
			{
				NI h_173326;
				NI HEX3Atmp_173328;
				NI res_173330;
				h_173326 = 0;
				HEX3Atmp_173328 = 0;
				nimln(43, "strtabs.nim");
				HEX3Atmp_173328 = ((*packages).data ? ((*packages).data->Sup.len-1) : -1);
				nimln(1598, "system.nim");
				res_173330 = ((NI) 0);
				{
					nimln(1599, "system.nim");
					while (1) {
						NI TMP1827;
						if (!(res_173330 <= HEX3Atmp_173328)) goto LA67;
						nimln(1600, "system.nim");
						h_173326 = res_173330;
						nimln(44, "strtabs.nim");
						{
							NimStringDesc* res_173334;
							if ((NU)(h_173326) >= (NU)((*packages).data->Sup.len)) raiseIndexError();
							if (!!((*packages).data->data[h_173326].Field0 == 0)) goto LA70;
							nimln(45, "strtabs.nim");
							if ((NU)(h_173326) >= (NU)((*packages).data->Sup.len)) raiseIndexError();
							key_173322 = (*packages).data->data[h_173326].Field0;
							if ((NU)(h_173326) >= (NU)((*packages).data->Sup.len)) raiseIndexError();
							val_173324 = (*packages).data->data[h_173326].Field1;
							nimln(58, "nimblecmd.nim");
							{
								if (!eqStrings(val_173324, ((NimStringDesc*) &TMP1805))) goto LA74;
								res_173334 = key_173322;
							}
							goto LA72;
							LA74: ;
							{
								NimStringDesc* LOC77;
								LOC77 = 0;
								LOC77 = rawNewString(key_173322->Sup.len + val_173324->Sup.len + 1);
appendString(LOC77, key_173322);
appendChar(LOC77, 45);
appendString(LOC77, val_173324);
								res_173334 = LOC77;
							}
							LA72: ;
							p_173303 = res_173334;
							nimln(86, "nimblecmd.nim");
							addnimblepath_173175(p_173303, info);
						}
						LA70: ;
						nimln(1619, "system.nim");
						TMP1827 = addInt(res_173330, ((NI) 1));
						res_173330 = (NI)(TMP1827);
					} LA67: ;
				}
			}
		}
	}
	popFrame();
}

N_NIMCALL(void, nimblepath_173368)(NimStringDesc* path, Tlineinfo163338 info) {
	nimfr("nimblePath", "nimblecmd.nim")
	nimln(89, "nimblecmd.nim");
	addpathrec_173266(path, info);
	nimln(90, "nimblecmd.nim");
	addnimblepath_173175(path, info);
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdInit)(void) {
	nimfr("nimblecmd", "nimblecmd.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdDatInit)(void) {
}

