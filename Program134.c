#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    if((Arr == NULL) || (iSize <= 0))
    {
        return false;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int *iPtr = NULL;
    int iLength = 0, iCnt = 0, ivalue = 0;
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
        printf("\nEnter the Number %d : ",iCnt + 1);
        scanf("%d",&iPtr[iCnt]);
    }

    printf("Enter the elements that you want to find : \n");
    scanf("%d",&ivalue);

    bRet = Search(iPtr, iLength, ivalue);

    if(bRet == true)
    {
        printf("%d is present in the array\n",ivalue);
    }
    else
    {
        printf("%d is not present in the array\n",ivalue);
    }

    free(iPtr);

    return 0;
}