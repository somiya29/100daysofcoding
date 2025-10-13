/*Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.*/

#include <stdio.h>
int main()
{
    int n;
    printf("enter an integer :");
    scanf("%d",&n);

    if (n>0)
    {
        printf("integer is positive");
        
    }
    else 
    {
        if(n<0)
        {
            printf("integer is negative");
        }
        if (n==0)
     {
       printf("integer is zero");

    }
}
return 0;
}