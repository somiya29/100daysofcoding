#include<stdio.h>
int main() {
    int r;
    printf("enter radius of circle");
    scanf("%d",&r);
    int area = 3.14*r*r, circumference = 2*3.14*r;
    printf("area is %d\n",area);
    printf("circumference is %d\n",circumference);
    return 0;
}