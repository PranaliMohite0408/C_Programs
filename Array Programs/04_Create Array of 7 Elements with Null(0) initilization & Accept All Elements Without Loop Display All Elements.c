///Array of 7 Elements with Null(0) initilization & Accept All Elements Without Loop Display All Elements///

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
   int Arr[7] = {};

   printf("\nAccept All Elements=>");

   printf("\nEnter the 101 Element = ");
   scanf("%d",&Arr[0]);
   printf("\nEnter the 102 Element = ");
   scanf("%d",&Arr[1]);
   printf("\nEnter the 103 Element = ");
   scanf("%d",&Arr[2]);
   printf("\nEnter the 104 Element = ");
   scanf("%d",&Arr[3]);
   printf("\nEnter the 105 Element = ");
   scanf("%d",&Arr[4]);
   printf("\nEnter the 106 Element = ");
   scanf("%d",&Arr[5]);
   printf("\nEnter the 107 Element = ");
   scanf("%d",&Arr[6]);

   getch();
   printf("\nPress Any Key to Continue");
   system("cls");

   printf("\nDisplay All the Entered Array Elements=>");

   printf("\nPrint the 101 Element = %d",Arr[0]);
   printf("\nPrint the 102 Element = %d",Arr[1]);
   printf("\nPrint the 103 Element = %d",Arr[2]);
   printf("\nPrint the 104 Element = %d",Arr[3]);
   printf("\nPrint the 105 Element = %d",Arr[4]);
   printf("\nPrint the 106 Element = %d",Arr[5]);
   printf("\nPrint the 107 Element = %d",Arr[6]);

   getch();
   return 0;
}
