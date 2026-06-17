#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int x[] = {1, 2, 3, 4, 5, 6, 7 };
    cout << "Elements of array are: ";
    for(int i = 0; i < 7; i++){
        cout << x[i] << " ";
        sum += x[i];
    }
    cout << endl << "Sum of the elements of the array is: " << sum;
}