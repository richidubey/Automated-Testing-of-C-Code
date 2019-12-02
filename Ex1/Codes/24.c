/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int year;
    scanf("%d",&year); //reading the year from user
    if(year%4==0) //checking if the year is divisible by 4
    {
        if(year%100==0)//checking if the year is divisible by 100
           {
               if(year%400==0) //checking divisibility by 400
                  {
                      printf("Leap Year");
                  }
               else
                  {
                      printf("Not Leap Year");
                  }
           }
        else
          {
              printf("Leap Year");
          }
    }
    else
      {
          printf("Not Leap Year"); 
      }
    return 0;
}