#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert entire string to lowercase
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  // Convert uppercase to lowercase
        }
    }

    // Capitalize first character if it's a letter
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 32;  // Convert to uppercase
    }

    // Capitalize letters after '.', '?', or '!'
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '.' || str[i] == '?' || str[i] == '!') {
            j = i + 1;
            while (str[j] == ' ') j++;  // skip spaces
            if (str[j] >= 'a' && str[j] <= 'z') {
                str[j] = str[j] - 32;
            }
        }
    }

    printf("Sentence case: %s", str);
    return 0;
}
