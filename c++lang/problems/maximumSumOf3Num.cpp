#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;

class Max {
    public:
        int sum(const vector<int>& arr, int n) {
            if (n < 3) {
                cout << "Array must contain at least 3 elements." << endl;
                return INT_MIN;
            }
            vector<int> sortedArr = arr; 
            sort(sortedArr.begin(), sortedArr.end());
            int sum = sortedArr[n-1] + sortedArr[n-2] + sortedArr[n-3];
            return sum;
        }
};

int main() {
    Max m1;
    vector<int> arr;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if(n <= 0){
        cout << "Array size must be greater than 0." << endl;
        return 1;
    }

    arr.resize(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int maxSum = m1.sum(arr, n);
    cout << "Maximum sum of any 3 numbers is: " << maxSum << endl; 
    return 0;
}
