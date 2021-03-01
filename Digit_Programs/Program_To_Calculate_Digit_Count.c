#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0, Dig=0, dCnt=0, Temp=0;
    printf("\nEnter Positive Number To Calculate its Digit Count");
    scanf("%d",&No);

    Temp =No;

    if(No<0)
    {
        printf("\nInvalid Number");
        return -1;
    }
    while(Temp>0)
    {
        dCnt++;
        Temp=Temp/10;
    }

    printf("\nCount of Digits in Given Number %d is = %d",No,dCnt);
    printf("\nThanks!!!");
    getch();
    return 0;

}
