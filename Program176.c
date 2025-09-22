#include<stdio.h>

int Count(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == 'a')
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

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = Count(Arr);

    printf("Number Of a Charecters are : %d\n",iRet);

    return 0;
}