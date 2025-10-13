/*Write a program to swap two numbers without using a third variable.*/

#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers :");
    scanf("%d,%d",&a,&b);

    printf("before swapping, a = %d,b = %d",a,b);

    /* after swapping*/
    
    printf("Now, a = %d,b=%d",b,a);
return 0;
}