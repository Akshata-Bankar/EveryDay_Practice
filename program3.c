#include<stdio.h>

int Addition(int iNo1,int iNo2)
{
    int iAns=0;
    iAns=iNo1+iNo2;
    return iAns;
}

int main()
{
   int iValue1=0,iValue2=0;
   int iResult=0;

    printf("Enter the number First:\n");
    scanf("%d",&iValue1);
    
    printf("Enter the number second:\n");
    scanf("%d",&iValue2);

    iResult=Addition(iValue1,iValue2);

    printf("Total addition of numbers:%d\n",iResult);


    return 0;
}