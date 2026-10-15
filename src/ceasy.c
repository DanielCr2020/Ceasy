#include <stdio.h>
#include <stdlib.h>
#include "../hdr/generator.h"
#include "../hdr/parser.h"

int main(int argc, char* argv[]){

    for(int i = 0; i < argc; i++){
        printf("argv[%d]: %s\n", i, argv[i]);                                           
    }
    FILE* fp = fopen(argv[1], "r");

    // printf("foo: %d\n", foo(13, 15));

    char* linebuf = NULL;

    size_t bufsize = 128;
    char* buffer[256];

    getline(&linebuf, &bufsize, fp);

    int tokenCount = tokenizeInclude(linebuf, buffer);
    
    for(int i = 0; i < tokenCount; i++){
        printf("buffer[%d]: %s\n", i, buffer[i]);
    }

    for(int i = 0; i < tokenCount; i++){
        free(buffer[i]);
    }

    if(fp){
        fclose(fp);
    }

}