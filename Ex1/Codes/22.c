/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
   int year;
  scanf("%d", &year);//taking input from user i,e year
  if ( year%400 == 0)//checking whether year is divisible by 400
    printf("Leap Year\n");//if divisible by 400,its a leap year
  else if ( year%100 == 0)//again considering whether it is divisible by 100 and not by 400
    printf("Not Leap Year\n");//avobe case hints on, year not being a leap one
  else if ( year%4 == 0 )//again if it's divisible by 4, its a leap 
    printf("Leap Year\n");//output as leap
  else
    printf("Not Leap Year\n");//not divisible by 4, not a leap
    return 0;
}