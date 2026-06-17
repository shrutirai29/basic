//this question is also in functions folder in swap.cpp
#include<iostream>
using namespace std;

int swap(int& x, int& y); // pass by value (easy)
int pointer(int *x, int *y); // pass by reference

int main (){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before swapping: a = " << a << " b = " << b << endl;
    //swapping without using pointers 
    swap(a, b);
    cout << "After swapping using pass by value (no pointers): a = " << a << " b = " << b << endl;
    //swapping using pointers
    pointer(&a, &b);
    cout << "After swapping using pointers: a = " << a << " b = " << b << endl;
}

int swap(int& x, int& y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int pointer(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}