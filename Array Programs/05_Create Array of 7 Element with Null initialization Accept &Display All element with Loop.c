/// Create Array of 7 Element with Null initilization Accept & Display All element with Loop///


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{

    int Arr[7]={};
    int i=0;
    printf("\nEnter Array Elements \n\n");
    for(i=0;i<7;i++)
    {
        printf("\nEnter Element %d =",i+101);
        scanf("%d",&Arr[i]);
    }
    getch();
    system("cls");

    for(i=0;i<7;i++)
    {
        printf("\nValue of RollNo %d = %d",i+101,Arr[i]);
    }

    printf("\n\nPress any Key to continue");

    getch();
    return 0;
}
