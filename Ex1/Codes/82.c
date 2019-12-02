/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int year;                     //variable for the year
    
    scanf("%d",&year);            //input year
    
    if(year%100==0&&year%400==0)  //if cond. leap year divisivle by 400
        printf("Leap Year");      //printing leap year
    
    else if(year%100==0&&year%400!=0) //if cond not divisible by 400
        printf("Not Leap Year");      //printing not leap year
    
    else if(year%4==0)                //if cond year divisible by 4
        printf("Leap Year");          //printing leap year

    else                              //all rest of the cases
        printf("Not Leap Year");      //printing not leap year
    
    return 0;
}