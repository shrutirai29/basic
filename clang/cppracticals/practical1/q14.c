//Write a C program to calculate area and circumference of a circle.
#include <stdio.h> 

int main(){ 
    int r;
    float perimeter, area, pi;
    printf("Enter the radius of circle: ");
    scanf("%d", &r);
    pi = 3.14;
    perimeter = 2 * pi * r;
    area = pi * r * r;

    printf("Perimerter of the circle is: %0.2f \n", perimeter);
    printf("Area of circle is: %0.2f", area);

    return 0;
}