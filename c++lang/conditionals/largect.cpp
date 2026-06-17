#include<iostream>
using namespace std;

int main(){
    int x, y, z, greatest;
    cout << "Entr 3 numbers: ";
    cin >> x >> y >> z;

    if(x > y && x > z){
        greatest = x;
    }else if(y > x && y > z){
        greatest = y;
    }else{
        greatest = z;
    }
    
    cout << "The greatest number is " << greatest << endl;

    return 0;
}