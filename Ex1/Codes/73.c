/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
/*To determine whether an year is a leap year or not*/
int main()
{
    int y;/*y=year*/
    scanf("%d",&y);
    if (y%100==0)
    {
        if (y%400==0)
        { 
            printf("Leap Year");
        }
        else
        {
            printf("Not Leap Year");
        }
    }
    else
    {
        if (y%4==0)
        {
            printf("Leap Year");
        }
        else 
        {
            printf("Not Leap Year");
        }
    }
    return 0;
}