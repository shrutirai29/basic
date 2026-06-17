//WAP Read and Print elements of an array
#include<stdio.h>

int main(){
    int n, i;
    printf("Enter the number of elements you want in the array: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 1; i <= n; i++){
        printf(" value %d = ", i);
        scanf("%d", &arr[i]);
    }
    printf("given array is: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}