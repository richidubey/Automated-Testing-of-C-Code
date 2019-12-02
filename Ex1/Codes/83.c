/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int y;
    scanf("%d", &y); //Input the year
    if (y % 4 == 0) { //Check divisibility by 4
        if((y % 100 == 0) && (y % 400 != 0)){ //Check if not divisible by 400 but by 100
            printf("Not Leap Year");
        }
        else { //If it satisfies all conditions
            printf("Leap Year");
        }
    }
    else { // Not Divisible by 4
        printf("Not Leap Year");
    }
    return 0;
}