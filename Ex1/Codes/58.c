/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int year;//declaration of variable
    scanf("%d",&year);
    if(year%4 == 0){                                    
        if(year%100 ==0){
            if(year%400 == 0)//really a part of defination
                printf("Leap Year");
            else
                printf("Not Leap Year");}
        else
            printf("Leap Year"); 
    }
    else{
        printf("Not Leap Year");
    }
    return 0;
}