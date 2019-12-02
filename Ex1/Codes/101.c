/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
int a; //assigning for the input//
scanf ("%d", &a); //taking input//
if (a%4==0) //Applying conditions for Leap Year.//
 {if (a%100==0 && a%400==0)
{printf ("Leap Year");}
else if(a%4==0 && a%100!=0)
{printf ("Leap Year");}
else if (a%100==0 && a%400!=0)
{printf ("Not Leap Year");}
 }
else {printf ("Not Leap Year"); }
return 0;
}