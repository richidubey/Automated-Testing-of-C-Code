/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int y;
    scanf("%d" ,&y);
    // to check whether a given year is leap tear or notleap year is            an year with 366 days rather than 365 days.
    
    if((y%4==0 && y%100!=0) || (y%100==0 && y%400==0))//criteria for leap                                                        year
        printf("Leap Year");     
    else
        printf("Not Leap Year");  
        
    return 0;
}