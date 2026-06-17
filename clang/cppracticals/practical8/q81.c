//Create a structure called "Student" with members name, age, and total marks. Write a C program to input data for five students, display their information, and find the average of total marks
#include <stdio.h>

struct Student{
    char name[50];
    int age;
    int total_marks;
};

int main(){
    int i, sum = 0;
    float avg;
    struct Student s[5];

    printf("Enter the data of students \n");
    for(i = 0; i < 5; i++){
        printf("Enter name of the student: ");
        scanf("%s", &s[i].name);
        printf("Enter age of the student: ");
        scanf("%d", &s[i].age);
        printf("Enter total marks of the student: ");
        scanf("%d", &s[i].total_marks);
        sum += s[i].total_marks;
    }
    for(i = 0; i < 5; i++){
        printf("%s, %d, %d \n", s[i].name, s[i].age, s[i].total_marks);
    }
    avg = sum/5;
    printf("Average of marks of the student is: %f", avg);

    return 0;
}