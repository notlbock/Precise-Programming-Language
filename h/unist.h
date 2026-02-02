#ifndef UNIST_H
#define UNIST_H

#include <stdio.h>
#include <stdlib.h>

const char* UNIST_H_CMD1 = "sudo rm -rf ~/Downloads/Precise"; // we change this command later
static inline void uninstall(){
	printf("Uninstalling Precise...\n");
	system(UNIST_H_CMD1);
}

#endif // UNIST_H
