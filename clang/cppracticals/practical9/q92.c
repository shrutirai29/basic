//Write a program in C to add two numbers using pointers
#include <stdio.h>

int main() {
    int x, y, sum;
    int *ptrx, *ptry, *ptr_sum;

    printf("Enter 2 number: ");
    scanf("%d%d", &x, &y);

    ptrx = &x;
    ptry = &y;
    ptr_sum = &sum;

    *ptr_sum = *ptrx + *ptry;

    printf("The sum of %d and %d is: %d\n", x, y, *ptr_sum);

    return 0;
}
