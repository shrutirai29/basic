#include<iostream>
using namespace std;

class abc{
    int i;
    public:
        abc(){
            cout << "constructor is called";
        }
};

int main(){
    abc a1;
}