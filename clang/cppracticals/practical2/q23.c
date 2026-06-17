// Write a C program to input electricity unit charge and calculate the total electricity bill according to the given condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.
#include <stdio.h> 

int main(){ 
    float unit, charge;
    printf("Enter your unit: ");
    scanf("%f", &unit);

    if(unit <= 50){
        charge = (unit * 0.50);
    }
    else if(unit <= 150){
        charge = 50 * 0.50 + ((unit - 50) * 0.75);
    }
    else if(unit <= 250){
        charge = 50 * 0.50 + 100 * 0.75 + ((unit - 150) * 1.20);
    }
    else if(unit>250){
        charge = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + ((unit - 250)*1.50);
    }

    charge = charge + charge * 0.2;
    printf("Your charge is: %0.2f", charge);

    return 0;
}