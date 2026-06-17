#include<iostream>
using namespace std;

class abc{
    static int id;
    public:
        void get(){
            cout << "Enter a number: ";
            cin >> id;
        }
        static void display(){
            cout << id<< endl;
            id++;
        }
};

int abc::id;

int main(){
    abc a1;
    abc::display();
    abc::display();
    abc::display();
}