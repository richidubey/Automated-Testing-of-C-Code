/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{ 
    int A;
    scanf("%d",&A);
    
    if(A%4==0)
    {
       if(A%100==0) 
       {
            if(A%400==0)
                printf("Leap Year");
            else
                printf("Not Leap Year");
       }
       else
            printf("Leap Year");

    }
    else if (A%4!=0)
    {
        printf("Not Leap Year");   
    }
    return 0;
}