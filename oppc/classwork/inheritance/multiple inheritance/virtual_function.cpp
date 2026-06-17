#include <iostream>
using namespace std;

class Person {
public:
    void display() {
        cout << "I am a Person" << endl;
    }
};

// Both Student and Employee inherit Person virtually
class Student : virtual public Person {
public:
    void studentInfo() {
        cout << "I am a Student" << endl;
    }
};

class Employee : virtual public Person {
public:
    void employeeInfo() {
        cout << "I am an Employee" << endl;
    }
};

// Manager inherits both Student and Employee
class Manager : public Student, public Employee {
public:
    void managerInfo() {
        cout << "I am a Manager" << endl;
    }
};

int main() {
    Manager m;
    m.display();         // No ambiguity — only one copy of Person
    m.studentInfo();
    m.employeeInfo();
    m.managerInfo();
    return 0;
}
