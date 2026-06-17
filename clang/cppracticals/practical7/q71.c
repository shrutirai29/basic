//Write a program to input a string and display the same
#include <stdio.h> 

int main(){ 
    char name[20];
    printf("Your name is: ");
    scanf("%s", &name);

    printf("The name that you entered is: %s", name);
    return 0;
}