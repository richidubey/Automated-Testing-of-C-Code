/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
//PROGRAM BEGINS
{
    int year;
    int s = 4; //declaration
    scanf("%d", &year);
    if(year/s){
        if((year/100)&(year/400)){
        printf("Leap Year");
    }
}
    else {
        printf("Not Leap Year");
        }

    return 0;
    // PROGRAM ENDS
}