//Write a C program to add two numbers and display its sum
#include <stdio.h> 

int main(){ 
    int a, b;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum of these numbers is: %d", a+b);

    return 0;
}