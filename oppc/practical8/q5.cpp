//Create a base class called SHAPE. Use this class to store two double type values. Derive two specific classes called TRIANGLE and RECTANGLE from the base class. Add to the base class, a member function getdata to initialize base class data members and another member function display to compute and display the area of figures. Make display a virtual function and redefine this function in the derived classes to suit their requirements. Using these three classes design a program that will accept driven of a TRINGLE or RECTANGLE interactively and display the area.
#include <iostream>
using namespace std;

class Shape {
    protected:
        double length, breadth;
    public:
        void getdata() {
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter breadth: ";
            cin >> breadth;
        }
        virtual void display() = 0; // Pure virtual function
};

class Triangle : public Shape {
    public:
        void display() {
            double area = 0.5 * length * breadth;
            cout << "Area of Triangle: " << area << endl;
        }
};

class Rectangle : public Shape {
    public:
        void display() {
            double area = length * breadth;
            cout << "Area of Rectangle: " << area << endl;
        }
};

int main() {
    Shape* s1;
    int choice;
    
    cout << "Choose shape type:\n1. Triangle\n2. Rectangle\nEnter choice: ";
    cin >> choice;
    
    if (choice == 1) {
        s1 = new Triangle();
    } else if (choice == 2) {
        s1 = new Rectangle();
    } else {
        cout << "Invalid choice!" << endl;
        return 0;
    }
    
    s1->getdata();
    s1->display();
    
    delete s1;
    return 0;
}