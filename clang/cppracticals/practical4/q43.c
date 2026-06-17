//3 Write a program to display the largest of 5 numbers using ternary operator.
#include <stdio.h> 

int main(){ 
    int a, b, c, d, e, max;
    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    max = (a > b && a> c && a > d && a > e)? a: 
            ((b > c && b > d && b > e)? b: 
            (c > d && c > e)? c:
            (d > e ? d : e));

    printf("Largest number along all the numbers is: %d", max);

    return 0;
}