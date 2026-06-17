// nCr = n! / r! * (n-r)!
// nPr = n! / (n-r)!

#include <iostream>
using namespace std;

int factorial(int);

int main(){
    int a, b;
    cout << "Enter total number of items: ";
    cin >> b;
    cout << "Enter number of items to be selected: ";
    cin >> a;
    int r = factorial(a);
    int n = factorial(b);
    int n_r = factorial(b-a);
    int permutation = n / n_r;
    cout << "Permutation of " << a << " items out of " << b << " items is: " << permutation << endl;
    int combination = n / (n_r * r);
    cout << "Combination of " << a << " items out of " << b << " items is: " << combination << endl;

    return 0;
}

int factorial(int x){
    if(x == 0){
        return 1;
    }
    return x * factorial(x-1); // this is recursion
}
