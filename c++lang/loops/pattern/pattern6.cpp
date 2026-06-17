// print thi pattern
// *    *
//   * *
//    * 
//    * 
//   * * 
// *    *

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= rows; j++){
            if( i == j || i+j == rows+1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}