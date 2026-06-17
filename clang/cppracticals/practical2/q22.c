/*Admission to a professional course in subject to the following conditions:
a)	Marks in mathematics >=60 
b)	Marks in Physics >=50 
c)	Marks in Chemistry >=40 
Total in all three subjects >=200 
or
Total in mathematics and physics>=150. Given the marks in the three subjects, write a program to process the applications to the eligible candidates.*/

#include <stdio.h> 

int main(){ 
    int m, p, c;

    printf("Enter the marks of maths, physics and chemistry respectively: ");
    scanf("%d%d%d", &m, &p, &c);


    if(m >= 60 && p >= 50 && c > 40){
        if(m + p + c >=200 || m + p >= 150){
            printf("You are an eligible candidate");
        }
    }
    else{
            printf("You are not an eligible candidate");
    }

    return 0;
}