/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{   
    int y;
    scanf("%d",&y); //Taking input of year.
    if(y%100==0)
    {   if(y%400==0) //Checking divisiblity by 400.
            printf("Leap Year");
        else
            printf("Not Leap Year");
    }
    else
    {   if(y%4==0)
            printf("Leap Year");
        else
            printf("Not Leap Year");
    }
    return 0;
}