/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef NI TY169071[256];
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
static N_INLINE(NI32, updatecrc32_169024)(NI8 val, NI32 crc);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI32, updatecrc32_169031)(NIM_CHAR val, NI32 crc);
N_NIMCALL(NI32, strcrc32_169045)(NimStringDesc* s);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NI32, HEX3EHEX3C_169538)(NI32 c, NimStringDesc* s);
N_NIMCALL(NI32, crcfrombuf_169038)(void* buf, NI length);
N_NIMCALL(NI32, crcfromfile_169051)(NimStringDesc* filename);
N_NIMCALL(NIM_BOOL, open_13203)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NOCONV(void*, alloc_6001)(NI size);
N_NIMCALL(NI, readbuffer_13515)(FILE* f, void* buffer, NI len);
N_NOCONV(void, dealloc_6048)(void* p);
N_NIMCALL(NI32, updateadler32_169057)(NI32 adler, void* buf, NI length);
NIM_CONST TY169071 crc32table_169070 = {((NI) 0),
((NI) 1996959894),
((NI) -301047508),
((NI) -1727442502),
((NI) 124634137),
((NI) 1886057615),
((NI) -379345611),
((NI) -1637575261),
((NI) 249268274),
((NI) 2044508324),
((NI) -522852066),
((NI) -1747789432),
((NI) 162941995),
((NI) 2125561021),
((NI) -407360249),
((NI) -1866523247),
((NI) 498536548),
((NI) 1789927666),
((NI) -205950648),
((NI) -2067906082),
((NI) 450548861),
((NI) 1843258603),
((NI) -187386543),
((NI) -2083289657),
((NI) 325883990),
((NI) 1684777152),
((NI) -43845254),
((NI) -1973040660),
((NI) 335633487),
((NI) 1661365465),
((NI) -99664541),
((NI) -1928851979),
((NI) 997073096),
((NI) 1281953886),
((NI) -715111964),
((NI) -1570279054),
((NI) 1006888145),
((NI) 1258607687),
((NI) -770865667),
((NI) -1526024853),
((NI) 901097722),
((NI) 1119000684),
((NI) -608450090),
((NI) -1396901568),
((NI) 853044451),
((NI) 1172266101),
((NI) -589951537),
((NI) -1412350631),
((NI) 651767980),
((NI) 1373503546),
((NI) -925412992),
((NI) -1076862698),
((NI) 565507253),
((NI) 1454621731),
((NI) -809855591),
((NI) -1195530993),
((NI) 671266974),
((NI) 1594198024),
((NI) -972236366),
((NI) -1324619484),
((NI) 795835527),
((NI) 1483230225),
((NI) -1050600021),
((NI) -1234817731),
((NI) 1994146192),
((NI) 31158534),
((NI) -1731059524),
((NI) -271249366),
((NI) 1907459465),
((NI) 112637215),
((NI) -1614814043),
((NI) -390540237),
((NI) 2013776290),
((NI) 251722036),
((NI) -1777751922),
((NI) -519137256),
((NI) 2137656763),
((NI) 141376813),
((NI) -1855689577),
((NI) -429695999),
((NI) 1802195444),
((NI) 476864866),
((NI) -2056965928),
((NI) -228458418),
((NI) 1812370925),
((NI) 453092731),
((NI) -2113342271),
((NI) -183516073),
((NI) 1706088902),
((NI) 314042704),
((NI) -1950435094),
((NI) -54949764),
((NI) 1658658271),
((NI) 366619977),
((NI) -1932296973),
((NI) -69972891),
((NI) 1303535960),
((NI) 984961486),
((NI) -1547960204),
((NI) -725929758),
((NI) 1256170817),
((NI) 1037604311),
((NI) -1529756563),
((NI) -740887301),
((NI) 1131014506),
((NI) 879679996),
((NI) -1385723834),
((NI) -631195440),
((NI) 1141124467),
((NI) 855842277),
((NI) -1442165665),
((NI) -586318647),
((NI) 1342533948),
((NI) 654459306),
((NI) -1106571248),
((NI) -921952122),
((NI) 1466479909),
((NI) 544179635),
((NI) -1184443383),
((NI) -832445281),
((NI) 1591671054),
((NI) 702138776),
((NI) -1328506846),
((NI) -942167884),
((NI) 1504918807),
((NI) 783551873),
((NI) -1212326853),
((NI) -1061524307),
((NI) -306674912),
((NI) -1698712650),
((NI) 62317068),
((NI) 1957810842),
((NI) -355121351),
((NI) -1647151185),
((NI) 81470997),
((NI) 1943803523),
((NI) -480048366),
((NI) -1805370492),
((NI) 225274430),
((NI) 2053790376),
((NI) -468791541),
((NI) -1828061283),
((NI) 167816743),
((NI) 2097651377),
((NI) -267414716),
((NI) -2029476910),
((NI) 503444072),
((NI) 1762050814),
((NI) -144550051),
((NI) -2140837941),
((NI) 426522225),
((NI) 1852507879),
((NI) -19653770),
((NI) -1982649376),
((NI) 282753626),
((NI) 1742555852),
((NI) -105259153),
((NI) -1900089351),
((NI) 397917763),
((NI) 1622183637),
((NI) -690576408),
((NI) -1580100738),
((NI) 953729732),
((NI) 1340076626),
((NI) -776247311),
((NI) -1497606297),
((NI) 1068828381),
((NI) 1219638859),
((NI) -670225446),
((NI) -1358292148),
((NI) 906185462),
((NI) 1090812512),
((NI) -547295293),
((NI) -1469587627),
((NI) 829329135),
((NI) 1181335161),
((NI) -882789492),
((NI) -1134132454),
((NI) 628085408),
((NI) 1382605366),
((NI) -871598187),
((NI) -1156888829),
((NI) 570562233),
((NI) 1426400815),
((NI) -977650754),
((NI) -1296233688),
((NI) 733239954),
((NI) 1555261956),
((NI) -1026031705),
((NI) -1244606671),
((NI) 752459403),
((NI) 1541320221),
((NI) -1687895376),
((NI) -328994266),
((NI) 1969922972),
((NI) 40735498),
((NI) -1677130071),
((NI) -351390145),
((NI) 1913087877),
((NI) 83908371),
((NI) -1782625662),
((NI) -491226604),
((NI) 2075208622),
((NI) 213261112),
((NI) -1831694693),
((NI) -438977011),
((NI) 2094854071),
((NI) 198958881),
((NI) -2032938284),
((NI) -237706686),
((NI) 1759359992),
((NI) 534414190),
((NI) -2118248755),
((NI) -155638181),
((NI) 1873836001),
((NI) 414664567),
((NI) -2012718362),
((NI) -15766928),
((NI) 1711684554),
((NI) 285281116),
((NI) -1889165569),
((NI) -127750551),
((NI) 1634467795),
((NI) 376229701),
((NI) -1609899400),
((NI) -686959890),
((NI) 1308918612),
((NI) 956543938),
((NI) -1486412191),
((NI) -799009033),
((NI) 1231636301),
((NI) 1047427035),
((NI) -1362007478),
((NI) -640263460),
((NI) 1088359270),
((NI) 936918000),
((NI) -1447252397),
((NI) -558129467),
((NI) 1202900863),
((NI) 817233897),
((NI) -1111625188),
((NI) -893730166),
((NI) 1404277552),
((NI) 615818150),
((NI) -1160759803),
((NI) -841546093),
((NI) 1423857449),
((NI) 601450431),
((NI) -1285129682),
((NI) -1000256840),
((NI) 1567103746),
((NI) 711928724),
((NI) -1274298825),
((NI) -1022587231),
((NI) 1510334235),
((NI) 755167117)}
;
extern TFrame* frameptr_17042;
TNimType NTI169015; /* TCrc32 */

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

static N_INLINE(NI32, updatecrc32_169024)(NI8 val, NI32 crc) {
	NI32 result;
	nimfr("updateCrc32", "crc.nim")
	result = 0;
	nimln(78, "crc.nim");
	nimln(79, "crc.nim");
	nimln(78, "crc.nim");
	nimln(79, "crc.nim");
	result = (NI32)(((NI32)chckRange(crc32table_169070[((NI)((NI)(((NI) (crc)) ^ ((NI) ((NI)(((NI) (val)) & ((NI) 255))))) & ((NI) 255)))- 0], ((NI32) (-2147483647 -1)), ((NI32) 2147483647))) ^ (NI32)((NU32)(crc) >> (NU32)(((NI32) 8))));
	popFrame();
	return result;
}

static N_INLINE(NI32, updatecrc32_169031)(NIM_CHAR val, NI32 crc) {
	NI32 result;
	nimfr("updateCrc32", "crc.nim")
	result = 0;
	nimln(82, "crc.nim");
	result = updatecrc32_169024(((NI8)(NU8)(NU)(((NI) (((NU8)(val)))))), crc);
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

N_NIMCALL(NI32, strcrc32_169045)(NimStringDesc* s) {
	NI32 result;
	nimfr("strCrc32", "crc.nim")
	result = 0;
	nimln(85, "crc.nim");
	result = ((NI32) -1);
	{
		NI i_169514;
		NI HEX3Atmp_169516;
		NI TMP1365;
		NI res_169519;
		i_169514 = 0;
		HEX3Atmp_169516 = 0;
		nimln(86, "crc.nim");
		TMP1365 = subInt((s ? s->Sup.len : 0), ((NI) 1));
		HEX3Atmp_169516 = (NI)(TMP1365);
		nimln(1598, "system.nim");
		res_169519 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP1366;
				if (!(res_169519 <= HEX3Atmp_169516)) goto LA3;
				nimln(1600, "system.nim");
				i_169514 = res_169519;
				nimln(86, "crc.nim");
				if ((NU)(i_169514) > (NU)(s->Sup.len)) raiseIndexError();
				result = updatecrc32_169031(s->data[i_169514], result);
				nimln(1614, "system.nim");
				TMP1366 = addInt(res_169519, ((NI) 1));
				res_169519 = (NI)(TMP1366);
			} LA3: ;
		}
	}
	popFrame();
	return result;
}

N_NIMCALL(NI32, HEX3EHEX3C_169538)(NI32 c, NimStringDesc* s) {
	NI32 result;
	nimfr("><", "crc.nim")
	result = 0;
	nimln(89, "crc.nim");
	result = c;
	{
		NI i_169553;
		NI HEX3Atmp_169555;
		NI TMP1367;
		NI res_169558;
		i_169553 = 0;
		HEX3Atmp_169555 = 0;
		nimln(90, "crc.nim");
		TMP1367 = subInt((s ? s->Sup.len : 0), ((NI) 1));
		HEX3Atmp_169555 = (NI)(TMP1367);
		nimln(1598, "system.nim");
		res_169558 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP1368;
				if (!(res_169558 <= HEX3Atmp_169555)) goto LA3;
				nimln(1600, "system.nim");
				i_169553 = res_169558;
				nimln(90, "crc.nim");
				if ((NU)(i_169553) > (NU)(s->Sup.len)) raiseIndexError();
				result = updatecrc32_169031(s->data[i_169553], result);
				nimln(1619, "system.nim");
				TMP1368 = addInt(res_169558, ((NI) 1));
				res_169558 = (NI)(TMP1368);
			} LA3: ;
		}
	}
	popFrame();
	return result;
}

N_NIMCALL(NI32, crcfrombuf_169038)(void* buf, NI length) {
	NI32 result;
	NI8* p;
	nimfr("crcFromBuf", "crc.nim")
	result = 0;
	nimln(97, "crc.nim");
	p = ((NI8*) (buf));
	nimln(98, "crc.nim");
	result = ((NI32) -1);
	{
		NI i_169604;
		NI HEX3Atmp_169607;
		NI TMP1369;
		NI res_169610;
		i_169604 = 0;
		HEX3Atmp_169607 = 0;
		nimln(99, "crc.nim");
		TMP1369 = subInt(length, ((NI) 1));
		HEX3Atmp_169607 = (NI)(TMP1369);
		nimln(1598, "system.nim");
		res_169610 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP1370;
				if (!(res_169610 <= HEX3Atmp_169607)) goto LA3;
				nimln(1600, "system.nim");
				i_169604 = res_169610;
				nimln(99, "crc.nim");
				if ((NU)(i_169604) > (NU)(10000000)) raiseIndexError();
				result = updatecrc32_169024(p[(i_169604)- 0], result);
				nimln(1614, "system.nim");
				TMP1370 = addInt(res_169610, ((NI) 1));
				res_169610 = (NI)(TMP1370);
			} LA3: ;
		}
	}
	popFrame();
	return result;
}

N_NIMCALL(NI32, crcfromfile_169051)(NimStringDesc* filename) {
	NI32 result;
	FILE* bin;
	void* buf;
	NI8* p;
	nimfr("crcFromFile", "crc.nim")
{	result = 0;
	bin = 0;
	nimln(106, "crc.nim");
	result = ((NI32) -1);
	nimln(107, "crc.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_13203(&bin, filename, ((NU8) 0), ((NI) -1));
		if (!!(LOC3)) goto LA4;
		nimln(108, "crc.nim");
		goto BeforeRet;
	}
	LA4: ;
	nimln(109, "crc.nim");
	buf = alloc_6001(((NI) 8000));
	nimln(110, "crc.nim");
	p = ((NI8*) (buf));
	{
		nimln(111, "crc.nim");
		while (1) {
			NI readbytes;
			nimln(112, "crc.nim");
			readbytes = readbuffer_13515(bin, buf, ((NI) 8000));
			{
				NI i_169652;
				NI HEX3Atmp_169657;
				NI TMP1371;
				NI res_169660;
				i_169652 = 0;
				HEX3Atmp_169657 = 0;
				nimln(113, "crc.nim");
				TMP1371 = subInt(readbytes, ((NI) 1));
				HEX3Atmp_169657 = (NI)(TMP1371);
				nimln(1598, "system.nim");
				res_169660 = ((NI) 0);
				{
					nimln(1599, "system.nim");
					while (1) {
						NI TMP1372;
						if (!(res_169660 <= HEX3Atmp_169657)) goto LA10;
						nimln(1600, "system.nim");
						i_169652 = res_169660;
						nimln(113, "crc.nim");
						if ((NU)(i_169652) > (NU)(10000000)) raiseIndexError();
						result = updatecrc32_169024(p[(i_169652)- 0], result);
						nimln(1614, "system.nim");
						TMP1372 = addInt(res_169660, ((NI) 1));
						res_169660 = (NI)(TMP1372);
					} LA10: ;
				}
			}
			nimln(114, "crc.nim");
			{
				if (!!((readbytes == ((NI) 8000)))) goto LA13;
				goto LA6;
			}
			LA13: ;
		}
	} LA6: ;
	nimln(115, "crc.nim");
	dealloc_6048(buf);
	nimln(116, "crc.nim");
	fclose(bin);
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NI32, updateadler32_169057)(NI32 adler, void* buf, NI length) {
	NI32 result;
	NI32 s1;
	NI32 s2;
	NI L;
	NI k;
	NI b;
	nimfr("updateAdler32", "crc.nim")
	result = 0;
	s1 = 0;
	s2 = 0;
	L = 0;
	k = 0;
	b = 0;
	nimln(132, "crc.nim");
	s1 = ((NI32) ((NI32)(adler & ((NI32) 65535))));
	nimln(133, "crc.nim");
	s2 = ((NI32) ((NI32)((NI32)((NU32)(adler) >> (NU32)(((NI32) 16))) & ((NI32) 65535))));
	nimln(134, "crc.nim");
	L = length;
	nimln(135, "crc.nim");
	b = ((NI) 0);
	{
		nimln(136, "crc.nim");
		while (1) {
			NI TMP1373;
			if (!(((NI) 0) < L)) goto LA2;
			nimln(137, "crc.nim");
			{
				if (!(L < ((NI) 3854))) goto LA5;
				k = L;
			}
			goto LA3;
			LA5: ;
			{
				nimln(138, "crc.nim");
				k = ((NI) 3854);
			}
			LA3: ;
			nimln(139, "crc.nim");
			TMP1373 = subInt(L, k);
			L = (NI)(TMP1373);
			{
				nimln(140, "crc.nim");
				while (1) {
					NI TMP1374;
					NI TMP1375;
					if (!(((NI) 0) < k)) goto LA9;
					nimln(141, "crc.nim");
					s1 = (NI32)((NU32)(s1) + (NU32)(((NI32) (((NU8)(((NCSTRING) (buf))[b]))))));
					nimln(142, "crc.nim");
					s2 = (NI32)((NU32)(s2) + (NU32)(s1));
					nimln(143, "crc.nim");
					TMP1374 = addInt(b, ((NI) 1));
					b = (NI)(TMP1374);
					nimln(144, "crc.nim");
					TMP1375 = subInt(k, ((NI) 1));
					k = (NI)(TMP1375);
				} LA9: ;
			}
			nimln(145, "crc.nim");
			s1 = (NI32)((NU32)(s1) % (NU32)(((NI32) 65521)));
			nimln(146, "crc.nim");
			s2 = (NI32)((NU32)(s2) % (NU32)(((NI32) 65521)));
		} LA2: ;
	}
	nimln(147, "crc.nim");
	result = (NI32)((NI32)((NU32)(s2) << (NU32)(((NI32) 16))) | s1);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_crcInit)(void) {
	nimfr("crc", "crc.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_crcDatInit)(void) {
NTI169015.size = sizeof(NI32);
NTI169015.kind = 34;
NTI169015.base = 0;
NTI169015.flags = 3;
}

