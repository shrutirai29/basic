#include <iostream>
using namespace std;

void greet(){
    cout << "Good Morning!" << endl;
    cout << "How are you?" << endl;
    return;
}

void hello(){
    cout << "Hello!" << endl;
    greet();
    return;
    cout << "Hello!" << endl;
}

int main(){
    greet();
    hello();

    return 0;
}