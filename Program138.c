#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iCount = 0;

    if((Arr == NULL) || (iSize <= 0))
    {
        return -1;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int *iPtr = NULL;
    int iLength = 0, iValue = 0, iCnt = 0, iRet = 0;

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
        printf("\nEnter the elements %d : ",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    printf("Enter the element that you wnat to find : \n");
    scanf("%d",&iValue);

    iRet = Frequency(iPtr, iLength, iValue);

    if(iRet == -1)
    {
        printf("There is issue in the input\n");
    }
    else
    {
        printf("%d is appears %d times in an array\n",iValue,iRet);
    }
    free(iPtr);
    
    return 0;
}