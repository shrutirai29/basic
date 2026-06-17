#include<iostream>
using namespace std;

int main(){
    int a, b;
    char op, permission;
    cout << "Enter 2 numbers : ";
    cin >> a >> b;
    cout << "Enter the operator : ";
    cin >> op;

    do{
        // if(op == '+'){
        //     cout << "The sum is : " << a + b << endl;
        // }else if(op == '-'){
        //     cout << "The difference is : " << a - b << endl;
        // }else if(op == '*'){
        //     cout << "The product is : " << a * b << endl;
        // }else if(op == '/'){
        //     cout << "The quotient is : " << a / b << endl;
        // }else{
        //     cout << "Invalid operator" << endl;
        // }
        switch(op){
            case '+':
                cout << "The sum is : " << a + b << endl;
                break;
            case '-':
                cout << "The difference is : " << a - b << endl;
                break;
            case '*':
                cout << "The product is : " << a * b << endl;
                break;
            case '/':
                cout << "The quotient is : " << a / b << endl;
                break;
            default:
                cout << "Invalid operator" << endl;
        }
        cout << "Do you want to continue(y / n): ";
        cin >> permission;
    }
    while(permission == 'y');
}