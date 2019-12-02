/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int year;//Initialisation
    scanf("%d",&year);//Input the year
    if(year%100==0)//If year is divisible by 100
    {
        if(year%400==0)
            printf("Leap Year");
        else
            printf("Not Leap Year");
    }
    else//If year is not divisible by 100
    {
        if(year%4==0)
            printf("Leap Year");
        else
            printf("Not Leap Year");
    }
    return 0;
}