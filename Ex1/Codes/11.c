/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if(year%4==0 && year%100!=0)/*for years which are divisible by 4       but not by 100*/ 
    {
        printf("Leap Year");
    }
    else if(year%4==0 && year%100==0)/*years which are both divisible      by 4 and 100*/
    {
        if(year%400==0)//to check if its divisible by 400
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
        printf("Not Leap Year");//if not divisible by 4
    }
    return 0;
}