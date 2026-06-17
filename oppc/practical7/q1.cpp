//Write a program to add two different string by overloading + operator using dynamic memory allocation.
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
        void display(){
            cout << "Merged string is: " << s1;
        }
};

int main(){
    opper a1, a2;
    opper *a3 = new opper;
    a1.get();
    a2.get();
    *a3 = a1 + a2;
    a3->display();
    free(a3);
}