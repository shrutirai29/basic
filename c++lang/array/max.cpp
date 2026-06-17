#include<iostream>
using namespace std;
#include <climits>
int main(){
    int x[] = {-1, -2, -3, -4, -5, -88, -7, -8, -9, -11, -12, -34};
    int max = INT16_MIN;
    cout << "Elements of the array are: ";
    for(int i = 0; i < 12; i++){
        cout << x[i] << " ";
        if(max < x[i]){
            max = x[i];
        }
    }
    cout << endl <<"Max of all the elements of array is: " << max;

    return 0;
}