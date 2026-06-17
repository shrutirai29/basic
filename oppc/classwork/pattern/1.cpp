// 0
// 1 0
// 0 1 0
// 1 0 1 0
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j < i; j++){
            if((i+j) % 2 != 0){
                cout << "1";
            }else{
                cout << "0";
            }
        }
        cout << "\n";
    }
}