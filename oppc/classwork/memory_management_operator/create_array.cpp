#include<iostream>
using namespace std;

class abc{
    int i;
    public:
        void get(){
            cout << "Enter a value: ";
            cin >> i;
        }
        void put(){
            cout << "i = " << i << "\t";
        }
};

int main(){
    int i, size;
    cout << "Enter size: ";
    cin >> size;
    abc *a = new abc[size];
    for(int i = 0; i < size; i++){
        a[i].get();
    }
    for(int i = 0; i < size; i++){
        a[i].put();
    }
    delete a;
}