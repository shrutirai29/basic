// print pattern
// *
// * *
// * * *
// * * * *

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "star triangle" << endl;
    for( int i = 1; i <= rows; i++){
        for( int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "column number triangle" << endl;
    for( int i = 1; i <= rows; i++){
        for( int j = 1; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "row number triangle" << endl;
    for( int i = 1; i <= rows; i++){
        for( int j = 1; j <= i; j++){
            cout << i << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "column alphabet triangle" << endl;
    for( int i = 1; i <= rows; i++){
        for( int j = 1; j <= i; j++){
            cout << (char) (j+64) << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "row alphabet triangle" << endl;
    for( int i = 1; i <= rows; i++){
        for( int j = 1; j <= i; j++){
            cout << (char) (i+64) << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "row alphabet triangle (small)" << endl;
    for( int i = 1; i <= rows; i++){
        for( int j = 1; j <= i; j++){
            cout << (char) (i+96) << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "column alphabet triangle (small)" << endl;
    for( int i = 1; i <= rows; i++){
        for( int j = 1; j <= i; j++){
            cout << (char) (j+96) << " ";
        }
        cout << endl;
    }

    cout << endl;

    //number and alphabet triangle
    cout << "number and alphabet triangle" << endl;
    for( int i = 1; i <= rows; i++){
        for( int j = 1; j <= i; j++){
            if( i % 2 == 0){
                cout <<(char) (j+64) << " ";
            }
            else{
                cout << j << " ";
            }
        }
        cout << endl;
    }

    cout << endl;

    // odd number triangle
    cout << "odd number triangle" << endl;
    for(int i = 1; i <= rows; i++){
        for (int j = 1; j <= i; j++){
            cout << 2*j - 1 << " ";
        }
        cout << endl;
    }

    cout << endl;

    //floyd's triangle
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    cout << "floyd's triangle" << endl;
    int count = 1;
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j < i; j++){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    cout << endl;

    // 0 & 1 triangle
    // 1
    // 0 1
    // 1 0 1
    // 0 1 0 1
    // 1 0 1 0 1
    cout << "0 & 1 triangle" << endl;
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= i; j++){
            if((i+j) % 2 == 0){
                cout << "1 ";
            }
            else{
                cout << "0 ";
            }
        }
        cout << endl;
    }

    cout << endl;

    // pascal's triangle
    // 1
    // 1 1
    // 1 2 1
    // 1 3 3 1
    // 1 4 6 4 1
    cout << "pascal's triangle" << endl;
    for(int i = 0; i < rows; i++){
        int number = 1;
        for(int j = 0; j <= i; j++){
            cout << number << " ";
            number = number * (i - j) / (j + 1);
        }
        cout << endl;
    }
}