#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0,Fact = 0,Temp = 0;
    
    printf("\nEnter Number to calculate it's Factorial=>");
    scanf("%d",&No);
    
    for(Fact=1,Temp=No;Temp>0;Fact*=Temp,Temp--);
     printf("Factorial of Number %d=%d",No, Fact);
     printf("\nThanks!!!");
     getch();
     return 0;
}