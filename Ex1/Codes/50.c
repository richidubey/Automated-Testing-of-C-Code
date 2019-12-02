/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
        int year;
        scanf ("%d",&year);
        if (year%4==0 && year%100!=0)//initialising if condition for a                                        leap year not divisible by 100
        {
            printf ("Leap Year");
              
        }
        else 
          
        if (year%100==0 && year%400==0)//initialising if condition for                                         leap year divisible by 100
        {
            printf ("Leap Year");
        }
        else//not a leap year if dosen't satisfy above condition
        {
            printf ("Not Leap Year");
        }
          
    return 0;
}