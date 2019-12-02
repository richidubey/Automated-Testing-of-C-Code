/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
int y; //box for year
scanf("%d",&y);

    if ((y%4==0)&&(y%100!=0)) //year divisible by 4 but not by 100
{    printf("Leap Year");
} 
   else 
    if ((y%100==0)&&(y%400==0))
    {printf("Leap Year"); //divisible by 100 and 400
    }
    else {
    printf (" Not Leap Year");
}

    return 0;
}