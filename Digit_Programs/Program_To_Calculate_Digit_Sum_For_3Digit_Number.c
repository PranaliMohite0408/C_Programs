#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0, Dig=0, dSum=0, Temp=0, dCnt=0;
    printf("\nEnter Positive Integer Number To Calculate its Digits Sum :");
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
    if(dCnt==3)
    {
        Temp=No;

        while(Temp>0)
        {
            Dig=Temp%10;
            dSum=dSum+Dig;
            Temp=Temp/10;
        }
        printf("\nSum of Digits in Given Number %d is=%d",No,dSum);
    }
    else
    {
        printf("\nGiven Number is not 3 Digit Number !!!");
    }

    printf("\nThanks!!!");
    getch();
    return 0;

}

