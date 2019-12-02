/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int year;
    scanf("%d",&year);
    /*determination of leap year*/
    /*first criteria is year divisible by 4 but not by 100 & 400 */
    /*second criteria is when year is divisible by 100 then it also be divisible by 400*/
    if 
    (((year%4==0)&&(year%100!=0)&&(year%400!=0))||((year%100==0)&&(year%400==0))) {printf("Leap Year");}
    else
    {printf("Not Leap Year");}
    return 0;
}