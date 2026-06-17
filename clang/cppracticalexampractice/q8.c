//WAP to input a string and display the same.
#include<stdio.h>

int main(){
    char a[100];

    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);

    printf("string : %s", a);
}