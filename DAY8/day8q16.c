/*Write a program to input three numbers and find the largest among them using if–else.*/


#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any 3 numbers :");
    scanf("%d%d%d",&a,&b,&c);

    if (a>=b && a>=c)
    {
        printf("a is the largest number.");

    }
    else if (b>=a && b>=c)
    {
        printf("b is the largest number.");

    }
    else {
        printf("c is the largest number");

    }
    return 0;
}