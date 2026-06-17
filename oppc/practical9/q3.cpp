//develope a class tempelate in c++ to find the maximum and minimum element in an array of various data type. the class should include member functions to compute and return the maximum and minimum values.
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
        t1 max(){
            t1 max = arr[0];
            for(int i=1; i<5; i++){
                if(arr[i] > max){
                    max = arr[i];
                }
            }
            return max;
        }
        t1 min(){
            t1 min = arr[0];
            for(int i=1; i<5; i++){
                if(arr[i] < min){
                    min = arr[i];
                }
            }
            return min;
        }
        void display(){
            cout << "Max = " << max() << endl;
            cout << "Min = " << min() << endl;
        }
};

int main(){
    abc<int> a1;
    cout << "Int section" << endl;
    cout << "----------------" << endl;
    a1.get();
    a1.display();
    cout << endl;
    cout << "Float section" << endl;
    cout << "----------------" << endl;
    abc<float> a2;
    a2.get();
    a2.display();
    cout << endl;
    cout << "Char section" << endl;
    cout << "----------------" << endl;
    abc<char> a3;
    a3.get();
    a3.display();
}
