#include<iostream>
using namespace std;

void print(int n);

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    print(n);
}

void print(int n){
    if(n == 0){
        return;
    }else{
        cout <<n <<" ";
        print(n - 1);
    }
}