#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Count 5

struct stud
{
    int Roll_No;
    char Name[60];
    long long int Mob_No;
    float Per;
};

int main()
{
    struct stud std[Count];
    int i = 0;

    printf("\nStudents Details are =>");

    for(i=0;i<Count;i++)
    {
        printf("\n\nEnter a Details for a student for Roll_No %d =>" ,i+101);
        std[i].Roll_No = i+101;

        printf("\nEnter a student Name =>");
        scanf("%s",&std[i].Name);

        printf("\nEnter a Student Mobile Number =>");
        scanf("%lld",&std[i].Mob_No);

        printf("\nEnter a student Percentage =>");
        scanf("%f",&std[i].Per);
    }

    getch();
    ///systeem("cls");

    printf("\n\nStudents Details Entered are =>");

    for(i=0;i<Count;i++)
    {
        printf("\nStudents Roll_No    = %d.",i+1);
        printf("\nStudents Name       = %s.",std[i].Name);
        printf("\nStudents Mobile No  = %lld.",std[i].Mob_No);
        printf("\n\nStudents Percentage = %f.",std[i].Per);
    }

    getch();
    return 0;

}


