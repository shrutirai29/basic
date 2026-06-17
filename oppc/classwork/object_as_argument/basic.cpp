#include<iostream>
using namespace std;

class abc{
    int id;
    public:
        void get(){
            cout << "Enter a number: ";
            cin >> id;
        }
        int sum (abc a1, abc a2){
            cout << a1.id + a2.id;
        }
};

int main(){
    abc s1, s2, s3;
    int j;
    s1.get();
    s2.get();
    s3.sum(s1, s2);
}