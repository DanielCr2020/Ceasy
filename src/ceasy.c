#include <stdio.h>
#include <stdlib.h>
#include "../hdr/generator.h"
#include "../hdr/parser.h"

int main(int argc, char* argv[]){

    for(int i = 0; i < argc; i++){
        printf("argv[%d]: %s\n", i, argv[i]);
    }
    FILE* fp = fopen(argv[1], "r");

    fclose(fp);

    printf("foo: %d\n", foo(13, 15));
}