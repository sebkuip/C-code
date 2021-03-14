#include <stdio.h>
#include <string.h>
#include <windows.h>

int main(){
    char num1[100];
    char num2[100];

    printf("Enter number 1: ");
    fgets(num1, sizeof(num1), stdin);

    printf("Enter number 2: ");
    fgets(num2, 100, stdin);

    int solution = atoi(num1) + atoi(num2);

    char messagebody[1000] = "The solution is: ";

    char ssolution[1000];
    sprintf(ssolution, "%d", solution);
    strcat(messagebody, ssolution);

    MessageBox(0, messagebody, "Solution", MB_OK);
    return 0;
}