#include<stdio.h>
#include<stdlib.h>

int SumOdd(int Arr[],int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iSum = iSum + Arr[iCnt];
        }
    }
    return iSum;
}

int main()
{
    int iLength = 0, icnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    //Allocate the memory
    ptr = (int *)malloc(iLength * sizeof(int));

    if(ptr == NULL)
    {
        printf("IUnable to allocate the memory\n");
        return -1;
    }

    printf("Enter the elements : \n");

    for(icnt = 0; icnt < iLength; icnt++)
    {
        scanf("%d",&ptr[icnt]);
    }

    //Use the memory
    iRet = SumOdd(ptr, iLength);

    printf("The Sum of Odd Numbers : %d\n",iRet);

    return 0;
}