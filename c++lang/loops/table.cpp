#include <iostream>
using namespace std;

int main(){
    int num;
    printf("Enter the number whose table you want: ");
    cin >> num;

    for(int i = 1; i <= 10; i++){
        cout << num << " * " << i << " = " << num * i << endl;
    }
}