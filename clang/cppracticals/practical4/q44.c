//Write a program to list all the leap years from 1900 to 2100.
#include <stdio.h> 

int main(){ 
    for(int year = 1900; year <= 2100; year++){
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
            printf("%d    ", year);
        }
    }

    return 0;
}