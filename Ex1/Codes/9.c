/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int main(){
    int year;
    scanf ("%d",&year);
    if (year%4==0)/*remainder*/
    {
        if(year%100==0)/*year divisible by 4 is leap  */ 
        {
            if (year%400==0) /*if year divisible by 100 then it should be divisible by 400 for leap year*/
               printf (" Leap Year ") ; 
            else
               printf (" Not Leap Year");
        }
        else
        {
            printf ("Leap Year ");
        }
        
    }
    else
    {
        printf ("Not Leap Year");
        
    }
    
    return 0;
}