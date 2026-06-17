//Create a class area which will calculate and display the areas of circle, triangle and rectangle with the use of constructors and will pass data members as default arguments.
#include<iostream>
#include<cmath>
using namespace std;

class area{
    int l, b, r;
    public:
        area(int l, int b){
            cout << "\nArea = " << l*b;
        }
        area(int l , int b, int r){
            int s = (l+b+r)/2;
            cout << "\nArea = " << sqrt(s*(s-l)*(s-b)*(s-r));
        }
        area(int r = 5){
            cout << "\nArea = " << 3.14*r*r;
        }
};

int main(){
    area a1(5, 6), a2(3, 4, 5), a3;
    return 0;
}