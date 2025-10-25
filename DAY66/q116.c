#include <stdio.h>

int main() {
    int n, target, i, j, found = 0;

    // Input array size
    scanf("%d", &n);
    int nums[n];

    // Input array elements
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    // Input target value
    scanf("%d", &target);

    // Find two indices such that nums[i] + nums[j] == target
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }

    // If no solution found
    if (!found)
        printf("-1 -1\n");

    return 0;
}
