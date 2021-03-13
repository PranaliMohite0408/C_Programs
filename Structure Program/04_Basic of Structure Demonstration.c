///Basic of Structure Demonstration///
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
    int RollNo;
    char Name[12];
    char City[16];
    float Per;
};

int main()
{
    struct student std1,std2,std3={101,"Kavita Yadav","Satara",71.3535};

    std1.RollNo=65;
    strcpy(std1.Name,"Jayshree Mane");
    strcpy(std1.City,"Sangali");
    std1.Per=74.4744;

    printf("\nEnter RollNo=>");
    scanf("%d",&std2.RollNo);

    printf("\nEnter Name=>");
    scanf(" %[^\n]",&std2.Name);
    fflush(stdin);

    printf("\nEnter City=>");
    scanf("%[^\n]",&std2.City);
    fflush(stdin);

    printf("\nEnter Percentage=>");
    scanf("%f",&std2.Per);

    printf("\n\n\tFirst Student Details are => \n\tRollNo = %d.\n\tName = %s.\n\tCity = %s.\n\tPercentage = %f",std1.RollNo,std1.Name,std1.City,std1.Per);
    printf("\n\n\tSecond Student Details are => \n\tRollNo = %d.\n\tName = %s.\n\tCity = %s.\n\tPercentage = %f",std2.RollNo,std2.Name,std2.City,std2.Per);
    printf("\n\n\tThird Student Details are => \n\tRollNo = %d.\n\tName = %s.\n\tCity = %s.\n\tPercentage = %f",std3.RollNo,std3.Name,std3.City,std3.Per);

    getch();
    printf("\nThanks!!!");
    return 0;

}
