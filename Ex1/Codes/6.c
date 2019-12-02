/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int year;
    scanf("%d",&year);       // Taking the year as input 
    if((year%100==0 && year%400==0) || (year%100!=0 && year%4==0)) 
                             // Checking if Leap Year or Not
    {
        printf("Leap Year");     
    }
    else
    {
        printf("Not Leap Year");
    }
    return 0;
}