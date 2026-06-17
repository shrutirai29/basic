#include<iostream>
using namespace std;

void change(int arr[]);

int main(){
    int x;
    cout << "Enter numbr of elements you want in array: ";
    cin >> x;
    int arr[x];

    cout << "Enter the elements of the array";
    for(int i = 0; i < x; i++){
        cin >> arr[i];
    }
    change(arr);
    cout << "The array is: ";
    for(int i = 0; i < x; i++){
        cout << arr[i] << " ";
    }
}

void change(int arr[]){
    arr[0] = 7;
    arr[4] = 8;
}