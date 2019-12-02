/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int n;  /*input by the user*/
    scanf("%d",&n);
    if (n%4==0)
    {  if (n%100==0)
       {  if (n%400==0)
          {  printf("Leap Year");
          }
          else
          {  printf("Not Leap Year");
          }
       }
       else
       {    printf("Leap Year");
       } 
    }
      else
      {   printf("Not Leap Year");
      }
       
    return 0;
}