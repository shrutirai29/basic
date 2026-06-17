//Write a program to find count no. of a character from the string, string and character to be searched both will be given by user. i.e. if, string = “Ujjawal”, char = ‘a’; Answer = 2.
#include <stdio.h>

int main() {
    char str[100], c;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    printf("Enter a character to search: ");
    scanf("%c", &c);  

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            count++;
        }
    }

    printf("Character '%c' appears %d times in the string.\n", c, count);

    return 0;
}
