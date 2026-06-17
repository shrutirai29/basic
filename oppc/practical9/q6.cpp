//write a program of vector
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> ss;
    vector<int> :: iterator it;
    int choice, item;
    while(1){
        cout <<"\n-------------------------------------------------------\n";
        cout <<"Vector implementation in STL\n";
        cout <<"\n--------------------------------------------------------\n";
        cout << "1. Insert element in the vector\n2. Delete last element of the vector\n3. Size of vector\n4. Display by index\n5. Display by iterator\n6. Clear the vector\n7. Exit\n ";
        do{
            cout << "Enter your choice: ";
            cin >> choice;
            switch(choice){
                case 1:
                    cout << "Enter element to insert: ";
                    cin >> item;
                    ss.push_back(item);
                    cout << "Element inserted successfully" << endl;
                    break;
                case 2:
                    if(ss.empty()){
                        cout << "Vector is empty" << endl;
                    } else {
                        ss.pop_back();
                        cout << "Last element deleted successfully" << endl;
                    }
                    break;
                case 3:
                    cout << "Size of vector is: " << ss.size() << endl;
                    break;
                case 4:
                    cout << "Enter index to display: ";
                    cin >> item;
                    if(item < ss.size()){
                        cout << "Element at index " << item << " is: " << ss[item] << endl;
                    } else {
                        cout << "Index out of range" << endl;
                    }
                    break;
                case 5:
                    it = ss.begin();
                    cout << "Elements in the vector are: ";
                    while(it != ss.end()){
                        cout << *it << "\t";
                        it++;
                    }
                    cout << endl;
                    break;
                case 6:
                    ss.clear();
                    cout << "Vector cleared successfully" << endl;
                    break;
                case 7:
                    exit(0);
                default:
                    cout << "Invalid choice" << endl;
            }
        }while(choice != 7);
    }
    return 0;
}