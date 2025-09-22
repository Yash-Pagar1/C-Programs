/*
    Start
        Accept age from user
            If age is less than 5 then there will no ticket
            If it is in between 5 to 18 then it will be 700
            It it is in betwween 18 to 50 it will be 999
            And if it is greater than 50 then it will be 500
    Stop
*/

#include<stdio.h>
#define ERR_INVALID_AGE -1

int CalculateTicket(int Age)
{
    int iPrice = 0;

    if(Age < 0)
    {
        return ERR_INVALID_AGE;
    }
    if((Age >= 0) && (Age <= 5))
    {
        iPrice = 0;
    } 
    else if((Age > 5) && (Age <= 18))
    {
        iPrice = 700;
    }
    else if((Age > 18) && (Age <= 50))
    {
        iPrice = 999;
    }
    else if(Age > 50)
    {
        iPrice = 500;
    }
    return iPrice;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Your Age : \n");
    scanf("%d",&iValue);

    iRet = CalculateTicket(iValue);

    if(iRet == ERR_INVALID_AGE)
    {
        printf("Unable to Calculate Ticket as age is Invalid\n");
    }
    else
    {
        printf("Your Ticket Price is : %d\n",iRet);
    }
    return 0;
}