/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int year;                 //initialising variable for year
    scanf("%d",&year);        //user input statement       
    if((year%4==0) && (year%100==0) && (year%400==0))   //checks as per
    printf("Leap Year");                                //given condition
    else if ((year%4==0) && (year%100!=0))
    printf("Leap Year");
    else printf("Not Leap Year");
    return 0;
}