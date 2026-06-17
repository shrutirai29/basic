#include<iostream>
using namespace std;

class abc{
    int i;
    public:
        abc(){
            cout << "enter data: ";
            cin >> i;
        }
        void operator -(){
            i = -i;
        }
        void display(){
            cout << i<< endl;
        }
};

int main(){
    abc a1;
    a1.display();
    -a1;
    a1.display();
}