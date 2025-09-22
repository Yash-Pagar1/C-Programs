#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iLength = 0;
    int *ptr = NULL;

    printf("Enter the Number of Elements : \n");
    scanf("%d",&iLength);

    
    // Step 1 : Allocate the memory
    ptr = (int *)malloc(iLength * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

     // Step 2 : Use that memory
    // Use

    // Step 3 : Free the memory 
    free(ptr);

    return 0;
}