/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    if(((!(t%4))&&(t%100))||(!(t%400)))
        {printf("Leap Year");}
    else
        {printf("Not Leap Year");}
    return 0;
}