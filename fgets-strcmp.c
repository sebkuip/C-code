#include <stdio.h>
#include <string.h>

void main(){
    char input[100];

    fgets(input, 100, stdin);

    if(strcmp(input, "Hello\n") == 0){
        printf("World!");
    }
}

