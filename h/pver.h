#ifndef PVER_H
#define PVER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
this is definetly gonna bug out
*/

// short for printversion()
static inline void prver(void){ // fixed
	FILE *fptr;
	fptr = fopen("config/VERSION.txt", "r"); // what | also lets make this empty until we make VERSION.txt
	char buff[100]; // 100 characters is better than 50

	while(fgets(buff, sizeof(buff), fptr)){
		printf("%s", buff);
	};

	fclose(fptr);
}

#endif // PVER_H
