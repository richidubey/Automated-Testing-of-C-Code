/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{int yr;                   
 scanf("%d",&yr);          
 if(yr%4==0){         //if1
   if(yr%100==0){     //if2
     if(yr%400==0)    //if3
       printf("Leap Year");
     else              //else for if3
       printf("Not Leap Year");}
   else                //else for if2
     printf("Leap Year");}
 else                  //else for if1
   printf("Not Leap Year");
 return 0;
}