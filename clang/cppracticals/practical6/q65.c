//Write a program to Insert an Element in an Array
#include <stdio.h>

int main() {
    int size, position, value;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    int array[size + 1]; 

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the position to insert the new element (0 to %d): ", size);
    scanf("%d", &position);
    
    if (position < 0 || position > size) {
        printf("Invalid position! Please enter a position between 0 and %d.\n", size);
        return 1; 
    }

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    for (int i = size; i > position; i--) {
        array[i] = array[i - 1];
    }

    array[position] = value;

    printf("\nThe updated array is:\n");
    for (int i = 0; i <= size; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}
