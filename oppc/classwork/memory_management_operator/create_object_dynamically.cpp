#include<iostream>
using namespace std;

class algo{
    int i;
    public:
        void get_data(){
            cout << "i = ";
            cin >> i;
        }
        void put_data(){
            cout << "i = " << i;
        }
};

int main(){
    algo *b = new algo;
    b->get_data();
    b->put_data();
}