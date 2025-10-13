/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/


#include <stdio.h>
int main() 
{
    int n,f;   //n = late days, f = fine
    printf("Enter no. of late days:");
    scanf("%d",&n);

    if (n<=5)
    {
        f = n*2;
        printf("fine is %d",f);

    }
    else if (n<=10)
    {
        f = (n-5)*5 + 5*2;
        printf("fine is %d",f);

    }
    else if (n<=30)
    {
        f = (n-10)*6+5*5+n*2;
        printf("fine is %d",f);

    }
    else{
        printf("membership is cancelled");
    }
    return 0;

}