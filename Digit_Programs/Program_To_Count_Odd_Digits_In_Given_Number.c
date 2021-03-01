#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0, Dig=0, Temp=0, OCnt=0;
    printf("\nEnter Positive Number To Count Odd Digits in Given Number :");
    scanf("%d",&No);

    Temp =No;

    if(No<0)
    {
        printf("\nInvalid Number");
        return -1;
    }

    while(Temp>0)
    {
       Dig=Temp%10;

       if(Dig%2==1)
       {
           OCnt++;
       }
       Temp=Temp/10;
    }

    printf("\nCount of Odd Digits in Given Number %d is = %d",No,OCnt);

    printf("\nThanks!!!");
    getch();
    return 0;

}
