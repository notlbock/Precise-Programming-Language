#ifndef CMPI_H
#define CMPI_H
// were finally writing the compiler
// so right now it just handles it. it doesnt create temp files and compile it just
// begins the compiler

#include <stdio.h>
#include "dbug.h"

static inline void cmpil(const char* filepath){
	if(debug(filepath) == 0){
		printf("yay file is done compiling, not really\n");
		return;
	}else{
		printf("oh no file failed to compile im so saddd\n");
		return;
	}
}

#endif // CMPI_H
