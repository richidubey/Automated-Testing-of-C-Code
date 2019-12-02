/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int year;
    scanf ("%d",&year);//input year
    
    if ((year%4==0 && year%'d'!=0)||(year%400==0))
    printf("Leap Year");
    else
    printf("Not Leap Year");
    /*leap years include multiples of 400 and years divisible by 4 but       not 100*/ 
   
    return 0;
}