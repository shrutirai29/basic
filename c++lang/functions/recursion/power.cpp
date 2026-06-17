#include<iostream>
using namespace std;

int pow(int x, int y);

int main(){
    int base, power;
    cout << "Enter base : ";
    cin >> base;
    cout <<"Enter power: ";
    cin >> power;

    cout << pow(base, power);
}

int pow(int x, int y){
    if(y == 0){
        return 1;
    }
    return x * pow(x, y-1);
}