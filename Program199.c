#include<stdio.h>

void Strrevx(char *str)
{
    char *start = NULL;
    char *end = NULL; 
    char temp = '\0';

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    Strrevx(Arr);

    printf("String After Reversal : %s\n",Arr);

    return 0;
}
// Time Complexity O(N+N/2)