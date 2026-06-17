#include<iostream>
using namespace std;

int sum (int n);

int main(){
    int n;
    cout << "Enter a number: " ;
    cin >> n ;
    cout << sum(n);
}

int sum(int n){
    if(n == 1){ return 1;}
    return n + sum(n - 1);
}