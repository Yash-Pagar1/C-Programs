#include<stdio.h>

int CountCapital(char *str)
{
    int iCount = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if((*str >= 65) && (*str <= 90))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    int iRet = 0;
    char Arr[50] = {'\0'};

    printf("Enter STring : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);

    printf("Number of Capital Charecters are : %d\n",iRet);
    
    return 0;
}