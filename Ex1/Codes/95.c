/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int year,rem;   
    scanf("%d",&year);   
    rem=year%4;         
    if(rem==0)   // check divisibility of year by 4
    {
        if((year%100==0)&&(year%400!=0))  /*condition to check whether given year is divisible by 100 AND not divisible by 400*/  
            printf("Not Leap Year");
        else                       
            printf("Leap Year");
    }
    else 
        printf("Not Leap Year");
    return 0;        //to  exit sucessfully out of this  main function
}