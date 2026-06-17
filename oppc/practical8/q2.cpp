//C++ program to read and print employee information using single, multilevel inheritance.
#include <iostream>
#include <string>
using namespace std;

class Employee {
    protected:
        string name;
        int salary;
    public:
        void get(){
            cout << "Enter Employee Name: ";
            cin >> name;
            cout << "Enter salary: ";
            cin >> salary;
        }
};

class finalSalary: public Employee{
    protected:
        int bonus, deduction, finalSalary;
    public:
        void getSalary(){
            cout << "Enter Bonus: ";
            cin >> bonus;
            cout << "Enter Deduction: ";
            cin >> deduction;
            finalSalary = salary + bonus - deduction;
        }
};

class print : public finalSalary{
    public: 
        void put(){
            cout << "Name: " << name << "\tSalary: " << salary << "\tSalary after bonus and deduction: " << finalSalary << endl;
        }
};

int main(){
    print p;
    p.get();
    p.getSalary();
    p.put();
    return 0;
}