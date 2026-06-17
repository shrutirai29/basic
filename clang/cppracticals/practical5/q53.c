// Write a program to print Inverted half pyramid of *
// * * * * *
// * * * *
// * * *
// * *
// *
#include <stdio.h> 

int main(){ 
    int i, j, n;
    printf("Enter the number of rows you want: ");
    scanf("%d", &n);
    for(i = n; i >= 1; --i){
        for(j = 1; j <= i; ++j){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}