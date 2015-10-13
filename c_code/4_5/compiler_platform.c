/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct Tinfoos158049 Tinfoos158049;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tinfocpu158479 Tinfocpu158479;
typedef struct Tcell46746 Tcell46746;
typedef struct TNimType TNimType;
typedef struct Tcellseq46762 Tcellseq46762;
typedef struct Tgcheap48616 Tgcheap48616;
typedef struct Tcellset46758 Tcellset46758;
typedef struct Tpagedesc46754 Tpagedesc46754;
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
struct Tinfoos158049 {
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
typedef Tinfoos158049 TY158071[24];
typedef NimStringDesc* TY158491[2];
struct Tinfocpu158479 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef Tinfocpu158479 TY158497[14];
struct  Tcell46746  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46762  {
NI len;
NI cap;
Tcell46746** d;
};
struct  Tcellset46758  {
NI counter;
NI max;
Tpagedesc46754* head;
Tpagedesc46754** data;
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
Tcellseq46762 zct;
Tcellseq46762 decstack;
Tcellset46758 cycleroots;
Tcellseq46762 tempstack;
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
struct  Tpagedesc46754  {
Tpagedesc46754* next;
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
N_NIMCALL(void, settarget_158634)(NU8 o, NU8 c);
N_NIMCALL(void, failedassertimpl_87217)(NimStringDesc* msg);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46746*, usrtocell_50246)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_51804)(Tcell46746* c);
N_NOINLINE(void, addzct_50217)(Tcellseq46762* s, Tcell46746* c);
N_NIMCALL(NU8, nametoos_158611)(NimStringDesc* name);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NU8, nametocpu_158617)(NimStringDesc* name);
STRING_LITERAL(TMP747, "DOS", 3);
STRING_LITERAL(TMP748, "..", 2);
STRING_LITERAL(TMP749, "$1.dll", 6);
STRING_LITERAL(TMP750, "/", 1);
STRING_LITERAL(TMP751, ".obj", 4);
STRING_LITERAL(TMP752, "\015\012", 2);
STRING_LITERAL(TMP753, ";", 1);
STRING_LITERAL(TMP754, "\\", 1);
STRING_LITERAL(TMP755, ".bat", 4);
STRING_LITERAL(TMP756, ".", 1);
STRING_LITERAL(TMP757, ".exe", 4);
STRING_LITERAL(TMP758, "Windows", 7);
STRING_LITERAL(TMP759, "OS2", 3);
STRING_LITERAL(TMP760, "Linux", 5);
STRING_LITERAL(TMP761, "lib$1.so", 8);
STRING_LITERAL(TMP762, ".o", 2);
STRING_LITERAL(TMP763, "\012", 1);
STRING_LITERAL(TMP764, ":", 1);
STRING_LITERAL(TMP765, ".sh", 3);
STRING_LITERAL(TMP766, "", 0);
STRING_LITERAL(TMP767, "MorphOS", 7);
STRING_LITERAL(TMP768, "SkyOS", 5);
STRING_LITERAL(TMP769, "Solaris", 7);
STRING_LITERAL(TMP770, "Irix", 4);
STRING_LITERAL(TMP771, "NetBSD", 6);
STRING_LITERAL(TMP772, "FreeBSD", 7);
STRING_LITERAL(TMP773, "OpenBSD", 7);
STRING_LITERAL(TMP774, "AIX", 3);
STRING_LITERAL(TMP775, "PalmOS", 6);
STRING_LITERAL(TMP776, "QNX", 3);
STRING_LITERAL(TMP777, "Amiga", 5);
STRING_LITERAL(TMP778, "$1.library", 10);
STRING_LITERAL(TMP779, "Atari", 5);
STRING_LITERAL(TMP780, ".tpp", 4);
STRING_LITERAL(TMP781, "Netware", 7);
STRING_LITERAL(TMP782, "$1.nlm", 6);
STRING_LITERAL(TMP783, ".nlm", 4);
STRING_LITERAL(TMP784, "MacOS", 5);
STRING_LITERAL(TMP785, "::", 2);
STRING_LITERAL(TMP786, "$1Lib", 5);
STRING_LITERAL(TMP787, "\015", 1);
STRING_LITERAL(TMP788, ",", 1);
STRING_LITERAL(TMP789, "MacOSX", 6);
STRING_LITERAL(TMP790, "lib$1.dylib", 11);
STRING_LITERAL(TMP791, "Haiku", 5);
STRING_LITERAL(TMP792, "VxWorks", 7);
STRING_LITERAL(TMP793, ".vxe", 4);
STRING_LITERAL(TMP794, "JS", 2);
STRING_LITERAL(TMP795, "NimrodVM", 8);
STRING_LITERAL(TMP796, "Standalone", 10);
NIM_CONST TY158071 Os_158070 = {{((NimStringDesc*) &TMP747),
((NimStringDesc*) &TMP748),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP751),
((NimStringDesc*) &TMP752),
((NimStringDesc*) &TMP753),
((NimStringDesc*) &TMP754),
((NimStringDesc*) &TMP755),
((NimStringDesc*) &TMP756),
((NimStringDesc*) &TMP757),
((NimStringDesc*) &TMP756),
2}
,
{((NimStringDesc*) &TMP758),
((NimStringDesc*) &TMP748),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP751),
((NimStringDesc*) &TMP752),
((NimStringDesc*) &TMP753),
((NimStringDesc*) &TMP754),
((NimStringDesc*) &TMP755),
((NimStringDesc*) &TMP756),
((NimStringDesc*) &TMP757),
((NimStringDesc*) &TMP756),
2}
,
{((NimStringDesc*) &TMP759),
((NimStringDesc*) &TMP748),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP751),
((NimStringDesc*) &TMP752),
((NimStringDesc*) &TMP753),
((NimStringDesc*) &TMP754),
((NimStringDesc*) &TMP755),
((NimStringDesc*) &TMP756),
((NimStringDesc*) &TMP757),
((NimStringDesc*) &TMP756),
2}
,
{((NimStringDesc*) &TMP760),
((NimStringDesc*) &TMP748),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP756),
((NimStringDesc*) &TMP766),
((NimStringDesc*) &TMP756),
5}
,
{((NimStringDesc*) &TMP767),
((NimStringDesc*) &TMP748),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP756),
((NimStringDesc*) &TMP766),
((NimStringDesc*) &TMP756),
5}
,
{((NimStringDesc*) &TMP768),
((NimStringDesc*) &TMP748),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP756),
((NimStringDesc*) &TMP766),
((NimStringDesc*) &TMP756),
5}
,
{((NimStringDesc*) &TMP769),
((NimStringDesc*) &TMP748),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP756),
((NimStringDesc*) &TMP766),
((NimStringDesc*) &TMP756),
5}
,
{((NimStringDesc*) &TMP770),
((NimStringDesc*) &TMP748),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP756),
((NimStringDesc*) &TMP766),
((NimStringDesc*) &TMP756),
5}
,
{((NimStringDesc*) &TMP771),
((NimStringDesc*) &TMP748),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP756),
((NimStringDesc*) &TMP766),
((NimStringDesc*) &TMP756),
5}
,
{((NimStringDesc*) &TMP772),
((NimStringDesc*) &TMP748),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP756),
((NimStringDesc*) &TMP766),
((NimStringDesc*) &TMP756),
5}
,
{((NimStringDesc*) &TMP773),
((NimStringDesc*) &TMP748),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP756),
((NimStringDesc*) &TMP766),
((NimStringDesc*) &TMP756),
5}
,
{((NimStringDesc*) &TMP774),
((NimStringDesc*) &TMP748),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP756),
((NimStringDesc*) &TMP766),
((NimStringDesc*) &TMP756),
5}
,
{((NimStringDesc*) &TMP775),
((NimStringDesc*) &TMP748),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP756),
((NimStringDesc*) &TMP766),
((NimStringDesc*) &TMP756),
1}
,
{((NimStringDesc*) &TMP776),
((NimStringDesc*) &TMP748),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP756),
((NimStringDesc*) &TMP766),
((NimStringDesc*) &TMP756),
5}
,
{((NimStringDesc*) &TMP777),
((NimStringDesc*) &TMP748),
((NimStringDesc*) &TMP778),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP756),
((NimStringDesc*) &TMP766),
((NimStringDesc*) &TMP756),
1}
,
{((NimStringDesc*) &TMP779),
((NimStringDesc*) &TMP748),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP766),
((NimStringDesc*) &TMP756),
((NimStringDesc*) &TMP780),
((NimStringDesc*) &TMP756),
1}
,
{((NimStringDesc*) &TMP781),
((NimStringDesc*) &TMP748),
((NimStringDesc*) &TMP782),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP766),
((NimStringDesc*) &TMP752),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP756),
((NimStringDesc*) &TMP783),
((NimStringDesc*) &TMP756),
2}
,
{((NimStringDesc*) &TMP784),
((NimStringDesc*) &TMP785),
((NimStringDesc*) &TMP786),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP787),
((NimStringDesc*) &TMP788),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP766),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP766),
((NimStringDesc*) &TMP756),
2}
,
{((NimStringDesc*) &TMP789),
((NimStringDesc*) &TMP748),
((NimStringDesc*) &TMP790),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP756),
((NimStringDesc*) &TMP766),
((NimStringDesc*) &TMP756),
13}
,
{((NimStringDesc*) &TMP791),
((NimStringDesc*) &TMP748),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP756),
((NimStringDesc*) &TMP766),
((NimStringDesc*) &TMP756),
13}
,
{((NimStringDesc*) &TMP792),
((NimStringDesc*) &TMP748),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP753),
((NimStringDesc*) &TMP754),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP756),
((NimStringDesc*) &TMP793),
((NimStringDesc*) &TMP756),
13}
,
{((NimStringDesc*) &TMP794),
((NimStringDesc*) &TMP748),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP756),
((NimStringDesc*) &TMP766),
((NimStringDesc*) &TMP756),
0}
,
{((NimStringDesc*) &TMP795),
((NimStringDesc*) &TMP748),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP756),
((NimStringDesc*) &TMP766),
((NimStringDesc*) &TMP756),
0}
,
{((NimStringDesc*) &TMP796),
((NimStringDesc*) &TMP748),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP756),
((NimStringDesc*) &TMP766),
((NimStringDesc*) &TMP756),
0}
}
;
STRING_LITERAL(TMP797, "littleEndian", 12);
STRING_LITERAL(TMP798, "bigEndian", 9);
NIM_CONST TY158491 Endiantostr_158490 = {((NimStringDesc*) &TMP797),
((NimStringDesc*) &TMP798)}
;
STRING_LITERAL(TMP799, "i386", 4);
STRING_LITERAL(TMP800, "m68k", 4);
STRING_LITERAL(TMP801, "alpha", 5);
STRING_LITERAL(TMP802, "powerpc", 7);
STRING_LITERAL(TMP803, "powerpc64", 9);
STRING_LITERAL(TMP804, "sparc", 5);
STRING_LITERAL(TMP805, "vm", 2);
STRING_LITERAL(TMP806, "ia64", 4);
STRING_LITERAL(TMP807, "amd64", 5);
STRING_LITERAL(TMP808, "mips", 4);
STRING_LITERAL(TMP809, "arm", 3);
STRING_LITERAL(TMP810, "js", 2);
STRING_LITERAL(TMP811, "nimrodvm", 8);
STRING_LITERAL(TMP812, "avr", 3);
NIM_CONST TY158497 Cpu_158496 = {{((NimStringDesc*) &TMP799),
((NI) 32),
((NU8) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP800),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP801),
((NI) 64),
((NU8) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP802),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP803),
((NI) 64),
((NU8) 1),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP804),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP805),
((NI) 32),
((NU8) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP806),
((NI) 64),
((NU8) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP807),
((NI) 64),
((NU8) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP808),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP809),
((NI) 32),
((NU8) 0),
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
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP812),
((NI) 16),
((NU8) 0),
((NI) 32),
((NI) 16)}
}
;
STRING_LITERAL(TMP813, "not (c == cpuNone) ", 19);
STRING_LITERAL(TMP814, "not (o == osNone) ", 18);
STRING_LITERAL(TMP820, "solaris", 7);
NU8 targetcpu_158600;
NU8 hostcpu_158601;
NU8 targetos_158602;
NU8 hostos_158603;
NI intsize_158623;
NI floatsize_158624;
NI ptrsize_158625;
NimStringDesc* tnl_158626;
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

static N_INLINE(Tcell46746*, usrtocell_50246)(void* usr) {
	Tcell46746* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	result = ((Tcell46746*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46746))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_51804)(Tcell46746* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_50217((&gch_48644.zct), c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46746* c;
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

N_NIMCALL(void, settarget_158634)(NU8 o, NU8 c) {
	NI TMP815;
	NI TMP816;
	NI TMP817;
	NimStringDesc* LOC9;
	nimfr("setTarget", "platform.nim")
	nimln(202, "platform.nim");
	{
		if (!!(!((c == ((NU8) 0))))) goto LA3;
		failedassertimpl_87217(((NimStringDesc*) &TMP813));
	}
	LA3: ;
	nimln(203, "platform.nim");
	{
		if (!!(!((o == ((NU8) 0))))) goto LA7;
		failedassertimpl_87217(((NimStringDesc*) &TMP814));
	}
	LA7: ;
	nimln(205, "platform.nim");
	targetcpu_158600 = c;
	nimln(206, "platform.nim");
	targetos_158602 = o;
	nimln(207, "platform.nim");
	if (c < 1 || c > 14) raiseIndexError();
	TMP815 = divInt(Cpu_158496[(c)- 1].Field1, ((NI) 8));
	intsize_158623 = (NI)(TMP815);
	nimln(208, "platform.nim");
	if (c < 1 || c > 14) raiseIndexError();
	TMP816 = divInt(Cpu_158496[(c)- 1].Field3, ((NI) 8));
	floatsize_158624 = (NI)(TMP816);
	nimln(209, "platform.nim");
	if (c < 1 || c > 14) raiseIndexError();
	TMP817 = divInt(Cpu_158496[(c)- 1].Field4, ((NI) 8));
	ptrsize_158625 = (NI)(TMP817);
	nimln(210, "platform.nim");
	if (o < 1 || o > 24) raiseIndexError();
	LOC9 = 0;
	LOC9 = tnl_158626; tnl_158626 = copyStringRC1(Os_158070[(o)- 1].Field5);
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

N_NIMCALL(NU8, nametoos_158611)(NimStringDesc* name) {
	NU8 result;
	nimfr("nameToOS", "platform.nim")
{	result = 0;
	{
		NU8 i_159223;
		NI res_159228;
		i_159223 = 0;
		nimln(1598, "system.nim");
		res_159228 = ((NI) 1);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP818;
				if (!(res_159228 <= ((NI) 24))) goto LA3;
				nimln(1600, "system.nim");
				i_159223 = ((NU8)chckRange(res_159228, ((NU8) 0), ((NU8) 24)));
				nimln(214, "platform.nim");
				{
					NI LOC6;
					if (i_159223 < 1 || i_159223 > 24) raiseIndexError();
					LOC6 = 0;
					LOC6 = nsuCmpIgnoreStyle(name, Os_158070[(i_159223)- 1].Field0);
					if (!(LOC6 == ((NI) 0))) goto LA7;
					nimln(215, "platform.nim");
					result = i_159223;
					goto BeforeRet;
				}
				LA7: ;
				nimln(1614, "system.nim");
				TMP818 = addInt(res_159228, ((NI) 1));
				res_159228 = (NI)(TMP818);
			} LA3: ;
		}
	}
	nimln(216, "platform.nim");
	result = ((NU8) 0);
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NU8, nametocpu_158617)(NimStringDesc* name) {
	NU8 result;
	nimfr("nameToCPU", "platform.nim")
{	result = 0;
	{
		NU8 i_159423;
		NI res_159428;
		i_159423 = 0;
		nimln(1598, "system.nim");
		res_159428 = ((NI) 1);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP819;
				if (!(res_159428 <= ((NI) 14))) goto LA3;
				nimln(1600, "system.nim");
				i_159423 = ((NU8)chckRange(res_159428, ((NU8) 0), ((NU8) 14)));
				nimln(220, "platform.nim");
				{
					NI LOC6;
					if (i_159423 < 1 || i_159423 > 14) raiseIndexError();
					LOC6 = 0;
					LOC6 = nsuCmpIgnoreStyle(name, Cpu_158496[(i_159423)- 1].Field0);
					if (!(LOC6 == ((NI) 0))) goto LA7;
					nimln(221, "platform.nim");
					result = i_159423;
					goto BeforeRet;
				}
				LA7: ;
				nimln(1614, "system.nim");
				TMP819 = addInt(res_159428, ((NI) 1));
				res_159428 = (NI)(TMP819);
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
	hostcpu_158601 = nametocpu_158617(((NimStringDesc*) &TMP804));
	nimln(225, "platform.nim");
	hostos_158603 = nametoos_158611(((NimStringDesc*) &TMP820));
	nimln(227, "platform.nim");
	settarget_158634(hostos_158603, hostcpu_158601);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_platformDatInit)(void) {
}

