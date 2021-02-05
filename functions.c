#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NELEMS(x) (sizeof(x) / sizeof((x)[0]))

int isEven(int x){
    if(x == 0){
        return 0;
    } else if(x%2 ==0){
        return 1;
    } else {
        return 0;
    }
}

void main(){
    int nums[] = {10318, 1048312, 4838104, 281304};
    
    for(int i=0; i < NELEMS(nums); i++){
        if(isEven(nums[i])){
            printf("%i is even\n", nums[i]);
        } else{
            printf("%i is odd\n", nums[i]);
        }
    }
}