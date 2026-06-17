// print this
//       *
//     * * *
//   * * * * *
// * * * * * * *
//   * * * * * 
//     * * *
//       *

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    int x = (rows / 2) + 1;

    for(int i = 0; i <= x; i++){
        for(int j = 1; j <= x-i; j++){
            cout << "  ";
        }

        for(int k = 0; k < 2*i-1; k++){
            cout << "* ";
        }
        cout << endl;
    }

    for(int i = x-1; i >= 1; i--){
        for(int j = 1; j <= x-i; j++){
            cout << "  ";
        }

        for(int k = 0; k < 2*i-1; k++){
            cout << "* ";
        }
        cout << endl;
    }
}