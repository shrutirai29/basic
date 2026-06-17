#include<iostream>
using namespace std;

class A{
    int a;
    public:
        A(int x){
            a = x;
        }
        A(A &obj){
            a = obj.a;
        }
        void display(){
            cout << "Value of a: " << a;
        }
};
int main(){
    A a1(5);
    A a2 = a1;
    a2.display();
    return 0;
}