//Create a class sample having two data members a and b having integer data types, and having function set_val(), a non-member function sum() has to print the sum of a and b.
#include<iostream>
using namespace std;

class sample{
    int a, b;
    public:
        void set_val(){
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }
        friend void sum(sample s);
};

void sum(sample s){
    cout << "Sum: " << s.a+s.b << endl;
}
int main(){
    sample s;
    s.set_val();
    sum(s);
    return 0;
}