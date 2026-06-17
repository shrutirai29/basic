#include<iostream>
using namespace std;

class abc{
    int i, j, k;
    public:
        abc(){
            i = 10;
            cout << i<< endl;
        }
        abc(int m, int n){
            j = m;
            k = n;
        }
        void display(){
            cout << j << endl << k << endl;
        }
};

int main(){
    abc a1, a2(2,5);
    a2.display();
}