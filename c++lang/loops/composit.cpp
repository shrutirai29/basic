#include<iostream>
using namespace std;

int main (){
    int num, factor = 0;
    cout<< "Enter a number: ";
    cin >> num;

    // for(int i = 1; i < num; i++){
    //     if( num % i == 0){
    //         factor ++;
    //     }
    // }
    // cout << "The number of factors of " << num << " is " << factor << endl;
    
    // if( factor !=2){
    //     cout << "So " << num << " is a composite number" << endl;
    // }else{
    //     cout << "So " << num << " is a prime number" << endl;
    // }

    // using boolean
    bool flag = true;
    for(int i = 2; i < num; i++){
        if( num % i == 0){
            flag = false;
            break;
        }
    }

    if(flag == true){
        cout << num << " is a prime number" << endl;
    }else if(num == 1){
        cout << num << " is neither prime nor composite" << endl;
    }else{
        cout << num << " is a composite number" << endl;
    }
}