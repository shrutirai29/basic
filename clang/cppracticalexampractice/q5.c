//Write a program to calculate the sum of numbers from a to b.
#include <stdio.h>

int main(){
    int a, b, i, sum = 0;
    printf("Enter the numbers from where to where you want the sum (a<b): ");
    scanf("%d%d", &a, &b);
    for(i = a; i <=b; i++){
        sum += i;
    }
    printf("Desired addition value is: %d", sum);

    return 0;
}