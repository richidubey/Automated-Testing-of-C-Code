/*compile-errors:e156_271026.c:9:20: warning: '&&' within '||' [-Wlogical-op-parentheses]
    if((year%4)==0 && (year%400)==0 || ((year%100)!=0 && ((year%4)==0)))
       ~~~~~~~~~~~~^~~~~~~~~~~~~~~~ ~~
e156_271026.c:9:20: note: place parentheses around the '&&' expression to silence this warning
    if((year%4)==0 && (year%400)==0 || ((year%100)!=0 && ((year%4)==0)))
                   ^
       (                           )
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int year;//Declearing an Integer Variable to Store Year
    scanf("%d",&year);//Reads The year from the user
    
    //Checks the Condition for Leap Year
    if((year%4)==0 && (year%400)==0 || ((year%100)!=0 && ((year%4)==0)))
        printf("Leap Year");
    else
        printf("Not Leap Year");
        
    return 0;
    
}