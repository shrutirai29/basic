//Write a program to determine whether a given number is “odd” or “even” and print the message
#include <stdio.h>

int main(){
    int a;
    printf("Enter any number: ");
    scanf("%d", &a);

    if(a % 2 == 0){
        printf("given number is an even number");
    }
    else{
        printf("given number is an odd number");
    }

    return 0;
}