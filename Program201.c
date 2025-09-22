#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(char *str)
{
    char *start = NULL;
    char *end = NULL;
    bool bflag = true;

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(start < end)
    {
        if(*start != *end)
        {
            bflag = false;
            break;
        }
        start++;
        end--;
    }
    return bflag;
}
int main()
{
    char Arr[50] = {'\0'};
    bool bRet = false;

    printf("Enter the STring : \n");
    scanf("%[^'\n']s",Arr);

    bRet = CheckPallindrome(Arr);

    if(bRet == true)
    {
        printf("STring is Pallindrome\n");
    }
    else
    {
        printf("STring is not Pallindrome\n");
    }

    return 0;
}