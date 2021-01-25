#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0, Min=0, Cnt=0;
    printf ("\nEnter 10 Numbers=>");
    for(Cnt=1;Cnt<=10;Cnt++)
    { 
       printf ("\n\tEnter Numbers %d=",Cnt);
       scanf("%d",&No);
       if(Cnt==1)
        {
           Min=No;
           continue;
        }
        if(No<Min)
        { 
           Min=No;
        }
   }  
    printf("\nPress Any Key To Get Minimum  from Given Numbers=>");
    scanf("%d",&Min);
    printf("\nMinimum of Given Numbers=%d",Min);
   printf("\nThanks!!!");
   getch();
   return 0;
}