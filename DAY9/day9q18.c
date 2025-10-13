#include <stdio.h>
int main()
{
    int per;
    printf("Enter percentage of the student :");
    scanf("%d",&per);

    if (90<=per<=100)
    {
        printf("grade A");
    }
    else if (60<=per<=69)
    {
        printf("grade D");
    }
    else if (70<=per<=79)
    {
        printf("grade C");
    }
    else if (80<=per<=89)
    {
        printf("grade B");

    }
    else 
    {
        printf("grade F");
    }
    return 0;
}