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

    printf("Enter the name of the file that you want to open : \n");
    scanf("%s",fname);

    fd = open(fname, O_RDONLY);  //Change

    if(fd == -1)
    {
        printf("Unable to Open file\n");
    }
    else
    {
        printf("File is Opened Sucessfully with FD : %d\n",fd);

        iRet = read(fd, Buffer,11);

        printf("%d bytes gets read SUcesfully\n",iRet);

        printf("Data From file is : %s\n",Buffer);

        close(fd);

    }

    return 0;
}