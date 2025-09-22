#include<stdio.h>
#include<stdlib.h>

int SumEven(int Arr[],int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iSum = iSum + Arr[iCnt];
        }
    }
    return iSum;
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("enter the numbe rof elements : \n");
    scanf("%d",&iLength);

    //Allocate the memory
    ptr = (int *)malloc(iLength * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -11;
    }

    printf("enter the elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    //Use the memory
    iRet = SumEven(ptr , iLength);

    printf("The Sum of Even Numbers are : %d\n",iRet);

    //Free the memory
    free(ptr);

    return 0;
}