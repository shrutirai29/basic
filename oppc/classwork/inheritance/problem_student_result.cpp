//create class studentwith data member id, name and class result derived from student with data member result. create function to display all together.
#include<iostream>
#include<string.h>
using namespace std;

class student{
    int id;
    string name;
    public:
        void get_id(){
            cout << "Enter id and name: ";
            cin >> id >> name;
        }
        void display_data(){
            cout << "id = " << id << "\nname = " << name;
        }
};

class result: public student{
    float percent;
    public:
        void get_result(){
            get_id();
            cout << "Enter result: ";
            cin >> percent;
        }
        void display(){
            display_data();
            cout << "\npercent = " << percent << "%";
        }
};

int main(){
    result r;
    r.get_result();
    r.display();
}