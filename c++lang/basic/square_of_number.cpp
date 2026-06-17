#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number whose square you want: ";
    cin >> num;
    int square = num * num;
    cout << "Square of " << num << " is:" << square << endl;
    //cout << num * num << endl;

    return 0;
}