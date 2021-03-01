///Create,Accept,Display Array Using Loop-with macro,find Count of zero Elements in that Array///

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7
int main()
{

    int Arr[Size]={};
    int i=0;
    int Z_Cnt=0;

    printf("\nEnter Array Elements =>\n\n");

    for(i=0;i<Size;i++)
    {
        printf("\nEnter Element %d => ",i+101);
        scanf("%d",&Arr[i]);
    }
    for(i=0;i<Size;i++)
    {
        printf("\nValue of Element %d=%d",i+101,Arr[i]);
    }

    printf("\n\nPress Any Key to Continue");
    getch();
    system("cls");

    for(i=0;i<Size;i++)
    {
        if(Arr[i] == 0)
        {
            Z_Cnt++;
        }
    }
    }
    printf("\n The Count of Zero Element in Given Array is %d",Z_Cnt);
    printf("\n\nPress any Key to continue");

    getch();
    return 0;
}


