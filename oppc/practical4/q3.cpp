#include<iostream>
using namespace std;

class truck;
class car{
    int speed;
    public:
        void get(){
            cout << "Enter the speed of the car : ";
            cin >> speed;
        }
        friend void compare(car, truck);
};

class truck{
    int speed;
    public:
        void get(){
            cout << "Enter the speed of the truck : ";
            cin >> speed;
        }
        friend void compare(car, truck);
};

void compare(car c, truck t){
    if(c.speed > t.speed){
        cout << "Car is faster than truck";
    }else{
        cout << "Truck is faster than car";
    }
}

int main(){
    char con;
    car c1;
    truck t1;
    do{
        c1.get();
        t1.get();
        compare(c1, t1);
        cout << endl << "Do you want to continue? (y/n) : ";
        cin >> con;
    }
    while(con == 'y');
    
    return 0;
}