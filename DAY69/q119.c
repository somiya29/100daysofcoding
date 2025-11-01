#include <stdio.h>

int main() {
    int n, i, num, xor_all = 0, xor_arr = 0;

    printf("Enter n (number of elements): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (numbers between 1 and n-1, with one repeated):\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        xor_arr ^= arr[i];      // XOR of all array elements
    }

    // XOR of all numbers from 1 to n-1
    for (i = 1; i < n; i++) {
        xor_all ^= i;
    }

    // XOR of both gives the repeated number
    int repeated = xor_arr ^ xor_all;

    printf("The repeated element is: %d\n", repeated);

    return 0;
}
