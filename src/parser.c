#include <stdio.h>
#include "../hdr/parser.h"

int bar(int a, int b){
    printf("a is not %d+1, b is not %d-1\n", a, b);
    return a * b;
}