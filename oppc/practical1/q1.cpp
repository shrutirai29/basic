//Write a program for sum and average of two numbers.
#include <iostream>
using namespace std;

int main() {
    float num1, num2, sum, average;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    sum = num1 + num2;
    average = sum / 2;
    cout << "Sum of " << num1 << " and " << num2 << " = " << sum << endl;
    cout << "Average of " << num1 << "and" << num2 << " = " << average << endl;
    return 0;
}