//Create a base class basic_info with data members name, roll no, gender and two member functions getdata and display. Derive a class physical_fit from basic_info which has data members height and weight and member functions getdata and display. Display all the information using object of derived class.
#include <iostream>
#include <string>
using namespace std;

class basic_info{
    string name;
    int rollNo;
    char gender;
    public:
        void getdata(){
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter roll no: ";
            cin >> rollNo;
            cout << "Enter gender: ";
            cin >> gender;
        }
        void putdata(){
            cout << "Name: " << name << "\tRoll No.: " << rollNo << "\tGender: " << gender << "\t";
        }
};

class physical_fit: public basic_info{
    float height, weight;
    public:
        void getdata(){
            basic_info::getdata();
            cout << "Enter height: ";
            cin >> height;
            cout << "Enter weight: ";
            cin >> weight;
        }
        void putdata(){
            basic_info::putdata();
            cout << "Height: " << height << "\tWeight: " << weight << endl;
        }
};

int main(){
    physical_fit p;
    p.getdata();
    p.putdata();
    return 0;
}