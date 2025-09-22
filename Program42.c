#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bflag = true;

    if(iNo < 0)  //Updater
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            bflag = false;
            break;
        }
    }
    return bflag;
}
int main()
{
    int iValue = 0;
    bool iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = CheckPrime(iValue);

    if(iRet == true)
    {
        printf("%d is a prime Number\n",iValue);
    }
    else
    {
        printf("%d is not a Prime Number\n",iValue);
    }

    return 0;
}