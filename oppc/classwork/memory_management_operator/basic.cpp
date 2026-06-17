#include<iostream>
using namespace std;

int main(){
    int *p = new int;
    cout << "Enter P :: ";
    cin >> *p;
    cout << "value = " << *p << "\t address = " << p << endl;
    delete p;
    int *q = new int;
    cout << "Enter Q :: ";
    cin >> *q;
    cout << "value = " << *q << "\t address = " << q << endl;
    delete q;
    int *r = new int[5];
    cout << "Enter values: ";
    for(int i = 0; i < 5; i++){
        cin >> r[i];
    }
    cout << "Values are: " << endl;
    for(int i = 0; i < 5; i++){
        cout << r[i] << "\tAddress: " << &r[i] <<endl; 
    }
}