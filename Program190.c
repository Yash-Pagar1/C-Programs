#include<stdio.h>

// Input : deRm2dfr
// Char : R

// Output : 2 (Correct)

// Input Demo@23@re
// Char : @

// Output : 2 (Correct)

// Case insensitive
int CharFrequency(char *str, char ch)
{
    int iCount = 0;

    while(*str != 0)
    {
        if((ch >= 'A') && (ch <= 'Z'))         //Capital
        {
            if((*str == ch) || (*str == ch + 32))
            {
                iCount++;
            }
        }
        else if((ch >= 'a') && (ch <= 'z'))     //Small
        {
            if((*str == ch) || (*str == ch + 32))
            {
                iCount++;
            }
        }
        else                                        //Digits or Symbols
        { 
            if((*str == ch) || (*str == ch + 0))      //New Part
            {
                iCount++;
            }  
        }
        str++;
    }
    return iCount;
}
int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Charecter : \n");
    scanf(" %c",&cValue);

    iRet= CharFrequency(Arr,cValue);

    printf("%c Occurs %d times\n",cValue,iRet);
    
    return 0;
}