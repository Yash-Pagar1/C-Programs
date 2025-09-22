#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int fd = 0, iRet = 0;
    char fname[20] = {'\0'};
    char Buffer[] = "India is my Country";

    printf("Enter the name of the file that you want to open : \n");
    scanf("%s",fname);

    fd = open(fname, O_CREAT | O_WRONLY | O_APPEND);  //Change

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is Opened Sucessfully with FD : %d\n",fd);

        iRet = write(fd, Buffer, strlen(Buffer));

        printf("%d bytes gets written Sucessfully\n",iRet);

        close(fd);
    }
    
    return 0;
}