#include<iostream>
using namespace std;

void print(int x, int n);
void release(int n);

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    print(1, n); 
    cout << endl;
    release(n);
}

//with extra parameter
void print(int x, int n){
    if(x > n){
        return;
    }
    cout << x <<" ";
    print(x + 1, n);
}

//without extra parameter(perfect)
void release(int n){
    if (n == 0){
        return; //base case
    } else{
        release(n - 1); //call
        cout << n << " "; //work
    }
    
}