#include<stdio.h>

void Display(int ptr[], int isize)
{
    int iCnt = 0;

    printf("Elements of the array are : \n");

    for(iCnt = 0; iCnt < isize; iCnt++)
    {
     printf("%d\n",ptr[iCnt]);
    }
}

int main()
{
    int Arr[5];
    int iCnt = 0;

    printf("Enter the Elements : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    Display(Arr, 5);
    
    return 0;
}