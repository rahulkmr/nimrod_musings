/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/rahul/projects/Nimrod/lib -o /home/rahul/musings/nimrod/gtk/nimcache/gtk_gdk2.o /home/rahul/musings/nimrod/gtk/nimcache/gtk_gdk2.c */
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
}N_NOINLINE(void, gtkgdk2Init)(void) {
	nimfr("gdk2", "gdk2.nim")
	popFrame();
}

N_NOINLINE(void, gtkgdk2DatInit)(void) {
}

