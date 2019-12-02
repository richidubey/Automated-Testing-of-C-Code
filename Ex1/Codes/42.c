/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int y;//defining year variable 
    scanf("%d",&y);
    if (y%4==0) {
        if (y%100==0){
            if (y%400==0) printf("Leap Year");//checking it's divisiblity
            else printf("Not Leap Year");
        }
         else printf("Leap Year");// negative output of 400 dividing
    }
    
    
    else printf("Not Leap Year");
    return 0;
}