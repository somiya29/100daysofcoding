#include <stdio.h>
int main()
{
    int i,n;
    printf("enter number of elements to print:");
    scanf("%d",&n);
    int arr[i];
    printf("enter %d numbers:",n);
    for(i=0;i<n;i++)
    {
    
        scanf("%d",&arr[i]);
    }
    printf("array elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}