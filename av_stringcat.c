#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

char* wordcat(int num, ...) {

    va_list valist;
    int mem = 1;
    int i;
    char* wordbuffer;

    va_start(valist, num);

    for(i = 0; i < num; i++){
        mem+=strlen(va_arg(valist, char*));
        mem+=1; // add some extra memory for the space
    }

    va_end(valist);

    va_start(valist, num);

    wordbuffer = malloc((size_t) mem);

    strcpy(wordbuffer, va_arg(valist, char*));
    strcat(wordbuffer, " ");

    for(i=1; i < num; i++){
        strcat(wordbuffer, va_arg(valist, char*));
        strcat(wordbuffer, " ");
    }

    va_end(valist);

    return wordbuffer;
}


void main() {
    char* word1 = "Hello";
    char* word2 = "Beautiful";
    char* word3 = "World";

    char* sumwords1 = wordcat(2, word1, word3);
    char* sumwords2 = wordcat(3, word1, word2, word3);

    printf("%s\n", sumwords1);
    printf("%s", sumwords2);
}