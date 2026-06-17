//Write a program to Find Sum of All Elements in an Array and find average.
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    float average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (float)sum / n;

    printf("Sum of all elements: %d\n", sum);
    printf("Average of all elements: %.2f\n", average);

    return 0;
}