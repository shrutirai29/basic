//find area of circle using default argument
#include <iostream>
using namespace std;

class area{
    public:
        void circle(float r, float pi = 3.14){
            cout << "Area = " << r*r*pi;
        }
};

int main(){
    area a1;
    a1.circle(2.5);
}