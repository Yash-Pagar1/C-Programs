/*
    Start
        Accept percentage from user
            If percentage is less than 0 and greater than 100
                Display as invalid input
            If percentage is greater than 0 and less than 35
                Display as fail
            If percentage is greater than 35 and less than 50
                Display as Pass class
            If percentage is greater than 50 and less than 60
                Display as second class
            If percentage is greater than 60 and less than 70
                Display as first class
            If percentage is greater than 70 and less than 100
                Display as first class with distinction
    Stop
*/

#include<stdio.h>

void DisplayResult(float fPerc)
{
    if((fPerc < 0.0) || (fPerc > 100.0))
    {
        printf("Invalid Input");
    }
    if((fPerc >= 0.0) && (fPerc < 35.0))
    {
        printf("You are Failed\n");
    }
    else if((fPerc >= 35.0) && (fPerc < 50.0))
    {
        printf("You are passed in pass Class\n");
    }
    else if((fPerc >= 50.0) && (fPerc < 60.0))
    {
        printf("You are Passed in second Class\n");
    }
    else if((fPerc >= 60.0) && (fPerc < 70.0))
    {
       printf("You are passed in first Class");
    }
    else if((fPerc >= 70.0) && (fPerc < 100.0))
    {
        printf("You are passed in First class with Distinction");
    }
}
int main()
{
    float iValue = 0.0;

    printf("Enter Your Marks : \n");
    scanf("%f",&iValue);

    DisplayResult(iValue);

    return 0;
}