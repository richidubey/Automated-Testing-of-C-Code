/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int year;
    scanf("%d",&year);
    if (year%4==0){ //checking divisibility by 4
    
        if(year%100==0){ //checking divisibility by 100
        
            if(year%400==0){ //checking divisibility by 400
                printf("Leap Year"); //year divisible by 400 is Leap 
            }
            else{
                printf("Not Leap Year");//year divisible by only 100                                           and not by 400 is not Leap
            }
        }    
        else{
            printf("Leap Year");//year divisible by 4 and not by 100 is                                 Leap
        }    
    }
    else{
        printf("Not Leap Year");//year not divisible by 4 is not Leap
    }
    
    return 0;
}