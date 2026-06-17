#include <stdio.h>

int main() {
    float numbers[5];
    float largest;

    // Input: Collecting five numbers from the user
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &numbers[i]);
    }

    // Initialize largest to the first number
    largest = numbers[0];

    // Find the largest number
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    // Output: Displaying the largest number
    printf("The largest number is: %.2f\n", largest);

    return 0;
}
