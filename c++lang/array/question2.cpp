//find difference btw the sum of elements of even indices to the sum of elements at odd indices.

#include<iostream>
using namespace std;
int main(){
    int x, diff;
    int sum_even = 0;
    int sum_odd = 0;
    cout << "Enter number of elements in array: ";
    cin >> x;
    int arr[x];
    cout << "Enter the elements of the array";
    for(int i = 0; i < x; i++){
        cin >> arr[i];
    }
    cout << endl << "Elements of array are: ";
    for(int i = 0; i < x; i++){
        if(i % 2 == 0){
            sum_even += arr[i];
        }
        else{
            sum_odd += arr[i];
        }
        cout << arr[i] << " ";
    }
    diff = sum_odd - sum_even;
    cout << endl << "Required difference is: " << diff;

    return 0;
}