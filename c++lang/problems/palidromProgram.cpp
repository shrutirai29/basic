#include <iostream>
using namespace std;

int abc(int i, int j, string &s) {
    if (i >= j) return 0;
    if (s[i] == s[j]) {
        return abc(i + 1, j - 1, s);
    }
    return 1 + min(abc(i + 1, j, s), abc(i, j - 1, s));
}

int abc(string &s) {
    int n = s.length();
    return abc(0, n - 1, s);
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << "Minimum deletions to make it a palindrome: " << abc(s);
    return 0;
}