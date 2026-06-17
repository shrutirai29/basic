//Write a program to demonstrate the order of constructor call and destructor call for three different objects.
#include<iostream>
using namespace std;

class A{
    int x;
    public:
        A(int x){
            cout << "\nConstructor is called x = " << x;

        }
        ~A(){
            cout << "\nDestructor is called";
        }
};

int main(){
    A a(5), b(6), c(7);
    return 0;
}