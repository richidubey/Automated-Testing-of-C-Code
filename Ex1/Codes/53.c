/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int main()
{int y;
scanf("%d",&y);
  if (y%4==0)//if divisible by 4 then it may be leap year or may not be
{
   if (y%100==0)// if divisible by 100 then there is chances to be not a leap year
     {if (y%400==0)//if divisible by 400,100 then it is leap year
        printf("Leap Year");
      else//if divisible by 4,100 and not by 400 then it is not leap year
          printf("Not Leap Year");
           }
   else//if divisible by 4 but not by 100 then it is also leap year
      printf("Leap Year");
           }
     else//if not divisible by 4 then it is not leap year 
       printf("Not Leap Year");
return 0;
}