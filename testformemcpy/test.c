#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* p;
    int i;
    for ( i = 0; i < 5; i++) {
        p = (char*)malloc(100);
        /*
        char* q = NULL;
        q = (char*)realloc(q, 100);
        memcpy(q, p, 100);
        */
        p = NULL;
    }
    free(p);
    return 0;
}