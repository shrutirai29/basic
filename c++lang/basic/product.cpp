#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    int product = num1 * num2 * num3;
    cout << "Product of " << num1 << ", " << num2 << " and " << num3 << " is: " << product << endl;
}