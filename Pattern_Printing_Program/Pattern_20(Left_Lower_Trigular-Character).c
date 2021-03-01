#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,c=0;
    char ch = '\0';

    printf("\nEnter value for Pattern");
    scanf("%d",&c);

    printf("\nEnter a Character to be Printed in Lower Triangular Pattern =");
    scanf("%c",&ch);

    printf("\n==========Pattern=========\n\n");

    for(i=1;i<=c;i++)
    {
         for(j=1;j<=c;j++)
         {
             if(i>=j)
             {
                 printf("%c",ch);
             }
             else
             {
                 printf(" ");
             }
         }
         printf("\n");
    }
    printf("\n==========Pattern=========\n\n");

    getch();
    return 0;
}
