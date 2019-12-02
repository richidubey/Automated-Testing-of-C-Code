/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int year; //variable to store the input "year"
    scanf("%d",&year); //value taken from user
    if(year%4==0) //check wether divisible by 4
    {
        if(year%100==0) //check if divisible by 100
        {
            if(year%400==0) //check if divisible by 400
                printf("Leap Year");
            else
                printf("Not Leap Year");
        }
        else
            printf("Leap Year");
    }
    else
        printf("Not Leap Year");
    return 0;
}