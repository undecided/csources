/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct Tinfoos159049 Tinfoos159049;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tinfocpu159479 Tinfocpu159479;
typedef struct Tcell46747 Tcell46747;
typedef struct TNimType TNimType;
typedef struct Tcellseq46763 Tcellseq46763;
typedef struct Tgcheap48616 Tgcheap48616;
typedef struct Tcellset46759 Tcellset46759;
typedef struct Tpagedesc46755 Tpagedesc46755;
typedef struct Tmemregion28610 Tmemregion28610;
typedef struct Tsmallchunk27840 Tsmallchunk27840;
typedef struct Tllchunk28604 Tllchunk28604;
typedef struct Tbigchunk27842 Tbigchunk27842;
typedef struct Tintset27817 Tintset27817;
typedef struct Ttrunk27813 Ttrunk27813;
typedef struct Tavlnode28608 Tavlnode28608;
typedef struct Tgcstat48614 Tgcstat48614;
typedef struct TNimNode TNimNode;
typedef struct Tbasechunk27838 Tbasechunk27838;
typedef struct Tfreecell27830 Tfreecell27830;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct Tinfoos159049 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
NimStringDesc* Field3;
NimStringDesc* Field4;
NimStringDesc* Field5;
NimStringDesc* Field6;
NimStringDesc* Field7;
NimStringDesc* Field8;
NimStringDesc* Field9;
NimStringDesc* Field10;
NimStringDesc* Field11;
NU8 Field12;
};
typedef Tinfoos159049 TY159071[24];
typedef NimStringDesc* TY159491[2];
struct Tinfocpu159479 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef Tinfocpu159479 TY159497[14];
struct  Tcell46747  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46763  {
NI len;
NI cap;
Tcell46747** d;
};
struct  Tcellset46759  {
NI counter;
NI max;
Tpagedesc46755* head;
Tpagedesc46755** data;
};
typedef Tsmallchunk27840* TY28622[512];
typedef Ttrunk27813* Ttrunkbuckets27815[256];
struct  Tintset27817  {
Ttrunkbuckets27815 data;
};
struct  Tmemregion28610  {
NI minlargeobj;
NI maxlargeobj;
TY28622 freesmallchunks;
Tllchunk28604* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27842* freechunkslist;
Tintset27817 chunkstarts;
Tavlnode28608* root;
Tavlnode28608* deleted;
Tavlnode28608* last;
Tavlnode28608* freeavlnodes;
};
struct  Tgcstat48614  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48616  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46763 zct;
Tcellseq46763 decstack;
Tcellset46759 cycleroots;
Tcellseq46763 tempstack;
NI recgclock;
Tmemregion28610 region;
Tgcstat48614 stat;
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
typedef NI TY27820[16];
struct  Tpagedesc46755  {
Tpagedesc46755* next;
NI key;
TY27820 bits;
};
struct  Tbasechunk27838  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27840  {
  Tbasechunk27838 Sup;
Tsmallchunk27840* next;
Tsmallchunk27840* prev;
Tfreecell27830* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28604  {
NI size;
NI acc;
Tllchunk28604* next;
};
struct  Tbigchunk27842  {
  Tbasechunk27838 Sup;
Tbigchunk27842* next;
Tbigchunk27842* prev;
NI align;
NF data;
};
struct  Ttrunk27813  {
Ttrunk27813* next;
NI key;
TY27820 bits;
};
typedef Tavlnode28608* TY28614[2];
struct  Tavlnode28608  {
TY28614 link;
NI key;
NI upperbound;
NI level;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tfreecell27830  {
Tfreecell27830* next;
NI zerofield;
};
N_NIMCALL(void, settarget_159634)(NU8 o, NU8 c);
N_NIMCALL(void, failedassertimpl_87017)(NimStringDesc* msg);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_51804)(Tcell46747* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46763* s, Tcell46747* c);
N_NIMCALL(NU8, nametoos_159611)(NimStringDesc* name);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NU8, nametocpu_159617)(NimStringDesc* name);
STRING_LITERAL(TMP746, "DOS", 3);
STRING_LITERAL(TMP747, "..", 2);
STRING_LITERAL(TMP748, "$1.dll", 6);
STRING_LITERAL(TMP749, "/", 1);
STRING_LITERAL(TMP750, ".obj", 4);
STRING_LITERAL(TMP751, "\015\012", 2);
STRING_LITERAL(TMP752, ";", 1);
STRING_LITERAL(TMP753, "\\", 1);
STRING_LITERAL(TMP754, ".bat", 4);
STRING_LITERAL(TMP755, ".", 1);
STRING_LITERAL(TMP756, ".exe", 4);
STRING_LITERAL(TMP757, "Windows", 7);
STRING_LITERAL(TMP758, "OS2", 3);
STRING_LITERAL(TMP759, "Linux", 5);
STRING_LITERAL(TMP760, "lib$1.so", 8);
STRING_LITERAL(TMP761, ".o", 2);
STRING_LITERAL(TMP762, "\012", 1);
STRING_LITERAL(TMP763, ":", 1);
STRING_LITERAL(TMP764, ".sh", 3);
STRING_LITERAL(TMP765, "", 0);
STRING_LITERAL(TMP766, "MorphOS", 7);
STRING_LITERAL(TMP767, "SkyOS", 5);
STRING_LITERAL(TMP768, "Solaris", 7);
STRING_LITERAL(TMP769, "Irix", 4);
STRING_LITERAL(TMP770, "NetBSD", 6);
STRING_LITERAL(TMP771, "FreeBSD", 7);
STRING_LITERAL(TMP772, "OpenBSD", 7);
STRING_LITERAL(TMP773, "AIX", 3);
STRING_LITERAL(TMP774, "PalmOS", 6);
STRING_LITERAL(TMP775, "QNX", 3);
STRING_LITERAL(TMP776, "Amiga", 5);
STRING_LITERAL(TMP777, "$1.library", 10);
STRING_LITERAL(TMP778, "Atari", 5);
STRING_LITERAL(TMP779, ".tpp", 4);
STRING_LITERAL(TMP780, "Netware", 7);
STRING_LITERAL(TMP781, "$1.nlm", 6);
STRING_LITERAL(TMP782, ".nlm", 4);
STRING_LITERAL(TMP783, "MacOS", 5);
STRING_LITERAL(TMP784, "::", 2);
STRING_LITERAL(TMP785, "$1Lib", 5);
STRING_LITERAL(TMP786, "\015", 1);
STRING_LITERAL(TMP787, ",", 1);
STRING_LITERAL(TMP788, "MacOSX", 6);
STRING_LITERAL(TMP789, "lib$1.dylib", 11);
STRING_LITERAL(TMP790, "Haiku", 5);
STRING_LITERAL(TMP791, "VxWorks", 7);
STRING_LITERAL(TMP792, ".vxe", 4);
STRING_LITERAL(TMP793, "JS", 2);
STRING_LITERAL(TMP794, "NimrodVM", 8);
STRING_LITERAL(TMP795, "Standalone", 10);
NIM_CONST TY159071 Os_159070 = {{((NimStringDesc*) &TMP746),
((NimStringDesc*) &TMP747),
((NimStringDesc*) &TMP748),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP751),
((NimStringDesc*) &TMP752),
((NimStringDesc*) &TMP753),
((NimStringDesc*) &TMP754),
((NimStringDesc*) &TMP755),
((NimStringDesc*) &TMP756),
((NimStringDesc*) &TMP755),
2}
,
{((NimStringDesc*) &TMP757),
((NimStringDesc*) &TMP747),
((NimStringDesc*) &TMP748),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP751),
((NimStringDesc*) &TMP752),
((NimStringDesc*) &TMP753),
((NimStringDesc*) &TMP754),
((NimStringDesc*) &TMP755),
((NimStringDesc*) &TMP756),
((NimStringDesc*) &TMP755),
2}
,
{((NimStringDesc*) &TMP758),
((NimStringDesc*) &TMP747),
((NimStringDesc*) &TMP748),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP751),
((NimStringDesc*) &TMP752),
((NimStringDesc*) &TMP753),
((NimStringDesc*) &TMP754),
((NimStringDesc*) &TMP755),
((NimStringDesc*) &TMP756),
((NimStringDesc*) &TMP755),
2}
,
{((NimStringDesc*) &TMP759),
((NimStringDesc*) &TMP747),
((NimStringDesc*) &TMP760),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP755),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP755),
5}
,
{((NimStringDesc*) &TMP766),
((NimStringDesc*) &TMP747),
((NimStringDesc*) &TMP760),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP755),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP755),
5}
,
{((NimStringDesc*) &TMP767),
((NimStringDesc*) &TMP747),
((NimStringDesc*) &TMP760),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP755),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP755),
5}
,
{((NimStringDesc*) &TMP768),
((NimStringDesc*) &TMP747),
((NimStringDesc*) &TMP760),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP755),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP755),
5}
,
{((NimStringDesc*) &TMP769),
((NimStringDesc*) &TMP747),
((NimStringDesc*) &TMP760),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP755),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP755),
5}
,
{((NimStringDesc*) &TMP770),
((NimStringDesc*) &TMP747),
((NimStringDesc*) &TMP760),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP755),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP755),
5}
,
{((NimStringDesc*) &TMP771),
((NimStringDesc*) &TMP747),
((NimStringDesc*) &TMP760),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP755),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP755),
5}
,
{((NimStringDesc*) &TMP772),
((NimStringDesc*) &TMP747),
((NimStringDesc*) &TMP760),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP755),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP755),
5}
,
{((NimStringDesc*) &TMP773),
((NimStringDesc*) &TMP747),
((NimStringDesc*) &TMP760),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP755),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP755),
5}
,
{((NimStringDesc*) &TMP774),
((NimStringDesc*) &TMP747),
((NimStringDesc*) &TMP760),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP755),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP755),
1}
,
{((NimStringDesc*) &TMP775),
((NimStringDesc*) &TMP747),
((NimStringDesc*) &TMP760),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP755),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP755),
5}
,
{((NimStringDesc*) &TMP776),
((NimStringDesc*) &TMP747),
((NimStringDesc*) &TMP777),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP755),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP755),
1}
,
{((NimStringDesc*) &TMP778),
((NimStringDesc*) &TMP747),
((NimStringDesc*) &TMP748),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP755),
((NimStringDesc*) &TMP779),
((NimStringDesc*) &TMP755),
1}
,
{((NimStringDesc*) &TMP780),
((NimStringDesc*) &TMP747),
((NimStringDesc*) &TMP781),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP751),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP755),
((NimStringDesc*) &TMP782),
((NimStringDesc*) &TMP755),
2}
,
{((NimStringDesc*) &TMP783),
((NimStringDesc*) &TMP784),
((NimStringDesc*) &TMP785),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP786),
((NimStringDesc*) &TMP787),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP755),
2}
,
{((NimStringDesc*) &TMP788),
((NimStringDesc*) &TMP747),
((NimStringDesc*) &TMP789),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP755),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP755),
13}
,
{((NimStringDesc*) &TMP790),
((NimStringDesc*) &TMP747),
((NimStringDesc*) &TMP760),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP755),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP755),
13}
,
{((NimStringDesc*) &TMP791),
((NimStringDesc*) &TMP747),
((NimStringDesc*) &TMP760),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP752),
((NimStringDesc*) &TMP753),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP755),
((NimStringDesc*) &TMP792),
((NimStringDesc*) &TMP755),
13}
,
{((NimStringDesc*) &TMP793),
((NimStringDesc*) &TMP747),
((NimStringDesc*) &TMP760),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP755),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP755),
0}
,
{((NimStringDesc*) &TMP794),
((NimStringDesc*) &TMP747),
((NimStringDesc*) &TMP760),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP755),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP755),
0}
,
{((NimStringDesc*) &TMP795),
((NimStringDesc*) &TMP747),
((NimStringDesc*) &TMP760),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP755),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP755),
0}
}
;
STRING_LITERAL(TMP796, "littleEndian", 12);
STRING_LITERAL(TMP797, "bigEndian", 9);
NIM_CONST TY159491 Endiantostr_159490 = {((NimStringDesc*) &TMP796),
((NimStringDesc*) &TMP797)}
;
STRING_LITERAL(TMP798, "i386", 4);
STRING_LITERAL(TMP799, "m68k", 4);
STRING_LITERAL(TMP800, "alpha", 5);
STRING_LITERAL(TMP801, "powerpc", 7);
STRING_LITERAL(TMP802, "powerpc64", 9);
STRING_LITERAL(TMP803, "sparc", 5);
STRING_LITERAL(TMP804, "vm", 2);
STRING_LITERAL(TMP805, "ia64", 4);
STRING_LITERAL(TMP806, "amd64", 5);
STRING_LITERAL(TMP807, "mips", 4);
STRING_LITERAL(TMP808, "arm", 3);
STRING_LITERAL(TMP809, "js", 2);
STRING_LITERAL(TMP810, "nimrodvm", 8);
STRING_LITERAL(TMP811, "avr", 3);
NIM_CONST TY159497 Cpu_159496 = {{((NimStringDesc*) &TMP798),
((NI) 32),
((NU8) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP799),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP800),
((NI) 64),
((NU8) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP801),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP802),
((NI) 64),
((NU8) 1),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP803),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP804),
((NI) 32),
((NU8) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP805),
((NI) 64),
((NU8) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP806),
((NI) 64),
((NU8) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP807),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP808),
((NI) 32),
((NU8) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP809),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP810),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP811),
((NI) 16),
((NU8) 0),
((NI) 32),
((NI) 16)}
}
;
STRING_LITERAL(TMP812, "not (c == cpuNone) ", 19);
STRING_LITERAL(TMP813, "not (o == osNone) ", 18);
STRING_LITERAL(TMP819, "freebsd", 7);
NU8 targetcpu_159600;
NU8 hostcpu_159601;
NU8 targetos_159602;
NU8 hostos_159603;
NI intsize_159623;
NI floatsize_159624;
NI ptrsize_159625;
NimStringDesc* tnl_159626;
extern TFrame* frameptr_17042;
extern Tgcheap48616 gch_48644;

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
		LOC7 = (a == ((NI) (-2147483647 -1)));
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

static N_INLINE(Tcell46747*, usrtocell_50246)(void* usr) {
	Tcell46747* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	result = ((Tcell46747*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46747))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_51804)(Tcell46747* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_50217((&gch_48644.zct), c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46747* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_50246(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).refcount -= ((NI) 8);
		nimln(168, "gc.nim");
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_51804(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, settarget_159634)(NU8 o, NU8 c) {
	NI TMP814;
	NI TMP815;
	NI TMP816;
	NimStringDesc* LOC9;
	nimfr("setTarget", "platform.nim")
	nimln(202, "platform.nim");
	{
		if (!!(!((c == ((NU8) 0))))) goto LA3;
		failedassertimpl_87017(((NimStringDesc*) &TMP812));
	}
	LA3: ;
	nimln(203, "platform.nim");
	{
		if (!!(!((o == ((NU8) 0))))) goto LA7;
		failedassertimpl_87017(((NimStringDesc*) &TMP813));
	}
	LA7: ;
	nimln(205, "platform.nim");
	targetcpu_159600 = c;
	nimln(206, "platform.nim");
	targetos_159602 = o;
	nimln(207, "platform.nim");
	if (c < 1 || c > 14) raiseIndexError();
	TMP814 = divInt(Cpu_159496[(c)- 1].Field1, ((NI) 8));
	intsize_159623 = (NI)(TMP814);
	nimln(208, "platform.nim");
	if (c < 1 || c > 14) raiseIndexError();
	TMP815 = divInt(Cpu_159496[(c)- 1].Field3, ((NI) 8));
	floatsize_159624 = (NI)(TMP815);
	nimln(209, "platform.nim");
	if (c < 1 || c > 14) raiseIndexError();
	TMP816 = divInt(Cpu_159496[(c)- 1].Field4, ((NI) 8));
	ptrsize_159625 = (NI)(TMP816);
	nimln(210, "platform.nim");
	if (o < 1 || o > 24) raiseIndexError();
	LOC9 = 0;
	LOC9 = tnl_159626; tnl_159626 = copyStringRC1(Os_159070[(o)- 1].Field5);
	if (LOC9) nimGCunrefNoCycle(LOC9);
	popFrame();
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

N_NIMCALL(NU8, nametoos_159611)(NimStringDesc* name) {
	NU8 result;
	nimfr("nameToOS", "platform.nim")
{	result = 0;
	{
		NU8 i_160223;
		NI res_160228;
		i_160223 = 0;
		nimln(1598, "system.nim");
		res_160228 = ((NI) 1);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP817;
				if (!(res_160228 <= ((NI) 24))) goto LA3;
				nimln(1600, "system.nim");
				i_160223 = ((NU8)chckRange(res_160228, ((NU8) 0), ((NU8) 24)));
				nimln(214, "platform.nim");
				{
					NI LOC6;
					if (i_160223 < 1 || i_160223 > 24) raiseIndexError();
					LOC6 = 0;
					LOC6 = nsuCmpIgnoreStyle(name, Os_159070[(i_160223)- 1].Field0);
					if (!(LOC6 == ((NI) 0))) goto LA7;
					nimln(215, "platform.nim");
					result = i_160223;
					goto BeforeRet;
				}
				LA7: ;
				nimln(1614, "system.nim");
				TMP817 = addInt(res_160228, ((NI) 1));
				res_160228 = (NI)(TMP817);
			} LA3: ;
		}
	}
	nimln(216, "platform.nim");
	result = ((NU8) 0);
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NU8, nametocpu_159617)(NimStringDesc* name) {
	NU8 result;
	nimfr("nameToCPU", "platform.nim")
{	result = 0;
	{
		NU8 i_160423;
		NI res_160428;
		i_160423 = 0;
		nimln(1598, "system.nim");
		res_160428 = ((NI) 1);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP818;
				if (!(res_160428 <= ((NI) 14))) goto LA3;
				nimln(1600, "system.nim");
				i_160423 = ((NU8)chckRange(res_160428, ((NU8) 0), ((NU8) 14)));
				nimln(220, "platform.nim");
				{
					NI LOC6;
					if (i_160423 < 1 || i_160423 > 14) raiseIndexError();
					LOC6 = 0;
					LOC6 = nsuCmpIgnoreStyle(name, Cpu_159496[(i_160423)- 1].Field0);
					if (!(LOC6 == ((NI) 0))) goto LA7;
					nimln(221, "platform.nim");
					result = i_160423;
					goto BeforeRet;
				}
				LA7: ;
				nimln(1614, "system.nim");
				TMP818 = addInt(res_160428, ((NI) 1));
				res_160428 = (NI)(TMP818);
			} LA3: ;
		}
	}
	nimln(222, "platform.nim");
	result = ((NU8) 0);
	}BeforeRet: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_platformInit)(void) {
	nimfr("platform", "platform.nim")
	nimln(224, "platform.nim");
	hostcpu_159601 = nametocpu_159617(((NimStringDesc*) &TMP798));
	nimln(225, "platform.nim");
	hostos_159603 = nametoos_159611(((NimStringDesc*) &TMP819));
	nimln(227, "platform.nim");
	settarget_159634(hostos_159603, hostcpu_159601);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_platformDatInit)(void) {
}

