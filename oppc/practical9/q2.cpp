//write a program to perform linear search in the given array for all the basic data types using tempelate. create appropriate function to perform the search operation.
#include<iostream>
using namespace std;
template <class t1>
class abc{
    t1 arr[5];
    public:
        void get(){
            cout << "Enter 5 elements: ";
            for(int i=0; i<5; i++){
                cin >> arr[i];
            }
        }
        void search(t1 key){
            int flag = 0;
            for(int i=0; i<5; i++){
                if(arr[i] == key){
                    cout << "Element found at index " << i << endl;
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                cout << "Element not found" << endl;
            }
        }
};
int main(){
    abc<int> a1;
    cout << "Int section" << endl;
    cout << "----------------" << endl;
    a1.get();
    int key1;
    cout << "Enter element to search: ";
    cin >> key1;
    a1.search(key1);
    cout << endl;
    cout << "Float section" << endl;
    cout << "----------------" << endl;
    abc<float> a2;
    a2.get();
    float key2;
    cout << "Enter element to search: ";
    cin >> key2;
    a2.search(key2);
    cout << endl;
    cout << "Char section" << endl;
    cout << "----------------" << endl;
    abc<char> a3;
    a3.get();
    char key3;
    cout << "Enter element to search: ";
    cin >> key3;
    a3.search(key3);
}