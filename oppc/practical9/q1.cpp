//write a program using a class template to implement bubble sort (or any sorting algorithm) for an array of different basic data types. Allow the user to input elements, perform sorting and display the sorted array.
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
        void sort(){
            t1 temp;
            for(int i=0; i<5; i++){
                for(int j=i+1; j<5; j++){
                    if(arr[i] > arr[j]){
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
        }
        void display(){
            cout << "Sorted array is: ";
            for(int i=0; i<5; i++){
                cout << arr[i] << " ";
            }
        }
};
int main(){
    abc<int> a1;
    cout << "Int section" << endl;
    cout << "----------------" << endl;
    a1.get();
    a1.sort();
    a1.display();
    cout << endl;
    cout << "Float section" << endl;
    cout << "----------------" << endl;
    abc<float> a2;
    a2.get();
    a2.sort();
    a2.display();
    cout << endl;
    cout << "Char section" << endl;
    cout << "----------------" << endl;
    abc<char> a3;
    a3.get();
    a3.sort();
    a3.display();
    cout << endl;
}