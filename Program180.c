// Input : InDiA
// Output : india

#include<stdio.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + ('a' - 'A');
        }
        str++;
    }
}
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter the String : \n");
    scanf("[^'\n']s",Arr);

    strlwrx(Arr);

    printf("Updated String is : %d\n",Arr);
    
    return 0;
}