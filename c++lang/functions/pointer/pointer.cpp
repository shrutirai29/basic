#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int* p = &a;
    cout << "Value of a: " << a << endl; // output = 10
    cout << "Address of a: " << &a << endl; // output = address of a
    cout << "Value of p: " << p << endl; // output = address of a
    cout << "Address of p: " << &p << endl;// output = address of p
    cout << "Value at address p: " << *p << endl;// output = 10

    *p = 20; // updating value of 'a' using pointer
    cout << "Value of a: " << a << endl; // output = 20
}