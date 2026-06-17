#include<iostream>
using namespace std;

int main(){
    int divisor;
    cout << "Enter the number with which you want to check divisibility: ";
    cin >> divisor;
    int number;
    cout << "Enter the number you want to check divisibility for: ";
    cin >> number;
    if(number % divisor == 0){
        cout << number << " is divisible by " << divisor << endl;
    }else{
        cout << number << " is not divisible by " << divisor << endl;
    }
}