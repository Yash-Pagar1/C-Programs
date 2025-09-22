#include<stdio.h>

void CountCapitalSmallDigits(char *str)
{
    int iCountCap = 0, iCountSmall = 0, iDigit = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCap++;
        }
        else if((*str >= '0') && (*str <= '9'))
        {
            iDigit++;
        }
        str++;
    }
    printf("Number of Capital Charecters are : %d\n",iCountCap);
    printf("Number of Small Charecters are : %d\n",iCountSmall);
    printf("Number Of Digits are : %d\n",iDigit);
}
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    CountCapitalSmallDigits(Arr);

    return 0;
}