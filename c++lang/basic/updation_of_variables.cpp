#include <iostream>
using namespace std;

int main (){
    int x = 5;
    cout<<x<<endl;
    x = 7;
    cout<<x<<endl;
    x = x + 20;
    cout<<x<<endl;

    int y = 4;
    cout<<y<<endl;
    cout<<y++<<endl; //first print then increase the value
    cout<<y<<endl;
    cout<<++y<<endl; //first increase the value then print

    return 0;
}