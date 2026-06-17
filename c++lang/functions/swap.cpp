#include<iostream>
using namespace std;

int main (){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before swapping: a = " << a << " b = " << b << endl;

    // using temporary variable
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "After swapping: a = " << a << " b = " << b << endl;

    // without using temporary variable
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping: a = " << a << " b = " << b << endl;
}