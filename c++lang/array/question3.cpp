//Find the 2nd largest element in the given array.

#include<iostream>
using namespace std;
int main(){
    int x;
    int sec_max = INT16_MIN;
    cout << "Enter number of elements in array: ";
    cin >> x;
    int arr[x];
    int max = INT16_MIN;
    cout << "Enter elements of array: ";
    for(int i = 0; i < x; i++){
        cin >> arr[i];
    }
    cout << endl << "Elements of array are: ";
    for(int i = 0; i < x; i++){
        cout << arr[i] << " ";
        if (arr[i] > max) {
            sec_max = max;
            max = arr[i]; 
        } else if (arr[i] > sec_max && arr[i] != max) {
            sec_max = arr[i];
        }
    }
    
    cout << endl << "second max number is: " << sec_max;

    return 0;
}