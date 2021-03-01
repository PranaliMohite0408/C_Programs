#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0, Temp=0,DCnt=0,Dig=0,DSum=0;
    printf("\nEnter Positive Integer Number To Calculate its Digits Sum :");
    scanf("%d",&No);

    if(No<0)
    {
        printf("\nInvalid Number");
        return -1;
    }
    for(Temp=No;Temp>0;DCnt++,Temp/=10);

    if(DCnt==3)
    {
        for(Temp=No;Temp>0;Dig=Temp%10,DSum+=Dig,Temp/=10);

        printf("\nSum of Digits in Given Number %d is=%d",No,DSum);
    }
     else
    {
        printf("\nGiven Number is not 3 Digit Number !!!");
    }

    printf("\nThanks!!!");
    getch();
    return 0;


}
