//Write a program to demonstrate the usage of copy constructor
#include<iostream>
using namespace std;

class A{
    int x;
    public:
        A(){
            cout << "Constructor called\n Enter value of x: ";
            cin >> x;
        }
        A(A &obj){
            x = obj.x;
        }
        void display(){
            cout << "Value of x: " << x;
        }
};
int main(){
    A a1;
    A a2 = a1;
    a2.display();
    return 0;
}