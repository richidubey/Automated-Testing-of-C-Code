/*execute-result:OK*/
/*compile-errors:e156_271040.c:9:22: warning: '&&' within '||' [-Wlogical-op-parentheses]
        if((y%100==0)&&(y%400==0)||(y%100!=0))/*y divis. by 100 & 400 
           ~~~~~~~~~~^~~~~~~~~~~~~~
e156_271040.c:9:22: note: place parentheses around the '&&' expression to silence this warning
        if((y%100==0)&&(y%400==0)||(y%100!=0))/*y divis. by 100 & 400 
                     ^
           (                     )
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int y;  //y is the year
    scanf("%d",&y);
    if(y%4==0)//divisibility by 4
    {
        if((y%100==0)&&(y%400==0)||(y%100!=0))/*y divis. by 100 & 400 
                                    OR y not divis. by 100_leap year*/
          {
              printf("Leap Year");
          }
        else   //y divis. by 100 but not 400
          {
              printf("Not Leap Year");
          }
    }
    else   //y not divis. by 4
     printf("Not Leap Year");
    return 0;
}