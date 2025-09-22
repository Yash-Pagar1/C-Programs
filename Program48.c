#include<stdio.h>

int CountDigits(int iNo)
{
    int iCnt = 0;

    while(iNo != 0)
    {
        iNo = iNo / 10;
        iCnt++;
    }
    return iCnt;
}
int main()
{
    int ivalue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&ivalue);

    iRet = CountDigits(ivalue);

    printf("The Count Of Digits are : %d\n",iRet);
    
    return 0;
}