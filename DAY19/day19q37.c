#include <stdio.h>

int main() {
    int num, temp, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Using for loop
    for (temp = num; temp != 0; temp /= 10) {
        sum += temp % 10;  // Add last digit to sum
    }

    printf("Sum of digits of %d is %d\n", num, sum);

    return 0;
}
