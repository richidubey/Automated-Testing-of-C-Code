/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int y;     /*variable declaration*/
    scanf("%d",&y);
    if(y%100==0)
    {
       if(y%400==0)
       {
           printf("Leap Year");
       }else{     /*y%100!=0*/
           printf("Not Leap Year");
       }
    }else{      /*y%100!=0*/
        if(y%4==0){
            printf("Leap Year");
        }else{        /*y%4!=0*/
            printf("Not Leap Year");
        }
    
    }
return 0;}
