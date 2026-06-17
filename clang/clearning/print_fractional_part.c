#include <stdio.h> 

int main(){ 
    float a, c;
    int b;
    printf("Enter a decimal number: ");
    scanf("%f", &a);

    b=a;
    c=a-b;
    printf("Decimal part of the number is: %f", c);

    return 0;
}