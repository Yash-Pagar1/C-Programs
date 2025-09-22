#include<stdio.h>
#include<stdlib.h>

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
        printf("Unable to allocate memeory\n");
        return -1;
    }

    //Use that Memory

    printf("Enter the Elements : \n");
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Entered Elements are : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    //Free the Memory
    free(ptr);

    return 0;
}