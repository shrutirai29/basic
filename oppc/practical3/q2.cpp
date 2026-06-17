//Create a class time having two data members int hour and int minutes, this class also having function void gettime(), void puttime() & void sum(). Display the sum of time taken input from two different objects of class passing object as an argument to the function.
#include<iostream>
using namespace std;

class Time{
    int hour, minutes;
    public: 
    void gettime(){
        cout << "Hour and minutes  ";
        cin >> hour >> minutes;
    }
    void puttime(){
        cout << "Time you entered is: " << hour << " hours and " << minutes << " minutes";
    }
    void sum(Time t1, Time t2){
        int total_min = (t1.hour * 60 + t1.minutes) + (t2.hour * 60 + t2.minutes);
        hour = total_min /60 ;
        minutes = total_min % 60; 
    }
};

int main(){
    Time t1, t2, t3;
    cout << "Enter 1st time:  ";
    t1.gettime();
    cout << "Enter 2nd time: ";
    t2.gettime();

    t3.sum(t1, t2);

    cout << endl << "1st time : ";
    t1.puttime();
    cout << endl << "2nd time : ";
    t2.puttime();
    cout << endl << "Sum of times : ";
    t3.puttime();

    return 0;
}