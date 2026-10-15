#include <stdio.h>
#include <stdlib.h>
#include "../hdr/parser.h"

int tokenizeInclude(char* line, char** tokens){
    char* oneToken = strtok(line, " ");
    int i = 0;
    while(oneToken != NULL){
        tokens[i] = malloc(512);
        memcpy(tokens[i++], oneToken, strlen(oneToken));
        oneToken = strtok(NULL, " ");
        printf("token count: %d\n", i);
    }
    return i;
}

int bar(int a, int b){
    printf("a is not %d+1, b is not %d-1\n", a, b);
    return a * b;
}