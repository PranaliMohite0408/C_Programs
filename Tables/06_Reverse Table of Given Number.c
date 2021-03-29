#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Cnt =0;
    printf ("\nEnter a Number To Print Table");
   scanf("%d",&No);

    for(Cnt=10;Cnt>=1;Cnt--)
   {
      printf("\n\t %3d*%3d = %d", No,Cnt,(No*Cnt));
   }

    printf("\nThanks!!!");
    getch();
    return 0;
}
