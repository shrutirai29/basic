#include<iostream>
#include<string>
using namespace std;

class Solution {
    public:
    int numberOfSubstrings(string s){
        int n = s.size();
        int substring = (n*(n + 1))/ 2;
    }
};

int main(){
    Solution s1;
    string s,t;
    cout << "Enter a string1: ";
    getline(cin, s);
    cout << "Enter a string2: ";
    getline(cin, t);
    int result1 = s1.numberOfSubstrings(s);
    int result2 = s1.numberOfSubstrings(t);
    if (result1 > result2) {
        cout << "String 1 has more substrings: " << result1 << endl;
    } else if (result1 < result2) {
        cout << "String 2 has more substrings: " << result2 << endl;
    } else {
        cout << "Both strings have the same number of substrings: " << result1 << endl;
    }

}