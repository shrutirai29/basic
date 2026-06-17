//WAP using ‘class’ with name bank, with functions to input value of amount, withdraw, deposited and display the amount.
#include<iostream>
using namespace std;

class bank{
    int balance;
    int amount;

    public:
    void input_amount(){
        cout << "Enter the amount: ";
        cin >> balance;
    }
    void withdraw(){
        cout << "Enter the amount you want to withdraw: ";
        cin >> amount;
        balance -= amount;
    }
    void deposit(){
        cout << "Enter the amount you want to deposit: ";
        cin >> amount;
        balance += amount;
    }
    void display(){
        cout << "Your current balance is: " << balance << endl;
    }
};

int main(){
    int x;
    bank s1;
    cout << "Welcome to the bank!!" << endl << "What do you want to do."<< endl << "Options : " << endl << "1. Input your balance" << endl << "2. Withdraw from your account" << endl << "3. Deposit your money" << endl << "4. Display your current balance" << endl << "5. Exit" << endl;
    do{
        cout << "Enter your choice: ";
        cin >> x;
        if(x == 1){
            s1.input_amount();
        }else if(x == 2){
            s1.withdraw();
        }else if(x == 3){
            s1.deposit();
        }else if(x == 4){
            s1.display();
        }
    }while(x < 5);
    if( x > 5){
        cout << "Invalid input" << endl << "We are ending your session" << endl;
    }
    cout << "Thanks for visiting our bank!!!";
    

    return 0;
}