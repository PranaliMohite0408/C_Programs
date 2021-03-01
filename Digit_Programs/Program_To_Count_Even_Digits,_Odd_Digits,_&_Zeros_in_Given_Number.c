#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0, ZCnt=0, OCnt=0, ECnt=0, Temp=0, Dig=0;
    printf("\nEnter Positive Number To Count Even Odd and Zero Digits in it :");
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

       if(Dig==0)
       {
           ZCnt++;
       }
       else if(Dig%2==0)
       {
           ECnt++;
       }
       else
       {
           OCnt++;
       }

       Temp=Temp/10;
    }

    printf("\nCount of Zeros in Given Number %d is=%d",No,ZCnt);
    printf("\nCount of Even Digits in Given Number %d is=%d",No,ECnt);
    printf("\nCount of Odd Digits in Givne Number %d is=%d",No,OCnt);

    printf("\nThanks!!!");
    getch();
    return 0;

}

