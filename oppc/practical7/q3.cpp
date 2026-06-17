//Write a program to perform string copy operation by overloading = operator using dynamic memory allocation.
#include <iostream>
#include <string>
using namespace std;

class opper {
private:
    string s1;

public:
    void get() {
        cout << "Enter string: ";
        getline(cin >> ws, s1); 
    }

    opper& operator=(const opper& a1) {
        s1 = a1.s1;
        return *this;
    }

    void display() {
        cout << s1;
    }
};

int main() {
    opper a1;
    opper* a2 = new opper;

    a1.get();
    *a2 = a1;

    cout << "Original string: ";
    a1.display();
    cout << "\nCopied string: ";
    a2->display();

    delete a2;
    return 0;
}