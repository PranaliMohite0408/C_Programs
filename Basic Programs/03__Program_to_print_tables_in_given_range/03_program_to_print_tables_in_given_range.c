#include<stdio.h>
#include<conio.h>
int main()
{
    int RN=0, CN=0, SNo=0, ENo=0;
    printf ("\n Enter Tables Range From & to =>");
    scanf("%d%d",&SNo,&ENo);

    printf("\n Tables from %d To %d as follow=>\n\n",SNo,ENo);
    printf("\n===========================\n");


    for(RN=1;RN<=10;RN++)
     {
        if(SNo<ENo)
        {
          for(CN=SNo;CN<=ENo;CN++)
           {
              printf(" %3d ",CN*RN);
           }
        }
        else
        {
          for(CN=SNo;CN>=ENo;CN--)
          {
            printf(" %3d ",CN*RN);
          }
        }
        printf("\n");
     }
   printf("\n==========================\n");
   scanf("%d%d",&CN,&RN);
   printf("\nThanks!!!");
   getch();
   return 0;
}