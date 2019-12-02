/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    
int year;
scanf("%d",&year);//to take the value of year from user

if(year%4==0)//condition for leap year
{
    if((year%100==0)&&(year%400==0))
    {
        printf("Leap Year");
    }
    
    else if((year%100==0)&&(year%400!=0))
    {
        printf("Not Leap Year");
    }
    
    else
    printf("Leap Year");
}

else
{
printf("Not Leap Year");
}

    return 0;
}