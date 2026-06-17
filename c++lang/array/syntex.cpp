#include<iostream>
using namespace std;

int main(){
    int x[5];
    x[0] = 4;
    x[1] = 2;
    x[2] = 8;
    x[3] = 28;
    x[4] = 34;

    int y[5] = {1, 4, 3, 7, 2};
    for(int i = 0; i < 5; i++){
        cout <<"x["<< i << "] = " << x[i] << " ";
        cout <<"y["<< i << "] = " << y[i] << endl;
    }

    int z[5];
    cout << "Enter 5 elements: " << endl;
    for(int i = 0; i < 5; i++){
        cin >> z[i];
    }
    for(int i = 0; i < 5; i++){
        cout <<"z["<< i << "] = " << z[i] << " ";
    }
}