#include<stdio.h>
#include<conio.h>

int main()
{
    char ch= '\0';
    printf("\nEnter a Character to View Corresponding Message=");
    scanf("%c",&ch);
    
    switch(ch)
    {
      case 'a':
      case 'A':
                    printf("\nWelcome");
                    break;
      case 'b':
      case 'B':
                  printf("\nGood Bye");
                  break;

     case 'c':
     case 'C':
                 printf ("\nHave a Nice Day");
                 break;

     case 'd':
     case 'D':
                  printf ("\nGood Day");
                  break;
    default:
                 printf ("\nNo Message for such Character");
  
    }
    
    getch();
    return 0;
}


