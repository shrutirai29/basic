//Write a program in C to access the array elements using pointers.
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements you want: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;  

    printf("Array elements using pointer:\n");

    for (i = 0; i < n; i++) {
        printf("Element %d: %d\n", i + 1, *(ptr + i));  
    }

    return 0;
}
