#include<stdio.h>
#include<conio.h>
int main()
{
	int Num1=0,Num2=0;
	Grate:
	printf("\n Enter 2 Integer Numbers=");
	scanf("%d%d",&Num1,&Num2);
	
	if(Num1==Num2)
	{
		printf("\n Both Given Numbers are Equal, Please Enter Different Numbers to compare\n");
		goto Grate;
	}
	
	if(Num1>Num2)
	{
		printf("\n Enter %d is maximum",Num1);
	}
	else
	{
		printf("\n Number %d is maximum",Num2);
	}
	
	printf("\n Thanks");
	getch();
	return 0;
}