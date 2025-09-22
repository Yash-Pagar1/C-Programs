#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int fd = 0, iRet = 0;
    char fname[20] = {'\0'};
    char Buffer[50] = {'\0'};

    printf("Enter the name of file that you want to enter : \n");
    scanf("%s",fname);

    fd = open(fname, O_RDONLY);  //Change

    if(fd == -1)
    {
        printf("Unable to Open file\n");
    }
    else
    {
        printf("File is Open Sucessfully with FD : %d\n",fd);

        while((iRet = read(fd, Buffer,10)) != 0)
        {
            printf("%s\n",Buffer);
        }

        close(fd);
    }
    return 0;
}