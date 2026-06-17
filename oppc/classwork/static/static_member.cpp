#include<iostream>
using namespace std;

class abc{
    static int id;
    public:
        void get(){
            id = 20;
        }
        void display(){
            cout << id << endl;
            id++;
        }
};

int abc :: id; 

int main(){
    abc a1, a2, a3;
    a1.get();
    a1.display();
    a2.display();
    a3.display();
}