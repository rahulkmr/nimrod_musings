/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/rahul/projects/Nimrod/lib -o /home/rahul/musings/nimrod/nimcache/nimrod_max.o /home/rahul/musings/nimrod/nimcache/nimrod_max.c */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY85042 TY85042;
typedef struct TY9352 TY9352;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
typedef NimStringDesc* TY85029[1];
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (NimStringDesc* x, void* ClEnv);
void* ClEnv;
} TY85047;
typedef NU8 TY81586[32];
typedef N_CLOSURE_PTR(NI, TMP144) (NimStringDesc* x_85037, void* ClEnv);
struct TY85042 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY9352 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
static N_INLINE(void, writeln_85006)(FILE* f, NimStringDesc** x, NI xLen0);
N_NIMCALL(void, write_9259)(FILE* f, NimStringDesc* s);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(TY85042*, map_85039)(NimStringDesc** data, NI dataLen0, TY85047 op);
N_NIMCALL(NI, max_85093)(NI* x, NI xLen0);
N_NIMCALL(TY9352*, nsuSplitCharSet)(NimStringDesc* s, TY81586 seps);
N_NIMCALL(NimStringDesc*, readline_9280)(FILE* f);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
static N_INLINE(void, initStackBottom)(void);
N_NOINLINE(void, setStackBottom)(void* thestackbottom);
N_NOINLINE(void, systemInit)(void);
N_NOINLINE(void, systemDatInit)(void);
N_NOINLINE(void, pureparseutilsInit)(void);
N_NOINLINE(void, pureparseutilsDatInit)(void);
N_NOINLINE(void, purestrutilsInit)(void);
N_NOINLINE(void, purestrutilsDatInit)(void);
N_NOINLINE(void, maxInit)(void);
N_NOINLINE(void, maxDatInit)(void);
STRING_LITERAL(TMP128, "\012", 1);
STRING_LITERAL(TMP129, "Input a list of number: ", 24);
static NIM_CONST TY81586 TMP136 = {
0x00, 0x3E, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP145, " is the maximum!", 16);
extern TFrame* frameptr_11825;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_11825;
	frameptr_11825 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_11825 = (*frameptr_11825).prev;
}
static N_INLINE(void, writeln_85006)(FILE* f, NimStringDesc** x, NI xLen0) {
	NimStringDesc* i_85020;
	NI i_85026;
	nimfr("writeln", "sysio.nim")
	i_85020 = 0;
	nimln(1373, "system.nim");
	i_85026 = 0;
	nimln(1374, "system.nim");
	while (1) {
		nimln(1374, "system.nim");
		nimln(1374, "system.nim");
		if (!(i_85026 < xLen0)) goto LA1;
		nimln(1375, "system.nim");
		i_85020 = x[i_85026];
		nimln(159, "sysio.nim");
		write_9259(f, i_85020);		nimln(1376, "system.nim");
		i_85026 += 1;
	} LA1: ;
	nimln(160, "sysio.nim");
	write_9259(f, ((NimStringDesc*) &TMP128));	popFrame();
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
	pureparseutilsDatInit();
	purestrutilsDatInit();
	maxDatInit();
	initStackBottom();
	systemInit();
	pureparseutilsInit();
	purestrutilsInit();
	maxInit();
}
int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}
N_NOINLINE(void, maxInit)(void) {
	TY85029 LOC1;
	NimStringDesc* LOC2;
	TY9352* LOC3;
	TY85047 LOC4;
	TY85042* LOC5;
	NI LOC6;
	NimStringDesc* LOC7;
	TY85029 LOC8;
	nimfr("max", "max.nim")
	nimln(3, "max.nim");
	memset((void*)LOC1, 0, sizeof(LOC1));
	nimln(3, "max.nim");
	LOC1[0] = copyString(((NimStringDesc*) &TMP129));
	writeln_85006(stdout, LOC1, 1);	nimln(4, "max.nim");
	nimln(4, "max.nim");
	nimln(4, "max.nim");
	nimln(4, "max.nim");
	nimln(4, "max.nim");
	nimln(4, "max.nim");
	LOC2 = 0;
	LOC2 = readline_9280(stdin);
	LOC3 = 0;
	LOC3 = nsuSplitCharSet(LOC2, TMP136);
	memset((void*)&LOC4, 0, sizeof(LOC4));
	LOC4.ClPrc = ((TMP144) (nsuParseInt)); LOC4.ClEnv = NIM_NIL;
	LOC5 = 0;
	LOC5 = map_85039(LOC3->data, LOC3->Sup.len, LOC4);
	LOC6 = 0;
	LOC6 = max_85093(LOC5->data, LOC5->Sup.len);
	LOC7 = 0;
	LOC7 = nimIntToStr(LOC6);
	write_9259(stdout, LOC7);	nimln(5, "max.nim");
	memset((void*)LOC8, 0, sizeof(LOC8));
	nimln(5, "max.nim");
	LOC8[0] = copyString(((NimStringDesc*) &TMP145));
	writeln_85006(stdout, LOC8, 1);	popFrame();
}

N_NOINLINE(void, maxDatInit)(void) {
}

