//Write a program to perform string compare operation by overloading == operator using dynamic memory allocation.
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
        bool operator == (const opper& a1){
            return s1 == a1.s1;
        }
};



int main(){
    opper *a1 = new opper;
    opper *a2 = new opper;
    a1->get();
    a2->get();
    if(*a2 == *a1){
        cout << "Both are same";
    }else{
        cout << "Both are different";
    }
    delete a1, a2;
}