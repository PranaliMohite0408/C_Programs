#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int No1=0, No2=0, Res =0;

    printf("\nEnter a Two Numbers =>");
    scanf("%d%d",&No1,&No2);

    Res = No1 & No2;

    printf("\n Output of Bitwise AND between => %d & %d = %d",No1,No2,Res);

    printf("\n\nThanks!!!");

    getch();
    return 0;
}

