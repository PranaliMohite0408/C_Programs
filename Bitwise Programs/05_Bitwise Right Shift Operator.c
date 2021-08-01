#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int No=0, Res =0;

    printf("\nEnter a Numbers =>");
    scanf("%d",&No);

    Res = No << 2;

    printf("\n Output of Bitwise Left Shift is => \n\n\n\t %d << 2 = %d",No,Res);

    printf("\n\nThanks!!!");

    getch();
    return 0;
}
