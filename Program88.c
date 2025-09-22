#include<stdio.h>

void Display()
{
    int j = 0;

    for(j = 1; j <= 3; j++)
    {
        printf("*\t");
    }

    printf("\n");

    for(j = 1; j <= 3; j++)
    {
        printf("*\t");
    }

    printf("\n");

    for(j = 1; j <= 3; j++)
    {
        printf("*\t");
    }
}
int main()
{
    Display();
    
    return 0;
}