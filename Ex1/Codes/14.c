/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
     //program to determine whether year is leap year or not
int year;
     scanf("%d",&year);
     //divisibility by 4 is neccessary condition for year to be leap year
if (year%4==0){
    if (year%100==0){
        //special condition if the year is divisible by 100
        if (year%400==0){
            printf("Leap Year");
        } else {
            printf("Not Leap Year");
        }
    }
    else {
        printf("Leap Year");
    }
}
else {
     printf("Not Leap Year");
}
     return 0;
}