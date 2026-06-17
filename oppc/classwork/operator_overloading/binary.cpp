#include<iostream>
using namespace std;

class abc{
    int i;
    public: 
        void get(){
            cout << "Enter data: ";
            cin >> i;           
        }
        abc operator +(abc a1){
            abc t;
            t.i = i + a1.i;
            return t;
        }
        void display(){
            cout << i << endl;
        }
};

int main(){
    abc a1, a2, a3;
    a1.get();
    a2.get();
    a3 = a1+a2;  // a3=a1.operator(a2)
    a3.display();
}