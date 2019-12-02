/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

 int main()  {
 int y;  /* input variable;y*/
 scanf("%d",&y);
 if(y%4==0){        //y is divisible by 4
     if(y%100==0){   //y is divisible by 100
        if(y%400==0){       //y is divisible by 400
            printf("Leap Year");
        }
         else{              /* y is not divisible by 400*/
            printf("Not Leap Year");
         }
    }else{
        printf("Leap Year");//y is not divisible by
    }
     }
 else   
     printf("Not Leap Year");
    return 0;
}