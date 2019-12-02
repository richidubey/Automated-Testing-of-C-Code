/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int y;
    scanf("%d",&y);//TAKING INPUT FROM USER
    if(y%4==0){
      if((y%100==0 && y%400==0) ||y%100!=0)//DIVISIBILITY BY 100 & 400 OR                                              NOT DIVISIBLE BY 100
      printf("Leap Year");
      else 
      printf("Not Leap Year");
      }
    else
    printf("Not Leap Year");
    return 0;
}