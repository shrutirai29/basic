#include <iostream>
using namespace std;

int main(){
    float x, y;
    cout << "Enter 2 numbers:";
    cin >> x >>y;
    cout<<"sum of" <<x<<" and " <<y<< " is " <<x + y<<endl;
    cout<<"difference of" <<x<<" and " <<y<< " is "<<x - y<<endl;
    cout<<"product of"<<x<< " and "<<y<< " is " << x * y<<endl;
    cout<<"quotient of"<<x<< " and "<<y<< " is "<<x / y<<endl;
    cout << "remainder of" <<x<< " and "<<y<< " is "<<(int)x % (int)y<<endl;
}