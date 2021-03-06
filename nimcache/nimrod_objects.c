/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/rahul/projects/Nimrod/lib -o /home/rahul/musings/nimrod/nimcache/nimrod_objects.o /home/rahul/musings/nimrod/nimcache/nimrod_objects.c */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <stdio.h>
typedef struct tstudent77005 tstudent77005;
typedef struct tperson77003 tperson77003;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tcell38648 tcell38648;
typedef struct tcellseq38664 tcellseq38664;
typedef struct tgcheap40616 tgcheap40616;
typedef struct tcellset38660 tcellset38660;
typedef struct tpagedesc38656 tpagedesc38656;
typedef struct tmemregion22010 tmemregion22010;
typedef struct tsmallchunk21238 tsmallchunk21238;
typedef struct tllchunk22004 tllchunk22004;
typedef struct tbigchunk21240 tbigchunk21240;
typedef struct tintset21215 tintset21215;
typedef struct ttrunk21211 ttrunk21211;
typedef struct tavlnode22008 tavlnode22008;
typedef struct tgcstat40614 tgcstat40614;
typedef struct tbasechunk21236 tbasechunk21236;
typedef struct tfreecell21228 tfreecell21228;
typedef N_NIMCALL_PTR(void, TY889) (void* p, NI op);
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY889 marker;
};
struct TNimObject {
TNimType* m_type;
};
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct tperson77003 {
  TNimObject Sup;
NimStringDesc* Name;
NI Age;
};
struct tstudent77005 {
  tperson77003 Sup;
NI Id;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tcell38648 {
NI Refcount;
TNimType* Typ;
};
struct tcellseq38664 {
NI Len;
NI Cap;
tcell38648** D;
};
struct tcellset38660 {
NI Counter;
NI Max;
tpagedesc38656* Head;
tpagedesc38656** Data;
};
typedef tsmallchunk21238* TY22022[512];
typedef ttrunk21211* ttrunkbuckets21213[256];
struct tintset21215 {
ttrunkbuckets21213 Data;
};
struct tmemregion22010 {
NI Minlargeobj;
NI Maxlargeobj;
TY22022 Freesmallchunks;
tllchunk22004* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk21240* Freechunkslist;
tintset21215 Chunkstarts;
tavlnode22008* Root;
tavlnode22008* Deleted;
tavlnode22008* Last;
tavlnode22008* Freeavlnodes;
};
struct tgcstat40614 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct tgcheap40616 {
void* Stackbottom;
NI Cyclethreshold;
tcellseq38664 Zct;
tcellseq38664 Decstack;
tcellset38660 Cycleroots;
tcellseq38664 Tempstack;
NI Recgclock;
tmemregion22010 Region;
tgcstat40614 Stat;
};
typedef NI TY21218[8];
struct tpagedesc38656 {
tpagedesc38656* Next;
NI Key;
TY21218 Bits;
};
struct tbasechunk21236 {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct tsmallchunk21238 {
  tbasechunk21236 Sup;
tsmallchunk21238* Next;
tsmallchunk21238* Prev;
tfreecell21228* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct tllchunk22004 {
NI Size;
NI Acc;
tllchunk22004* Next;
};
struct tbigchunk21240 {
  tbasechunk21236 Sup;
tbigchunk21240* Next;
tbigchunk21240* Prev;
NI Align;
NF Data;
};
struct ttrunk21211 {
ttrunk21211* Next;
NI Key;
TY21218 Bits;
};
typedef tavlnode22008* TY22014[2];
struct tavlnode22008 {
TY22014 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct tfreecell21228 {
tfreecell21228* Next;
NI Zerofield;
};
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell38648*, usrtocell_42039)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_43602)(tcell38648* c);
N_NOINLINE(void, addzct_42015)(tcellseq38664* s, tcell38648* c);
N_NIMCALL(void, genericShallowAssign)(void* dest, void* src, TNimType* mt);
static N_INLINE(void, initStackBottom)(void);
N_NOINLINE(void, setStackBottom)(void* thestackbottom);
N_NOINLINE(void, systemInit)(void);
N_NOINLINE(void, systemDatInit)(void);
N_NOINLINE(void, objectsInit)(void);
N_NOINLINE(void, objectsDatInit)(void);
STRING_LITERAL(TMP125, "John", 4);
tstudent77005 student_77010;
extern TNimType NTI1009; /* TObject */
TNimType NTI77003; /* TPerson */
extern TNimType NTI142; /* string */
extern TNimType NTI105; /* int */
TNimType NTI77005; /* TStudent */
tperson77003 person_77011;
extern TFrame* frameptr_11825;
extern tgcheap40616 gch_40644;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_11825;
	frameptr_11825 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_11825 = (*frameptr_11825).prev;
}
static N_INLINE(tcell38648*, usrtocell_42039)(void* usr) {
	tcell38648* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	result = ((tcell38648*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell38648))))));
	popFrame();
	return result;
}
static N_INLINE(void, rtladdzct_43602)(tcell38648* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(197, "gc.nim");
	addzct_42015(&gch_40644.Zct, c);	popFrame();
}
static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell38648* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(231, "gc.nim");
	c = usrtocell_42039(p);
	nimln(233, "gc.nim");
	{
		nimln(165, "gc.nim");
		(*c).Refcount -= 8;
		nimln(166, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(234, "gc.nim");
		rtladdzct_43602(c);	}	LA3: ;
	popFrame();
}
static N_INLINE(void, initStackBottom)(void) {
	void* volatile locals;
	locals = 0;
	locals = ((void*) (&locals));
	setStackBottom(locals);}int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMain)(void) {
	systemDatInit();
	objectsDatInit();
	initStackBottom();
	systemInit();
	objectsInit();
}
int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}
N_NOINLINE(void, objectsInit)(void) {
	tstudent77005 LOC1;
	NimStringDesc* LOC2;
	nimfr("objects", "objects.nim")
	student_77010.Sup.Sup.m_type = (&NTI77005);
	person_77011.Sup.m_type = (&NTI77003);
	nimln(13, "objects.nim");
	memset((void*)&LOC1, 0, sizeof(LOC1));
	LOC1.Sup.Sup.m_type = (&NTI77005);
	LOC2 = 0;
	LOC2 = LOC1.Sup.Name; LOC1.Sup.Name = copyStringRC1(((NimStringDesc*) &TMP125));
	if (LOC2) nimGCunrefNoCycle(LOC2);
	LOC1.Sup.Age = 5;
	LOC1.Id = 2;
	genericShallowAssign((void*)&student_77010, (void*)&LOC1, (&NTI77005));
	nimln(14, "objects.nim");
	printf("%s\012", (student_77010.Sup.Name)->data);
	popFrame();
}

N_NOINLINE(void, objectsDatInit)(void) {
static TNimNode* TMP124[2];
static TNimNode TMP122[4];
NTI77003.size = sizeof(tperson77003);
NTI77003.kind = 17;
NTI77003.base = (&NTI1009);
NTI77003.flags = 2;
TMP124[0] = &TMP122[1];
TMP122[1].kind = 1;
TMP122[1].offset = offsetof(tperson77003, Name);
TMP122[1].typ = (&NTI142);
TMP122[1].name = "name";
TMP124[1] = &TMP122[2];
TMP122[2].kind = 1;
TMP122[2].offset = offsetof(tperson77003, Age);
TMP122[2].typ = (&NTI105);
TMP122[2].name = "age";
TMP122[0].len = 2; TMP122[0].kind = 2; TMP122[0].sons = &TMP124[0];
NTI77003.node = &TMP122[0];
NTI77005.size = sizeof(tstudent77005);
NTI77005.kind = 17;
NTI77005.base = (&NTI77003);
NTI77005.flags = 2;
TMP122[3].kind = 1;
TMP122[3].offset = offsetof(tstudent77005, Id);
TMP122[3].typ = (&NTI105);
TMP122[3].name = "id";
NTI77005.node = &TMP122[3];
}

