//Write a program to find maximum out of two different values, using ‘cin’ & ‘cout’.
#include <iostream>
using namespace std;

int main(){
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    if (x > y){
        cout << x << " is greater than " << y << endl;
    } else if (y > x){
        cout << y << " is greater than " << x << endl;
    } else {
        cout << x << " is equal to " << y << endl;
    }
}