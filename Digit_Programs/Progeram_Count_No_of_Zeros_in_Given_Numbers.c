#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0, Dig=0, Temp=0, ZCnt=0;
    printf("\nEnter Positive Number To Count Zeros in it :");
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
       Temp=Temp/10;
    }

    printf("\nCount of Zeros in Given Number %d is = %d",No,ZCnt);

    printf("\nThanks!!!");
    getch();
    return 0;

}


