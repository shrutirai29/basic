//Write a program to calculate the sum of numbers from m to n.
#include <stdio.h> 

int main(){ 
    int m, n, i, sum = 0;

    printf("Enter the number from where to where you want the sum: ");
    scanf("%d %d", &m, &n);
    for(i=m; i<=n; i++){
        sum += i;
    }
    printf("Sum = %d", sum);

    return 0;
}