/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <dirent.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <time.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tlineinfo162338 Tlineinfo162338;
typedef struct Tlinkedlist130028 Tlinkedlist130028;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Stringtableobj134012 Stringtableobj134012;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Keyvaluepairseq134010 Keyvaluepairseq134010;
typedef struct TY103552 TY103552;
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
struct  Tlinkedlist130028  {
Tlistentry130022* head;
Tlistentry130022* tail;
NI counter;
};
typedef NIM_CHAR TY107377[256];
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
struct TY103552 {
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
  TY103552 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, addpath_172012)(NimStringDesc* path, Tlineinfo162338 info);
N_NIMCALL(NIM_BOOL, contains_130219)(Tlinkedlist130028 list, NimStringDesc* data);
N_NIMCALL(void, prependstr_130419)(Tlinkedlist130028* list, NimStringDesc* data);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NI, versionsplitpos_172023)(NimStringDesc* s);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, HEX3CHEX2E_172064)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, addpackage_172126)(Stringtableobj134012* packages, NimStringDesc* p);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76843, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NimStringDesc*, nstGet)(Stringtableobj134012* t, NimStringDesc* key);
N_NIMCALL(void, nstPut)(Stringtableobj134012* t, NimStringDesc* key, NimStringDesc* val);
N_NIMCALL(void, addnimblepath_172175)(NimStringDesc* p, Tlineinfo162338 info);
N_NIMCALL(void, message_164188)(Tlineinfo162338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, addpathwithnimfiles_172186)(NimStringDesc* p, Tlineinfo162338 info);
N_NIMCALL(NIM_BOOL, hasnimfile_172190)(NimStringDesc* dir);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(NimStringDesc*, HEX2F_119292)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NIM_BOOL, nsuEndsWith)(NimStringDesc* s, NimStringDesc* suffix);
N_NIMCALL(void, addpathrec_172258)(NimStringDesc* dir, Tlineinfo162338 info);
N_NIMCALL(Stringtableobj134012*, nstnewStringTable)(NU8 mode);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, nimblepath_172356)(NimStringDesc* path, Tlineinfo162338 info);
STRING_LITERAL(TMP1807, "head", 4);
STRING_LITERAL(TMP1814, ".", 1);
STRING_LITERAL(TMP1815, "..", 2);
STRING_LITERAL(TMP1821, ".nim", 4);
extern Tlinkedlist130028 searchpaths_153132;
extern TFrame* frameptr_17042;
extern NI gverbosity_153137;
extern Tlinkedlist130028 lazypaths_153133;

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

N_NIMCALL(void, addpath_172012)(NimStringDesc* path, Tlineinfo162338 info) {
	nimfr("addPath", "nimblecmd.nim")
	nimln(15, "nimblecmd.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_130219(searchpaths_153132, path);
		if (!!(LOC3)) goto LA4;
		nimln(16, "nimblecmd.nim");
		prependstr_130419((&searchpaths_153132), path);
	}
	LA4: ;
	popFrame();
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

N_NIMCALL(NI, versionsplitpos_172023)(NimStringDesc* s) {
	NI result;
	NI TMP1805;
	nimfr("versionSplitPos", "nimblecmd.nim")
	result = 0;
	nimln(19, "nimblecmd.nim");
	TMP1805 = subInt((s ? s->Sup.len : 0), ((NI) 2));
	result = (NI)(TMP1805);
	{
		nimln(20, "nimblecmd.nim");
		while (1) {
			NIM_BOOL LOC3;
			NI TMP1806;
			LOC3 = 0;
			LOC3 = (((NI) 1) < result);
			if (!(LOC3)) goto LA4;
			if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
			LOC3 = (((NU8)(s->data[result])) >= ((NU8)(48)) && ((NU8)(s->data[result])) <= ((NU8)(57)) || ((NU8)(s->data[result])) == ((NU8)(46)));
			LA4: ;
			if (!LOC3) goto LA2;
			TMP1806 = subInt(result, ((NI) 1));
			result = (NI)(TMP1806);
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

N_NIMCALL(NIM_BOOL, HEX3CHEX2E_172064)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI i;
	NI j;
	NI vera;
	NI verb;
	nimfr("<.", "nimblecmd.nim")
{	result = 0;
	nimln(28, "nimblecmd.nim");
	{
		if (!eqStrings(a, ((NimStringDesc*) &TMP1807))) goto LA3;
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
			NI TMP1808;
			NI TMP1809;
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
			TMP1808 = addInt(i, ii);
			i = (NI)(TMP1808);
			nimln(42, "nimblecmd.nim");
			TMP1809 = addInt(j, jj);
			j = (NI)(TMP1809);
			nimln(43, "nimblecmd.nim");
			{
				NI TMP1810;
				if ((NU)(i) > (NU)(a->Sup.len)) raiseIndexError();
				if (!((NU8)(a->data[i]) == (NU8)(46))) goto LA22;
				TMP1810 = addInt(i, ((NI) 1));
				i = (NI)(TMP1810);
			}
			LA22: ;
			nimln(44, "nimblecmd.nim");
			{
				NI TMP1811;
				if ((NU)(j) > (NU)(b->Sup.len)) raiseIndexError();
				if (!((NU8)(b->data[j]) == (NU8)(46))) goto LA26;
				TMP1811 = addInt(j, ((NI) 1));
				j = (NI)(TMP1811);
			}
			LA26: ;
		}
	}
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, addpackage_172126)(Stringtableobj134012* packages, NimStringDesc* p) {
	NI x;
	NimStringDesc* name;
	NI TMP1812;
	nimfr("addPackage", "nimblecmd.nim")
	nimln(47, "nimblecmd.nim");
	x = versionsplitpos_172023(p);
	nimln(48, "nimblecmd.nim");
	TMP1812 = subInt(x, ((NI) 1));
	name = copyStrLast(p, ((NI) 0), (NI)(TMP1812));
	nimln(49, "nimblecmd.nim");
	{
		NimStringDesc* version;
		NI TMP1813;
		if (!(x < (p ? p->Sup.len : 0))) goto LA3;
		nimln(50, "nimblecmd.nim");
		TMP1813 = addInt(x, ((NI) 1));
		version = copyStr(p, (NI)(TMP1813));
		nimln(51, "nimblecmd.nim");
		{
			NimStringDesc* LOC7;
			NIM_BOOL LOC8;
			LOC7 = 0;
			LOC7 = nstGet(packages, name);
			LOC8 = 0;
			LOC8 = HEX3CHEX2E_172064(LOC7, version);
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
		nstPut(packages, name, ((NimStringDesc*) &TMP1807));
	}
	LA1: ;
	popFrame();
}

N_NIMCALL(void, addnimblepath_172175)(NimStringDesc* p, Tlineinfo162338 info) {
	nimfr("addNimblePath", "nimblecmd.nim")
	nimln(62, "nimblecmd.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_130219(searchpaths_153132, p);
		if (!!(LOC3)) goto LA4;
		nimln(63, "nimblecmd.nim");
		{
			if (!(((NI) 1) <= gverbosity_153137)) goto LA8;
			message_164188(info, ((NU16) 273), p);
		}
		LA8: ;
		nimln(64, "nimblecmd.nim");
		prependstr_130419((&lazypaths_153133), p);
	}
	LA4: ;
	popFrame();
}

N_NIMCALL(NIM_BOOL, hasnimfile_172190)(NimStringDesc* dir) {
	NIM_BOOL result;
	nimfr("hasNimFile", "nimblecmd.nim")
	result = 0;
	{
		NU8 kind_172194;
		NimStringDesc* path_172195;
		DIR* d_172208;
		kind_172194 = 0;
		path_172195 = 0;
		nimln(1293, "os.nim");
		d_172208 = opendir(dir->data);
		nimln(1294, "os.nim");
		{
			int LOC39;
			if (!!((d_172208 == NIM_NIL))) goto LA4;
			{
				nimln(1295, "os.nim");
				while (1) {
					struct dirent* x_172210;
					NimStringDesc* y_172212;
					nimln(1296, "os.nim");
					x_172210 = readdir(d_172208);
					nimln(1297, "os.nim");
					{
						if (!(x_172210 == NIM_NIL)) goto LA10;
						goto LA6;
					}
					LA10: ;
					nimln(1298, "os.nim");
					y_172212 = cstrToNimstr(((NCSTRING) ((*x_172210).d_name)));
					nimln(1299, "os.nim");
					{
						NIM_BOOL LOC14;
						struct stat s_172214;
						NU8 k_172216;
						LOC14 = 0;
						LOC14 = !(eqStrings(y_172212, ((NimStringDesc*) &TMP1814)));
						if (!(LOC14)) goto LA15;
						LOC14 = !(eqStrings(y_172212, ((NimStringDesc*) &TMP1815)));
						LA15: ;
						if (!LOC14) goto LA16;
						memset((void*)(&s_172214), 0, sizeof(s_172214));
						nimln(1301, "os.nim");
						y_172212 = HEX2F_119292(dir, y_172212);
						nimln(1302, "os.nim");
						k_172216 = ((NU8) 0);
						nimln(1311, "os.nim");
						{
							int LOC20;
							LOC20 = 0;
							LOC20 = lstat(y_172212->data, (&s_172214));
							if (!(LOC20 < ((NI32) 0))) goto LA21;
							goto LA6;
						}
						LA21: ;
						nimln(1312, "os.nim");
						{
							NIM_BOOL LOC25;
							LOC25 = 0;
							LOC25 = S_ISDIR(s_172214.st_mode);
							if (!LOC25) goto LA26;
							k_172216 = ((NU8) 2);
						}
						LA26: ;
						nimln(1313, "os.nim");
						{
							NIM_BOOL LOC30;
							NI TMP1816;
							LOC30 = 0;
							LOC30 = S_ISLNK(s_172214.st_mode);
							if (!LOC30) goto LA31;
							TMP1816 = addInt(k_172216, ((NI) 1));
							if (TMP1816 < 0 || TMP1816 > 3) raiseOverflow();
							k_172216 = (NU8)(TMP1816);
						}
						LA31: ;
						nimln(1302, "os.nim");
						kind_172194 = k_172216;
						nimln(1298, "os.nim");
						path_172195 = y_172212;
						nimln(69, "nimblecmd.nim");
						{
							NIM_BOOL LOC35;
							LOC35 = 0;
							LOC35 = (kind_172194 == ((NU8) 0));
							if (!(LOC35)) goto LA36;
							LOC35 = nsuEndsWith(path_172195, ((NimStringDesc*) &TMP1821));
							LA36: ;
							if (!LOC35) goto LA37;
							nimln(70, "nimblecmd.nim");
							result = NIM_TRUE;
							nimln(71, "nimblecmd.nim");
							goto LA1;
						}
						LA37: ;
					}
					LA16: ;
				}
			} LA6: ;
			nimln(1315, "os.nim");
			LOC39 = 0;
			LOC39 = closedir(d_172208);
		}
		LA4: ;
	} LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, addpathwithnimfiles_172186)(NimStringDesc* p, Tlineinfo162338 info) {
	nimfr("addPathWithNimFiles", "nimblecmd.nim")
	nimln(72, "nimblecmd.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = hasnimfile_172190(p);
		if (!LOC3) goto LA4;
		nimln(73, "nimblecmd.nim");
		addnimblepath_172175(p, info);
	}
	goto LA1;
	LA4: ;
	{
		{
			NU8 kind_172217;
			NimStringDesc* p2_172218;
			DIR* d_172222;
			kind_172217 = 0;
			p2_172218 = 0;
			nimln(1293, "os.nim");
			d_172222 = opendir(p->data);
			nimln(1294, "os.nim");
			{
				int LOC44;
				if (!!((d_172222 == NIM_NIL))) goto LA10;
				{
					nimln(1295, "os.nim");
					while (1) {
						struct dirent* x_172224;
						NimStringDesc* y_172226;
						nimln(1296, "os.nim");
						x_172224 = readdir(d_172222);
						nimln(1297, "os.nim");
						{
							if (!(x_172224 == NIM_NIL)) goto LA16;
							goto LA12;
						}
						LA16: ;
						nimln(1298, "os.nim");
						y_172226 = cstrToNimstr(((NCSTRING) ((*x_172224).d_name)));
						nimln(1299, "os.nim");
						{
							NIM_BOOL LOC20;
							struct stat s_172228;
							NU8 k_172230;
							LOC20 = 0;
							LOC20 = !(eqStrings(y_172226, ((NimStringDesc*) &TMP1814)));
							if (!(LOC20)) goto LA21;
							LOC20 = !(eqStrings(y_172226, ((NimStringDesc*) &TMP1815)));
							LA21: ;
							if (!LOC20) goto LA22;
							memset((void*)(&s_172228), 0, sizeof(s_172228));
							nimln(1301, "os.nim");
							y_172226 = HEX2F_119292(p, y_172226);
							nimln(1302, "os.nim");
							k_172230 = ((NU8) 0);
							nimln(1311, "os.nim");
							{
								int LOC26;
								LOC26 = 0;
								LOC26 = lstat(y_172226->data, (&s_172228));
								if (!(LOC26 < ((NI32) 0))) goto LA27;
								goto LA12;
							}
							LA27: ;
							nimln(1312, "os.nim");
							{
								NIM_BOOL LOC31;
								LOC31 = 0;
								LOC31 = S_ISDIR(s_172228.st_mode);
								if (!LOC31) goto LA32;
								k_172230 = ((NU8) 2);
							}
							LA32: ;
							nimln(1313, "os.nim");
							{
								NIM_BOOL LOC36;
								NI TMP1822;
								LOC36 = 0;
								LOC36 = S_ISLNK(s_172228.st_mode);
								if (!LOC36) goto LA37;
								TMP1822 = addInt(k_172230, ((NI) 1));
								if (TMP1822 < 0 || TMP1822 > 3) raiseOverflow();
								k_172230 = (NU8)(TMP1822);
							}
							LA37: ;
							nimln(1302, "os.nim");
							kind_172217 = k_172230;
							nimln(1298, "os.nim");
							p2_172218 = y_172226;
							nimln(76, "nimblecmd.nim");
							{
								NIM_BOOL LOC41;
								LOC41 = 0;
								LOC41 = hasnimfile_172190(p2_172218);
								if (!LOC41) goto LA42;
								addnimblepath_172175(p2_172218, info);
							}
							LA42: ;
						}
						LA22: ;
					}
				} LA12: ;
				nimln(1315, "os.nim");
				LOC44 = 0;
				LOC44 = closedir(d_172222);
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

N_NIMCALL(void, addpathrec_172258)(NimStringDesc* dir, Tlineinfo162338 info) {
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
		NU8 k_172284;
		NimStringDesc* p_172285;
		DIR* d_172299;
		k_172284 = 0;
		p_172285 = 0;
		nimln(1293, "os.nim");
		d_172299 = opendir(dir->data);
		nimln(1294, "os.nim");
		{
			int LOC43;
			if (!!((d_172299 == NIM_NIL))) goto LA8;
			{
				nimln(1295, "os.nim");
				while (1) {
					struct dirent* x_172301;
					NimStringDesc* y_172303;
					nimln(1296, "os.nim");
					x_172301 = readdir(d_172299);
					nimln(1297, "os.nim");
					{
						if (!(x_172301 == NIM_NIL)) goto LA14;
						goto LA10;
					}
					LA14: ;
					nimln(1298, "os.nim");
					y_172303 = cstrToNimstr(((NCSTRING) ((*x_172301).d_name)));
					nimln(1299, "os.nim");
					{
						NIM_BOOL LOC18;
						struct stat s_172305;
						NU8 k_172307;
						LOC18 = 0;
						LOC18 = !(eqStrings(y_172303, ((NimStringDesc*) &TMP1814)));
						if (!(LOC18)) goto LA19;
						LOC18 = !(eqStrings(y_172303, ((NimStringDesc*) &TMP1815)));
						LA19: ;
						if (!LOC18) goto LA20;
						memset((void*)(&s_172305), 0, sizeof(s_172305));
						nimln(1301, "os.nim");
						y_172303 = HEX2F_119292(dir, y_172303);
						nimln(1302, "os.nim");
						k_172307 = ((NU8) 0);
						nimln(1311, "os.nim");
						{
							int LOC24;
							LOC24 = 0;
							LOC24 = lstat(y_172303->data, (&s_172305));
							if (!(LOC24 < ((NI32) 0))) goto LA25;
							goto LA10;
						}
						LA25: ;
						nimln(1312, "os.nim");
						{
							NIM_BOOL LOC29;
							LOC29 = 0;
							LOC29 = S_ISDIR(s_172305.st_mode);
							if (!LOC29) goto LA30;
							k_172307 = ((NU8) 2);
						}
						LA30: ;
						nimln(1313, "os.nim");
						{
							NIM_BOOL LOC34;
							NI TMP1825;
							LOC34 = 0;
							LOC34 = S_ISLNK(s_172305.st_mode);
							if (!LOC34) goto LA35;
							TMP1825 = addInt(k_172307, ((NI) 1));
							if (TMP1825 < 0 || TMP1825 > 3) raiseOverflow();
							k_172307 = (NU8)(TMP1825);
						}
						LA35: ;
						nimln(1302, "os.nim");
						k_172284 = k_172307;
						nimln(1298, "os.nim");
						p_172285 = y_172303;
						nimln(83, "nimblecmd.nim");
						{
							NIM_BOOL LOC39;
							LOC39 = 0;
							LOC39 = (k_172284 == ((NU8) 2));
							if (!(LOC39)) goto LA40;
							if ((NU)(pos) > (NU)(p_172285->Sup.len)) raiseIndexError();
							LOC39 = !(((NU8)(p_172285->data[pos]) == (NU8)(46)));
							LA40: ;
							if (!LOC39) goto LA41;
							nimln(84, "nimblecmd.nim");
							addpackage_172126(packages, p_172285);
						}
						LA41: ;
					}
					LA20: ;
				}
			} LA10: ;
			nimln(1315, "os.nim");
			LOC43 = 0;
			LOC43 = closedir(d_172299);
		}
		LA8: ;
	}
	{
		NimStringDesc* p_172295;
		p_172295 = 0;
		{
			NimStringDesc* key_172313;
			NimStringDesc* val_172315;
			key_172313 = 0;
			val_172315 = 0;
			{
				NI h_172317;
				NI HEX3Atmp_172319;
				NI res_172321;
				h_172317 = 0;
				HEX3Atmp_172319 = 0;
				nimln(43, "strtabs.nim");
				HEX3Atmp_172319 = ((*packages).data ? ((*packages).data->Sup.len-1) : -1);
				nimln(1598, "system.nim");
				res_172321 = ((NI) 0);
				{
					nimln(1599, "system.nim");
					while (1) {
						NI TMP1826;
						if (!(res_172321 <= HEX3Atmp_172319)) goto LA48;
						nimln(1600, "system.nim");
						h_172317 = res_172321;
						nimln(44, "strtabs.nim");
						{
							NimStringDesc* res_172325;
							if ((NU)(h_172317) >= (NU)((*packages).data->Sup.len)) raiseIndexError();
							if (!!((*packages).data->data[h_172317].Field0 == 0)) goto LA51;
							nimln(45, "strtabs.nim");
							if ((NU)(h_172317) >= (NU)((*packages).data->Sup.len)) raiseIndexError();
							key_172313 = (*packages).data->data[h_172317].Field0;
							if ((NU)(h_172317) >= (NU)((*packages).data->Sup.len)) raiseIndexError();
							val_172315 = (*packages).data->data[h_172317].Field1;
							nimln(58, "nimblecmd.nim");
							{
								if (!eqStrings(val_172315, ((NimStringDesc*) &TMP1807))) goto LA55;
								res_172325 = key_172313;
							}
							goto LA53;
							LA55: ;
							{
								NimStringDesc* LOC58;
								LOC58 = 0;
								LOC58 = rawNewString(key_172313->Sup.len + val_172315->Sup.len + 1);
appendString(LOC58, key_172313);
appendChar(LOC58, 45);
appendString(LOC58, val_172315);
								res_172325 = LOC58;
							}
							LA53: ;
							p_172295 = res_172325;
							nimln(86, "nimblecmd.nim");
							addnimblepath_172175(p_172295, info);
						}
						LA51: ;
						nimln(1619, "system.nim");
						TMP1826 = addInt(res_172321, ((NI) 1));
						res_172321 = (NI)(TMP1826);
					} LA48: ;
				}
			}
		}
	}
	popFrame();
}

N_NIMCALL(void, nimblepath_172356)(NimStringDesc* path, Tlineinfo162338 info) {
	nimfr("nimblePath", "nimblecmd.nim")
	nimln(89, "nimblecmd.nim");
	addpathrec_172258(path, info);
	nimln(90, "nimblecmd.nim");
	addnimblepath_172175(path, info);
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdInit)(void) {
	nimfr("nimblecmd", "nimblecmd.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdDatInit)(void) {
}

