#include<stdio.h>
int main() {
    int l,b;
    printf("enter length of rectangle");
    scanf("%d",&l);
    printf("enter breadth of rectangle");
    scanf("%d",&b);
   int area = l*b, perimeter = 2*l+2*b;
    printf("area is %d\n",area);
    printf("perimeter is %d",perimeter);
    return 0;
}