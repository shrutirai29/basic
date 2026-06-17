#include<iostream>
using namespace std;
class Shape {
    public:
        virtual void area() = 0; // Pure virtual function
};

class Rectangle : public Shape {
    public:
        void area(){
            cout << "Enter length and breadth of Rectangle: ";
            int a, b;
            cin >> a >> b;
            cout << "Area of Rectangle: " << a * b << endl;
        }
};

class Circle : public Shape {
    public:
        void area(){
            cout << "Enter radius of Circle: ";
            int r;
            cin >> r;
            cout << "Area of Circle: " << 3.14 * r * r << endl;
        }
};

int main(){
    Shape *s;
    Rectangle r1;
    Circle c1;
    s = &c1;
    s->area(); // Calls Circle's area method
    s = &r1;
    s->area(); // Calls Rectangle's area method
    return 0;
}