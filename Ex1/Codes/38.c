/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int main(){
   int year;
   scanf("%d",&year);     //input from the user and put & before                                   variable name
 if((year%100)==0){
     if((year%400)==0){
         printf("Leap Year");
     }
     else{
         printf("Not Leap Year");
     }
 }                       //close the brackets(used for if)
  if((year%100)!=0){
     if((year%4)==0){
         printf("Leap Year");
     }
     else{
         printf("Not Leap Year");
     }
 }                      //close the brackets(used for if)
   return 0;
}