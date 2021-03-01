#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0, Dig=0, Temp=0, RevNum=0;
    printf("\nEnter Positive Number To Check Whether it is Palindrome or Not :");
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

    if(No==RevNum)
    {
        printf("\n As %d==%d",No,RevNum);
        printf("\nGiven Number %d is Palindrome",No);
    }
    else
    {
        printf("\n As %d!=%d",No,RevNum);
        printf("\nGiven Number %d is not Palindrome",No);
    }

    printf("\nThanks!!!");
    getch();
    return 0;

}


