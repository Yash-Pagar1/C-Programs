#include<stdio.h>
#include<stdbool.h>

int CheckPerfect(int iNo)
{
    int iCnt = 0, iSum = 0;

    if(iNo < 0)  //Updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
    return iSum;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = CheckPerfect(iValue);

    if(iRet == true)
    {
        printf("%d is a Perfect Number\n",iValue);
    }
    else
    {
        printf("%d is not a Perfect Number\n",iValue);
    }
    
    return 0;
}