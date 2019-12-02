/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{   
    int y;//variable to store year 
    scanf("%d",&y);
    if(y%4==0&&!(y%100==0))/*checking no's divisibe by 4 but not by 100*/
    {
     printf("Leap Year");
    }
    else if(y%400==0)/*checking no's divisible by 400*/
    {
     printf("Leap Year");
    }
    else/*any leftout case is thus of a non leap year*/
    {
     printf("Not Leap Year");
    }
    return 0;
}