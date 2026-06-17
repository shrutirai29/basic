#include <stdio.h> 

int main(){ 
    float principle, rate, time, SI;

    printf("Enter the principle money deposited: ");
    scanf("%f", &principle);
    printf("Enter time of investment");
    scanf("%f", &time);
    rate=0.25;
    SI = principle*time*rate/3;
    printf("Simple Intrest = %f", SI);

    return 0;
}