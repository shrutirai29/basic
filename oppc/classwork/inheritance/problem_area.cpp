//write a program in which you need to create 2 classes, area having data members l, b and member function area, displayArea and class volume, having data member h and member function displayVolume.
#include<iostream>
using namespace std;

class area{
    int l, b, x;
    public:
        area(){
            cout << "Enter l & b: ";
            cin >> l >> b;
        }
        int area1(){
            return l*b;
        }
        void displayArea(){
            cout << "Area = " << area1();
        }
};

class volume:public area{
    int h;
    public: 
        void displayVolume(){
            cout << "\nEnter height: ";
            cin >> h;
            cout << "Volume = " << area1() * h;
        }
};

int main(){
    volume v1;
    v1.displayArea();
    v1.displayVolume();
}