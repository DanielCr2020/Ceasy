#include <stdio.h>
#include "../hdr/generator.h"

int foo(int a, int b){
    printf("as is %d, b is %d\n", a, b);
    return a + b;
}