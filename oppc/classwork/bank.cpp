//Bank database program
// This program creates a bank database that allows the user to add, delete, and modify accounts.
// The user can also display all accounts, search for an account, and sort the accounts by account number.

#include<iostream>
#include<string>
#include<ctime>
using namespace std;
#define MAX 100

int count = 0;
class Account{
    //static int account_counter;
    long int account_number = 0;
    string name;
    float balance;
    string address;
    string phone;
    string email;
    string guarantor_name;
    string guarantor_address;
    string guarantor_phone;
    string guarantor_email;

    public:
        //input of data while opening new accounts
        void get_data(){
            cout << "Enter your name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter your address: ";
            getline(cin, address);
            cout << "Enter your phone number: ";
            getline(cin, phone);
            cout << "Enter your email: ";
            getline(cin, email);
            cout << "Enter your guarantor's name: ";
            getline(cin, guarantor_name);
            cout << "Enter your guarantor's address: ";
            getline(cin, guarantor_address);
            cout << "Enter your guarantor's phone number: ";
            getline(cin, guarantor_phone);
            cout << "Enter your guarantor's email: ";
            getline(cin, guarantor_email);
            cout << "Enter your initial balance: ";
            cin >> balance;
            srand(time(NULL));
            for(int i = 0; i < 10; i++){
                int number = rand() % 10;
                account_number = account_number * 10 + number;
            }
        }
        int get_account_number(){
            return account_number;
        }
        int search_account(Account accounts[], int account_number){
            for(int i = 0; i < count; i++){
                if(accounts[i].account_number == account_number){
                    return i;
                    cout << "Account found!" << endl;
                }
            }
            return -1;
        }
        void display_account(Account accounts[], int index){
            cout << "Account number: " << accounts[index].get_account_number() << endl;
            cout << "Name: " << accounts[index].name << endl;
            cout << "Address: " << accounts[index].address << endl;
            cout << "Phone: " << accounts[index].phone << endl;
            cout << "Email: " << accounts[index].email << endl;
            cout << "Guarantor's name: " << accounts[index].guarantor_name << endl;
            cout << "Guarantor's address: " << accounts[index].guarantor_address << endl;
            cout << "Guarantor's phone: " << accounts[index].guarantor_phone << endl;
            cout << "Guarantor's email: " << accounts[index].guarantor_email << endl;
            cout << "Balance: " << accounts[index].balance << endl;
        }
        void change_details(){
            char detail_choice;
            cout << "Which detail do you want to change (name = n ; address = a ; phone number = p ; email = e): " << endl;
            cin >> detail_choice;
            if(detail_choice == 'n'){
                cout << "Enter your new name: ";
                cin.ignore();
                getline(cin, name);
            }
            else if(detail_choice == 'a'){
                cout << "Enter your new address: ";
                cin.ignore();
                getline(cin, address);
            }
            else if(detail_choice == 'p'){
                cout << "Enter your new phone number: ";
                cin.ignore();
                getline(cin, phone);
            }
            else if(detail_choice == 'e'){
                cout << "Enter your new email: ";
                cin.ignore();
                getline(cin, email);
            }
            else{
                cout << "Invalid input. Please try again." << endl;
            }
            cout << "Details updated successfully!" << endl;
        }
        void withdraw_money(){
            float amount;
            cout << "Enter the amount you want to withdraw: ";
            cin >> amount;
            if(amount > balance){
                cout << "Insufficient balance!" << endl;
            }
            else{
                balance -= amount;
                cout << "Amount withdrawn successfully!" << endl;
            }
        }
        void deposit_money(){
            float amount;
            cout << "Enter the amount you want to deposit: ";
            cin >> amount;
            balance += amount;
            cout << "Amount deposited successfully!" << endl;
        }
};

class employee{

};

int main(){
    Account accounts[MAX];
    char user;
    char continue_program;
    cout << "Welcome to the Bank Database Program!" << endl ;
    do{
        //customer vs employee
        cout << "Are you a costomer (press c) or an employee (press e)? ";
        cin >> user;
        //customer
        if(user == 'c'){
            int choice;
            cout << "Welcome costomer!" << endl;
            do{
                cout << "What would you like to do?" << endl << "1. Open a new account" << endl << "2. Delete your account" << endl << "3. Change your account details" << endl << "4. Withdraw money" << endl << "5. Deposit money" << endl << "6. Display your account details" << endl << "7. Exit" << endl << "Please enter your choice: ";
                cin >> choice;
                if(choice == 1){
                    // new account
                    cout << "Opening a new account..." << endl << "Good Choice!" << endl << "To open a new account, we will need some information from you. So, please read them carefully and answer it" << endl;
                    accounts[count].get_data();
                    cout << "congratulations!! Your account has been created successfully!" << endl << "Your account number is: " << accounts[count].get_account_number() << endl;
                    count++;
                    cout << "do you want to continue? (y/n): ";
                    cin >> continue_program;
                }
                else if(choice == 2){
                    cout << "Deleting your account..." << endl << "We are really sorry to see you go!" << endl;
                    cout << "Please enter your account number: ";
                    int account_number;
                    cin >> account_number;
                    int index = accounts[0].search_account(accounts, account_number);
                    if(index != -1){
                        for(int i = index; i < count - 1; i++){
                            accounts[i] = accounts[i + 1];
                        }
                        count--;
                        cout << "Account deleted successfully!" << endl;
                    }
                    else{
                        cout << "Account not found!" << endl;
                    }
                    cout << "do you want to continue? (y/n): ";
                    cin >> continue_program;
                }
                else if(choice == 3){
                    cout << "Changing your account details..." << endl;
                    cout << "Please enter your account number: ";
                    int account_number;
                    cin >> account_number;
                    char detail_choice;
                    int index = accounts[0].search_account(accounts, account_number);
                    if(index != -1){
                        do{
                            accounts[index].change_details();
                            cout << "do you want to change more details? (y/n): ";
                            cin >> detail_choice;
                        }
                        while(detail_choice == 'y');
                    }
                    else{
                        cout << "Account not found!" << endl;
                    }
                    cout << "do you want to continue? (y/n): ";
                    cin >> continue_program;
                }
                else if(choice == 4){
                    int account_number;
                    cout << "Want to withdraw money..." << endl;
                    cout << "Please enter your account number: ";
                    cin >> account_number;
                    int index = accounts[0].search_account(accounts, account_number);
                    if(index != -1){
                        accounts[index].withdraw_money();
                    }
                    else{
                        cout << "Account not found!" << endl;
                    }
                    cout << "do you want to continue? (y/n): ";
                    cin >> continue_program;
                }
                else if(choice == 5){
                    cout << "Want to deposit money..." << endl;
                    cout << "Please enter your account number: ";
                    int account_number;
                    cin >> account_number;
                    int index = accounts[0].search_account(accounts, account_number);
                    if(index != -1){
                        accounts[index].withdraw_money();
                    }
                    else{
                        cout << "Account not found!" << endl;
                    }
                    cout << "do you want to continue? (y/n): ";
                    cin >> continue_program;
                }
                else if(choice == 6){
                    cout << "Displaying your account details..." << endl;
                    cout << "Please enter your account number: ";
                    int account_number;
                    cin >> account_number;
                    int index = accounts[0].search_account(accounts, account_number);
                    if(index != -1){
                        accounts[0].display_account(accounts, index);
                    }
                    else{
                        cout << "Account not found!" << endl;
                    }
                    cout << "do you want to continue? (y/n): ";
                }
                else if(choice == 7){
                    cout << "Exiting..." << endl;
                }
                else{
                    cout << "Invalid input. Please try again." << endl;
                }
            }
            while(choice != 7 && continue_program == 'y');
        }
        else if(user == 'e'){
            int choice;
            cout << "Welcome employee!" << endl;
            //employee verification
            cout << "Please Enter your verification details: ";
            do{
                cout << "What would you like to do?" << endl << "1. Search for an account" << endl << "2. Display all accounts" << endl << "3. Sort accounts by account number" << endl << "4. Exit" << endl << "Please enter your choice: ";
                cin >> choice;
                if(choice == 1){
                    cout << "Searching for an account..." << endl;
                }
                else if(choice == 2){
                    cout << "Displaying all accounts..." << endl;
                }
                else if(choice == 3){
                    cout << "Sorting accounts by account number..." << endl;
                }
                else if(choice == 4){
                    cout << "Exiting..." << endl;
                }
                else{
                    cout << "Invalid input. Please try again." << endl;
                }
            }
            while(choice != 4);
        }
        else{
            cout << "Invalid input. Please try again." << endl;
            cout << "do you want to continue? (y/n): ";
            cin >> continue_program;
        }
    }while(continue_program == 'y');
   
    return 0;
}