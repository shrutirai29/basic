// print pattern
// * * * *
// * * *
// * *
// *

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows";
    cin >> rows;

    for(int i =rows; i > 0; i--){
        for(int j =1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;

    for(int i =rows; i > 0; i--){
        for(int j =1; j <= i; j++){
            cout << i << " ";
        }
        cout << endl;
    }

    cout << endl;

    for(int i =rows; i > 0; i--){
        for(int j =1; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    for(int i =rows; i > 0; i--){
        for(int j =1; j <= i; j++){
            cout << (char)(j+64) << " ";
        }
        cout << endl;
    }

    cout << endl;

    for(int i =rows; i > 0; i--){
        for(int j =1; j <= i; j++){
            cout << (char)(i+64) << " ";
        }
        cout << endl;
    }

    cout << endl;

    for(int i =rows; i > 0; i--){
        for(int j =1; j <= i; j++){
            cout << rows + 1 - i << " ";
        }
        cout << endl;
    }

    cout << endl;
}