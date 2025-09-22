#include<stdio.h>
#include<stdlib.h>

void MaximumMinimum(int Arr[],int iSize)
{
    int iCnt = 0, iMax = 0, iMin = 0;
    
    if((Arr == NULL) || (iSize <= 0))
    {
        printf("Invalid Input\n");
    }

    iMin = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    printf("The maximum element in an array is : %d\n",iMax);
    printf("The Minimum element in an array is : %d\n",iMin);
}
int main()
{
    int iLength = 0, iCnt = 0;
    int *iPtr = NULL;

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

    MaximumMinimum(iPtr, iLength);

    free(iPtr);

    return 0;
}