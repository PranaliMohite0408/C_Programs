///Write a program which accept number from user and count frequency of 2 in it.

#include<stdio.h>
int CountTwo(int iNo)
{
    int Dig = 0, Cnt =0;

    if(iNo<0)
    {
        return 0;
    }

    while(iNo>0)
    {
        Dig=iNo%10;

        if(Dig==2)
        {
            Cnt++;
        }
        iNo=iNo/10;
    }
    return Cnt;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);
    printf("%d",iRet);

    return 0;
}
