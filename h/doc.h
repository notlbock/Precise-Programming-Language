#ifndef DOC_H
#define DOC_H

#include <stdio.h>
#include <string.h>

// if the user prints an invalid doc, well to bad for them.
static inline void hdoc(const char* docName) {
    if (!docName) {
        printf("No document name provided\n");
        return;
    }

    char path[100];
    snprintf(path, sizeof(path), "doc/%s", docName);

    FILE *fptr = fopen(path, "r");
    if (!fptr) {
        printf("Could not open doc: %s\n", path);
        return;
    }

    char buff[100];
    while (fgets(buff, sizeof(buff), fptr)) {
        printf("%s", buff);
    }

    fclose(fptr);
}

#endif // DOC_H
