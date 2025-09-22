#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    return ((iNo % 2)== 0);
}
int main()
{
    int iValue = 0;
    bool bret = false;

    printf("Enter Number to check whether its Even or Odd : \n");
    scanf("%d",&iValue);

    bret = CheckEven(iValue);

    if(bret == true)
    {
        printf("%d is Even",iValue);
    }
    else
    {
        printf("%d is an Odd",iValue);
    }
    return 0;
}