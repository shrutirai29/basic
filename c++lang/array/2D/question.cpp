#include <iostream>
using namespace std;

int main(){
    int rows;
    int roll_num;
    string name;
    cout << "Enter number of students: ";
    cin >> rows;
    int arr[rows][2];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < 2; j++){
            cout << "Enter the roll number: ";
            cin >> arr[i][j];
            cout << "Enter the nameof the student: ";
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < 2; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}