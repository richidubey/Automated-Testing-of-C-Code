/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int y;
    scanf("%d",&y);
    if(y%100==0)//if y is divisible by 100
    {
        if(y%400==0)/*if y is divisible by 400 and 100, then it is a leap year*/
        {
            printf("Leap Year");
        }
        else{
            printf("Not Leap Year");
        }
    }
        else if(y%4==0)/*if y is divisible by 4 and not by 100, then it  is a leap year*/ 
            {
                printf("Leap Year");
            }
            else{
                printf("Not Leap Year");
        }
        
    return 0;
}