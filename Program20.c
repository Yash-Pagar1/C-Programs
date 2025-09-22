#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    bool bResult = false;

    if((iNo % 2) == 0)
    {
        bResult = true;
    }
    else
    {
        bResult = false;
    }
    return bResult;
}
int main()
{
    int iValue = 0;
    bool bRet = 0;

    printf("Enter the number to check whether its even or odd : \n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("%d is an Even Number\n",iValue);
    }
    else
    {
        printf("%d is an odd Number\n",iValue);
    }
    return 0;
}