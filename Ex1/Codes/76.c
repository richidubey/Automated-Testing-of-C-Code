/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{   int year;                           // year input by user
    scanf("%d",&year);
    if (year%4 != 0){                   // year div. by 4 or not   
        printf ("Not Leap Year"); }
    else {
        if (year%100 != 0){             // year div. by 100 or not
        printf ("Leap Year"); }
        else {
            if (year%400 != 0){         // year div. by 400 or not 
                printf("Not Leap Year"); }
            else{
                printf("Leap Year"); }
        }
    }
    return 0;
}