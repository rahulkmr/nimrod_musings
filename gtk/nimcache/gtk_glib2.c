/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/rahul/projects/Nimrod/lib -o /home/rahul/musings/nimrod/gtk/nimcache/gtk_glib2.o /home/rahul/musings/nimrod/gtk/nimcache/gtk_glib2.c */
#define NIM_INTBITS 64
#include "nimbase.h"
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
extern TFrame* frameptr_11825;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_11825;
	frameptr_11825 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_11825 = (*frameptr_11825).prev;
}
N_NIMCALL(int, gbool_77497)(NIM_BOOL nimbool) {
	int result;
	nimfr("gbool", "glib2.nim")
	result = 0;
	nimln(177, "glib2.nim");
	nimln(177, "glib2.nim");
	nimln(177, "glib2.nim");
	result = ((int) (nimbool));
	goto BeforeRet;
	BeforeRet: ;	popFrame();
	return result;
}N_NOINLINE(void, gtkglib2Init)(void) {
	nimfr("glib2", "glib2.nim")
	popFrame();
}

N_NOINLINE(void, gtkglib2DatInit)(void) {
}

