#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 1,Fact = 1,Temp = 0;
    
    printf("\nEnter Number to calculate it's Factorial=>");
     scanf("%d",&No);
     Temp=No;
     while(Temp>0)
     {
        Fact=Fact*Temp;
        Temp--;
     }
    
     printf("Factorial of Number %d=%d",No, Fact);
     printf("\nThanks!!!");
     getch();
     return 0;
}