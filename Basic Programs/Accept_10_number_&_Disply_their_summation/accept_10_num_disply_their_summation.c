#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int No = 0, Sum =0, Cnt =0;
    printf ("\n Enter a 10  Numbers=>");
    
   for(Cnt=1;Cnt<=10;Cnt++)
    {
       printf("\n\t Enter Number %d",Cnt);
       scanf("%d",&No);
       Sum = Sum+No;
    }
    printf("\nPress Any Key to get Summation of a Given Number=");
    
    system("cls");
    printf("\nSummation of Given Number=%d",Sum);

    printf("\nThanks!!!");
    getch();
    return 0;
}