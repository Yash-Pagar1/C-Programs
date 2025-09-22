#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[],int isize)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < isize; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    //Allocate the memory
    ptr = (int *)malloc(iLength * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    //Use the memory
    iRet = CountOdd(ptr, iLength);

    printf("Number of Odd elements are : %d\n",iRet);

    //Free the memory
    free(ptr);
    
    return 0;
}