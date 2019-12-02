/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int x;          //it intakes the year which you want to check
    scanf ("%d",&x);
    if(x%4==0)          //it checks if the year is leap or not because if it is divisible by 4 then it is leap year
    {
            if(x%100==0)    //it checks 2nd condition of leap year
                {
                    if(x%400==0)
                        {printf("Leap Year");}
                    else
                        {printf("Not Leap Year");}
                }
            else
                {printf("Leap Year");}
    }
    else        //if the year is not a leap year then else statement is exicuted
    {
        printf("Not Leap Year");
    }
    return 0;
}