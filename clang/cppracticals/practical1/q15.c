//Write a C program to perform addition, subtraction, division and multiplication of two numbers
#include<stdio.h>

void main()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    int c, d, e;
    float f;
    c=a+b;
    d=a-b;
    e=a*b;
    f=(float)a/b;

    printf("addition of given numbers : %d \n", c );
    printf("subtraction of given numbers : %d \n",d);
    printf("multiplication of given numbers : %d \n", e);
    printf("division of given numbers : %f \n",f);
}