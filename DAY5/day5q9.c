#include <stdio.h>
int main()
{
    int p,t;
    float r,ci,si;
    printf("Enter principal amount :");
    printf("Enter rate of interest :");
    printf("Enter time :");
    scanf("%d%d%f",&p,&t,&r);
    si = p*r*t/100;
    ci = ((p* (1+ r/100)t) - p);

    printf("Simple interest is %f\n",si);
    printf("coumpound interest is %f",ci);
    return 0;
    
}