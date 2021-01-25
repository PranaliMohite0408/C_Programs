#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int No = 0; 
    
    Up:
           printf ("\nEnter a Number To Check Whether it is Positive or Negative=>");
           scanf ("%d",&No);
           
           if(No==0)
           {
              printf ("\nYou Have Entered Zero Which is Neutral");
              printf ("\nPlease Enter a Positive Number"); 
              goto Up;
           }
           if (No>0)
           {
              printf ("\nWelcome You Have Entered a Positive Number");
           }
          else
          {
            printf ("\nWelvome You Have Entered a Negative Number");
          }
          getch();
          
           printf("\nThanks!!!");
           getch();
           return 0;
}