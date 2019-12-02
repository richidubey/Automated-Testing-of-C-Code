/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    // Fill this area with your code.
    int yr,a,b,c;
    scanf("%d",&yr);//input year
    a=yr%100;
    b=yr%400;
    c=yr%4;
    if (a==0){
    if (b==0)
    printf("Leap Year"); //100 year condition
    else 
    printf("Not Leap Year");
    }
    else{
        if(a!=0 && c==0)//normal condition
        printf("Leap Year");
        else
        printf("Not Leap Year");
    }
    return 0;
}