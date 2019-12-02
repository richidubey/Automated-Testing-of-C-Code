/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b; /*a-year,b-remainder, variables declared*/
    scanf ("%d",&a);    /*input of year by user*/
    
    b=(a%4) ;/*operator intorduced for getting remainder*/
    
    if (b==0) { /*condition statement if leap year*/
    printf ("Leap Year");
    }
    else { /* for not a LP*/
        printf ("Not Leap Year");
    
    }
    return 0;
}