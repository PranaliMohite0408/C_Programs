#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int No = 0, Sum =0, Cnt =0;
    printf ("\nEnter Numbers to calculate Their Sum\n(Will Stop Summation After 0/-ve Input)=>");
    
   Up:
       printf("\n\t Enter Number%d",Cnt);
       scanf("%d",&No);
       if(No<=0)
        {
          goto Out;
        }
       Sum = Sum+No;
       Cnt++;
       goto Up;
   Out:
    printf ("\nPres Any Key to get Summation of a Given Number=");
    system ("cls");
    printf ("\nSummation of Given Number=%d",Sum);
 
    printf("\nThanks!!!");
    getch();
    return 0;
}
