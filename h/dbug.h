#ifndef DBUG_H
#define DBUG_H

#define MAX_LINE_LENGTH 256
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static inline int debug(const char* filepath) {
    FILE *fptr;
    char line[MAX_LINE_LENGTH];
    int found_main = 0;

    fptr = fopen(filepath, "r");
    if (fptr == NULL) {
        printf("PRECISE DEBUGGER\n");
        printf("----------------\n");
        printf("precise-debugger: Error: No such filepath: %s\n", filepath);
        return 1;
    }

    while (fgets(line, sizeof(line), fptr) != NULL) {
        line[strcspn(line, "\n")] = '\0';

        if (strstr(line, "static func main()") != NULL) {
            found_main = 1;
            break;
        }
    }

    fclose(fptr);

    printf("PRECISE DEBUGGER\n");
    printf("----------------\n");

    if (!found_main) {
        printf("precise-debugger: Error: No main function\n");
        return 1;
    }

    printf("Passed debugger test\n");
    return 0;
}

#endif // DBUG_H