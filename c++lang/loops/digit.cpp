#include<iostream>
using namespace std;

int main(){
    int num, number, sum = 0;
    int product = 1;
    int count = 0;
    int sum_even = 0;
    int reverse = 0;
    cout << "Entr a number";
    cin >> num;
    number = num;

    while(num != 0){
        int x = num % 10;
        sum += x;
        product *= x;
        reverse = reverse * 10 + x;
        num = num / 10;
        count ++;

        if(x % 2 == 0){
            sum_even += x;
        }
    }

    cout << "The number of digits in the number is " << count << endl;
    cout << "And sum of the digits of the number is " << sum << endl;
    cout << "And product of the digits of the number is " << product << endl;
    cout << "And sum of the even digits of the number is " << sum_even << endl;
    cout << "And reverse of the number is " << reverse << endl;

     if(number == reverse){
        cout << "The number is a palindrome" << endl;
    }else{
        cout << "The number is not a palindrome" << endl;
    }
    
    cout << "Sum of number and reverse is " << number + reverse << endl;
}