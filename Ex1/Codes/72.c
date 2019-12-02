/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int Y;
    scanf("%d",&Y); 
    if(Y%4==0) // % used for checking  divisiblity
    {
        if(Y%100==0) 
        {   
            if(Y%400==0) // /* checking for  Leap Year */
                printf("Leap Year");
            else
                printf("Not Leap Year"); /* checking for Not Leap Year */
        }
        else
            printf("Leap Year");
    }
    else
        printf("Not Leap Year");
    // Fill this area with your code.
    return 0;
}