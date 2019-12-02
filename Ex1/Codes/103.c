/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{ 
//declaration and obtaining value
int yr;                             //yr=input year by user
scanf("%d",&yr);

if(yr%4==0)                         //Leap year is divisible by 4
{   if(yr%100==0){
        if(yr%400==0)               //If year is divisible by 100 then 
            printf("Leap Year");    //it should be divisible by 400 
        else                        //else year is NOT a leap year.
            printf("Not Leap Year");
                 }
    else
        printf("Leap Year");
}
else                        //Year not divisible by 4 is not leap year.
    printf("Not Leap Year");
    return 0;
}