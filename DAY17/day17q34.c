#include <stdio.h>

int main() {
    int n, i, isPrime = 1; // assume number is prime

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0; // 0 and 1 are not prime
    } else {
        for (i = 2; i <= n / 2; i++) { // check divisibility up to n/2
            if (n % i == 0) {
                isPrime = 0; // not prime
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is NOT a prime number.\n", n);
    }

    return 0;
}
