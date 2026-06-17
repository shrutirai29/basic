//write program to depict the usage of exception of handeling
#include<iostream>
using namespace std;

int main(){
    float x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    try{
        if(y == 0){
            throw "Division by zero error!";
        } else {
            cout << "Result = " << x/y << endl;
        }
    } catch(const char* msg){
        cout << msg << endl;
    }
}