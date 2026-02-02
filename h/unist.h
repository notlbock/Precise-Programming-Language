#ifndef UNIST_H
#define UNIST_H

#include <stdio.h>
#include <stdlib.h>

static inline void uninstall(){
	printf("Uninstalling Precise...\n");
	system("sudo rm -rf ~/Downloads/Precise");
}

#endif // UNIST_H
