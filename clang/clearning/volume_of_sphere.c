#include <stdio.h> 

int main(){ 
    float r, volume;
    float pi=3.14;

    printf("Enter the value of radius: \n");
    scanf("%f",&r);

    volume = 4*pi*r*r*r/3;
    printf("Voulme of sphere is : %0.2f", volume );

    return 0;
}