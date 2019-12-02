/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int Year;
    scanf("%d",&Year);
    if (((Year%4==0)&&(Year%100!=0))||((Year%400==0)&&(Year%100==0))){
        printf("Leap Year");//year is a leap year
    }
    else
    {
        printf("Not Leap Year");//year is not a leap year
    }
    return 0;
}