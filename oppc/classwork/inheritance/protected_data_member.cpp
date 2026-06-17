#include<iostream>
using namespace std;

class A{
    int i;
    protected:
        int j;
    public:
        void init(){
            i = 10;
            j = 20;
        }
        void display(){
            cout << i;
        }
};
class B: public A{
    public:
        void display(){
            A::display();
            cout << "\t" << j;
        }
};

int main(){
    B b1;
    b1.init();
    b1.display();
}