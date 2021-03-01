///Create,Accept,Display Array Using Loop-with macro,find Sum of Elements in Given Array///

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7
int main()
{

    int Arr[Size]={};
    int i=0, Sum=0;

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
        Sum+=Arr[i];
    }

    printf("\n Summation of All elements of Given Array is %d",Sum);
    printf("\n\nPress any Key to continue");

    getch();
    return 0;
}

