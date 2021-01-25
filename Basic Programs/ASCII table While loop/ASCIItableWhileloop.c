#include<stdio.h>
#include<conio.h>
int main()
{
  int No=0;
  printf("In ASCII Table =>\n\n");
  while (No<128)
  {
    printf("\n\t\t%3d=%c",No,No);
    No++;
   }
  printf("\n\n thanks");
  getch();
  return 0;
}