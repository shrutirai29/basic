//Scan the value of integer, character and float data and display them, using ‘cin’ & ‘cout’.
#include <iostream>
using namespace std;

int main() {
    int num1;
    char ch;
    float num2;
    cout << "Enter an integer: ";
    cin >> num1;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter a float: ";
    cin >> num2;
    cout << "Integer: " << num1 << endl;
    cout << "Character: " << ch << endl;
    cout << "Float: " << num2 << endl;
    return 0;
}