#include<stdio.h>
#include<string.h>

int main()
{
    int iRet = 0;
    char Arr[50] = {'\0'};

    printf("Enter STring : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlen(Arr);

    printf("Number of Charecters are : %d\n",iRet);
    
    return 0;
}