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

    printf("Enter the name of file that you want to open : \n");
    scanf("%s",fname);

    fd = open(fname, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to Open File\n");
    }
    else
    {
        printf("File is Opened Sucessfully with FD : %d\n",fd);

        while((iRet = read(fd,Buffer,10)) != 0)
        {
            printf("%s\n",Buffer);
            memset(Buffer,'\0',10);
        }

    close(fd);
    }

    return 0;
}