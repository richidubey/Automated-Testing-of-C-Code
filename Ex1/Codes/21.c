/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int n;
    int a;
    int b;
    int c;
    scanf("%d",&n);
    a=n%4;
    b=n%100;
    c=n%400;
    if (a==0)
    {
        if(b==0)
        {if(c==0)
    printf("Leap Year");
    else
    printf("Not Leap Year");
}   
else
printf("Leap Year");
}
else
printf("Not Leap Year");
return 0;
}