#include<iostream>
using namespace std;

class area{
    public:
        area (int i, int j){
            if(i == j){
                cout << "area of square is: " << i*i <<endl;
            }
            else{
                cout << "area of rectangle is: " << i*j << endl;
            }
        }
        area(int k){
            cout << "area of circle is: "<< 3.14*k*k << endl;
        }
};

int main(){
    area a1(2,2) , a2(2,6), a3(7);
}