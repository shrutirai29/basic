#include<iostream>
using namespace std;

int main(){
    int l, b;
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> l >> b;
    int perimeter = 2 * (l + b);
    int area = l * b;
    if(perimeter > area){
        cout << "The perimeter of the rectangle is greater than its area" << endl;
    }else if(perimeter < area){
        cout << "The area of the rectangle is greater than its perimeter" << endl;
    }else{
        cout << "The area and perimeter of the rectangle are equal" << endl;
    }
    return 0;
}