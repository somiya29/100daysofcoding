#include <stdio.h>
int main()
{
    int n,i,sum;
    printf("enter value of n:");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        sum = sum + (2*i-1);

    }
    printf("sum is %d",sum);
    return 0;
}