#include <stdio.h>

int main() {
    int arr[100], n, i;
    int eve = 0, odd = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            eve++;
        else
            odd++;
    }

    printf("Total even numbers: %d\n", eve);
    printf("Total odd numbers: %d\n", odd);

    return 0;
}
