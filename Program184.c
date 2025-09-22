#include<stdio.h>

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    //Problem Solved
    printf("Enter the Charecter : \n");
    scanf(" %c",&cValue);    //Space before %c

    return 0;
}