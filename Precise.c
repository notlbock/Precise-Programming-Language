#include <stdio.h>
#include <string.h> // for strcmp() and more
#include "h/pver.h"// since when we compile using -o and -l in the further stage this will be in
#include "h/help.h"
#include "h/unist.h"
#include "h/doc.h"
#include "h/cmpi.h"
// /usr/local/bin and this folder will be in /opt

// lets add some elses
int main(int argc, char* argv[]){
	if(argc >= 2){
		char* arg1 = argv[1]; // for example: precise arg1
		if(strcmp(arg1, "--version") == 0){
			prver();
		}else if(strcmp(arg1, "--uninstall") == 0){
			uninstall(); // lets hope for no errors
		}else if(strcmp(arg1, "--doc") == 0){
			hdoc(argv[2]);
		}else if(strcmp(arg1, "--build") == 0){
			cmpil(argv[2]);
		}else{
			printf("No such argument: %s", arg1);
			return 1;
		}
	}else{
		help();
	}
}
