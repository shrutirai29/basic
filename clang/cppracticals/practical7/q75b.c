//Write a C program to do the following tasks.
//b)	Find string length without using strlen () function
#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    while (str[length] != '\0') {
        length++; 
    }

    printf("Length of the string: %d\n", length);

    return 0;
}
