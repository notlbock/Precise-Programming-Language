#ifndef HELP_H
#define HELP_H

#include <stdio.h>

// lets not make the same mistake
static inline void help(){
	printf("HELP:\n");
	printf("--version: Prints the version of Precise\n");
	printf("--uninstall: Uninstalls precise\n"); // i forgor
	printf("--build arg1: Builds / compiles a file (arg1)\n");
}

#endif // HELP_H
