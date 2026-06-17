//Create a class employee with data members emp_id, name, slary and having functions void get() for input and void display() for displaying the employee details with their salary in descending order. Take the details of 5 employees with help of new operator.
#include<iostream>
#include<string.h>
using namespace std;

class employee{
    int emp_id;
    string name;
    int salary;
    public: 
        void get(){
            cout << "Enter your name, employee id and salary: ";
            cin >> name >> emp_id >> salary;
        }
        void display(){
            cout << "\nName = " << name << "\tEmployee ID = " << emp_id << "\tSalary = " << salary;
        }
        void sort(employee *e){
            for(int i = 0; i < 5; i++){
                for(int j = 0; j < 5-i-1; j++){
                    if(e[j].salary < e[j+1].salary){
                        employee temp = e[j];
                        e[j] = e[j+1];
                        e[j+1] = temp;
                    }
                }
            }
        }
};

int main(){
    employee *e = new employee[5];
    for(int i = 0; i < 5; i++){
        e[i].get();
    }
    e[0].sort(e);
    for(int i = 0; i < 5; i++){
        e[i].display();
    }
    
    return 0;    
}