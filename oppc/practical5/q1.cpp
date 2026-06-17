//WAP using ‘class’ with name bank, with functions to input value of amount, withdraw, deposited and display the amount. (amount shall be given using constructor)
#include<iostream>
using namespace std;

class bank{
    int amount, balance;
    public:
        bank(){
            balance = 5000;
        }
        void withdraw(){
            cout << "Enter amount you want to withdraw: ";
            cin >> amount;
            balance -= amount; 
        }
        void deposit(){
            cout << "Enter amount you want to deposit: ";
            cin >> amount;
            balance +=amount;
        }
        void display(){
            cout << "Your current balance is: " << balance;
        }
};

int main(){
    bank b1;
    cout << "Welcome to the bank\n1. Withdraw \n2. Deposit\n3. Display\n4. Exit";
    int n;
    do{
        cout << "\nWhat do you want to do: ";
        cin >> n;
        switch(n){
            case 1:
                b1.withdraw();
                break;
            case 2:
                b1.deposit();
                break;
            case 3:
                b1.display();
                break;
            case 4:
                cout << "Thank you for using: ";
                break;
            default:
                cout << "Invalid choise!!";
        }
    }while(n !=4);
}