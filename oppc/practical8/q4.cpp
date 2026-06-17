//Design three classes STUDENT, EXAM and RESULT. The STUDENT class has data members such as rollno, name. create a class EXAM by inheriting the STUDENT class. The EXAM class adds data members representing the marks scored in six subjects. Derive the RESULT from the EXAM class and has its own data members such as total marks, per and grade. Write a program to model this relationship.
#include <iostream>
#include <string>
using namespace std;

class Student{
    protected:
        string name;
        int rollNo;
    public:
        void getdata(){
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter roll no: ";
            cin >> rollNo;
        }
        void putdata(){
            cout << "Name: " << name << "\tRoll No.: " << rollNo << "\t";
        }
};

class Exam : public Student{
    protected:
        int marks[6];
    public:
        void getMarks(){
            getdata();
            cout << "Enter marks for 6 subjects: ";
            for(int i = 0; i < 6; i++){
                cin >> marks[i];
            }
        }
};

class Result : public Exam{
    private:
        int totalMarks;
        float percentage;
        char grade;
    public:
        void calculate(){
            totalMarks = 0;
            for(int i = 0; i < 6; i++){
                totalMarks += marks[i];
            }
            percentage = (float)totalMarks / 6;
            if(percentage >= 90){
                grade = 'A';
            } else if(percentage >= 80){
                grade = 'B';
            } else if(percentage >= 70){
                grade = 'C';
            } else if(percentage >= 60){
                grade = 'D';
            } else {
                grade = 'F';
            }
        }
        void display(){
            putdata();
            cout << "Total Marks: " << totalMarks << "\tPercentage: " << percentage << "\tGrade: " << grade << endl;
        }
};
int main(){
    Result r;
    r.getMarks();
    r.calculate();
    r.display();
    return 0;
}