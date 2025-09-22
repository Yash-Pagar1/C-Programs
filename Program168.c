#include<stdio.h>

int Strlenx(char *str)
{
    int iCount = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    return iCount;
}
int main()
{
    int iRet = 0;
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = Strlenx(Arr);

    printf("Number of Charecters are : %d\n",iRet);
    
    return 0;
}