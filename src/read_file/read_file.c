#include <string.h>
#include <time.h>
#include "read_file.h"
 
#ifndef YEAR_START
#define YEAR_START 1900
#endif

#idndef MAX_LINE
#define MAX_LINE 1024
#endif

// readme
// const char filepath[]
// return void
void readme(const char filepath[]){
    FILE *f;
    char readline[1024] = {'\0'};

    if((f = fopen(filepath, "r")) == NULL){
        fprintf(stderr, "%s failed.\n", filepath);
        exit(EXIT_FAILURE);
    }

    while(fgets(readline, MAX_LINE, f) != NULL){
        puts(readline);
    }

  fclose(f);
}