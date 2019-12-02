/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
  int year ;
     scanf("%d",&year) ;//input year
  if (year%100 == 0){   //divisible by 100
  
  if (year%400 == 0){   //divisible by 400
     printf("Leap Year");
  } else {              //not divisible by 400  
     printf("Not Leap Year");
  }     
  } else {              //not divisible by  100
  if (year%4 == 0){     //divisible by 4
     printf("Leap Year");
  } else {              //not divisible by 4   
     printf("Not Leap Year");
  }
  }
    return 0;
}