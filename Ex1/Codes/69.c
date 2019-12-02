/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
  int year;
  scanf("%d",&year);//Taking the input
  if(year%4==0)//Checking for the leap year condition
  {
      if(year%100==0)
      {
        if(year%400==0)//extra check for the leap year
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