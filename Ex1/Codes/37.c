/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include<math.h>
int main()
{
 int a;
 scanf("%d",&a);
 if((a%100==0)&&(a%400==0))//reminder of both should be 0
 {
     printf("Leap Year");//february of this year has 29 days 
     }
else if ((a%4==0)&&(a%100!=0)) 
 {
     printf("Leap Year");
     }
 
 else
 {
     printf("Not Leap Year");//february of this year has 28 days 
 }
    return 0;
}