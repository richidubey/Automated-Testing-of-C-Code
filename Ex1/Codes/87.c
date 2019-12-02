/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int y,k,g,h;       // years and leap year determiner variable
    scanf("%d",&y);    // entering year
    k=y%4;                // divisibility test for leap years
    g=y%100;
    h=y%400;
    if(k==0)              // condition satisfy for leap year
    {
        printf("Leap Year");
    }
    else
    {
        if(g==0)
        {
            printf("Leap Year");
        }
        else
        {
            if(h==0)
            {
                printf("Leap Year");
            }
            else
            {
            printf("Not Leap Year");    
            }
        }
    }
    return 0;
}