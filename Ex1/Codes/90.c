/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int y;                         //declaring variable to store year
    scanf("%d",&y);                /* taking input*/
    
    if (y%100==0){                 //condition for divisibility by 100
        if (y%400==0)              //cond. for div. by 400
            printf("Leap Year");    // dividible by 100 & 400
        else
            printf("Not Leap Year");     // by 100 but not 400
        }
        
    else{
            if (y%4==0)                   //cond. for div. by 4
                printf("Leap Year");      /*by 4 but not 100 */
            else
                printf("Not Leap Year");   /* neither 4 nor 100*/
        }
        
        
    
    return 0;
}