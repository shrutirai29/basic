//Create a class matrix which will calculate the multiplication of two matrices using inline function mult().
#include<iostream>
using namespace std;

class matrix{
    int a[2][2], b[2][2], c[2][2];
    public:
        void get_data(){
            cout << "Enter the first matrix: ";
            for(int i=0; i<2; i++){
                for(int j=0; j<2; j++){
                    cin >> a[i][j];
                }
            }
            cout << "Enter the second matrix: ";
            for(int i=0; i<2; i++){
                for(int j=0; j<2; j++){
                    cin >> b[i][j];
                }
            }
        }
        inline void mult(){
            for(int i=0; i<2; i++){
                for(int j=0; j<2; j++){
                    c[i][j] = 0;
                    for(int k=0; k<2; k++){
                        c[i][j] += a[i][k]*b[k][j];
                    }
                }
            }
            cout << "The product of the two matrices is: " << endl;
            for(int i=0; i<2; i++){
                for(int j=0; j<2; j++){
                    cout << c[i][j] << " ";
                }
                cout << endl;
            }
        }

};

int main(){
    matrix m;
    m.get_data();
    m.mult();

    return 0;
}