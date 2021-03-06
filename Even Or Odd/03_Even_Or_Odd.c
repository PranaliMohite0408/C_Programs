#include<stdio.h>
#include<conio.h>

int main()
{
    int Num=0;

    printf("\n Enter an Integer number=");
    scanf("%d",&Num);

    (Num==0)? printf("\n Given Number is Neutral"):(Num%2==0)? printf("\n Given Number is Even"):printf("\n Given Number is Odd");

    printf("\n\n Thanks");
    getch();
    return 0;
}
