//WAP to read the data (name, Id and basic salary) of N employee and compute Net salary of each employee (DA=52% of Basic and Income Tax (IT) =30% of the gross salary).
#include<iostream>
using namespace std;

class employee{
    int id, basic_sal;
    float final_sal;
    string name;
    public:
    void get_data(){
        cout << "Enter the first-name and id of the employee: ";
        cin >> name >> id;
        cout << "Enter the salary: ";
        cin >> basic_sal;
    }
    void final_salary(){
        int sal = basic_sal + (0.52*basic_sal);
        final_sal = sal - (0.3*sal);
        cout << final_sal << endl;
    }
};
int main(){
    int x;
    employee e[50];
    cout << "Enter the number of employee: ";
    cin >> x;
    for(int i = 0; i < x; i++){
        e[i].get_data();
    }
    for(int i = 0; i < x; i++){
        cout << "So after applying the taxes and adding D.A. Employee" << i << " has final salary = ";
        e[i].final_salary();
    }

    return 0;
}