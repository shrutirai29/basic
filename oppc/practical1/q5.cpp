//Write a program of a simple calculator, using switch case and ‘cin’ & ‘cout’ objects.
#include <iostream>
using namespace std;

int main(){
    float num1, num2;
    char op;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    do{
        cout << "Enter an operator (+, -, *, /,%): ";
        cin >> op;
        switch (op){
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
            case '/':
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                break;
            case '%':
                cout << num1 << " % " << num2 << " = " << (int)num1 % (int)num2 << endl;
                break;
            default:
                cout << "Invalid operator" << endl;
        }
        cout << "Do you want to continue? (y/n): ";
        cin >> op;
    }while(op != 'n');
    cout << "Thank you for using the calculator!" << endl;
    return 0;
}