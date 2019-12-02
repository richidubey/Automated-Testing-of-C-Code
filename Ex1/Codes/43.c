/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int y;/*y represents the year*/
    scanf("%d",&y);/*& is used to specify the location*/
    if(y%4==0)//y is divisible by 4 
    {
        printf("Leap Year");
    }
    else{
        printf("Not Leap Year");
    }//y is not divisible by 4 
    return 0;
}