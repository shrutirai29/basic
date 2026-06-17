//implement queue using STL
#include <iostream>
#include <queue>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
    queue<int> q;
    int choice, item;
    
    cout << "\n-------------------------------------------------------\n";
    cout << "Queue implementation in STL\n";
    cout << "\n--------------------------------------------------------\n";
    cout << "1. Insert element in the queue\n2. Delete first element of the queue\n3. Size of queue\n4. Display front element\n5. Display back element\n6. Clear the queue\n7. Exit\n ";
    do{
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                cout << "Enter element to insert: ";
                cin >> item;
                q.push(item);
                cout << "Element inserted successfully" << endl;
                break;
            case 2:
                if(q.empty()){
                    cout << "Queue is empty" << endl;
                } else {
                    q.pop();
                    cout << "First element deleted successfully" << endl;
                }
                break;
            case 3:
                cout << "Size of queue is: " << q.size() << endl;
                break;
            case 4:
                if(q.empty()){
                    cout << "Queue is empty" << endl;
                } else {
                    cout << "Front element is: " << q.front() << endl;
                }
                break;
            case 5:
                if(q.empty()){
                    cout << "Queue is empty" << endl;
                } else {
                    cout << "Back element is: " << q.back() << endl;
                }
                break;
            case 6:
                while(!q.empty()){
                    q.pop();
                }
                cout << "Queue cleared successfully" << endl;
                break;
            case 7:
                exit(0);
            default:
                cout << "Invalid choice" << endl;
        }
    }while(choice != 7);
}