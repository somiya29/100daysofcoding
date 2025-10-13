/*product of n even numbers*/

#include <stdio.h>
int main()
{
    int n,i,pro;
    printf("enter value of n:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        pro = pro *(2*i);

    }
    printf("product of %d even numbers = %d.",n,pro);
    return 0;
}