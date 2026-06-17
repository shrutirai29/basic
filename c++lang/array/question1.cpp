//Give an array of integers, chage the value of all odd indexed elments to its second multiple and increment all even indexed value by 10.

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
    cout << "Required array is: ";
    for(int i = 0; i < x; i++){
        if(i % 2  == 0){
            arr[i] += 10;
        }else{
            arr[i] *= 2;
        }
        cout << arr[i] << " ";
    }

    return 0;
}