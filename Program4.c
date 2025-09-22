///////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Descreption :   Used to calculate percentage
//  Author :        Yash Sunil Pagar
//  Date :          28/04/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int Total = 0;
    int Obtained = 0;
    float Percentage = 0;

    printf("Enter the Total Marks : \n");
    scanf("%d",&Total);

    printf("Enter the Obtained Marks : \n");
    scanf("%d",&Obtained);

    Percentage = ((float) Obtained / (float) Total) * 100;

    printf("The Percentage is : %.2f%%\n",Percentage);
    
    return 0;
}