//Write a program to add two different string by overloading + operator using dynamic memory allocation and friend function.
#include<iostream>
#include<string.h>
using namespace std;

class opper{
    string s1;
    public:
        void get(){
            cout << "Enter string: ";
            cin >> s1;
        }
        opper operator +(opper a1){
            opper x;
            x.s1 = s1 + a1.s1;
            return x;
        }
        friend void display(const opper& obj);  
};

void display(const opper& obj){
    cout << "Merged string is: " << obj.s1;
}

int main(){
    opper a1, a2;
    opper *a3 = new opper;
    a1.get();
    a2.get();
    *a3 = a1 + a2;
    display(*a3);
    free(a3);
}