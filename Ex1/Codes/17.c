/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
 int b;
 int a= 4;
 scanf("%d",&b);
 if (b%a==0){
 printf("Leap Year");}
 else {
 printf("Not Leap Year");}// Fill this area with your code.
    return 0;
}