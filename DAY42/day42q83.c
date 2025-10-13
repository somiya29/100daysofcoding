#include <stdio.h>

int main() {
    char str[100];
    int i = 0, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);  // Read string including spaces

    while(str[i] != '\0') {
        char ch = str[i];

        // Convert uppercase to lowercase for simplicity
        if(ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A');
        }

        // Check if character is a letter
        if((ch >= 'a' && ch <= 'z')) {
            // Check if vowel
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
