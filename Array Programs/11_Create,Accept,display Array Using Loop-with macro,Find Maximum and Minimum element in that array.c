///Create,Accept,Display Array Using Loop-with macro,find Minimum & Minimum element in that Array///
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7
int main()
{
    int Arr[Size]={};
    int i=0,Max=0,Min=0;

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
            Max = Arr[i];
            Min = Arr[i];
            continue;
        }
         if(Arr[i]>Max)
         {
             Max = Arr[i];
         }


        if(Arr[i]<Min)
        {
            Min = Arr[i];
        }
    }

    printf("\nThe Maximum Element in Given Array is %d",Max);
    printf("\nThe Minimum Element in Given Array is %d",Min);
    printf("\n\nPress any Key to continue");

    getch();
    return 0;
}

