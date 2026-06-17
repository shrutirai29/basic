#include<iostream>
using namespace std;

class abc{
    int id;
    public:
        void get(){
            cout << "enter a number: ";
            cin >> id;
        }
        void display(abc *a){
            for(int j = 0; j <2; j++){
                cout << a[j].id;
            }
        }
};

int main(){
    abc s1, s2[3];
    for(int i = 0; i < 2; i++){
        s2[i].get();
    }
    s1.display(s2);
}