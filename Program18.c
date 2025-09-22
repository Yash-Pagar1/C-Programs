#include<stdio.h>

int Calculate(int iNo)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Frequency : \n");
    scanf("%d",&iValue);

    iRet = Calculate(iValue);
    printf("The Summation is : %d\n",iRet);
    
    return 0;
}