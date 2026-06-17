//WAP using ‘class’ with name person, with functions to input value of age and name and display the same.
#include<iostream>
using namespace std;

class stud{
    int age;
    string name;
    public:
    void get_data(){
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void put_data(){
        cout << "Name = " << name << "  Age = "<< age << endl;
    }
};
int main(){
    stud s1, s2, s3;
    s1.get_data();
    s2.get_data();
    s3.get_data();
    cout << "Students details: " << endl;
    s1.put_data();
    s2.put_data();
    s3.put_data();

    return 0;
}