/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
int year;
scanf("%d",&year); 
    if((year%4)==0){
        if((year%100)==0){
        }
     printf("leap year");   
} else {
   printf("Not Leap Year");
}
    return 0;
}