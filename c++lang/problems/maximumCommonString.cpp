#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
using namespace std;

int main() {
    string str1, str2;
    printf("Enter first string: ");
    getline(cin, str1);
    printf("Enter second string: ");
    getline(cin, str2);
    int maxLen = 0;
    int start = 0;

    for (int i = 0; i < str1.size(); i++) {
        for (int j = 0; j < str2.size(); j++) {
            int k = 0;
            while ((i + k < str1.size()) && (j + k < str2.size()) && str1[i + k] == str2[j + k]) {
                k++;
            }
            if (k > maxLen) {
                maxLen = k;
                start = i;
            }
        }
    }

    if (maxLen > 0) {
        printf("Longest common substring: ");
        for (int i = start; i < start + maxLen; i++) {
            printf("%c", str1[i]);
        }
        printf("\n");
    } else {
        printf("No common substring found.\n");
    }

    return 0;
}
