/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
/*A year is either a leap year or not*/
int a;
scanf("%d",&a);
 if(a%4!=0)
 {
    printf("Not Leap Year");
 }
  else 
  {
    if(a%4==0 && a%100!=0)
        printf("Leap Year");
    else
     {
       if(a%100==0 && a%400!=0)
           printf("Not Leap Year");
       else
           printf("Leap Year");
     }
   }
    return 0;
}