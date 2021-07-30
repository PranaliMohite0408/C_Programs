#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int No=0, Res =0;

    printf("\nEnter a Numbers =>");
    scanf("%d",&No);

    Res = ~No;

    printf("\n Output of Bitwise Complement is => ~%d = %d",No,Res);

    printf("\n\nThanks!!!");

    getch();
    return 0;
}
