///Create,Accept,Display Array Using Loop-with macro,find Count of Given Element in that Array///

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7
int main()
{

    int Arr[Size]={};
    int i=0;
    int Src_Ele =0,Ele_Cnt=0;

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

    printf("\nEnter Element to Search in Array");
    scanf("%d",&Src_Ele);

    for(i=0;i<Size;i++)
    {
        if(Arr[i] == Src_Ele)
        {
            Ele_Cnt++;
        }
    }
    printf("\nCount of Element %d in Given Array is %d",Src_Ele,Ele_Cnt);
    printf("\n\nPress any Key to continue");

    getch();
    return 0;
}

