#include <stdio.h>
#include <stdlib.h>

void fizzbuzz(int start, int stop){
    for(int i = start; i<=stop;i++){
            if(i%3==0 && i%5==0){
                printf("FizzBuzz\n");
            } else if(i%3==0){
                printf("Fizz\n");
            } else if(i%5==0){
                printf("Buzz\n");
            } else {
                printf("%d\n", i);
            }
    }
}

void main(){
    int start;
    int stop;

    char buffer[1000];
    printf("Give a start value: ");
    fgets(buffer, sizeof(buffer), stdin);
    start = strtol(buffer, NULL, 10);
    fflush(stdin);

    printf("Give an stop value: ");
    fgets(buffer, sizeof(buffer), stdin);
    stop = strtol(buffer, NULL, 10);
    fflush(stdin);

    fizzbuzz(start,stop);
}