#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,c=0,Num=15,Temp=5;

    printf("\nEnter value for Pattern");
    scanf("%d",&c);

    Temp=Num;
    printf("\n==========Pattern=========\n\n");

    for(i=1;i<=c;i++)
    {
           Num=Temp;
           for(j=1;j<=c;j++)
           {
                if(i>=j)
                {
                    printf("%-3d",Num);
                    Num = Num+Temp;
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

