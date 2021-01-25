#include<stdio.h>
#include<conio.h>
int main()
{
    int RN=0, CN=0;
    printf("\nTables From 5 to 12 =>");
    for(RN=1;RN<=10;RN++)
     {
        for(CN=5;CN<=12;CN++)
        {
           printf ("  %3d",CN*RN);
        }
       printf("\n");
    }
   scanf("%d%d",&CN,&RN);
    
   printf("\nThanks!!!");
   getch();
   return 0;
}