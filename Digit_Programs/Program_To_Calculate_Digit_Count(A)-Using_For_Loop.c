#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0,Dig=0,dCnt=0,Temp=0;
    printf("\nEnter a Positive Number to Calculate Digit Count :");
    scanf("%d",&No);

    if(No<0)
    {
        printf("\nInvalid Number");
        return -1;
    }

    for(Temp=No;Temp>0;Temp/=10)
    {
        dCnt++;
    }

    printf("\nCount of Digits in Given Number %d is = %d",No,dCnt);
    printf("\nThanks!!!");
    getch();
    return 0;

}
