/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int year ;
    
    scanf("%d",&year);
    
    if(year%4==0){
        if(year%100 !=0){
            printf("Leap Year");
        }
        else if(year%100==0 && year%400==0){
            // if year is divisible by 100 , it has to be divisible by                400 to be a leap year .
            printf("Leap Year");
        }
        else{
            printf("Not Leap Year");
        }
        
    }
    else{
        printf("Not Leap Year");
    }
    return 0 ;
}