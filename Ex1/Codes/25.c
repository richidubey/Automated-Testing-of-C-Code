/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    
    int Y;  
    scanf("%d",&Y);  //Y stands for year.
    if(Y%4==0)
    {
        if(Y%100==0)   
        {
            if(Y%400==0)
            {
                printf("Leap Year");
            }
        
            else if(Y%400!=0)
            {
                printf("Not Leap Year");
            }
        }
        else
        printf("Leap Year");
    }
    else    //Not divisible by 4 simply means not a leap year
    {
        printf("Not Leap Year");
    }
    return 0;
}