#include <stdio.h>
int main()
{
    float fran,cel;
    printf("enter temperature in celcius");
    scanf("%f", &cel);
    fran = ((cel*1.8)+32);
    printf("temperature is %f",fran);
    return 0;
}