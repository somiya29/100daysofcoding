#include <stdio.h>

int main() {
    int n, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n; // store original number

    while (n != 0) {
        remainder = n % 10;                  // get last digit
        reversed = reversed * 10 + remainder; // build reverse
        n = n / 10;                           // remove last digit
    }

    if (original == reversed) {
        printf("%d is a Palindrome number.\n", original);
    } else {
        printf("%d is NOT a Palindrome number.\n", original);
    }

    return 0;
}
