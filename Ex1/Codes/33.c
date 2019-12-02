/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int yearno;//yearno takes the value of the year as input
    scanf("%d", &yearno);
    if(((yearno%4 == 0) && (yearno%100 !=0)) || (yearno%400 == 0)){//Checking if yearno satisfies the conditions for a leap year
        printf("Leap Year");
    }
    else{
        printf("Not Leap Year");
    }
    return 0;
}