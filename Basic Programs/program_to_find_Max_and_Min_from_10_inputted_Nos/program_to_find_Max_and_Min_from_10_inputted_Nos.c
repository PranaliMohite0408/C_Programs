#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0, Max=0, Min=0, Cnt=0;
    printf ("\nEnter 10Numbers for getting a Maximum & Minimum from it=>");
    for(Cnt=1;Cnt<=10;Cnt++)
    { 
       printf ("\n\tEnter Number %d=",Cnt);
       scanf("%d",&No);
       if(Cnt==1)
        {
           Max=No;
           Min=No;
           continue;
        }
        if(No>Max)
        { 
           Max=No;
        }
       if(No<Min)
       {
          Min=No;
       }
   }  
    printf ("\nPress Any Key To Get Maximum and Minimum from Given Numbers=>");
   getch();
   printf ("\nThe Maximum Number =%d",Max);
   printf ("\nThe Minimum Number =%d",Min);
   printf("\nThanks!!!");
   getch();
   return 0;
}
