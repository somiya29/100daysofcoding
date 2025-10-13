#include <stdio.h>
int main()
{
    int a,b,i;
    printf("enter two numbers a and b :");
    scanf("%d%d",&a,&b);

    printf("hcf is :");

    for (i=1;i<=a && i<=b;i++)
    {
        if (a%i ==0 && b%i ==0)
        {
            printf("%d",i);
        }
    }
return 0;

}