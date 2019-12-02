/*compile-errors:e156_271047.c:5:11: warning: unused variable 'j' [-Wunused-variable]
    int y,j,k,l;//variable for year
          ^
e156_271047.c:5:13: warning: unused variable 'k' [-Wunused-variable]
    int y,j,k,l;//variable for year
            ^
e156_271047.c:5:15: warning: unused variable 'l' [-Wunused-variable]
    int y,j,k,l;//variable for year
              ^
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{   
    int y,j,k,l;//variable for year
    scanf("%d",&y);//taking entry
        if(y%4==0)//check for leap year
            {  
                if(y%100==0)//check for century leap year
                    {
                        if(y%400==0)//check for centuri leap year
                            {
                                printf("Leap Year");
                            } 
                        else
                            {
                                printf("Not Leap Year");
                            }
                    }
                else//checks  leap year
                    {
                        printf("Leap Year");
                    }
            }
        else//checks for not a leap year
            {
                printf("Not Leap Year");
            }
        
    // Fill this area with your code.
    return 0;
}