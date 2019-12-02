/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a;//year
    scanf("%d",&a);//get values from user
    if(a%100==0 & a%400==0){
    printf("Leap Year");  //if year is divisible by 100 also divisible by 4 then it is leap year
    }
    else if(a%100==0 & a%400!=0){
        printf("Not Leap Year");//if year is divisible by 100 and not divisible by 400 then not a leap year
    }
    else if(a%100!=0 & a%4==0){
        printf("Leap Year");//if year is not divisible by 100 and divisible by 4 then it is leap year
    }
    else if(a%100!=0 & a%4!=0){
        printf("Not Leap Year");//if a is not divisible by 100 also not divisible by 100 then it is not leap year
    }
    return 0;
}