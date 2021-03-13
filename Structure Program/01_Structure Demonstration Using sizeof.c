///Structure Demonstration Using sizeof
#include<stdio.h>
#include<conio.h>
#include<string.h>
 struct student
 {
     int Rollno;
     char Name[40];
     char City[80];
     float Per;
 };

 int main()
 {
     int Num= 21;
     struct student std1;
     printf("\nsize of Integer is %d",sizeof(Num));
     printf("\nsize of structure student object is %d",sizeof(std1));

     printf("\nThanks!!!");
     getch();
     return 0;
 }
