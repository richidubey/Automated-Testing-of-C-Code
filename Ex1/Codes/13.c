/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int year;//represents year entered
    
    scanf("%d",&year);//ENTER A YEAR OF YOUR CHOICE
    
    if(year%4==0)
    {
        if((year%100==0) && (year%400==0))
        {
            printf("Leap Year");
        }
        else if(year%100!=0)
        {
            printf("Leap Year");
        }
        else if((year%100==0) && (year%400!=0))
        {
            printf("Not Leap Year");
        } 
    }
     else 
        {
         printf("Not Leap Year");
         }
    
    return 0;
}