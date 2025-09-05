#include<stdio.h>
int main() {
    int a,b;
    printf("Enter first no.");
    scanf("%d",&a);
    printf("Enter second no.");
    scanf("%d",&b);
    int sum = a+b, product =a*b,difference =a-b;
    printf("sum is %d",sum);
    printf("product is %d",product);
    printf("difference is %d",difference);
    return 0;
}