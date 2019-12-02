/*compile-errors:e156_271025.c:10:18: warning: expression result unused [-Wunused-value]
    else(a%100==0&&a%400==0);
         ~~~~~~~~^ ~~~~~~~~
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a%4==0&&a%100&&a%400){
    if(a%4==0)
    printf("Leap Year");
    else(a%100==0&&a%400==0);
    printf("");}
    else
    printf("Not Leap Year");
    return 0;
}