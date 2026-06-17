#include <stdio.h>
#include <string.h>

#define ALPHABET_SIZE 26

int min_cost_to_convert(char *s, char *r, int n) {
    int freq_s[ALPHABET_SIZE] = {0};
    int freq_r[ALPHABET_SIZE] = {0};
    
    // Count the frequency of characters in s and r
    for (int i = 0; i < n; i++) {
        freq_s[s[i] - 'a']++;
        freq_r[r[i] - 'a']++;
    }
    
    // Check if transformation is possible
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (freq_s[i] < freq_r[i]) {
            return -1; // Not enough characters to transform
        }
    }
    
    // Count misplaced characters
    int misplaced = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] != r[i]) {
            misplaced++;
        }
    }
    
    // Since type 0 swaps can arrange the characters freely,
    // the minimum cost is simply the number of misplaced characters.
    return misplaced;
}

int main() {
    char s[1001], r[1001];
    scanf("%s %s", s, r);
    int n = strlen(s);
    
    int result = min_cost_to_convert(s, r, n);
    printf("%d\n", result);
    
    return 0;
}
