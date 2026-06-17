#include<iostream>
using namespace std;

int fib(int n);

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n ;
    cout << "nth fibonacci term is: " << fib(n);
}

int fib(int n){
    if(n == 1 || n == 2){
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}