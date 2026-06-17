//Write a program to calculate the average of numbers entered by the user.
#include<stdio.h>

int main(){
    int n, i, sum = 0;
    float avg = 0 ;
    printf("Enter the number of values you want: ");
    scanf("%d", &n);
    int arr[n];
    for(i=1; i<=n; i++){
        printf("value %d: ",i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = (float)sum / n;
    printf("Average of given numbers is: %f", avg);

    return 0;
}