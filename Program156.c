#include<stdio.h>

int Strlenx(char *str)
{
    int iCount = 0;

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
    char Arr[50];

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = Strlenx(Arr);

    printf("The Number of Charecters are : %d\n",iRet);
    
    return 0;
}