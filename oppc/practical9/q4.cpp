// implement a class template for a matrix, allowing matrix addition of two matrices of any numbeic data type (e.g., int, float, double). inlude input, display and add functions.
#include <iostream>
using namespace std;
template <class t1>
class matrix{
    t1 a[10][10];
    int r, c;
    public:
        void get(){
            cout << "Enter number of rows and columns: ";
            cin >> r >> c;
            cout << "Enter elements of matrix: " << endl;
            for(int i=0; i<r; i++){
                for(int j=0; j<c; j++){
                    cin >> a[i][j];
                }
            }
        }
        void display(){
            for(int i=0; i<r; i++){
                for(int j=0; j<c; j++){
                    cout << a[i][j] << "\t";
                }
                cout << endl;
            }
        }
        void add(matrix<t1> m1, matrix<t1> m2){
            if(m1.r == m2.r && m1.c == m2.c){
                r = m1.r;
                c = m1.c;
                for(int i=0; i<r; i++){
                    for(int j=0; j<c; j++){
                        a[i][j] = m1.a[i][j] + m2.a[i][j];
                    }
                }
            } else {
                cout << "Matrices cannot be added" << endl;
            }
        }  
};

int main(){
    matrix<int> m1, m2, m3;
    cout << "Matrix 1" << endl;
    m1.get();
    cout << "Matrix 2" << endl;
    m2.get();
    cout << "Matrix 1:" << endl;
    m1.display();
    cout << "Matrix 2:" << endl;
    m2.display();
    cout << "Sum of matrices:" << endl;
    m3.add(m1, m2);
    m3.display();
}