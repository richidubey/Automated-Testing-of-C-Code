/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()                    //function declaration
{
    int year;                   //variable declared
    scanf("%d",&year);          //read into year
    if((year%100==0&&year%400==0)||(year%4==0&&year%100!=0))                                                    /*checks the required                                                     condition for leap year*/
     printf("Leap Year");  //print if condition is true   
    else                     //print if condition is false
     printf("Not Leap Year");
    return 0;
}