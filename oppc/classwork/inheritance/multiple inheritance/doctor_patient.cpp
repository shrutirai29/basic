#include<iostream>
using namespace std;

class person{
    int id;
    string name;
    public:
        person(){
            cout << "Enter id and name: ";
            cin >> id >> name;
        }
        void display_person(){
            cout << "id = " << id << "\nname = " << name;
        }
};

class doctor: public person{
    string specialization;
    public:
        doctor(){
            cout << "Enter specialization: ";
            cin >> specialization;
        }
        void display_doctor(){
            display_person();
            cout << "\nspecialization = " << specialization;
        }
};

class patient: public person{
    string disease;
    public:
        patient(){
            cout << "Enter disease: ";
            cin >> disease;
        }
        void display_patient(){
            display_person();
            cout << "\ndisease = " << disease;
        }
};

int main(){
    doctor d;
    patient p;
    cout << "\nDoctor details: " << endl;
    d.display_doctor();
    cout << "\nPatient details: " << endl;
    p.display_patient();
    return 0;
}