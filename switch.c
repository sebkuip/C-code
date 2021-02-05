/*
#include <stdio.h>
#include <stdlib.h>

void main(){
    int num = 4;

    switch(num){
        case 0:
            printf("Num is 0");
            break;
        case 1:
            printf("Num is 1");
            break;
        case 2:
            printf("Num is 2");
            break;
        default:
            printf("Num is not 0, 1 or 2");
            break;
    }
}
*/
#include <stdio.h>
#include <string.h>

int main(){
    int input;
    scanf("%d", &input);
    
    switch(input){
        case 1:
            printf("Maandag");
            break;
        case 2:
            printf("Dinsdag");
            break;
        case 3:
            printf("Woensdag");
            break;
        case 4:
            printf("Donderdag");
            break;
        case 5:
            printf("Vrijdag");
            break;
        case 6:
            printf("Zaterdag");
            break;
        case 7:
            printf("Zondag");
            break;
        default:
            printf("Dat is geen geldig getal");
    }

    return 0;
}