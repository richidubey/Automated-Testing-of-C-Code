/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int y;                /*y is year which is given as input*/
    int a,b,c;
    scanf("%d",&y);
    a=y%4;
    b=y%100;
    c=y%400;
    
    if(a==0)              /*nested if-else*/
    {   if(b==0)
           {if(c==0)
              printf("Leap Year");
            else
              printf("Not Leap Year");
           }
        else
          printf("Leap Year");
    }
    else
      printf("Not Leap Year");
      
    
    return 0;
}