#include<stdio.h>
#define ERR_INVALID -1

int factorial(int iNo)
{
    int iCnt = 0, iFact = 1;

    if(iNo < 0)
    {
        return ERR_INVALID;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = factorial(iValue);

    if(iRet == ERR_INVALID)
    {
        printf("Invalid Input\n");
    }
    else
    {
        printf("The Factorial is : %d\n",iRet);
    }
    return 0;
}