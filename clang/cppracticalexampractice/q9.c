//Write a program in C to add two numbers using pointers
#include<stdio.h>

int main(){
    int a, b;
    int *ptra, *ptrb, *ptr_sum;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &a, &b);
    ptra = &a;
    ptrb = &b;
    *ptr_sum = *ptra + *ptrb;
    printf("Sum = %d", *ptr_sum);

    return 0;
}