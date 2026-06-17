#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int y;
    char* arr[5] = {"hello", "world", "this", "is", "test"};
    char str[20];
    cout << "Enter string to search: ";
    cin >> str;
    for(int i=0; i<5; i++){
        if(strcmp(arr[i], str) == 0){
            y = 1;
            break;
        }
    }

    if(y != 1){
        cout << "String not found" << endl;
    }else{
        cout << "String found" << endl;
    }
}