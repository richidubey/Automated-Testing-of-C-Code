/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
 int year;
 scanf("%d",&year);
 
  if ( year%400 == 0)
    printf(" Leap Year ");  /*if divisible then leap year */
  else if ( year%100 == 0)  
    printf(" Not Leap Year");/*if divisible by 100 and not 400 then not leap year */
  else if ( year%4 == 0 )
    printf("Leap Year"); /*if divisible by 4 and not by 100 then leap year*/
  else
    printf("Not Leap Year");  /*if not divisible by 4 then not leap year*/
 
    return 0;
}