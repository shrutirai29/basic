#include <stdio.h> 

int main(){
    int a, b, remainder;
    
    printf("Enter 2 number (1st greater than second): ");
    scanf ("%d %d", &a, &b);
    remainder = a % b;
    printf("Remainder is: %d", remainder);   // if we try a/0 there will be error  // if a<b then a % b = a

    return 0;
}