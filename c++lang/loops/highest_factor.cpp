#include <iostream>
using namespace std;

int main (){
    int num, factor;
    cout << "Enter a number: ";
    cin >> num;

    for( int i = 1; i < num; i++){
        if( num %  i == 0){
            factor = i;
            cout << factor << " ";
        }
    }

    cout << endl << "The highest factor of " << num << " is " << factor << endl;
}