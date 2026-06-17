//create a class bank having 2 data members amount, balance and having 3 member functions withdraw, deposit, display. create a function void init to enter data.

#include<iostream>
using namespace std;

class bank{
    int amount;
    int balance;
    public:
        void init(){
            cout << "Enter balance: ";
            cin >> balance;
        }
        void withdraw(){
            cout << "Enter amount you want to withdraw: ";
            cin >> amount;
            if(amount > balance){
                cout << "Insufficient balance!" << endl;
            }
            else{
                cout << "Thank You!!";
                balance -= amount;
            }
        }
        void deposit(){
            cout << "Enter amount you want to deposit: ";
            cin >> amount;
            balance += amount;
        }
        void display(){
            cout << "current balance = " << balance;
        }
};

int main(){
    bank b1;
    int n;
    cout << "1. deposit" << endl << "2. withdraw" << endl << "3. display " << endl << "4. exit \n";
    b1.init();
    do{
        cout << "\nwhat do you want to do: ";
        cin >> n;
        switch (n){
            case 1:
                b1.deposit();
                break;
            case 2:
                b1.withdraw();
                break;
            case 3:
                b1.display();
                break;
            case 4:
                cout << "Exiting";
                break;
            default:
                cout << "Invalid input";
        }
    }
    while(n != 4);
}