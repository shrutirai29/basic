#include <iostream>
#include <string>
using namespace std;

int wordToNumber(string x) {
    if (x == "zero") return 0;
    else if (x == "one") return 1;
    else if (x == "two") return 2;
    else if (x == "three") return 3;
    else if (x == "four") return 4;
    else if (x == "five") return 5;
    else if (x == "six") return 6;
    else if (x == "seven") return 7;
    else if (x == "eight") return 8;
    else if (x == "nine") return 9;
    else if (x == "ten") return 10;
    else return -1;
}

int main() {
    string input;
    cout << "Enter a number in words (e.g., one, two..., ten): ";
    cin >> input;

    int result = wordToNumber(input);
    if (result != -1) {
        cout << "The number is: " << result << endl;
    } else {
        cout << "Invalid input." << endl;
    }

    return 0;
}
