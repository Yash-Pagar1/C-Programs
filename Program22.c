#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
    if((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bret = false;

    printf("Enter the Number to check whether it is Divisible by 5 Or not : \n");
    scanf("%d",&iValue);

    bret = CheckDivisible(iValue);

    if(bret == true)
    {
        printf("%d is Divisible by 5",iValue);
    }
    else
    {
        printf("%d is not divisible by 5",iValue);
    }
    return 0;
}