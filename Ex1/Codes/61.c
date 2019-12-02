/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{

   int y;
   
   scanf("%d",&y); //stores the year
   
 {  if(y%4==0) //divisiblity by 4
   
    {   if(y%100==0)   //divisiblity by 100
        
          {if(y%400==0)    //divisiblity by 400
        
          printf("Leap Year");
        
          else printf("Not Leap Year");}
        
       else printf("Leap Year");   }
    
    else printf("Not Leap Year");  }
       
       
       
       return 0;
}