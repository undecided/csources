/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <setjmp.h>

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TSafePoint TSafePoint;
typedef struct Tcell46947 Tcell46947;
typedef struct Tcellseq46963 Tcellseq46963;
typedef struct Tgcheap48816 Tgcheap48816;
typedef struct Tcellset46959 Tcellset46959;
typedef struct Tpagedesc46955 Tpagedesc46955;
typedef struct Tmemregion28810 Tmemregion28810;
typedef struct Tsmallchunk28040 Tsmallchunk28040;
typedef struct Tllchunk28804 Tllchunk28804;
typedef struct Tbigchunk28042 Tbigchunk28042;
typedef struct Tintset28017 Tintset28017;
typedef struct Ttrunk28013 Ttrunk28013;
typedef struct Tavlnode28808 Tavlnode28808;
typedef struct Tgcstat48814 Tgcstat48814;
typedef struct TY119789 TY119789;
typedef struct Tbasechunk28038 Tbasechunk28038;
typedef struct Tfreecell28030 Tfreecell28030;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e, void* ClEnv);
void* ClEnv;
} TY15809;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY15809 raiseAction;
};
struct  Tcell46947  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46963  {
NI len;
NI cap;
Tcell46947** d;
};
struct  Tcellset46959  {
NI counter;
NI max;
Tpagedesc46955* head;
Tpagedesc46955** data;
};
typedef Tsmallchunk28040* TY28822[512];
typedef Ttrunk28013* Ttrunkbuckets28015[256];
struct  Tintset28017  {
Ttrunkbuckets28015 data;
};
struct  Tmemregion28810  {
NI minlargeobj;
NI maxlargeobj;
TY28822 freesmallchunks;
Tllchunk28804* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk28042* freechunkslist;
Tintset28017 chunkstarts;
Tavlnode28808* root;
Tavlnode28808* deleted;
Tavlnode28808* last;
Tavlnode28808* freeavlnodes;
};
struct  Tgcstat48814  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48816  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46963 zct;
Tcellseq46963 decstack;
Tcellset46959 cycleroots;
Tcellseq46963 tempstack;
NI recgclock;
Tmemregion28810 region;
Tgcstat48814 stat;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY119789 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
typedef NI TY28020[8];
struct  Tpagedesc46955  {
Tpagedesc46955* next;
NI key;
TY28020 bits;
};
struct  Tbasechunk28038  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk28040  {
  Tbasechunk28038 Sup;
Tsmallchunk28040* next;
Tsmallchunk28040* prev;
Tfreecell28030* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28804  {
NI size;
NI acc;
Tllchunk28804* next;
};
struct  Tbigchunk28042  {
  Tbasechunk28038 Sup;
Tbigchunk28042* next;
Tbigchunk28042* prev;
NI align;
NF data;
};
struct  Ttrunk28013  {
Ttrunk28013* next;
NI key;
TY28020 bits;
};
typedef Tavlnode28808* TY28814[2];
struct  Tavlnode28808  {
TY28814 link;
NI key;
NI upperbound;
NI level;
};
struct  Tfreecell28030  {
Tfreecell28030* next;
NI zerofield;
};
N_NIMCALL(NimStringDesc*, prependcurdir_527401)(NimStringDesc* f);
N_NIMCALL(NIM_BOOL, nosisAbsolute)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20201)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, handlecmdline_527607)(void);
N_NIMCALL(NI, paramcount_126030)(void);
N_NIMCALL(void, writecommandlineusage_175020)(void);
N_NIMCALL(void, processcmdline_521209)(NU8 pass, NimStringDesc* cmd);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(NimStringDesc*, canonicalizepath_153374)(NimStringDesc* path);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46947*, usrtocell_50446)(void* usr);
static N_INLINE(void, rtladdzct_52004)(Tcell46947* c);
N_NOINLINE(void, addzct_50417)(Tcellseq46963* s, Tcell46947* c);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(void, setFrame)(TFrame* s);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52822)(Tcell46947* c);
static N_INLINE(NIM_BOOL, canbecycleroot_50467)(Tcell46947* c);
static N_INLINE(void, rtladdcycleroot_51223)(Tcell46947* c);
N_NOINLINE(void, incl_47665)(Tcellset46959* s, Tcell46947* cell);
static N_INLINE(void, decref_52404)(Tcell46947* c);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY119789* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(void, loadconfigs_185809)(NimStringDesc* cfg);
N_NIMCALL(void, initvars_169876)(void);
N_NIMCALL(void, maincommand_524628)(void);
N_NIMCALL(NimStringDesc*, Gcgetstatistics_8821)(void);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, nospquoteShell)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, completecfilepath_169912)(NimStringDesc* cfile, NIM_BOOL createsubdir);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(void, execexternalprogram_169985)(NimStringDesc* cmd, NimStringDesc* prettycmd);
N_NIMCALL(NimStringDesc*, findnodejs_526009)(void);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(void, Gcdisablemarkandsweep_8819)(void);
N_NIMCALL(void, initdefines_167254)(void);
N_NIMCALL(void, msgquit_163104)(NI8 x);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_NOINLINE(void, setStackBottom)(void* thestackbottom);
NIM_EXTERNC N_NOINLINE(void, systemInit)(void);
NIM_EXTERNC N_NOINLINE(void, systemDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_testabilityInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_testabilityDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_timesInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_timesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_posixInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_posixDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_listsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_listsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osprocInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osprocDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_setsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_setsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_optionsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_optionsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_tablesInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_tablesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_platformInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_platformDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_ropesInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_ropesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_msgsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_msgsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_nversionInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_nversionDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_identsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_identsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_condsymsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_condsymsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_crcInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_crcDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_extccompInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_extccompDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_wordrecgInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_wordrecgDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseoptInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseoptDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_commandsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_commandsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_llstreamInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_llstreamDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_nimlexbaseInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_nimlexbaseDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_lexerInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_lexerDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_nimconfInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_nimconfDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_idgenInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_idgenDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_astInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_astDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_rodutilsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_rodutilsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_astalgoInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_astalgoDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_parserInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_parserDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_pbracesInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_pbracesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_rendererInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_rendererDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_filtersInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_filtersDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_filter_tmplInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_filter_tmplDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_syntaxesInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_syntaxesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_treesInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_treesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_typesInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_typesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_memfilesInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_memfilesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_rodreadInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_rodreadDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_magicsysInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_magicsysDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_bitsetsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_bitsetsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_nimsetsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_nimsetsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_passesInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_passesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_treetabInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_treetabDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_vmdefInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_vmdefDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_semdataInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_semdataDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_lookupsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_lookupsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_importerInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_importerDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_rodwriteInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_rodwriteDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_saturateInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_saturateDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_semfoldInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_semfoldDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_procfindInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_procfindDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_pragmasInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_pragmasDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_semtypinstInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_semtypinstDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_parampatternsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_parampatternsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_prettyInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_prettyDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unicodeInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unicodeDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_jsonInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_jsonDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_rstastInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_rstastDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_rstInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_rstDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_highliteInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_highliteDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_sequtilsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_sequtilsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_rstgenInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_rstgenDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_guardsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_guardsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_sempass2Init)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_sempass2DatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_xmltreeInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_xmltreeDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_cookiesInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_cookiesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_cgiInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_cgiDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_typesrendererInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_typesrendererDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_docgenInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_docgenDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_sigmatchInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_sigmatchDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_cgmethInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_cgmethDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_loweringsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_loweringsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_lambdaliftingInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_lambdaliftingDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_transfInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_transfDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unsignedInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unsignedDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_vmgenInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_vmgenDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_vmdepsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_vmdepsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_vmmarshalInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_vmmarshalDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_vmInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_vmDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_aliasesInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_aliasesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_patternsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_patternsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_semmacrosanityInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_semmacrosanityDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_semparallelInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_semparallelDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_pluginsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_pluginsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_localsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_localsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_activeInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_activeDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_semInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_semDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_ccgutilsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_ccgutilsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_cgendataInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_cgendataDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_ccgmergeInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_ccgmergeDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_cgenInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_cgenDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_jsgenInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_jsgenDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_passauxInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_passauxDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_dependsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_dependsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_docgen2Init)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_docgen2DatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_rawsocketsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_rawsocketsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_netInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_netDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_serviceInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_serviceDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_modulesInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_modulesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_mainInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_mainDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_nodejsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_nodejsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimDatInit)(void);
STRING_LITERAL(TMP10784, "./", 2);
STRING_LITERAL(TMP10785, "", 0);
STRING_LITERAL(TMP10787, "nim.cfg", 7);
STRING_LITERAL(TMP10788, "-", 1);
STRING_LITERAL(TMP10789, "stdinfile", 9);
STRING_LITERAL(TMP10790, "js", 2);
STRING_LITERAL(TMP10791, " ", 1);
extern TFrame* frameptr_17242;
extern NimStringDesc* gprojectname_153234;
extern TSafePoint* exchandler_17243;
extern NimStringDesc* gprojectfull_153236;
extern Tgcheap48816 gch_48844;
extern TNimType NTI3433; /* OSError */
extern Exception* currexception_17245;
extern NimStringDesc* gprojectpath_153235;
extern NI gverbosity_153137;
extern NI gerrorcounter_163012;
extern NU32 gglobaloptions_153128;
extern NU8 gcmd_153130;
extern NimStringDesc* outfile_153134;
extern NimStringDesc* arguments_176721;

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
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

N_NIMCALL(NimStringDesc*, prependcurdir_527401)(NimStringDesc* f) {
	NimStringDesc* result;
	nimfr("prependCurDir", "nim.nim")
	result = 0;
	nimln(30, "nim.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = nosisAbsolute(f);
		if (!LOC3) goto LA4;
		result = copyString(f);
	}
	goto LA1;
	LA4: ;
	{
		NimStringDesc* LOC7;
		nimln(31, "nim.nim");
		LOC7 = 0;
		LOC7 = rawNewString(f->Sup.len + 2);
appendString(LOC7, ((NimStringDesc*) &TMP10784));
appendString(LOC7, f);
		result = LOC7;
	}
	LA1: ;
	popFrame();
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_17243;
	exchandler_17243 = s;
}

static N_INLINE(Tcell46947*, usrtocell_50446)(void* usr) {
	Tcell46947* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	result = ((Tcell46947*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46947))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_52004)(Tcell46947* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_50417((&gch_48844.zct), c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		Tcell46947* c;
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(252, "gc.nim");
		c = usrtocell_50446(src);
		nimln(169, "gc.nim");
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	nimln(254, "gc.nim");
	{
		Tcell46947* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(255, "gc.nim");
		c = usrtocell_50446((*dest));
		nimln(256, "gc.nim");
		{
			nimln(167, "gc.nim");
			(*c).refcount -= ((NI) 8);
			nimln(168, "gc.nim");
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			nimln(257, "gc.nim");
			rtladdzct_52004(c);
		}
		LA11: ;
	}
	LA7: ;
	nimln(258, "gc.nim");
	(*dest) = src;
	popFrame();
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_17243 = (*exchandler_17243).prev;
}

static N_INLINE(void, setFrame)(TFrame* s) {
	frameptr_17242 = s;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	nimfr("getCurrentException", "system.nim")
	result = 0;
	nimln(2726, "system.nim");
	result = currexception_17245;
	popFrame();
	return result;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46947* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_50446(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).refcount -= ((NI) 8);
		nimln(168, "gc.nim");
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_52004(c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(NIM_BOOL, canbecycleroot_50467)(Tcell46947* c) {
	NIM_BOOL result;
	nimfr("canBeCycleRoot", "gc.nim")
	result = 0;
	nimln(121, "gc.nim");
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdcycleroot_51223)(Tcell46947* c) {
	nimfr("rtlAddCycleRoot", "gc.nim")
	nimln(189, "gc.nim");
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		nimln(139, "gc.nim");
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		nimln(191, "gc.nim");
		incl_47665((&gch_48844.cycleroots), c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(void, incref_52822)(Tcell46947* c) {
	nimfr("incRef", "gc.nim")
	nimln(216, "gc.nim");
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	nimln(219, "gc.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_50467(c);
		if (!LOC3) goto LA4;
		nimln(220, "gc.nim");
		rtladdcycleroot_51223(c);
	}
	LA4: ;
	popFrame();
}

static N_INLINE(void, decref_52404)(Tcell46947* c) {
	nimfr("decRef", "gc.nim")
	nimln(206, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).refcount -= ((NI) 8);
		nimln(168, "gc.nim");
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		nimln(207, "gc.nim");
		rtladdzct_52004(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(208, "gc.nim");
		LOC6 = 0;
		LOC6 = canbecycleroot_50467(c);
		if (!LOC6) goto LA7;
		nimln(211, "gc.nim");
		rtladdcycleroot_51223(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
	popFrame();
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr("asgnRef", "gc.nim")
	nimln(244, "gc.nim");
	{
		Tcell46947* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_50446(src);
		incref_52822(LOC5);
	}
	LA3: ;
	nimln(245, "gc.nim");
	{
		Tcell46947* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_50446((*dest));
		decref_52404(LOC10);
	}
	LA8: ;
	nimln(246, "gc.nim");
	(*dest) = src;
	popFrame();
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_17245), (*currexception_17245).parent);
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

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(void, handlecmdline_527607)(void) {
	nimfr("handleCmdLine", "nim.nim")
	nimln(36, "nim.nim");
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = paramcount_126030();
		if (!(LOC3 == ((NI) 0))) goto LA4;
		nimln(37, "nim.nim");
		writecommandlineusage_175020();
	}
	goto LA1;
	LA4: ;
	{
		nimln(40, "nim.nim");
		processcmdline_521209(((NU8) 0), ((NimStringDesc*) &TMP10785));
		nimln(41, "nim.nim");
		{
			TSafePoint TMP10786;
			TY119789 p;
			NimStringDesc* LOC15;
			NimStringDesc* LOC16;
			if (!!(((gprojectname_153234) && (gprojectname_153234)->Sup.len == 0))) goto LA9;
			nimln(42, "nim.nim");
			pushSafePoint(&TMP10786);
			TMP10786.status = _setjmp(TMP10786.context);
			if (TMP10786.status == 0) {
				nimln(43, "nim.nim");
				asgnRefNoCycle((void**) (&gprojectfull_153236), canonicalizepath_153374(gprojectname_153234));
				popSafePoint();
			}
			else {
				popSafePoint();
				setFrame((TFrame*)&FR);
				if (isObj(getCurrentException()->Sup.m_type, (&NTI3433))) {
					NimStringDesc* LOC14;
					TMP10786.status = 0;
					nimln(45, "nim.nim");
					LOC14 = 0;
					LOC14 = gprojectfull_153236; gprojectfull_153236 = copyStringRC1(gprojectname_153234);
					if (LOC14) nimGCunrefNoCycle(LOC14);
					popCurrentException();
				}
			}
			if (TMP10786.status != 0) reraiseException();
			memset((void*)(&p), 0, sizeof(p));
			nimln(46, "nim.nim");
			chckNil((void*)(&p));
			memset((void*)(&p), 0, sizeof(p));
			nossplitFile(gprojectfull_153236, (&p));
			nimln(47, "nim.nim");
			LOC15 = 0;
			LOC15 = gprojectpath_153235; gprojectpath_153235 = copyStringRC1(p.Field0);
			if (LOC15) nimGCunrefNoCycle(LOC15);
			nimln(48, "nim.nim");
			LOC16 = 0;
			LOC16 = gprojectname_153234; gprojectname_153234 = copyStringRC1(p.Field1);
			if (LOC16) nimGCunrefNoCycle(LOC16);
		}
		goto LA7;
		LA9: ;
		{
			nimln(50, "nim.nim");
			asgnRefNoCycle((void**) (&gprojectpath_153235), nosgetCurrentDir());
		}
		LA7: ;
		nimln(51, "nim.nim");
		loadconfigs_185809(((NimStringDesc*) &TMP10787));
		nimln(54, "nim.nim");
		initvars_169876();
		nimln(55, "nim.nim");
		processcmdline_521209(((NU8) 1), ((NimStringDesc*) &TMP10785));
		nimln(56, "nim.nim");
		maincommand_524628();
		nimln(57, "nim.nim");
		{
			NimStringDesc* LOC22;
			if (!(((NI) 2) <= gverbosity_153137)) goto LA20;
			LOC22 = 0;
			LOC22 = Gcgetstatistics_8821();
			printf("%s\012", LOC22? (LOC22)->data:"nil");
		}
		LA20: ;
		nimln(59, "nim.nim");
		{
			if (!(gerrorcounter_163012 == ((NI) 0))) goto LA25;
			nimln(63, "nim.nim");
			{
				if (!((gglobaloptions_153128 &(1<<((((NU8) 13))&31)))!=0)) goto LA29;
				nimln(64, "nim.nim");
				{
					NimStringDesc* LOC35;
					if (!eqStrings(gprojectname_153234, ((NimStringDesc*) &TMP10788))) goto LA33;
					nimln(65, "nim.nim");
					LOC35 = 0;
					LOC35 = gprojectfull_153236; gprojectfull_153236 = copyStringRC1(((NimStringDesc*) &TMP10789));
					if (LOC35) nimGCunrefNoCycle(LOC35);
				}
				LA33: ;
				nimln(66, "nim.nim");
				{
					NimStringDesc* ex;
					NimStringDesc* LOC49;
					NimStringDesc* LOC50;
					if (!(gcmd_153130 == ((NU8) 4))) goto LA38;
					ex = 0;
					nimln(68, "nim.nim");
					{
						NimStringDesc* LOC44;
						if (!(((NI) 0) < (outfile_153134 ? outfile_153134->Sup.len : 0))) goto LA42;
						nimln(69, "nim.nim");
						LOC44 = 0;
						LOC44 = prependcurdir_527401(outfile_153134);
						ex = nospquoteShell(LOC44);
					}
					goto LA40;
					LA42: ;
					{
						NimStringDesc* LOC46;
						NimStringDesc* LOC47;
						NimStringDesc* LOC48;
						nimln(71, "nim.nim");
						nimln(72, "nim.nim");
						LOC46 = 0;
						LOC46 = noschangeFileExt(gprojectfull_153236, ((NimStringDesc*) &TMP10790));
						LOC47 = 0;
						LOC47 = prependcurdir_527401(LOC46);
						LOC48 = 0;
						LOC48 = completecfilepath_169912(LOC47, NIM_TRUE);
						ex = nospquoteShell(LOC48);
					}
					LA40: ;
					nimln(73, "nim.nim");
					LOC49 = 0;
					LOC50 = 0;
					LOC50 = findnodejs_526009();
					LOC49 = rawNewString(LOC50->Sup.len + ex->Sup.len + arguments_176721->Sup.len + 2);
appendString(LOC49, LOC50);
appendString(LOC49, ((NimStringDesc*) &TMP10791));
appendString(LOC49, ex);
appendChar(LOC49, 32);
appendString(LOC49, arguments_176721);
					execexternalprogram_169985(LOC49, ((NimStringDesc*) &TMP10785));
				}
				goto LA36;
				LA38: ;
				{
					NimStringDesc* binpath;
					NimStringDesc* ex;
					NimStringDesc* LOC58;
					binpath = 0;
					nimln(76, "nim.nim");
					{
						if (!(((NI) 0) < (outfile_153134 ? outfile_153134->Sup.len : 0))) goto LA54;
						nimln(78, "nim.nim");
						binpath = prependcurdir_527401(outfile_153134);
					}
					goto LA52;
					LA54: ;
					{
						NimStringDesc* LOC57;
						nimln(81, "nim.nim");
						LOC57 = 0;
						LOC57 = noschangeFileExt(gprojectfull_153236, ((NimStringDesc*) &TMP10785));
						binpath = prependcurdir_527401(LOC57);
					}
					LA52: ;
					nimln(82, "nim.nim");
					ex = nospquoteShell(binpath);
					nimln(83, "nim.nim");
					LOC58 = 0;
					LOC58 = rawNewString(ex->Sup.len + arguments_176721->Sup.len + 1);
appendString(LOC58, ex);
appendChar(LOC58, 32);
appendString(LOC58, arguments_176721);
					execexternalprogram_169985(LOC58, ((NimStringDesc*) &TMP10785));
				}
				LA36: ;
			}
			LA29: ;
		}
		LA25: ;
	}
	LA1: ;
	popFrame();
}

static N_INLINE(void, initStackBottomWith)(void* locals) {
	setStackBottom(locals);
}
void PreMainInner() {
	systemInit();
	compiler_testabilityDatInit();
	stdlib_parseutilsDatInit();
	stdlib_strutilsDatInit();
	stdlib_timesDatInit();
	stdlib_posixDatInit();
	stdlib_osDatInit();
	compiler_listsDatInit();
	stdlib_hashesDatInit();
	stdlib_strtabsDatInit();
	stdlib_streamsDatInit();
	stdlib_cpuinfoDatInit();
	stdlib_osprocDatInit();
	stdlib_mathDatInit();
	stdlib_setsDatInit();
	compiler_optionsDatInit();
	stdlib_tablesDatInit();
	compiler_platformDatInit();
	compiler_ropesDatInit();
	compiler_msgsDatInit();
	compiler_nversionDatInit();
	compiler_identsDatInit();
	compiler_condsymsDatInit();
	compiler_crcDatInit();
	compiler_extccompDatInit();
	compiler_wordrecgDatInit();
	compiler_nimblecmdDatInit();
	stdlib_parseoptDatInit();
	compiler_commandsDatInit();
	compiler_llstreamDatInit();
	compiler_nimlexbaseDatInit();
	compiler_lexerDatInit();
	compiler_nimconfDatInit();
	stdlib_intsetsDatInit();
	compiler_idgenDatInit();
	compiler_astDatInit();
	compiler_rodutilsDatInit();
	compiler_astalgoDatInit();
	compiler_parserDatInit();
	compiler_pbracesDatInit();
	compiler_rendererDatInit();
	compiler_filtersDatInit();
	compiler_filter_tmplDatInit();
	compiler_syntaxesDatInit();
	compiler_treesDatInit();
	compiler_typesDatInit();
	stdlib_memfilesDatInit();
	compiler_rodreadDatInit();
	compiler_magicsysDatInit();
	compiler_bitsetsDatInit();
	compiler_nimsetsDatInit();
	compiler_passesDatInit();
	compiler_treetabDatInit();
	compiler_vmdefDatInit();
	compiler_semdataDatInit();
	stdlib_lexbaseDatInit();
	compiler_prettybaseDatInit();
	compiler_lookupsDatInit();
	compiler_importerDatInit();
	compiler_rodwriteDatInit();
	compiler_saturateDatInit();
	compiler_semfoldDatInit();
	compiler_procfindDatInit();
	compiler_pragmasDatInit();
	compiler_semtypinstDatInit();
	compiler_parampatternsDatInit();
	compiler_prettyDatInit();
	stdlib_unicodeDatInit();
	stdlib_macrosDatInit();
	stdlib_jsonDatInit();
	docutils_rstastDatInit();
	docutils_rstDatInit();
	docutils_highliteDatInit();
	stdlib_sequtilsDatInit();
	stdlib_algorithmDatInit();
	docutils_rstgenDatInit();
	compiler_guardsDatInit();
	compiler_sempass2DatInit();
	stdlib_xmltreeDatInit();
	stdlib_cookiesDatInit();
	stdlib_cgiDatInit();
	compiler_typesrendererDatInit();
	compiler_docgenDatInit();
	compiler_sigmatchDatInit();
	compiler_cgmethDatInit();
	compiler_loweringsDatInit();
	compiler_lambdaliftingDatInit();
	compiler_transfDatInit();
	stdlib_unsignedDatInit();
	compiler_vmgenDatInit();
	compiler_vmdepsDatInit();
	compiler_vmmarshalDatInit();
	compiler_evaltemplDatInit();
	compiler_vmDatInit();
	compiler_aliasesDatInit();
	compiler_patternsDatInit();
	compiler_semmacrosanityDatInit();
	compiler_semparallelDatInit();
	compiler_pluginsDatInit();
	compiler_localsDatInit();
	compiler_activeDatInit();
	compiler_semDatInit();
	compiler_ccgutilsDatInit();
	compiler_cgendataDatInit();
	compiler_ccgmergeDatInit();
	compiler_cgenDatInit();
	compiler_jsgenDatInit();
	compiler_passauxDatInit();
	compiler_dependsDatInit();
	compiler_docgen2DatInit();
	stdlib_rawsocketsDatInit();
	stdlib_netDatInit();
	compiler_serviceDatInit();
	compiler_modulesDatInit();
	compiler_mainDatInit();
	compiler_nodejsDatInit();
	nimDatInit();
	compiler_testabilityInit();
	stdlib_parseutilsInit();
	stdlib_strutilsInit();
	stdlib_timesInit();
	stdlib_posixInit();
	stdlib_osInit();
	compiler_listsInit();
	stdlib_hashesInit();
	stdlib_strtabsInit();
	stdlib_streamsInit();
	stdlib_cpuinfoInit();
	stdlib_osprocInit();
	stdlib_mathInit();
	stdlib_setsInit();
	compiler_optionsInit();
	stdlib_tablesInit();
	compiler_platformInit();
	compiler_ropesInit();
	compiler_msgsInit();
	compiler_nversionInit();
	compiler_identsInit();
	compiler_condsymsInit();
	compiler_crcInit();
	compiler_extccompInit();
	compiler_wordrecgInit();
	compiler_nimblecmdInit();
	stdlib_parseoptInit();
	compiler_commandsInit();
	compiler_llstreamInit();
	compiler_nimlexbaseInit();
	compiler_lexerInit();
	compiler_nimconfInit();
	stdlib_intsetsInit();
	compiler_idgenInit();
	compiler_astInit();
	compiler_rodutilsInit();
	compiler_astalgoInit();
	compiler_parserInit();
	compiler_pbracesInit();
	compiler_rendererInit();
	compiler_filtersInit();
	compiler_filter_tmplInit();
	compiler_syntaxesInit();
	compiler_treesInit();
	compiler_typesInit();
	stdlib_memfilesInit();
	compiler_rodreadInit();
	compiler_magicsysInit();
	compiler_bitsetsInit();
	compiler_nimsetsInit();
	compiler_passesInit();
	compiler_treetabInit();
	compiler_vmdefInit();
	compiler_semdataInit();
	stdlib_lexbaseInit();
	compiler_prettybaseInit();
	compiler_lookupsInit();
	compiler_importerInit();
	compiler_rodwriteInit();
	compiler_saturateInit();
	compiler_semfoldInit();
	compiler_procfindInit();
	compiler_pragmasInit();
	compiler_semtypinstInit();
	compiler_parampatternsInit();
	compiler_prettyInit();
	stdlib_unicodeInit();
	stdlib_macrosInit();
	stdlib_jsonInit();
	docutils_rstastInit();
	docutils_rstInit();
	docutils_highliteInit();
	stdlib_sequtilsInit();
	stdlib_algorithmInit();
	docutils_rstgenInit();
	compiler_guardsInit();
	compiler_sempass2Init();
	stdlib_xmltreeInit();
	stdlib_cookiesInit();
	stdlib_cgiInit();
	compiler_typesrendererInit();
	compiler_docgenInit();
	compiler_sigmatchInit();
	compiler_cgmethInit();
	compiler_loweringsInit();
	compiler_lambdaliftingInit();
	compiler_transfInit();
	stdlib_unsignedInit();
	compiler_vmgenInit();
	compiler_vmdepsInit();
	compiler_vmmarshalInit();
	compiler_evaltemplInit();
	compiler_vmInit();
	compiler_aliasesInit();
	compiler_patternsInit();
	compiler_semmacrosanityInit();
	compiler_semparallelInit();
	compiler_pluginsInit();
	compiler_localsInit();
	compiler_activeInit();
	compiler_semInit();
	compiler_ccgutilsInit();
	compiler_cgendataInit();
	compiler_ccgmergeInit();
	compiler_cgenInit();
	compiler_jsgenInit();
	compiler_passauxInit();
	compiler_dependsInit();
	compiler_docgen2Init();
	stdlib_rawsocketsInit();
	stdlib_netInit();
	compiler_serviceInit();
	compiler_modulesInit();
	compiler_mainInit();
	compiler_nodejsInit();
}

void PreMain() {
	void (*volatile inner)();
	systemDatInit();
	inner = PreMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMainInner)(void) {
	nimInit();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)();
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}

NIM_EXTERNC N_NOINLINE(void, nimInit)(void) {
	nimfr("nim", "nim.nim")
	nimln(90, "nim.nim");
	Gcdisablemarkandsweep_8819();
	nimln(91, "nim.nim");
	initdefines_167254();
	nimln(94, "nim.nim");
	handlecmdline_527607();
	nimln(95, "nim.nim");
	msgquit_163104(((NI8) ((((NI) 0) < gerrorcounter_163012))));
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, nimDatInit)(void) {
}

