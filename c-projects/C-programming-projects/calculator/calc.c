#include<stdio.h>
#include<math.h>

int sum(int arr[], int n);
int diff(int arr[], int n);
int mul(int arr[], int n);
double div(double arr[], int n);
int mod(int arr[], int n);
double power(double arr[], int n);

int main(){
    printf("Welcome to the calculator program!!!\n\n");
    printf("This program can perform the following operations:\n\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Power\n");
    printf("7. Exit\n\n");

    int choice;

    do{
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if( choice ==1){
            int n;
            printf("Enter the number of elements: ");
            scanf("%d", &n);
            int arr[n];

            for(int i = 0; i < n; i++){
                printf("Enter element %d: ", i+1);
                scanf("%d", &arr[i]);
            }

            int add = sum(arr, n);

            printf("The sum of the elements is: %d\n\n", add);
        }
        else if(choice == 2){
            int n;
            printf("Enter the number of elements: ");
            scanf("%d", &n);
            int arr[n];
            for(int i = 0; i < n; i++){
                printf("Enter element %d: ", i+1);
                scanf("%d", &arr[i]);
            }

            int sub = diff(arr, n);

            printf("The difference of the elements is: %d\n\n", sub);
        }
        else if(choice == 3){
            int n;
            printf("Enter the number of elements: ");
            scanf("%d", &n);
            int arr[n];
            for(int i = 0; i < n; i++){
                printf("Enter element %d: ", i+1);
                scanf("%d", &arr[i]);
            }

            int product = mul(arr, n);

            printf("The product of the elements is: %d\n\n", product);
        }
        else if(choice == 4){
            int n;
            printf("Enter the number of elements: ");
            scanf("%d", &n);
            double arr[n];
            for(int i = 0; i < n; i++){
                printf("Enter element %d: ", i+1);
                scanf("%lf", &arr[i]);
            }

            double division = div(arr, n);

            printf("The division of the elements is: %0.2lf\n\n", division);
        }
        else if(choice == 5){
            int n;
            printf("Enter the number of elements: ");
            scanf("%d", &n);
            int arr[n];
            for(int i = 0; i < n; i++){
                printf("Enter element %d: ", i+1);
                scanf("%d", &arr[i]);
            }

            int modulus = mod(arr, n);

            printf("The modulus of the elements is: %d\n\n", modulus);
        }
        else if(choice == 6){
            int n;
            printf("Enter the number of elements: ");
            scanf("%d", &n);
            double arr[n];
            for(int i = 0; i < n; i++){
                printf("Enter element %d: ", i+1);
                scanf("%lf", &arr[i]);
            }

            double times = power(arr, n);

            printf("The power of the elements is: %lf\n\n", times);
        }
        else if(choice == 7){
        printf("Thank you for using the calculator program.\n\n");
        printf("Please come back again.\n\n");
        printf("Developed by: Shruti Rai\n\n");
        }
        else{
        printf("Invalid choice. Please try again.\n\n");
    }
    } while(choice != 7);
    
}

int sum(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int diff(int arr[], int n){
    int diff = arr[0];
    for(int i = 0; i < n; i++){
        diff -= arr[i];
    }
    return diff;
}

int mul(int arr[], int n){
    int mul = 1;
    for(int i = 0; i < n; i++){
        mul *= arr[i];
    }
    return mul;
}

double div(double arr[], int n){
    double div = arr[0]; 
    for(int i = 1; i < n; i++){
        if(arr[i] == 0){
            printf("Error: Division by zero!\n");
            return 0;  
        }
        div /= arr[i];  
    }
    return div;
}

int mod(int arr[], int n){
    int mod = arr[0];  
    for(int i = 1; i < n; i++){  
        if(arr[i] == 0){
            printf("Error: Modulus by zero!\n");
            return 0;  
        }
        mod %= arr[i];
    }
    return mod;
}

double power(double arr[],int n){
    double power = arr[0];
    for(int i = 1; i < n; i++){
        power = pow(power, arr[i]);
    }
    return power;
}