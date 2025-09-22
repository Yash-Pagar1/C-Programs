///////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Descreption :   Used to calculate percentage
//  Author :        Yash Sunil Pagar
//  Date :          28/04/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

float CalculatePercentage(int iTotalMarks, int iObtainedMarks)
{
    float fpercentage = 0;
    fpercentage = ((float) iObtainedMarks / (float) iTotalMarks) * 100;
    return fpercentage;
}
int main()
{
    int iTotal = 0;
    int iObtained = 0;
    float Percentage = 0.0f;

    printf("Enter the Total Marks : \n");
    scanf("%d",&iTotal);

    printf("Enter the Obtained Marks : \n");
    scanf("%d",&iObtained);

    //Percentage = ((float) iObtained / (float) iTotal)* 100;
    Percentage = CalculatePercentage(iTotal,iObtained);

    printf("The Percentage is : %.2f%%\n",Percentage);
    
    return 0;
}