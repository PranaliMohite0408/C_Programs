#include<stdio.h>
#include<conio.h>
int main()
{
    int Num=0;

    printf("\n Enter an Integer number=");
    scanf("%d",&Num);

    (Num==0)? printf("\n Given number %d is Neutral",Num):(Num>0)? printf("\n Given number is %d Positive",Num):printf("\n Given number is %d Negative",Num);

    printf("\n\n Thanks");
    getch();
    return 0;
}
