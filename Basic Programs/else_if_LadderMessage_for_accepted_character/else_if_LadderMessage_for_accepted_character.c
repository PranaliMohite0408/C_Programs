#include<stdio.h>
#include<conio.h>

int main()
{
    char ch= '\0';
    printf("\nEnter a Character to View Corresponding Message=");
    scanf("%s",&ch);
    
    if(ch=='A' || ch=='a')
    {
       printf("\nWELCOME");
    }
    else if(ch=='B' || ch=='b')
    {
       printf("\nGOOD BYE");
    }
    else if(ch=='C' || ch=='c')
    {
       printf("\nHAVE A NICE DAY");
    }
    else if(ch=='D' || ch=='d')
    {
       printf("\nGOOD DAY");
    }
    else
    {
        printf("\nNo Mesaage for Such Character....");
    }
    
    getch();
    return 0;
}