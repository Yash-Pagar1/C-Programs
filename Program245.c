#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024

int main()
{
    int fd = 0, iRet = 0, iSum = 0;
    char fname[20] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter the name of file that you want to open : \n");
    scanf("%s",fname);

    fd = open(fname, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is Open SUcessfully with FD : %d\n",fd);

        while((iRet = read(fd, Buffer, BUFFER_SIZE)) != 0)
        {
            //printf("%s",Buffer);
            //write(1,Buffer,iRet);
            //memset(Buffer,'\0',BUFFER_SIZE);
            iSum = iSum + iRet;
        }

        printf("File Size is : %d bytes\n",iSum);

        close(fd);
    }
    
    return 0;
}