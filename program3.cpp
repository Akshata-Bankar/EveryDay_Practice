#include<iostream>
using namespace std;

int Addition(int iNo1,int iNo2)
{
    int iAns=0;
    iAns=iNo1+iNo2;
    return iAns;

}
int main()
{
    int iValue1=0;
    int iValue2=0;
    int iResult=0;

    cout<<"Enter the first number:"<<endl;
    cin>>iValue1;

    cout<<"Enter the Second number:"<<endl;
    cin>>iValue2;

    iResult=Addition(iValue1,iValue2);

    cout<<"Addition of two numbers:"<<iResult<<endl;


    return 0;
}