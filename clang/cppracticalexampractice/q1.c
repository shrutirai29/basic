//Write a C program to perform addition, subtraction, division and multiplication of two numbers
#include <stdio.h>

int main(){
    int a, b, sum, sub, mul;
    float div;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &a, &b);
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = (float)a / b;
    printf("Sum of given 2 numbers is : %d\n", sum);
    printf("difference of given 2 numbers is: %d\n", sub);
    printf("product of given 2 numbers is : %d\n", mul);
    printf("quotent of given 2 numbers is : %0.2f\n", div);

    return 0;
}