#include<stdio.h>
#include<stdbool.h>

bool CheckCharecter(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        str++;
    }

    return(*str == ch);
}
int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Charecter : \n");
    scanf(" %c",&cValue);

    bRet = CheckCharecter(Arr, cValue);

    if(bRet == true)
    {
        printf("%c is Present in %s\n",cValue,Arr);
    }
    else
    {
        printf("%c is not Present in %s\n",cValue,Arr);
    }
    
    return 0;
}