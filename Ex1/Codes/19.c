/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int year; 
    scanf("%d", &year);         /*input year*/
    if (year%4!=0) {            /*not divisible by 4*/
        printf("Not Leap Year");
    } else if (year%100!=0) {   /*not divisible by 100*/
        printf("Leap Year");
    } else if (year%400!=0) {   /*not divisible by 400*/
        printf("Not Leap Year");
    } else {                    /*divisible by 4,100,400*/
        printf("Leap Year");
    }
    return 0;
}