#include <stdio.h>

int main()
{
    int num, digit;
    int product = 1;
    int hasOdd = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Using for loop
    for (int temp = num; temp > 0; temp = temp / 10)
    {
        digit = temp % 10;
        if (digit % 2 != 0) // If digit is odd
        {
            product *= digit;
            hasOdd = 1;
        }
    }

    if (hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}
