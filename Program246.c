#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024

int main()
{
    int fd = 0, iRet = 0, iCnt = 0;
    char fname[20] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter the file name that you want to open : \n");
    scanf("%s",fname);

    fd = open(fname, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open File\n");
    }
    else
    {
        printf("File is Opened SUcessfully with FD : %d\n",fd);

        while((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
            for(iCnt = 0; iCnt < iRet; iCnt++)
            {
                printf("%c\n",Buffer[iCnt]);
            }
            memset(Buffer,'\0',BUFFER_SIZE);
        }
        close(fd);
    }
    return 0;
}
