#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    int count[26] = {0}; // For lowercase letters a-z
    int i;

    // Input two strings
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);

    // If lengths differ, not an anagram
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    // Count frequency of each character
    for (i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    // Check if all counts are zero
    for (i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
