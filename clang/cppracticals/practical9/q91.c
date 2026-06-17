//Write a program in C to show the basic declaration of a pointer
#include <stdio.h>

int main() {
    int x ;         
    int *ptr;
    printf("Enter any number: ");
    scanf("%d", &x);              

    ptr = &x;            

    printf("Value of num: %d\n", x);
    printf("Address of num: %p\n", &x);
    printf("Value stored in ptr (address of num): %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);  

    return 0;
}
