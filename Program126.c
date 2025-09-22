#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)
{
    int iCnt = 0;

    printf("Elements of the array are : \n");
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}
int main()
{
    int iLength = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter the Number of elements : \n");
    scanf("%d",&iLength);

    //Allocate the Memory

    ptr = (int *)malloc(iLength * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the Memory\n");
        return -1;
    }

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    //use that memory
    Display(ptr, iLength);

    //Free the memory
    free(ptr);
    
    return 0;
}