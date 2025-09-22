#include<stdio.h>

int CountSpace(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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

    iRet = CountSpace(Arr);

    printf("Number Of White Spaces are : %d\n",iRet); 
    
    return 0;
}