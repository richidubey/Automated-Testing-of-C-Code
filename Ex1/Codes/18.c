/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
int year;           
    
int l;                    //defined integer l.
    
scanf("%d",&year);        //input.  
    
l=(year%4);               //expression.
    
if (l==0) {     
    printf("Leap Year");  //if remainder=0.
}
else {
    printf("Not Leap Year");//if remainder = 1,2,3.
}     

    return 0;
}