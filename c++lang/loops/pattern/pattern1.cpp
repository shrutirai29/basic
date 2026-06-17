//print the pattern
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

#include<iostream>
using namespace std;

int main(){
    int rows, columns;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    for( int i = 0; i< rows; i++){
        for(int j = 0; j<columns; j++){
            cout <<"* ";
        }
        cout << endl;
    }

    cout << endl;

    for( int i = 1; i<= rows; i++){
        for(int j = 1; j<=columns; j++){
            cout <<j << " ";
        }
        cout << endl;
    }

    cout << endl;

    for( int i = 1; i<= rows; i++){
        for(int j = 1; j<=columns; j++){
            cout <<i << " ";
        }
        cout << endl;
    }

    cout << endl;

    for( int i = 1; i<= rows; i++){
        for(int j = 1; j<=columns; j++){
            cout <<(char) (j+64)<< " ";
        }
        cout << endl;
    }

    cout << endl;

    for( int i = 1; i<= rows; i++){
        for(int j = 1; j<=columns; j++){
            cout <<(char) (i+64)<< " ";
        }
        cout << endl;
    }

    cout << endl;

    for( int i = 1; i<= rows; i++){
        for(int j = 1; j<=columns; j++){
            cout <<(char) (j+96)<< " ";
        }
        cout << endl;
    }

    cout << endl;

    for( int i = 1; i<= rows; i++){
        for(int j = 1; j<=columns; j++){
            cout <<(char) (i+96)<< " ";
        }
        cout << endl;
    }

    cout << endl;

    int len = 2 * rows - 1; // Size of the square grid

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            int min = i;

            if (j < min)
                min = j;
            if (len - 1 - i < min)
                min = len - 1 - i;
            if (len - 1 - j < min)
                min = len - 1 - j;

            printf("%d ", rows - min);
        }
        printf("\n");
    }
}