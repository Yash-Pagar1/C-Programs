#include<stdio.h>
#include<stdlib.h>

int Maximmum(int Arr[],int iSize)
{
    int iCnt = 0, iMax = 0;

    if((Arr == NULL) || (iSize <= 0))
    {
        printf("Invalid Input\n");
        return -1;
    }

   iMax = Arr[iCnt];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}
int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
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
        printf("\nEnter the Elements %d : ",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = Maximmum(iPtr, iLength);

    printf("The Maximum element in the array is : %d\n",iRet);

    free(iPtr);

    return 0;
}