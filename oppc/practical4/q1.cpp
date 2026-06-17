//Write a program for sum and average of two numbers.
#include<iostream>
using namespace std;

class sum_avg{
    int a, b;
    public:
        void get_data(){
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }
        inline void display(){
            cout << "Sum: " << a+b << endl;
            cout << "Average: " << (a+b)/2.0 << endl;
        }
};

int main(){
    sum_avg a;
    a.get_data();
    a.display();
    return 0;
}