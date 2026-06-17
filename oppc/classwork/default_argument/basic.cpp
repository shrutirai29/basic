#include<iostream>
using namespace std;

class abc{
    public:
        void area(int i, char c, float f = 10.5){
            cout << i << endl << c << endl << f << endl;
        }
};

int main(){
    abc a1;
    a1.area(1, 'c');
    a1.area(1, 'd', 23.56);
}