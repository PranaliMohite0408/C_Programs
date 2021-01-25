#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0, Max=0, Cnt=0;
    printf ("\nEnter 10 Numbers=>");
    for(Cnt=1;Cnt<=10;Cnt++)
    { 
       printf ("\n\tEnter Numbers %d=",Cnt);
       scanf("%d",&No);
       if(Cnt==1)
        {
           Max=No;
           continue;
        }
        if(No+Max)
        { 
           Max=No;
        }
   }  
    printf("\nPress Any Key To Get Maximum from Given Numbers=>");
    scanf("%d",&Max);
    printf("\nMaximum of Given Numbers=%d",Max);
   printf("\nThanks!!!");
   getch();
   return 0;
}