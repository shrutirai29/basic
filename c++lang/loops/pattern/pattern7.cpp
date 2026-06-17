// print this pattern
//       *
//     * *
//   * * *
// * * * *

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = rows; i > 0; i--){
        for(int j = 1; j < i; j++){
            cout << "  ";
        }

        for(int k = 0; k <= rows - i; k++){
            cout << "* ";
        }
        cout << endl;
    }

    //both are done using different methods
    
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j < rows - i + 1; j++){
            cout << "  ";
        }

        for(int k = 1; k <= i; k++){
            cout << k << " ";
        }
        cout << endl;
    }
}