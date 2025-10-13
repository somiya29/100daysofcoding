/*write a program to input time in seconds and convert it to hours:minutes:seconds format.*/

#include <stdio.h>
int main()
{
    int hr,sec,min,tsec;   //tsec = time in seconds given by user.
    printf("Enter time in seconds :");
    scanf("%d",&tsec);

    hr = tsec/3600; //1 hr = 3600 sec
    tsec = tsec - hr*3600;
    min = tsec/60; //1min = 60 sec
    tsec = tsec - min*60;
    sec = tsec;
     
    printf("time is %d hours %d minutes %d seconds",hr,min,sec);
    return 0;

}