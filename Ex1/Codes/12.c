/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
  int x; //variable for input
  scanf("%d",&x); //take input from the user
  if (x%4==0)  //calculation for leap year
  {
      if (x%100==0) //condition for leap year
      {
          if (x%400==0) //condition for leap year
          {
              printf("Leap Year"); //display the output on the console
          }
          else 
          { 
              printf("Not Leap Year"); //display the output on the console
          }
          
      }
      else 
      {
          printf("Leap Year"); //display the output on the console
      }
  }
  else
      { 
          printf("Not Leap Year"); //display the output on the console
      }
      
      
    return 0;
}