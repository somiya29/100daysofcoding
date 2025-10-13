#include <stdio.h>

int main() {
    int n, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    // using for loop
    for(; n != 0; n = n / 10) {
        remainder = n % 10;                   // extract last digit
        reversed = reversed * 10 + remainder; // build reversed number
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}
