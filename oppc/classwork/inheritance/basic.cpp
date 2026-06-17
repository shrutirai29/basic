#include<iostream>
using namespace std;

class a{
    int i;
    public:
        int j, k;
        void init1(){
            i = 20; j = 30; k = 40;
        }
        void display1(){
            cout << "Base class data: " << i;
        }
};

class b:public a{
    int l;
    public:
        int m, n;
        void init(){
            l = 50; m = 60; n = 70;
        }
        void display(){
            cout << "\nData from base class: " << j << k;
            cout << "\nData of derived class: " << l << m << n;
        }
};

int main(){
    b b1;
    b1.init1();
    b1.display1();
    b1.init();
    b1.display();
}