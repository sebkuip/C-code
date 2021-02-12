#include <stdio.h>

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
    fizzbuzz(38,20512);
}