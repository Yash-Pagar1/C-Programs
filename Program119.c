#include<stdio.h>

void Display(int *ptr, int isize)
{
    printf("The elements in the array are : \n");

    printf("%d\n",*ptr);
    ptr++;

    printf("%d\n",*ptr);
    ptr++;

    printf("%d\n",*ptr);
    ptr++;

    printf("%d\n",*ptr);
    ptr++;

    printf("%d\n",*ptr);
    ptr++;
}
int main()
{
    int Arr[5];
    int iCnt = 0;

    printf("The Elements are : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    Display(Arr,5);
    
    return 0;
}