/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    //Program to check whether a year is leap year or not
    
int y;

scanf("%d",&y); 

if(y%4==0) //Leap year is divisible by 4 
 {
    if(y%100==0) 
    {
        if(y%400==0) //If divisible by 100 then also be divisible by400
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