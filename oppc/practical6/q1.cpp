//Create a class book with data members book_id,book_name & publisher_name with functions void get() to take values, and void display() to print the values, use dynamic memory allocation to take input for 5 books and display them.
#include <iostream>
#include <string.h>
using namespace std;

class book{
    int book_id;
    string book_name, pub_name;
    public: 
        void get(){
            cout << "Enter book id, anme and name of the publisher: ";
            cin >> book_id >> book_name >> pub_name;
        }
        void put(){
            cout << "\nBook ID = " << book_id << "\tBook Name = " << book_name << "\tPublisher Name = " << pub_name;
        }
};

int main(){
    book *b = new book[5];
    for(int i = 0; i < 5; i++){
        b[i].get();
    }
    for(int i = 0; i < 5; i++){
        b[i].put();
    }
}