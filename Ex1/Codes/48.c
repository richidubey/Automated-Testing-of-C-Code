/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>//first made a flow chart
int main()
{
int a;
    scanf("%d",&a);//input a (leap year)
if(a%100==0) {//check for %100
    if(a%400==0){//if T check for %400
        printf("Leap Year");
    }
    else{//if not 
    printf("Not Leap Year");//direclty print not a leap year
    }
}
else{
    if(a%4==0){//simple leap year
        printf("Leap Year");
    }
    else{// non leap year
        printf("Not Leap Year");//printing "Not a Leap Year"
    }
}
    return 0;
}