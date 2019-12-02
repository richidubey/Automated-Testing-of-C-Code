/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int year;   //variable for taking year input
    scanf("%d",&year);
    if(year%4==0)    //checking divisibility by 4
      {
          if(year%100==0)   //checking divisibility by 100 if divisble by 4
            {
                if(year%400==0) //divisibility by 400 if divisible by both 4 and 100
                  printf("Leap Year");
                else
                  printf("Not Leap Year");
            }
          else
            {
                printf("Leap Year"); //if divisible by 4 but not 100
            }
      }
    else
      printf("Not Leap Year");  //if not divisible by 4
    return 0;
}