#include<stdio.h>

void CountCapitalSmall(char *str)
{
    int iCountCapital = 0;
    int iCountSmall = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        else
        {
            iCountCapital++;
        }
        str++;
    }
    printf("Number Of Capital Charecters are : %d\n",iCountCapital);
    printf("Number Of Small Charecters are : %d\n",iCountSmall);
}
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    CountCapitalSmall(Arr);
    
    return 0;
}