//Create a class employee having two data members char name & float age, this class is also having function void getdata() & void putdata() input and display the details of 5 different employees.
#include<iostream>
using namespace std;

class employee{
    char name[20];
    float age;
    public:
    void getdata(){
        cin >> name >> age;
    }
    void putdata(){
        cout << name << " \t " << age << endl;
    }
};

int main(){
    employee e[5];
    for(int i = 0; i < 5; i++){
        cout << "Enter details of employee " << i + 1 <<"(name, age) : ";
        e[i].getdata();
    }
    cout << "EMPLOYEE DETAILS " << endl;
    cout << "Name \t Age" << endl;
    for(int i = 0; i < 5; i++){
        e[i].putdata();
    }

    return 0;
}