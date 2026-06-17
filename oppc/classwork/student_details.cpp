#include<iostream>
//#include<string.h>
using namespace std;

class student{
    int student_id;
    char name[50];
    float percent;
    public:
        void get(){
            cout << "Enter student id : ";
            cin >> student_id;
            cout << "Enter student name : ";
            cin >> name;
            cout << "Enter student percentage : ";
            cin >> percent;
        }
        void display(){
            cout << student_id << "\t" << name << "\t" << percent << endl;
        }
        
        friend void search(student s[], int& count);
};

void search(student s[], int& count) {
    int id;
    cout << "Enter the student id : ";
    cin >> id;
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (s[i].student_id == id) {
            found = true;
            cout << "Student Found!!" << endl
                 << "What do you want to do now?" << endl
                 << "1. Display student details" << endl
                 << "2. Update student details" << endl
                 << "3. Delete student details" << endl
                 << "4. Exit" << endl;
            int choice;
            cout << "Enter your choice : ";
            cin >> choice;
            switch (choice) {
                case 1:
                    s[i].display();
                    break;
                case 2:
                    s[i].get();
                    break;
                case 3:
                    for (int j = i; j < count - 1; j++) {
                        s[j] = s[j + 1];
                    }
                    count--;
                    cout << "Student deleted successfully." << endl;
                    break;
                case 4:
                    cout << "Exiting" << endl;
                    return;
                default:
                    cout << "Invalid choice" << endl;
            }
            return;  // exit after handling found student
        }
    }
    // After checking all students, if not found
    if (!found) {
        cout << "Student not found" << endl
             << "Do you want to add this id? (y/n) : ";
        char ch;
        cin >> ch;
        if (ch == 'y' && count < 20) {
            s[count].get();
            count++;
        } else if (count == 20) {
            cout << "Maximum limit reached" << endl;
        } else {
            cout << "Exiting" << endl;
        }
    }
}


int main(){
    student s[20];
    cout << "Welcome to the program" << endl;
    int n, count = 0;
    cout << "Enter the number of students : ";
    cin >> n;
    for(int i = 0; i < n; i++){
        s[i].get();
        count = count + 1;
    }
    int choice;
    cout << endl << "What do you want to do now?" << endl << "1. Search a student detail" << endl << "2. Display student details" << endl << "3. Exit" << endl;
    do{
        cout << "Enter your choice : ";
        cin >> choice;
        switch(choice){
            case 1:
                search(s, count);
                break;
            case 2:
                for(int i = 0; i < count; i++){
                    s[i].display();
                }
                break;
            case 3:
                cout << "Exiting the program" << endl;
                return 0;
            default:
                cout << "Invalid choice" << endl;
        }
    }
    while(choice != 3);
}