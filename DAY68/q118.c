#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements (between 0 and %d, one missing):\n", n, n);
    
   
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
   
    int total = n * (n + 1) / 2;
    
    
    int missing = total - sum;
    
    printf("The missing number is: %d\n", missing);
    
    return 0;
}
