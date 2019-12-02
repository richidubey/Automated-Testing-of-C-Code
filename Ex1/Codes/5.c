/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    if (a%4==0){                //if divisible by 4 it is a leap year except if divisible by 100 also
        if (a%100==0){          //if divisible by 100 check if divisible by 100
            if (a%400==0){      //if divisible by 400 it is a leap year
                printf("Leap Year");
            }else{
                printf("Not Leap Year");
            }
        }else{
            printf("Leap Year");
        }
        
    }else{
        printf("Not Leap Year");
    }    
    return 0;
}