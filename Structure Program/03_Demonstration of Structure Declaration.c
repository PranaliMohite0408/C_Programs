///Demonstration of Structure Declaration ///
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
   int RollNo;
   char Name[12];
   char City[16];
   float Per;
}s1={101,"Amey Mohite","Karad",99.8584};

int main()
{
    struct student std1 ={12,"Atharv Mohite","Satara",84.3532};
    printf("\nLocal Student object Details Given are=>\n\tRollNo=%d.  \n\tName=%s.  \n\tCity=%s.  \n\tPer=%f",std1.RollNo,std1.Name,std1.City,std1.Per);
    strcpy(s1.Name,"Rakesh");
    getch();

    printf("\nGlobal Student object Details Given are=>\n\tRollNo=%d.  \n\tName=%s.  \n\tCity=%s.  \n\tPer=%f",s1.RollNo,s1.Name,s1.City,s1.Per);
    getch();
    return 0;

}
