//WAP using class to process Shopping List for a Departmental Store. The list includes details such as the CodeNo and Price of each item and perform the operations like Adding, Deleting Items to the list and Printing the Total value of an Order.
#include <iostream>
using namespace std;

class ShoppingList {
private:
    int code[100];
    float price[100];
    int count = 0;

public:

    void addItem() {
        cout << "Enter item Code: ";
        cin >> code[count];
        cout << "Enter item Price: ";
        cin >> price[count];
        count++;
        cout << "Item added!" << endl;
    }

    void deleteItem() {
        int c;
        cout << "Enter item Code to delete: ";
        cin >> c;
        for (int i = 0; i < count; i++) {
            if (code[i] == c) {
                for (int j = i; j < count - 1; j++) {
                    code[j] = code[j + 1];
                    price[j] = price[j + 1];
                }
                count--;
                cout << "Item deleted!" << endl;
                return;
            }
        }
        cout << "Item not found!" << endl;
    }

    void printTotal() {
        float total = 0;
        for (int i = 0; i < count; i++) {
            total += price[i];
        }
        cout << "Total Price: " << total << endl;
    }

    void displayItems() {
        if (count == 0) {
            cout << "Shopping list is empty!" << endl;
            return;
        }
        cout << "Code\tPrice" << endl;
        for (int i = 0; i < count; i++) {
            cout << code[i] << "\t" << price[i] << endl;
        }
    }
};

int main() {
    ShoppingList list;
    int choice;
    cout << "\n1. Add Item\n2. Delete Item\n3. Display Items\n4. Print Total Price\n5. Exit\n";

    do {
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1){
            list.addItem();
        }else if(choice == 2){
            list.deleteItem();
        }else if(choice == 3){
            list.displayItems();
        }else if(choice == 4){
            list.printTotal();
        }else if(choice == 5){
            cout << "Goodbye!" << endl;
        }else{
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 5);

    return 0;
}
