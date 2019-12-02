/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int year;
    scanf("%d",&year);//accepting input
    if(year%4==0)//checking divisibility by 4
    {/*divisible by 4*/
        if(year%100==0)
        {/*divisible by 100*/
            if(year%400==0)
            {/*divisible by 400*/
                printf("Leap Year");
            }
            else/*not divisible by 400 but by 4,100*/
            {
                printf("Not Leap Year");
            }
        }
        else
        {/*divisible by 4 but not by 100*/
            printf("Leap Year");
        }
    }
    else
    {/*not divisible by 4*/
        printf("Not Leap Year");
    }
    return 0;
}