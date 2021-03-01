#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0, Dig=0, Temp=0, ECnt=0;
    printf("\nEnter Positive Number To Count Even Digits in Given Number :");
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

       if(Dig%2==0&&Dig!=0)
       {
           ECnt++;
       }
       Temp=Temp/10;
    }

    printf("\nCount of Even Digits in Given Number %d is = %d",No,ECnt);

    printf("\nThanks!!!");
    getch();
    return 0;

}
