#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    bool bflag = false;

    if((Arr == NULL) || (iSize <= 0))
    {
        return false;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bflag = true;
            break;
        }
    }
    return bflag;
}
int main()
{
    int *iPtr = NULL;
    int iLength = 0, iValue = 0, iCnt = 0;
    bool bRet = false;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));
    
    if(iPtr == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("\nEnter the Number %d : ",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    printf("enter the element that you wnat to find : \n");
    scanf("%d",&iValue);

    bRet = Search(iPtr, iLength, iValue);

    if(bRet == true)
    {
        printf("%d is present in an array\n",iValue);
    }
    else
    {
        printf("%d is not present ina n array\n",iValue);
    }

    free(iPtr);
    
    return 0;
}