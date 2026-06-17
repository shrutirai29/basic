#include<iostream>
using namespace std;

int main(){
    int x, y;
    cout << "Enter the x-axis : ";
    cin >> x;
    cout << "Enter the y-axis : ";
    cin >> y;

    if(x > 0 && y > 0){
        cout << "The point lies in the first quadrant" << endl;
    }else if(x < 0 && y > 0){
        cout << "The point lies in the second quadrant" << endl;
    }else if(x < 0 && y < 0){
        cout << "The point lies in the third quadrant" << endl;
    }else if(x > 0 && y < 0){
        cout << "The point lies in the fourth quadrant" << endl;
    }else if(x == 0 && y == 0){
        cout << "The point lies at the origin" << endl;
    }else if(x == 0){
        cout << "The point lies on the y-axis" << endl;
    }else{
        cout << "The point lies on the x-axis" << endl;
    }
    
}