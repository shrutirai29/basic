#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter the 3 sides of the triangle: ";
    cin >> a >> b >> c;
    if((a + b) > c && (b + c) > a && (c + a) > b){
        cout << "The triangle is valid" << endl;
    }else{
        cout << "The triangle is invalid" << endl;
    }
    return 0;
}