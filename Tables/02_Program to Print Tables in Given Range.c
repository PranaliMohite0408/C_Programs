#include<stdio.h>
#include<conio.h>
int main()
{
    int RN=0, CN=0, SNo=0, ENo=0;

    printf ("\n Enter Tables From & to =>");
    scanf("%d%d",&SNo,&ENo);

    printf ("\nTables from %d To %d as follow=>\n\n",SNo,ENo);

    for(RN=1;RN<=10;RN++)
     {
        for(CN=SNo; CN<=ENo; CN++)
        {
           printf(" %3d ",CN*RN);
        }
       printf("\n");
    }

   printf("\nThanks!!!");
   getch();
   return 0;
}
