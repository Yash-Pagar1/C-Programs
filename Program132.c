#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[],int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
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
    int iLength = 0, iCnt = 0;
    int *ptr = NULL;
    bool bRet = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    //Allocate the memory
    ptr= (int *)malloc(iLength * sizeof(int));

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
    bRet = Search(ptr, iLength);

    if(bRet == true)
    {
        printf("11 is Present\n");
    }
    else
    {
        printf("11 is not present\n");
    }

    //free the memory
    free(ptr);

    return 0;
}