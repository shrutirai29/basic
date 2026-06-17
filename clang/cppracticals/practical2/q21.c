//Write a program to determine whether a given number is odd or even and print the message.
#include <stdio.h> 

int main(){ 
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("This is an even number");
    }
    else{
        printf("This is an odd number");
    }
    
    return 0;
}