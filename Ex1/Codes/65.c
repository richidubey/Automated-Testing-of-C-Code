/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
  int year;
  scanf("%d",&year);/*To Enter The Year*/
  if(year%4==0)  /* Condition For Checking Leap Year,% for divisibility*/
   {
    if(year%100==0)
    {
      if(year%400==0)
       {
         printf("Leap Year");
       }
      else
       {
         printf("Not Leap Year");
       }
    }
    else printf("Leap Year");
   }
  else printf("Not Leap Year");
    return 0;
}