#include<iostream>
using namespace std;

int main(){
    int num, sum = 0;
    int product = 1;
    cout << "Enter a number";
    cin >> num;

    for(int i = 1; i <= num; i++){
        product *= i;
        sum += i;
    }

    cout << "The factorial of the number is " << product << endl;
    cout << "The sum of the numbers from 1 to " << num << " is " << sum << endl;
}