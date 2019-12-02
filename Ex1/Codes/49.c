/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{ int y;//y is the year which the user will input
  scanf("%d",&y);//taking year from the user
  if (y%4==0)//Checking divisibility by 4
    {if (((y%100==0)&&(y%400==0))||(y%100!=0))//In case of divisibility by 4,y is a leap year if it is either not divisible by 100 or divisible by both 100 and 400.
       {printf ("Leap Year");}
       else
       {printf ("Not Leap Year");}
    }
    else
       {printf ("Not Leap Year");//divisibility by 4 a necessary condition for a particular year to be leap year.
       }
    return 0;
}