#include<stdio.h>
#include<conio.h>
int main()
{
    int Num1=0, Num2=0;
    Grate:
    printf("\nEnter 2 Integer Numbers");
    scanf("%d%d",&Num1,&Num2);

    (Num1==Num2)? printf("\nBoth Given Numbers are Equal"):(Num1>Num2)? printf("\nNumber %d is Maximum",Num1) : printf("\nNumber %d is Maximum",Num2);

    printf("\nThanks!!!");
    getch();
    return 0;
}


