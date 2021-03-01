#include<stdio.h>
#include<conio.h>>
int main()
{
    int No=0,Dig=0,dSum=0,Temp=0;
    printf("\nEnter Positive Number to Calculate its Digit Sum :");
    scanf("%d",&No);

    if(No<0)
    {
        printf("\nInvalid Number");
        return -1;
    }
    for(Temp=No;Temp>0;Temp=Temp/10)
    {
        Dig=Temp%10;
        printf("\n%d+%d=%d",dSum,Dig,(dSum+Dig));
        dSum=dSum+Dig;
    }

    printf("\nSum of Digits in Given Number %d is = %d",No,dSum);
    getch();
    return 0;
}
