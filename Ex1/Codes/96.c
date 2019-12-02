/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
    /* prg to determine leap year */
int main()
{
    int year;   /* deckaration of variable/s */
    scanf("%d", &year);    /* input year */
    if(year%4||year<0)  /* testing non negativity condition*/
    {
        printf("Not Leap Year");
    }
    else    /* testing condition for leap year*/
    {
        if(year%100)
        {
            printf("Leap Year");
        }
        else
        {
            if(year%400)
            {
                printf("Not Leap Year");
            }
            else
            {
                printf("Leap Year");
            }
        }
    }
    return 0;
}