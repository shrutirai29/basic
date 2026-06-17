//C program to print number of days in a month using switch case.
#include <stdio.h> 

int main(){ 
    int month;
    printf("Enter the number of month: ");
    scanf("%d", &month);

    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("number of days in this month is 31 ");
        break;

        case 4:
        case 6:
        case 9:
        case 11:
        printf("number of days in this month is 30 ");
        break;

        case 2:
        printf("number of days in this month is 28 ");
        break;

        default:
        printf("please enter a valid number between 1 - 12");
    }

    return 0;
}