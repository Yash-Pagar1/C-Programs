#include<stdio.h>

// Input : 5
// 1 + 2 + 3 + 4 + 5

int Summation(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Summation(iValue);

    printf("The Summation is : %d\n",iRet);

    return 0;
}