//Write a C program to multiply two numbers and display its product
#include <stdio.h> 

int main(){ 
    int a, b;

    printf("Enter 2 number: ");
    scanf("%d %d", &a, &b);

    int mul = a * b;

    printf("Product of these numbers are: %d", mul);

    return 0;
}