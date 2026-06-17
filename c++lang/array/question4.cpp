//WAP to copy the contents of one array into another in reverse order.
#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter the number of elements: ";
    cin >> x;
    int arr[x];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < x; i++){
        cin >> arr[i];
    }
    cout << endl << "Elements of the array are: ";
    for(int i = 0; i < x; i++){
        cout << arr[i] << " ";
    }
    int arr_[x];
    for(int i = (x - 1); i >= 0; i--){
        int j = x-i-1;
        arr_[i] = arr[j];
    }
    cout << endl << "Elements of second array are: ";
    for(int i = 0; i < x; i++){
        cout << arr_[i] << " ";
    }

    return 0; 
}