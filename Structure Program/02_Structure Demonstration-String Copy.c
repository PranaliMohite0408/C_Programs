///Structure Demonstration-String Copy///

#include<stdio.h>
#include<conio.h>

struct student
{
    int RollNo;
    char Name[12];
    char City[10];
    float Per;
};
int main()
{
    struct student std;
    std.RollNo=101;
    strcpy(std.Name,"Amey Wagh");
    strcpy(std.City,"Karad");
    std.Per=87.9373;

    printf("\nStudent Information");
    printf("\n\tRollNo = %3d,  \n\tName   = %3s,  \n\tCity   = %3s  ,\n\tPer    = %3f",std.RollNo,std.Name,std.City,std.Per);

    printf("\nThanks!!");
    getch();
    return 0;
}
