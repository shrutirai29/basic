//Write a C program to do the following tasks.
//a)	Take string from user and print in upper-case
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);  

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }

    printf("Uppercase: %s\n", str);

    return 0;
}
