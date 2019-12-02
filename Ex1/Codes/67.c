/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);/*input*/
    if(a%100==0)/*divisible by 100*/
    {
        if(a%400==0)/*divisible by 400*/
        {
            printf("Leap Year");
        }
    
    
        else
        {
            printf("Not Leap Year");
        }

    }
    else if(a%4==0)/*divisible by 4*/
    {
        printf("Leap Year");
        
    }
    else
    {
        printf("Not Leap Year");
    }
    

    
    
    return 0;
}