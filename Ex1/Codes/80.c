/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a;

    scanf("%d",&a);
    
    if(a%4==0)
    {
        if(a%100!=0)
        {
            printf("Leap Year");
        }
        else
        {
            if(a%100==0&&a%400==0)
            {
               printf("Leap Year");
            }
            else
            {
               printf("Not Leap Year");
            }
        }
    }  
    else
    {
        printf("Not Leap Year");
    }
                    
        
    return 0;    
}