/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int y;  // variable for storing year to be evaluated as leap year
    scanf("%d",&y);
    if((y%4==0)&&(y%100!=0))
    {
    printf("Leap Year");     
    }
    else
    {
    if((y%100==0)&&(y%400==0))
    {
    printf("Leap Year");
    }
    else
    printf("Not Leap Year");
    }
    return 0;
}