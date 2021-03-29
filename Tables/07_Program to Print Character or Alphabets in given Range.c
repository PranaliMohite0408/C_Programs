#include<stdio.h>
#include<conio.h>

int main()
{
    char Lch = '\0', Sch = '\0', Ech = '\0';

    printf("\nEnter Starting Character=");
    scanf(" %c",&Sch);

    printf("\nEnter Ending Character=");
    scanf(" %c",&Ech);

    if(Sch<Ech)
     {
        for(Lch=Sch;Lch<=Ech;Lch++)
        {
           printf("\n%c",Lch);
        }
     }
    else
     {
        for(Lch=Sch;Lch>=Ech;Lch--)
        {
           printf("\n%c",Lch);
        }
     }
    printf("\nThanks!!!");
    getch();
    return 0;
}

