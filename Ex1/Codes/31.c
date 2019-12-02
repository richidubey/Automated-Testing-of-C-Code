/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
  int year;
    scanf("%d",&year);
   if(year%4==0)//year has to be divisible by 4 for it to be leap year
    { if(year%100!=0)//there is ambiguity only when year is also divisible by 100,otherwise it will be a leap year
        printf("Leap Year");
      else
        {if(year%400==0)
          printf("Leap Year");
         else
          printf("Not Leap Year");
        }
    }
   else
      printf("Not Leap Year");//here curly braces are not needed since there is only 1 statement inside 'if'
    return 0;
}