/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int main()
{
    int y;//variable declaration of year
    scanf("%d",&y);//read the value of y
    if(y%4==0)// first condition for leap year 
     {
      printf("Leap Year");
     }
    else
     {
      printf("Not Leap Year");
     }
    if(y%100==0)// second condition leap year or not
        {
         if(y%400==0)
         printf("Leap Year");
         else
         printf("Not Leap Year");
        }
    return 0;
}