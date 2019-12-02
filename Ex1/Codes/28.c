/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int year;                                    //Variable declaration
    
    scanf("%d",&year);                           //Input from user 
    
        if(year%4==0 && year%100!=0)      //If the year is divisible by 
            printf("Leap Year");          // 4 but not a century year
        
        else if(year%100==0 && year%400==0)  //If the year is div by100
            printf("Leap Year");             //it should be div by 400 
        
        else                         //If the above two conditions dont
            printf("Not Leap Year"); //satisfy it is not a leap year
        
    return 0;
}