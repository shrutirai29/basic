#include<iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if(marks >= 81 && marks <= 100){
        cout << "very good" << endl;
    }else if(marks >= 61){
        cout << "Good" << endl;
    }else if(marks >= 41){
        cout << "Average" << endl;
    }else if(marks >= 40 && marks <= 0){
        cout << "Fail" << endl;
    }else{
        cout << "Enter valid marks" << endl;
    }

    return 0;
}