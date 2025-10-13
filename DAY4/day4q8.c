/*Write a program to find and display the sum of the first n natural numbers.*/

#include <stdio.h>
int main()
{
    int n,sum;  /*n = no. of natural numbers*/
    printf("Enter n :");
    scanf("%d",&n);

    sum = n*(n+1)/2;
    printf("sum is %d",sum);
    return 0;
}