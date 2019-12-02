/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    
    int a ;
    scanf("%d",&a);//read the year value
    
    if ((a%4==0) && (a%'d'!=0))//condition on 'a'
        
        printf("Leap Year");
    else
        {
            if((a%4==0) && ((a%'d'==0) && (a%400==0)))//condition on a
            printf("Leap Year");
            else
            printf("Not Leap Year");//print the value
        }    
    return 0;
}