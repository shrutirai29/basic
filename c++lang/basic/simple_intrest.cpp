#include<iostream>
using namespace std;

int main(){
    float principal = 1000, rate = 3.5, time = 2;
    float simple_intrest = (principal * rate * time) / 100;
    cout << "Simple Intrest is: ";
    cout << simple_intrest << endl;
}