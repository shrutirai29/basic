//Create a class root which will find the root of a quadratic equation, make a member function void calc() which will calculate the root having value of linear coefficient ‘b’ as default argument.
#include <iostream>
#include <cmath> 
using namespace std;

class Root {
    public:
        void calc(float a, float c, float b = 0) {
        cout << "Using coefficients: a = " << a << ", b = " << b << ", c = " << c << endl;

        float D = b * b - 4 * a * c;

        if (D > 0) {
            float root1 = (-b + sqrt(D)) / (2 * a);
            float root2 = (-b - sqrt(D)) / (2 * a);
            cout << "Roots are real and different: " << root1 << " and " << root2 << endl;
        } else if (D == 0) {
            float root = -b / (2 * a);
            cout << "Roots are real and equal: " << root << endl;
        } else {
            cout << "Roots are complex and imaginary." << endl;
        }
    }
};

int main() {
    int a, c; 
    Root r;
    cout << "Enter the coefficient a (non-zero): ";
    cin >> a;
    cout << "Enter the coefficient c: ";
    cin >> c;

    r.calc(a, c);

    return 0;
}
