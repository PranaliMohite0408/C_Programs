#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0, Dig=0, Temp=0, RevNum=0;
    printf("\nEnter Positive Number To Get its Reverse Number :");
    scanf("%d",&No);

    Temp =No;

    if(No<0)
    {
        printf("Invalid Number");
        return -1;
    }

    while(Temp>0)
    {
        RevNum=(RevNum*10)+(Temp%10);
        Temp/=10;
    }

    printf("\nReverse Of Given Number %d is = %d",No,RevNum);

    printf("\nThanks!!!");
    getch();
    return 0;

}

