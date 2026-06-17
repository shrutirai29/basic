//this is also present in pattern folder in pattern2.cpp
#include<iostream>
using namespace std;

int fact(int x); // pass by value

int main (){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    // 1
    // 1 1
    // 1 2 1
    // 1 3 3 1
    // 1 4 6 4 1

    cout << "pascal's half triangle" << endl;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= i; j++){
            cout << fact(i) / (fact(j) * fact(i-j)) << " ";
        }
        cout << endl;
    }
    cout << endl;

    //     1
    //    1 1
    //   1 2 1
    //  1 3 3 1
    // 1 4 6 4 1

    cout << "pascal's triangle" << endl;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j < n-i; j++){
            cout << " ";
        }
        for(int j = 0; j <= i; j++){
            cout << fact(i) / (fact(j) * fact(i-j)) << " ";
        }
    cout << endl;
    }
}

int fact(int x){
    if(x == 0){
        return 1;
    }else{
        return x * fact(x-1);
    }
}