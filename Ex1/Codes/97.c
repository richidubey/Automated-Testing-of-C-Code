/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    // Fill this area with your code.
    int a;//takes year as input
    scanf("%d",&a);
    
    if(a%100==0){//checks if divisible by hundred or not
        if(a%400==0)//checks divisibility by 400
            printf("Leap Year");
        else
            printf("Not Leap Year");
    }
    else if(a%4==0)//checks divisibility by 4
        printf("Leap Year");
    else
        printf("Not Leap Year");
    return 0;
}