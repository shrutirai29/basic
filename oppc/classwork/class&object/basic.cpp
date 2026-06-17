#include<iostream>
using namespace std;

class student{
    int id;
    float percent;
    char name[50];
    public:
        void get_data(){
            cout << "Enter id, name, and percentage: ";
            cin >> id >> name >> percent;
        }
        void put_data(){
            cout << "id = " << id << " ; name = " << name << " ; percent = " << percent;
        }
};
int main(){
    student a1;
    a1.get_data();
    a1.put_data();
}