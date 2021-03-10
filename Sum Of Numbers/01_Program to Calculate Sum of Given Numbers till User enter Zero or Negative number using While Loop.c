#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int No = 0, Sum =0, Cnt =0;
    printf ("\nEnter Numbers to calculate Their Sum\n\n(Will Stop Summation After 0/-ve Input)=>");

    while(1)
     {
       printf("\n\t Enter Number%d",Cnt);
       scanf("%d",&No);
       if(No<=0)
        {
          break;
        }
       Sum+=No;
       Cnt++;
     }
    printf("\nPres Any Key to get Summation of a Given Number=");
    system("cls");
    printf("\nSummation of Given Number=%d",Sum);
    scanf("%d",&Sum);
    printf("\nThanks!!!");
    getch();
    return 0;
}
